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

set(httpdns_public_header 
	include/alibabacloud/httpdns/HttpdnsClient.h
	include/alibabacloud/httpdns/HttpdnsExport.h )

set(httpdns_public_header_model 
	include/alibabacloud/httpdns/model/AddDomainRequest.h
	include/alibabacloud/httpdns/model/AddDomainResult.h
	include/alibabacloud/httpdns/model/DeleteDomainRequest.h
	include/alibabacloud/httpdns/model/DeleteDomainResult.h
	include/alibabacloud/httpdns/model/DescribeDomainsRequest.h
	include/alibabacloud/httpdns/model/DescribeDomainsResult.h
	include/alibabacloud/httpdns/model/GetAccountInfoRequest.h
	include/alibabacloud/httpdns/model/GetAccountInfoResult.h
	include/alibabacloud/httpdns/model/GetResolveCountSummaryRequest.h
	include/alibabacloud/httpdns/model/GetResolveCountSummaryResult.h
	include/alibabacloud/httpdns/model/GetResolveStatisticsRequest.h
	include/alibabacloud/httpdns/model/GetResolveStatisticsResult.h
	include/alibabacloud/httpdns/model/ListDomainsRequest.h
	include/alibabacloud/httpdns/model/ListDomainsResult.h )

set(httpdns_src 
	src/HttpdnsClient.cc
	src/model/AddDomainRequest.cc
	src/model/AddDomainResult.cc
	src/model/DeleteDomainRequest.cc
	src/model/DeleteDomainResult.cc
	src/model/DescribeDomainsRequest.cc
	src/model/DescribeDomainsResult.cc
	src/model/GetAccountInfoRequest.cc
	src/model/GetAccountInfoResult.cc
	src/model/GetResolveCountSummaryRequest.cc
	src/model/GetResolveCountSummaryResult.cc
	src/model/GetResolveStatisticsRequest.cc
	src/model/GetResolveStatisticsResult.cc
	src/model/ListDomainsRequest.cc
	src/model/ListDomainsResult.cc )

add_library(httpdns ${LIB_TYPE}
	${httpdns_public_header}
	${httpdns_public_header_model}
	${httpdns_src})

set_target_properties(httpdns
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}httpdns
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(httpdns
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_HTTPDNS_LIBRARY)
endif()

target_include_directories(httpdns
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(httpdns
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(httpdns
		jsoncpp)
	target_include_directories(httpdns
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(httpdns
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(httpdns
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(httpdns
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(httpdns
		jsoncpp)
endif()

install(FILES ${httpdns_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/httpdns)
install(FILES ${httpdns_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/httpdns/model)
install(TARGETS httpdns
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)