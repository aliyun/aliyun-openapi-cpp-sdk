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

set(ots_public_header 
	include/alibabacloud/ots/OtsClient.h
	include/alibabacloud/ots/OtsExport.h )

set(ots_public_header_model 
	include/alibabacloud/ots/model/BindInstance2VpcRequest.h
	include/alibabacloud/ots/model/BindInstance2VpcResult.h
	include/alibabacloud/ots/model/DeleteInstanceRequest.h
	include/alibabacloud/ots/model/DeleteInstanceResult.h
	include/alibabacloud/ots/model/DeleteTagsRequest.h
	include/alibabacloud/ots/model/DeleteTagsResult.h
	include/alibabacloud/ots/model/GetInstanceRequest.h
	include/alibabacloud/ots/model/GetInstanceResult.h
	include/alibabacloud/ots/model/InsertInstanceRequest.h
	include/alibabacloud/ots/model/InsertInstanceResult.h
	include/alibabacloud/ots/model/InsertTagsRequest.h
	include/alibabacloud/ots/model/InsertTagsResult.h
	include/alibabacloud/ots/model/ListClusterTypeRequest.h
	include/alibabacloud/ots/model/ListClusterTypeResult.h
	include/alibabacloud/ots/model/ListInstanceRequest.h
	include/alibabacloud/ots/model/ListInstanceResult.h
	include/alibabacloud/ots/model/ListTagsRequest.h
	include/alibabacloud/ots/model/ListTagsResult.h
	include/alibabacloud/ots/model/ListVpcInfoByInstanceRequest.h
	include/alibabacloud/ots/model/ListVpcInfoByInstanceResult.h
	include/alibabacloud/ots/model/ListVpcInfoByVpcRequest.h
	include/alibabacloud/ots/model/ListVpcInfoByVpcResult.h
	include/alibabacloud/ots/model/UnbindInstance2VpcRequest.h
	include/alibabacloud/ots/model/UnbindInstance2VpcResult.h
	include/alibabacloud/ots/model/UpdateInstanceRequest.h
	include/alibabacloud/ots/model/UpdateInstanceResult.h )

set(ots_src 
	src/OtsClient.cc
	src/model/BindInstance2VpcRequest.cc
	src/model/BindInstance2VpcResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DeleteTagsRequest.cc
	src/model/DeleteTagsResult.cc
	src/model/GetInstanceRequest.cc
	src/model/GetInstanceResult.cc
	src/model/InsertInstanceRequest.cc
	src/model/InsertInstanceResult.cc
	src/model/InsertTagsRequest.cc
	src/model/InsertTagsResult.cc
	src/model/ListClusterTypeRequest.cc
	src/model/ListClusterTypeResult.cc
	src/model/ListInstanceRequest.cc
	src/model/ListInstanceResult.cc
	src/model/ListTagsRequest.cc
	src/model/ListTagsResult.cc
	src/model/ListVpcInfoByInstanceRequest.cc
	src/model/ListVpcInfoByInstanceResult.cc
	src/model/ListVpcInfoByVpcRequest.cc
	src/model/ListVpcInfoByVpcResult.cc
	src/model/UnbindInstance2VpcRequest.cc
	src/model/UnbindInstance2VpcResult.cc
	src/model/UpdateInstanceRequest.cc
	src/model/UpdateInstanceResult.cc )

add_library(ots ${LIB_TYPE}
	${ots_public_header}
	${ots_public_header_model}
	${ots_src})

set_target_properties(ots
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ots
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ots
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_OTS_LIBRARY)
endif()

target_include_directories(ots
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ots
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ots
		jsoncpp)
	target_include_directories(ots
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ots
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ots
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ots
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ots
		jsoncpp)
endif()

install(FILES ${ots_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ots)
install(FILES ${ots_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ots/model)
install(TARGETS ots
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)