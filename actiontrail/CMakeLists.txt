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

set(actiontrail_public_header 
	include/alibabacloud/actiontrail/ActiontrailClient.h
	include/alibabacloud/actiontrail/ActiontrailExport.h )

set(actiontrail_public_header_model 
	include/alibabacloud/actiontrail/model/CreateDeliveryHistoryJobRequest.h
	include/alibabacloud/actiontrail/model/CreateDeliveryHistoryJobResult.h
	include/alibabacloud/actiontrail/model/CreateTrailRequest.h
	include/alibabacloud/actiontrail/model/CreateTrailResult.h
	include/alibabacloud/actiontrail/model/DeleteDeliveryHistoryJobRequest.h
	include/alibabacloud/actiontrail/model/DeleteDeliveryHistoryJobResult.h
	include/alibabacloud/actiontrail/model/DeleteTrailRequest.h
	include/alibabacloud/actiontrail/model/DeleteTrailResult.h
	include/alibabacloud/actiontrail/model/DescribeRegionsRequest.h
	include/alibabacloud/actiontrail/model/DescribeRegionsResult.h
	include/alibabacloud/actiontrail/model/DescribeTrailsRequest.h
	include/alibabacloud/actiontrail/model/DescribeTrailsResult.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedEventsRequest.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedEventsResult.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedInfoRequest.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedInfoResult.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedIpsRequest.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedIpsResult.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedProductsRequest.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedProductsResult.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedResourcesRequest.h
	include/alibabacloud/actiontrail/model/GetAccessKeyLastUsedResourcesResult.h
	include/alibabacloud/actiontrail/model/GetDeliveryHistoryJobRequest.h
	include/alibabacloud/actiontrail/model/GetDeliveryHistoryJobResult.h
	include/alibabacloud/actiontrail/model/GetTrailStatusRequest.h
	include/alibabacloud/actiontrail/model/GetTrailStatusResult.h
	include/alibabacloud/actiontrail/model/ListDeliveryHistoryJobsRequest.h
	include/alibabacloud/actiontrail/model/ListDeliveryHistoryJobsResult.h
	include/alibabacloud/actiontrail/model/LookupEventsRequest.h
	include/alibabacloud/actiontrail/model/LookupEventsResult.h
	include/alibabacloud/actiontrail/model/StartLoggingRequest.h
	include/alibabacloud/actiontrail/model/StartLoggingResult.h
	include/alibabacloud/actiontrail/model/StopLoggingRequest.h
	include/alibabacloud/actiontrail/model/StopLoggingResult.h
	include/alibabacloud/actiontrail/model/UpdateTrailRequest.h
	include/alibabacloud/actiontrail/model/UpdateTrailResult.h )

set(actiontrail_src 
	src/ActiontrailClient.cc
	src/model/CreateDeliveryHistoryJobRequest.cc
	src/model/CreateDeliveryHistoryJobResult.cc
	src/model/CreateTrailRequest.cc
	src/model/CreateTrailResult.cc
	src/model/DeleteDeliveryHistoryJobRequest.cc
	src/model/DeleteDeliveryHistoryJobResult.cc
	src/model/DeleteTrailRequest.cc
	src/model/DeleteTrailResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeTrailsRequest.cc
	src/model/DescribeTrailsResult.cc
	src/model/GetAccessKeyLastUsedEventsRequest.cc
	src/model/GetAccessKeyLastUsedEventsResult.cc
	src/model/GetAccessKeyLastUsedInfoRequest.cc
	src/model/GetAccessKeyLastUsedInfoResult.cc
	src/model/GetAccessKeyLastUsedIpsRequest.cc
	src/model/GetAccessKeyLastUsedIpsResult.cc
	src/model/GetAccessKeyLastUsedProductsRequest.cc
	src/model/GetAccessKeyLastUsedProductsResult.cc
	src/model/GetAccessKeyLastUsedResourcesRequest.cc
	src/model/GetAccessKeyLastUsedResourcesResult.cc
	src/model/GetDeliveryHistoryJobRequest.cc
	src/model/GetDeliveryHistoryJobResult.cc
	src/model/GetTrailStatusRequest.cc
	src/model/GetTrailStatusResult.cc
	src/model/ListDeliveryHistoryJobsRequest.cc
	src/model/ListDeliveryHistoryJobsResult.cc
	src/model/LookupEventsRequest.cc
	src/model/LookupEventsResult.cc
	src/model/StartLoggingRequest.cc
	src/model/StartLoggingResult.cc
	src/model/StopLoggingRequest.cc
	src/model/StopLoggingResult.cc
	src/model/UpdateTrailRequest.cc
	src/model/UpdateTrailResult.cc )

add_library(actiontrail ${LIB_TYPE}
	${actiontrail_public_header}
	${actiontrail_public_header_model}
	${actiontrail_src})

set_target_properties(actiontrail
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}actiontrail
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(actiontrail
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ACTIONTRAIL_LIBRARY)
endif()

target_include_directories(actiontrail
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(actiontrail
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(actiontrail
		jsoncpp)
	target_include_directories(actiontrail
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(actiontrail
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(actiontrail
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(actiontrail
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(actiontrail
		jsoncpp)
endif()

install(FILES ${actiontrail_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/actiontrail)
install(FILES ${actiontrail_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/actiontrail/model)
install(TARGETS actiontrail
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)