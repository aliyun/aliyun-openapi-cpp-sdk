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

set(reid_public_header 
	include/alibabacloud/reid/ReidClient.h
	include/alibabacloud/reid/ReidExport.h )

set(reid_public_header_model 
	include/alibabacloud/reid/model/DescribeBaseStatisticsRequest.h
	include/alibabacloud/reid/model/DescribeBaseStatisticsResult.h
	include/alibabacloud/reid/model/DescribeCameraStatisticsRequest.h
	include/alibabacloud/reid/model/DescribeCameraStatisticsResult.h
	include/alibabacloud/reid/model/DescribeCursorRequest.h
	include/alibabacloud/reid/model/DescribeCursorResult.h
	include/alibabacloud/reid/model/DescribeCustomerFlowByLocationRequest.h
	include/alibabacloud/reid/model/DescribeCustomerFlowByLocationResult.h
	include/alibabacloud/reid/model/DescribeDevicesRequest.h
	include/alibabacloud/reid/model/DescribeDevicesResult.h
	include/alibabacloud/reid/model/DescribeHeatMapRequest.h
	include/alibabacloud/reid/model/DescribeHeatMapResult.h
	include/alibabacloud/reid/model/DescribeImageUrlsRequest.h
	include/alibabacloud/reid/model/DescribeImageUrlsResult.h
	include/alibabacloud/reid/model/DescribeIpcLiveAddressRequest.h
	include/alibabacloud/reid/model/DescribeIpcLiveAddressResult.h
	include/alibabacloud/reid/model/DescribeOverviewDataRequest.h
	include/alibabacloud/reid/model/DescribeOverviewDataResult.h
	include/alibabacloud/reid/model/GetFootwearEventRequest.h
	include/alibabacloud/reid/model/GetFootwearEventResult.h
	include/alibabacloud/reid/model/GetFootwearPositionRequest.h
	include/alibabacloud/reid/model/GetFootwearPositionResult.h
	include/alibabacloud/reid/model/ImportSpecialPersonnelRequest.h
	include/alibabacloud/reid/model/ImportSpecialPersonnelResult.h
	include/alibabacloud/reid/model/ListActionDataRequest.h
	include/alibabacloud/reid/model/ListActionDataResult.h
	include/alibabacloud/reid/model/ListDevicesImagesRequest.h
	include/alibabacloud/reid/model/ListDevicesImagesResult.h
	include/alibabacloud/reid/model/ListEmapRequest.h
	include/alibabacloud/reid/model/ListEmapResult.h
	include/alibabacloud/reid/model/ListLocationRequest.h
	include/alibabacloud/reid/model/ListLocationResult.h
	include/alibabacloud/reid/model/ListMaskDetectionResultsRequest.h
	include/alibabacloud/reid/model/ListMaskDetectionResultsResult.h
	include/alibabacloud/reid/model/ListPersonByImageRequest.h
	include/alibabacloud/reid/model/ListPersonByImageResult.h
	include/alibabacloud/reid/model/ListStoreRequest.h
	include/alibabacloud/reid/model/ListStoreResult.h
	include/alibabacloud/reid/model/PullActionDataRequest.h
	include/alibabacloud/reid/model/PullActionDataResult.h
	include/alibabacloud/reid/model/PullTakeShoesEventRequest.h
	include/alibabacloud/reid/model/PullTakeShoesEventResult.h
	include/alibabacloud/reid/model/PullTryOnShoesEventRequest.h
	include/alibabacloud/reid/model/PullTryOnShoesEventResult.h )

set(reid_src 
	src/ReidClient.cc
	src/model/DescribeBaseStatisticsRequest.cc
	src/model/DescribeBaseStatisticsResult.cc
	src/model/DescribeCameraStatisticsRequest.cc
	src/model/DescribeCameraStatisticsResult.cc
	src/model/DescribeCursorRequest.cc
	src/model/DescribeCursorResult.cc
	src/model/DescribeCustomerFlowByLocationRequest.cc
	src/model/DescribeCustomerFlowByLocationResult.cc
	src/model/DescribeDevicesRequest.cc
	src/model/DescribeDevicesResult.cc
	src/model/DescribeHeatMapRequest.cc
	src/model/DescribeHeatMapResult.cc
	src/model/DescribeImageUrlsRequest.cc
	src/model/DescribeImageUrlsResult.cc
	src/model/DescribeIpcLiveAddressRequest.cc
	src/model/DescribeIpcLiveAddressResult.cc
	src/model/DescribeOverviewDataRequest.cc
	src/model/DescribeOverviewDataResult.cc
	src/model/GetFootwearEventRequest.cc
	src/model/GetFootwearEventResult.cc
	src/model/GetFootwearPositionRequest.cc
	src/model/GetFootwearPositionResult.cc
	src/model/ImportSpecialPersonnelRequest.cc
	src/model/ImportSpecialPersonnelResult.cc
	src/model/ListActionDataRequest.cc
	src/model/ListActionDataResult.cc
	src/model/ListDevicesImagesRequest.cc
	src/model/ListDevicesImagesResult.cc
	src/model/ListEmapRequest.cc
	src/model/ListEmapResult.cc
	src/model/ListLocationRequest.cc
	src/model/ListLocationResult.cc
	src/model/ListMaskDetectionResultsRequest.cc
	src/model/ListMaskDetectionResultsResult.cc
	src/model/ListPersonByImageRequest.cc
	src/model/ListPersonByImageResult.cc
	src/model/ListStoreRequest.cc
	src/model/ListStoreResult.cc
	src/model/PullActionDataRequest.cc
	src/model/PullActionDataResult.cc
	src/model/PullTakeShoesEventRequest.cc
	src/model/PullTakeShoesEventResult.cc
	src/model/PullTryOnShoesEventRequest.cc
	src/model/PullTryOnShoesEventResult.cc )

add_library(reid ${LIB_TYPE}
	${reid_public_header}
	${reid_public_header_model}
	${reid_src})

set_target_properties(reid
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}reid
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(reid
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_REID_LIBRARY)
endif()

target_include_directories(reid
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(reid
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(reid
		jsoncpp)
	target_include_directories(reid
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(reid
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(reid
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(reid
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(reid
		jsoncpp)
endif()

install(FILES ${reid_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/reid)
install(FILES ${reid_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/reid/model)
install(TARGETS reid
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)