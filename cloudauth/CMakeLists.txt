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

set(cloudauth_public_header 
	include/alibabacloud/cloudauth/CloudauthClient.h
	include/alibabacloud/cloudauth/CloudauthExport.h )

set(cloudauth_public_header_model 
	include/alibabacloud/cloudauth/model/GetMaterialsRequest.h
	include/alibabacloud/cloudauth/model/GetMaterialsResult.h
	include/alibabacloud/cloudauth/model/GetVerifyTokenRequest.h
	include/alibabacloud/cloudauth/model/GetVerifyTokenResult.h
	include/alibabacloud/cloudauth/model/CompareFacesRequest.h
	include/alibabacloud/cloudauth/model/CompareFacesResult.h
	include/alibabacloud/cloudauth/model/SubmitMaterialsRequest.h
	include/alibabacloud/cloudauth/model/SubmitMaterialsResult.h
	include/alibabacloud/cloudauth/model/GetStatusRequest.h
	include/alibabacloud/cloudauth/model/GetStatusResult.h )

set(cloudauth_src 
	src/CloudauthClient.cc
	src/model/GetMaterialsRequest.cc
	src/model/GetMaterialsResult.cc
	src/model/GetVerifyTokenRequest.cc
	src/model/GetVerifyTokenResult.cc
	src/model/CompareFacesRequest.cc
	src/model/CompareFacesResult.cc
	src/model/SubmitMaterialsRequest.cc
	src/model/SubmitMaterialsResult.cc
	src/model/GetStatusRequest.cc
	src/model/GetStatusResult.cc )

add_library(cloudauth ${LIB_TYPE}
	${cloudauth_public_header}
	${cloudauth_public_header_model}
	${cloudauth_src})

set_target_properties(cloudauth
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudauth
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cloudauth
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CLOUDAUTH_LIBRARY)
endif()

target_include_directories(cloudauth
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cloudauth
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cloudauth
		jsoncpp)
	target_include_directories(cloudauth
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cloudauth
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cloudauth
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cloudauth
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cloudauth
		jsoncpp)
endif()

install(FILES ${cloudauth_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudauth)
install(FILES ${cloudauth_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudauth/model)
install(TARGETS cloudauth
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)