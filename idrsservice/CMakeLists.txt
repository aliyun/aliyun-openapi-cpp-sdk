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

set(idrsservice_public_header 
	include/alibabacloud/idrsservice/IdrsserviceClient.h
	include/alibabacloud/idrsservice/IdrsserviceExport.h )

set(idrsservice_public_header_model 
	include/alibabacloud/idrsservice/model/CheckServiceLinkedRoleRequest.h
	include/alibabacloud/idrsservice/model/CheckServiceLinkedRoleResult.h
	include/alibabacloud/idrsservice/model/CreateAppRequest.h
	include/alibabacloud/idrsservice/model/CreateAppResult.h
	include/alibabacloud/idrsservice/model/CreateDepartmentRequest.h
	include/alibabacloud/idrsservice/model/CreateDepartmentResult.h
	include/alibabacloud/idrsservice/model/CreateLiveRequest.h
	include/alibabacloud/idrsservice/model/CreateLiveResult.h
	include/alibabacloud/idrsservice/model/CreateLiveDetectionRequest.h
	include/alibabacloud/idrsservice/model/CreateLiveDetectionResult.h
	include/alibabacloud/idrsservice/model/CreateRuleRequest.h
	include/alibabacloud/idrsservice/model/CreateRuleResult.h
	include/alibabacloud/idrsservice/model/CreateStatisticsRecordRequest.h
	include/alibabacloud/idrsservice/model/CreateStatisticsRecordResult.h
	include/alibabacloud/idrsservice/model/CreateStatisticsTaskRequest.h
	include/alibabacloud/idrsservice/model/CreateStatisticsTaskResult.h
	include/alibabacloud/idrsservice/model/CreateTaskGroupRequest.h
	include/alibabacloud/idrsservice/model/CreateTaskGroupResult.h
	include/alibabacloud/idrsservice/model/CreateUserDepartmentsRequest.h
	include/alibabacloud/idrsservice/model/CreateUserDepartmentsResult.h
	include/alibabacloud/idrsservice/model/DeleteAppRequest.h
	include/alibabacloud/idrsservice/model/DeleteAppResult.h
	include/alibabacloud/idrsservice/model/DeleteDepartmentRequest.h
	include/alibabacloud/idrsservice/model/DeleteDepartmentResult.h
	include/alibabacloud/idrsservice/model/DeleteRuleRequest.h
	include/alibabacloud/idrsservice/model/DeleteRuleResult.h
	include/alibabacloud/idrsservice/model/DeleteUserRequest.h
	include/alibabacloud/idrsservice/model/DeleteUserResult.h
	include/alibabacloud/idrsservice/model/DeleteUserDepartmentsRequest.h
	include/alibabacloud/idrsservice/model/DeleteUserDepartmentsResult.h
	include/alibabacloud/idrsservice/model/ExitLiveRequest.h
	include/alibabacloud/idrsservice/model/ExitLiveResult.h
	include/alibabacloud/idrsservice/model/GetAppRequest.h
	include/alibabacloud/idrsservice/model/GetAppResult.h
	include/alibabacloud/idrsservice/model/GetDepartmentRequest.h
	include/alibabacloud/idrsservice/model/GetDepartmentResult.h
	include/alibabacloud/idrsservice/model/GetDetectEvaluationRequest.h
	include/alibabacloud/idrsservice/model/GetDetectEvaluationResult.h
	include/alibabacloud/idrsservice/model/GetDetectionRequest.h
	include/alibabacloud/idrsservice/model/GetDetectionResult.h
	include/alibabacloud/idrsservice/model/GetModelSignedUrlRequest.h
	include/alibabacloud/idrsservice/model/GetModelSignedUrlResult.h
	include/alibabacloud/idrsservice/model/GetPreSignedUrlRequest.h
	include/alibabacloud/idrsservice/model/GetPreSignedUrlResult.h
	include/alibabacloud/idrsservice/model/GetRuleRequest.h
	include/alibabacloud/idrsservice/model/GetRuleResult.h
	include/alibabacloud/idrsservice/model/GetServiceConfigurationRequest.h
	include/alibabacloud/idrsservice/model/GetServiceConfigurationResult.h
	include/alibabacloud/idrsservice/model/GetSignedUrlRequest.h
	include/alibabacloud/idrsservice/model/GetSignedUrlResult.h
	include/alibabacloud/idrsservice/model/GetSlrConfigurationRequest.h
	include/alibabacloud/idrsservice/model/GetSlrConfigurationResult.h
	include/alibabacloud/idrsservice/model/GetStatisticsRequest.h
	include/alibabacloud/idrsservice/model/GetStatisticsResult.h
	include/alibabacloud/idrsservice/model/GetTaskRequest.h
	include/alibabacloud/idrsservice/model/GetTaskResult.h
	include/alibabacloud/idrsservice/model/GetTaskGroupRequest.h
	include/alibabacloud/idrsservice/model/GetTaskGroupResult.h
	include/alibabacloud/idrsservice/model/GetUserRequest.h
	include/alibabacloud/idrsservice/model/GetUserResult.h
	include/alibabacloud/idrsservice/model/InitializeServiceLinkedRoleRequest.h
	include/alibabacloud/idrsservice/model/InitializeServiceLinkedRoleResult.h
	include/alibabacloud/idrsservice/model/JoinLiveRequest.h
	include/alibabacloud/idrsservice/model/JoinLiveResult.h
	include/alibabacloud/idrsservice/model/ListAppsRequest.h
	include/alibabacloud/idrsservice/model/ListAppsResult.h
	include/alibabacloud/idrsservice/model/ListDepartmentsRequest.h
	include/alibabacloud/idrsservice/model/ListDepartmentsResult.h
	include/alibabacloud/idrsservice/model/ListDetectionsRequest.h
	include/alibabacloud/idrsservice/model/ListDetectionsResult.h
	include/alibabacloud/idrsservice/model/ListFilesRequest.h
	include/alibabacloud/idrsservice/model/ListFilesResult.h
	include/alibabacloud/idrsservice/model/ListLivesRequest.h
	include/alibabacloud/idrsservice/model/ListLivesResult.h
	include/alibabacloud/idrsservice/model/ListRolesRequest.h
	include/alibabacloud/idrsservice/model/ListRolesResult.h
	include/alibabacloud/idrsservice/model/ListRulesRequest.h
	include/alibabacloud/idrsservice/model/ListRulesResult.h
	include/alibabacloud/idrsservice/model/ListStatisticsTaskRequest.h
	include/alibabacloud/idrsservice/model/ListStatisticsTaskResult.h
	include/alibabacloud/idrsservice/model/ListTaskGroupsRequest.h
	include/alibabacloud/idrsservice/model/ListTaskGroupsResult.h
	include/alibabacloud/idrsservice/model/ListTaskItemsRequest.h
	include/alibabacloud/idrsservice/model/ListTaskItemsResult.h
	include/alibabacloud/idrsservice/model/ListTasksRequest.h
	include/alibabacloud/idrsservice/model/ListTasksResult.h
	include/alibabacloud/idrsservice/model/ListUsersRequest.h
	include/alibabacloud/idrsservice/model/ListUsersResult.h
	include/alibabacloud/idrsservice/model/UpdateAppRequest.h
	include/alibabacloud/idrsservice/model/UpdateAppResult.h
	include/alibabacloud/idrsservice/model/UpdateDepartmentRequest.h
	include/alibabacloud/idrsservice/model/UpdateDepartmentResult.h
	include/alibabacloud/idrsservice/model/UpdateLiveRequest.h
	include/alibabacloud/idrsservice/model/UpdateLiveResult.h
	include/alibabacloud/idrsservice/model/UpdateRuleRequest.h
	include/alibabacloud/idrsservice/model/UpdateRuleResult.h
	include/alibabacloud/idrsservice/model/UpdateServiceConfigurationRequest.h
	include/alibabacloud/idrsservice/model/UpdateServiceConfigurationResult.h
	include/alibabacloud/idrsservice/model/UpdateSlrConfigurationRequest.h
	include/alibabacloud/idrsservice/model/UpdateSlrConfigurationResult.h
	include/alibabacloud/idrsservice/model/UpdateUserRequest.h
	include/alibabacloud/idrsservice/model/UpdateUserResult.h )

set(idrsservice_src 
	src/IdrsserviceClient.cc
	src/model/CheckServiceLinkedRoleRequest.cc
	src/model/CheckServiceLinkedRoleResult.cc
	src/model/CreateAppRequest.cc
	src/model/CreateAppResult.cc
	src/model/CreateDepartmentRequest.cc
	src/model/CreateDepartmentResult.cc
	src/model/CreateLiveRequest.cc
	src/model/CreateLiveResult.cc
	src/model/CreateLiveDetectionRequest.cc
	src/model/CreateLiveDetectionResult.cc
	src/model/CreateRuleRequest.cc
	src/model/CreateRuleResult.cc
	src/model/CreateStatisticsRecordRequest.cc
	src/model/CreateStatisticsRecordResult.cc
	src/model/CreateStatisticsTaskRequest.cc
	src/model/CreateStatisticsTaskResult.cc
	src/model/CreateTaskGroupRequest.cc
	src/model/CreateTaskGroupResult.cc
	src/model/CreateUserDepartmentsRequest.cc
	src/model/CreateUserDepartmentsResult.cc
	src/model/DeleteAppRequest.cc
	src/model/DeleteAppResult.cc
	src/model/DeleteDepartmentRequest.cc
	src/model/DeleteDepartmentResult.cc
	src/model/DeleteRuleRequest.cc
	src/model/DeleteRuleResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DeleteUserDepartmentsRequest.cc
	src/model/DeleteUserDepartmentsResult.cc
	src/model/ExitLiveRequest.cc
	src/model/ExitLiveResult.cc
	src/model/GetAppRequest.cc
	src/model/GetAppResult.cc
	src/model/GetDepartmentRequest.cc
	src/model/GetDepartmentResult.cc
	src/model/GetDetectEvaluationRequest.cc
	src/model/GetDetectEvaluationResult.cc
	src/model/GetDetectionRequest.cc
	src/model/GetDetectionResult.cc
	src/model/GetModelSignedUrlRequest.cc
	src/model/GetModelSignedUrlResult.cc
	src/model/GetPreSignedUrlRequest.cc
	src/model/GetPreSignedUrlResult.cc
	src/model/GetRuleRequest.cc
	src/model/GetRuleResult.cc
	src/model/GetServiceConfigurationRequest.cc
	src/model/GetServiceConfigurationResult.cc
	src/model/GetSignedUrlRequest.cc
	src/model/GetSignedUrlResult.cc
	src/model/GetSlrConfigurationRequest.cc
	src/model/GetSlrConfigurationResult.cc
	src/model/GetStatisticsRequest.cc
	src/model/GetStatisticsResult.cc
	src/model/GetTaskRequest.cc
	src/model/GetTaskResult.cc
	src/model/GetTaskGroupRequest.cc
	src/model/GetTaskGroupResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/InitializeServiceLinkedRoleRequest.cc
	src/model/InitializeServiceLinkedRoleResult.cc
	src/model/JoinLiveRequest.cc
	src/model/JoinLiveResult.cc
	src/model/ListAppsRequest.cc
	src/model/ListAppsResult.cc
	src/model/ListDepartmentsRequest.cc
	src/model/ListDepartmentsResult.cc
	src/model/ListDetectionsRequest.cc
	src/model/ListDetectionsResult.cc
	src/model/ListFilesRequest.cc
	src/model/ListFilesResult.cc
	src/model/ListLivesRequest.cc
	src/model/ListLivesResult.cc
	src/model/ListRolesRequest.cc
	src/model/ListRolesResult.cc
	src/model/ListRulesRequest.cc
	src/model/ListRulesResult.cc
	src/model/ListStatisticsTaskRequest.cc
	src/model/ListStatisticsTaskResult.cc
	src/model/ListTaskGroupsRequest.cc
	src/model/ListTaskGroupsResult.cc
	src/model/ListTaskItemsRequest.cc
	src/model/ListTaskItemsResult.cc
	src/model/ListTasksRequest.cc
	src/model/ListTasksResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/UpdateAppRequest.cc
	src/model/UpdateAppResult.cc
	src/model/UpdateDepartmentRequest.cc
	src/model/UpdateDepartmentResult.cc
	src/model/UpdateLiveRequest.cc
	src/model/UpdateLiveResult.cc
	src/model/UpdateRuleRequest.cc
	src/model/UpdateRuleResult.cc
	src/model/UpdateServiceConfigurationRequest.cc
	src/model/UpdateServiceConfigurationResult.cc
	src/model/UpdateSlrConfigurationRequest.cc
	src/model/UpdateSlrConfigurationResult.cc
	src/model/UpdateUserRequest.cc
	src/model/UpdateUserResult.cc )

add_library(idrsservice ${LIB_TYPE}
	${idrsservice_public_header}
	${idrsservice_public_header_model}
	${idrsservice_src})

set_target_properties(idrsservice
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}idrsservice
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(idrsservice
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IDRSSERVICE_LIBRARY)
endif()

target_include_directories(idrsservice
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(idrsservice
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(idrsservice
		jsoncpp)
	target_include_directories(idrsservice
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(idrsservice
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(idrsservice
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(idrsservice
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(idrsservice
		jsoncpp)
endif()

install(FILES ${idrsservice_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/idrsservice)
install(FILES ${idrsservice_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/idrsservice/model)
install(TARGETS idrsservice
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)