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
	include/alibabacloud/ccc/model/GetJobListRequest.h
	include/alibabacloud/ccc/model/GetJobListResult.h
	include/alibabacloud/ccc/model/ListUsersRequest.h
	include/alibabacloud/ccc/model/ListUsersResult.h
	include/alibabacloud/ccc/model/ListSkillGroupsOfUserRequest.h
	include/alibabacloud/ccc/model/ListSkillGroupsOfUserResult.h
	include/alibabacloud/ccc/model/TwoPartiesCallRequest.h
	include/alibabacloud/ccc/model/TwoPartiesCallResult.h
	include/alibabacloud/ccc/model/DeleteSurveyRequest.h
	include/alibabacloud/ccc/model/DeleteSurveyResult.h
	include/alibabacloud/ccc/model/ListPhoneNumbersRequest.h
	include/alibabacloud/ccc/model/ListPhoneNumbersResult.h
	include/alibabacloud/ccc/model/DownloadUnreachableContactsRequest.h
	include/alibabacloud/ccc/model/DownloadUnreachableContactsResult.h
	include/alibabacloud/ccc/model/DialogueRequest.h
	include/alibabacloud/ccc/model/DialogueResult.h
	include/alibabacloud/ccc/model/RefreshTokenRequest.h
	include/alibabacloud/ccc/model/RefreshTokenResult.h
	include/alibabacloud/ccc/model/CreateBatchJobsRequest.h
	include/alibabacloud/ccc/model/CreateBatchJobsResult.h
	include/alibabacloud/ccc/model/RequestLoginInfoRequest.h
	include/alibabacloud/ccc/model/RequestLoginInfoResult.h
	include/alibabacloud/ccc/model/GetJobTemplateDownloadParamsRequest.h
	include/alibabacloud/ccc/model/GetJobTemplateDownloadParamsResult.h
	include/alibabacloud/ccc/model/RemoveUsersRequest.h
	include/alibabacloud/ccc/model/RemoveUsersResult.h
	include/alibabacloud/ccc/model/CancelPredictiveJobsRequest.h
	include/alibabacloud/ccc/model/CancelPredictiveJobsResult.h
	include/alibabacloud/ccc/model/StartBack2BackCallRequest.h
	include/alibabacloud/ccc/model/StartBack2BackCallResult.h
	include/alibabacloud/ccc/model/PublishSurveyRequest.h
	include/alibabacloud/ccc/model/PublishSurveyResult.h
	include/alibabacloud/ccc/model/GetUserRequest.h
	include/alibabacloud/ccc/model/GetUserResult.h
	include/alibabacloud/ccc/model/GetConversationListRequest.h
	include/alibabacloud/ccc/model/GetConversationListResult.h
	include/alibabacloud/ccc/model/ListUsersOfSkillGroupRequest.h
	include/alibabacloud/ccc/model/ListUsersOfSkillGroupResult.h
	include/alibabacloud/ccc/model/ListJobsByGroupRequest.h
	include/alibabacloud/ccc/model/ListJobsByGroupResult.h
	include/alibabacloud/ccc/model/ListPredictiveJobStatusRequest.h
	include/alibabacloud/ccc/model/ListPredictiveJobStatusResult.h
	include/alibabacloud/ccc/model/ListJobGroupsRequest.h
	include/alibabacloud/ccc/model/ListJobGroupsResult.h
	include/alibabacloud/ccc/model/ListCallDetailRecordsRequest.h
	include/alibabacloud/ccc/model/ListCallDetailRecordsResult.h
	include/alibabacloud/ccc/model/AddPhoneNumberRequest.h
	include/alibabacloud/ccc/model/AddPhoneNumberResult.h
	include/alibabacloud/ccc/model/ListRecordingsRequest.h
	include/alibabacloud/ccc/model/ListRecordingsResult.h
	include/alibabacloud/ccc/model/EncryptRequest.h
	include/alibabacloud/ccc/model/EncryptResult.h
	include/alibabacloud/ccc/model/SubmitBatchJobsRequest.h
	include/alibabacloud/ccc/model/SubmitBatchJobsResult.h
	include/alibabacloud/ccc/model/ListSurveysRequest.h
	include/alibabacloud/ccc/model/ListSurveysResult.h
	include/alibabacloud/ccc/model/GetJobDataUploadParamsRequest.h
	include/alibabacloud/ccc/model/GetJobDataUploadParamsResult.h
	include/alibabacloud/ccc/model/ListBasicStatisticsReportSubItemsRequest.h
	include/alibabacloud/ccc/model/ListBasicStatisticsReportSubItemsResult.h
	include/alibabacloud/ccc/model/SuspendJobsRequest.h
	include/alibabacloud/ccc/model/SuspendJobsResult.h
	include/alibabacloud/ccc/model/GetJobGroupRequest.h
	include/alibabacloud/ccc/model/GetJobGroupResult.h
	include/alibabacloud/ccc/model/GetJobStatusByCallIdRequest.h
	include/alibabacloud/ccc/model/GetJobStatusByCallIdResult.h
	include/alibabacloud/ccc/model/ListUnreachableContactsRequest.h
	include/alibabacloud/ccc/model/ListUnreachableContactsResult.h
	include/alibabacloud/ccc/model/ModifySkillGroupRequest.h
	include/alibabacloud/ccc/model/ModifySkillGroupResult.h
	include/alibabacloud/ccc/model/GetConversationDetailByContactIdRequest.h
	include/alibabacloud/ccc/model/GetConversationDetailByContactIdResult.h
	include/alibabacloud/ccc/model/ListRecordingsByContactIdRequest.h
	include/alibabacloud/ccc/model/ListRecordingsByContactIdResult.h
	include/alibabacloud/ccc/model/LaunchAppraiseRequest.h
	include/alibabacloud/ccc/model/LaunchAppraiseResult.h
	include/alibabacloud/ccc/model/DeleteSkillGroupRequest.h
	include/alibabacloud/ccc/model/DeleteSkillGroupResult.h
	include/alibabacloud/ccc/model/ModifyUserRequest.h
	include/alibabacloud/ccc/model/ModifyUserResult.h
	include/alibabacloud/ccc/model/ListSkillGroupsRequest.h
	include/alibabacloud/ccc/model/ListSkillGroupsResult.h
	include/alibabacloud/ccc/model/CreateScenarioRequest.h
	include/alibabacloud/ccc/model/CreateScenarioResult.h
	include/alibabacloud/ccc/model/RemovePhoneNumberRequest.h
	include/alibabacloud/ccc/model/RemovePhoneNumberResult.h
	include/alibabacloud/ccc/model/PickLocalNumberRequest.h
	include/alibabacloud/ccc/model/PickLocalNumberResult.h
	include/alibabacloud/ccc/model/GetJobRequest.h
	include/alibabacloud/ccc/model/GetJobResult.h
	include/alibabacloud/ccc/model/StartJobRequest.h
	include/alibabacloud/ccc/model/StartJobResult.h
	include/alibabacloud/ccc/model/CancelJobsRequest.h
	include/alibabacloud/ccc/model/CancelJobsResult.h
	include/alibabacloud/ccc/model/GetConfigRequest.h
	include/alibabacloud/ccc/model/GetConfigResult.h
	include/alibabacloud/ccc/model/DownloadRecordingRequest.h
	include/alibabacloud/ccc/model/DownloadRecordingResult.h
	include/alibabacloud/ccc/model/GenerateAgentStatisticReportRequest.h
	include/alibabacloud/ccc/model/GenerateAgentStatisticReportResult.h
	include/alibabacloud/ccc/model/CreateScenarioFromTemplateRequest.h
	include/alibabacloud/ccc/model/CreateScenarioFromTemplateResult.h
	include/alibabacloud/ccc/model/CreateJobGroupRequest.h
	include/alibabacloud/ccc/model/CreateJobGroupResult.h
	include/alibabacloud/ccc/model/GetTaskListRequest.h
	include/alibabacloud/ccc/model/GetTaskListResult.h
	include/alibabacloud/ccc/model/DownloadOriginalStatisticsReportRequest.h
	include/alibabacloud/ccc/model/DownloadOriginalStatisticsReportResult.h
	include/alibabacloud/ccc/model/ListScenarioTemplatesRequest.h
	include/alibabacloud/ccc/model/ListScenarioTemplatesResult.h
	include/alibabacloud/ccc/model/ResumeJobsRequest.h
	include/alibabacloud/ccc/model/ResumeJobsResult.h
	include/alibabacloud/ccc/model/AssignUsersRequest.h
	include/alibabacloud/ccc/model/AssignUsersResult.h
	include/alibabacloud/ccc/model/GetSurveyRequest.h
	include/alibabacloud/ccc/model/GetSurveyResult.h
	include/alibabacloud/ccc/model/ListRolesRequest.h
	include/alibabacloud/ccc/model/ListRolesResult.h
	include/alibabacloud/ccc/model/ListConfigRequest.h
	include/alibabacloud/ccc/model/ListConfigResult.h
	include/alibabacloud/ccc/model/LaunchShortMessageAppraiseRequest.h
	include/alibabacloud/ccc/model/LaunchShortMessageAppraiseResult.h
	include/alibabacloud/ccc/model/ModifyPhoneNumberRequest.h
	include/alibabacloud/ccc/model/ModifyPhoneNumberResult.h
	include/alibabacloud/ccc/model/ListScenariosRequest.h
	include/alibabacloud/ccc/model/ListScenariosResult.h
	include/alibabacloud/ccc/model/ListRealTimeAgentRequest.h
	include/alibabacloud/ccc/model/ListRealTimeAgentResult.h
	include/alibabacloud/ccc/model/AssignJobsRequest.h
	include/alibabacloud/ccc/model/AssignJobsResult.h
	include/alibabacloud/ccc/model/CreateUserRequest.h
	include/alibabacloud/ccc/model/CreateUserResult.h
	include/alibabacloud/ccc/model/ListPrivilegesOfUserRequest.h
	include/alibabacloud/ccc/model/ListPrivilegesOfUserResult.h
	include/alibabacloud/ccc/model/GetNumberRegionInfoRequest.h
	include/alibabacloud/ccc/model/GetNumberRegionInfoResult.h
	include/alibabacloud/ccc/model/GetScenarioRequest.h
	include/alibabacloud/ccc/model/GetScenarioResult.h
	include/alibabacloud/ccc/model/CreatePredictiveJobsRequest.h
	include/alibabacloud/ccc/model/CreatePredictiveJobsResult.h
	include/alibabacloud/ccc/model/GetAgentDataRequest.h
	include/alibabacloud/ccc/model/GetAgentDataResult.h
	include/alibabacloud/ccc/model/CreateSurveyRequest.h
	include/alibabacloud/ccc/model/CreateSurveyResult.h
	include/alibabacloud/ccc/model/ListJobStatusRequest.h
	include/alibabacloud/ccc/model/ListJobStatusResult.h
	include/alibabacloud/ccc/model/ModifySurveyRequest.h
	include/alibabacloud/ccc/model/ModifySurveyResult.h
	include/alibabacloud/ccc/model/ModifyScenarioRequest.h
	include/alibabacloud/ccc/model/ModifyScenarioResult.h
	include/alibabacloud/ccc/model/CreateSkillGroupRequest.h
	include/alibabacloud/ccc/model/CreateSkillGroupResult.h
	include/alibabacloud/ccc/model/GetServiceExtensionsRequest.h
	include/alibabacloud/ccc/model/GetServiceExtensionsResult.h
	include/alibabacloud/ccc/model/ListContactFlowsRequest.h
	include/alibabacloud/ccc/model/ListContactFlowsResult.h
	include/alibabacloud/ccc/model/DeleteJobGroupRequest.h
	include/alibabacloud/ccc/model/DeleteJobGroupResult.h )

set(ccc_src 
	src/CCCClient.cc
	src/model/GetJobListRequest.cc
	src/model/GetJobListResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/ListSkillGroupsOfUserRequest.cc
	src/model/ListSkillGroupsOfUserResult.cc
	src/model/TwoPartiesCallRequest.cc
	src/model/TwoPartiesCallResult.cc
	src/model/DeleteSurveyRequest.cc
	src/model/DeleteSurveyResult.cc
	src/model/ListPhoneNumbersRequest.cc
	src/model/ListPhoneNumbersResult.cc
	src/model/DownloadUnreachableContactsRequest.cc
	src/model/DownloadUnreachableContactsResult.cc
	src/model/DialogueRequest.cc
	src/model/DialogueResult.cc
	src/model/RefreshTokenRequest.cc
	src/model/RefreshTokenResult.cc
	src/model/CreateBatchJobsRequest.cc
	src/model/CreateBatchJobsResult.cc
	src/model/RequestLoginInfoRequest.cc
	src/model/RequestLoginInfoResult.cc
	src/model/GetJobTemplateDownloadParamsRequest.cc
	src/model/GetJobTemplateDownloadParamsResult.cc
	src/model/RemoveUsersRequest.cc
	src/model/RemoveUsersResult.cc
	src/model/CancelPredictiveJobsRequest.cc
	src/model/CancelPredictiveJobsResult.cc
	src/model/StartBack2BackCallRequest.cc
	src/model/StartBack2BackCallResult.cc
	src/model/PublishSurveyRequest.cc
	src/model/PublishSurveyResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/GetConversationListRequest.cc
	src/model/GetConversationListResult.cc
	src/model/ListUsersOfSkillGroupRequest.cc
	src/model/ListUsersOfSkillGroupResult.cc
	src/model/ListJobsByGroupRequest.cc
	src/model/ListJobsByGroupResult.cc
	src/model/ListPredictiveJobStatusRequest.cc
	src/model/ListPredictiveJobStatusResult.cc
	src/model/ListJobGroupsRequest.cc
	src/model/ListJobGroupsResult.cc
	src/model/ListCallDetailRecordsRequest.cc
	src/model/ListCallDetailRecordsResult.cc
	src/model/AddPhoneNumberRequest.cc
	src/model/AddPhoneNumberResult.cc
	src/model/ListRecordingsRequest.cc
	src/model/ListRecordingsResult.cc
	src/model/EncryptRequest.cc
	src/model/EncryptResult.cc
	src/model/SubmitBatchJobsRequest.cc
	src/model/SubmitBatchJobsResult.cc
	src/model/ListSurveysRequest.cc
	src/model/ListSurveysResult.cc
	src/model/GetJobDataUploadParamsRequest.cc
	src/model/GetJobDataUploadParamsResult.cc
	src/model/ListBasicStatisticsReportSubItemsRequest.cc
	src/model/ListBasicStatisticsReportSubItemsResult.cc
	src/model/SuspendJobsRequest.cc
	src/model/SuspendJobsResult.cc
	src/model/GetJobGroupRequest.cc
	src/model/GetJobGroupResult.cc
	src/model/GetJobStatusByCallIdRequest.cc
	src/model/GetJobStatusByCallIdResult.cc
	src/model/ListUnreachableContactsRequest.cc
	src/model/ListUnreachableContactsResult.cc
	src/model/ModifySkillGroupRequest.cc
	src/model/ModifySkillGroupResult.cc
	src/model/GetConversationDetailByContactIdRequest.cc
	src/model/GetConversationDetailByContactIdResult.cc
	src/model/ListRecordingsByContactIdRequest.cc
	src/model/ListRecordingsByContactIdResult.cc
	src/model/LaunchAppraiseRequest.cc
	src/model/LaunchAppraiseResult.cc
	src/model/DeleteSkillGroupRequest.cc
	src/model/DeleteSkillGroupResult.cc
	src/model/ModifyUserRequest.cc
	src/model/ModifyUserResult.cc
	src/model/ListSkillGroupsRequest.cc
	src/model/ListSkillGroupsResult.cc
	src/model/CreateScenarioRequest.cc
	src/model/CreateScenarioResult.cc
	src/model/RemovePhoneNumberRequest.cc
	src/model/RemovePhoneNumberResult.cc
	src/model/PickLocalNumberRequest.cc
	src/model/PickLocalNumberResult.cc
	src/model/GetJobRequest.cc
	src/model/GetJobResult.cc
	src/model/StartJobRequest.cc
	src/model/StartJobResult.cc
	src/model/CancelJobsRequest.cc
	src/model/CancelJobsResult.cc
	src/model/GetConfigRequest.cc
	src/model/GetConfigResult.cc
	src/model/DownloadRecordingRequest.cc
	src/model/DownloadRecordingResult.cc
	src/model/GenerateAgentStatisticReportRequest.cc
	src/model/GenerateAgentStatisticReportResult.cc
	src/model/CreateScenarioFromTemplateRequest.cc
	src/model/CreateScenarioFromTemplateResult.cc
	src/model/CreateJobGroupRequest.cc
	src/model/CreateJobGroupResult.cc
	src/model/GetTaskListRequest.cc
	src/model/GetTaskListResult.cc
	src/model/DownloadOriginalStatisticsReportRequest.cc
	src/model/DownloadOriginalStatisticsReportResult.cc
	src/model/ListScenarioTemplatesRequest.cc
	src/model/ListScenarioTemplatesResult.cc
	src/model/ResumeJobsRequest.cc
	src/model/ResumeJobsResult.cc
	src/model/AssignUsersRequest.cc
	src/model/AssignUsersResult.cc
	src/model/GetSurveyRequest.cc
	src/model/GetSurveyResult.cc
	src/model/ListRolesRequest.cc
	src/model/ListRolesResult.cc
	src/model/ListConfigRequest.cc
	src/model/ListConfigResult.cc
	src/model/LaunchShortMessageAppraiseRequest.cc
	src/model/LaunchShortMessageAppraiseResult.cc
	src/model/ModifyPhoneNumberRequest.cc
	src/model/ModifyPhoneNumberResult.cc
	src/model/ListScenariosRequest.cc
	src/model/ListScenariosResult.cc
	src/model/ListRealTimeAgentRequest.cc
	src/model/ListRealTimeAgentResult.cc
	src/model/AssignJobsRequest.cc
	src/model/AssignJobsResult.cc
	src/model/CreateUserRequest.cc
	src/model/CreateUserResult.cc
	src/model/ListPrivilegesOfUserRequest.cc
	src/model/ListPrivilegesOfUserResult.cc
	src/model/GetNumberRegionInfoRequest.cc
	src/model/GetNumberRegionInfoResult.cc
	src/model/GetScenarioRequest.cc
	src/model/GetScenarioResult.cc
	src/model/CreatePredictiveJobsRequest.cc
	src/model/CreatePredictiveJobsResult.cc
	src/model/GetAgentDataRequest.cc
	src/model/GetAgentDataResult.cc
	src/model/CreateSurveyRequest.cc
	src/model/CreateSurveyResult.cc
	src/model/ListJobStatusRequest.cc
	src/model/ListJobStatusResult.cc
	src/model/ModifySurveyRequest.cc
	src/model/ModifySurveyResult.cc
	src/model/ModifyScenarioRequest.cc
	src/model/ModifyScenarioResult.cc
	src/model/CreateSkillGroupRequest.cc
	src/model/CreateSkillGroupResult.cc
	src/model/GetServiceExtensionsRequest.cc
	src/model/GetServiceExtensionsResult.cc
	src/model/ListContactFlowsRequest.cc
	src/model/ListContactFlowsResult.cc
	src/model/DeleteJobGroupRequest.cc
	src/model/DeleteJobGroupResult.cc )

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