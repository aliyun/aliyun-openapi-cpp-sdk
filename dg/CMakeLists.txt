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

set(dg_public_header 
	include/alibabacloud/dg/DgClient.h
	include/alibabacloud/dg/DgExport.h )

set(dg_public_header_model 
	include/alibabacloud/dg/model/AddDatabaseRequest.h
	include/alibabacloud/dg/model/AddDatabaseResult.h
	include/alibabacloud/dg/model/AddDatabaseListRequest.h
	include/alibabacloud/dg/model/AddDatabaseListResult.h
	include/alibabacloud/dg/model/ConnectDatabaseRequest.h
	include/alibabacloud/dg/model/ConnectDatabaseResult.h
	include/alibabacloud/dg/model/CreateDatabaseAccessPointRequest.h
	include/alibabacloud/dg/model/CreateDatabaseAccessPointResult.h
	include/alibabacloud/dg/model/CreateGatewayRequest.h
	include/alibabacloud/dg/model/CreateGatewayResult.h
	include/alibabacloud/dg/model/CreateGatewayVerifyCodeRequest.h
	include/alibabacloud/dg/model/CreateGatewayVerifyCodeResult.h
	include/alibabacloud/dg/model/DeleteDatabaseRequest.h
	include/alibabacloud/dg/model/DeleteDatabaseResult.h
	include/alibabacloud/dg/model/DeleteDatabaseAccessPointRequest.h
	include/alibabacloud/dg/model/DeleteDatabaseAccessPointResult.h
	include/alibabacloud/dg/model/DeleteGatewayRequest.h
	include/alibabacloud/dg/model/DeleteGatewayResult.h
	include/alibabacloud/dg/model/DeleteGatewayInstanceRequest.h
	include/alibabacloud/dg/model/DeleteGatewayInstanceResult.h
	include/alibabacloud/dg/model/DescribeRegionsRequest.h
	include/alibabacloud/dg/model/DescribeRegionsResult.h
	include/alibabacloud/dg/model/DownloadGatewayProgramRequest.h
	include/alibabacloud/dg/model/DownloadGatewayProgramResult.h
	include/alibabacloud/dg/model/FindUserGatewayByIdRequest.h
	include/alibabacloud/dg/model/FindUserGatewayByIdResult.h
	include/alibabacloud/dg/model/GetUserDatabasesRequest.h
	include/alibabacloud/dg/model/GetUserDatabasesResult.h
	include/alibabacloud/dg/model/GetUserGatewayInstancesRequest.h
	include/alibabacloud/dg/model/GetUserGatewayInstancesResult.h
	include/alibabacloud/dg/model/GetUserGatewaysRequest.h
	include/alibabacloud/dg/model/GetUserGatewaysResult.h
	include/alibabacloud/dg/model/ListDatabaseAccessPointRequest.h
	include/alibabacloud/dg/model/ListDatabaseAccessPointResult.h
	include/alibabacloud/dg/model/ModifyDatabaseRequest.h
	include/alibabacloud/dg/model/ModifyDatabaseResult.h
	include/alibabacloud/dg/model/ModifyGatewayRequest.h
	include/alibabacloud/dg/model/ModifyGatewayResult.h
	include/alibabacloud/dg/model/RetryDatabaseRequest.h
	include/alibabacloud/dg/model/RetryDatabaseResult.h
	include/alibabacloud/dg/model/StopGatewayRequest.h
	include/alibabacloud/dg/model/StopGatewayResult.h )

set(dg_src 
	src/DgClient.cc
	src/model/AddDatabaseRequest.cc
	src/model/AddDatabaseResult.cc
	src/model/AddDatabaseListRequest.cc
	src/model/AddDatabaseListResult.cc
	src/model/ConnectDatabaseRequest.cc
	src/model/ConnectDatabaseResult.cc
	src/model/CreateDatabaseAccessPointRequest.cc
	src/model/CreateDatabaseAccessPointResult.cc
	src/model/CreateGatewayRequest.cc
	src/model/CreateGatewayResult.cc
	src/model/CreateGatewayVerifyCodeRequest.cc
	src/model/CreateGatewayVerifyCodeResult.cc
	src/model/DeleteDatabaseRequest.cc
	src/model/DeleteDatabaseResult.cc
	src/model/DeleteDatabaseAccessPointRequest.cc
	src/model/DeleteDatabaseAccessPointResult.cc
	src/model/DeleteGatewayRequest.cc
	src/model/DeleteGatewayResult.cc
	src/model/DeleteGatewayInstanceRequest.cc
	src/model/DeleteGatewayInstanceResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DownloadGatewayProgramRequest.cc
	src/model/DownloadGatewayProgramResult.cc
	src/model/FindUserGatewayByIdRequest.cc
	src/model/FindUserGatewayByIdResult.cc
	src/model/GetUserDatabasesRequest.cc
	src/model/GetUserDatabasesResult.cc
	src/model/GetUserGatewayInstancesRequest.cc
	src/model/GetUserGatewayInstancesResult.cc
	src/model/GetUserGatewaysRequest.cc
	src/model/GetUserGatewaysResult.cc
	src/model/ListDatabaseAccessPointRequest.cc
	src/model/ListDatabaseAccessPointResult.cc
	src/model/ModifyDatabaseRequest.cc
	src/model/ModifyDatabaseResult.cc
	src/model/ModifyGatewayRequest.cc
	src/model/ModifyGatewayResult.cc
	src/model/RetryDatabaseRequest.cc
	src/model/RetryDatabaseResult.cc
	src/model/StopGatewayRequest.cc
	src/model/StopGatewayResult.cc )

add_library(dg ${LIB_TYPE}
	${dg_public_header}
	${dg_public_header_model}
	${dg_src})

set_target_properties(dg
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dg
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dg
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DG_LIBRARY)
endif()

target_include_directories(dg
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dg
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dg
		jsoncpp)
	target_include_directories(dg
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dg
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dg
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dg
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dg
		jsoncpp)
endif()

install(FILES ${dg_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dg)
install(FILES ${dg_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dg/model)
install(TARGETS dg
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)