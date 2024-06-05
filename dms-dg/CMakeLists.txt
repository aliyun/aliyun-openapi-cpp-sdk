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

set(dms-dg_public_header 
	include/alibabacloud/dms-dg/Dms_dgClient.h
	include/alibabacloud/dms-dg/Dms_dgExport.h )

set(dms-dg_public_header_model 
	include/alibabacloud/dms-dg/model/AddDatabaseRequest.h
	include/alibabacloud/dms-dg/model/AddDatabaseResult.h
	include/alibabacloud/dms-dg/model/AddDatabaseListRequest.h
	include/alibabacloud/dms-dg/model/AddDatabaseListResult.h
	include/alibabacloud/dms-dg/model/CheckDGEnabledRequest.h
	include/alibabacloud/dms-dg/model/CheckDGEnabledResult.h
	include/alibabacloud/dms-dg/model/ConnectDatabaseRequest.h
	include/alibabacloud/dms-dg/model/ConnectDatabaseResult.h
	include/alibabacloud/dms-dg/model/CreateGatewayRequest.h
	include/alibabacloud/dms-dg/model/CreateGatewayResult.h
	include/alibabacloud/dms-dg/model/CreateGatewayVerifyCodeRequest.h
	include/alibabacloud/dms-dg/model/CreateGatewayVerifyCodeResult.h
	include/alibabacloud/dms-dg/model/DeleteDatabaseRequest.h
	include/alibabacloud/dms-dg/model/DeleteDatabaseResult.h
	include/alibabacloud/dms-dg/model/DeleteGatewayRequest.h
	include/alibabacloud/dms-dg/model/DeleteGatewayResult.h
	include/alibabacloud/dms-dg/model/DeleteGatewayInstanceRequest.h
	include/alibabacloud/dms-dg/model/DeleteGatewayInstanceResult.h
	include/alibabacloud/dms-dg/model/DescribeRegionsRequest.h
	include/alibabacloud/dms-dg/model/DescribeRegionsResult.h
	include/alibabacloud/dms-dg/model/DownloadGatewayProgramRequest.h
	include/alibabacloud/dms-dg/model/DownloadGatewayProgramResult.h
	include/alibabacloud/dms-dg/model/FindUserGatewayByIdRequest.h
	include/alibabacloud/dms-dg/model/FindUserGatewayByIdResult.h
	include/alibabacloud/dms-dg/model/GetUserDatabasesRequest.h
	include/alibabacloud/dms-dg/model/GetUserDatabasesResult.h
	include/alibabacloud/dms-dg/model/GetUserGatewayInstancesRequest.h
	include/alibabacloud/dms-dg/model/GetUserGatewayInstancesResult.h
	include/alibabacloud/dms-dg/model/GetUserGatewaysRequest.h
	include/alibabacloud/dms-dg/model/GetUserGatewaysResult.h
	include/alibabacloud/dms-dg/model/ListDatabaseAccessPointRequest.h
	include/alibabacloud/dms-dg/model/ListDatabaseAccessPointResult.h
	include/alibabacloud/dms-dg/model/ModifyDatabaseRequest.h
	include/alibabacloud/dms-dg/model/ModifyDatabaseResult.h
	include/alibabacloud/dms-dg/model/ModifyGatewayRequest.h
	include/alibabacloud/dms-dg/model/ModifyGatewayResult.h
	include/alibabacloud/dms-dg/model/RetryDatabaseRequest.h
	include/alibabacloud/dms-dg/model/RetryDatabaseResult.h
	include/alibabacloud/dms-dg/model/StopGatewayRequest.h
	include/alibabacloud/dms-dg/model/StopGatewayResult.h )

set(dms-dg_src 
	src/Dms-dgClient.cc
	src/model/AddDatabaseRequest.cc
	src/model/AddDatabaseResult.cc
	src/model/AddDatabaseListRequest.cc
	src/model/AddDatabaseListResult.cc
	src/model/CheckDGEnabledRequest.cc
	src/model/CheckDGEnabledResult.cc
	src/model/ConnectDatabaseRequest.cc
	src/model/ConnectDatabaseResult.cc
	src/model/CreateGatewayRequest.cc
	src/model/CreateGatewayResult.cc
	src/model/CreateGatewayVerifyCodeRequest.cc
	src/model/CreateGatewayVerifyCodeResult.cc
	src/model/DeleteDatabaseRequest.cc
	src/model/DeleteDatabaseResult.cc
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

add_library(dms-dg ${LIB_TYPE}
	${dms-dg_public_header}
	${dms-dg_public_header_model}
	${dms-dg_src})

set_target_properties(dms-dg
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dms-dg
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dms-dg
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DMS_DG_LIBRARY)
endif()

target_include_directories(dms-dg
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dms-dg
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dms-dg
		jsoncpp)
	target_include_directories(dms-dg
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dms-dg
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dms-dg
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dms-dg
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dms-dg
		jsoncpp)
endif()

install(FILES ${dms-dg_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dms-dg)
install(FILES ${dms-dg_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dms-dg/model)
install(TARGETS dms-dg
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)