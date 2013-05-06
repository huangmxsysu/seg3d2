/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $RCSfile: itkMRASlabIdentifier.txx,v $
  Language:  C++
  Date:      $Date: 2009-01-26 21:45:50 $
  Version:   $Revision: 1.15 $

  Copyright (c) Insight Software Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef __itkMRASlabIdentifier_txx
#define __itkMRASlabIdentifier_txx

#include <algorithm>
#include <vector>
#include <queue>
#include "itkMRASlabIdentifier.h"
#include "itkImageRegionIterator.h"
#include "itkImageRegionConstIterator.h"
#include "vnl/vnl_math.h"

namespace itk
{

template<class TInputImage>
MRASlabIdentifier<TInputImage>
::MRASlabIdentifier()
{
  m_Image = 0;
  m_NumberOfSamples = 10;
  m_BackgroundMinimumThreshold = NumericTraits< ImagePixelType >::min();
  m_Tolerance = 0.0;
  // default slicing axis is z
  m_SlicingDirection = 2;
}

template<class TInputImage>
void 
MRASlabIdentifier<TInputImage>
::GenerateSlabRegions(void)
{
  // this method only works with 3D MRI image
  if (ImageType::ImageDimension != 3)
    {
    itkExceptionMacro("ERROR: This algorithm only works with 3D images.");
    }

  ImageSizeType size;
  ImageRegionType region;
  ImageIndexType index;

  region = m_Image->GetLargestPossibleRegion();  
  size = region.GetSize();
  index = region.GetIndex();
  long firstSlice = index[m_SlicingDirection];
  long lastSlice = firstSlice + size[m_SlicingDirection];
  unsigned long totalSlices = size[m_SlicingDirection];

  double sum;
  std::vector<double> avgMin(totalSlices);
  // calculate minimum intensities for each slice
  ImagePixelType pixel;
  for (int i = 0; i < 3; i++)
    {
    if (i != m_SlicingDirection)
      {
      index[i] = 0;
      }
    }

  size[m_SlicingDirection] = 1;
  region.SetSize(size);

  unsigned long count = 0;
  long currentSlice = firstSlice;
  while (currentSlice < lastSlice)
    {
    index[m_SlicingDirection] = currentSlice;
    region.SetIndex(index);

    ImageRegionConstIterator<TInputImage> iter(m_Image, region);
    iter.GoToBegin();

    std::priority_queue<ImagePixelType> mins;
    for ( unsigned int i = 0; i < m_NumberOfSamples; ++i )
      {
      mins.push( NumericTraits< ImagePixelType >::max() );
      }

    while (!iter.IsAtEnd())
      {
      pixel = iter.Get();
      if ( pixel > m_BackgroundMinimumThreshold )
        {
        if ( mins.top() > pixel )
          {
          mins.pop();
          mins.push( pixel );
          }
        }
      ++iter;
      }

    sum = 0.0;
    while ( !mins.empty() )
      {
      sum += mins.top();
      mins.pop();
      }

    avgMin[count] = sum / (double) m_NumberOfSamples;

    ++count;
    ++currentSlice;
    }

  // calculate overall average
  sum = 0.0;
  std::vector<double>::iterator am_iter = avgMin.begin();
  while (am_iter != avgMin.end())
    {
    sum += *am_iter;
    ++am_iter;
    }

  double average = sum / (double) totalSlices; 

  // determine slabs
  am_iter = avgMin.begin();

  double prevSign = *am_iter - average;
  double avgMinValue;

  ImageIndexType slabIndex;
  ImageRegionType slabRegion;
  ImageSizeType slabSize;

  long slabLength = 0;
  long slabBegin = firstSlice;
  slabSize = size;
  slabIndex = index;
  while (am_iter != avgMin.end())
    {
    avgMinValue = *am_iter;
    double sign = avgMinValue - average;
    if ( (sign * prevSign < 0 ) && ( vnl_math_abs(sign) > m_Tolerance ) )
      { 
      slabIndex[m_SlicingDirection] = slabBegin;
      slabSize[m_SlicingDirection] = slabLength;
      slabRegion.SetSize(slabSize);
      slabRegion.SetIndex(slabIndex);
      m_Slabs.push_back(slabRegion);

      prevSign = sign;
      slabBegin += slabLength;
      slabLength = 0;
      }
    am_iter++;
    slabLength++;
    }
  slabIndex[m_SlicingDirection] = slabBegin;
  slabSize[m_SlicingDirection] = slabLength;
  slabRegion.SetIndex(slabIndex);
  slabRegion.SetSize(slabSize);
  m_Slabs.push_back(slabRegion);
}


template<class TInputImage>
typename MRASlabIdentifier<TInputImage>::SlabRegionVectorType 
MRASlabIdentifier<TInputImage>
::GetSlabRegionVector(void)
{
  return m_Slabs;
}

template<class TInputImage>
void
MRASlabIdentifier<TInputImage>
::PrintSelf(std::ostream& os, Indent indent) const
{
  Superclass::PrintSelf(os,indent);
  
  if (m_Image)
    {
    os << indent << "Image: " << m_Image << std::endl;
    }
  else
    {
    os << indent << "Image: " << "(None)" << std::endl;
    }
  os << indent << "NumberOfSamples: " << m_NumberOfSamples << std::endl;
  os << indent << "SlicingDirection: " << m_SlicingDirection << std::endl;
  os << indent << "Background Pixel Minimum Intensity Threshold: " 
     << m_BackgroundMinimumThreshold << std::endl;
  os << indent << "Tolerance: " << m_Tolerance << std::endl;
}

} // end namespace itk

#endif /* __itkMRASlabIdentifier_txx */
