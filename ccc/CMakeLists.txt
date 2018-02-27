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

set(ccc_public_header 
	include/alibabacloud/ccc/CCCClient.h
	include/alibabacloud/ccc/CCCExport.h )

set(ccc_public_header_model 
	include/alibabacloud/ccc/model/ListRecordingsByContactIdRequest.h
	include/alibabacloud/ccc/model/ListRecordingsByContactIdResult.h
	include/alibabacloud/ccc/model/ListUsersOfSkillGroupRequest.h
	include/alibabacloud/ccc/model/ListUsersOfSkillGroupResult.h
	include/alibabacloud/ccc/model/DeleteSkillGroupRequest.h
	include/alibabacloud/ccc/model/DeleteSkillGroupResult.h
	include/alibabacloud/ccc/model/ModifyPhoneNumberRequest.h
	include/alibabacloud/ccc/model/ModifyPhoneNumberResult.h
	include/alibabacloud/ccc/model/ListUsersRequest.h
	include/alibabacloud/ccc/model/ListUsersResult.h
	include/alibabacloud/ccc/model/ListSkillGroupsRequest.h
	include/alibabacloud/ccc/model/ListSkillGroupsResult.h
	include/alibabacloud/ccc/model/ListSkillGroupsOfUserRequest.h
	include/alibabacloud/ccc/model/ListSkillGroupsOfUserResult.h
	include/alibabacloud/ccc/model/RemovePhoneNumberRequest.h
	include/alibabacloud/ccc/model/RemovePhoneNumberResult.h
	include/alibabacloud/ccc/model/ListCallDetailRecordsRequest.h
	include/alibabacloud/ccc/model/ListCallDetailRecordsResult.h
	include/alibabacloud/ccc/model/AddPhoneNumberRequest.h
	include/alibabacloud/ccc/model/AddPhoneNumberResult.h
	include/alibabacloud/ccc/model/ListRecordingsRequest.h
	include/alibabacloud/ccc/model/ListRecordingsResult.h
	include/alibabacloud/ccc/model/GetConfigRequest.h
	include/alibabacloud/ccc/model/GetConfigResult.h
	include/alibabacloud/ccc/model/DownloadRecordingRequest.h
	include/alibabacloud/ccc/model/DownloadRecordingResult.h
	include/alibabacloud/ccc/model/ListPhoneNumbersRequest.h
	include/alibabacloud/ccc/model/ListPhoneNumbersResult.h
	include/alibabacloud/ccc/model/RefreshTokenRequest.h
	include/alibabacloud/ccc/model/RefreshTokenResult.h
	include/alibabacloud/ccc/model/RequestLoginInfoRequest.h
	include/alibabacloud/ccc/model/RequestLoginInfoResult.h
	include/alibabacloud/ccc/model/GetServiceExtensionsRequest.h
	include/alibabacloud/ccc/model/GetServiceExtensionsResult.h
	include/alibabacloud/ccc/model/ListContactFlowsRequest.h
	include/alibabacloud/ccc/model/ListContactFlowsResult.h
	include/alibabacloud/ccc/model/ListRolesRequest.h
	include/alibabacloud/ccc/model/ListRolesResult.h
	include/alibabacloud/ccc/model/GetUserRequest.h
	include/alibabacloud/ccc/model/GetUserResult.h )

set(ccc_src 
	src/CCCClient.cc
	src/model/ListRecordingsByContactIdRequest.cc
	src/model/ListRecordingsByContactIdResult.cc
	src/model/ListUsersOfSkillGroupRequest.cc
	src/model/ListUsersOfSkillGroupResult.cc
	src/model/DeleteSkillGroupRequest.cc
	src/model/DeleteSkillGroupResult.cc
	src/model/ModifyPhoneNumberRequest.cc
	src/model/ModifyPhoneNumberResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/ListSkillGroupsRequest.cc
	src/model/ListSkillGroupsResult.cc
	src/model/ListSkillGroupsOfUserRequest.cc
	src/model/ListSkillGroupsOfUserResult.cc
	src/model/RemovePhoneNumberRequest.cc
	src/model/RemovePhoneNumberResult.cc
	src/model/ListCallDetailRecordsRequest.cc
	src/model/ListCallDetailRecordsResult.cc
	src/model/AddPhoneNumberRequest.cc
	src/model/AddPhoneNumberResult.cc
	src/model/ListRecordingsRequest.cc
	src/model/ListRecordingsResult.cc
	src/model/GetConfigRequest.cc
	src/model/GetConfigResult.cc
	src/model/DownloadRecordingRequest.cc
	src/model/DownloadRecordingResult.cc
	src/model/ListPhoneNumbersRequest.cc
	src/model/ListPhoneNumbersResult.cc
	src/model/RefreshTokenRequest.cc
	src/model/RefreshTokenResult.cc
	src/model/RequestLoginInfoRequest.cc
	src/model/RequestLoginInfoResult.cc
	src/model/GetServiceExtensionsRequest.cc
	src/model/GetServiceExtensionsResult.cc
	src/model/ListContactFlowsRequest.cc
	src/model/ListContactFlowsResult.cc
	src/model/ListRolesRequest.cc
	src/model/ListRolesResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc )

add_library(ccc ${LIB_TYPE}
	${ccc_public_header}
	${ccc_public_header_model}
	${ccc_src})

set_target_properties(ccc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ccc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ccc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CCC_LIBRARY)
endif()

target_include_directories(ccc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ccc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ccc
		jsoncpp)
	target_include_directories(ccc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ccc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ccc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ccc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ccc
		jsoncpp)
endif()

install(FILES ${ccc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ccc)
install(FILES ${ccc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ccc/model)
install(TARGETS ccc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)