WRAP_CLASS("itk::SignedMaurerDistanceMapImageFilter" POINTER)
  WRAP_IMAGE_FILTER_SIGN_INT(2)
  WRAP_IMAGE_FILTER_REAL(2)
  WRAP_IMAGE_FILTER_COMBINATIONS("${WRAP_ITK_USIGN_INT}" "${WRAP_ITK_REAL}")
END_WRAP_CLASS()