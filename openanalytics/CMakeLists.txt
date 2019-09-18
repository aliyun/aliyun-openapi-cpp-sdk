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

set(openanalytics_public_header 
	include/alibabacloud/openanalytics/OpenanalyticsClient.h
	include/alibabacloud/openanalytics/OpenanalyticsExport.h )

set(openanalytics_public_header_model 
	include/alibabacloud/openanalytics/model/CloseProductAccountRequest.h
	include/alibabacloud/openanalytics/model/CloseProductAccountResult.h
	include/alibabacloud/openanalytics/model/DescribeRegionListRequest.h
	include/alibabacloud/openanalytics/model/DescribeRegionListResult.h
	include/alibabacloud/openanalytics/model/GetAllowIPRequest.h
	include/alibabacloud/openanalytics/model/GetAllowIPResult.h
	include/alibabacloud/openanalytics/model/GetEndPointByDomainRequest.h
	include/alibabacloud/openanalytics/model/GetEndPointByDomainResult.h
	include/alibabacloud/openanalytics/model/GetProductStatusRequest.h
	include/alibabacloud/openanalytics/model/GetProductStatusResult.h
	include/alibabacloud/openanalytics/model/GetRegionStatusRequest.h
	include/alibabacloud/openanalytics/model/GetRegionStatusResult.h
	include/alibabacloud/openanalytics/model/OpenProductAccountRequest.h
	include/alibabacloud/openanalytics/model/OpenProductAccountResult.h
	include/alibabacloud/openanalytics/model/QueryEndPointListRequest.h
	include/alibabacloud/openanalytics/model/QueryEndPointListResult.h
	include/alibabacloud/openanalytics/model/SetAllowIPRequest.h
	include/alibabacloud/openanalytics/model/SetAllowIPResult.h )

set(openanalytics_src 
	src/OpenanalyticsClient.cc
	src/model/CloseProductAccountRequest.cc
	src/model/CloseProductAccountResult.cc
	src/model/DescribeRegionListRequest.cc
	src/model/DescribeRegionListResult.cc
	src/model/GetAllowIPRequest.cc
	src/model/GetAllowIPResult.cc
	src/model/GetEndPointByDomainRequest.cc
	src/model/GetEndPointByDomainResult.cc
	src/model/GetProductStatusRequest.cc
	src/model/GetProductStatusResult.cc
	src/model/GetRegionStatusRequest.cc
	src/model/GetRegionStatusResult.cc
	src/model/OpenProductAccountRequest.cc
	src/model/OpenProductAccountResult.cc
	src/model/QueryEndPointListRequest.cc
	src/model/QueryEndPointListResult.cc
	src/model/SetAllowIPRequest.cc
	src/model/SetAllowIPResult.cc )

add_library(openanalytics ${LIB_TYPE}
	${openanalytics_public_header}
	${openanalytics_public_header_model}
	${openanalytics_src})

set_target_properties(openanalytics
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}openanalytics
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(openanalytics
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_OPENANALYTICS_LIBRARY)
endif()

target_include_directories(openanalytics
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(openanalytics
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(openanalytics
		jsoncpp)
	target_include_directories(openanalytics
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(openanalytics
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(openanalytics
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(openanalytics
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(openanalytics
		jsoncpp)
endif()

install(FILES ${openanalytics_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/openanalytics)
install(FILES ${openanalytics_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/openanalytics/model)
install(TARGETS openanalytics
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)