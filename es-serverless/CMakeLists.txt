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

set(es-serverless_public_header 
	include/alibabacloud/es-serverless/Es_serverlessClient.h
	include/alibabacloud/es-serverless/Es_serverlessExport.h )

set(es-serverless_public_header_model 
	include/alibabacloud/es-serverless/model/CreateAppRequest.h
	include/alibabacloud/es-serverless/model/CreateAppResult.h
	include/alibabacloud/es-serverless/model/CreateDataStreamRequest.h
	include/alibabacloud/es-serverless/model/CreateDataStreamResult.h
	include/alibabacloud/es-serverless/model/DeleteAccessTokenRequest.h
	include/alibabacloud/es-serverless/model/DeleteAccessTokenResult.h
	include/alibabacloud/es-serverless/model/DeleteAppRequest.h
	include/alibabacloud/es-serverless/model/DeleteAppResult.h
	include/alibabacloud/es-serverless/model/DeleteDataStreamRequest.h
	include/alibabacloud/es-serverless/model/DeleteDataStreamResult.h
	include/alibabacloud/es-serverless/model/DescibeRegionsRequest.h
	include/alibabacloud/es-serverless/model/DescibeRegionsResult.h
	include/alibabacloud/es-serverless/model/DisableAccessTokenRequest.h
	include/alibabacloud/es-serverless/model/DisableAccessTokenResult.h
	include/alibabacloud/es-serverless/model/EnableAccessTokenRequest.h
	include/alibabacloud/es-serverless/model/EnableAccessTokenResult.h
	include/alibabacloud/es-serverless/model/GenerateAcccessTokenRequest.h
	include/alibabacloud/es-serverless/model/GenerateAcccessTokenResult.h
	include/alibabacloud/es-serverless/model/GetAppRequest.h
	include/alibabacloud/es-serverless/model/GetAppResult.h
	include/alibabacloud/es-serverless/model/GetDataStreamRequest.h
	include/alibabacloud/es-serverless/model/GetDataStreamResult.h
	include/alibabacloud/es-serverless/model/GetRegionInfoRequest.h
	include/alibabacloud/es-serverless/model/GetRegionInfoResult.h
	include/alibabacloud/es-serverless/model/ListAccessTokensRequest.h
	include/alibabacloud/es-serverless/model/ListAccessTokensResult.h
	include/alibabacloud/es-serverless/model/ListAppsRequest.h
	include/alibabacloud/es-serverless/model/ListAppsResult.h
	include/alibabacloud/es-serverless/model/ListDataStreamsRequest.h
	include/alibabacloud/es-serverless/model/ListDataStreamsResult.h
	include/alibabacloud/es-serverless/model/UpdateAppRequest.h
	include/alibabacloud/es-serverless/model/UpdateAppResult.h
	include/alibabacloud/es-serverless/model/UpdateDataStreamRequest.h
	include/alibabacloud/es-serverless/model/UpdateDataStreamResult.h )

set(es-serverless_src 
	src/Es-serverlessClient.cc
	src/model/CreateAppRequest.cc
	src/model/CreateAppResult.cc
	src/model/CreateDataStreamRequest.cc
	src/model/CreateDataStreamResult.cc
	src/model/DeleteAccessTokenRequest.cc
	src/model/DeleteAccessTokenResult.cc
	src/model/DeleteAppRequest.cc
	src/model/DeleteAppResult.cc
	src/model/DeleteDataStreamRequest.cc
	src/model/DeleteDataStreamResult.cc
	src/model/DescibeRegionsRequest.cc
	src/model/DescibeRegionsResult.cc
	src/model/DisableAccessTokenRequest.cc
	src/model/DisableAccessTokenResult.cc
	src/model/EnableAccessTokenRequest.cc
	src/model/EnableAccessTokenResult.cc
	src/model/GenerateAcccessTokenRequest.cc
	src/model/GenerateAcccessTokenResult.cc
	src/model/GetAppRequest.cc
	src/model/GetAppResult.cc
	src/model/GetDataStreamRequest.cc
	src/model/GetDataStreamResult.cc
	src/model/GetRegionInfoRequest.cc
	src/model/GetRegionInfoResult.cc
	src/model/ListAccessTokensRequest.cc
	src/model/ListAccessTokensResult.cc
	src/model/ListAppsRequest.cc
	src/model/ListAppsResult.cc
	src/model/ListDataStreamsRequest.cc
	src/model/ListDataStreamsResult.cc
	src/model/UpdateAppRequest.cc
	src/model/UpdateAppResult.cc
	src/model/UpdateDataStreamRequest.cc
	src/model/UpdateDataStreamResult.cc )

add_library(es-serverless ${LIB_TYPE}
	${es-serverless_public_header}
	${es-serverless_public_header_model}
	${es-serverless_src})

set_target_properties(es-serverless
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}es-serverless
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(es-serverless
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ES_SERVERLESS_LIBRARY)
endif()

target_include_directories(es-serverless
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(es-serverless
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(es-serverless
		jsoncpp)
	target_include_directories(es-serverless
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(es-serverless
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(es-serverless
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(es-serverless
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(es-serverless
		jsoncpp)
endif()

install(FILES ${es-serverless_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/es-serverless)
install(FILES ${es-serverless_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/es-serverless/model)
install(TARGETS es-serverless
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)