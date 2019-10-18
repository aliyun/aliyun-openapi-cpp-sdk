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

set(dnsknocker_public_header 
	include/alibabacloud/dnsknocker/DnsKnockerClient.h
	include/alibabacloud/dnsknocker/DnsKnockerExport.h )

set(dnsknocker_public_header_model 
	include/alibabacloud/dnsknocker/model/BatchCreateRrRequest.h
	include/alibabacloud/dnsknocker/model/BatchCreateRrResult.h
	include/alibabacloud/dnsknocker/model/BatchDeleteRrRequest.h
	include/alibabacloud/dnsknocker/model/BatchDeleteRrResult.h
	include/alibabacloud/dnsknocker/model/ChangeResourceRecordRequest.h
	include/alibabacloud/dnsknocker/model/ChangeResourceRecordResult.h
	include/alibabacloud/dnsknocker/model/ChangeResourceRecordsRequest.h
	include/alibabacloud/dnsknocker/model/ChangeResourceRecordsResult.h
	include/alibabacloud/dnsknocker/model/CreateResourceRecordRequest.h
	include/alibabacloud/dnsknocker/model/CreateResourceRecordResult.h
	include/alibabacloud/dnsknocker/model/DeleteDomainRequest.h
	include/alibabacloud/dnsknocker/model/DeleteDomainResult.h
	include/alibabacloud/dnsknocker/model/DeleteResourceRecordRequest.h
	include/alibabacloud/dnsknocker/model/DeleteResourceRecordResult.h
	include/alibabacloud/dnsknocker/model/DeleteResourceRecordsRequest.h
	include/alibabacloud/dnsknocker/model/DeleteResourceRecordsResult.h
	include/alibabacloud/dnsknocker/model/GetDomainRequest.h
	include/alibabacloud/dnsknocker/model/GetDomainResult.h
	include/alibabacloud/dnsknocker/model/GetResourceRecordsRequest.h
	include/alibabacloud/dnsknocker/model/GetResourceRecordsResult.h )

set(dnsknocker_src 
	src/DnsKnockerClient.cc
	src/model/BatchCreateRrRequest.cc
	src/model/BatchCreateRrResult.cc
	src/model/BatchDeleteRrRequest.cc
	src/model/BatchDeleteRrResult.cc
	src/model/ChangeResourceRecordRequest.cc
	src/model/ChangeResourceRecordResult.cc
	src/model/ChangeResourceRecordsRequest.cc
	src/model/ChangeResourceRecordsResult.cc
	src/model/CreateResourceRecordRequest.cc
	src/model/CreateResourceRecordResult.cc
	src/model/DeleteDomainRequest.cc
	src/model/DeleteDomainResult.cc
	src/model/DeleteResourceRecordRequest.cc
	src/model/DeleteResourceRecordResult.cc
	src/model/DeleteResourceRecordsRequest.cc
	src/model/DeleteResourceRecordsResult.cc
	src/model/GetDomainRequest.cc
	src/model/GetDomainResult.cc
	src/model/GetResourceRecordsRequest.cc
	src/model/GetResourceRecordsResult.cc )

add_library(dnsknocker ${LIB_TYPE}
	${dnsknocker_public_header}
	${dnsknocker_public_header_model}
	${dnsknocker_src})

set_target_properties(dnsknocker
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dnsknocker
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dnsknocker
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DNSKNOCKER_LIBRARY)
endif()

target_include_directories(dnsknocker
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dnsknocker
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dnsknocker
		jsoncpp)
	target_include_directories(dnsknocker
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dnsknocker
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dnsknocker
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dnsknocker
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dnsknocker
		jsoncpp)
endif()

install(FILES ${dnsknocker_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dnsknocker)
install(FILES ${dnsknocker_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dnsknocker/model)
install(TARGETS dnsknocker
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)