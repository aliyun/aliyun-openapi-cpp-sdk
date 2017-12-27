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

configure_file(src/Config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/include/alibabacloud/core/Config.h @ONLY)

set(core_public_header
	include/alibabacloud/core/AlibabaCloud.h
	include/alibabacloud/core/AsyncCallerContext.h
	include/alibabacloud/core/ClientConfiguration.h
	include/alibabacloud/core/CommonClient.h
	include/alibabacloud/core/CommonRequest.h
	include/alibabacloud/core/CommonResponse.h
	include/alibabacloud/core/Config.h
	include/alibabacloud/core/CoreClient.h
	include/alibabacloud/core/CoreExport.h
	include/alibabacloud/core/Credentials.h
	include/alibabacloud/core/CredentialsProvider.h
	include/alibabacloud/core/EcsInstanceProfileConfigLoader.h
	include/alibabacloud/core/EndpointProvider.h
	include/alibabacloud/core/Error.h
	include/alibabacloud/core/Global.h
	include/alibabacloud/core/HmacSha1Signer.h
	include/alibabacloud/core/HttpClient.h
	include/alibabacloud/core/HttpMessage.h
	include/alibabacloud/core/HttpResponse.h
	include/alibabacloud/core/HttpRequest.h
	include/alibabacloud/core/InstanceProfileConfigLoader.h
	include/alibabacloud/core/InstanceProfileCredentialsProvider.h
	include/alibabacloud/core/NetworkProxy.h
	include/alibabacloud/core/Outcome.h
	include/alibabacloud/core/Profile.h
	include/alibabacloud/core/Runnable.h
	include/alibabacloud/core/RoaServiceClient.h
	include/alibabacloud/core/RoaServiceRequest.h
	include/alibabacloud/core/RpcServiceClient.h
	include/alibabacloud/core/RpcServiceRequest.h
	include/alibabacloud/core/ServiceRequest.h
	include/alibabacloud/core/ServiceResult.h
	include/alibabacloud/core/Signer.h
	include/alibabacloud/core/SimpleCredentialsProvider.h
	include/alibabacloud/core/StsAssumeRoleCredentialsProvider.h
	include/alibabacloud/core/Url.h
	include/alibabacloud/core/location/LocationClient.h
	include/alibabacloud/core/location/LocationRequest.h
	include/alibabacloud/core/location/model/DescribeEndpointsRequest.h
	include/alibabacloud/core/location/model/DescribeEndpointsResult.h
	include/alibabacloud/core/sts/StsClient.h
	include/alibabacloud/core/sts/StsRequest.h
	include/alibabacloud/core/sts/model/AssumeRoleRequest.h
	include/alibabacloud/core/sts/model/AssumeRoleResult.h
	include/alibabacloud/core/sts/model/GetCallerIdentityRequest.h
	include/alibabacloud/core/sts/model/GetCallerIdentityResult.h
	)

set(core_src
	src/AlibabaCloud.cc
	src/AsyncCallerContext.cc
	src/ClientConfiguration.cc
	src/CommonClient.cc
	src/CommonRequest.cc
	src/CommonResponse.cc
	src/CoreClient.cc
	src/Credentials.cc
	src/CredentialsProvider.cc
	src/CurlHttpClient.h
	src/CurlHttpClient.cc
	src/EcsInstanceProfileConfigLoader.cc
	src/EcsMetadataClient.h
	src/EcsMetadataClient.cc
	src/EndpointProvider.cc
	src/Error.cc
	src/Executor.cc
	src/Executor.h
	src/HmacSha1Signer.cc
	src/HttpClient.cc
	src/HttpMessage.cc
	src/HttpResponse.cc
	src/HttpRequest.cc
	src/InstanceProfileConfigLoader.cc
	src/InstanceProfileCredentialsProvider.cc
	src/NetworkProxy.cc
	src/Outcome.cc
	src/Profile.cc
	src/Runnable.cc
	src/RoaServiceClient.cc
	src/RoaServiceRequest.cc
	src/RpcServiceClient.cc
	src/RpcServiceRequest.cc
	src/ServiceRequest.cc
	src/ServiceResult.cc
	src/Signer.cc
	src/SimpleCredentialsProvider.cc
	src/StsAssumeRoleCredentialsProvider.cc
	src/Url.cc
	src/Utils.h
	src/Utils.cc
	src/location/LocationClient.cc
	src/location/LocationRequest.cc
	src/location/model/DescribeEndpointsRequest.cc
	src/location/model/DescribeEndpointsResult.cc
	src/sts/StsClient.cc
	src/sts/StsRequest.cc
	src/sts/model/AssumeRoleRequest.cc
	src/sts/model/AssumeRoleResult.cc	
	src/sts/model/GetCallerIdentityRequest.cc
	src/sts/model/GetCallerIdentityResult.cc
	)

add_library(core ${LIB_TYPE} ${core_public_header} ${core_src})

set_target_properties(core
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}core
	PUBLIC_HEADER "${core_public_header}"
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(core
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CORE_LIBRARY)
endif()

target_include_directories(core
	PRIVATE include )

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(curl INSTALL_DIR)
	set(curl_install_dir ${INSTALL_DIR})
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(core
		curl
		jsoncpp )
	target_include_directories(core
		PRIVATE	${curl_install_dir}/include
			${jsoncpp_install_dir}/include
			${tinyxml2_install_dir}/include)
	target_link_libraries(core
		Crypt32
		Rpcrt4
		Ws2_32
		${jsoncpp_install_dir}/lib/jsoncpp.lib
		debug ${curl_install_dir}/lib/libcurl-d.lib
		optimized ${curl_install_dir}/lib/libcurl.lib
		)
	target_compile_definitions(core
		PRIVATE CURL_STATICLIB
			_CRT_SECURE_NO_WARNINGS)
else()
	target_include_directories(core
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(core
		crypto
		curl
		jsoncpp
		uuid )
endif()

install(TARGETS core
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/core
	)
