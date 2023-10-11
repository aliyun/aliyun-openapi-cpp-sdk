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

set(sts_public_header 
	include/alibabacloud/sts/StsClient.h
	include/alibabacloud/sts/StsExport.h )

set(sts_public_header_model 
	include/alibabacloud/sts/model/AssumeRoleRequest.h
	include/alibabacloud/sts/model/AssumeRoleResult.h
	include/alibabacloud/sts/model/AssumeRoleWithOIDCRequest.h
	include/alibabacloud/sts/model/AssumeRoleWithOIDCResult.h
	include/alibabacloud/sts/model/AssumeRoleWithSAMLRequest.h
	include/alibabacloud/sts/model/AssumeRoleWithSAMLResult.h
	include/alibabacloud/sts/model/GetCallerIdentityRequest.h
	include/alibabacloud/sts/model/GetCallerIdentityResult.h )

set(sts_src 
	src/StsClient.cc
	src/model/AssumeRoleRequest.cc
	src/model/AssumeRoleResult.cc
	src/model/AssumeRoleWithOIDCRequest.cc
	src/model/AssumeRoleWithOIDCResult.cc
	src/model/AssumeRoleWithSAMLRequest.cc
	src/model/AssumeRoleWithSAMLResult.cc
	src/model/GetCallerIdentityRequest.cc
	src/model/GetCallerIdentityResult.cc )

add_library(sts ${LIB_TYPE}
	${sts_public_header}
	${sts_public_header_model}
	${sts_src})

set_target_properties(sts
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sts
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sts
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_STS_LIBRARY)
endif()

target_include_directories(sts
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sts
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sts
		jsoncpp)
	target_include_directories(sts
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sts
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sts
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sts
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sts
		jsoncpp)
endif()

install(FILES ${sts_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sts)
install(FILES ${sts_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sts/model)
install(TARGETS sts
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)