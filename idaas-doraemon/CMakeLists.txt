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

set(idaas-doraemon_public_header 
	include/alibabacloud/idaas-doraemon/Idaas_doraemonClient.h
	include/alibabacloud/idaas-doraemon/Idaas_doraemonExport.h )

set(idaas-doraemon_public_header_model 
	include/alibabacloud/idaas-doraemon/model/CreateAuthenticatorRegistrationRequest.h
	include/alibabacloud/idaas-doraemon/model/CreateAuthenticatorRegistrationResult.h
	include/alibabacloud/idaas-doraemon/model/CreateUserAuthenticateOptionsRequest.h
	include/alibabacloud/idaas-doraemon/model/CreateUserAuthenticateOptionsResult.h
	include/alibabacloud/idaas-doraemon/model/DeregisterAuthenticatorRequest.h
	include/alibabacloud/idaas-doraemon/model/DeregisterAuthenticatorResult.h
	include/alibabacloud/idaas-doraemon/model/FetchAccessTokenRequest.h
	include/alibabacloud/idaas-doraemon/model/FetchAccessTokenResult.h
	include/alibabacloud/idaas-doraemon/model/GetAuthenticatorRequest.h
	include/alibabacloud/idaas-doraemon/model/GetAuthenticatorResult.h
	include/alibabacloud/idaas-doraemon/model/ListAuthenticationLogsRequest.h
	include/alibabacloud/idaas-doraemon/model/ListAuthenticationLogsResult.h
	include/alibabacloud/idaas-doraemon/model/ListAuthenticatorOpsLogsRequest.h
	include/alibabacloud/idaas-doraemon/model/ListAuthenticatorOpsLogsResult.h
	include/alibabacloud/idaas-doraemon/model/ListAuthenticatorsRequest.h
	include/alibabacloud/idaas-doraemon/model/ListAuthenticatorsResult.h
	include/alibabacloud/idaas-doraemon/model/ListCostUnitOrdersRequest.h
	include/alibabacloud/idaas-doraemon/model/ListCostUnitOrdersResult.h
	include/alibabacloud/idaas-doraemon/model/ListOrderConsumeStatisticRecordsRequest.h
	include/alibabacloud/idaas-doraemon/model/ListOrderConsumeStatisticRecordsResult.h
	include/alibabacloud/idaas-doraemon/model/ListPwnedPasswordsRequest.h
	include/alibabacloud/idaas-doraemon/model/ListPwnedPasswordsResult.h
	include/alibabacloud/idaas-doraemon/model/ListUsersRequest.h
	include/alibabacloud/idaas-doraemon/model/ListUsersResult.h
	include/alibabacloud/idaas-doraemon/model/QuerySmsReportsRequest.h
	include/alibabacloud/idaas-doraemon/model/QuerySmsReportsResult.h
	include/alibabacloud/idaas-doraemon/model/QuerySmsUpsRequest.h
	include/alibabacloud/idaas-doraemon/model/QuerySmsUpsResult.h
	include/alibabacloud/idaas-doraemon/model/RegisterAuthenticatorRequest.h
	include/alibabacloud/idaas-doraemon/model/RegisterAuthenticatorResult.h
	include/alibabacloud/idaas-doraemon/model/ServiceInvokeRequest.h
	include/alibabacloud/idaas-doraemon/model/ServiceInvokeResult.h
	include/alibabacloud/idaas-doraemon/model/UpdateAuthenticatorAttributeRequest.h
	include/alibabacloud/idaas-doraemon/model/UpdateAuthenticatorAttributeResult.h
	include/alibabacloud/idaas-doraemon/model/VerifyIdTokenRequest.h
	include/alibabacloud/idaas-doraemon/model/VerifyIdTokenResult.h
	include/alibabacloud/idaas-doraemon/model/VerifyUserAuthenticationRequest.h
	include/alibabacloud/idaas-doraemon/model/VerifyUserAuthenticationResult.h )

set(idaas-doraemon_src 
	src/Idaas-doraemonClient.cc
	src/model/CreateAuthenticatorRegistrationRequest.cc
	src/model/CreateAuthenticatorRegistrationResult.cc
	src/model/CreateUserAuthenticateOptionsRequest.cc
	src/model/CreateUserAuthenticateOptionsResult.cc
	src/model/DeregisterAuthenticatorRequest.cc
	src/model/DeregisterAuthenticatorResult.cc
	src/model/FetchAccessTokenRequest.cc
	src/model/FetchAccessTokenResult.cc
	src/model/GetAuthenticatorRequest.cc
	src/model/GetAuthenticatorResult.cc
	src/model/ListAuthenticationLogsRequest.cc
	src/model/ListAuthenticationLogsResult.cc
	src/model/ListAuthenticatorOpsLogsRequest.cc
	src/model/ListAuthenticatorOpsLogsResult.cc
	src/model/ListAuthenticatorsRequest.cc
	src/model/ListAuthenticatorsResult.cc
	src/model/ListCostUnitOrdersRequest.cc
	src/model/ListCostUnitOrdersResult.cc
	src/model/ListOrderConsumeStatisticRecordsRequest.cc
	src/model/ListOrderConsumeStatisticRecordsResult.cc
	src/model/ListPwnedPasswordsRequest.cc
	src/model/ListPwnedPasswordsResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/QuerySmsReportsRequest.cc
	src/model/QuerySmsReportsResult.cc
	src/model/QuerySmsUpsRequest.cc
	src/model/QuerySmsUpsResult.cc
	src/model/RegisterAuthenticatorRequest.cc
	src/model/RegisterAuthenticatorResult.cc
	src/model/ServiceInvokeRequest.cc
	src/model/ServiceInvokeResult.cc
	src/model/UpdateAuthenticatorAttributeRequest.cc
	src/model/UpdateAuthenticatorAttributeResult.cc
	src/model/VerifyIdTokenRequest.cc
	src/model/VerifyIdTokenResult.cc
	src/model/VerifyUserAuthenticationRequest.cc
	src/model/VerifyUserAuthenticationResult.cc )

add_library(idaas-doraemon ${LIB_TYPE}
	${idaas-doraemon_public_header}
	${idaas-doraemon_public_header_model}
	${idaas-doraemon_src})

set_target_properties(idaas-doraemon
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}idaas-doraemon
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(idaas-doraemon
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IDAAS_DORAEMON_LIBRARY)
endif()

target_include_directories(idaas-doraemon
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(idaas-doraemon
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(idaas-doraemon
		jsoncpp)
	target_include_directories(idaas-doraemon
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(idaas-doraemon
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(idaas-doraemon
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(idaas-doraemon
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(idaas-doraemon
		jsoncpp)
endif()

install(FILES ${idaas-doraemon_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/idaas-doraemon)
install(FILES ${idaas-doraemon_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/idaas-doraemon/model)
install(TARGETS idaas-doraemon
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)