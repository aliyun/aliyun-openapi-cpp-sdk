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
	include/alibabacloud/aliyuncvc/model/ActiveMeetingCodeRequest.h
	include/alibabacloud/aliyuncvc/model/ActiveMeetingCodeResult.h
	include/alibabacloud/aliyuncvc/model/CheckMeetingCodeRequest.h
	include/alibabacloud/aliyuncvc/model/CheckMeetingCodeResult.h
	include/alibabacloud/aliyuncvc/model/CreateMeetingRequest.h
	include/alibabacloud/aliyuncvc/model/CreateMeetingResult.h
	include/alibabacloud/aliyuncvc/model/CreateUserRequest.h
	include/alibabacloud/aliyuncvc/model/CreateUserResult.h
	include/alibabacloud/aliyuncvc/model/CreateUserEvaluationsRequest.h
	include/alibabacloud/aliyuncvc/model/CreateUserEvaluationsResult.h
	include/alibabacloud/aliyuncvc/model/DeleteUserRequest.h
	include/alibabacloud/aliyuncvc/model/DeleteUserResult.h
	include/alibabacloud/aliyuncvc/model/ListCommoditiesRequest.h
	include/alibabacloud/aliyuncvc/model/ListCommoditiesResult.h
	include/alibabacloud/aliyuncvc/model/QueryIsvUserInfoRequest.h
	include/alibabacloud/aliyuncvc/model/QueryIsvUserInfoResult.h
	include/alibabacloud/aliyuncvc/model/QueryMeetingInfoRequest.h
	include/alibabacloud/aliyuncvc/model/QueryMeetingInfoResult.h
	include/alibabacloud/aliyuncvc/model/QueryMemberRecordRequest.h
	include/alibabacloud/aliyuncvc/model/QueryMemberRecordResult.h
	include/alibabacloud/aliyuncvc/model/QueryStatisticsRequest.h
	include/alibabacloud/aliyuncvc/model/QueryStatisticsResult.h
	include/alibabacloud/aliyuncvc/model/QueryUserBuyAttributeRequest.h
	include/alibabacloud/aliyuncvc/model/QueryUserBuyAttributeResult.h
	include/alibabacloud/aliyuncvc/model/QueryUserEvaluationRequest.h
	include/alibabacloud/aliyuncvc/model/QueryUserEvaluationResult.h
	include/alibabacloud/aliyuncvc/model/QueryUserInfoRequest.h
	include/alibabacloud/aliyuncvc/model/QueryUserInfoResult.h
	include/alibabacloud/aliyuncvc/model/QueryUserListRequest.h
	include/alibabacloud/aliyuncvc/model/QueryUserListResult.h
	include/alibabacloud/aliyuncvc/model/RemoveMeetingRequest.h
	include/alibabacloud/aliyuncvc/model/RemoveMeetingResult.h )

set(aliyuncvc_src 
	src/AliyuncvcClient.cc
	src/model/ActiveMeetingCodeRequest.cc
	src/model/ActiveMeetingCodeResult.cc
	src/model/CheckMeetingCodeRequest.cc
	src/model/CheckMeetingCodeResult.cc
	src/model/CreateMeetingRequest.cc
	src/model/CreateMeetingResult.cc
	src/model/CreateUserRequest.cc
	src/model/CreateUserResult.cc
	src/model/CreateUserEvaluationsRequest.cc
	src/model/CreateUserEvaluationsResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/ListCommoditiesRequest.cc
	src/model/ListCommoditiesResult.cc
	src/model/QueryIsvUserInfoRequest.cc
	src/model/QueryIsvUserInfoResult.cc
	src/model/QueryMeetingInfoRequest.cc
	src/model/QueryMeetingInfoResult.cc
	src/model/QueryMemberRecordRequest.cc
	src/model/QueryMemberRecordResult.cc
	src/model/QueryStatisticsRequest.cc
	src/model/QueryStatisticsResult.cc
	src/model/QueryUserBuyAttributeRequest.cc
	src/model/QueryUserBuyAttributeResult.cc
	src/model/QueryUserEvaluationRequest.cc
	src/model/QueryUserEvaluationResult.cc
	src/model/QueryUserInfoRequest.cc
	src/model/QueryUserInfoResult.cc
	src/model/QueryUserListRequest.cc
	src/model/QueryUserListResult.cc
	src/model/RemoveMeetingRequest.cc
	src/model/RemoveMeetingResult.cc )

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