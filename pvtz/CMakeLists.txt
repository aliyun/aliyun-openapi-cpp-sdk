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

set(pvtz_public_header 
	include/alibabacloud/pvtz/PvtzClient.h
	include/alibabacloud/pvtz/PvtzExport.h )

set(pvtz_public_header_model 
	include/alibabacloud/pvtz/model/AddZoneRequest.h
	include/alibabacloud/pvtz/model/AddZoneResult.h
	include/alibabacloud/pvtz/model/AddZoneRecordRequest.h
	include/alibabacloud/pvtz/model/AddZoneRecordResult.h
	include/alibabacloud/pvtz/model/BindZoneVpcRequest.h
	include/alibabacloud/pvtz/model/BindZoneVpcResult.h
	include/alibabacloud/pvtz/model/CheckZoneNameRequest.h
	include/alibabacloud/pvtz/model/CheckZoneNameResult.h
	include/alibabacloud/pvtz/model/DeleteZoneRequest.h
	include/alibabacloud/pvtz/model/DeleteZoneResult.h
	include/alibabacloud/pvtz/model/DeleteZoneRecordRequest.h
	include/alibabacloud/pvtz/model/DeleteZoneRecordResult.h
	include/alibabacloud/pvtz/model/DescribeChangeLogsRequest.h
	include/alibabacloud/pvtz/model/DescribeChangeLogsResult.h
	include/alibabacloud/pvtz/model/DescribeRegionsRequest.h
	include/alibabacloud/pvtz/model/DescribeRegionsResult.h
	include/alibabacloud/pvtz/model/DescribeRequestGraphRequest.h
	include/alibabacloud/pvtz/model/DescribeRequestGraphResult.h
	include/alibabacloud/pvtz/model/DescribeStatisticSummaryRequest.h
	include/alibabacloud/pvtz/model/DescribeStatisticSummaryResult.h
	include/alibabacloud/pvtz/model/DescribeUserServiceStatusRequest.h
	include/alibabacloud/pvtz/model/DescribeUserServiceStatusResult.h
	include/alibabacloud/pvtz/model/DescribeZoneInfoRequest.h
	include/alibabacloud/pvtz/model/DescribeZoneInfoResult.h
	include/alibabacloud/pvtz/model/DescribeZoneRecordsRequest.h
	include/alibabacloud/pvtz/model/DescribeZoneRecordsResult.h
	include/alibabacloud/pvtz/model/DescribeZoneVpcTreeRequest.h
	include/alibabacloud/pvtz/model/DescribeZoneVpcTreeResult.h
	include/alibabacloud/pvtz/model/DescribeZonesRequest.h
	include/alibabacloud/pvtz/model/DescribeZonesResult.h
	include/alibabacloud/pvtz/model/SetProxyPatternRequest.h
	include/alibabacloud/pvtz/model/SetProxyPatternResult.h
	include/alibabacloud/pvtz/model/SetZoneRecordStatusRequest.h
	include/alibabacloud/pvtz/model/SetZoneRecordStatusResult.h
	include/alibabacloud/pvtz/model/UpdateRecordRemarkRequest.h
	include/alibabacloud/pvtz/model/UpdateRecordRemarkResult.h
	include/alibabacloud/pvtz/model/UpdateZoneRecordRequest.h
	include/alibabacloud/pvtz/model/UpdateZoneRecordResult.h
	include/alibabacloud/pvtz/model/UpdateZoneRemarkRequest.h
	include/alibabacloud/pvtz/model/UpdateZoneRemarkResult.h )

set(pvtz_src 
	src/PvtzClient.cc
	src/model/AddZoneRequest.cc
	src/model/AddZoneResult.cc
	src/model/AddZoneRecordRequest.cc
	src/model/AddZoneRecordResult.cc
	src/model/BindZoneVpcRequest.cc
	src/model/BindZoneVpcResult.cc
	src/model/CheckZoneNameRequest.cc
	src/model/CheckZoneNameResult.cc
	src/model/DeleteZoneRequest.cc
	src/model/DeleteZoneResult.cc
	src/model/DeleteZoneRecordRequest.cc
	src/model/DeleteZoneRecordResult.cc
	src/model/DescribeChangeLogsRequest.cc
	src/model/DescribeChangeLogsResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeRequestGraphRequest.cc
	src/model/DescribeRequestGraphResult.cc
	src/model/DescribeStatisticSummaryRequest.cc
	src/model/DescribeStatisticSummaryResult.cc
	src/model/DescribeUserServiceStatusRequest.cc
	src/model/DescribeUserServiceStatusResult.cc
	src/model/DescribeZoneInfoRequest.cc
	src/model/DescribeZoneInfoResult.cc
	src/model/DescribeZoneRecordsRequest.cc
	src/model/DescribeZoneRecordsResult.cc
	src/model/DescribeZoneVpcTreeRequest.cc
	src/model/DescribeZoneVpcTreeResult.cc
	src/model/DescribeZonesRequest.cc
	src/model/DescribeZonesResult.cc
	src/model/SetProxyPatternRequest.cc
	src/model/SetProxyPatternResult.cc
	src/model/SetZoneRecordStatusRequest.cc
	src/model/SetZoneRecordStatusResult.cc
	src/model/UpdateRecordRemarkRequest.cc
	src/model/UpdateRecordRemarkResult.cc
	src/model/UpdateZoneRecordRequest.cc
	src/model/UpdateZoneRecordResult.cc
	src/model/UpdateZoneRemarkRequest.cc
	src/model/UpdateZoneRemarkResult.cc )

add_library(pvtz ${LIB_TYPE}
	${pvtz_public_header}
	${pvtz_public_header_model}
	${pvtz_src})

set_target_properties(pvtz
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}pvtz
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(pvtz
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_PVTZ_LIBRARY)
endif()

target_include_directories(pvtz
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(pvtz
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(pvtz
		jsoncpp)
	target_include_directories(pvtz
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(pvtz
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(pvtz
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(pvtz
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(pvtz
		jsoncpp)
endif()

install(FILES ${pvtz_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/pvtz)
install(FILES ${pvtz_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/pvtz/model)
install(TARGETS pvtz
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)