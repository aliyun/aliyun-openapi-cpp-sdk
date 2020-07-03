#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(ivpd_public_header 
	include/alibabacloud/ivpd/IvpdClient.h
	include/alibabacloud/ivpd/IvpdExport.h )

set(ivpd_public_header_model 
	include/alibabacloud/ivpd/model/ChangeImageSizeRequest.h
	include/alibabacloud/ivpd/model/ChangeImageSizeResult.h
	include/alibabacloud/ivpd/model/CreateSegmentBodyJobRequest.h
	include/alibabacloud/ivpd/model/CreateSegmentBodyJobResult.h
	include/alibabacloud/ivpd/model/DetectImageElementsRequest.h
	include/alibabacloud/ivpd/model/DetectImageElementsResult.h
	include/alibabacloud/ivpd/model/EraseLogoInVideoRequest.h
	include/alibabacloud/ivpd/model/EraseLogoInVideoResult.h
	include/alibabacloud/ivpd/model/ExtendImageStyleRequest.h
	include/alibabacloud/ivpd/model/ExtendImageStyleResult.h
	include/alibabacloud/ivpd/model/GetAsyncResultRequest.h
	include/alibabacloud/ivpd/model/GetAsyncResultResult.h
	include/alibabacloud/ivpd/model/GetJobResultRequest.h
	include/alibabacloud/ivpd/model/GetJobResultResult.h
	include/alibabacloud/ivpd/model/GetJobStatusRequest.h
	include/alibabacloud/ivpd/model/GetJobStatusResult.h
	include/alibabacloud/ivpd/model/GetRenderResultRequest.h
	include/alibabacloud/ivpd/model/GetRenderResultResult.h
	include/alibabacloud/ivpd/model/GetUserBucketConfigRequest.h
	include/alibabacloud/ivpd/model/GetUserBucketConfigResult.h
	include/alibabacloud/ivpd/model/ListPackageDesignModelTypesRequest.h
	include/alibabacloud/ivpd/model/ListPackageDesignModelTypesResult.h
	include/alibabacloud/ivpd/model/ListUserBucketsRequest.h
	include/alibabacloud/ivpd/model/ListUserBucketsResult.h
	include/alibabacloud/ivpd/model/MakeSuperResolutionImageRequest.h
	include/alibabacloud/ivpd/model/MakeSuperResolutionImageResult.h
	include/alibabacloud/ivpd/model/PreviewModelForPackageDesignRequest.h
	include/alibabacloud/ivpd/model/PreviewModelForPackageDesignResult.h
	include/alibabacloud/ivpd/model/RecognizeImageColorRequest.h
	include/alibabacloud/ivpd/model/RecognizeImageColorResult.h
	include/alibabacloud/ivpd/model/RecognizeImageStyleRequest.h
	include/alibabacloud/ivpd/model/RecognizeImageStyleResult.h
	include/alibabacloud/ivpd/model/RecolorImageRequest.h
	include/alibabacloud/ivpd/model/RecolorImageResult.h
	include/alibabacloud/ivpd/model/RenderImageForPackageDesignRequest.h
	include/alibabacloud/ivpd/model/RenderImageForPackageDesignResult.h
	include/alibabacloud/ivpd/model/SegmentBodyRequest.h
	include/alibabacloud/ivpd/model/SegmentBodyResult.h
	include/alibabacloud/ivpd/model/SegmentImageRequest.h
	include/alibabacloud/ivpd/model/SegmentImageResult.h
	include/alibabacloud/ivpd/model/UpdateUserBucketConfigRequest.h
	include/alibabacloud/ivpd/model/UpdateUserBucketConfigResult.h )

set(ivpd_src 
	src/IvpdClient.cc
	src/model/ChangeImageSizeRequest.cc
	src/model/ChangeImageSizeResult.cc
	src/model/CreateSegmentBodyJobRequest.cc
	src/model/CreateSegmentBodyJobResult.cc
	src/model/DetectImageElementsRequest.cc
	src/model/DetectImageElementsResult.cc
	src/model/EraseLogoInVideoRequest.cc
	src/model/EraseLogoInVideoResult.cc
	src/model/ExtendImageStyleRequest.cc
	src/model/ExtendImageStyleResult.cc
	src/model/GetAsyncResultRequest.cc
	src/model/GetAsyncResultResult.cc
	src/model/GetJobResultRequest.cc
	src/model/GetJobResultResult.cc
	src/model/GetJobStatusRequest.cc
	src/model/GetJobStatusResult.cc
	src/model/GetRenderResultRequest.cc
	src/model/GetRenderResultResult.cc
	src/model/GetUserBucketConfigRequest.cc
	src/model/GetUserBucketConfigResult.cc
	src/model/ListPackageDesignModelTypesRequest.cc
	src/model/ListPackageDesignModelTypesResult.cc
	src/model/ListUserBucketsRequest.cc
	src/model/ListUserBucketsResult.cc
	src/model/MakeSuperResolutionImageRequest.cc
	src/model/MakeSuperResolutionImageResult.cc
	src/model/PreviewModelForPackageDesignRequest.cc
	src/model/PreviewModelForPackageDesignResult.cc
	src/model/RecognizeImageColorRequest.cc
	src/model/RecognizeImageColorResult.cc
	src/model/RecognizeImageStyleRequest.cc
	src/model/RecognizeImageStyleResult.cc
	src/model/RecolorImageRequest.cc
	src/model/RecolorImageResult.cc
	src/model/RenderImageForPackageDesignRequest.cc
	src/model/RenderImageForPackageDesignResult.cc
	src/model/SegmentBodyRequest.cc
	src/model/SegmentBodyResult.cc
	src/model/SegmentImageRequest.cc
	src/model/SegmentImageResult.cc
	src/model/UpdateUserBucketConfigRequest.cc
	src/model/UpdateUserBucketConfigResult.cc )

add_library(ivpd ${LIB_TYPE}
	${ivpd_public_header}
	${ivpd_public_header_model}
	${ivpd_src})

set_target_properties(ivpd
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ivpd
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ivpd
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IVPD_LIBRARY)
endif()

target_include_directories(ivpd
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ivpd
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ivpd
		jsoncpp)
	target_include_directories(ivpd
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ivpd
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ivpd
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ivpd
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ivpd
		jsoncpp)
endif()

install(FILES ${ivpd_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ivpd)
install(FILES ${ivpd_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ivpd/model)
install(TARGETS ivpd
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)