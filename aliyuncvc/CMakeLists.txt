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

set(aliyuncvc_public_header 
	include/alibabacloud/aliyuncvc/AliyuncvcClient.h
	include/alibabacloud/aliyuncvc/AliyuncvcExport.h )

set(aliyuncvc_public_header_model 
	include/alibabacloud/aliyuncvc/model/ActiveMeetingRequest.h
	include/alibabacloud/aliyuncvc/model/ActiveMeetingResult.h
	include/alibabacloud/aliyuncvc/model/CreateEvaluationRequest.h
	include/alibabacloud/aliyuncvc/model/CreateEvaluationResult.h
	include/alibabacloud/aliyuncvc/model/CreateMeetingRequest.h
	include/alibabacloud/aliyuncvc/model/CreateMeetingResult.h
	include/alibabacloud/aliyuncvc/model/CreateUserRequest.h
	include/alibabacloud/aliyuncvc/model/CreateUserResult.h
	include/alibabacloud/aliyuncvc/model/DeleteMeetingRequest.h
	include/alibabacloud/aliyuncvc/model/DeleteMeetingResult.h
	include/alibabacloud/aliyuncvc/model/DeleteUserRequest.h
	include/alibabacloud/aliyuncvc/model/DeleteUserResult.h
	include/alibabacloud/aliyuncvc/model/GetMeetingRequest.h
	include/alibabacloud/aliyuncvc/model/GetMeetingResult.h
	include/alibabacloud/aliyuncvc/model/GetUserRequest.h
	include/alibabacloud/aliyuncvc/model/GetUserResult.h
	include/alibabacloud/aliyuncvc/model/JoinMeetingRequest.h
	include/alibabacloud/aliyuncvc/model/JoinMeetingResult.h
	include/alibabacloud/aliyuncvc/model/ListEvaluationsRequest.h
	include/alibabacloud/aliyuncvc/model/ListEvaluationsResult.h
	include/alibabacloud/aliyuncvc/model/ListMembersRequest.h
	include/alibabacloud/aliyuncvc/model/ListMembersResult.h
	include/alibabacloud/aliyuncvc/model/ListUsersRequest.h
	include/alibabacloud/aliyuncvc/model/ListUsersResult.h )

set(aliyuncvc_src 
	src/AliyuncvcClient.cc
	src/model/ActiveMeetingRequest.cc
	src/model/ActiveMeetingResult.cc
	src/model/CreateEvaluationRequest.cc
	src/model/CreateEvaluationResult.cc
	src/model/CreateMeetingRequest.cc
	src/model/CreateMeetingResult.cc
	src/model/CreateUserRequest.cc
	src/model/CreateUserResult.cc
	src/model/DeleteMeetingRequest.cc
	src/model/DeleteMeetingResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/GetMeetingRequest.cc
	src/model/GetMeetingResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/JoinMeetingRequest.cc
	src/model/JoinMeetingResult.cc
	src/model/ListEvaluationsRequest.cc
	src/model/ListEvaluationsResult.cc
	src/model/ListMembersRequest.cc
	src/model/ListMembersResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc )

add_library(aliyuncvc ${LIB_TYPE}
	${aliyuncvc_public_header}
	${aliyuncvc_public_header_model}
	${aliyuncvc_src})

set_target_properties(aliyuncvc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aliyuncvc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(aliyuncvc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ALIYUNCVC_LIBRARY)
endif()

target_include_directories(aliyuncvc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(aliyuncvc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(aliyuncvc
		jsoncpp)
	target_include_directories(aliyuncvc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(aliyuncvc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(aliyuncvc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(aliyuncvc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(aliyuncvc
		jsoncpp)
endif()

install(FILES ${aliyuncvc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aliyuncvc)
install(FILES ${aliyuncvc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/aliyuncvc/model)
install(TARGETS aliyuncvc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)