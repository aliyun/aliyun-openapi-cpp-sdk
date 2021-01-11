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

set(xtrace_public_header 
	include/alibabacloud/xtrace/XtraceClient.h
	include/alibabacloud/xtrace/XtraceExport.h )

set(xtrace_public_header_model 
	include/alibabacloud/xtrace/model/GetTagKeyRequest.h
	include/alibabacloud/xtrace/model/GetTagKeyResult.h
	include/alibabacloud/xtrace/model/GetTagValRequest.h
	include/alibabacloud/xtrace/model/GetTagValResult.h
	include/alibabacloud/xtrace/model/GetTokenRequest.h
	include/alibabacloud/xtrace/model/GetTokenResult.h
	include/alibabacloud/xtrace/model/GetTraceRequest.h
	include/alibabacloud/xtrace/model/GetTraceResult.h
	include/alibabacloud/xtrace/model/GetTraceAnalysisRequest.h
	include/alibabacloud/xtrace/model/GetTraceAnalysisResult.h
	include/alibabacloud/xtrace/model/ListIpOrHostsRequest.h
	include/alibabacloud/xtrace/model/ListIpOrHostsResult.h
	include/alibabacloud/xtrace/model/ListServicesRequest.h
	include/alibabacloud/xtrace/model/ListServicesResult.h
	include/alibabacloud/xtrace/model/ListSpanNamesRequest.h
	include/alibabacloud/xtrace/model/ListSpanNamesResult.h
	include/alibabacloud/xtrace/model/QueryMetricRequest.h
	include/alibabacloud/xtrace/model/QueryMetricResult.h
	include/alibabacloud/xtrace/model/SearchTracesRequest.h
	include/alibabacloud/xtrace/model/SearchTracesResult.h )

set(xtrace_src 
	src/XtraceClient.cc
	src/model/GetTagKeyRequest.cc
	src/model/GetTagKeyResult.cc
	src/model/GetTagValRequest.cc
	src/model/GetTagValResult.cc
	src/model/GetTokenRequest.cc
	src/model/GetTokenResult.cc
	src/model/GetTraceRequest.cc
	src/model/GetTraceResult.cc
	src/model/GetTraceAnalysisRequest.cc
	src/model/GetTraceAnalysisResult.cc
	src/model/ListIpOrHostsRequest.cc
	src/model/ListIpOrHostsResult.cc
	src/model/ListServicesRequest.cc
	src/model/ListServicesResult.cc
	src/model/ListSpanNamesRequest.cc
	src/model/ListSpanNamesResult.cc
	src/model/QueryMetricRequest.cc
	src/model/QueryMetricResult.cc
	src/model/SearchTracesRequest.cc
	src/model/SearchTracesResult.cc )

add_library(xtrace ${LIB_TYPE}
	${xtrace_public_header}
	${xtrace_public_header_model}
	${xtrace_src})

set_target_properties(xtrace
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}xtrace
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(xtrace
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_XTRACE_LIBRARY)
endif()

target_include_directories(xtrace
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(xtrace
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(xtrace
		jsoncpp)
	target_include_directories(xtrace
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(xtrace
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(xtrace
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(xtrace
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(xtrace
		jsoncpp)
endif()

install(FILES ${xtrace_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/xtrace)
install(FILES ${xtrace_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/xtrace/model)
install(TARGETS xtrace
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)