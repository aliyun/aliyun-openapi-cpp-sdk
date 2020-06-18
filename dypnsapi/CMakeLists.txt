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

set(dypnsapi_public_header 
	include/alibabacloud/dypnsapi/DypnsapiClient.h
	include/alibabacloud/dypnsapi/DypnsapiExport.h )

set(dypnsapi_public_header_model 
	include/alibabacloud/dypnsapi/model/CreateVerifySchemeRequest.h
	include/alibabacloud/dypnsapi/model/CreateVerifySchemeResult.h
	include/alibabacloud/dypnsapi/model/DeleteVerifySchemeRequest.h
	include/alibabacloud/dypnsapi/model/DeleteVerifySchemeResult.h
	include/alibabacloud/dypnsapi/model/DescribeVerifySchemeRequest.h
	include/alibabacloud/dypnsapi/model/DescribeVerifySchemeResult.h
	include/alibabacloud/dypnsapi/model/GetAuthTokenRequest.h
	include/alibabacloud/dypnsapi/model/GetAuthTokenResult.h
	include/alibabacloud/dypnsapi/model/GetMobileRequest.h
	include/alibabacloud/dypnsapi/model/GetMobileResult.h
	include/alibabacloud/dypnsapi/model/TwiceTelVerifyRequest.h
	include/alibabacloud/dypnsapi/model/TwiceTelVerifyResult.h
	include/alibabacloud/dypnsapi/model/VerifyMobileRequest.h
	include/alibabacloud/dypnsapi/model/VerifyMobileResult.h
	include/alibabacloud/dypnsapi/model/VerifyPhoneWithTokenRequest.h
	include/alibabacloud/dypnsapi/model/VerifyPhoneWithTokenResult.h )

set(dypnsapi_src 
	src/DypnsapiClient.cc
	src/model/CreateVerifySchemeRequest.cc
	src/model/CreateVerifySchemeResult.cc
	src/model/DeleteVerifySchemeRequest.cc
	src/model/DeleteVerifySchemeResult.cc
	src/model/DescribeVerifySchemeRequest.cc
	src/model/DescribeVerifySchemeResult.cc
	src/model/GetAuthTokenRequest.cc
	src/model/GetAuthTokenResult.cc
	src/model/GetMobileRequest.cc
	src/model/GetMobileResult.cc
	src/model/TwiceTelVerifyRequest.cc
	src/model/TwiceTelVerifyResult.cc
	src/model/VerifyMobileRequest.cc
	src/model/VerifyMobileResult.cc
	src/model/VerifyPhoneWithTokenRequest.cc
	src/model/VerifyPhoneWithTokenResult.cc )

add_library(dypnsapi ${LIB_TYPE}
	${dypnsapi_public_header}
	${dypnsapi_public_header_model}
	${dypnsapi_src})

set_target_properties(dypnsapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dypnsapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dypnsapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DYPNSAPI_LIBRARY)
endif()

target_include_directories(dypnsapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dypnsapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dypnsapi
		jsoncpp)
	target_include_directories(dypnsapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dypnsapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dypnsapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dypnsapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dypnsapi
		jsoncpp)
endif()

install(FILES ${dypnsapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dypnsapi)
install(FILES ${dypnsapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dypnsapi/model)
install(TARGETS dypnsapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)