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
#include "model/AddAgentDeviceRequest.h"
#include "model/AddAgentDeviceResult.h"
#include "model/AddBulkPhoneNumbersRequest.h"
#include "model/AddBulkPhoneNumbersResult.h"
#include "model/AddNumberToSkillGroupRequest.h"
#include "model/AddNumberToSkillGroupResult.h"
#include "model/AddPhoneNumberRequest.h"
#include "model/AddPhoneNumberResult.h"
#include "model/AddPhoneTagsRequest.h"
#include "model/AddPhoneTagsResult.h"
#include "model/AssignJobsRequest.h"
#include "model/AssignJobsResult.h"
#include "model/AssignUsersRequest.h"
#include "model/AssignUsersResult.h"
#include "model/CallOnlinePrivacyNumberRequest.h"
#include "model/CallOnlinePrivacyNumberResult.h"
#include "model/CancelJobsRequest.h"
#include "model/CancelJobsResult.h"
#include "model/CancelPredictiveJobsRequest.h"
#include "model/CancelPredictiveJobsResult.h"
#include "model/CheckNumberAvaliableRequest.h"
#include "model/CheckNumberAvaliableResult.h"
#include "model/CommitContactFlowVersionModificationRequest.h"
#include "model/CommitContactFlowVersionModificationResult.h"
#include "model/CreateBatchJobsRequest.h"
#include "model/CreateBatchJobsResult.h"
#include "model/CreateCCCPostOrderRequest.h"
#include "model/CreateCCCPostOrderResult.h"
#include "model/CreateCabInstanceRequest.h"
#include "model/CreateCabInstanceResult.h"
#include "model/CreateContactFlowRequest.h"
#include "model/CreateContactFlowResult.h"
#include "model/CreateFaultRequest.h"
#include "model/CreateFaultResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateJobGroupRequest.h"
#include "model/CreateJobGroupResult.h"
#include "model/CreateMediaRequest.h"
#include "model/CreateMediaResult.h"
#include "model/CreatePredictiveJobGroupRequest.h"
#include "model/CreatePredictiveJobGroupResult.h"
#include "model/CreatePredictiveJobsRequest.h"
#include "model/CreatePredictiveJobsResult.h"
#include "model/CreateScenarioRequest.h"
#include "model/CreateScenarioResult.h"
#include "model/CreateScenarioFromTemplateRequest.h"
#include "model/CreateScenarioFromTemplateResult.h"
#include "model/CreateSkillGroupRequest.h"
#include "model/CreateSkillGroupResult.h"
#include "model/CreateSurveyRequest.h"
#include "model/CreateSurveyResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/CreateVoiceAppraiseRequest.h"
#include "model/CreateVoiceAppraiseResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteJobGroupRequest.h"
#include "model/DeleteJobGroupResult.h"
#include "model/DeleteMediaRequest.h"
#include "model/DeleteMediaResult.h"
#include "model/DeletePhoneTagsRequest.h"
#include "model/DeletePhoneTagsResult.h"
#include "model/DeleteSkillGroupRequest.h"
#include "model/DeleteSkillGroupResult.h"
#include "model/DeleteSurveyRequest.h"
#include "model/DeleteSurveyResult.h"
#include "model/DialExRequest.h"
#include "model/DialExResult.h"
#include "model/DialogueRequest.h"
#include "model/DialogueResult.h"
#include "model/DownloadAllTypeRecordingRequest.h"
#include "model/DownloadAllTypeRecordingResult.h"
#include "model/DownloadCabRecordingRequest.h"
#include "model/DownloadCabRecordingResult.h"
#include "model/DownloadOriginalStatisticsReportRequest.h"
#include "model/DownloadOriginalStatisticsReportResult.h"
#include "model/DownloadRecordingRequest.h"
#include "model/DownloadRecordingResult.h"
#include "model/DownloadUnreachableContactsRequest.h"
#include "model/DownloadUnreachableContactsResult.h"
#include "model/FindUsersRequest.h"
#include "model/FindUsersResult.h"
#include "model/GenerateAgentStatisticReportRequest.h"
#include "model/GenerateAgentStatisticReportResult.h"
#include "model/GetAgentDataRequest.h"
#include "model/GetAgentDataResult.h"
#include "model/GetAgentStateRequest.h"
#include "model/GetAgentStateResult.h"
#include "model/GetCallMeasureSummaryReportRequest.h"
#include "model/GetCallMeasureSummaryReportResult.h"
#include "model/GetConfigRequest.h"
#include "model/GetConfigResult.h"
#include "model/GetContactIdentifyByOutBoundTaskIdRequest.h"
#include "model/GetContactIdentifyByOutBoundTaskIdResult.h"
#include "model/GetContactInfoByOutboundTaskIdRequest.h"
#include "model/GetContactInfoByOutboundTaskIdResult.h"
#include "model/GetConversationDetailByContactIdRequest.h"
#include "model/GetConversationDetailByContactIdResult.h"
#include "model/GetConversationListRequest.h"
#include "model/GetConversationListResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetInstanceStateRequest.h"
#include "model/GetInstanceStateResult.h"
#include "model/GetInstanceSummaryReportRequest.h"
#include "model/GetInstanceSummaryReportResult.h"
#include "model/GetInstanceSummaryReportByIntervalRequest.h"
#include "model/GetInstanceSummaryReportByIntervalResult.h"
#include "model/GetInstanceSummaryReportSinceMidnightRequest.h"
#include "model/GetInstanceSummaryReportSinceMidnightResult.h"
#include "model/GetJobRequest.h"
#include "model/GetJobResult.h"
#include "model/GetJobDataUploadParamsRequest.h"
#include "model/GetJobDataUploadParamsResult.h"
#include "model/GetJobFileUploadUrlRequest.h"
#include "model/GetJobFileUploadUrlResult.h"
#include "model/GetJobGroupRequest.h"
#include "model/GetJobGroupResult.h"
#include "model/GetJobListRequest.h"
#include "model/GetJobListResult.h"
#include "model/GetJobStatusByCallIdRequest.h"
#include "model/GetJobStatusByCallIdResult.h"
#include "model/GetJobTemplateDownloadParamsRequest.h"
#include "model/GetJobTemplateDownloadParamsResult.h"
#include "model/GetJobsProgressRequest.h"
#include "model/GetJobsProgressResult.h"
#include "model/GetNumberRegionInfoRequest.h"
#include "model/GetNumberRegionInfoResult.h"
#include "model/GetPredictiveJobRequest.h"
#include "model/GetPredictiveJobResult.h"
#include "model/GetRecordOssUploadParamRequest.h"
#include "model/GetRecordOssUploadParamResult.h"
#include "model/GetRoutePointRequest.h"
#include "model/GetRoutePointResult.h"
#include "model/GetScenarioRequest.h"
#include "model/GetScenarioResult.h"
#include "model/GetServiceExtensionsRequest.h"
#include "model/GetServiceExtensionsResult.h"
#include "model/GetSmsConfigRequest.h"
#include "model/GetSmsConfigResult.h"
#include "model/GetSurveyRequest.h"
#include "model/GetSurveyResult.h"
#include "model/GetTURNCredentialsRequest.h"
#include "model/GetTURNCredentialsResult.h"
#include "model/GetTURNServerListRequest.h"
#include "model/GetTURNServerListResult.h"
#include "model/GetTaskListRequest.h"
#include "model/GetTaskListResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/InflightTaskTimeoutRequest.h"
#include "model/InflightTaskTimeoutResult.h"
#include "model/LaunchAppraiseRequest.h"
#include "model/LaunchAppraiseResult.h"
#include "model/LaunchShortMessageAppraiseRequest.h"
#include "model/LaunchShortMessageAppraiseResult.h"
#include "model/ListAgentDevicesRequest.h"
#include "model/ListAgentDevicesResult.h"
#include "model/ListAgentEventsRequest.h"
#include "model/ListAgentEventsResult.h"
#include "model/ListAgentStatesRequest.h"
#include "model/ListAgentStatesResult.h"
#include "model/ListAgentSummaryReportsRequest.h"
#include "model/ListAgentSummaryReportsResult.h"
#include "model/ListAgentSummaryReportsByIntervalRequest.h"
#include "model/ListAgentSummaryReportsByIntervalResult.h"
#include "model/ListAgentSummaryReportsSinceMidnightRequest.h"
#include "model/ListAgentSummaryReportsSinceMidnightResult.h"
#include "model/ListBasicStatisticsReportSubItemsRequest.h"
#include "model/ListBasicStatisticsReportSubItemsResult.h"
#include "model/ListCallDetailRecordsRequest.h"
#include "model/ListCallDetailRecordsResult.h"
#include "model/ListCallEventDetailByContactIdRequest.h"
#include "model/ListCallEventDetailByContactIdResult.h"
#include "model/ListCallMeasureSummaryReportsRequest.h"
#include "model/ListCallMeasureSummaryReportsResult.h"
#include "model/ListConfigRequest.h"
#include "model/ListConfigResult.h"
#include "model/ListContactFlowsRequest.h"
#include "model/ListContactFlowsResult.h"
#include "model/ListInstancesOfUserRequest.h"
#include "model/ListInstancesOfUserResult.h"
#include "model/ListIvrTrackingDetailRequest.h"
#include "model/ListIvrTrackingDetailResult.h"
#include "model/ListJobGroupsRequest.h"
#include "model/ListJobGroupsResult.h"
#include "model/ListJobStatusRequest.h"
#include "model/ListJobStatusResult.h"
#include "model/ListJobsByGroupRequest.h"
#include "model/ListJobsByGroupResult.h"
#include "model/ListMediasRequest.h"
#include "model/ListMediasResult.h"
#include "model/ListOutboundPhoneNumberOfUserRequest.h"
#include "model/ListOutboundPhoneNumberOfUserResult.h"
#include "model/ListPhoneNumbersRequest.h"
#include "model/ListPhoneNumbersResult.h"
#include "model/ListPhoneTagsRequest.h"
#include "model/ListPhoneTagsResult.h"
#include "model/ListPredictiveJobGroupsRequest.h"
#include "model/ListPredictiveJobGroupsResult.h"
#include "model/ListPredictiveJobStatusRequest.h"
#include "model/ListPredictiveJobStatusResult.h"
#include "model/ListPrivacyNumberCallDetailsRequest.h"
#include "model/ListPrivacyNumberCallDetailsResult.h"
#include "model/ListPrivilegesOfUserRequest.h"
#include "model/ListPrivilegesOfUserResult.h"
#include "model/ListRealTimeAgentRequest.h"
#include "model/ListRealTimeAgentResult.h"
#include "model/ListRecentCallRecordsRequest.h"
#include "model/ListRecentCallRecordsResult.h"
#include "model/ListRecordingOfDualTrackRequest.h"
#include "model/ListRecordingOfDualTrackResult.h"
#include "model/ListRecordingsRequest.h"
#include "model/ListRecordingsResult.h"
#include "model/ListRecordingsByContactIdRequest.h"
#include "model/ListRecordingsByContactIdResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/ListScenarioTemplatesRequest.h"
#include "model/ListScenarioTemplatesResult.h"
#include "model/ListScenariosRequest.h"
#include "model/ListScenariosResult.h"
#include "model/ListSkillGroupStatesRequest.h"
#include "model/ListSkillGroupStatesResult.h"
#include "model/ListSkillGroupSummaryReportsRequest.h"
#include "model/ListSkillGroupSummaryReportsResult.h"
#include "model/ListSkillGroupSummaryReportsByIntervalRequest.h"
#include "model/ListSkillGroupSummaryReportsByIntervalResult.h"
#include "model/ListSkillGroupSummaryReportsSinceMidnightRequest.h"
#include "model/ListSkillGroupSummaryReportsSinceMidnightResult.h"
#include "model/ListSkillGroupsRequest.h"
#include "model/ListSkillGroupsResult.h"
#include "model/ListSkillGroupsOfUserRequest.h"
#include "model/ListSkillGroupsOfUserResult.h"
#include "model/ListSurveysRequest.h"
#include "model/ListSurveysResult.h"
#include "model/ListUnreachableContactsRequest.h"
#include "model/ListUnreachableContactsResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ListUsersOfSkillGroupRequest.h"
#include "model/ListUsersOfSkillGroupResult.h"
#include "model/ListVoiceAppraiseRequest.h"
#include "model/ListVoiceAppraiseResult.h"
#include "model/ModifyAgentDeviceRequest.h"
#include "model/ModifyAgentDeviceResult.h"
#include "model/ModifyCabInstanceRequest.h"
#include "model/ModifyCabInstanceResult.h"
#include "model/ModifyMediaRequest.h"
#include "model/ModifyMediaResult.h"
#include "model/ModifyNotificationConfigRequest.h"
#include "model/ModifyNotificationConfigResult.h"
#include "model/ModifyPhoneNumberRequest.h"
#include "model/ModifyPhoneNumberResult.h"
#include "model/ModifyPhoneTagsRequest.h"
#include "model/ModifyPhoneTagsResult.h"
#include "model/ModifyPrivacyNumberCallDetailRequest.h"
#include "model/ModifyPrivacyNumberCallDetailResult.h"
#include "model/ModifyScenarioRequest.h"
#include "model/ModifyScenarioResult.h"
#include "model/ModifySkillGroupRequest.h"
#include "model/ModifySkillGroupResult.h"
#include "model/ModifySkillGroupOfUserRequest.h"
#include "model/ModifySkillGroupOfUserResult.h"
#include "model/ModifySkillGroupOutboundNumbersRequest.h"
#include "model/ModifySkillGroupOutboundNumbersResult.h"
#include "model/ModifySurveyRequest.h"
#include "model/ModifySurveyResult.h"
#include "model/ModifyUserRequest.h"
#include "model/ModifyUserResult.h"
#include "model/PickGlobalOutboundNumbersRequest.h"
#include "model/PickGlobalOutboundNumbersResult.h"
#include "model/PickLocalNumberRequest.h"
#include "model/PickLocalNumberResult.h"
#include "model/PickOutboundNumbersRequest.h"
#include "model/PickOutboundNumbersResult.h"
#include "model/PickOutboundNumbersByTagsRequest.h"
#include "model/PickOutboundNumbersByTagsResult.h"
#include "model/PreCreateMediaRequest.h"
#include "model/PreCreateMediaResult.h"
#include "model/PreModifyMediaRequest.h"
#include "model/PreModifyMediaResult.h"
#include "model/PredictiveRecordFailureRequest.h"
#include "model/PredictiveRecordFailureResult.h"
#include "model/PredictiveRecordSuccessRequest.h"
#include "model/PredictiveRecordSuccessResult.h"
#include "model/PublishContactFlowVersionRequest.h"
#include "model/PublishContactFlowVersionResult.h"
#include "model/PublishPredictiveJobGroupRequest.h"
#include "model/PublishPredictiveJobGroupResult.h"
#include "model/PublishSurveyRequest.h"
#include "model/PublishSurveyResult.h"
#include "model/QueryRedialIndicatorRequest.h"
#include "model/QueryRedialIndicatorResult.h"
#include "model/RefreshTokenRequest.h"
#include "model/RefreshTokenResult.h"
#include "model/RemoveNumberFromSkillGroupRequest.h"
#include "model/RemoveNumberFromSkillGroupResult.h"
#include "model/RemovePhoneNumberRequest.h"
#include "model/RemovePhoneNumberResult.h"
#include "model/RemoveUsersRequest.h"
#include "model/RemoveUsersResult.h"
#include "model/RemoveUsersFromSkillGroupRequest.h"
#include "model/RemoveUsersFromSkillGroupResult.h"
#include "model/RequestLoginInfoRequest.h"
#include "model/RequestLoginInfoResult.h"
#include "model/ResetUserStatusRequest.h"
#include "model/ResetUserStatusResult.h"
#include "model/ResumeJobsRequest.h"
#include "model/ResumeJobsResult.h"
#include "model/SaveStatsRequest.h"
#include "model/SaveStatsResult.h"
#include "model/SaveWebRTCStatsRequest.h"
#include "model/SaveWebRTCStatsResult.h"
#include "model/SendPredefinedShortMessageRequest.h"
#include "model/SendPredefinedShortMessageResult.h"
#include "model/SimpleDialRequest.h"
#include "model/SimpleDialResult.h"
#include "model/StartBack2BackCallRequest.h"
#include "model/StartBack2BackCallResult.h"
#include "model/StartJobRequest.h"
#include "model/StartJobResult.h"
#include "model/SubmitBatchJobsRequest.h"
#include "model/SubmitBatchJobsResult.h"
#include "model/SubmitCabRecordingRequest.h"
#include "model/SubmitCabRecordingResult.h"
#include "model/SuspendJobsRequest.h"
#include "model/SuspendJobsResult.h"
#include "model/TaskPreparingRequest.h"
#include "model/TaskPreparingResult.h"
#include "model/TwoPartiesCallRequest.h"
#include "model/TwoPartiesCallResult.h"


namespace AlibabaCloud
{
	namespace CCC
	{
		class ALIBABACLOUD_CCC_EXPORT CCCClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAgentDeviceResult> AddAgentDeviceOutcome;
			typedef std::future<AddAgentDeviceOutcome> AddAgentDeviceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddAgentDeviceRequest&, const AddAgentDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAgentDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddBulkPhoneNumbersResult> AddBulkPhoneNumbersOutcome;
			typedef std::future<AddBulkPhoneNumbersOutcome> AddBulkPhoneNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddBulkPhoneNumbersRequest&, const AddBulkPhoneNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBulkPhoneNumbersAsyncHandler;
			typedef Outcome<Error, Model::AddNumberToSkillGroupResult> AddNumberToSkillGroupOutcome;
			typedef std::future<AddNumberToSkillGroupOutcome> AddNumberToSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddNumberToSkillGroupRequest&, const AddNumberToSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNumberToSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::AddPhoneNumberResult> AddPhoneNumberOutcome;
			typedef std::future<AddPhoneNumberOutcome> AddPhoneNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddPhoneNumberRequest&, const AddPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::AddPhoneTagsResult> AddPhoneTagsOutcome;
			typedef std::future<AddPhoneTagsOutcome> AddPhoneTagsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddPhoneTagsRequest&, const AddPhoneTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPhoneTagsAsyncHandler;
			typedef Outcome<Error, Model::AssignJobsResult> AssignJobsOutcome;
			typedef std::future<AssignJobsOutcome> AssignJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AssignJobsRequest&, const AssignJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignJobsAsyncHandler;
			typedef Outcome<Error, Model::AssignUsersResult> AssignUsersOutcome;
			typedef std::future<AssignUsersOutcome> AssignUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AssignUsersRequest&, const AssignUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignUsersAsyncHandler;
			typedef Outcome<Error, Model::CallOnlinePrivacyNumberResult> CallOnlinePrivacyNumberOutcome;
			typedef std::future<CallOnlinePrivacyNumberOutcome> CallOnlinePrivacyNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CallOnlinePrivacyNumberRequest&, const CallOnlinePrivacyNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CallOnlinePrivacyNumberAsyncHandler;
			typedef Outcome<Error, Model::CancelJobsResult> CancelJobsOutcome;
			typedef std::future<CancelJobsOutcome> CancelJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CancelJobsRequest&, const CancelJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelJobsAsyncHandler;
			typedef Outcome<Error, Model::CancelPredictiveJobsResult> CancelPredictiveJobsOutcome;
			typedef std::future<CancelPredictiveJobsOutcome> CancelPredictiveJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CancelPredictiveJobsRequest&, const CancelPredictiveJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPredictiveJobsAsyncHandler;
			typedef Outcome<Error, Model::CheckNumberAvaliableResult> CheckNumberAvaliableOutcome;
			typedef std::future<CheckNumberAvaliableOutcome> CheckNumberAvaliableOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CheckNumberAvaliableRequest&, const CheckNumberAvaliableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckNumberAvaliableAsyncHandler;
			typedef Outcome<Error, Model::CommitContactFlowVersionModificationResult> CommitContactFlowVersionModificationOutcome;
			typedef std::future<CommitContactFlowVersionModificationOutcome> CommitContactFlowVersionModificationOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CommitContactFlowVersionModificationRequest&, const CommitContactFlowVersionModificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitContactFlowVersionModificationAsyncHandler;
			typedef Outcome<Error, Model::CreateBatchJobsResult> CreateBatchJobsOutcome;
			typedef std::future<CreateBatchJobsOutcome> CreateBatchJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateBatchJobsRequest&, const CreateBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateCCCPostOrderResult> CreateCCCPostOrderOutcome;
			typedef std::future<CreateCCCPostOrderOutcome> CreateCCCPostOrderOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateCCCPostOrderRequest&, const CreateCCCPostOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCCPostOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateCabInstanceResult> CreateCabInstanceOutcome;
			typedef std::future<CreateCabInstanceOutcome> CreateCabInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateCabInstanceRequest&, const CreateCabInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCabInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateContactFlowResult> CreateContactFlowOutcome;
			typedef std::future<CreateContactFlowOutcome> CreateContactFlowOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateContactFlowRequest&, const CreateContactFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateContactFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateFaultResult> CreateFaultOutcome;
			typedef std::future<CreateFaultOutcome> CreateFaultOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateFaultRequest&, const CreateFaultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFaultAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateJobGroupResult> CreateJobGroupOutcome;
			typedef std::future<CreateJobGroupOutcome> CreateJobGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateJobGroupRequest&, const CreateJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateMediaResult> CreateMediaOutcome;
			typedef std::future<CreateMediaOutcome> CreateMediaOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateMediaRequest&, const CreateMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaAsyncHandler;
			typedef Outcome<Error, Model::CreatePredictiveJobGroupResult> CreatePredictiveJobGroupOutcome;
			typedef std::future<CreatePredictiveJobGroupOutcome> CreatePredictiveJobGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreatePredictiveJobGroupRequest&, const CreatePredictiveJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePredictiveJobGroupAsyncHandler;
			typedef Outcome<Error, Model::CreatePredictiveJobsResult> CreatePredictiveJobsOutcome;
			typedef std::future<CreatePredictiveJobsOutcome> CreatePredictiveJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreatePredictiveJobsRequest&, const CreatePredictiveJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePredictiveJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateScenarioResult> CreateScenarioOutcome;
			typedef std::future<CreateScenarioOutcome> CreateScenarioOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateScenarioRequest&, const CreateScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScenarioAsyncHandler;
			typedef Outcome<Error, Model::CreateScenarioFromTemplateResult> CreateScenarioFromTemplateOutcome;
			typedef std::future<CreateScenarioFromTemplateOutcome> CreateScenarioFromTemplateOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateScenarioFromTemplateRequest&, const CreateScenarioFromTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScenarioFromTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateSkillGroupResult> CreateSkillGroupOutcome;
			typedef std::future<CreateSkillGroupOutcome> CreateSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateSkillGroupRequest&, const CreateSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateSurveyResult> CreateSurveyOutcome;
			typedef std::future<CreateSurveyOutcome> CreateSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateSurveyRequest&, const CreateSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSurveyAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::CreateVoiceAppraiseResult> CreateVoiceAppraiseOutcome;
			typedef std::future<CreateVoiceAppraiseOutcome> CreateVoiceAppraiseOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateVoiceAppraiseRequest&, const CreateVoiceAppraiseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVoiceAppraiseAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobGroupResult> DeleteJobGroupOutcome;
			typedef std::future<DeleteJobGroupOutcome> DeleteJobGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteJobGroupRequest&, const DeleteJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteMediaResult> DeleteMediaOutcome;
			typedef std::future<DeleteMediaOutcome> DeleteMediaOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteMediaRequest&, const DeleteMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaAsyncHandler;
			typedef Outcome<Error, Model::DeletePhoneTagsResult> DeletePhoneTagsOutcome;
			typedef std::future<DeletePhoneTagsOutcome> DeletePhoneTagsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeletePhoneTagsRequest&, const DeletePhoneTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePhoneTagsAsyncHandler;
			typedef Outcome<Error, Model::DeleteSkillGroupResult> DeleteSkillGroupOutcome;
			typedef std::future<DeleteSkillGroupOutcome> DeleteSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteSkillGroupRequest&, const DeleteSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteSurveyResult> DeleteSurveyOutcome;
			typedef std::future<DeleteSurveyOutcome> DeleteSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteSurveyRequest&, const DeleteSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSurveyAsyncHandler;
			typedef Outcome<Error, Model::DialExResult> DialExOutcome;
			typedef std::future<DialExOutcome> DialExOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DialExRequest&, const DialExOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DialExAsyncHandler;
			typedef Outcome<Error, Model::DialogueResult> DialogueOutcome;
			typedef std::future<DialogueOutcome> DialogueOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DialogueRequest&, const DialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DialogueAsyncHandler;
			typedef Outcome<Error, Model::DownloadAllTypeRecordingResult> DownloadAllTypeRecordingOutcome;
			typedef std::future<DownloadAllTypeRecordingOutcome> DownloadAllTypeRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DownloadAllTypeRecordingRequest&, const DownloadAllTypeRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadAllTypeRecordingAsyncHandler;
			typedef Outcome<Error, Model::DownloadCabRecordingResult> DownloadCabRecordingOutcome;
			typedef std::future<DownloadCabRecordingOutcome> DownloadCabRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DownloadCabRecordingRequest&, const DownloadCabRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCabRecordingAsyncHandler;
			typedef Outcome<Error, Model::DownloadOriginalStatisticsReportResult> DownloadOriginalStatisticsReportOutcome;
			typedef std::future<DownloadOriginalStatisticsReportOutcome> DownloadOriginalStatisticsReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DownloadOriginalStatisticsReportRequest&, const DownloadOriginalStatisticsReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadOriginalStatisticsReportAsyncHandler;
			typedef Outcome<Error, Model::DownloadRecordingResult> DownloadRecordingOutcome;
			typedef std::future<DownloadRecordingOutcome> DownloadRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DownloadRecordingRequest&, const DownloadRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadRecordingAsyncHandler;
			typedef Outcome<Error, Model::DownloadUnreachableContactsResult> DownloadUnreachableContactsOutcome;
			typedef std::future<DownloadUnreachableContactsOutcome> DownloadUnreachableContactsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DownloadUnreachableContactsRequest&, const DownloadUnreachableContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadUnreachableContactsAsyncHandler;
			typedef Outcome<Error, Model::FindUsersResult> FindUsersOutcome;
			typedef std::future<FindUsersOutcome> FindUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::FindUsersRequest&, const FindUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FindUsersAsyncHandler;
			typedef Outcome<Error, Model::GenerateAgentStatisticReportResult> GenerateAgentStatisticReportOutcome;
			typedef std::future<GenerateAgentStatisticReportOutcome> GenerateAgentStatisticReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GenerateAgentStatisticReportRequest&, const GenerateAgentStatisticReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateAgentStatisticReportAsyncHandler;
			typedef Outcome<Error, Model::GetAgentDataResult> GetAgentDataOutcome;
			typedef std::future<GetAgentDataOutcome> GetAgentDataOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetAgentDataRequest&, const GetAgentDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAgentDataAsyncHandler;
			typedef Outcome<Error, Model::GetAgentStateResult> GetAgentStateOutcome;
			typedef std::future<GetAgentStateOutcome> GetAgentStateOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetAgentStateRequest&, const GetAgentStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAgentStateAsyncHandler;
			typedef Outcome<Error, Model::GetCallMeasureSummaryReportResult> GetCallMeasureSummaryReportOutcome;
			typedef std::future<GetCallMeasureSummaryReportOutcome> GetCallMeasureSummaryReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetCallMeasureSummaryReportRequest&, const GetCallMeasureSummaryReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCallMeasureSummaryReportAsyncHandler;
			typedef Outcome<Error, Model::GetConfigResult> GetConfigOutcome;
			typedef std::future<GetConfigOutcome> GetConfigOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetConfigRequest&, const GetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConfigAsyncHandler;
			typedef Outcome<Error, Model::GetContactIdentifyByOutBoundTaskIdResult> GetContactIdentifyByOutBoundTaskIdOutcome;
			typedef std::future<GetContactIdentifyByOutBoundTaskIdOutcome> GetContactIdentifyByOutBoundTaskIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetContactIdentifyByOutBoundTaskIdRequest&, const GetContactIdentifyByOutBoundTaskIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContactIdentifyByOutBoundTaskIdAsyncHandler;
			typedef Outcome<Error, Model::GetContactInfoByOutboundTaskIdResult> GetContactInfoByOutboundTaskIdOutcome;
			typedef std::future<GetContactInfoByOutboundTaskIdOutcome> GetContactInfoByOutboundTaskIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetContactInfoByOutboundTaskIdRequest&, const GetContactInfoByOutboundTaskIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContactInfoByOutboundTaskIdAsyncHandler;
			typedef Outcome<Error, Model::GetConversationDetailByContactIdResult> GetConversationDetailByContactIdOutcome;
			typedef std::future<GetConversationDetailByContactIdOutcome> GetConversationDetailByContactIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetConversationDetailByContactIdRequest&, const GetConversationDetailByContactIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConversationDetailByContactIdAsyncHandler;
			typedef Outcome<Error, Model::GetConversationListResult> GetConversationListOutcome;
			typedef std::future<GetConversationListOutcome> GetConversationListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetConversationListRequest&, const GetConversationListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConversationListAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceStateResult> GetInstanceStateOutcome;
			typedef std::future<GetInstanceStateOutcome> GetInstanceStateOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetInstanceStateRequest&, const GetInstanceStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceStateAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceSummaryReportResult> GetInstanceSummaryReportOutcome;
			typedef std::future<GetInstanceSummaryReportOutcome> GetInstanceSummaryReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetInstanceSummaryReportRequest&, const GetInstanceSummaryReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceSummaryReportAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceSummaryReportByIntervalResult> GetInstanceSummaryReportByIntervalOutcome;
			typedef std::future<GetInstanceSummaryReportByIntervalOutcome> GetInstanceSummaryReportByIntervalOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetInstanceSummaryReportByIntervalRequest&, const GetInstanceSummaryReportByIntervalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceSummaryReportByIntervalAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceSummaryReportSinceMidnightResult> GetInstanceSummaryReportSinceMidnightOutcome;
			typedef std::future<GetInstanceSummaryReportSinceMidnightOutcome> GetInstanceSummaryReportSinceMidnightOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetInstanceSummaryReportSinceMidnightRequest&, const GetInstanceSummaryReportSinceMidnightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceSummaryReportSinceMidnightAsyncHandler;
			typedef Outcome<Error, Model::GetJobResult> GetJobOutcome;
			typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobRequest&, const GetJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobAsyncHandler;
			typedef Outcome<Error, Model::GetJobDataUploadParamsResult> GetJobDataUploadParamsOutcome;
			typedef std::future<GetJobDataUploadParamsOutcome> GetJobDataUploadParamsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobDataUploadParamsRequest&, const GetJobDataUploadParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobDataUploadParamsAsyncHandler;
			typedef Outcome<Error, Model::GetJobFileUploadUrlResult> GetJobFileUploadUrlOutcome;
			typedef std::future<GetJobFileUploadUrlOutcome> GetJobFileUploadUrlOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobFileUploadUrlRequest&, const GetJobFileUploadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobFileUploadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetJobGroupResult> GetJobGroupOutcome;
			typedef std::future<GetJobGroupOutcome> GetJobGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobGroupRequest&, const GetJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobGroupAsyncHandler;
			typedef Outcome<Error, Model::GetJobListResult> GetJobListOutcome;
			typedef std::future<GetJobListOutcome> GetJobListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobListRequest&, const GetJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobListAsyncHandler;
			typedef Outcome<Error, Model::GetJobStatusByCallIdResult> GetJobStatusByCallIdOutcome;
			typedef std::future<GetJobStatusByCallIdOutcome> GetJobStatusByCallIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobStatusByCallIdRequest&, const GetJobStatusByCallIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobStatusByCallIdAsyncHandler;
			typedef Outcome<Error, Model::GetJobTemplateDownloadParamsResult> GetJobTemplateDownloadParamsOutcome;
			typedef std::future<GetJobTemplateDownloadParamsOutcome> GetJobTemplateDownloadParamsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobTemplateDownloadParamsRequest&, const GetJobTemplateDownloadParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobTemplateDownloadParamsAsyncHandler;
			typedef Outcome<Error, Model::GetJobsProgressResult> GetJobsProgressOutcome;
			typedef std::future<GetJobsProgressOutcome> GetJobsProgressOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetJobsProgressRequest&, const GetJobsProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobsProgressAsyncHandler;
			typedef Outcome<Error, Model::GetNumberRegionInfoResult> GetNumberRegionInfoOutcome;
			typedef std::future<GetNumberRegionInfoOutcome> GetNumberRegionInfoOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetNumberRegionInfoRequest&, const GetNumberRegionInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNumberRegionInfoAsyncHandler;
			typedef Outcome<Error, Model::GetPredictiveJobResult> GetPredictiveJobOutcome;
			typedef std::future<GetPredictiveJobOutcome> GetPredictiveJobOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetPredictiveJobRequest&, const GetPredictiveJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPredictiveJobAsyncHandler;
			typedef Outcome<Error, Model::GetRecordOssUploadParamResult> GetRecordOssUploadParamOutcome;
			typedef std::future<GetRecordOssUploadParamOutcome> GetRecordOssUploadParamOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetRecordOssUploadParamRequest&, const GetRecordOssUploadParamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRecordOssUploadParamAsyncHandler;
			typedef Outcome<Error, Model::GetRoutePointResult> GetRoutePointOutcome;
			typedef std::future<GetRoutePointOutcome> GetRoutePointOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetRoutePointRequest&, const GetRoutePointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRoutePointAsyncHandler;
			typedef Outcome<Error, Model::GetScenarioResult> GetScenarioOutcome;
			typedef std::future<GetScenarioOutcome> GetScenarioOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetScenarioRequest&, const GetScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScenarioAsyncHandler;
			typedef Outcome<Error, Model::GetServiceExtensionsResult> GetServiceExtensionsOutcome;
			typedef std::future<GetServiceExtensionsOutcome> GetServiceExtensionsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetServiceExtensionsRequest&, const GetServiceExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceExtensionsAsyncHandler;
			typedef Outcome<Error, Model::GetSmsConfigResult> GetSmsConfigOutcome;
			typedef std::future<GetSmsConfigOutcome> GetSmsConfigOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetSmsConfigRequest&, const GetSmsConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmsConfigAsyncHandler;
			typedef Outcome<Error, Model::GetSurveyResult> GetSurveyOutcome;
			typedef std::future<GetSurveyOutcome> GetSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetSurveyRequest&, const GetSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSurveyAsyncHandler;
			typedef Outcome<Error, Model::GetTURNCredentialsResult> GetTURNCredentialsOutcome;
			typedef std::future<GetTURNCredentialsOutcome> GetTURNCredentialsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTURNCredentialsRequest&, const GetTURNCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTURNCredentialsAsyncHandler;
			typedef Outcome<Error, Model::GetTURNServerListResult> GetTURNServerListOutcome;
			typedef std::future<GetTURNServerListOutcome> GetTURNServerListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTURNServerListRequest&, const GetTURNServerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTURNServerListAsyncHandler;
			typedef Outcome<Error, Model::GetTaskListResult> GetTaskListOutcome;
			typedef std::future<GetTaskListOutcome> GetTaskListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTaskListRequest&, const GetTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskListAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::InflightTaskTimeoutResult> InflightTaskTimeoutOutcome;
			typedef std::future<InflightTaskTimeoutOutcome> InflightTaskTimeoutOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::InflightTaskTimeoutRequest&, const InflightTaskTimeoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InflightTaskTimeoutAsyncHandler;
			typedef Outcome<Error, Model::LaunchAppraiseResult> LaunchAppraiseOutcome;
			typedef std::future<LaunchAppraiseOutcome> LaunchAppraiseOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::LaunchAppraiseRequest&, const LaunchAppraiseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LaunchAppraiseAsyncHandler;
			typedef Outcome<Error, Model::LaunchShortMessageAppraiseResult> LaunchShortMessageAppraiseOutcome;
			typedef std::future<LaunchShortMessageAppraiseOutcome> LaunchShortMessageAppraiseOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::LaunchShortMessageAppraiseRequest&, const LaunchShortMessageAppraiseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LaunchShortMessageAppraiseAsyncHandler;
			typedef Outcome<Error, Model::ListAgentDevicesResult> ListAgentDevicesOutcome;
			typedef std::future<ListAgentDevicesOutcome> ListAgentDevicesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentDevicesRequest&, const ListAgentDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentDevicesAsyncHandler;
			typedef Outcome<Error, Model::ListAgentEventsResult> ListAgentEventsOutcome;
			typedef std::future<ListAgentEventsOutcome> ListAgentEventsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentEventsRequest&, const ListAgentEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentEventsAsyncHandler;
			typedef Outcome<Error, Model::ListAgentStatesResult> ListAgentStatesOutcome;
			typedef std::future<ListAgentStatesOutcome> ListAgentStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentStatesRequest&, const ListAgentStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentStatesAsyncHandler;
			typedef Outcome<Error, Model::ListAgentSummaryReportsResult> ListAgentSummaryReportsOutcome;
			typedef std::future<ListAgentSummaryReportsOutcome> ListAgentSummaryReportsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentSummaryReportsRequest&, const ListAgentSummaryReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentSummaryReportsAsyncHandler;
			typedef Outcome<Error, Model::ListAgentSummaryReportsByIntervalResult> ListAgentSummaryReportsByIntervalOutcome;
			typedef std::future<ListAgentSummaryReportsByIntervalOutcome> ListAgentSummaryReportsByIntervalOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentSummaryReportsByIntervalRequest&, const ListAgentSummaryReportsByIntervalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentSummaryReportsByIntervalAsyncHandler;
			typedef Outcome<Error, Model::ListAgentSummaryReportsSinceMidnightResult> ListAgentSummaryReportsSinceMidnightOutcome;
			typedef std::future<ListAgentSummaryReportsSinceMidnightOutcome> ListAgentSummaryReportsSinceMidnightOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentSummaryReportsSinceMidnightRequest&, const ListAgentSummaryReportsSinceMidnightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentSummaryReportsSinceMidnightAsyncHandler;
			typedef Outcome<Error, Model::ListBasicStatisticsReportSubItemsResult> ListBasicStatisticsReportSubItemsOutcome;
			typedef std::future<ListBasicStatisticsReportSubItemsOutcome> ListBasicStatisticsReportSubItemsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListBasicStatisticsReportSubItemsRequest&, const ListBasicStatisticsReportSubItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBasicStatisticsReportSubItemsAsyncHandler;
			typedef Outcome<Error, Model::ListCallDetailRecordsResult> ListCallDetailRecordsOutcome;
			typedef std::future<ListCallDetailRecordsOutcome> ListCallDetailRecordsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCallDetailRecordsRequest&, const ListCallDetailRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallDetailRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListCallEventDetailByContactIdResult> ListCallEventDetailByContactIdOutcome;
			typedef std::future<ListCallEventDetailByContactIdOutcome> ListCallEventDetailByContactIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCallEventDetailByContactIdRequest&, const ListCallEventDetailByContactIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallEventDetailByContactIdAsyncHandler;
			typedef Outcome<Error, Model::ListCallMeasureSummaryReportsResult> ListCallMeasureSummaryReportsOutcome;
			typedef std::future<ListCallMeasureSummaryReportsOutcome> ListCallMeasureSummaryReportsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCallMeasureSummaryReportsRequest&, const ListCallMeasureSummaryReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallMeasureSummaryReportsAsyncHandler;
			typedef Outcome<Error, Model::ListConfigResult> ListConfigOutcome;
			typedef std::future<ListConfigOutcome> ListConfigOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListConfigRequest&, const ListConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigAsyncHandler;
			typedef Outcome<Error, Model::ListContactFlowsResult> ListContactFlowsOutcome;
			typedef std::future<ListContactFlowsOutcome> ListContactFlowsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListContactFlowsRequest&, const ListContactFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContactFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesOfUserResult> ListInstancesOfUserOutcome;
			typedef std::future<ListInstancesOfUserOutcome> ListInstancesOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListInstancesOfUserRequest&, const ListInstancesOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListIvrTrackingDetailResult> ListIvrTrackingDetailOutcome;
			typedef std::future<ListIvrTrackingDetailOutcome> ListIvrTrackingDetailOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListIvrTrackingDetailRequest&, const ListIvrTrackingDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIvrTrackingDetailAsyncHandler;
			typedef Outcome<Error, Model::ListJobGroupsResult> ListJobGroupsOutcome;
			typedef std::future<ListJobGroupsOutcome> ListJobGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListJobGroupsRequest&, const ListJobGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListJobStatusResult> ListJobStatusOutcome;
			typedef std::future<ListJobStatusOutcome> ListJobStatusOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListJobStatusRequest&, const ListJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobStatusAsyncHandler;
			typedef Outcome<Error, Model::ListJobsByGroupResult> ListJobsByGroupOutcome;
			typedef std::future<ListJobsByGroupOutcome> ListJobsByGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListJobsByGroupRequest&, const ListJobsByGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsByGroupAsyncHandler;
			typedef Outcome<Error, Model::ListMediasResult> ListMediasOutcome;
			typedef std::future<ListMediasOutcome> ListMediasOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListMediasRequest&, const ListMediasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediasAsyncHandler;
			typedef Outcome<Error, Model::ListOutboundPhoneNumberOfUserResult> ListOutboundPhoneNumberOfUserOutcome;
			typedef std::future<ListOutboundPhoneNumberOfUserOutcome> ListOutboundPhoneNumberOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListOutboundPhoneNumberOfUserRequest&, const ListOutboundPhoneNumberOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOutboundPhoneNumberOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListPhoneNumbersResult> ListPhoneNumbersOutcome;
			typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPhoneNumbersRequest&, const ListPhoneNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPhoneNumbersAsyncHandler;
			typedef Outcome<Error, Model::ListPhoneTagsResult> ListPhoneTagsOutcome;
			typedef std::future<ListPhoneTagsOutcome> ListPhoneTagsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPhoneTagsRequest&, const ListPhoneTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPhoneTagsAsyncHandler;
			typedef Outcome<Error, Model::ListPredictiveJobGroupsResult> ListPredictiveJobGroupsOutcome;
			typedef std::future<ListPredictiveJobGroupsOutcome> ListPredictiveJobGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPredictiveJobGroupsRequest&, const ListPredictiveJobGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPredictiveJobGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListPredictiveJobStatusResult> ListPredictiveJobStatusOutcome;
			typedef std::future<ListPredictiveJobStatusOutcome> ListPredictiveJobStatusOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPredictiveJobStatusRequest&, const ListPredictiveJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPredictiveJobStatusAsyncHandler;
			typedef Outcome<Error, Model::ListPrivacyNumberCallDetailsResult> ListPrivacyNumberCallDetailsOutcome;
			typedef std::future<ListPrivacyNumberCallDetailsOutcome> ListPrivacyNumberCallDetailsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPrivacyNumberCallDetailsRequest&, const ListPrivacyNumberCallDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivacyNumberCallDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListPrivilegesOfUserResult> ListPrivilegesOfUserOutcome;
			typedef std::future<ListPrivilegesOfUserOutcome> ListPrivilegesOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPrivilegesOfUserRequest&, const ListPrivilegesOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivilegesOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListRealTimeAgentResult> ListRealTimeAgentOutcome;
			typedef std::future<ListRealTimeAgentOutcome> ListRealTimeAgentOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRealTimeAgentRequest&, const ListRealTimeAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRealTimeAgentAsyncHandler;
			typedef Outcome<Error, Model::ListRecentCallRecordsResult> ListRecentCallRecordsOutcome;
			typedef std::future<ListRecentCallRecordsOutcome> ListRecentCallRecordsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRecentCallRecordsRequest&, const ListRecentCallRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecentCallRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListRecordingOfDualTrackResult> ListRecordingOfDualTrackOutcome;
			typedef std::future<ListRecordingOfDualTrackOutcome> ListRecordingOfDualTrackOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRecordingOfDualTrackRequest&, const ListRecordingOfDualTrackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordingOfDualTrackAsyncHandler;
			typedef Outcome<Error, Model::ListRecordingsResult> ListRecordingsOutcome;
			typedef std::future<ListRecordingsOutcome> ListRecordingsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRecordingsRequest&, const ListRecordingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordingsAsyncHandler;
			typedef Outcome<Error, Model::ListRecordingsByContactIdResult> ListRecordingsByContactIdOutcome;
			typedef std::future<ListRecordingsByContactIdOutcome> ListRecordingsByContactIdOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRecordingsByContactIdRequest&, const ListRecordingsByContactIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecordingsByContactIdAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::ListScenarioTemplatesResult> ListScenarioTemplatesOutcome;
			typedef std::future<ListScenarioTemplatesOutcome> ListScenarioTemplatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListScenarioTemplatesRequest&, const ListScenarioTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenarioTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListScenariosResult> ListScenariosOutcome;
			typedef std::future<ListScenariosOutcome> ListScenariosOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListScenariosRequest&, const ListScenariosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenariosAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupStatesResult> ListSkillGroupStatesOutcome;
			typedef std::future<ListSkillGroupStatesOutcome> ListSkillGroupStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupStatesRequest&, const ListSkillGroupStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupStatesAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupSummaryReportsResult> ListSkillGroupSummaryReportsOutcome;
			typedef std::future<ListSkillGroupSummaryReportsOutcome> ListSkillGroupSummaryReportsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupSummaryReportsRequest&, const ListSkillGroupSummaryReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupSummaryReportsAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupSummaryReportsByIntervalResult> ListSkillGroupSummaryReportsByIntervalOutcome;
			typedef std::future<ListSkillGroupSummaryReportsByIntervalOutcome> ListSkillGroupSummaryReportsByIntervalOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupSummaryReportsByIntervalRequest&, const ListSkillGroupSummaryReportsByIntervalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupSummaryReportsByIntervalAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupSummaryReportsSinceMidnightResult> ListSkillGroupSummaryReportsSinceMidnightOutcome;
			typedef std::future<ListSkillGroupSummaryReportsSinceMidnightOutcome> ListSkillGroupSummaryReportsSinceMidnightOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupSummaryReportsSinceMidnightRequest&, const ListSkillGroupSummaryReportsSinceMidnightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupSummaryReportsSinceMidnightAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupsResult> ListSkillGroupsOutcome;
			typedef std::future<ListSkillGroupsOutcome> ListSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupsRequest&, const ListSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupsOfUserResult> ListSkillGroupsOfUserOutcome;
			typedef std::future<ListSkillGroupsOfUserOutcome> ListSkillGroupsOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupsOfUserRequest&, const ListSkillGroupsOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupsOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListSurveysResult> ListSurveysOutcome;
			typedef std::future<ListSurveysOutcome> ListSurveysOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSurveysRequest&, const ListSurveysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSurveysAsyncHandler;
			typedef Outcome<Error, Model::ListUnreachableContactsResult> ListUnreachableContactsOutcome;
			typedef std::future<ListUnreachableContactsOutcome> ListUnreachableContactsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUnreachableContactsRequest&, const ListUnreachableContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUnreachableContactsAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ListUsersOfSkillGroupResult> ListUsersOfSkillGroupOutcome;
			typedef std::future<ListUsersOfSkillGroupOutcome> ListUsersOfSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUsersOfSkillGroupRequest&, const ListUsersOfSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersOfSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ListVoiceAppraiseResult> ListVoiceAppraiseOutcome;
			typedef std::future<ListVoiceAppraiseOutcome> ListVoiceAppraiseOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListVoiceAppraiseRequest&, const ListVoiceAppraiseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVoiceAppraiseAsyncHandler;
			typedef Outcome<Error, Model::ModifyAgentDeviceResult> ModifyAgentDeviceOutcome;
			typedef std::future<ModifyAgentDeviceOutcome> ModifyAgentDeviceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyAgentDeviceRequest&, const ModifyAgentDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentDeviceAsyncHandler;
			typedef Outcome<Error, Model::ModifyCabInstanceResult> ModifyCabInstanceOutcome;
			typedef std::future<ModifyCabInstanceOutcome> ModifyCabInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyCabInstanceRequest&, const ModifyCabInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCabInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyMediaResult> ModifyMediaOutcome;
			typedef std::future<ModifyMediaOutcome> ModifyMediaOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyMediaRequest&, const ModifyMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaAsyncHandler;
			typedef Outcome<Error, Model::ModifyNotificationConfigResult> ModifyNotificationConfigOutcome;
			typedef std::future<ModifyNotificationConfigOutcome> ModifyNotificationConfigOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyNotificationConfigRequest&, const ModifyNotificationConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotificationConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhoneNumberResult> ModifyPhoneNumberOutcome;
			typedef std::future<ModifyPhoneNumberOutcome> ModifyPhoneNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyPhoneNumberRequest&, const ModifyPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhoneTagsResult> ModifyPhoneTagsOutcome;
			typedef std::future<ModifyPhoneTagsOutcome> ModifyPhoneTagsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyPhoneTagsRequest&, const ModifyPhoneTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhoneTagsAsyncHandler;
			typedef Outcome<Error, Model::ModifyPrivacyNumberCallDetailResult> ModifyPrivacyNumberCallDetailOutcome;
			typedef std::future<ModifyPrivacyNumberCallDetailOutcome> ModifyPrivacyNumberCallDetailOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyPrivacyNumberCallDetailRequest&, const ModifyPrivacyNumberCallDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivacyNumberCallDetailAsyncHandler;
			typedef Outcome<Error, Model::ModifyScenarioResult> ModifyScenarioOutcome;
			typedef std::future<ModifyScenarioOutcome> ModifyScenarioOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyScenarioRequest&, const ModifyScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScenarioAsyncHandler;
			typedef Outcome<Error, Model::ModifySkillGroupResult> ModifySkillGroupOutcome;
			typedef std::future<ModifySkillGroupOutcome> ModifySkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifySkillGroupRequest&, const ModifySkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifySkillGroupOfUserResult> ModifySkillGroupOfUserOutcome;
			typedef std::future<ModifySkillGroupOfUserOutcome> ModifySkillGroupOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifySkillGroupOfUserRequest&, const ModifySkillGroupOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillGroupOfUserAsyncHandler;
			typedef Outcome<Error, Model::ModifySkillGroupOutboundNumbersResult> ModifySkillGroupOutboundNumbersOutcome;
			typedef std::future<ModifySkillGroupOutboundNumbersOutcome> ModifySkillGroupOutboundNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifySkillGroupOutboundNumbersRequest&, const ModifySkillGroupOutboundNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillGroupOutboundNumbersAsyncHandler;
			typedef Outcome<Error, Model::ModifySurveyResult> ModifySurveyOutcome;
			typedef std::future<ModifySurveyOutcome> ModifySurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifySurveyRequest&, const ModifySurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySurveyAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserResult> ModifyUserOutcome;
			typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyUserRequest&, const ModifyUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
			typedef Outcome<Error, Model::PickGlobalOutboundNumbersResult> PickGlobalOutboundNumbersOutcome;
			typedef std::future<PickGlobalOutboundNumbersOutcome> PickGlobalOutboundNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PickGlobalOutboundNumbersRequest&, const PickGlobalOutboundNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PickGlobalOutboundNumbersAsyncHandler;
			typedef Outcome<Error, Model::PickLocalNumberResult> PickLocalNumberOutcome;
			typedef std::future<PickLocalNumberOutcome> PickLocalNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PickLocalNumberRequest&, const PickLocalNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PickLocalNumberAsyncHandler;
			typedef Outcome<Error, Model::PickOutboundNumbersResult> PickOutboundNumbersOutcome;
			typedef std::future<PickOutboundNumbersOutcome> PickOutboundNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PickOutboundNumbersRequest&, const PickOutboundNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PickOutboundNumbersAsyncHandler;
			typedef Outcome<Error, Model::PickOutboundNumbersByTagsResult> PickOutboundNumbersByTagsOutcome;
			typedef std::future<PickOutboundNumbersByTagsOutcome> PickOutboundNumbersByTagsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PickOutboundNumbersByTagsRequest&, const PickOutboundNumbersByTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PickOutboundNumbersByTagsAsyncHandler;
			typedef Outcome<Error, Model::PreCreateMediaResult> PreCreateMediaOutcome;
			typedef std::future<PreCreateMediaOutcome> PreCreateMediaOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PreCreateMediaRequest&, const PreCreateMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreCreateMediaAsyncHandler;
			typedef Outcome<Error, Model::PreModifyMediaResult> PreModifyMediaOutcome;
			typedef std::future<PreModifyMediaOutcome> PreModifyMediaOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PreModifyMediaRequest&, const PreModifyMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreModifyMediaAsyncHandler;
			typedef Outcome<Error, Model::PredictiveRecordFailureResult> PredictiveRecordFailureOutcome;
			typedef std::future<PredictiveRecordFailureOutcome> PredictiveRecordFailureOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PredictiveRecordFailureRequest&, const PredictiveRecordFailureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictiveRecordFailureAsyncHandler;
			typedef Outcome<Error, Model::PredictiveRecordSuccessResult> PredictiveRecordSuccessOutcome;
			typedef std::future<PredictiveRecordSuccessOutcome> PredictiveRecordSuccessOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PredictiveRecordSuccessRequest&, const PredictiveRecordSuccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictiveRecordSuccessAsyncHandler;
			typedef Outcome<Error, Model::PublishContactFlowVersionResult> PublishContactFlowVersionOutcome;
			typedef std::future<PublishContactFlowVersionOutcome> PublishContactFlowVersionOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PublishContactFlowVersionRequest&, const PublishContactFlowVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishContactFlowVersionAsyncHandler;
			typedef Outcome<Error, Model::PublishPredictiveJobGroupResult> PublishPredictiveJobGroupOutcome;
			typedef std::future<PublishPredictiveJobGroupOutcome> PublishPredictiveJobGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PublishPredictiveJobGroupRequest&, const PublishPredictiveJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishPredictiveJobGroupAsyncHandler;
			typedef Outcome<Error, Model::PublishSurveyResult> PublishSurveyOutcome;
			typedef std::future<PublishSurveyOutcome> PublishSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PublishSurveyRequest&, const PublishSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishSurveyAsyncHandler;
			typedef Outcome<Error, Model::QueryRedialIndicatorResult> QueryRedialIndicatorOutcome;
			typedef std::future<QueryRedialIndicatorOutcome> QueryRedialIndicatorOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::QueryRedialIndicatorRequest&, const QueryRedialIndicatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRedialIndicatorAsyncHandler;
			typedef Outcome<Error, Model::RefreshTokenResult> RefreshTokenOutcome;
			typedef std::future<RefreshTokenOutcome> RefreshTokenOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RefreshTokenRequest&, const RefreshTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshTokenAsyncHandler;
			typedef Outcome<Error, Model::RemoveNumberFromSkillGroupResult> RemoveNumberFromSkillGroupOutcome;
			typedef std::future<RemoveNumberFromSkillGroupOutcome> RemoveNumberFromSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemoveNumberFromSkillGroupRequest&, const RemoveNumberFromSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNumberFromSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::RemovePhoneNumberResult> RemovePhoneNumberOutcome;
			typedef std::future<RemovePhoneNumberOutcome> RemovePhoneNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemovePhoneNumberRequest&, const RemovePhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::RemoveUsersResult> RemoveUsersOutcome;
			typedef std::future<RemoveUsersOutcome> RemoveUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemoveUsersRequest&, const RemoveUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUsersAsyncHandler;
			typedef Outcome<Error, Model::RemoveUsersFromSkillGroupResult> RemoveUsersFromSkillGroupOutcome;
			typedef std::future<RemoveUsersFromSkillGroupOutcome> RemoveUsersFromSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemoveUsersFromSkillGroupRequest&, const RemoveUsersFromSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUsersFromSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::RequestLoginInfoResult> RequestLoginInfoOutcome;
			typedef std::future<RequestLoginInfoOutcome> RequestLoginInfoOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RequestLoginInfoRequest&, const RequestLoginInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RequestLoginInfoAsyncHandler;
			typedef Outcome<Error, Model::ResetUserStatusResult> ResetUserStatusOutcome;
			typedef std::future<ResetUserStatusOutcome> ResetUserStatusOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ResetUserStatusRequest&, const ResetUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetUserStatusAsyncHandler;
			typedef Outcome<Error, Model::ResumeJobsResult> ResumeJobsOutcome;
			typedef std::future<ResumeJobsOutcome> ResumeJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ResumeJobsRequest&, const ResumeJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeJobsAsyncHandler;
			typedef Outcome<Error, Model::SaveStatsResult> SaveStatsOutcome;
			typedef std::future<SaveStatsOutcome> SaveStatsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SaveStatsRequest&, const SaveStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveStatsAsyncHandler;
			typedef Outcome<Error, Model::SaveWebRTCStatsResult> SaveWebRTCStatsOutcome;
			typedef std::future<SaveWebRTCStatsOutcome> SaveWebRTCStatsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SaveWebRTCStatsRequest&, const SaveWebRTCStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveWebRTCStatsAsyncHandler;
			typedef Outcome<Error, Model::SendPredefinedShortMessageResult> SendPredefinedShortMessageOutcome;
			typedef std::future<SendPredefinedShortMessageOutcome> SendPredefinedShortMessageOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SendPredefinedShortMessageRequest&, const SendPredefinedShortMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendPredefinedShortMessageAsyncHandler;
			typedef Outcome<Error, Model::SimpleDialResult> SimpleDialOutcome;
			typedef std::future<SimpleDialOutcome> SimpleDialOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SimpleDialRequest&, const SimpleDialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SimpleDialAsyncHandler;
			typedef Outcome<Error, Model::StartBack2BackCallResult> StartBack2BackCallOutcome;
			typedef std::future<StartBack2BackCallOutcome> StartBack2BackCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartBack2BackCallRequest&, const StartBack2BackCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBack2BackCallAsyncHandler;
			typedef Outcome<Error, Model::StartJobResult> StartJobOutcome;
			typedef std::future<StartJobOutcome> StartJobOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartJobRequest&, const StartJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitBatchJobsResult> SubmitBatchJobsOutcome;
			typedef std::future<SubmitBatchJobsOutcome> SubmitBatchJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SubmitBatchJobsRequest&, const SubmitBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::SubmitCabRecordingResult> SubmitCabRecordingOutcome;
			typedef std::future<SubmitCabRecordingOutcome> SubmitCabRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SubmitCabRecordingRequest&, const SubmitCabRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCabRecordingAsyncHandler;
			typedef Outcome<Error, Model::SuspendJobsResult> SuspendJobsOutcome;
			typedef std::future<SuspendJobsOutcome> SuspendJobsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SuspendJobsRequest&, const SuspendJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendJobsAsyncHandler;
			typedef Outcome<Error, Model::TaskPreparingResult> TaskPreparingOutcome;
			typedef std::future<TaskPreparingOutcome> TaskPreparingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::TaskPreparingRequest&, const TaskPreparingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskPreparingAsyncHandler;
			typedef Outcome<Error, Model::TwoPartiesCallResult> TwoPartiesCallOutcome;
			typedef std::future<TwoPartiesCallOutcome> TwoPartiesCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::TwoPartiesCallRequest&, const TwoPartiesCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TwoPartiesCallAsyncHandler;

			CCCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CCCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CCCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CCCClient();
			AddAgentDeviceOutcome addAgentDevice(const Model::AddAgentDeviceRequest &request)const;
			void addAgentDeviceAsync(const Model::AddAgentDeviceRequest& request, const AddAgentDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAgentDeviceOutcomeCallable addAgentDeviceCallable(const Model::AddAgentDeviceRequest& request) const;
			AddBulkPhoneNumbersOutcome addBulkPhoneNumbers(const Model::AddBulkPhoneNumbersRequest &request)const;
			void addBulkPhoneNumbersAsync(const Model::AddBulkPhoneNumbersRequest& request, const AddBulkPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBulkPhoneNumbersOutcomeCallable addBulkPhoneNumbersCallable(const Model::AddBulkPhoneNumbersRequest& request) const;
			AddNumberToSkillGroupOutcome addNumberToSkillGroup(const Model::AddNumberToSkillGroupRequest &request)const;
			void addNumberToSkillGroupAsync(const Model::AddNumberToSkillGroupRequest& request, const AddNumberToSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNumberToSkillGroupOutcomeCallable addNumberToSkillGroupCallable(const Model::AddNumberToSkillGroupRequest& request) const;
			AddPhoneNumberOutcome addPhoneNumber(const Model::AddPhoneNumberRequest &request)const;
			void addPhoneNumberAsync(const Model::AddPhoneNumberRequest& request, const AddPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPhoneNumberOutcomeCallable addPhoneNumberCallable(const Model::AddPhoneNumberRequest& request) const;
			AddPhoneTagsOutcome addPhoneTags(const Model::AddPhoneTagsRequest &request)const;
			void addPhoneTagsAsync(const Model::AddPhoneTagsRequest& request, const AddPhoneTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPhoneTagsOutcomeCallable addPhoneTagsCallable(const Model::AddPhoneTagsRequest& request) const;
			AssignJobsOutcome assignJobs(const Model::AssignJobsRequest &request)const;
			void assignJobsAsync(const Model::AssignJobsRequest& request, const AssignJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignJobsOutcomeCallable assignJobsCallable(const Model::AssignJobsRequest& request) const;
			AssignUsersOutcome assignUsers(const Model::AssignUsersRequest &request)const;
			void assignUsersAsync(const Model::AssignUsersRequest& request, const AssignUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignUsersOutcomeCallable assignUsersCallable(const Model::AssignUsersRequest& request) const;
			CallOnlinePrivacyNumberOutcome callOnlinePrivacyNumber(const Model::CallOnlinePrivacyNumberRequest &request)const;
			void callOnlinePrivacyNumberAsync(const Model::CallOnlinePrivacyNumberRequest& request, const CallOnlinePrivacyNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CallOnlinePrivacyNumberOutcomeCallable callOnlinePrivacyNumberCallable(const Model::CallOnlinePrivacyNumberRequest& request) const;
			CancelJobsOutcome cancelJobs(const Model::CancelJobsRequest &request)const;
			void cancelJobsAsync(const Model::CancelJobsRequest& request, const CancelJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelJobsOutcomeCallable cancelJobsCallable(const Model::CancelJobsRequest& request) const;
			CancelPredictiveJobsOutcome cancelPredictiveJobs(const Model::CancelPredictiveJobsRequest &request)const;
			void cancelPredictiveJobsAsync(const Model::CancelPredictiveJobsRequest& request, const CancelPredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPredictiveJobsOutcomeCallable cancelPredictiveJobsCallable(const Model::CancelPredictiveJobsRequest& request) const;
			CheckNumberAvaliableOutcome checkNumberAvaliable(const Model::CheckNumberAvaliableRequest &request)const;
			void checkNumberAvaliableAsync(const Model::CheckNumberAvaliableRequest& request, const CheckNumberAvaliableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckNumberAvaliableOutcomeCallable checkNumberAvaliableCallable(const Model::CheckNumberAvaliableRequest& request) const;
			CommitContactFlowVersionModificationOutcome commitContactFlowVersionModification(const Model::CommitContactFlowVersionModificationRequest &request)const;
			void commitContactFlowVersionModificationAsync(const Model::CommitContactFlowVersionModificationRequest& request, const CommitContactFlowVersionModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitContactFlowVersionModificationOutcomeCallable commitContactFlowVersionModificationCallable(const Model::CommitContactFlowVersionModificationRequest& request) const;
			CreateBatchJobsOutcome createBatchJobs(const Model::CreateBatchJobsRequest &request)const;
			void createBatchJobsAsync(const Model::CreateBatchJobsRequest& request, const CreateBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBatchJobsOutcomeCallable createBatchJobsCallable(const Model::CreateBatchJobsRequest& request) const;
			CreateCCCPostOrderOutcome createCCCPostOrder(const Model::CreateCCCPostOrderRequest &request)const;
			void createCCCPostOrderAsync(const Model::CreateCCCPostOrderRequest& request, const CreateCCCPostOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCCCPostOrderOutcomeCallable createCCCPostOrderCallable(const Model::CreateCCCPostOrderRequest& request) const;
			CreateCabInstanceOutcome createCabInstance(const Model::CreateCabInstanceRequest &request)const;
			void createCabInstanceAsync(const Model::CreateCabInstanceRequest& request, const CreateCabInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCabInstanceOutcomeCallable createCabInstanceCallable(const Model::CreateCabInstanceRequest& request) const;
			CreateContactFlowOutcome createContactFlow(const Model::CreateContactFlowRequest &request)const;
			void createContactFlowAsync(const Model::CreateContactFlowRequest& request, const CreateContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateContactFlowOutcomeCallable createContactFlowCallable(const Model::CreateContactFlowRequest& request) const;
			CreateFaultOutcome createFault(const Model::CreateFaultRequest &request)const;
			void createFaultAsync(const Model::CreateFaultRequest& request, const CreateFaultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFaultOutcomeCallable createFaultCallable(const Model::CreateFaultRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateJobGroupOutcome createJobGroup(const Model::CreateJobGroupRequest &request)const;
			void createJobGroupAsync(const Model::CreateJobGroupRequest& request, const CreateJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobGroupOutcomeCallable createJobGroupCallable(const Model::CreateJobGroupRequest& request) const;
			CreateMediaOutcome createMedia(const Model::CreateMediaRequest &request)const;
			void createMediaAsync(const Model::CreateMediaRequest& request, const CreateMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMediaOutcomeCallable createMediaCallable(const Model::CreateMediaRequest& request) const;
			CreatePredictiveJobGroupOutcome createPredictiveJobGroup(const Model::CreatePredictiveJobGroupRequest &request)const;
			void createPredictiveJobGroupAsync(const Model::CreatePredictiveJobGroupRequest& request, const CreatePredictiveJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePredictiveJobGroupOutcomeCallable createPredictiveJobGroupCallable(const Model::CreatePredictiveJobGroupRequest& request) const;
			CreatePredictiveJobsOutcome createPredictiveJobs(const Model::CreatePredictiveJobsRequest &request)const;
			void createPredictiveJobsAsync(const Model::CreatePredictiveJobsRequest& request, const CreatePredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePredictiveJobsOutcomeCallable createPredictiveJobsCallable(const Model::CreatePredictiveJobsRequest& request) const;
			CreateScenarioOutcome createScenario(const Model::CreateScenarioRequest &request)const;
			void createScenarioAsync(const Model::CreateScenarioRequest& request, const CreateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScenarioOutcomeCallable createScenarioCallable(const Model::CreateScenarioRequest& request) const;
			CreateScenarioFromTemplateOutcome createScenarioFromTemplate(const Model::CreateScenarioFromTemplateRequest &request)const;
			void createScenarioFromTemplateAsync(const Model::CreateScenarioFromTemplateRequest& request, const CreateScenarioFromTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScenarioFromTemplateOutcomeCallable createScenarioFromTemplateCallable(const Model::CreateScenarioFromTemplateRequest& request) const;
			CreateSkillGroupOutcome createSkillGroup(const Model::CreateSkillGroupRequest &request)const;
			void createSkillGroupAsync(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSkillGroupOutcomeCallable createSkillGroupCallable(const Model::CreateSkillGroupRequest& request) const;
			CreateSurveyOutcome createSurvey(const Model::CreateSurveyRequest &request)const;
			void createSurveyAsync(const Model::CreateSurveyRequest& request, const CreateSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSurveyOutcomeCallable createSurveyCallable(const Model::CreateSurveyRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			CreateVoiceAppraiseOutcome createVoiceAppraise(const Model::CreateVoiceAppraiseRequest &request)const;
			void createVoiceAppraiseAsync(const Model::CreateVoiceAppraiseRequest& request, const CreateVoiceAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVoiceAppraiseOutcomeCallable createVoiceAppraiseCallable(const Model::CreateVoiceAppraiseRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteJobGroupOutcome deleteJobGroup(const Model::DeleteJobGroupRequest &request)const;
			void deleteJobGroupAsync(const Model::DeleteJobGroupRequest& request, const DeleteJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobGroupOutcomeCallable deleteJobGroupCallable(const Model::DeleteJobGroupRequest& request) const;
			DeleteMediaOutcome deleteMedia(const Model::DeleteMediaRequest &request)const;
			void deleteMediaAsync(const Model::DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMediaOutcomeCallable deleteMediaCallable(const Model::DeleteMediaRequest& request) const;
			DeletePhoneTagsOutcome deletePhoneTags(const Model::DeletePhoneTagsRequest &request)const;
			void deletePhoneTagsAsync(const Model::DeletePhoneTagsRequest& request, const DeletePhoneTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePhoneTagsOutcomeCallable deletePhoneTagsCallable(const Model::DeletePhoneTagsRequest& request) const;
			DeleteSkillGroupOutcome deleteSkillGroup(const Model::DeleteSkillGroupRequest &request)const;
			void deleteSkillGroupAsync(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSkillGroupOutcomeCallable deleteSkillGroupCallable(const Model::DeleteSkillGroupRequest& request) const;
			DeleteSurveyOutcome deleteSurvey(const Model::DeleteSurveyRequest &request)const;
			void deleteSurveyAsync(const Model::DeleteSurveyRequest& request, const DeleteSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSurveyOutcomeCallable deleteSurveyCallable(const Model::DeleteSurveyRequest& request) const;
			DialExOutcome dialEx(const Model::DialExRequest &request)const;
			void dialExAsync(const Model::DialExRequest& request, const DialExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DialExOutcomeCallable dialExCallable(const Model::DialExRequest& request) const;
			DialogueOutcome dialogue(const Model::DialogueRequest &request)const;
			void dialogueAsync(const Model::DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DialogueOutcomeCallable dialogueCallable(const Model::DialogueRequest& request) const;
			DownloadAllTypeRecordingOutcome downloadAllTypeRecording(const Model::DownloadAllTypeRecordingRequest &request)const;
			void downloadAllTypeRecordingAsync(const Model::DownloadAllTypeRecordingRequest& request, const DownloadAllTypeRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadAllTypeRecordingOutcomeCallable downloadAllTypeRecordingCallable(const Model::DownloadAllTypeRecordingRequest& request) const;
			DownloadCabRecordingOutcome downloadCabRecording(const Model::DownloadCabRecordingRequest &request)const;
			void downloadCabRecordingAsync(const Model::DownloadCabRecordingRequest& request, const DownloadCabRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadCabRecordingOutcomeCallable downloadCabRecordingCallable(const Model::DownloadCabRecordingRequest& request) const;
			DownloadOriginalStatisticsReportOutcome downloadOriginalStatisticsReport(const Model::DownloadOriginalStatisticsReportRequest &request)const;
			void downloadOriginalStatisticsReportAsync(const Model::DownloadOriginalStatisticsReportRequest& request, const DownloadOriginalStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadOriginalStatisticsReportOutcomeCallable downloadOriginalStatisticsReportCallable(const Model::DownloadOriginalStatisticsReportRequest& request) const;
			DownloadRecordingOutcome downloadRecording(const Model::DownloadRecordingRequest &request)const;
			void downloadRecordingAsync(const Model::DownloadRecordingRequest& request, const DownloadRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadRecordingOutcomeCallable downloadRecordingCallable(const Model::DownloadRecordingRequest& request) const;
			DownloadUnreachableContactsOutcome downloadUnreachableContacts(const Model::DownloadUnreachableContactsRequest &request)const;
			void downloadUnreachableContactsAsync(const Model::DownloadUnreachableContactsRequest& request, const DownloadUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadUnreachableContactsOutcomeCallable downloadUnreachableContactsCallable(const Model::DownloadUnreachableContactsRequest& request) const;
			FindUsersOutcome findUsers(const Model::FindUsersRequest &request)const;
			void findUsersAsync(const Model::FindUsersRequest& request, const FindUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FindUsersOutcomeCallable findUsersCallable(const Model::FindUsersRequest& request) const;
			GenerateAgentStatisticReportOutcome generateAgentStatisticReport(const Model::GenerateAgentStatisticReportRequest &request)const;
			void generateAgentStatisticReportAsync(const Model::GenerateAgentStatisticReportRequest& request, const GenerateAgentStatisticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateAgentStatisticReportOutcomeCallable generateAgentStatisticReportCallable(const Model::GenerateAgentStatisticReportRequest& request) const;
			GetAgentDataOutcome getAgentData(const Model::GetAgentDataRequest &request)const;
			void getAgentDataAsync(const Model::GetAgentDataRequest& request, const GetAgentDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAgentDataOutcomeCallable getAgentDataCallable(const Model::GetAgentDataRequest& request) const;
			GetAgentStateOutcome getAgentState(const Model::GetAgentStateRequest &request)const;
			void getAgentStateAsync(const Model::GetAgentStateRequest& request, const GetAgentStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAgentStateOutcomeCallable getAgentStateCallable(const Model::GetAgentStateRequest& request) const;
			GetCallMeasureSummaryReportOutcome getCallMeasureSummaryReport(const Model::GetCallMeasureSummaryReportRequest &request)const;
			void getCallMeasureSummaryReportAsync(const Model::GetCallMeasureSummaryReportRequest& request, const GetCallMeasureSummaryReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCallMeasureSummaryReportOutcomeCallable getCallMeasureSummaryReportCallable(const Model::GetCallMeasureSummaryReportRequest& request) const;
			GetConfigOutcome getConfig(const Model::GetConfigRequest &request)const;
			void getConfigAsync(const Model::GetConfigRequest& request, const GetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConfigOutcomeCallable getConfigCallable(const Model::GetConfigRequest& request) const;
			GetContactIdentifyByOutBoundTaskIdOutcome getContactIdentifyByOutBoundTaskId(const Model::GetContactIdentifyByOutBoundTaskIdRequest &request)const;
			void getContactIdentifyByOutBoundTaskIdAsync(const Model::GetContactIdentifyByOutBoundTaskIdRequest& request, const GetContactIdentifyByOutBoundTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContactIdentifyByOutBoundTaskIdOutcomeCallable getContactIdentifyByOutBoundTaskIdCallable(const Model::GetContactIdentifyByOutBoundTaskIdRequest& request) const;
			GetContactInfoByOutboundTaskIdOutcome getContactInfoByOutboundTaskId(const Model::GetContactInfoByOutboundTaskIdRequest &request)const;
			void getContactInfoByOutboundTaskIdAsync(const Model::GetContactInfoByOutboundTaskIdRequest& request, const GetContactInfoByOutboundTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContactInfoByOutboundTaskIdOutcomeCallable getContactInfoByOutboundTaskIdCallable(const Model::GetContactInfoByOutboundTaskIdRequest& request) const;
			GetConversationDetailByContactIdOutcome getConversationDetailByContactId(const Model::GetConversationDetailByContactIdRequest &request)const;
			void getConversationDetailByContactIdAsync(const Model::GetConversationDetailByContactIdRequest& request, const GetConversationDetailByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConversationDetailByContactIdOutcomeCallable getConversationDetailByContactIdCallable(const Model::GetConversationDetailByContactIdRequest& request) const;
			GetConversationListOutcome getConversationList(const Model::GetConversationListRequest &request)const;
			void getConversationListAsync(const Model::GetConversationListRequest& request, const GetConversationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConversationListOutcomeCallable getConversationListCallable(const Model::GetConversationListRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetInstanceStateOutcome getInstanceState(const Model::GetInstanceStateRequest &request)const;
			void getInstanceStateAsync(const Model::GetInstanceStateRequest& request, const GetInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceStateOutcomeCallable getInstanceStateCallable(const Model::GetInstanceStateRequest& request) const;
			GetInstanceSummaryReportOutcome getInstanceSummaryReport(const Model::GetInstanceSummaryReportRequest &request)const;
			void getInstanceSummaryReportAsync(const Model::GetInstanceSummaryReportRequest& request, const GetInstanceSummaryReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceSummaryReportOutcomeCallable getInstanceSummaryReportCallable(const Model::GetInstanceSummaryReportRequest& request) const;
			GetInstanceSummaryReportByIntervalOutcome getInstanceSummaryReportByInterval(const Model::GetInstanceSummaryReportByIntervalRequest &request)const;
			void getInstanceSummaryReportByIntervalAsync(const Model::GetInstanceSummaryReportByIntervalRequest& request, const GetInstanceSummaryReportByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceSummaryReportByIntervalOutcomeCallable getInstanceSummaryReportByIntervalCallable(const Model::GetInstanceSummaryReportByIntervalRequest& request) const;
			GetInstanceSummaryReportSinceMidnightOutcome getInstanceSummaryReportSinceMidnight(const Model::GetInstanceSummaryReportSinceMidnightRequest &request)const;
			void getInstanceSummaryReportSinceMidnightAsync(const Model::GetInstanceSummaryReportSinceMidnightRequest& request, const GetInstanceSummaryReportSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceSummaryReportSinceMidnightOutcomeCallable getInstanceSummaryReportSinceMidnightCallable(const Model::GetInstanceSummaryReportSinceMidnightRequest& request) const;
			GetJobOutcome getJob(const Model::GetJobRequest &request)const;
			void getJobAsync(const Model::GetJobRequest& request, const GetJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobOutcomeCallable getJobCallable(const Model::GetJobRequest& request) const;
			GetJobDataUploadParamsOutcome getJobDataUploadParams(const Model::GetJobDataUploadParamsRequest &request)const;
			void getJobDataUploadParamsAsync(const Model::GetJobDataUploadParamsRequest& request, const GetJobDataUploadParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobDataUploadParamsOutcomeCallable getJobDataUploadParamsCallable(const Model::GetJobDataUploadParamsRequest& request) const;
			GetJobFileUploadUrlOutcome getJobFileUploadUrl(const Model::GetJobFileUploadUrlRequest &request)const;
			void getJobFileUploadUrlAsync(const Model::GetJobFileUploadUrlRequest& request, const GetJobFileUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobFileUploadUrlOutcomeCallable getJobFileUploadUrlCallable(const Model::GetJobFileUploadUrlRequest& request) const;
			GetJobGroupOutcome getJobGroup(const Model::GetJobGroupRequest &request)const;
			void getJobGroupAsync(const Model::GetJobGroupRequest& request, const GetJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobGroupOutcomeCallable getJobGroupCallable(const Model::GetJobGroupRequest& request) const;
			GetJobListOutcome getJobList(const Model::GetJobListRequest &request)const;
			void getJobListAsync(const Model::GetJobListRequest& request, const GetJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobListOutcomeCallable getJobListCallable(const Model::GetJobListRequest& request) const;
			GetJobStatusByCallIdOutcome getJobStatusByCallId(const Model::GetJobStatusByCallIdRequest &request)const;
			void getJobStatusByCallIdAsync(const Model::GetJobStatusByCallIdRequest& request, const GetJobStatusByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobStatusByCallIdOutcomeCallable getJobStatusByCallIdCallable(const Model::GetJobStatusByCallIdRequest& request) const;
			GetJobTemplateDownloadParamsOutcome getJobTemplateDownloadParams(const Model::GetJobTemplateDownloadParamsRequest &request)const;
			void getJobTemplateDownloadParamsAsync(const Model::GetJobTemplateDownloadParamsRequest& request, const GetJobTemplateDownloadParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobTemplateDownloadParamsOutcomeCallable getJobTemplateDownloadParamsCallable(const Model::GetJobTemplateDownloadParamsRequest& request) const;
			GetJobsProgressOutcome getJobsProgress(const Model::GetJobsProgressRequest &request)const;
			void getJobsProgressAsync(const Model::GetJobsProgressRequest& request, const GetJobsProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobsProgressOutcomeCallable getJobsProgressCallable(const Model::GetJobsProgressRequest& request) const;
			GetNumberRegionInfoOutcome getNumberRegionInfo(const Model::GetNumberRegionInfoRequest &request)const;
			void getNumberRegionInfoAsync(const Model::GetNumberRegionInfoRequest& request, const GetNumberRegionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNumberRegionInfoOutcomeCallable getNumberRegionInfoCallable(const Model::GetNumberRegionInfoRequest& request) const;
			GetPredictiveJobOutcome getPredictiveJob(const Model::GetPredictiveJobRequest &request)const;
			void getPredictiveJobAsync(const Model::GetPredictiveJobRequest& request, const GetPredictiveJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPredictiveJobOutcomeCallable getPredictiveJobCallable(const Model::GetPredictiveJobRequest& request) const;
			GetRecordOssUploadParamOutcome getRecordOssUploadParam(const Model::GetRecordOssUploadParamRequest &request)const;
			void getRecordOssUploadParamAsync(const Model::GetRecordOssUploadParamRequest& request, const GetRecordOssUploadParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRecordOssUploadParamOutcomeCallable getRecordOssUploadParamCallable(const Model::GetRecordOssUploadParamRequest& request) const;
			GetRoutePointOutcome getRoutePoint(const Model::GetRoutePointRequest &request)const;
			void getRoutePointAsync(const Model::GetRoutePointRequest& request, const GetRoutePointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRoutePointOutcomeCallable getRoutePointCallable(const Model::GetRoutePointRequest& request) const;
			GetScenarioOutcome getScenario(const Model::GetScenarioRequest &request)const;
			void getScenarioAsync(const Model::GetScenarioRequest& request, const GetScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScenarioOutcomeCallable getScenarioCallable(const Model::GetScenarioRequest& request) const;
			GetServiceExtensionsOutcome getServiceExtensions(const Model::GetServiceExtensionsRequest &request)const;
			void getServiceExtensionsAsync(const Model::GetServiceExtensionsRequest& request, const GetServiceExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceExtensionsOutcomeCallable getServiceExtensionsCallable(const Model::GetServiceExtensionsRequest& request) const;
			GetSmsConfigOutcome getSmsConfig(const Model::GetSmsConfigRequest &request)const;
			void getSmsConfigAsync(const Model::GetSmsConfigRequest& request, const GetSmsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmsConfigOutcomeCallable getSmsConfigCallable(const Model::GetSmsConfigRequest& request) const;
			GetSurveyOutcome getSurvey(const Model::GetSurveyRequest &request)const;
			void getSurveyAsync(const Model::GetSurveyRequest& request, const GetSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSurveyOutcomeCallable getSurveyCallable(const Model::GetSurveyRequest& request) const;
			GetTURNCredentialsOutcome getTURNCredentials(const Model::GetTURNCredentialsRequest &request)const;
			void getTURNCredentialsAsync(const Model::GetTURNCredentialsRequest& request, const GetTURNCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTURNCredentialsOutcomeCallable getTURNCredentialsCallable(const Model::GetTURNCredentialsRequest& request) const;
			GetTURNServerListOutcome getTURNServerList(const Model::GetTURNServerListRequest &request)const;
			void getTURNServerListAsync(const Model::GetTURNServerListRequest& request, const GetTURNServerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTURNServerListOutcomeCallable getTURNServerListCallable(const Model::GetTURNServerListRequest& request) const;
			GetTaskListOutcome getTaskList(const Model::GetTaskListRequest &request)const;
			void getTaskListAsync(const Model::GetTaskListRequest& request, const GetTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskListOutcomeCallable getTaskListCallable(const Model::GetTaskListRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			InflightTaskTimeoutOutcome inflightTaskTimeout(const Model::InflightTaskTimeoutRequest &request)const;
			void inflightTaskTimeoutAsync(const Model::InflightTaskTimeoutRequest& request, const InflightTaskTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InflightTaskTimeoutOutcomeCallable inflightTaskTimeoutCallable(const Model::InflightTaskTimeoutRequest& request) const;
			LaunchAppraiseOutcome launchAppraise(const Model::LaunchAppraiseRequest &request)const;
			void launchAppraiseAsync(const Model::LaunchAppraiseRequest& request, const LaunchAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LaunchAppraiseOutcomeCallable launchAppraiseCallable(const Model::LaunchAppraiseRequest& request) const;
			LaunchShortMessageAppraiseOutcome launchShortMessageAppraise(const Model::LaunchShortMessageAppraiseRequest &request)const;
			void launchShortMessageAppraiseAsync(const Model::LaunchShortMessageAppraiseRequest& request, const LaunchShortMessageAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LaunchShortMessageAppraiseOutcomeCallable launchShortMessageAppraiseCallable(const Model::LaunchShortMessageAppraiseRequest& request) const;
			ListAgentDevicesOutcome listAgentDevices(const Model::ListAgentDevicesRequest &request)const;
			void listAgentDevicesAsync(const Model::ListAgentDevicesRequest& request, const ListAgentDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentDevicesOutcomeCallable listAgentDevicesCallable(const Model::ListAgentDevicesRequest& request) const;
			ListAgentEventsOutcome listAgentEvents(const Model::ListAgentEventsRequest &request)const;
			void listAgentEventsAsync(const Model::ListAgentEventsRequest& request, const ListAgentEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentEventsOutcomeCallable listAgentEventsCallable(const Model::ListAgentEventsRequest& request) const;
			ListAgentStatesOutcome listAgentStates(const Model::ListAgentStatesRequest &request)const;
			void listAgentStatesAsync(const Model::ListAgentStatesRequest& request, const ListAgentStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentStatesOutcomeCallable listAgentStatesCallable(const Model::ListAgentStatesRequest& request) const;
			ListAgentSummaryReportsOutcome listAgentSummaryReports(const Model::ListAgentSummaryReportsRequest &request)const;
			void listAgentSummaryReportsAsync(const Model::ListAgentSummaryReportsRequest& request, const ListAgentSummaryReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentSummaryReportsOutcomeCallable listAgentSummaryReportsCallable(const Model::ListAgentSummaryReportsRequest& request) const;
			ListAgentSummaryReportsByIntervalOutcome listAgentSummaryReportsByInterval(const Model::ListAgentSummaryReportsByIntervalRequest &request)const;
			void listAgentSummaryReportsByIntervalAsync(const Model::ListAgentSummaryReportsByIntervalRequest& request, const ListAgentSummaryReportsByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentSummaryReportsByIntervalOutcomeCallable listAgentSummaryReportsByIntervalCallable(const Model::ListAgentSummaryReportsByIntervalRequest& request) const;
			ListAgentSummaryReportsSinceMidnightOutcome listAgentSummaryReportsSinceMidnight(const Model::ListAgentSummaryReportsSinceMidnightRequest &request)const;
			void listAgentSummaryReportsSinceMidnightAsync(const Model::ListAgentSummaryReportsSinceMidnightRequest& request, const ListAgentSummaryReportsSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentSummaryReportsSinceMidnightOutcomeCallable listAgentSummaryReportsSinceMidnightCallable(const Model::ListAgentSummaryReportsSinceMidnightRequest& request) const;
			ListBasicStatisticsReportSubItemsOutcome listBasicStatisticsReportSubItems(const Model::ListBasicStatisticsReportSubItemsRequest &request)const;
			void listBasicStatisticsReportSubItemsAsync(const Model::ListBasicStatisticsReportSubItemsRequest& request, const ListBasicStatisticsReportSubItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBasicStatisticsReportSubItemsOutcomeCallable listBasicStatisticsReportSubItemsCallable(const Model::ListBasicStatisticsReportSubItemsRequest& request) const;
			ListCallDetailRecordsOutcome listCallDetailRecords(const Model::ListCallDetailRecordsRequest &request)const;
			void listCallDetailRecordsAsync(const Model::ListCallDetailRecordsRequest& request, const ListCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallDetailRecordsOutcomeCallable listCallDetailRecordsCallable(const Model::ListCallDetailRecordsRequest& request) const;
			ListCallEventDetailByContactIdOutcome listCallEventDetailByContactId(const Model::ListCallEventDetailByContactIdRequest &request)const;
			void listCallEventDetailByContactIdAsync(const Model::ListCallEventDetailByContactIdRequest& request, const ListCallEventDetailByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallEventDetailByContactIdOutcomeCallable listCallEventDetailByContactIdCallable(const Model::ListCallEventDetailByContactIdRequest& request) const;
			ListCallMeasureSummaryReportsOutcome listCallMeasureSummaryReports(const Model::ListCallMeasureSummaryReportsRequest &request)const;
			void listCallMeasureSummaryReportsAsync(const Model::ListCallMeasureSummaryReportsRequest& request, const ListCallMeasureSummaryReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallMeasureSummaryReportsOutcomeCallable listCallMeasureSummaryReportsCallable(const Model::ListCallMeasureSummaryReportsRequest& request) const;
			ListConfigOutcome listConfig(const Model::ListConfigRequest &request)const;
			void listConfigAsync(const Model::ListConfigRequest& request, const ListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigOutcomeCallable listConfigCallable(const Model::ListConfigRequest& request) const;
			ListContactFlowsOutcome listContactFlows(const Model::ListContactFlowsRequest &request)const;
			void listContactFlowsAsync(const Model::ListContactFlowsRequest& request, const ListContactFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListContactFlowsOutcomeCallable listContactFlowsCallable(const Model::ListContactFlowsRequest& request) const;
			ListInstancesOfUserOutcome listInstancesOfUser(const Model::ListInstancesOfUserRequest &request)const;
			void listInstancesOfUserAsync(const Model::ListInstancesOfUserRequest& request, const ListInstancesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOfUserOutcomeCallable listInstancesOfUserCallable(const Model::ListInstancesOfUserRequest& request) const;
			ListIvrTrackingDetailOutcome listIvrTrackingDetail(const Model::ListIvrTrackingDetailRequest &request)const;
			void listIvrTrackingDetailAsync(const Model::ListIvrTrackingDetailRequest& request, const ListIvrTrackingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIvrTrackingDetailOutcomeCallable listIvrTrackingDetailCallable(const Model::ListIvrTrackingDetailRequest& request) const;
			ListJobGroupsOutcome listJobGroups(const Model::ListJobGroupsRequest &request)const;
			void listJobGroupsAsync(const Model::ListJobGroupsRequest& request, const ListJobGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobGroupsOutcomeCallable listJobGroupsCallable(const Model::ListJobGroupsRequest& request) const;
			ListJobStatusOutcome listJobStatus(const Model::ListJobStatusRequest &request)const;
			void listJobStatusAsync(const Model::ListJobStatusRequest& request, const ListJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobStatusOutcomeCallable listJobStatusCallable(const Model::ListJobStatusRequest& request) const;
			ListJobsByGroupOutcome listJobsByGroup(const Model::ListJobsByGroupRequest &request)const;
			void listJobsByGroupAsync(const Model::ListJobsByGroupRequest& request, const ListJobsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsByGroupOutcomeCallable listJobsByGroupCallable(const Model::ListJobsByGroupRequest& request) const;
			ListMediasOutcome listMedias(const Model::ListMediasRequest &request)const;
			void listMediasAsync(const Model::ListMediasRequest& request, const ListMediasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediasOutcomeCallable listMediasCallable(const Model::ListMediasRequest& request) const;
			ListOutboundPhoneNumberOfUserOutcome listOutboundPhoneNumberOfUser(const Model::ListOutboundPhoneNumberOfUserRequest &request)const;
			void listOutboundPhoneNumberOfUserAsync(const Model::ListOutboundPhoneNumberOfUserRequest& request, const ListOutboundPhoneNumberOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOutboundPhoneNumberOfUserOutcomeCallable listOutboundPhoneNumberOfUserCallable(const Model::ListOutboundPhoneNumberOfUserRequest& request) const;
			ListPhoneNumbersOutcome listPhoneNumbers(const Model::ListPhoneNumbersRequest &request)const;
			void listPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPhoneNumbersOutcomeCallable listPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;
			ListPhoneTagsOutcome listPhoneTags(const Model::ListPhoneTagsRequest &request)const;
			void listPhoneTagsAsync(const Model::ListPhoneTagsRequest& request, const ListPhoneTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPhoneTagsOutcomeCallable listPhoneTagsCallable(const Model::ListPhoneTagsRequest& request) const;
			ListPredictiveJobGroupsOutcome listPredictiveJobGroups(const Model::ListPredictiveJobGroupsRequest &request)const;
			void listPredictiveJobGroupsAsync(const Model::ListPredictiveJobGroupsRequest& request, const ListPredictiveJobGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPredictiveJobGroupsOutcomeCallable listPredictiveJobGroupsCallable(const Model::ListPredictiveJobGroupsRequest& request) const;
			ListPredictiveJobStatusOutcome listPredictiveJobStatus(const Model::ListPredictiveJobStatusRequest &request)const;
			void listPredictiveJobStatusAsync(const Model::ListPredictiveJobStatusRequest& request, const ListPredictiveJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPredictiveJobStatusOutcomeCallable listPredictiveJobStatusCallable(const Model::ListPredictiveJobStatusRequest& request) const;
			ListPrivacyNumberCallDetailsOutcome listPrivacyNumberCallDetails(const Model::ListPrivacyNumberCallDetailsRequest &request)const;
			void listPrivacyNumberCallDetailsAsync(const Model::ListPrivacyNumberCallDetailsRequest& request, const ListPrivacyNumberCallDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivacyNumberCallDetailsOutcomeCallable listPrivacyNumberCallDetailsCallable(const Model::ListPrivacyNumberCallDetailsRequest& request) const;
			ListPrivilegesOfUserOutcome listPrivilegesOfUser(const Model::ListPrivilegesOfUserRequest &request)const;
			void listPrivilegesOfUserAsync(const Model::ListPrivilegesOfUserRequest& request, const ListPrivilegesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivilegesOfUserOutcomeCallable listPrivilegesOfUserCallable(const Model::ListPrivilegesOfUserRequest& request) const;
			ListRealTimeAgentOutcome listRealTimeAgent(const Model::ListRealTimeAgentRequest &request)const;
			void listRealTimeAgentAsync(const Model::ListRealTimeAgentRequest& request, const ListRealTimeAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRealTimeAgentOutcomeCallable listRealTimeAgentCallable(const Model::ListRealTimeAgentRequest& request) const;
			ListRecentCallRecordsOutcome listRecentCallRecords(const Model::ListRecentCallRecordsRequest &request)const;
			void listRecentCallRecordsAsync(const Model::ListRecentCallRecordsRequest& request, const ListRecentCallRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecentCallRecordsOutcomeCallable listRecentCallRecordsCallable(const Model::ListRecentCallRecordsRequest& request) const;
			ListRecordingOfDualTrackOutcome listRecordingOfDualTrack(const Model::ListRecordingOfDualTrackRequest &request)const;
			void listRecordingOfDualTrackAsync(const Model::ListRecordingOfDualTrackRequest& request, const ListRecordingOfDualTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecordingOfDualTrackOutcomeCallable listRecordingOfDualTrackCallable(const Model::ListRecordingOfDualTrackRequest& request) const;
			ListRecordingsOutcome listRecordings(const Model::ListRecordingsRequest &request)const;
			void listRecordingsAsync(const Model::ListRecordingsRequest& request, const ListRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecordingsOutcomeCallable listRecordingsCallable(const Model::ListRecordingsRequest& request) const;
			ListRecordingsByContactIdOutcome listRecordingsByContactId(const Model::ListRecordingsByContactIdRequest &request)const;
			void listRecordingsByContactIdAsync(const Model::ListRecordingsByContactIdRequest& request, const ListRecordingsByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecordingsByContactIdOutcomeCallable listRecordingsByContactIdCallable(const Model::ListRecordingsByContactIdRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			ListScenarioTemplatesOutcome listScenarioTemplates(const Model::ListScenarioTemplatesRequest &request)const;
			void listScenarioTemplatesAsync(const Model::ListScenarioTemplatesRequest& request, const ListScenarioTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenarioTemplatesOutcomeCallable listScenarioTemplatesCallable(const Model::ListScenarioTemplatesRequest& request) const;
			ListScenariosOutcome listScenarios(const Model::ListScenariosRequest &request)const;
			void listScenariosAsync(const Model::ListScenariosRequest& request, const ListScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenariosOutcomeCallable listScenariosCallable(const Model::ListScenariosRequest& request) const;
			ListSkillGroupStatesOutcome listSkillGroupStates(const Model::ListSkillGroupStatesRequest &request)const;
			void listSkillGroupStatesAsync(const Model::ListSkillGroupStatesRequest& request, const ListSkillGroupStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupStatesOutcomeCallable listSkillGroupStatesCallable(const Model::ListSkillGroupStatesRequest& request) const;
			ListSkillGroupSummaryReportsOutcome listSkillGroupSummaryReports(const Model::ListSkillGroupSummaryReportsRequest &request)const;
			void listSkillGroupSummaryReportsAsync(const Model::ListSkillGroupSummaryReportsRequest& request, const ListSkillGroupSummaryReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupSummaryReportsOutcomeCallable listSkillGroupSummaryReportsCallable(const Model::ListSkillGroupSummaryReportsRequest& request) const;
			ListSkillGroupSummaryReportsByIntervalOutcome listSkillGroupSummaryReportsByInterval(const Model::ListSkillGroupSummaryReportsByIntervalRequest &request)const;
			void listSkillGroupSummaryReportsByIntervalAsync(const Model::ListSkillGroupSummaryReportsByIntervalRequest& request, const ListSkillGroupSummaryReportsByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupSummaryReportsByIntervalOutcomeCallable listSkillGroupSummaryReportsByIntervalCallable(const Model::ListSkillGroupSummaryReportsByIntervalRequest& request) const;
			ListSkillGroupSummaryReportsSinceMidnightOutcome listSkillGroupSummaryReportsSinceMidnight(const Model::ListSkillGroupSummaryReportsSinceMidnightRequest &request)const;
			void listSkillGroupSummaryReportsSinceMidnightAsync(const Model::ListSkillGroupSummaryReportsSinceMidnightRequest& request, const ListSkillGroupSummaryReportsSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupSummaryReportsSinceMidnightOutcomeCallable listSkillGroupSummaryReportsSinceMidnightCallable(const Model::ListSkillGroupSummaryReportsSinceMidnightRequest& request) const;
			ListSkillGroupsOutcome listSkillGroups(const Model::ListSkillGroupsRequest &request)const;
			void listSkillGroupsAsync(const Model::ListSkillGroupsRequest& request, const ListSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupsOutcomeCallable listSkillGroupsCallable(const Model::ListSkillGroupsRequest& request) const;
			ListSkillGroupsOfUserOutcome listSkillGroupsOfUser(const Model::ListSkillGroupsOfUserRequest &request)const;
			void listSkillGroupsOfUserAsync(const Model::ListSkillGroupsOfUserRequest& request, const ListSkillGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupsOfUserOutcomeCallable listSkillGroupsOfUserCallable(const Model::ListSkillGroupsOfUserRequest& request) const;
			ListSurveysOutcome listSurveys(const Model::ListSurveysRequest &request)const;
			void listSurveysAsync(const Model::ListSurveysRequest& request, const ListSurveysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSurveysOutcomeCallable listSurveysCallable(const Model::ListSurveysRequest& request) const;
			ListUnreachableContactsOutcome listUnreachableContacts(const Model::ListUnreachableContactsRequest &request)const;
			void listUnreachableContactsAsync(const Model::ListUnreachableContactsRequest& request, const ListUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUnreachableContactsOutcomeCallable listUnreachableContactsCallable(const Model::ListUnreachableContactsRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ListUsersOfSkillGroupOutcome listUsersOfSkillGroup(const Model::ListUsersOfSkillGroupRequest &request)const;
			void listUsersOfSkillGroupAsync(const Model::ListUsersOfSkillGroupRequest& request, const ListUsersOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOfSkillGroupOutcomeCallable listUsersOfSkillGroupCallable(const Model::ListUsersOfSkillGroupRequest& request) const;
			ListVoiceAppraiseOutcome listVoiceAppraise(const Model::ListVoiceAppraiseRequest &request)const;
			void listVoiceAppraiseAsync(const Model::ListVoiceAppraiseRequest& request, const ListVoiceAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVoiceAppraiseOutcomeCallable listVoiceAppraiseCallable(const Model::ListVoiceAppraiseRequest& request) const;
			ModifyAgentDeviceOutcome modifyAgentDevice(const Model::ModifyAgentDeviceRequest &request)const;
			void modifyAgentDeviceAsync(const Model::ModifyAgentDeviceRequest& request, const ModifyAgentDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAgentDeviceOutcomeCallable modifyAgentDeviceCallable(const Model::ModifyAgentDeviceRequest& request) const;
			ModifyCabInstanceOutcome modifyCabInstance(const Model::ModifyCabInstanceRequest &request)const;
			void modifyCabInstanceAsync(const Model::ModifyCabInstanceRequest& request, const ModifyCabInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCabInstanceOutcomeCallable modifyCabInstanceCallable(const Model::ModifyCabInstanceRequest& request) const;
			ModifyMediaOutcome modifyMedia(const Model::ModifyMediaRequest &request)const;
			void modifyMediaAsync(const Model::ModifyMediaRequest& request, const ModifyMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMediaOutcomeCallable modifyMediaCallable(const Model::ModifyMediaRequest& request) const;
			ModifyNotificationConfigOutcome modifyNotificationConfig(const Model::ModifyNotificationConfigRequest &request)const;
			void modifyNotificationConfigAsync(const Model::ModifyNotificationConfigRequest& request, const ModifyNotificationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNotificationConfigOutcomeCallable modifyNotificationConfigCallable(const Model::ModifyNotificationConfigRequest& request) const;
			ModifyPhoneNumberOutcome modifyPhoneNumber(const Model::ModifyPhoneNumberRequest &request)const;
			void modifyPhoneNumberAsync(const Model::ModifyPhoneNumberRequest& request, const ModifyPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPhoneNumberOutcomeCallable modifyPhoneNumberCallable(const Model::ModifyPhoneNumberRequest& request) const;
			ModifyPhoneTagsOutcome modifyPhoneTags(const Model::ModifyPhoneTagsRequest &request)const;
			void modifyPhoneTagsAsync(const Model::ModifyPhoneTagsRequest& request, const ModifyPhoneTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPhoneTagsOutcomeCallable modifyPhoneTagsCallable(const Model::ModifyPhoneTagsRequest& request) const;
			ModifyPrivacyNumberCallDetailOutcome modifyPrivacyNumberCallDetail(const Model::ModifyPrivacyNumberCallDetailRequest &request)const;
			void modifyPrivacyNumberCallDetailAsync(const Model::ModifyPrivacyNumberCallDetailRequest& request, const ModifyPrivacyNumberCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPrivacyNumberCallDetailOutcomeCallable modifyPrivacyNumberCallDetailCallable(const Model::ModifyPrivacyNumberCallDetailRequest& request) const;
			ModifyScenarioOutcome modifyScenario(const Model::ModifyScenarioRequest &request)const;
			void modifyScenarioAsync(const Model::ModifyScenarioRequest& request, const ModifyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScenarioOutcomeCallable modifyScenarioCallable(const Model::ModifyScenarioRequest& request) const;
			ModifySkillGroupOutcome modifySkillGroup(const Model::ModifySkillGroupRequest &request)const;
			void modifySkillGroupAsync(const Model::ModifySkillGroupRequest& request, const ModifySkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySkillGroupOutcomeCallable modifySkillGroupCallable(const Model::ModifySkillGroupRequest& request) const;
			ModifySkillGroupOfUserOutcome modifySkillGroupOfUser(const Model::ModifySkillGroupOfUserRequest &request)const;
			void modifySkillGroupOfUserAsync(const Model::ModifySkillGroupOfUserRequest& request, const ModifySkillGroupOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySkillGroupOfUserOutcomeCallable modifySkillGroupOfUserCallable(const Model::ModifySkillGroupOfUserRequest& request) const;
			ModifySkillGroupOutboundNumbersOutcome modifySkillGroupOutboundNumbers(const Model::ModifySkillGroupOutboundNumbersRequest &request)const;
			void modifySkillGroupOutboundNumbersAsync(const Model::ModifySkillGroupOutboundNumbersRequest& request, const ModifySkillGroupOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySkillGroupOutboundNumbersOutcomeCallable modifySkillGroupOutboundNumbersCallable(const Model::ModifySkillGroupOutboundNumbersRequest& request) const;
			ModifySurveyOutcome modifySurvey(const Model::ModifySurveyRequest &request)const;
			void modifySurveyAsync(const Model::ModifySurveyRequest& request, const ModifySurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySurveyOutcomeCallable modifySurveyCallable(const Model::ModifySurveyRequest& request) const;
			ModifyUserOutcome modifyUser(const Model::ModifyUserRequest &request)const;
			void modifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserOutcomeCallable modifyUserCallable(const Model::ModifyUserRequest& request) const;
			PickGlobalOutboundNumbersOutcome pickGlobalOutboundNumbers(const Model::PickGlobalOutboundNumbersRequest &request)const;
			void pickGlobalOutboundNumbersAsync(const Model::PickGlobalOutboundNumbersRequest& request, const PickGlobalOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PickGlobalOutboundNumbersOutcomeCallable pickGlobalOutboundNumbersCallable(const Model::PickGlobalOutboundNumbersRequest& request) const;
			PickLocalNumberOutcome pickLocalNumber(const Model::PickLocalNumberRequest &request)const;
			void pickLocalNumberAsync(const Model::PickLocalNumberRequest& request, const PickLocalNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PickLocalNumberOutcomeCallable pickLocalNumberCallable(const Model::PickLocalNumberRequest& request) const;
			PickOutboundNumbersOutcome pickOutboundNumbers(const Model::PickOutboundNumbersRequest &request)const;
			void pickOutboundNumbersAsync(const Model::PickOutboundNumbersRequest& request, const PickOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PickOutboundNumbersOutcomeCallable pickOutboundNumbersCallable(const Model::PickOutboundNumbersRequest& request) const;
			PickOutboundNumbersByTagsOutcome pickOutboundNumbersByTags(const Model::PickOutboundNumbersByTagsRequest &request)const;
			void pickOutboundNumbersByTagsAsync(const Model::PickOutboundNumbersByTagsRequest& request, const PickOutboundNumbersByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PickOutboundNumbersByTagsOutcomeCallable pickOutboundNumbersByTagsCallable(const Model::PickOutboundNumbersByTagsRequest& request) const;
			PreCreateMediaOutcome preCreateMedia(const Model::PreCreateMediaRequest &request)const;
			void preCreateMediaAsync(const Model::PreCreateMediaRequest& request, const PreCreateMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreCreateMediaOutcomeCallable preCreateMediaCallable(const Model::PreCreateMediaRequest& request) const;
			PreModifyMediaOutcome preModifyMedia(const Model::PreModifyMediaRequest &request)const;
			void preModifyMediaAsync(const Model::PreModifyMediaRequest& request, const PreModifyMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreModifyMediaOutcomeCallable preModifyMediaCallable(const Model::PreModifyMediaRequest& request) const;
			PredictiveRecordFailureOutcome predictiveRecordFailure(const Model::PredictiveRecordFailureRequest &request)const;
			void predictiveRecordFailureAsync(const Model::PredictiveRecordFailureRequest& request, const PredictiveRecordFailureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictiveRecordFailureOutcomeCallable predictiveRecordFailureCallable(const Model::PredictiveRecordFailureRequest& request) const;
			PredictiveRecordSuccessOutcome predictiveRecordSuccess(const Model::PredictiveRecordSuccessRequest &request)const;
			void predictiveRecordSuccessAsync(const Model::PredictiveRecordSuccessRequest& request, const PredictiveRecordSuccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictiveRecordSuccessOutcomeCallable predictiveRecordSuccessCallable(const Model::PredictiveRecordSuccessRequest& request) const;
			PublishContactFlowVersionOutcome publishContactFlowVersion(const Model::PublishContactFlowVersionRequest &request)const;
			void publishContactFlowVersionAsync(const Model::PublishContactFlowVersionRequest& request, const PublishContactFlowVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishContactFlowVersionOutcomeCallable publishContactFlowVersionCallable(const Model::PublishContactFlowVersionRequest& request) const;
			PublishPredictiveJobGroupOutcome publishPredictiveJobGroup(const Model::PublishPredictiveJobGroupRequest &request)const;
			void publishPredictiveJobGroupAsync(const Model::PublishPredictiveJobGroupRequest& request, const PublishPredictiveJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishPredictiveJobGroupOutcomeCallable publishPredictiveJobGroupCallable(const Model::PublishPredictiveJobGroupRequest& request) const;
			PublishSurveyOutcome publishSurvey(const Model::PublishSurveyRequest &request)const;
			void publishSurveyAsync(const Model::PublishSurveyRequest& request, const PublishSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishSurveyOutcomeCallable publishSurveyCallable(const Model::PublishSurveyRequest& request) const;
			QueryRedialIndicatorOutcome queryRedialIndicator(const Model::QueryRedialIndicatorRequest &request)const;
			void queryRedialIndicatorAsync(const Model::QueryRedialIndicatorRequest& request, const QueryRedialIndicatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRedialIndicatorOutcomeCallable queryRedialIndicatorCallable(const Model::QueryRedialIndicatorRequest& request) const;
			RefreshTokenOutcome refreshToken(const Model::RefreshTokenRequest &request)const;
			void refreshTokenAsync(const Model::RefreshTokenRequest& request, const RefreshTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshTokenOutcomeCallable refreshTokenCallable(const Model::RefreshTokenRequest& request) const;
			RemoveNumberFromSkillGroupOutcome removeNumberFromSkillGroup(const Model::RemoveNumberFromSkillGroupRequest &request)const;
			void removeNumberFromSkillGroupAsync(const Model::RemoveNumberFromSkillGroupRequest& request, const RemoveNumberFromSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveNumberFromSkillGroupOutcomeCallable removeNumberFromSkillGroupCallable(const Model::RemoveNumberFromSkillGroupRequest& request) const;
			RemovePhoneNumberOutcome removePhoneNumber(const Model::RemovePhoneNumberRequest &request)const;
			void removePhoneNumberAsync(const Model::RemovePhoneNumberRequest& request, const RemovePhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePhoneNumberOutcomeCallable removePhoneNumberCallable(const Model::RemovePhoneNumberRequest& request) const;
			RemoveUsersOutcome removeUsers(const Model::RemoveUsersRequest &request)const;
			void removeUsersAsync(const Model::RemoveUsersRequest& request, const RemoveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUsersOutcomeCallable removeUsersCallable(const Model::RemoveUsersRequest& request) const;
			RemoveUsersFromSkillGroupOutcome removeUsersFromSkillGroup(const Model::RemoveUsersFromSkillGroupRequest &request)const;
			void removeUsersFromSkillGroupAsync(const Model::RemoveUsersFromSkillGroupRequest& request, const RemoveUsersFromSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUsersFromSkillGroupOutcomeCallable removeUsersFromSkillGroupCallable(const Model::RemoveUsersFromSkillGroupRequest& request) const;
			RequestLoginInfoOutcome requestLoginInfo(const Model::RequestLoginInfoRequest &request)const;
			void requestLoginInfoAsync(const Model::RequestLoginInfoRequest& request, const RequestLoginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RequestLoginInfoOutcomeCallable requestLoginInfoCallable(const Model::RequestLoginInfoRequest& request) const;
			ResetUserStatusOutcome resetUserStatus(const Model::ResetUserStatusRequest &request)const;
			void resetUserStatusAsync(const Model::ResetUserStatusRequest& request, const ResetUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetUserStatusOutcomeCallable resetUserStatusCallable(const Model::ResetUserStatusRequest& request) const;
			ResumeJobsOutcome resumeJobs(const Model::ResumeJobsRequest &request)const;
			void resumeJobsAsync(const Model::ResumeJobsRequest& request, const ResumeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeJobsOutcomeCallable resumeJobsCallable(const Model::ResumeJobsRequest& request) const;
			SaveStatsOutcome saveStats(const Model::SaveStatsRequest &request)const;
			void saveStatsAsync(const Model::SaveStatsRequest& request, const SaveStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveStatsOutcomeCallable saveStatsCallable(const Model::SaveStatsRequest& request) const;
			SaveWebRTCStatsOutcome saveWebRTCStats(const Model::SaveWebRTCStatsRequest &request)const;
			void saveWebRTCStatsAsync(const Model::SaveWebRTCStatsRequest& request, const SaveWebRTCStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveWebRTCStatsOutcomeCallable saveWebRTCStatsCallable(const Model::SaveWebRTCStatsRequest& request) const;
			SendPredefinedShortMessageOutcome sendPredefinedShortMessage(const Model::SendPredefinedShortMessageRequest &request)const;
			void sendPredefinedShortMessageAsync(const Model::SendPredefinedShortMessageRequest& request, const SendPredefinedShortMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendPredefinedShortMessageOutcomeCallable sendPredefinedShortMessageCallable(const Model::SendPredefinedShortMessageRequest& request) const;
			SimpleDialOutcome simpleDial(const Model::SimpleDialRequest &request)const;
			void simpleDialAsync(const Model::SimpleDialRequest& request, const SimpleDialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SimpleDialOutcomeCallable simpleDialCallable(const Model::SimpleDialRequest& request) const;
			StartBack2BackCallOutcome startBack2BackCall(const Model::StartBack2BackCallRequest &request)const;
			void startBack2BackCallAsync(const Model::StartBack2BackCallRequest& request, const StartBack2BackCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBack2BackCallOutcomeCallable startBack2BackCallCallable(const Model::StartBack2BackCallRequest& request) const;
			StartJobOutcome startJob(const Model::StartJobRequest &request)const;
			void startJobAsync(const Model::StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartJobOutcomeCallable startJobCallable(const Model::StartJobRequest& request) const;
			SubmitBatchJobsOutcome submitBatchJobs(const Model::SubmitBatchJobsRequest &request)const;
			void submitBatchJobsAsync(const Model::SubmitBatchJobsRequest& request, const SubmitBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitBatchJobsOutcomeCallable submitBatchJobsCallable(const Model::SubmitBatchJobsRequest& request) const;
			SubmitCabRecordingOutcome submitCabRecording(const Model::SubmitCabRecordingRequest &request)const;
			void submitCabRecordingAsync(const Model::SubmitCabRecordingRequest& request, const SubmitCabRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCabRecordingOutcomeCallable submitCabRecordingCallable(const Model::SubmitCabRecordingRequest& request) const;
			SuspendJobsOutcome suspendJobs(const Model::SuspendJobsRequest &request)const;
			void suspendJobsAsync(const Model::SuspendJobsRequest& request, const SuspendJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendJobsOutcomeCallable suspendJobsCallable(const Model::SuspendJobsRequest& request) const;
			TaskPreparingOutcome taskPreparing(const Model::TaskPreparingRequest &request)const;
			void taskPreparingAsync(const Model::TaskPreparingRequest& request, const TaskPreparingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskPreparingOutcomeCallable taskPreparingCallable(const Model::TaskPreparingRequest& request) const;
			TwoPartiesCallOutcome twoPartiesCall(const Model::TwoPartiesCallRequest &request)const;
			void twoPartiesCallAsync(const Model::TwoPartiesCallRequest& request, const TwoPartiesCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TwoPartiesCallOutcomeCallable twoPartiesCallCallable(const Model::TwoPartiesCallRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CCC_CCCCLIENT_H_
