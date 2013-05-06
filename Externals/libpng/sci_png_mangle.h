#ifndef sci_png_mangle_h
#define sci_png_mangle_h

/*

This header file mangles all symbols exported from the sci_png library.
It is included in all files while building the sci_png library.  Due to
namespace pollution, no sci_png headers should be included in .h files.

The following command was used on Linux to obtain the symbol list:

nm libitkpng.a |grep " [TR] "

*/

#define png_64bit_product sci_png_64bit_product
#define png_access_version_number sci_png_access_version_number
#define png_calculate_crc sci_png_calculate_crc
#define png_check_cHRM_fixed sci_png_check_cHRM_fixed
#define png_check_sig sci_png_check_sig
#define png_convert_to_rfc1123 sci_png_convert_to_rfc1123
#define png_create_info_struct sci_png_create_info_struct
#define png_data_freer sci_png_data_freer
#define png_destroy_info_struct sci_png_destroy_info_struct
#define png_free_data sci_png_free_data
#define png_get_copyright sci_png_get_copyright
#define png_get_header_ver sci_png_get_header_ver
#define png_get_header_version sci_png_get_header_version
#define png_get_io_ptr sci_png_get_io_ptr
#define png_get_libpng_ver sci_png_get_libpng_ver
#define png_handle_as_unknown sci_png_handle_as_unknown
#define png_info_destroy sci_png_info_destroy
#define png_info_init sci_png_info_init
#define png_info_init_3 sci_png_info_init_3
#define png_init_io sci_png_init_io
#define png_libpng_ver sci_png_libpng_ver
#define png_mmx_support sci_png_mmx_support
#define png_pass_dsp_mask sci_png_pass_dsp_mask
#define png_pass_inc sci_png_pass_inc
#define png_pass_mask sci_png_pass_mask
#define png_pass_start sci_png_pass_start
#define png_pass_yinc sci_png_pass_yinc
#define png_pass_ystart sci_png_pass_ystart
#define png_reset_crc sci_png_reset_crc
#define png_reset_zstream sci_png_reset_zstream
#define png_set_sig_bytes sci_png_set_sig_bytes
#define png_sig sci_png_sig
#define png_sig_cmp sci_png_sig_cmp
#define png_zalloc sci_png_zalloc
#define png_zfree sci_png_zfree
#define png_chunk_error sci_png_chunk_error
#define png_chunk_warning sci_png_chunk_warning
#define png_error sci_png_error
#define png_get_error_ptr sci_png_get_error_ptr
#define png_set_error_fn sci_png_set_error_fn
#define png_set_strip_error_numbers sci_png_set_strip_error_numbers
#define png_warning sci_png_warning
#define png_get_IHDR sci_png_get_IHDR
#define png_get_PLTE sci_png_get_PLTE
#define png_get_asm_flagmask sci_png_get_asm_flagmask
#define png_get_asm_flags sci_png_get_asm_flags
#define png_get_bKGD sci_png_get_bKGD
#define png_get_bit_depth sci_png_get_bit_depth
#define png_get_cHRM sci_png_get_cHRM
#define png_get_cHRM_fixed sci_png_get_cHRM_fixed
#define png_get_channels sci_png_get_channels
#define png_get_color_type sci_png_get_color_type
#define png_get_compression_buffer_size sci_png_get_compression_buffer_size
#define png_get_compression_type sci_png_get_compression_type
#define png_get_filter_type sci_png_get_filter_type
#define png_get_gAMA sci_png_get_gAMA
#define png_get_gAMA_fixed sci_png_get_gAMA_fixed
#define png_get_hIST sci_png_get_hIST
#define png_get_iCCP sci_png_get_iCCP
#define png_get_image_height sci_png_get_image_height
#define png_get_image_width sci_png_get_image_width
#define png_get_interlace_type sci_png_get_interlace_type
#define png_get_mmx_bitdepth_threshold sci_png_get_mmx_bitdepth_threshold
#define png_get_mmx_flagmask sci_png_get_mmx_flagmask
#define png_get_mmx_rowbytes_threshold sci_png_get_mmx_rowbytes_threshold
#define png_get_oFFs sci_png_get_oFFs
#define png_get_pCAL sci_png_get_pCAL
#define png_get_pHYs sci_png_get_pHYs
#define png_get_pixel_aspect_ratio sci_png_get_pixel_aspect_ratio
#define png_get_pixels_per_meter sci_png_get_pixels_per_meter
#define png_get_rgb_to_gray_status sci_png_get_rgb_to_gray_status
#define png_get_rowbytes sci_png_get_rowbytes
#define png_get_rows sci_png_get_rows
#define png_get_sBIT sci_png_get_sBIT
#define png_get_sCAL sci_png_get_sCAL
#define png_get_sPLT sci_png_get_sPLT
#define png_get_sRGB sci_png_get_sRGB
#define png_get_signature sci_png_get_signature
#define png_get_tIME sci_png_get_tIME
#define png_get_tRNS sci_png_get_tRNS
#define png_get_text sci_png_get_text
#define png_get_unknown_chunks sci_png_get_unknown_chunks
#define png_get_user_chunk_ptr sci_png_get_user_chunk_ptr
#define png_get_user_height_max sci_png_get_user_height_max
#define png_get_user_width_max sci_png_get_user_width_max
#define png_get_valid sci_png_get_valid
#define png_get_x_offset_microns sci_png_get_x_offset_microns
#define png_get_x_offset_pixels sci_png_get_x_offset_pixels
#define png_get_x_pixels_per_meter sci_png_get_x_pixels_per_meter
#define png_get_y_offset_microns sci_png_get_y_offset_microns
#define png_get_y_offset_pixels sci_png_get_y_offset_pixels
#define png_get_y_pixels_per_meter sci_png_get_y_pixels_per_meter
#define png_create_struct sci_png_create_struct
#define png_create_struct_2 sci_png_create_struct_2
#define png_destroy_struct sci_png_destroy_struct
#define png_destroy_struct_2 sci_png_destroy_struct_2
#define png_free sci_png_free
#define png_free_default sci_png_free_default
#define png_get_mem_ptr sci_png_get_mem_ptr
#define png_malloc sci_png_malloc
#define png_malloc_default sci_png_malloc_default
#define png_malloc_warn sci_png_malloc_warn
#define png_memcpy_check sci_png_memcpy_check
#define png_memset_check sci_png_memset_check
#define png_set_mem_fn sci_png_set_mem_fn
#define png_get_progressive_ptr sci_png_get_progressive_ptr
#define png_process_IDAT_data sci_png_process_IDAT_data
#define png_process_data sci_png_process_data
#define png_process_some_data sci_png_process_some_data
#define png_progressive_combine_row sci_png_progressive_combine_row
#define png_push_crc_finish sci_png_push_crc_finish
#define png_push_crc_skip sci_png_push_crc_skip
#define png_push_fill_buffer sci_png_push_fill_buffer
#define png_push_handle_tEXt sci_png_push_handle_tEXt
#define png_push_handle_unknown sci_png_push_handle_unknown
#define png_push_handle_zTXt sci_png_push_handle_zTXt
#define png_push_have_end sci_png_push_have_end
#define png_push_have_info sci_png_push_have_info
#define png_push_have_row sci_png_push_have_row
#define png_push_process_row sci_png_push_process_row
#define png_push_read_IDAT sci_png_push_read_IDAT
#define png_push_read_chunk sci_png_push_read_chunk
#define png_push_read_sig sci_png_push_read_sig
#define png_push_read_tEXt sci_png_push_read_tEXt
#define png_push_read_zTXt sci_png_push_read_zTXt
#define png_push_restore_buffer sci_png_push_restore_buffer
#define png_push_save_buffer sci_png_push_save_buffer
#define png_read_push_finish_row sci_png_read_push_finish_row
#define png_set_progressive_read_fn sci_png_set_progressive_read_fn
#define png_create_read_struct sci_png_create_read_struct
#define png_create_read_struct_2 sci_png_create_read_struct_2
#define png_destroy_read_struct sci_png_destroy_read_struct
#define png_read_destroy sci_png_read_destroy
#define png_read_end sci_png_read_end
#define png_read_image sci_png_read_image
#define png_read_info sci_png_read_info
#define png_read_init sci_png_read_init
#define png_read_init_2 sci_png_read_init_2
#define png_read_init_3 sci_png_read_init_3
#define png_read_png sci_png_read_png
#define png_read_row sci_png_read_row
#define png_read_rows sci_png_read_rows
#define png_read_update_info sci_png_read_update_info
#define png_set_read_status_fn sci_png_set_read_status_fn
#define png_start_read_image sci_png_start_read_image
#define png_default_read_data sci_png_default_read_data
#define png_read_data sci_png_read_data
#define png_set_read_fn sci_png_set_read_fn
#define png_build_gamma_table sci_png_build_gamma_table
#define png_build_grayscale_palette sci_png_build_grayscale_palette
#define png_do_background sci_png_do_background
#define png_do_chop sci_png_do_chop
#define png_do_dither sci_png_do_dither
#define png_do_expand sci_png_do_expand
#define png_do_expand_palette sci_png_do_expand_palette
#define png_do_gamma sci_png_do_gamma
#define png_do_gray_to_rgb sci_png_do_gray_to_rgb
#define png_do_read_filler sci_png_do_read_filler
#define png_do_read_intrapixel sci_png_do_read_intrapixel
#define png_do_read_invert_alpha sci_png_do_read_invert_alpha
#define png_do_read_swap_alpha sci_png_do_read_swap_alpha
#define png_do_read_transformations sci_png_do_read_transformations
#define png_do_rgb_to_gray sci_png_do_rgb_to_gray
#define png_do_unpack sci_png_do_unpack
#define png_do_unshift sci_png_do_unshift
#define png_init_read_transformations sci_png_init_read_transformations
#define png_read_transform_info sci_png_read_transform_info
#define png_set_background sci_png_set_background
#define png_set_crc_action sci_png_set_crc_action
#define png_set_dither sci_png_set_dither
#define png_set_expand sci_png_set_expand
#define png_set_expand_gray_1_2_4_to_8 sci_png_set_expand_gray_1_2_4_to_8
#define png_set_gamma sci_png_set_gamma
#define png_set_gray_1_2_4_to_8 sci_png_set_gray_1_2_4_to_8
#define png_set_gray_to_rgb sci_png_set_gray_to_rgb
#define png_set_palette_to_rgb sci_png_set_palette_to_rgb
#define png_set_read_user_transform_fn sci_png_set_read_user_transform_fn
#define png_set_rgb_to_gray sci_png_set_rgb_to_gray
#define png_set_rgb_to_gray_fixed sci_png_set_rgb_to_gray_fixed
#define png_set_strip_16 sci_png_set_strip_16
#define png_set_strip_alpha sci_png_set_strip_alpha
#define png_set_tRNS_to_alpha sci_png_set_tRNS_to_alpha
#define png_check_chunk_name sci_png_check_chunk_name
#define png_combine_row sci_png_combine_row
#define png_crc_error sci_png_crc_error
#define png_crc_finish sci_png_crc_finish
#define png_crc_read sci_png_crc_read
#define png_decompress_chunk sci_png_decompress_chunk
#define png_do_read_interlace sci_png_do_read_interlace
#define png_get_int_32 sci_png_get_int_32
#define png_get_uint_16 sci_png_get_uint_16
#define png_get_uint_31 sci_png_get_uint_31
#define png_get_uint_32 sci_png_get_uint_32
#define png_handle_IEND sci_png_handle_IEND
#define png_handle_IHDR sci_png_handle_IHDR
#define png_handle_PLTE sci_png_handle_PLTE
#define png_handle_bKGD sci_png_handle_bKGD
#define png_handle_cHRM sci_png_handle_cHRM
#define png_handle_gAMA sci_png_handle_gAMA
#define png_handle_hIST sci_png_handle_hIST
#define png_handle_iCCP sci_png_handle_iCCP
#define png_handle_oFFs sci_png_handle_oFFs
#define png_handle_pCAL sci_png_handle_pCAL
#define png_handle_pHYs sci_png_handle_pHYs
#define png_handle_sBIT sci_png_handle_sBIT
#define png_handle_sCAL sci_png_handle_sCAL
#define png_handle_sPLT sci_png_handle_sPLT
#define png_handle_sRGB sci_png_handle_sRGB
#define png_handle_tEXt sci_png_handle_tEXt
#define png_handle_tIME sci_png_handle_tIME
#define png_handle_tRNS sci_png_handle_tRNS
#define png_handle_unknown sci_png_handle_unknown
#define png_handle_zTXt sci_png_handle_zTXt
#define png_read_chunk_header sci_png_read_chunk_header
#define png_read_filter_row sci_png_read_filter_row
#define png_read_finish_row sci_png_read_finish_row
#define png_read_start_row sci_png_read_start_row
#define png_permit_empty_plte sci_png_permit_empty_plte
#define png_permit_mng_features sci_png_permit_mng_features
#define png_set_IHDR sci_png_set_IHDR
#define png_set_PLTE sci_png_set_PLTE
#define png_set_asm_flags sci_png_set_asm_flags
#define png_set_bKGD sci_png_set_bKGD
#define png_set_cHRM sci_png_set_cHRM
#define png_set_cHRM_fixed sci_png_set_cHRM_fixed
#define png_set_compression_buffer_size sci_png_set_compression_buffer_size
#define png_set_gAMA sci_png_set_gAMA
#define png_set_gAMA_fixed sci_png_set_gAMA_fixed
#define png_set_hIST sci_png_set_hIST
#define png_set_iCCP sci_png_set_iCCP
#define png_set_invalid sci_png_set_invalid
#define png_set_keep_unknown_chunks sci_png_set_keep_unknown_chunks
#define png_set_mmx_thresholds sci_png_set_mmx_thresholds
#define png_set_oFFs sci_png_set_oFFs
#define png_set_pCAL sci_png_set_pCAL
#define png_set_pHYs sci_png_set_pHYs
#define png_set_read_user_chunk_fn sci_png_set_read_user_chunk_fn
#define png_set_rows sci_png_set_rows
#define png_set_sBIT sci_png_set_sBIT
#define png_set_sCAL sci_png_set_sCAL
#define png_set_sPLT sci_png_set_sPLT
#define png_set_sRGB sci_png_set_sRGB
#define png_set_sRGB_gAMA_and_cHRM sci_png_set_sRGB_gAMA_and_cHRM
#define png_set_tIME sci_png_set_tIME
#define png_set_tRNS sci_png_set_tRNS
#define png_set_text sci_png_set_text
#define png_set_text_2 sci_png_set_text_2
#define png_set_unknown_chunk_location sci_png_set_unknown_chunk_location
#define png_set_unknown_chunks sci_png_set_unknown_chunks
#define png_set_user_limits sci_png_set_user_limits
#define png_do_bgr sci_png_do_bgr
#define png_do_invert sci_png_do_invert
#define png_do_packswap sci_png_do_packswap
#define png_do_strip_filler sci_png_do_strip_filler
#define png_do_swap sci_png_do_swap
#define png_get_user_transform_ptr sci_png_get_user_transform_ptr
#define png_set_add_alpha sci_png_set_add_alpha
#define png_set_bgr sci_png_set_bgr
#define png_set_filler sci_png_set_filler
#define png_set_interlace_handling sci_png_set_interlace_handling
#define png_set_invert_alpha sci_png_set_invert_alpha
#define png_set_invert_mono sci_png_set_invert_mono
#define png_set_packing sci_png_set_packing
#define png_set_packswap sci_png_set_packswap
#define png_set_shift sci_png_set_shift
#define png_set_swap sci_png_set_swap
#define png_set_swap_alpha sci_png_set_swap_alpha
#define png_set_user_transform_info sci_png_set_user_transform_info
#define png_default_flush sci_png_default_flush
#define png_default_write_data sci_png_default_write_data
#define png_flush sci_png_flush
#define png_set_write_fn sci_png_set_write_fn
#define png_write_data sci_png_write_data
#define png_convert_from_struct_tm sci_png_convert_from_struct_tm
#define png_convert_from_time_t sci_png_convert_from_time_t
#define png_create_write_struct sci_png_create_write_struct
#define png_create_write_struct_2 sci_png_create_write_struct_2
#define png_destroy_write_struct sci_png_destroy_write_struct
#define png_set_compression_level sci_png_set_compression_level
#define png_set_compression_mem_level sci_png_set_compression_mem_level
#define png_set_compression_method sci_png_set_compression_method
#define png_set_compression_strategy sci_png_set_compression_strategy
#define png_set_compression_window_bits sci_png_set_compression_window_bits
#define png_set_filter sci_png_set_filter
#define png_set_filter_heuristics sci_png_set_filter_heuristics
#define png_set_flush sci_png_set_flush
#define png_set_write_status_fn sci_png_set_write_status_fn
#define png_set_write_user_transform_fn sci_png_set_write_user_transform_fn
#define png_write_destroy sci_png_write_destroy
#define png_write_end sci_png_write_end
#define png_write_flush sci_png_write_flush
#define png_write_image sci_png_write_image
#define png_write_info sci_png_write_info
#define png_write_info_before_PLTE sci_png_write_info_before_PLTE
#define png_write_init sci_png_write_init
#define png_write_init_2 sci_png_write_init_2
#define png_write_init_3 sci_png_write_init_3
#define png_write_png sci_png_write_png
#define png_write_row sci_png_write_row
#define png_write_rows sci_png_write_rows
#define png_do_pack sci_png_do_pack
#define png_do_shift sci_png_do_shift
#define png_do_write_intrapixel sci_png_do_write_intrapixel
#define png_do_write_invert_alpha sci_png_do_write_invert_alpha
#define png_do_write_swap_alpha sci_png_do_write_swap_alpha
#define png_do_write_transformations sci_png_do_write_transformations
#define png_check_keyword sci_png_check_keyword
#define png_do_write_interlace sci_png_do_write_interlace
#define png_save_int_32 sci_png_save_int_32
#define png_save_uint_16 sci_png_save_uint_16
#define png_save_uint_32 sci_png_save_uint_32
#define png_write_IDAT sci_png_write_IDAT
#define png_write_IEND sci_png_write_IEND
#define png_write_IHDR sci_png_write_IHDR
#define png_write_PLTE sci_png_write_PLTE
#define png_write_bKGD sci_png_write_bKGD
#define png_write_cHRM sci_png_write_cHRM
#define png_write_cHRM_fixed sci_png_write_cHRM_fixed
#define png_write_chunk sci_png_write_chunk
#define png_write_chunk_data sci_png_write_chunk_data
#define png_write_chunk_end sci_png_write_chunk_end
#define png_write_chunk_start sci_png_write_chunk_start
#define png_write_filtered_row sci_png_write_filtered_row
#define png_write_find_filter sci_png_write_find_filter
#define png_write_finish_row sci_png_write_finish_row
#define png_write_gAMA sci_png_write_gAMA
#define png_write_gAMA_fixed sci_png_write_gAMA_fixed
#define png_write_hIST sci_png_write_hIST
#define png_write_iCCP sci_png_write_iCCP
#define png_write_oFFs sci_png_write_oFFs
#define png_write_pCAL sci_png_write_pCAL
#define png_write_pHYs sci_png_write_pHYs
#define png_write_sBIT sci_png_write_sBIT
#define png_write_sCAL sci_png_write_sCAL
#define png_write_sPLT sci_png_write_sPLT
#define png_write_sRGB sci_png_write_sRGB
#define png_write_sig sci_png_write_sig
#define png_write_start_row sci_png_write_start_row
#define png_write_tEXt sci_png_write_tEXt
#define png_write_tIME sci_png_write_tIME
#define png_write_tRNS sci_png_write_tRNS
#define png_write_zTXt sci_png_write_zTXt

#endif
