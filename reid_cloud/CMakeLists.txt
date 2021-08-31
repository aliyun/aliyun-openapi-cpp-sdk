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

set(reid_cloud_public_header 
	include/alibabacloud/reid_cloud/Reid_cloudClient.h
	include/alibabacloud/reid_cloud/Reid_cloudExport.h )

set(reid_cloud_public_header_model 
	include/alibabacloud/reid_cloud/model/DescribeBaseStatisticsRequest.h
	include/alibabacloud/reid_cloud/model/DescribeBaseStatisticsResult.h
	include/alibabacloud/reid_cloud/model/DescribeCameraStatisticsRequest.h
	include/alibabacloud/reid_cloud/model/DescribeCameraStatisticsResult.h
	include/alibabacloud/reid_cloud/model/DescribeCursorRequest.h
	include/alibabacloud/reid_cloud/model/DescribeCursorResult.h
	include/alibabacloud/reid_cloud/model/DescribeCustomerFlowByLocationRequest.h
	include/alibabacloud/reid_cloud/model/DescribeCustomerFlowByLocationResult.h
	include/alibabacloud/reid_cloud/model/DescribeCustomerFlowByLocationOfflineRequest.h
	include/alibabacloud/reid_cloud/model/DescribeCustomerFlowByLocationOfflineResult.h
	include/alibabacloud/reid_cloud/model/DescribeDevicesRequest.h
	include/alibabacloud/reid_cloud/model/DescribeDevicesResult.h
	include/alibabacloud/reid_cloud/model/DescribeHeatMapRequest.h
	include/alibabacloud/reid_cloud/model/DescribeHeatMapResult.h
	include/alibabacloud/reid_cloud/model/DescribeImageUrlsRequest.h
	include/alibabacloud/reid_cloud/model/DescribeImageUrlsResult.h
	include/alibabacloud/reid_cloud/model/DescribeIpcLiveAddressRequest.h
	include/alibabacloud/reid_cloud/model/DescribeIpcLiveAddressResult.h
	include/alibabacloud/reid_cloud/model/DescribeOverviewDataRequest.h
	include/alibabacloud/reid_cloud/model/DescribeOverviewDataResult.h
	include/alibabacloud/reid_cloud/model/ImportSpecialPersonnelRequest.h
	include/alibabacloud/reid_cloud/model/ImportSpecialPersonnelResult.h
	include/alibabacloud/reid_cloud/model/ListActionDataRequest.h
	include/alibabacloud/reid_cloud/model/ListActionDataResult.h
	include/alibabacloud/reid_cloud/model/ListDevicesImagesRequest.h
	include/alibabacloud/reid_cloud/model/ListDevicesImagesResult.h
	include/alibabacloud/reid_cloud/model/ListEmapRequest.h
	include/alibabacloud/reid_cloud/model/ListEmapResult.h
	include/alibabacloud/reid_cloud/model/ListLocationRequest.h
	include/alibabacloud/reid_cloud/model/ListLocationResult.h
	include/alibabacloud/reid_cloud/model/ListMaskDetectionResultsRequest.h
	include/alibabacloud/reid_cloud/model/ListMaskDetectionResultsResult.h
	include/alibabacloud/reid_cloud/model/ListPersonByImageRequest.h
	include/alibabacloud/reid_cloud/model/ListPersonByImageResult.h
	include/alibabacloud/reid_cloud/model/ListSpecialPersonnelByImageRequest.h
	include/alibabacloud/reid_cloud/model/ListSpecialPersonnelByImageResult.h
	include/alibabacloud/reid_cloud/model/ListStoreRequest.h
	include/alibabacloud/reid_cloud/model/ListStoreResult.h
	include/alibabacloud/reid_cloud/model/PullActionDataRequest.h
	include/alibabacloud/reid_cloud/model/PullActionDataResult.h )

set(reid_cloud_src 
	src/Reid_cloudClient.cc
	src/model/DescribeBaseStatisticsRequest.cc
	src/model/DescribeBaseStatisticsResult.cc
	src/model/DescribeCameraStatisticsRequest.cc
	src/model/DescribeCameraStatisticsResult.cc
	src/model/DescribeCursorRequest.cc
	src/model/DescribeCursorResult.cc
	src/model/DescribeCustomerFlowByLocationRequest.cc
	src/model/DescribeCustomerFlowByLocationResult.cc
	src/model/DescribeCustomerFlowByLocationOfflineRequest.cc
	src/model/DescribeCustomerFlowByLocationOfflineResult.cc
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
	src/model/ListSpecialPersonnelByImageRequest.cc
	src/model/ListSpecialPersonnelByImageResult.cc
	src/model/ListStoreRequest.cc
	src/model/ListStoreResult.cc
	src/model/PullActionDataRequest.cc
	src/model/PullActionDataResult.cc )

add_library(reid_cloud ${LIB_TYPE}
	${reid_cloud_public_header}
	${reid_cloud_public_header_model}
	${reid_cloud_src})

set_target_properties(reid_cloud
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}reid_cloud
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(reid_cloud
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_REID_CLOUD_LIBRARY)
endif()

target_include_directories(reid_cloud
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(reid_cloud
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(reid_cloud
		jsoncpp)
	target_include_directories(reid_cloud
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(reid_cloud
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(reid_cloud
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(reid_cloud
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(reid_cloud
		jsoncpp)
endif()

install(FILES ${reid_cloud_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/reid_cloud)
install(FILES ${reid_cloud_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/reid_cloud/model)
install(TARGETS reid_cloud
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)