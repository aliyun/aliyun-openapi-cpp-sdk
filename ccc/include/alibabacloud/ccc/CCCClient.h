/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CCC_CCCCLIENT_H_
#define ALIBABACLOUD_CCC_CCCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CCCExport.h"
#include "model/GetJobListRequest.h"
#include "model/GetJobListResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ListSkillGroupsOfUserRequest.h"
#include "model/ListSkillGroupsOfUserResult.h"
#include "model/TwoPartiesCallRequest.h"
#include "model/TwoPartiesCallResult.h"
#include "model/DeleteSurveyRequest.h"
#include "model/DeleteSurveyResult.h"
#include "model/ListPhoneNumbersRequest.h"
#include "model/ListPhoneNumbersResult.h"
#include "model/DownloadUnreachableContactsRequest.h"
#include "model/DownloadUnreachableContactsResult.h"
#include "model/DialogueRequest.h"
#include "model/DialogueResult.h"
#include "model/RefreshTokenRequest.h"
#include "model/RefreshTokenResult.h"
#include "model/CreateBatchJobsRequest.h"
#include "model/CreateBatchJobsResult.h"
#include "model/RequestLoginInfoRequest.h"
#include "model/RequestLoginInfoResult.h"
#include "model/GetJobTemplateDownloadParamsRequest.h"
#include "model/GetJobTemplateDownloadParamsResult.h"
#include "model/RemoveUsersRequest.h"
#include "model/RemoveUsersResult.h"
#include "model/CancelPredictiveJobsRequest.h"
#include "model/CancelPredictiveJobsResult.h"
#include "model/StartBack2BackCallRequest.h"
#include "model/StartBack2BackCallResult.h"
#include "model/PublishSurveyRequest.h"
#include "model/PublishSurveyResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/GetConversationListRequest.h"
#include "model/GetConversationListResult.h"
#include "model/ListUsersOfSkillGroupRequest.h"
#include "model/ListUsersOfSkillGroupResult.h"
#include "model/ListJobsByGroupRequest.h"
#include "model/ListJobsByGroupResult.h"
#include "model/ListPredictiveJobStatusRequest.h"
#include "model/ListPredictiveJobStatusResult.h"
#include "model/ListJobGroupsRequest.h"
#include "model/ListJobGroupsResult.h"
#include "model/ListCallDetailRecordsRequest.h"
#include "model/ListCallDetailRecordsResult.h"
#include "model/AddPhoneNumberRequest.h"
#include "model/AddPhoneNumberResult.h"
#include "model/ListRecordingsRequest.h"
#include "model/ListRecordingsResult.h"
#include "model/EncryptRequest.h"
#include "model/EncryptResult.h"
#include "model/SubmitBatchJobsRequest.h"
#include "model/SubmitBatchJobsResult.h"
#include "model/ListSurveysRequest.h"
#include "model/ListSurveysResult.h"
#include "model/GetJobDataUploadParamsRequest.h"
#include "model/GetJobDataUploadParamsResult.h"
#include "model/ListBasicStatisticsReportSubItemsRequest.h"
#include "model/ListBasicStatisticsReportSubItemsResult.h"
#include "model/SuspendJobsRequest.h"
#include "model/SuspendJobsResult.h"
#include "model/GetJobGroupRequest.h"
#include "model/GetJobGroupResult.h"
#include "model/GetJobStatusByCallIdRequest.h"
#include "model/GetJobStatusByCallIdResult.h"
#include "model/ListUnreachableContactsRequest.h"
#include "model/ListUnreachableContactsResult.h"
#include "model/ModifySkillGroupRequest.h"
#include "model/ModifySkillGroupResult.h"
#include "model/GetConversationDetailByContactIdRequest.h"
#include "model/GetConversationDetailByContactIdResult.h"
#include "model/ListRecordingsByContactIdRequest.h"
#include "model/ListRecordingsByContactIdResult.h"
#include "model/LaunchAppraiseRequest.h"
#include "model/LaunchAppraiseResult.h"
#include "model/DeleteSkillGroupRequest.h"
#include "model/DeleteSkillGroupResult.h"
#include "model/ModifyUserRequest.h"
#include "model/ModifyUserResult.h"
#include "model/ListSkillGroupsRequest.h"
#include "model/ListSkillGroupsResult.h"
#include "model/CreateScenarioRequest.h"
#include "model/CreateScenarioResult.h"
#include "model/RemovePhoneNumberRequest.h"
#include "model/RemovePhoneNumberResult.h"
#include "model/PickLocalNumberRequest.h"
#include "model/PickLocalNumberResult.h"
#include "model/GetJobRequest.h"
#include "model/GetJobResult.h"
#include "model/StartJobRequest.h"
#include "model/StartJobResult.h"
#include "model/CancelJobsRequest.h"
#include "model/CancelJobsResult.h"
#include "model/GetConfigRequest.h"
#include "model/GetConfigResult.h"
#include "model/DownloadRecordingRequest.h"
#include "model/DownloadRecordingResult.h"
#include "model/GenerateAgentStatisticReportRequest.h"
#include "model/GenerateAgentStatisticReportResult.h"
#include "model/CreateScenarioFromTemplateRequest.h"
#include "model/CreateScenarioFromTemplateResult.h"
#include "model/CreateJobGroupRequest.h"
#include "model/CreateJobGroupResult.h"
#include "model/GetTaskListRequest.h"
#include "model/GetTaskListResult.h"
#include "model/DownloadOriginalStatisticsReportRequest.h"
#include "model/DownloadOriginalStatisticsReportResult.h"
#include "model/ListScenarioTemplatesRequest.h"
#include "model/ListScenarioTemplatesResult.h"
#include "model/ResumeJobsRequest.h"
#include "model/ResumeJobsResult.h"
#include "model/AssignUsersRequest.h"
#include "model/AssignUsersResult.h"
#include "model/GetSurveyRequest.h"
#include "model/GetSurveyResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/ListConfigRequest.h"
#include "model/ListConfigResult.h"
#include "model/LaunchShortMessageAppraiseRequest.h"
#include "model/LaunchShortMessageAppraiseResult.h"
#include "model/ModifyPhoneNumberRequest.h"
#include "model/ModifyPhoneNumberResult.h"
#include "model/ListScenariosRequest.h"
#include "model/ListScenariosResult.h"
#include "model/ListRealTimeAgentRequest.h"
#include "model/ListRealTimeAgentResult.h"
#include "model/AssignJobsRequest.h"
#include "model/AssignJobsResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/ListPrivilegesOfUserRequest.h"
#include "model/ListPrivilegesOfUserResult.h"
#include "model/GetNumberRegionInfoRequest.h"
#include "model/GetNumberRegionInfoResult.h"
#include "model/GetScenarioRequest.h"
#include "model/GetScenarioResult.h"
#include "model/CreatePredictiveJobsRequest.h"
#include "model/CreatePredictiveJobsResult.h"
#include "model/GetAgentDataRequest.h"
#include "model/GetAgentDataResult.h"
#include "model/CreateSurveyRequest.h"
#include "model/CreateSurveyResult.h"
#include "model/ListJobStatusRequest.h"
#include "model/ListJobStatusResult.h"
#include "model/ModifySurveyRequest.h"
#include "model/ModifySurveyResult.h"
#include "model/ModifyScenarioRequest.h"
#include "model/ModifyScenarioResult.h"
#include "model/CreateSkillGroupRequest.h"
#include "model/CreateSkillGroupResult.h"
#include "model/GetServiceExtensionsRequest.h"
#include "model/GetServiceExtensionsResult.h"
#include "model/ListContactFlowsRequest.h"
#include "model/ListContactFlowsResult.h"
#include "model/DeleteJobGroupRequest.h"
#include "model/DeleteJobGroupResult.h"


namespace AlibabaCloud
{
	namespace CCC
	{
		class ALIBABACLOUD_CCC_EXPORT CCCClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetJobListResult> GetJobListOutcome;
			typedef std::future<GetJobListOutcome> GetJobListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobListRequest&, const GetJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobListAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupsOfUserResult> ListSkillGroupsOfUserOutcome;
			typedef std::future<ListSkillGroupsOfUserOutcome> ListSkillGroupsOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupsOfUserRequest&, const ListSkillGroupsOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupsOfUserAsyncHandler;
			typedef Outcome<Error, Model::TwoPartiesCallResult> TwoPartiesCallOutcome;
			typedef std::future<TwoPartiesCallOutcome> TwoPartiesCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::TwoPartiesCallRequest&, const TwoPartiesCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TwoPartiesCallAsyncHandler;
			typedef Outcome<Error, Model::DeleteSurveyResult> DeleteSurveyOutcome;
			typedef std::future<DeleteSurveyOutcome> DeleteSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteSurveyRequest&, const DeleteSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSurveyAsyncHandler;
			typedef Outcome<Error, Model::ListPhoneNumbersResult> ListPhoneNumbersOutcome;
			typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPhoneNumbersRequest&, const ListPhoneNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPhoneNumbersAsyncHandler;
			typedef Outcome<Error, Model::DownloadUnreachableContactsResult> DownloadUnreachableContactsOutcome;
			typedef std::future<DownloadUnreachableContactsOutcome> DownloadUnreachableContactsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DownloadUnreachableContactsRequest&, const DownloadUnreachableContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadUnreachableContactsAsyncHandler;
			typedef Outcome<Error, Model::DialogueResult> DialogueOutcome;
			typedef std::future<DialogueOutcome> DialogueOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DialogueRequest&, const DialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DialogueAsyncHandler;
			typedef Outcome<Error, Model::RefreshTokenResult> RefreshTokenOutcome;
			typedef std::future<RefreshTokenOutcome> RefreshTokenOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RefreshTokenRequest&, const RefreshTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshTokenAsyncHandler;
			typedef Outcome<Error, Model::CreateBatchJobsResult> CreateBatchJobsOutcome;
			typedef std::future<CreateBatchJobsOutcome> CreateBatchJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateBatchJobsRequest&, const CreateBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::RequestLoginInfoResult> RequestLoginInfoOutcome;
			typedef std::future<RequestLoginInfoOutcome> RequestLoginInfoOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RequestLoginInfoRequest&, const RequestLoginInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RequestLoginInfoAsyncHandler;
			typedef Outcome<Error, Model::GetJobTemplateDownloadParamsResult> GetJobTemplateDownloadParamsOutcome;
			typedef std::future<GetJobTemplateDownloadParamsOutcome> GetJobTemplateDownloadParamsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobTemplateDownloadParamsRequest&, const GetJobTemplateDownloadParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobTemplateDownloadParamsAsyncHandler;
			typedef Outcome<Error, Model::RemoveUsersResult> RemoveUsersOutcome;
			typedef std::future<RemoveUsersOutcome> RemoveUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemoveUsersRequest&, const RemoveUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUsersAsyncHandler;
			typedef Outcome<Error, Model::CancelPredictiveJobsResult> CancelPredictiveJobsOutcome;
			typedef std::future<CancelPredictiveJobsOutcome> CancelPredictiveJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CancelPredictiveJobsRequest&, const CancelPredictiveJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPredictiveJobsAsyncHandler;
			typedef Outcome<Error, Model::StartBack2BackCallResult> StartBack2BackCallOutcome;
			typedef std::future<StartBack2BackCallOutcome> StartBack2BackCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartBack2BackCallRequest&, const StartBack2BackCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBack2BackCallAsyncHandler;
			typedef Outcome<Error, Model::PublishSurveyResult> PublishSurveyOutcome;
			typedef std::future<PublishSurveyOutcome> PublishSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PublishSurveyRequest&, const PublishSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishSurveyAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::GetConversationListResult> GetConversationListOutcome;
			typedef std::future<GetConversationListOutcome> GetConversationListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetConversationListRequest&, const GetConversationListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConversationListAsyncHandler;
			typedef Outcome<Error, Model::ListUsersOfSkillGroupResult> ListUsersOfSkillGroupOutcome;
			typedef std::future<ListUsersOfSkillGroupOutcome> ListUsersOfSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUsersOfSkillGroupRequest&, const ListUsersOfSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersOfSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ListJobsByGroupResult> ListJobsByGroupOutcome;
			typedef std::future<ListJobsByGroupOutcome> ListJobsByGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListJobsByGroupRequest&, const ListJobsByGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsByGroupAsyncHandler;
			typedef Outcome<Error, Model::ListPredictiveJobStatusResult> ListPredictiveJobStatusOutcome;
			typedef std::future<ListPredictiveJobStatusOutcome> ListPredictiveJobStatusOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPredictiveJobStatusRequest&, const ListPredictiveJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPredictiveJobStatusAsyncHandler;
			typedef Outcome<Error, Model::ListJobGroupsResult> ListJobGroupsOutcome;
			typedef std::future<ListJobGroupsOutcome> ListJobGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListJobGroupsRequest&, const ListJobGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListCallDetailRecordsResult> ListCallDetailRecordsOutcome;
			typedef std::future<ListCallDetailRecordsOutcome> ListCallDetailRecordsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCallDetailRecordsRequest&, const ListCallDetailRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallDetailRecordsAsyncHandler;
			typedef Outcome<Error, Model::AddPhoneNumberResult> AddPhoneNumberOutcome;
			typedef std::future<AddPhoneNumberOutcome> AddPhoneNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddPhoneNumberRequest&, const AddPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ListRecordingsResult> ListRecordingsOutcome;
			typedef std::future<ListRecordingsOutcome> ListRecordingsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRecordingsRequest&, const ListRecordingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordingsAsyncHandler;
			typedef Outcome<Error, Model::EncryptResult> EncryptOutcome;
			typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::EncryptRequest&, const EncryptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EncryptAsyncHandler;
			typedef Outcome<Error, Model::SubmitBatchJobsResult> SubmitBatchJobsOutcome;
			typedef std::future<SubmitBatchJobsOutcome> SubmitBatchJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SubmitBatchJobsRequest&, const SubmitBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::ListSurveysResult> ListSurveysOutcome;
			typedef std::future<ListSurveysOutcome> ListSurveysOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSurveysRequest&, const ListSurveysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSurveysAsyncHandler;
			typedef Outcome<Error, Model::GetJobDataUploadParamsResult> GetJobDataUploadParamsOutcome;
			typedef std::future<GetJobDataUploadParamsOutcome> GetJobDataUploadParamsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobDataUploadParamsRequest&, const GetJobDataUploadParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobDataUploadParamsAsyncHandler;
			typedef Outcome<Error, Model::ListBasicStatisticsReportSubItemsResult> ListBasicStatisticsReportSubItemsOutcome;
			typedef std::future<ListBasicStatisticsReportSubItemsOutcome> ListBasicStatisticsReportSubItemsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListBasicStatisticsReportSubItemsRequest&, const ListBasicStatisticsReportSubItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBasicStatisticsReportSubItemsAsyncHandler;
			typedef Outcome<Error, Model::SuspendJobsResult> SuspendJobsOutcome;
			typedef std::future<SuspendJobsOutcome> SuspendJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SuspendJobsRequest&, const SuspendJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendJobsAsyncHandler;
			typedef Outcome<Error, Model::GetJobGroupResult> GetJobGroupOutcome;
			typedef std::future<GetJobGroupOutcome> GetJobGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobGroupRequest&, const GetJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobGroupAsyncHandler;
			typedef Outcome<Error, Model::GetJobStatusByCallIdResult> GetJobStatusByCallIdOutcome;
			typedef std::future<GetJobStatusByCallIdOutcome> GetJobStatusByCallIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobStatusByCallIdRequest&, const GetJobStatusByCallIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobStatusByCallIdAsyncHandler;
			typedef Outcome<Error, Model::ListUnreachableContactsResult> ListUnreachableContactsOutcome;
			typedef std::future<ListUnreachableContactsOutcome> ListUnreachableContactsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUnreachableContactsRequest&, const ListUnreachableContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUnreachableContactsAsyncHandler;
			typedef Outcome<Error, Model::ModifySkillGroupResult> ModifySkillGroupOutcome;
			typedef std::future<ModifySkillGroupOutcome> ModifySkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifySkillGroupRequest&, const ModifySkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillGroupAsyncHandler;
			typedef Outcome<Error, Model::GetConversationDetailByContactIdResult> GetConversationDetailByContactIdOutcome;
			typedef std::future<GetConversationDetailByContactIdOutcome> GetConversationDetailByContactIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetConversationDetailByContactIdRequest&, const GetConversationDetailByContactIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConversationDetailByContactIdAsyncHandler;
			typedef Outcome<Error, Model::ListRecordingsByContactIdResult> ListRecordingsByContactIdOutcome;
			typedef std::future<ListRecordingsByContactIdOutcome> ListRecordingsByContactIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRecordingsByContactIdRequest&, const ListRecordingsByContactIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordingsByContactIdAsyncHandler;
			typedef Outcome<Error, Model::LaunchAppraiseResult> LaunchAppraiseOutcome;
			typedef std::future<LaunchAppraiseOutcome> LaunchAppraiseOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::LaunchAppraiseRequest&, const LaunchAppraiseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LaunchAppraiseAsyncHandler;
			typedef Outcome<Error, Model::DeleteSkillGroupResult> DeleteSkillGroupOutcome;
			typedef std::future<DeleteSkillGroupOutcome> DeleteSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteSkillGroupRequest&, const DeleteSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserResult> ModifyUserOutcome;
			typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyUserRequest&, const ModifyUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupsResult> ListSkillGroupsOutcome;
			typedef std::future<ListSkillGroupsOutcome> ListSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupsRequest&, const ListSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::CreateScenarioResult> CreateScenarioOutcome;
			typedef std::future<CreateScenarioOutcome> CreateScenarioOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateScenarioRequest&, const CreateScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScenarioAsyncHandler;
			typedef Outcome<Error, Model::RemovePhoneNumberResult> RemovePhoneNumberOutcome;
			typedef std::future<RemovePhoneNumberOutcome> RemovePhoneNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemovePhoneNumberRequest&, const RemovePhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::PickLocalNumberResult> PickLocalNumberOutcome;
			typedef std::future<PickLocalNumberOutcome> PickLocalNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PickLocalNumberRequest&, const PickLocalNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PickLocalNumberAsyncHandler;
			typedef Outcome<Error, Model::GetJobResult> GetJobOutcome;
			typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobRequest&, const GetJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobAsyncHandler;
			typedef Outcome<Error, Model::StartJobResult> StartJobOutcome;
			typedef std::future<StartJobOutcome> StartJobOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartJobRequest&, const StartJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartJobAsyncHandler;
			typedef Outcome<Error, Model::CancelJobsResult> CancelJobsOutcome;
			typedef std::future<CancelJobsOutcome> CancelJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CancelJobsRequest&, const CancelJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelJobsAsyncHandler;
			typedef Outcome<Error, Model::GetConfigResult> GetConfigOutcome;
			typedef std::future<GetConfigOutcome> GetConfigOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetConfigRequest&, const GetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConfigAsyncHandler;
			typedef Outcome<Error, Model::DownloadRecordingResult> DownloadRecordingOutcome;
			typedef std::future<DownloadRecordingOutcome> DownloadRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DownloadRecordingRequest&, const DownloadRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadRecordingAsyncHandler;
			typedef Outcome<Error, Model::GenerateAgentStatisticReportResult> GenerateAgentStatisticReportOutcome;
			typedef std::future<GenerateAgentStatisticReportOutcome> GenerateAgentStatisticReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GenerateAgentStatisticReportRequest&, const GenerateAgentStatisticReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateAgentStatisticReportAsyncHandler;
			typedef Outcome<Error, Model::CreateScenarioFromTemplateResult> CreateScenarioFromTemplateOutcome;
			typedef std::future<CreateScenarioFromTemplateOutcome> CreateScenarioFromTemplateOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateScenarioFromTemplateRequest&, const CreateScenarioFromTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScenarioFromTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateJobGroupResult> CreateJobGroupOutcome;
			typedef std::future<CreateJobGroupOutcome> CreateJobGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateJobGroupRequest&, const CreateJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobGroupAsyncHandler;
			typedef Outcome<Error, Model::GetTaskListResult> GetTaskListOutcome;
			typedef std::future<GetTaskListOutcome> GetTaskListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTaskListRequest&, const GetTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskListAsyncHandler;
			typedef Outcome<Error, Model::DownloadOriginalStatisticsReportResult> DownloadOriginalStatisticsReportOutcome;
			typedef std::future<DownloadOriginalStatisticsReportOutcome> DownloadOriginalStatisticsReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DownloadOriginalStatisticsReportRequest&, const DownloadOriginalStatisticsReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadOriginalStatisticsReportAsyncHandler;
			typedef Outcome<Error, Model::ListScenarioTemplatesResult> ListScenarioTemplatesOutcome;
			typedef std::future<ListScenarioTemplatesOutcome> ListScenarioTemplatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListScenarioTemplatesRequest&, const ListScenarioTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenarioTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ResumeJobsResult> ResumeJobsOutcome;
			typedef std::future<ResumeJobsOutcome> ResumeJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ResumeJobsRequest&, const ResumeJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeJobsAsyncHandler;
			typedef Outcome<Error, Model::AssignUsersResult> AssignUsersOutcome;
			typedef std::future<AssignUsersOutcome> AssignUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AssignUsersRequest&, const AssignUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignUsersAsyncHandler;
			typedef Outcome<Error, Model::GetSurveyResult> GetSurveyOutcome;
			typedef std::future<GetSurveyOutcome> GetSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetSurveyRequest&, const GetSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSurveyAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::ListConfigResult> ListConfigOutcome;
			typedef std::future<ListConfigOutcome> ListConfigOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListConfigRequest&, const ListConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigAsyncHandler;
			typedef Outcome<Error, Model::LaunchShortMessageAppraiseResult> LaunchShortMessageAppraiseOutcome;
			typedef std::future<LaunchShortMessageAppraiseOutcome> LaunchShortMessageAppraiseOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::LaunchShortMessageAppraiseRequest&, const LaunchShortMessageAppraiseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LaunchShortMessageAppraiseAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhoneNumberResult> ModifyPhoneNumberOutcome;
			typedef std::future<ModifyPhoneNumberOutcome> ModifyPhoneNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyPhoneNumberRequest&, const ModifyPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ListScenariosResult> ListScenariosOutcome;
			typedef std::future<ListScenariosOutcome> ListScenariosOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListScenariosRequest&, const ListScenariosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenariosAsyncHandler;
			typedef Outcome<Error, Model::ListRealTimeAgentResult> ListRealTimeAgentOutcome;
			typedef std::future<ListRealTimeAgentOutcome> ListRealTimeAgentOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRealTimeAgentRequest&, const ListRealTimeAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRealTimeAgentAsyncHandler;
			typedef Outcome<Error, Model::AssignJobsResult> AssignJobsOutcome;
			typedef std::future<AssignJobsOutcome> AssignJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AssignJobsRequest&, const AssignJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::ListPrivilegesOfUserResult> ListPrivilegesOfUserOutcome;
			typedef std::future<ListPrivilegesOfUserOutcome> ListPrivilegesOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPrivilegesOfUserRequest&, const ListPrivilegesOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivilegesOfUserAsyncHandler;
			typedef Outcome<Error, Model::GetNumberRegionInfoResult> GetNumberRegionInfoOutcome;
			typedef std::future<GetNumberRegionInfoOutcome> GetNumberRegionInfoOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetNumberRegionInfoRequest&, const GetNumberRegionInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNumberRegionInfoAsyncHandler;
			typedef Outcome<Error, Model::GetScenarioResult> GetScenarioOutcome;
			typedef std::future<GetScenarioOutcome> GetScenarioOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetScenarioRequest&, const GetScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScenarioAsyncHandler;
			typedef Outcome<Error, Model::CreatePredictiveJobsResult> CreatePredictiveJobsOutcome;
			typedef std::future<CreatePredictiveJobsOutcome> CreatePredictiveJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreatePredictiveJobsRequest&, const CreatePredictiveJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePredictiveJobsAsyncHandler;
			typedef Outcome<Error, Model::GetAgentDataResult> GetAgentDataOutcome;
			typedef std::future<GetAgentDataOutcome> GetAgentDataOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetAgentDataRequest&, const GetAgentDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAgentDataAsyncHandler;
			typedef Outcome<Error, Model::CreateSurveyResult> CreateSurveyOutcome;
			typedef std::future<CreateSurveyOutcome> CreateSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateSurveyRequest&, const CreateSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSurveyAsyncHandler;
			typedef Outcome<Error, Model::ListJobStatusResult> ListJobStatusOutcome;
			typedef std::future<ListJobStatusOutcome> ListJobStatusOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListJobStatusRequest&, const ListJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifySurveyResult> ModifySurveyOutcome;
			typedef std::future<ModifySurveyOutcome> ModifySurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifySurveyRequest&, const ModifySurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySurveyAsyncHandler;
			typedef Outcome<Error, Model::ModifyScenarioResult> ModifyScenarioOutcome;
			typedef std::future<ModifyScenarioOutcome> ModifyScenarioOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyScenarioRequest&, const ModifyScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScenarioAsyncHandler;
			typedef Outcome<Error, Model::CreateSkillGroupResult> CreateSkillGroupOutcome;
			typedef std::future<CreateSkillGroupOutcome> CreateSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateSkillGroupRequest&, const CreateSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::GetServiceExtensionsResult> GetServiceExtensionsOutcome;
			typedef std::future<GetServiceExtensionsOutcome> GetServiceExtensionsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetServiceExtensionsRequest&, const GetServiceExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceExtensionsAsyncHandler;
			typedef Outcome<Error, Model::ListContactFlowsResult> ListContactFlowsOutcome;
			typedef std::future<ListContactFlowsOutcome> ListContactFlowsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListContactFlowsRequest&, const ListContactFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContactFlowsAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobGroupResult> DeleteJobGroupOutcome;
			typedef std::future<DeleteJobGroupOutcome> DeleteJobGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteJobGroupRequest&, const DeleteJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobGroupAsyncHandler;

			CCCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CCCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CCCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CCCClient();
			GetJobListOutcome getJobList(const Model::GetJobListRequest &request)const;
			void getJobListAsync(const Model::GetJobListRequest& request, const GetJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobListOutcomeCallable getJobListCallable(const Model::GetJobListRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ListSkillGroupsOfUserOutcome listSkillGroupsOfUser(const Model::ListSkillGroupsOfUserRequest &request)const;
			void listSkillGroupsOfUserAsync(const Model::ListSkillGroupsOfUserRequest& request, const ListSkillGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupsOfUserOutcomeCallable listSkillGroupsOfUserCallable(const Model::ListSkillGroupsOfUserRequest& request) const;
			TwoPartiesCallOutcome twoPartiesCall(const Model::TwoPartiesCallRequest &request)const;
			void twoPartiesCallAsync(const Model::TwoPartiesCallRequest& request, const TwoPartiesCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TwoPartiesCallOutcomeCallable twoPartiesCallCallable(const Model::TwoPartiesCallRequest& request) const;
			DeleteSurveyOutcome deleteSurvey(const Model::DeleteSurveyRequest &request)const;
			void deleteSurveyAsync(const Model::DeleteSurveyRequest& request, const DeleteSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSurveyOutcomeCallable deleteSurveyCallable(const Model::DeleteSurveyRequest& request) const;
			ListPhoneNumbersOutcome listPhoneNumbers(const Model::ListPhoneNumbersRequest &request)const;
			void listPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPhoneNumbersOutcomeCallable listPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;
			DownloadUnreachableContactsOutcome downloadUnreachableContacts(const Model::DownloadUnreachableContactsRequest &request)const;
			void downloadUnreachableContactsAsync(const Model::DownloadUnreachableContactsRequest& request, const DownloadUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadUnreachableContactsOutcomeCallable downloadUnreachableContactsCallable(const Model::DownloadUnreachableContactsRequest& request) const;
			DialogueOutcome dialogue(const Model::DialogueRequest &request)const;
			void dialogueAsync(const Model::DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DialogueOutcomeCallable dialogueCallable(const Model::DialogueRequest& request) const;
			RefreshTokenOutcome refreshToken(const Model::RefreshTokenRequest &request)const;
			void refreshTokenAsync(const Model::RefreshTokenRequest& request, const RefreshTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshTokenOutcomeCallable refreshTokenCallable(const Model::RefreshTokenRequest& request) const;
			CreateBatchJobsOutcome createBatchJobs(const Model::CreateBatchJobsRequest &request)const;
			void createBatchJobsAsync(const Model::CreateBatchJobsRequest& request, const CreateBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBatchJobsOutcomeCallable createBatchJobsCallable(const Model::CreateBatchJobsRequest& request) const;
			RequestLoginInfoOutcome requestLoginInfo(const Model::RequestLoginInfoRequest &request)const;
			void requestLoginInfoAsync(const Model::RequestLoginInfoRequest& request, const RequestLoginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RequestLoginInfoOutcomeCallable requestLoginInfoCallable(const Model::RequestLoginInfoRequest& request) const;
			GetJobTemplateDownloadParamsOutcome getJobTemplateDownloadParams(const Model::GetJobTemplateDownloadParamsRequest &request)const;
			void getJobTemplateDownloadParamsAsync(const Model::GetJobTemplateDownloadParamsRequest& request, const GetJobTemplateDownloadParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobTemplateDownloadParamsOutcomeCallable getJobTemplateDownloadParamsCallable(const Model::GetJobTemplateDownloadParamsRequest& request) const;
			RemoveUsersOutcome removeUsers(const Model::RemoveUsersRequest &request)const;
			void removeUsersAsync(const Model::RemoveUsersRequest& request, const RemoveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUsersOutcomeCallable removeUsersCallable(const Model::RemoveUsersRequest& request) const;
			CancelPredictiveJobsOutcome cancelPredictiveJobs(const Model::CancelPredictiveJobsRequest &request)const;
			void cancelPredictiveJobsAsync(const Model::CancelPredictiveJobsRequest& request, const CancelPredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPredictiveJobsOutcomeCallable cancelPredictiveJobsCallable(const Model::CancelPredictiveJobsRequest& request) const;
			StartBack2BackCallOutcome startBack2BackCall(const Model::StartBack2BackCallRequest &request)const;
			void startBack2BackCallAsync(const Model::StartBack2BackCallRequest& request, const StartBack2BackCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBack2BackCallOutcomeCallable startBack2BackCallCallable(const Model::StartBack2BackCallRequest& request) const;
			PublishSurveyOutcome publishSurvey(const Model::PublishSurveyRequest &request)const;
			void publishSurveyAsync(const Model::PublishSurveyRequest& request, const PublishSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishSurveyOutcomeCallable publishSurveyCallable(const Model::PublishSurveyRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			GetConversationListOutcome getConversationList(const Model::GetConversationListRequest &request)const;
			void getConversationListAsync(const Model::GetConversationListRequest& request, const GetConversationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConversationListOutcomeCallable getConversationListCallable(const Model::GetConversationListRequest& request) const;
			ListUsersOfSkillGroupOutcome listUsersOfSkillGroup(const Model::ListUsersOfSkillGroupRequest &request)const;
			void listUsersOfSkillGroupAsync(const Model::ListUsersOfSkillGroupRequest& request, const ListUsersOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOfSkillGroupOutcomeCallable listUsersOfSkillGroupCallable(const Model::ListUsersOfSkillGroupRequest& request) const;
			ListJobsByGroupOutcome listJobsByGroup(const Model::ListJobsByGroupRequest &request)const;
			void listJobsByGroupAsync(const Model::ListJobsByGroupRequest& request, const ListJobsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsByGroupOutcomeCallable listJobsByGroupCallable(const Model::ListJobsByGroupRequest& request) const;
			ListPredictiveJobStatusOutcome listPredictiveJobStatus(const Model::ListPredictiveJobStatusRequest &request)const;
			void listPredictiveJobStatusAsync(const Model::ListPredictiveJobStatusRequest& request, const ListPredictiveJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPredictiveJobStatusOutcomeCallable listPredictiveJobStatusCallable(const Model::ListPredictiveJobStatusRequest& request) const;
			ListJobGroupsOutcome listJobGroups(const Model::ListJobGroupsRequest &request)const;
			void listJobGroupsAsync(const Model::ListJobGroupsRequest& request, const ListJobGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobGroupsOutcomeCallable listJobGroupsCallable(const Model::ListJobGroupsRequest& request) const;
			ListCallDetailRecordsOutcome listCallDetailRecords(const Model::ListCallDetailRecordsRequest &request)const;
			void listCallDetailRecordsAsync(const Model::ListCallDetailRecordsRequest& request, const ListCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallDetailRecordsOutcomeCallable listCallDetailRecordsCallable(const Model::ListCallDetailRecordsRequest& request) const;
			AddPhoneNumberOutcome addPhoneNumber(const Model::AddPhoneNumberRequest &request)const;
			void addPhoneNumberAsync(const Model::AddPhoneNumberRequest& request, const AddPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPhoneNumberOutcomeCallable addPhoneNumberCallable(const Model::AddPhoneNumberRequest& request) const;
			ListRecordingsOutcome listRecordings(const Model::ListRecordingsRequest &request)const;
			void listRecordingsAsync(const Model::ListRecordingsRequest& request, const ListRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecordingsOutcomeCallable listRecordingsCallable(const Model::ListRecordingsRequest& request) const;
			EncryptOutcome encrypt(const Model::EncryptRequest &request)const;
			void encryptAsync(const Model::EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EncryptOutcomeCallable encryptCallable(const Model::EncryptRequest& request) const;
			SubmitBatchJobsOutcome submitBatchJobs(const Model::SubmitBatchJobsRequest &request)const;
			void submitBatchJobsAsync(const Model::SubmitBatchJobsRequest& request, const SubmitBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitBatchJobsOutcomeCallable submitBatchJobsCallable(const Model::SubmitBatchJobsRequest& request) const;
			ListSurveysOutcome listSurveys(const Model::ListSurveysRequest &request)const;
			void listSurveysAsync(const Model::ListSurveysRequest& request, const ListSurveysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSurveysOutcomeCallable listSurveysCallable(const Model::ListSurveysRequest& request) const;
			GetJobDataUploadParamsOutcome getJobDataUploadParams(const Model::GetJobDataUploadParamsRequest &request)const;
			void getJobDataUploadParamsAsync(const Model::GetJobDataUploadParamsRequest& request, const GetJobDataUploadParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobDataUploadParamsOutcomeCallable getJobDataUploadParamsCallable(const Model::GetJobDataUploadParamsRequest& request) const;
			ListBasicStatisticsReportSubItemsOutcome listBasicStatisticsReportSubItems(const Model::ListBasicStatisticsReportSubItemsRequest &request)const;
			void listBasicStatisticsReportSubItemsAsync(const Model::ListBasicStatisticsReportSubItemsRequest& request, const ListBasicStatisticsReportSubItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBasicStatisticsReportSubItemsOutcomeCallable listBasicStatisticsReportSubItemsCallable(const Model::ListBasicStatisticsReportSubItemsRequest& request) const;
			SuspendJobsOutcome suspendJobs(const Model::SuspendJobsRequest &request)const;
			void suspendJobsAsync(const Model::SuspendJobsRequest& request, const SuspendJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendJobsOutcomeCallable suspendJobsCallable(const Model::SuspendJobsRequest& request) const;
			GetJobGroupOutcome getJobGroup(const Model::GetJobGroupRequest &request)const;
			void getJobGroupAsync(const Model::GetJobGroupRequest& request, const GetJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobGroupOutcomeCallable getJobGroupCallable(const Model::GetJobGroupRequest& request) const;
			GetJobStatusByCallIdOutcome getJobStatusByCallId(const Model::GetJobStatusByCallIdRequest &request)const;
			void getJobStatusByCallIdAsync(const Model::GetJobStatusByCallIdRequest& request, const GetJobStatusByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobStatusByCallIdOutcomeCallable getJobStatusByCallIdCallable(const Model::GetJobStatusByCallIdRequest& request) const;
			ListUnreachableContactsOutcome listUnreachableContacts(const Model::ListUnreachableContactsRequest &request)const;
			void listUnreachableContactsAsync(const Model::ListUnreachableContactsRequest& request, const ListUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUnreachableContactsOutcomeCallable listUnreachableContactsCallable(const Model::ListUnreachableContactsRequest& request) const;
			ModifySkillGroupOutcome modifySkillGroup(const Model::ModifySkillGroupRequest &request)const;
			void modifySkillGroupAsync(const Model::ModifySkillGroupRequest& request, const ModifySkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySkillGroupOutcomeCallable modifySkillGroupCallable(const Model::ModifySkillGroupRequest& request) const;
			GetConversationDetailByContactIdOutcome getConversationDetailByContactId(const Model::GetConversationDetailByContactIdRequest &request)const;
			void getConversationDetailByContactIdAsync(const Model::GetConversationDetailByContactIdRequest& request, const GetConversationDetailByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConversationDetailByContactIdOutcomeCallable getConversationDetailByContactIdCallable(const Model::GetConversationDetailByContactIdRequest& request) const;
			ListRecordingsByContactIdOutcome listRecordingsByContactId(const Model::ListRecordingsByContactIdRequest &request)const;
			void listRecordingsByContactIdAsync(const Model::ListRecordingsByContactIdRequest& request, const ListRecordingsByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecordingsByContactIdOutcomeCallable listRecordingsByContactIdCallable(const Model::ListRecordingsByContactIdRequest& request) const;
			LaunchAppraiseOutcome launchAppraise(const Model::LaunchAppraiseRequest &request)const;
			void launchAppraiseAsync(const Model::LaunchAppraiseRequest& request, const LaunchAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LaunchAppraiseOutcomeCallable launchAppraiseCallable(const Model::LaunchAppraiseRequest& request) const;
			DeleteSkillGroupOutcome deleteSkillGroup(const Model::DeleteSkillGroupRequest &request)const;
			void deleteSkillGroupAsync(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSkillGroupOutcomeCallable deleteSkillGroupCallable(const Model::DeleteSkillGroupRequest& request) const;
			ModifyUserOutcome modifyUser(const Model::ModifyUserRequest &request)const;
			void modifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserOutcomeCallable modifyUserCallable(const Model::ModifyUserRequest& request) const;
			ListSkillGroupsOutcome listSkillGroups(const Model::ListSkillGroupsRequest &request)const;
			void listSkillGroupsAsync(const Model::ListSkillGroupsRequest& request, const ListSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupsOutcomeCallable listSkillGroupsCallable(const Model::ListSkillGroupsRequest& request) const;
			CreateScenarioOutcome createScenario(const Model::CreateScenarioRequest &request)const;
			void createScenarioAsync(const Model::CreateScenarioRequest& request, const CreateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScenarioOutcomeCallable createScenarioCallable(const Model::CreateScenarioRequest& request) const;
			RemovePhoneNumberOutcome removePhoneNumber(const Model::RemovePhoneNumberRequest &request)const;
			void removePhoneNumberAsync(const Model::RemovePhoneNumberRequest& request, const RemovePhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePhoneNumberOutcomeCallable removePhoneNumberCallable(const Model::RemovePhoneNumberRequest& request) const;
			PickLocalNumberOutcome pickLocalNumber(const Model::PickLocalNumberRequest &request)const;
			void pickLocalNumberAsync(const Model::PickLocalNumberRequest& request, const PickLocalNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PickLocalNumberOutcomeCallable pickLocalNumberCallable(const Model::PickLocalNumberRequest& request) const;
			GetJobOutcome getJob(const Model::GetJobRequest &request)const;
			void getJobAsync(const Model::GetJobRequest& request, const GetJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobOutcomeCallable getJobCallable(const Model::GetJobRequest& request) const;
			StartJobOutcome startJob(const Model::StartJobRequest &request)const;
			void startJobAsync(const Model::StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartJobOutcomeCallable startJobCallable(const Model::StartJobRequest& request) const;
			CancelJobsOutcome cancelJobs(const Model::CancelJobsRequest &request)const;
			void cancelJobsAsync(const Model::CancelJobsRequest& request, const CancelJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelJobsOutcomeCallable cancelJobsCallable(const Model::CancelJobsRequest& request) const;
			GetConfigOutcome getConfig(const Model::GetConfigRequest &request)const;
			void getConfigAsync(const Model::GetConfigRequest& request, const GetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConfigOutcomeCallable getConfigCallable(const Model::GetConfigRequest& request) const;
			DownloadRecordingOutcome downloadRecording(const Model::DownloadRecordingRequest &request)const;
			void downloadRecordingAsync(const Model::DownloadRecordingRequest& request, const DownloadRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadRecordingOutcomeCallable downloadRecordingCallable(const Model::DownloadRecordingRequest& request) const;
			GenerateAgentStatisticReportOutcome generateAgentStatisticReport(const Model::GenerateAgentStatisticReportRequest &request)const;
			void generateAgentStatisticReportAsync(const Model::GenerateAgentStatisticReportRequest& request, const GenerateAgentStatisticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateAgentStatisticReportOutcomeCallable generateAgentStatisticReportCallable(const Model::GenerateAgentStatisticReportRequest& request) const;
			CreateScenarioFromTemplateOutcome createScenarioFromTemplate(const Model::CreateScenarioFromTemplateRequest &request)const;
			void createScenarioFromTemplateAsync(const Model::CreateScenarioFromTemplateRequest& request, const CreateScenarioFromTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScenarioFromTemplateOutcomeCallable createScenarioFromTemplateCallable(const Model::CreateScenarioFromTemplateRequest& request) const;
			CreateJobGroupOutcome createJobGroup(const Model::CreateJobGroupRequest &request)const;
			void createJobGroupAsync(const Model::CreateJobGroupRequest& request, const CreateJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobGroupOutcomeCallable createJobGroupCallable(const Model::CreateJobGroupRequest& request) const;
			GetTaskListOutcome getTaskList(const Model::GetTaskListRequest &request)const;
			void getTaskListAsync(const Model::GetTaskListRequest& request, const GetTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskListOutcomeCallable getTaskListCallable(const Model::GetTaskListRequest& request) const;
			DownloadOriginalStatisticsReportOutcome downloadOriginalStatisticsReport(const Model::DownloadOriginalStatisticsReportRequest &request)const;
			void downloadOriginalStatisticsReportAsync(const Model::DownloadOriginalStatisticsReportRequest& request, const DownloadOriginalStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadOriginalStatisticsReportOutcomeCallable downloadOriginalStatisticsReportCallable(const Model::DownloadOriginalStatisticsReportRequest& request) const;
			ListScenarioTemplatesOutcome listScenarioTemplates(const Model::ListScenarioTemplatesRequest &request)const;
			void listScenarioTemplatesAsync(const Model::ListScenarioTemplatesRequest& request, const ListScenarioTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenarioTemplatesOutcomeCallable listScenarioTemplatesCallable(const Model::ListScenarioTemplatesRequest& request) const;
			ResumeJobsOutcome resumeJobs(const Model::ResumeJobsRequest &request)const;
			void resumeJobsAsync(const Model::ResumeJobsRequest& request, const ResumeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeJobsOutcomeCallable resumeJobsCallable(const Model::ResumeJobsRequest& request) const;
			AssignUsersOutcome assignUsers(const Model::AssignUsersRequest &request)const;
			void assignUsersAsync(const Model::AssignUsersRequest& request, const AssignUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignUsersOutcomeCallable assignUsersCallable(const Model::AssignUsersRequest& request) const;
			GetSurveyOutcome getSurvey(const Model::GetSurveyRequest &request)const;
			void getSurveyAsync(const Model::GetSurveyRequest& request, const GetSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSurveyOutcomeCallable getSurveyCallable(const Model::GetSurveyRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			ListConfigOutcome listConfig(const Model::ListConfigRequest &request)const;
			void listConfigAsync(const Model::ListConfigRequest& request, const ListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigOutcomeCallable listConfigCallable(const Model::ListConfigRequest& request) const;
			LaunchShortMessageAppraiseOutcome launchShortMessageAppraise(const Model::LaunchShortMessageAppraiseRequest &request)const;
			void launchShortMessageAppraiseAsync(const Model::LaunchShortMessageAppraiseRequest& request, const LaunchShortMessageAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LaunchShortMessageAppraiseOutcomeCallable launchShortMessageAppraiseCallable(const Model::LaunchShortMessageAppraiseRequest& request) const;
			ModifyPhoneNumberOutcome modifyPhoneNumber(const Model::ModifyPhoneNumberRequest &request)const;
			void modifyPhoneNumberAsync(const Model::ModifyPhoneNumberRequest& request, const ModifyPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPhoneNumberOutcomeCallable modifyPhoneNumberCallable(const Model::ModifyPhoneNumberRequest& request) const;
			ListScenariosOutcome listScenarios(const Model::ListScenariosRequest &request)const;
			void listScenariosAsync(const Model::ListScenariosRequest& request, const ListScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenariosOutcomeCallable listScenariosCallable(const Model::ListScenariosRequest& request) const;
			ListRealTimeAgentOutcome listRealTimeAgent(const Model::ListRealTimeAgentRequest &request)const;
			void listRealTimeAgentAsync(const Model::ListRealTimeAgentRequest& request, const ListRealTimeAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRealTimeAgentOutcomeCallable listRealTimeAgentCallable(const Model::ListRealTimeAgentRequest& request) const;
			AssignJobsOutcome assignJobs(const Model::AssignJobsRequest &request)const;
			void assignJobsAsync(const Model::AssignJobsRequest& request, const AssignJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignJobsOutcomeCallable assignJobsCallable(const Model::AssignJobsRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			ListPrivilegesOfUserOutcome listPrivilegesOfUser(const Model::ListPrivilegesOfUserRequest &request)const;
			void listPrivilegesOfUserAsync(const Model::ListPrivilegesOfUserRequest& request, const ListPrivilegesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivilegesOfUserOutcomeCallable listPrivilegesOfUserCallable(const Model::ListPrivilegesOfUserRequest& request) const;
			GetNumberRegionInfoOutcome getNumberRegionInfo(const Model::GetNumberRegionInfoRequest &request)const;
			void getNumberRegionInfoAsync(const Model::GetNumberRegionInfoRequest& request, const GetNumberRegionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNumberRegionInfoOutcomeCallable getNumberRegionInfoCallable(const Model::GetNumberRegionInfoRequest& request) const;
			GetScenarioOutcome getScenario(const Model::GetScenarioRequest &request)const;
			void getScenarioAsync(const Model::GetScenarioRequest& request, const GetScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScenarioOutcomeCallable getScenarioCallable(const Model::GetScenarioRequest& request) const;
			CreatePredictiveJobsOutcome createPredictiveJobs(const Model::CreatePredictiveJobsRequest &request)const;
			void createPredictiveJobsAsync(const Model::CreatePredictiveJobsRequest& request, const CreatePredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePredictiveJobsOutcomeCallable createPredictiveJobsCallable(const Model::CreatePredictiveJobsRequest& request) const;
			GetAgentDataOutcome getAgentData(const Model::GetAgentDataRequest &request)const;
			void getAgentDataAsync(const Model::GetAgentDataRequest& request, const GetAgentDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAgentDataOutcomeCallable getAgentDataCallable(const Model::GetAgentDataRequest& request) const;
			CreateSurveyOutcome createSurvey(const Model::CreateSurveyRequest &request)const;
			void createSurveyAsync(const Model::CreateSurveyRequest& request, const CreateSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSurveyOutcomeCallable createSurveyCallable(const Model::CreateSurveyRequest& request) const;
			ListJobStatusOutcome listJobStatus(const Model::ListJobStatusRequest &request)const;
			void listJobStatusAsync(const Model::ListJobStatusRequest& request, const ListJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobStatusOutcomeCallable listJobStatusCallable(const Model::ListJobStatusRequest& request) const;
			ModifySurveyOutcome modifySurvey(const Model::ModifySurveyRequest &request)const;
			void modifySurveyAsync(const Model::ModifySurveyRequest& request, const ModifySurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySurveyOutcomeCallable modifySurveyCallable(const Model::ModifySurveyRequest& request) const;
			ModifyScenarioOutcome modifyScenario(const Model::ModifyScenarioRequest &request)const;
			void modifyScenarioAsync(const Model::ModifyScenarioRequest& request, const ModifyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScenarioOutcomeCallable modifyScenarioCallable(const Model::ModifyScenarioRequest& request) const;
			CreateSkillGroupOutcome createSkillGroup(const Model::CreateSkillGroupRequest &request)const;
			void createSkillGroupAsync(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSkillGroupOutcomeCallable createSkillGroupCallable(const Model::CreateSkillGroupRequest& request) const;
			GetServiceExtensionsOutcome getServiceExtensions(const Model::GetServiceExtensionsRequest &request)const;
			void getServiceExtensionsAsync(const Model::GetServiceExtensionsRequest& request, const GetServiceExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceExtensionsOutcomeCallable getServiceExtensionsCallable(const Model::GetServiceExtensionsRequest& request) const;
			ListContactFlowsOutcome listContactFlows(const Model::ListContactFlowsRequest &request)const;
			void listContactFlowsAsync(const Model::ListContactFlowsRequest& request, const ListContactFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListContactFlowsOutcomeCallable listContactFlowsCallable(const Model::ListContactFlowsRequest& request) const;
			DeleteJobGroupOutcome deleteJobGroup(const Model::DeleteJobGroupRequest &request)const;
			void deleteJobGroupAsync(const Model::DeleteJobGroupRequest& request, const DeleteJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobGroupOutcomeCallable deleteJobGroupCallable(const Model::DeleteJobGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CCC_CCCCLIENT_H_
