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
#include "model/AbortCampaignRequest.h"
#include "model/AbortCampaignResult.h"
#include "model/AddCasesRequest.h"
#include "model/AddCasesResult.h"
#include "model/AddNumbersToSkillGroupRequest.h"
#include "model/AddNumbersToSkillGroupResult.h"
#include "model/AddPersonalNumbersToUserRequest.h"
#include "model/AddPersonalNumbersToUserResult.h"
#include "model/AddPhoneNumberToSkillGroupsRequest.h"
#include "model/AddPhoneNumberToSkillGroupsResult.h"
#include "model/AddPhoneNumbersRequest.h"
#include "model/AddPhoneNumbersResult.h"
#include "model/AddSkillGroupsToUserRequest.h"
#include "model/AddSkillGroupsToUserResult.h"
#include "model/AddUsersToSkillGroupRequest.h"
#include "model/AddUsersToSkillGroupResult.h"
#include "model/AnswerCallRequest.h"
#include "model/AnswerCallResult.h"
#include "model/AppendCasesRequest.h"
#include "model/AppendCasesResult.h"
#include "model/AssignUsersRequest.h"
#include "model/AssignUsersResult.h"
#include "model/BargeInCallRequest.h"
#include "model/BargeInCallResult.h"
#include "model/BlindTransferRequest.h"
#include "model/BlindTransferResult.h"
#include "model/BridgeRtcCallRequest.h"
#include "model/BridgeRtcCallResult.h"
#include "model/CancelAttendedTransferRequest.h"
#include "model/CancelAttendedTransferResult.h"
#include "model/ChangeWorkModeRequest.h"
#include "model/ChangeWorkModeResult.h"
#include "model/CoachCallRequest.h"
#include "model/CoachCallResult.h"
#include "model/CommitContactFlowRequest.h"
#include "model/CommitContactFlowResult.h"
#include "model/CompleteAttendedTransferRequest.h"
#include "model/CompleteAttendedTransferResult.h"
#include "model/CreateAudioFileRequest.h"
#include "model/CreateAudioFileResult.h"
#include "model/CreateCallTagsRequest.h"
#include "model/CreateCallTagsResult.h"
#include "model/CreateCampaignRequest.h"
#include "model/CreateCampaignResult.h"
#include "model/CreateContactFlowRequest.h"
#include "model/CreateContactFlowResult.h"
#include "model/CreateCustomCallTaggingRequest.h"
#include "model/CreateCustomCallTaggingResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateSkillGroupRequest.h"
#include "model/CreateSkillGroupResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/DeleteAudioFileRequest.h"
#include "model/DeleteAudioFileResult.h"
#include "model/DeleteCallTagRequest.h"
#include "model/DeleteCallTagResult.h"
#include "model/DeleteContactFlowRequest.h"
#include "model/DeleteContactFlowResult.h"
#include "model/DeleteCustomCallTaggingRequest.h"
#include "model/DeleteCustomCallTaggingResult.h"
#include "model/DeleteSkillGroupRequest.h"
#include "model/DeleteSkillGroupResult.h"
#include "model/DiscardEditingContactFlowRequest.h"
#include "model/DiscardEditingContactFlowResult.h"
#include "model/EndConferenceRequest.h"
#include "model/EndConferenceResult.h"
#include "model/ExportCustomCallTaggingRequest.h"
#include "model/ExportCustomCallTaggingResult.h"
#include "model/ExportDoNotCallNumbersRequest.h"
#include "model/ExportDoNotCallNumbersResult.h"
#include "model/GetAudioFileRequest.h"
#include "model/GetAudioFileResult.h"
#include "model/GetAudioFileDownloadUrlRequest.h"
#include "model/GetAudioFileDownloadUrlResult.h"
#include "model/GetAudioFileUploadParametersRequest.h"
#include "model/GetAudioFileUploadParametersResult.h"
#include "model/GetCallDetailRecordRequest.h"
#include "model/GetCallDetailRecordResult.h"
#include "model/GetCampaignRequest.h"
#include "model/GetCampaignResult.h"
#include "model/GetCaseFileUploadUrlRequest.h"
#include "model/GetCaseFileUploadUrlResult.h"
#include "model/GetContactFlowRequest.h"
#include "model/GetContactFlowResult.h"
#include "model/GetConversationDetailRequest.h"
#include "model/GetConversationDetailResult.h"
#include "model/GetDataChannelCredentialsRequest.h"
#include "model/GetDataChannelCredentialsResult.h"
#include "model/GetDoNotCallFileUploadParametersRequest.h"
#include "model/GetDoNotCallFileUploadParametersResult.h"
#include "model/GetEarlyMediaRecordingRequest.h"
#include "model/GetEarlyMediaRecordingResult.h"
#include "model/GetHistoricalCallerReportRequest.h"
#include "model/GetHistoricalCallerReportResult.h"
#include "model/GetHistoricalCampaignReportRequest.h"
#include "model/GetHistoricalCampaignReportResult.h"
#include "model/GetHistoricalInstanceReportRequest.h"
#include "model/GetHistoricalInstanceReportResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetInstanceTrendingReportRequest.h"
#include "model/GetInstanceTrendingReportResult.h"
#include "model/GetLoginDetailsRequest.h"
#include "model/GetLoginDetailsResult.h"
#include "model/GetMonoRecordingRequest.h"
#include "model/GetMonoRecordingResult.h"
#include "model/GetMultiChannelRecordingRequest.h"
#include "model/GetMultiChannelRecordingResult.h"
#include "model/GetNumberLocationRequest.h"
#include "model/GetNumberLocationResult.h"
#include "model/GetRealtimeCampaignStatsRequest.h"
#include "model/GetRealtimeCampaignStatsResult.h"
#include "model/GetRealtimeInstanceStatesRequest.h"
#include "model/GetRealtimeInstanceStatesResult.h"
#include "model/GetSkillGroupRequest.h"
#include "model/GetSkillGroupResult.h"
#include "model/GetTurnCredentialsRequest.h"
#include "model/GetTurnCredentialsResult.h"
#include "model/GetTurnServerListRequest.h"
#include "model/GetTurnServerListResult.h"
#include "model/GetUploadAudioDataParamsRequest.h"
#include "model/GetUploadAudioDataParamsResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/GetVideoRequest.h"
#include "model/GetVideoResult.h"
#include "model/GetVoicemailRecordingRequest.h"
#include "model/GetVoicemailRecordingResult.h"
#include "model/HoldCallRequest.h"
#include "model/HoldCallResult.h"
#include "model/ImportAdminsRequest.h"
#include "model/ImportAdminsResult.h"
#include "model/ImportCustomCallTaggingRequest.h"
#include "model/ImportCustomCallTaggingResult.h"
#include "model/ImportDoNotCallNumbersRequest.h"
#include "model/ImportDoNotCallNumbersResult.h"
#include "model/InitiateAttendedTransferRequest.h"
#include "model/InitiateAttendedTransferResult.h"
#include "model/InterceptCallRequest.h"
#include "model/InterceptCallResult.h"
#include "model/LaunchAuthenticationRequest.h"
#include "model/LaunchAuthenticationResult.h"
#include "model/LaunchSurveyRequest.h"
#include "model/LaunchSurveyResult.h"
#include "model/ListAgentStateLogsRequest.h"
#include "model/ListAgentStateLogsResult.h"
#include "model/ListAgentStatesRequest.h"
#include "model/ListAgentStatesResult.h"
#include "model/ListAgentSummaryReportsSinceMidnightRequest.h"
#include "model/ListAgentSummaryReportsSinceMidnightResult.h"
#include "model/ListAttemptsRequest.h"
#include "model/ListAttemptsResult.h"
#include "model/ListAudioFilesRequest.h"
#include "model/ListAudioFilesResult.h"
#include "model/ListBriefSkillGroupsRequest.h"
#include "model/ListBriefSkillGroupsResult.h"
#include "model/ListCallDetailRecordsRequest.h"
#include "model/ListCallDetailRecordsResult.h"
#include "model/ListCallTagsRequest.h"
#include "model/ListCallTagsResult.h"
#include "model/ListCampaignTrendingReportRequest.h"
#include "model/ListCampaignTrendingReportResult.h"
#include "model/ListCampaignsRequest.h"
#include "model/ListCampaignsResult.h"
#include "model/ListCasesRequest.h"
#include "model/ListCasesResult.h"
#include "model/ListConfigItemsRequest.h"
#include "model/ListConfigItemsResult.h"
#include "model/ListContactFlowsRequest.h"
#include "model/ListContactFlowsResult.h"
#include "model/ListCustomCallTaggingRequest.h"
#include "model/ListCustomCallTaggingResult.h"
#include "model/ListDevicesRequest.h"
#include "model/ListDevicesResult.h"
#include "model/ListDoNotCallNumbersRequest.h"
#include "model/ListDoNotCallNumbersResult.h"
#include "model/ListHistoricalAgentReportRequest.h"
#include "model/ListHistoricalAgentReportResult.h"
#include "model/ListHistoricalSkillGroupReportRequest.h"
#include "model/ListHistoricalSkillGroupReportResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListInstancesOfUserRequest.h"
#include "model/ListInstancesOfUserResult.h"
#include "model/ListIntervalAgentReportRequest.h"
#include "model/ListIntervalAgentReportResult.h"
#include "model/ListIntervalInstanceReportRequest.h"
#include "model/ListIntervalInstanceReportResult.h"
#include "model/ListIntervalSkillGroupReportRequest.h"
#include "model/ListIntervalSkillGroupReportResult.h"
#include "model/ListIvrTrackingDetailsRequest.h"
#include "model/ListIvrTrackingDetailsResult.h"
#include "model/ListLegacyAgentEventLogsRequest.h"
#include "model/ListLegacyAgentEventLogsResult.h"
#include "model/ListLegacyAgentStatusLogsRequest.h"
#include "model/ListLegacyAgentStatusLogsResult.h"
#include "model/ListLegacyAppraiseLogsRequest.h"
#include "model/ListLegacyAppraiseLogsResult.h"
#include "model/ListLegacyQueueEventLogsRequest.h"
#include "model/ListLegacyQueueEventLogsResult.h"
#include "model/ListMonoRecordingsRequest.h"
#include "model/ListMonoRecordingsResult.h"
#include "model/ListMultiChannelRecordingsRequest.h"
#include "model/ListMultiChannelRecordingsResult.h"
#include "model/ListOutboundNumbersOfUserRequest.h"
#include "model/ListOutboundNumbersOfUserResult.h"
#include "model/ListPersonalNumbersOfUserRequest.h"
#include "model/ListPersonalNumbersOfUserResult.h"
#include "model/ListPhoneNumbersRequest.h"
#include "model/ListPhoneNumbersResult.h"
#include "model/ListPhoneNumbersOfSkillGroupRequest.h"
#include "model/ListPhoneNumbersOfSkillGroupResult.h"
#include "model/ListPrivilegesOfUserRequest.h"
#include "model/ListPrivilegesOfUserResult.h"
#include "model/ListRamUsersRequest.h"
#include "model/ListRamUsersResult.h"
#include "model/ListRealtimeAgentStatesRequest.h"
#include "model/ListRealtimeAgentStatesResult.h"
#include "model/ListRealtimeSkillGroupStatesRequest.h"
#include "model/ListRealtimeSkillGroupStatesResult.h"
#include "model/ListRecentCallDetailRecordsRequest.h"
#include "model/ListRecentCallDetailRecordsResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/ListSkillGroupStatesRequest.h"
#include "model/ListSkillGroupStatesResult.h"
#include "model/ListSkillGroupSummaryReportsSinceMidnightRequest.h"
#include "model/ListSkillGroupSummaryReportsSinceMidnightResult.h"
#include "model/ListSkillGroupsRequest.h"
#include "model/ListSkillGroupsResult.h"
#include "model/ListSkillLevelsOfUserRequest.h"
#include "model/ListSkillLevelsOfUserResult.h"
#include "model/ListUnassignedNumbersRequest.h"
#include "model/ListUnassignedNumbersResult.h"
#include "model/ListUserLevelsOfSkillGroupRequest.h"
#include "model/ListUserLevelsOfSkillGroupResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/MakeCallRequest.h"
#include "model/MakeCallResult.h"
#include "model/ModifyAudioFileRequest.h"
#include "model/ModifyAudioFileResult.h"
#include "model/ModifyCustomCallTaggingRequest.h"
#include "model/ModifyCustomCallTaggingResult.h"
#include "model/ModifyInstanceRequest.h"
#include "model/ModifyInstanceResult.h"
#include "model/ModifyPhoneNumberRequest.h"
#include "model/ModifyPhoneNumberResult.h"
#include "model/ModifySkillGroupRequest.h"
#include "model/ModifySkillGroupResult.h"
#include "model/ModifySkillLevelsOfUserRequest.h"
#include "model/ModifySkillLevelsOfUserResult.h"
#include "model/ModifyUserRequest.h"
#include "model/ModifyUserResult.h"
#include "model/ModifyUserLevelsOfSkillGroupRequest.h"
#include "model/ModifyUserLevelsOfSkillGroupResult.h"
#include "model/MonitorCallRequest.h"
#include "model/MonitorCallResult.h"
#include "model/MuteCallRequest.h"
#include "model/MuteCallResult.h"
#include "model/PauseCampaignRequest.h"
#include "model/PauseCampaignResult.h"
#include "model/PickOutboundNumbersRequest.h"
#include "model/PickOutboundNumbersResult.h"
#include "model/PollUserStatusRequest.h"
#include "model/PollUserStatusResult.h"
#include "model/PublishContactFlowRequest.h"
#include "model/PublishContactFlowResult.h"
#include "model/ReadyForServiceRequest.h"
#include "model/ReadyForServiceResult.h"
#include "model/RedialCallRequest.h"
#include "model/RedialCallResult.h"
#include "model/RegisterDeviceRequest.h"
#include "model/RegisterDeviceResult.h"
#include "model/RegisterDevicesRequest.h"
#include "model/RegisterDevicesResult.h"
#include "model/ReleaseCallRequest.h"
#include "model/ReleaseCallResult.h"
#include "model/RemoveDoNotCallNumbersRequest.h"
#include "model/RemoveDoNotCallNumbersResult.h"
#include "model/RemovePersonalNumbersFromUserRequest.h"
#include "model/RemovePersonalNumbersFromUserResult.h"
#include "model/RemovePhoneNumberFromSkillGroupsRequest.h"
#include "model/RemovePhoneNumberFromSkillGroupsResult.h"
#include "model/RemovePhoneNumbersRequest.h"
#include "model/RemovePhoneNumbersResult.h"
#include "model/RemovePhoneNumbersFromSkillGroupRequest.h"
#include "model/RemovePhoneNumbersFromSkillGroupResult.h"
#include "model/RemoveSkillGroupsFromUserRequest.h"
#include "model/RemoveSkillGroupsFromUserResult.h"
#include "model/RemoveUsersRequest.h"
#include "model/RemoveUsersResult.h"
#include "model/RemoveUsersFromSkillGroupRequest.h"
#include "model/RemoveUsersFromSkillGroupResult.h"
#include "model/ResetAgentStateRequest.h"
#include "model/ResetAgentStateResult.h"
#include "model/ResetUserPasswordRequest.h"
#include "model/ResetUserPasswordResult.h"
#include "model/RestoreArchivedRecordingsRequest.h"
#include "model/RestoreArchivedRecordingsResult.h"
#include "model/ResumeCampaignRequest.h"
#include "model/ResumeCampaignResult.h"
#include "model/RetrieveCallRequest.h"
#include "model/RetrieveCallResult.h"
#include "model/SaveRTCStatsV2Request.h"
#include "model/SaveRTCStatsV2Result.h"
#include "model/SaveTerminalLogRequest.h"
#include "model/SaveTerminalLogResult.h"
#include "model/SaveWebRTCStatsRequest.h"
#include "model/SaveWebRTCStatsResult.h"
#include "model/SaveWebRtcInfoRequest.h"
#include "model/SaveWebRtcInfoResult.h"
#include "model/SendDtmfSignalingRequest.h"
#include "model/SendDtmfSignalingResult.h"
#include "model/SignInGroupRequest.h"
#include "model/SignInGroupResult.h"
#include "model/SignOutGroupRequest.h"
#include "model/SignOutGroupResult.h"
#include "model/StartBack2BackCallRequest.h"
#include "model/StartBack2BackCallResult.h"
#include "model/StartConferenceRequest.h"
#include "model/StartConferenceResult.h"
#include "model/StartEditContactFlowRequest.h"
#include "model/StartEditContactFlowResult.h"
#include "model/StartPredictiveCallRequest.h"
#include "model/StartPredictiveCallResult.h"
#include "model/StartPrivacyCallRequest.h"
#include "model/StartPrivacyCallResult.h"
#include "model/SubmitCampaignRequest.h"
#include "model/SubmitCampaignResult.h"
#include "model/SwitchToConferenceRequest.h"
#include "model/SwitchToConferenceResult.h"
#include "model/TakeBreakRequest.h"
#include "model/TakeBreakResult.h"
#include "model/UnmuteCallRequest.h"
#include "model/UnmuteCallResult.h"
#include "model/UnregisterDeviceRequest.h"
#include "model/UnregisterDeviceResult.h"
#include "model/UpdateConfigItemsRequest.h"
#include "model/UpdateConfigItemsResult.h"


namespace AlibabaCloud
{
	namespace CCC
	{
		class ALIBABACLOUD_CCC_EXPORT CCCClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbortCampaignResult> AbortCampaignOutcome;
			typedef std::future<AbortCampaignOutcome> AbortCampaignOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AbortCampaignRequest&, const AbortCampaignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbortCampaignAsyncHandler;
			typedef Outcome<Error, Model::AddCasesResult> AddCasesOutcome;
			typedef std::future<AddCasesOutcome> AddCasesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddCasesRequest&, const AddCasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCasesAsyncHandler;
			typedef Outcome<Error, Model::AddNumbersToSkillGroupResult> AddNumbersToSkillGroupOutcome;
			typedef std::future<AddNumbersToSkillGroupOutcome> AddNumbersToSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddNumbersToSkillGroupRequest&, const AddNumbersToSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNumbersToSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::AddPersonalNumbersToUserResult> AddPersonalNumbersToUserOutcome;
			typedef std::future<AddPersonalNumbersToUserOutcome> AddPersonalNumbersToUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddPersonalNumbersToUserRequest&, const AddPersonalNumbersToUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPersonalNumbersToUserAsyncHandler;
			typedef Outcome<Error, Model::AddPhoneNumberToSkillGroupsResult> AddPhoneNumberToSkillGroupsOutcome;
			typedef std::future<AddPhoneNumberToSkillGroupsOutcome> AddPhoneNumberToSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddPhoneNumberToSkillGroupsRequest&, const AddPhoneNumberToSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPhoneNumberToSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::AddPhoneNumbersResult> AddPhoneNumbersOutcome;
			typedef std::future<AddPhoneNumbersOutcome> AddPhoneNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddPhoneNumbersRequest&, const AddPhoneNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPhoneNumbersAsyncHandler;
			typedef Outcome<Error, Model::AddSkillGroupsToUserResult> AddSkillGroupsToUserOutcome;
			typedef std::future<AddSkillGroupsToUserOutcome> AddSkillGroupsToUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddSkillGroupsToUserRequest&, const AddSkillGroupsToUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSkillGroupsToUserAsyncHandler;
			typedef Outcome<Error, Model::AddUsersToSkillGroupResult> AddUsersToSkillGroupOutcome;
			typedef std::future<AddUsersToSkillGroupOutcome> AddUsersToSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AddUsersToSkillGroupRequest&, const AddUsersToSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersToSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::AnswerCallResult> AnswerCallOutcome;
			typedef std::future<AnswerCallOutcome> AnswerCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AnswerCallRequest&, const AnswerCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AnswerCallAsyncHandler;
			typedef Outcome<Error, Model::AppendCasesResult> AppendCasesOutcome;
			typedef std::future<AppendCasesOutcome> AppendCasesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AppendCasesRequest&, const AppendCasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AppendCasesAsyncHandler;
			typedef Outcome<Error, Model::AssignUsersResult> AssignUsersOutcome;
			typedef std::future<AssignUsersOutcome> AssignUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AssignUsersRequest&, const AssignUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignUsersAsyncHandler;
			typedef Outcome<Error, Model::BargeInCallResult> BargeInCallOutcome;
			typedef std::future<BargeInCallOutcome> BargeInCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::BargeInCallRequest&, const BargeInCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BargeInCallAsyncHandler;
			typedef Outcome<Error, Model::BlindTransferResult> BlindTransferOutcome;
			typedef std::future<BlindTransferOutcome> BlindTransferOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::BlindTransferRequest&, const BlindTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BlindTransferAsyncHandler;
			typedef Outcome<Error, Model::BridgeRtcCallResult> BridgeRtcCallOutcome;
			typedef std::future<BridgeRtcCallOutcome> BridgeRtcCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::BridgeRtcCallRequest&, const BridgeRtcCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BridgeRtcCallAsyncHandler;
			typedef Outcome<Error, Model::CancelAttendedTransferResult> CancelAttendedTransferOutcome;
			typedef std::future<CancelAttendedTransferOutcome> CancelAttendedTransferOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CancelAttendedTransferRequest&, const CancelAttendedTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelAttendedTransferAsyncHandler;
			typedef Outcome<Error, Model::ChangeWorkModeResult> ChangeWorkModeOutcome;
			typedef std::future<ChangeWorkModeOutcome> ChangeWorkModeOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ChangeWorkModeRequest&, const ChangeWorkModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeWorkModeAsyncHandler;
			typedef Outcome<Error, Model::CoachCallResult> CoachCallOutcome;
			typedef std::future<CoachCallOutcome> CoachCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CoachCallRequest&, const CoachCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CoachCallAsyncHandler;
			typedef Outcome<Error, Model::CommitContactFlowResult> CommitContactFlowOutcome;
			typedef std::future<CommitContactFlowOutcome> CommitContactFlowOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CommitContactFlowRequest&, const CommitContactFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitContactFlowAsyncHandler;
			typedef Outcome<Error, Model::CompleteAttendedTransferResult> CompleteAttendedTransferOutcome;
			typedef std::future<CompleteAttendedTransferOutcome> CompleteAttendedTransferOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CompleteAttendedTransferRequest&, const CompleteAttendedTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompleteAttendedTransferAsyncHandler;
			typedef Outcome<Error, Model::CreateAudioFileResult> CreateAudioFileOutcome;
			typedef std::future<CreateAudioFileOutcome> CreateAudioFileOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateAudioFileRequest&, const CreateAudioFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAudioFileAsyncHandler;
			typedef Outcome<Error, Model::CreateCallTagsResult> CreateCallTagsOutcome;
			typedef std::future<CreateCallTagsOutcome> CreateCallTagsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateCallTagsRequest&, const CreateCallTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCallTagsAsyncHandler;
			typedef Outcome<Error, Model::CreateCampaignResult> CreateCampaignOutcome;
			typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateCampaignRequest&, const CreateCampaignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCampaignAsyncHandler;
			typedef Outcome<Error, Model::CreateContactFlowResult> CreateContactFlowOutcome;
			typedef std::future<CreateContactFlowOutcome> CreateContactFlowOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateContactFlowRequest&, const CreateContactFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateContactFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomCallTaggingResult> CreateCustomCallTaggingOutcome;
			typedef std::future<CreateCustomCallTaggingOutcome> CreateCustomCallTaggingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateCustomCallTaggingRequest&, const CreateCustomCallTaggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomCallTaggingAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateSkillGroupResult> CreateSkillGroupOutcome;
			typedef std::future<CreateSkillGroupOutcome> CreateSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateSkillGroupRequest&, const CreateSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteAudioFileResult> DeleteAudioFileOutcome;
			typedef std::future<DeleteAudioFileOutcome> DeleteAudioFileOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteAudioFileRequest&, const DeleteAudioFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAudioFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteCallTagResult> DeleteCallTagOutcome;
			typedef std::future<DeleteCallTagOutcome> DeleteCallTagOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteCallTagRequest&, const DeleteCallTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCallTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteContactFlowResult> DeleteContactFlowOutcome;
			typedef std::future<DeleteContactFlowOutcome> DeleteContactFlowOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteContactFlowRequest&, const DeleteContactFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContactFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomCallTaggingResult> DeleteCustomCallTaggingOutcome;
			typedef std::future<DeleteCustomCallTaggingOutcome> DeleteCustomCallTaggingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteCustomCallTaggingRequest&, const DeleteCustomCallTaggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomCallTaggingAsyncHandler;
			typedef Outcome<Error, Model::DeleteSkillGroupResult> DeleteSkillGroupOutcome;
			typedef std::future<DeleteSkillGroupOutcome> DeleteSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteSkillGroupRequest&, const DeleteSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::DiscardEditingContactFlowResult> DiscardEditingContactFlowOutcome;
			typedef std::future<DiscardEditingContactFlowOutcome> DiscardEditingContactFlowOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DiscardEditingContactFlowRequest&, const DiscardEditingContactFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DiscardEditingContactFlowAsyncHandler;
			typedef Outcome<Error, Model::EndConferenceResult> EndConferenceOutcome;
			typedef std::future<EndConferenceOutcome> EndConferenceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::EndConferenceRequest&, const EndConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EndConferenceAsyncHandler;
			typedef Outcome<Error, Model::ExportCustomCallTaggingResult> ExportCustomCallTaggingOutcome;
			typedef std::future<ExportCustomCallTaggingOutcome> ExportCustomCallTaggingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ExportCustomCallTaggingRequest&, const ExportCustomCallTaggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportCustomCallTaggingAsyncHandler;
			typedef Outcome<Error, Model::ExportDoNotCallNumbersResult> ExportDoNotCallNumbersOutcome;
			typedef std::future<ExportDoNotCallNumbersOutcome> ExportDoNotCallNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ExportDoNotCallNumbersRequest&, const ExportDoNotCallNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportDoNotCallNumbersAsyncHandler;
			typedef Outcome<Error, Model::GetAudioFileResult> GetAudioFileOutcome;
			typedef std::future<GetAudioFileOutcome> GetAudioFileOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetAudioFileRequest&, const GetAudioFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAudioFileAsyncHandler;
			typedef Outcome<Error, Model::GetAudioFileDownloadUrlResult> GetAudioFileDownloadUrlOutcome;
			typedef std::future<GetAudioFileDownloadUrlOutcome> GetAudioFileDownloadUrlOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetAudioFileDownloadUrlRequest&, const GetAudioFileDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAudioFileDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetAudioFileUploadParametersResult> GetAudioFileUploadParametersOutcome;
			typedef std::future<GetAudioFileUploadParametersOutcome> GetAudioFileUploadParametersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetAudioFileUploadParametersRequest&, const GetAudioFileUploadParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAudioFileUploadParametersAsyncHandler;
			typedef Outcome<Error, Model::GetCallDetailRecordResult> GetCallDetailRecordOutcome;
			typedef std::future<GetCallDetailRecordOutcome> GetCallDetailRecordOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetCallDetailRecordRequest&, const GetCallDetailRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCallDetailRecordAsyncHandler;
			typedef Outcome<Error, Model::GetCampaignResult> GetCampaignOutcome;
			typedef std::future<GetCampaignOutcome> GetCampaignOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetCampaignRequest&, const GetCampaignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCampaignAsyncHandler;
			typedef Outcome<Error, Model::GetCaseFileUploadUrlResult> GetCaseFileUploadUrlOutcome;
			typedef std::future<GetCaseFileUploadUrlOutcome> GetCaseFileUploadUrlOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetCaseFileUploadUrlRequest&, const GetCaseFileUploadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCaseFileUploadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetContactFlowResult> GetContactFlowOutcome;
			typedef std::future<GetContactFlowOutcome> GetContactFlowOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetContactFlowRequest&, const GetContactFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContactFlowAsyncHandler;
			typedef Outcome<Error, Model::GetConversationDetailResult> GetConversationDetailOutcome;
			typedef std::future<GetConversationDetailOutcome> GetConversationDetailOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetConversationDetailRequest&, const GetConversationDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConversationDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDataChannelCredentialsResult> GetDataChannelCredentialsOutcome;
			typedef std::future<GetDataChannelCredentialsOutcome> GetDataChannelCredentialsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetDataChannelCredentialsRequest&, const GetDataChannelCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataChannelCredentialsAsyncHandler;
			typedef Outcome<Error, Model::GetDoNotCallFileUploadParametersResult> GetDoNotCallFileUploadParametersOutcome;
			typedef std::future<GetDoNotCallFileUploadParametersOutcome> GetDoNotCallFileUploadParametersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetDoNotCallFileUploadParametersRequest&, const GetDoNotCallFileUploadParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDoNotCallFileUploadParametersAsyncHandler;
			typedef Outcome<Error, Model::GetEarlyMediaRecordingResult> GetEarlyMediaRecordingOutcome;
			typedef std::future<GetEarlyMediaRecordingOutcome> GetEarlyMediaRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetEarlyMediaRecordingRequest&, const GetEarlyMediaRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEarlyMediaRecordingAsyncHandler;
			typedef Outcome<Error, Model::GetHistoricalCallerReportResult> GetHistoricalCallerReportOutcome;
			typedef std::future<GetHistoricalCallerReportOutcome> GetHistoricalCallerReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetHistoricalCallerReportRequest&, const GetHistoricalCallerReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHistoricalCallerReportAsyncHandler;
			typedef Outcome<Error, Model::GetHistoricalCampaignReportResult> GetHistoricalCampaignReportOutcome;
			typedef std::future<GetHistoricalCampaignReportOutcome> GetHistoricalCampaignReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetHistoricalCampaignReportRequest&, const GetHistoricalCampaignReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHistoricalCampaignReportAsyncHandler;
			typedef Outcome<Error, Model::GetHistoricalInstanceReportResult> GetHistoricalInstanceReportOutcome;
			typedef std::future<GetHistoricalInstanceReportOutcome> GetHistoricalInstanceReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetHistoricalInstanceReportRequest&, const GetHistoricalInstanceReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHistoricalInstanceReportAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceTrendingReportResult> GetInstanceTrendingReportOutcome;
			typedef std::future<GetInstanceTrendingReportOutcome> GetInstanceTrendingReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetInstanceTrendingReportRequest&, const GetInstanceTrendingReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceTrendingReportAsyncHandler;
			typedef Outcome<Error, Model::GetLoginDetailsResult> GetLoginDetailsOutcome;
			typedef std::future<GetLoginDetailsOutcome> GetLoginDetailsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetLoginDetailsRequest&, const GetLoginDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoginDetailsAsyncHandler;
			typedef Outcome<Error, Model::GetMonoRecordingResult> GetMonoRecordingOutcome;
			typedef std::future<GetMonoRecordingOutcome> GetMonoRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetMonoRecordingRequest&, const GetMonoRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMonoRecordingAsyncHandler;
			typedef Outcome<Error, Model::GetMultiChannelRecordingResult> GetMultiChannelRecordingOutcome;
			typedef std::future<GetMultiChannelRecordingOutcome> GetMultiChannelRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetMultiChannelRecordingRequest&, const GetMultiChannelRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMultiChannelRecordingAsyncHandler;
			typedef Outcome<Error, Model::GetNumberLocationResult> GetNumberLocationOutcome;
			typedef std::future<GetNumberLocationOutcome> GetNumberLocationOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetNumberLocationRequest&, const GetNumberLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNumberLocationAsyncHandler;
			typedef Outcome<Error, Model::GetRealtimeCampaignStatsResult> GetRealtimeCampaignStatsOutcome;
			typedef std::future<GetRealtimeCampaignStatsOutcome> GetRealtimeCampaignStatsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetRealtimeCampaignStatsRequest&, const GetRealtimeCampaignStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRealtimeCampaignStatsAsyncHandler;
			typedef Outcome<Error, Model::GetRealtimeInstanceStatesResult> GetRealtimeInstanceStatesOutcome;
			typedef std::future<GetRealtimeInstanceStatesOutcome> GetRealtimeInstanceStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetRealtimeInstanceStatesRequest&, const GetRealtimeInstanceStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRealtimeInstanceStatesAsyncHandler;
			typedef Outcome<Error, Model::GetSkillGroupResult> GetSkillGroupOutcome;
			typedef std::future<GetSkillGroupOutcome> GetSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetSkillGroupRequest&, const GetSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::GetTurnCredentialsResult> GetTurnCredentialsOutcome;
			typedef std::future<GetTurnCredentialsOutcome> GetTurnCredentialsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTurnCredentialsRequest&, const GetTurnCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTurnCredentialsAsyncHandler;
			typedef Outcome<Error, Model::GetTurnServerListResult> GetTurnServerListOutcome;
			typedef std::future<GetTurnServerListOutcome> GetTurnServerListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTurnServerListRequest&, const GetTurnServerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTurnServerListAsyncHandler;
			typedef Outcome<Error, Model::GetUploadAudioDataParamsResult> GetUploadAudioDataParamsOutcome;
			typedef std::future<GetUploadAudioDataParamsOutcome> GetUploadAudioDataParamsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetUploadAudioDataParamsRequest&, const GetUploadAudioDataParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadAudioDataParamsAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::GetVideoResult> GetVideoOutcome;
			typedef std::future<GetVideoOutcome> GetVideoOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetVideoRequest&, const GetVideoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoAsyncHandler;
			typedef Outcome<Error, Model::GetVoicemailRecordingResult> GetVoicemailRecordingOutcome;
			typedef std::future<GetVoicemailRecordingOutcome> GetVoicemailRecordingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetVoicemailRecordingRequest&, const GetVoicemailRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVoicemailRecordingAsyncHandler;
			typedef Outcome<Error, Model::HoldCallResult> HoldCallOutcome;
			typedef std::future<HoldCallOutcome> HoldCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::HoldCallRequest&, const HoldCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HoldCallAsyncHandler;
			typedef Outcome<Error, Model::ImportAdminsResult> ImportAdminsOutcome;
			typedef std::future<ImportAdminsOutcome> ImportAdminsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ImportAdminsRequest&, const ImportAdminsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportAdminsAsyncHandler;
			typedef Outcome<Error, Model::ImportCustomCallTaggingResult> ImportCustomCallTaggingOutcome;
			typedef std::future<ImportCustomCallTaggingOutcome> ImportCustomCallTaggingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ImportCustomCallTaggingRequest&, const ImportCustomCallTaggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportCustomCallTaggingAsyncHandler;
			typedef Outcome<Error, Model::ImportDoNotCallNumbersResult> ImportDoNotCallNumbersOutcome;
			typedef std::future<ImportDoNotCallNumbersOutcome> ImportDoNotCallNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ImportDoNotCallNumbersRequest&, const ImportDoNotCallNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportDoNotCallNumbersAsyncHandler;
			typedef Outcome<Error, Model::InitiateAttendedTransferResult> InitiateAttendedTransferOutcome;
			typedef std::future<InitiateAttendedTransferOutcome> InitiateAttendedTransferOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::InitiateAttendedTransferRequest&, const InitiateAttendedTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitiateAttendedTransferAsyncHandler;
			typedef Outcome<Error, Model::InterceptCallResult> InterceptCallOutcome;
			typedef std::future<InterceptCallOutcome> InterceptCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::InterceptCallRequest&, const InterceptCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InterceptCallAsyncHandler;
			typedef Outcome<Error, Model::LaunchAuthenticationResult> LaunchAuthenticationOutcome;
			typedef std::future<LaunchAuthenticationOutcome> LaunchAuthenticationOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::LaunchAuthenticationRequest&, const LaunchAuthenticationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LaunchAuthenticationAsyncHandler;
			typedef Outcome<Error, Model::LaunchSurveyResult> LaunchSurveyOutcome;
			typedef std::future<LaunchSurveyOutcome> LaunchSurveyOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::LaunchSurveyRequest&, const LaunchSurveyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LaunchSurveyAsyncHandler;
			typedef Outcome<Error, Model::ListAgentStateLogsResult> ListAgentStateLogsOutcome;
			typedef std::future<ListAgentStateLogsOutcome> ListAgentStateLogsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentStateLogsRequest&, const ListAgentStateLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentStateLogsAsyncHandler;
			typedef Outcome<Error, Model::ListAgentStatesResult> ListAgentStatesOutcome;
			typedef std::future<ListAgentStatesOutcome> ListAgentStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentStatesRequest&, const ListAgentStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentStatesAsyncHandler;
			typedef Outcome<Error, Model::ListAgentSummaryReportsSinceMidnightResult> ListAgentSummaryReportsSinceMidnightOutcome;
			typedef std::future<ListAgentSummaryReportsSinceMidnightOutcome> ListAgentSummaryReportsSinceMidnightOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAgentSummaryReportsSinceMidnightRequest&, const ListAgentSummaryReportsSinceMidnightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentSummaryReportsSinceMidnightAsyncHandler;
			typedef Outcome<Error, Model::ListAttemptsResult> ListAttemptsOutcome;
			typedef std::future<ListAttemptsOutcome> ListAttemptsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAttemptsRequest&, const ListAttemptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAttemptsAsyncHandler;
			typedef Outcome<Error, Model::ListAudioFilesResult> ListAudioFilesOutcome;
			typedef std::future<ListAudioFilesOutcome> ListAudioFilesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListAudioFilesRequest&, const ListAudioFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAudioFilesAsyncHandler;
			typedef Outcome<Error, Model::ListBriefSkillGroupsResult> ListBriefSkillGroupsOutcome;
			typedef std::future<ListBriefSkillGroupsOutcome> ListBriefSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListBriefSkillGroupsRequest&, const ListBriefSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBriefSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListCallDetailRecordsResult> ListCallDetailRecordsOutcome;
			typedef std::future<ListCallDetailRecordsOutcome> ListCallDetailRecordsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCallDetailRecordsRequest&, const ListCallDetailRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallDetailRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListCallTagsResult> ListCallTagsOutcome;
			typedef std::future<ListCallTagsOutcome> ListCallTagsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCallTagsRequest&, const ListCallTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallTagsAsyncHandler;
			typedef Outcome<Error, Model::ListCampaignTrendingReportResult> ListCampaignTrendingReportOutcome;
			typedef std::future<ListCampaignTrendingReportOutcome> ListCampaignTrendingReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCampaignTrendingReportRequest&, const ListCampaignTrendingReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCampaignTrendingReportAsyncHandler;
			typedef Outcome<Error, Model::ListCampaignsResult> ListCampaignsOutcome;
			typedef std::future<ListCampaignsOutcome> ListCampaignsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCampaignsRequest&, const ListCampaignsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCampaignsAsyncHandler;
			typedef Outcome<Error, Model::ListCasesResult> ListCasesOutcome;
			typedef std::future<ListCasesOutcome> ListCasesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCasesRequest&, const ListCasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCasesAsyncHandler;
			typedef Outcome<Error, Model::ListConfigItemsResult> ListConfigItemsOutcome;
			typedef std::future<ListConfigItemsOutcome> ListConfigItemsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListConfigItemsRequest&, const ListConfigItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigItemsAsyncHandler;
			typedef Outcome<Error, Model::ListContactFlowsResult> ListContactFlowsOutcome;
			typedef std::future<ListContactFlowsOutcome> ListContactFlowsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListContactFlowsRequest&, const ListContactFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContactFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomCallTaggingResult> ListCustomCallTaggingOutcome;
			typedef std::future<ListCustomCallTaggingOutcome> ListCustomCallTaggingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCustomCallTaggingRequest&, const ListCustomCallTaggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomCallTaggingAsyncHandler;
			typedef Outcome<Error, Model::ListDevicesResult> ListDevicesOutcome;
			typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListDevicesRequest&, const ListDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicesAsyncHandler;
			typedef Outcome<Error, Model::ListDoNotCallNumbersResult> ListDoNotCallNumbersOutcome;
			typedef std::future<ListDoNotCallNumbersOutcome> ListDoNotCallNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListDoNotCallNumbersRequest&, const ListDoNotCallNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDoNotCallNumbersAsyncHandler;
			typedef Outcome<Error, Model::ListHistoricalAgentReportResult> ListHistoricalAgentReportOutcome;
			typedef std::future<ListHistoricalAgentReportOutcome> ListHistoricalAgentReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListHistoricalAgentReportRequest&, const ListHistoricalAgentReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHistoricalAgentReportAsyncHandler;
			typedef Outcome<Error, Model::ListHistoricalSkillGroupReportResult> ListHistoricalSkillGroupReportOutcome;
			typedef std::future<ListHistoricalSkillGroupReportOutcome> ListHistoricalSkillGroupReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListHistoricalSkillGroupReportRequest&, const ListHistoricalSkillGroupReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHistoricalSkillGroupReportAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesOfUserResult> ListInstancesOfUserOutcome;
			typedef std::future<ListInstancesOfUserOutcome> ListInstancesOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListInstancesOfUserRequest&, const ListInstancesOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListIntervalAgentReportResult> ListIntervalAgentReportOutcome;
			typedef std::future<ListIntervalAgentReportOutcome> ListIntervalAgentReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListIntervalAgentReportRequest&, const ListIntervalAgentReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIntervalAgentReportAsyncHandler;
			typedef Outcome<Error, Model::ListIntervalInstanceReportResult> ListIntervalInstanceReportOutcome;
			typedef std::future<ListIntervalInstanceReportOutcome> ListIntervalInstanceReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListIntervalInstanceReportRequest&, const ListIntervalInstanceReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIntervalInstanceReportAsyncHandler;
			typedef Outcome<Error, Model::ListIntervalSkillGroupReportResult> ListIntervalSkillGroupReportOutcome;
			typedef std::future<ListIntervalSkillGroupReportOutcome> ListIntervalSkillGroupReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListIntervalSkillGroupReportRequest&, const ListIntervalSkillGroupReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIntervalSkillGroupReportAsyncHandler;
			typedef Outcome<Error, Model::ListIvrTrackingDetailsResult> ListIvrTrackingDetailsOutcome;
			typedef std::future<ListIvrTrackingDetailsOutcome> ListIvrTrackingDetailsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListIvrTrackingDetailsRequest&, const ListIvrTrackingDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIvrTrackingDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListLegacyAgentEventLogsResult> ListLegacyAgentEventLogsOutcome;
			typedef std::future<ListLegacyAgentEventLogsOutcome> ListLegacyAgentEventLogsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListLegacyAgentEventLogsRequest&, const ListLegacyAgentEventLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLegacyAgentEventLogsAsyncHandler;
			typedef Outcome<Error, Model::ListLegacyAgentStatusLogsResult> ListLegacyAgentStatusLogsOutcome;
			typedef std::future<ListLegacyAgentStatusLogsOutcome> ListLegacyAgentStatusLogsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListLegacyAgentStatusLogsRequest&, const ListLegacyAgentStatusLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLegacyAgentStatusLogsAsyncHandler;
			typedef Outcome<Error, Model::ListLegacyAppraiseLogsResult> ListLegacyAppraiseLogsOutcome;
			typedef std::future<ListLegacyAppraiseLogsOutcome> ListLegacyAppraiseLogsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListLegacyAppraiseLogsRequest&, const ListLegacyAppraiseLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLegacyAppraiseLogsAsyncHandler;
			typedef Outcome<Error, Model::ListLegacyQueueEventLogsResult> ListLegacyQueueEventLogsOutcome;
			typedef std::future<ListLegacyQueueEventLogsOutcome> ListLegacyQueueEventLogsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListLegacyQueueEventLogsRequest&, const ListLegacyQueueEventLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLegacyQueueEventLogsAsyncHandler;
			typedef Outcome<Error, Model::ListMonoRecordingsResult> ListMonoRecordingsOutcome;
			typedef std::future<ListMonoRecordingsOutcome> ListMonoRecordingsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListMonoRecordingsRequest&, const ListMonoRecordingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMonoRecordingsAsyncHandler;
			typedef Outcome<Error, Model::ListMultiChannelRecordingsResult> ListMultiChannelRecordingsOutcome;
			typedef std::future<ListMultiChannelRecordingsOutcome> ListMultiChannelRecordingsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListMultiChannelRecordingsRequest&, const ListMultiChannelRecordingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiChannelRecordingsAsyncHandler;
			typedef Outcome<Error, Model::ListOutboundNumbersOfUserResult> ListOutboundNumbersOfUserOutcome;
			typedef std::future<ListOutboundNumbersOfUserOutcome> ListOutboundNumbersOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListOutboundNumbersOfUserRequest&, const ListOutboundNumbersOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOutboundNumbersOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListPersonalNumbersOfUserResult> ListPersonalNumbersOfUserOutcome;
			typedef std::future<ListPersonalNumbersOfUserOutcome> ListPersonalNumbersOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPersonalNumbersOfUserRequest&, const ListPersonalNumbersOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonalNumbersOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListPhoneNumbersResult> ListPhoneNumbersOutcome;
			typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPhoneNumbersRequest&, const ListPhoneNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPhoneNumbersAsyncHandler;
			typedef Outcome<Error, Model::ListPhoneNumbersOfSkillGroupResult> ListPhoneNumbersOfSkillGroupOutcome;
			typedef std::future<ListPhoneNumbersOfSkillGroupOutcome> ListPhoneNumbersOfSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPhoneNumbersOfSkillGroupRequest&, const ListPhoneNumbersOfSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPhoneNumbersOfSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ListPrivilegesOfUserResult> ListPrivilegesOfUserOutcome;
			typedef std::future<ListPrivilegesOfUserOutcome> ListPrivilegesOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPrivilegesOfUserRequest&, const ListPrivilegesOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivilegesOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListRamUsersResult> ListRamUsersOutcome;
			typedef std::future<ListRamUsersOutcome> ListRamUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRamUsersRequest&, const ListRamUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRamUsersAsyncHandler;
			typedef Outcome<Error, Model::ListRealtimeAgentStatesResult> ListRealtimeAgentStatesOutcome;
			typedef std::future<ListRealtimeAgentStatesOutcome> ListRealtimeAgentStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRealtimeAgentStatesRequest&, const ListRealtimeAgentStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRealtimeAgentStatesAsyncHandler;
			typedef Outcome<Error, Model::ListRealtimeSkillGroupStatesResult> ListRealtimeSkillGroupStatesOutcome;
			typedef std::future<ListRealtimeSkillGroupStatesOutcome> ListRealtimeSkillGroupStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRealtimeSkillGroupStatesRequest&, const ListRealtimeSkillGroupStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRealtimeSkillGroupStatesAsyncHandler;
			typedef Outcome<Error, Model::ListRecentCallDetailRecordsResult> ListRecentCallDetailRecordsOutcome;
			typedef std::future<ListRecentCallDetailRecordsOutcome> ListRecentCallDetailRecordsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRecentCallDetailRecordsRequest&, const ListRecentCallDetailRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecentCallDetailRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupStatesResult> ListSkillGroupStatesOutcome;
			typedef std::future<ListSkillGroupStatesOutcome> ListSkillGroupStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupStatesRequest&, const ListSkillGroupStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupStatesAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupSummaryReportsSinceMidnightResult> ListSkillGroupSummaryReportsSinceMidnightOutcome;
			typedef std::future<ListSkillGroupSummaryReportsSinceMidnightOutcome> ListSkillGroupSummaryReportsSinceMidnightOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupSummaryReportsSinceMidnightRequest&, const ListSkillGroupSummaryReportsSinceMidnightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupSummaryReportsSinceMidnightAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupsResult> ListSkillGroupsOutcome;
			typedef std::future<ListSkillGroupsOutcome> ListSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupsRequest&, const ListSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListSkillLevelsOfUserResult> ListSkillLevelsOfUserOutcome;
			typedef std::future<ListSkillLevelsOfUserOutcome> ListSkillLevelsOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillLevelsOfUserRequest&, const ListSkillLevelsOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillLevelsOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListUnassignedNumbersResult> ListUnassignedNumbersOutcome;
			typedef std::future<ListUnassignedNumbersOutcome> ListUnassignedNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUnassignedNumbersRequest&, const ListUnassignedNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUnassignedNumbersAsyncHandler;
			typedef Outcome<Error, Model::ListUserLevelsOfSkillGroupResult> ListUserLevelsOfSkillGroupOutcome;
			typedef std::future<ListUserLevelsOfSkillGroupOutcome> ListUserLevelsOfSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUserLevelsOfSkillGroupRequest&, const ListUserLevelsOfSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserLevelsOfSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::MakeCallResult> MakeCallOutcome;
			typedef std::future<MakeCallOutcome> MakeCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::MakeCallRequest&, const MakeCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MakeCallAsyncHandler;
			typedef Outcome<Error, Model::ModifyAudioFileResult> ModifyAudioFileOutcome;
			typedef std::future<ModifyAudioFileOutcome> ModifyAudioFileOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyAudioFileRequest&, const ModifyAudioFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAudioFileAsyncHandler;
			typedef Outcome<Error, Model::ModifyCustomCallTaggingResult> ModifyCustomCallTaggingOutcome;
			typedef std::future<ModifyCustomCallTaggingOutcome> ModifyCustomCallTaggingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyCustomCallTaggingRequest&, const ModifyCustomCallTaggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomCallTaggingAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceResult> ModifyInstanceOutcome;
			typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyInstanceRequest&, const ModifyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhoneNumberResult> ModifyPhoneNumberOutcome;
			typedef std::future<ModifyPhoneNumberOutcome> ModifyPhoneNumberOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyPhoneNumberRequest&, const ModifyPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ModifySkillGroupResult> ModifySkillGroupOutcome;
			typedef std::future<ModifySkillGroupOutcome> ModifySkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifySkillGroupRequest&, const ModifySkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifySkillLevelsOfUserResult> ModifySkillLevelsOfUserOutcome;
			typedef std::future<ModifySkillLevelsOfUserOutcome> ModifySkillLevelsOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifySkillLevelsOfUserRequest&, const ModifySkillLevelsOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillLevelsOfUserAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserResult> ModifyUserOutcome;
			typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyUserRequest&, const ModifyUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserLevelsOfSkillGroupResult> ModifyUserLevelsOfSkillGroupOutcome;
			typedef std::future<ModifyUserLevelsOfSkillGroupOutcome> ModifyUserLevelsOfSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ModifyUserLevelsOfSkillGroupRequest&, const ModifyUserLevelsOfSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserLevelsOfSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::MonitorCallResult> MonitorCallOutcome;
			typedef std::future<MonitorCallOutcome> MonitorCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::MonitorCallRequest&, const MonitorCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MonitorCallAsyncHandler;
			typedef Outcome<Error, Model::MuteCallResult> MuteCallOutcome;
			typedef std::future<MuteCallOutcome> MuteCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::MuteCallRequest&, const MuteCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteCallAsyncHandler;
			typedef Outcome<Error, Model::PauseCampaignResult> PauseCampaignOutcome;
			typedef std::future<PauseCampaignOutcome> PauseCampaignOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PauseCampaignRequest&, const PauseCampaignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseCampaignAsyncHandler;
			typedef Outcome<Error, Model::PickOutboundNumbersResult> PickOutboundNumbersOutcome;
			typedef std::future<PickOutboundNumbersOutcome> PickOutboundNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PickOutboundNumbersRequest&, const PickOutboundNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PickOutboundNumbersAsyncHandler;
			typedef Outcome<Error, Model::PollUserStatusResult> PollUserStatusOutcome;
			typedef std::future<PollUserStatusOutcome> PollUserStatusOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PollUserStatusRequest&, const PollUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PollUserStatusAsyncHandler;
			typedef Outcome<Error, Model::PublishContactFlowResult> PublishContactFlowOutcome;
			typedef std::future<PublishContactFlowOutcome> PublishContactFlowOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PublishContactFlowRequest&, const PublishContactFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishContactFlowAsyncHandler;
			typedef Outcome<Error, Model::ReadyForServiceResult> ReadyForServiceOutcome;
			typedef std::future<ReadyForServiceOutcome> ReadyForServiceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ReadyForServiceRequest&, const ReadyForServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReadyForServiceAsyncHandler;
			typedef Outcome<Error, Model::RedialCallResult> RedialCallOutcome;
			typedef std::future<RedialCallOutcome> RedialCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RedialCallRequest&, const RedialCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RedialCallAsyncHandler;
			typedef Outcome<Error, Model::RegisterDeviceResult> RegisterDeviceOutcome;
			typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RegisterDeviceRequest&, const RegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::RegisterDevicesResult> RegisterDevicesOutcome;
			typedef std::future<RegisterDevicesOutcome> RegisterDevicesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RegisterDevicesRequest&, const RegisterDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDevicesAsyncHandler;
			typedef Outcome<Error, Model::ReleaseCallResult> ReleaseCallOutcome;
			typedef std::future<ReleaseCallOutcome> ReleaseCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ReleaseCallRequest&, const ReleaseCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseCallAsyncHandler;
			typedef Outcome<Error, Model::RemoveDoNotCallNumbersResult> RemoveDoNotCallNumbersOutcome;
			typedef std::future<RemoveDoNotCallNumbersOutcome> RemoveDoNotCallNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemoveDoNotCallNumbersRequest&, const RemoveDoNotCallNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDoNotCallNumbersAsyncHandler;
			typedef Outcome<Error, Model::RemovePersonalNumbersFromUserResult> RemovePersonalNumbersFromUserOutcome;
			typedef std::future<RemovePersonalNumbersFromUserOutcome> RemovePersonalNumbersFromUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemovePersonalNumbersFromUserRequest&, const RemovePersonalNumbersFromUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePersonalNumbersFromUserAsyncHandler;
			typedef Outcome<Error, Model::RemovePhoneNumberFromSkillGroupsResult> RemovePhoneNumberFromSkillGroupsOutcome;
			typedef std::future<RemovePhoneNumberFromSkillGroupsOutcome> RemovePhoneNumberFromSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemovePhoneNumberFromSkillGroupsRequest&, const RemovePhoneNumberFromSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePhoneNumberFromSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::RemovePhoneNumbersResult> RemovePhoneNumbersOutcome;
			typedef std::future<RemovePhoneNumbersOutcome> RemovePhoneNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemovePhoneNumbersRequest&, const RemovePhoneNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePhoneNumbersAsyncHandler;
			typedef Outcome<Error, Model::RemovePhoneNumbersFromSkillGroupResult> RemovePhoneNumbersFromSkillGroupOutcome;
			typedef std::future<RemovePhoneNumbersFromSkillGroupOutcome> RemovePhoneNumbersFromSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemovePhoneNumbersFromSkillGroupRequest&, const RemovePhoneNumbersFromSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePhoneNumbersFromSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveSkillGroupsFromUserResult> RemoveSkillGroupsFromUserOutcome;
			typedef std::future<RemoveSkillGroupsFromUserOutcome> RemoveSkillGroupsFromUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemoveSkillGroupsFromUserRequest&, const RemoveSkillGroupsFromUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSkillGroupsFromUserAsyncHandler;
			typedef Outcome<Error, Model::RemoveUsersResult> RemoveUsersOutcome;
			typedef std::future<RemoveUsersOutcome> RemoveUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemoveUsersRequest&, const RemoveUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUsersAsyncHandler;
			typedef Outcome<Error, Model::RemoveUsersFromSkillGroupResult> RemoveUsersFromSkillGroupOutcome;
			typedef std::future<RemoveUsersFromSkillGroupOutcome> RemoveUsersFromSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RemoveUsersFromSkillGroupRequest&, const RemoveUsersFromSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUsersFromSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ResetAgentStateResult> ResetAgentStateOutcome;
			typedef std::future<ResetAgentStateOutcome> ResetAgentStateOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ResetAgentStateRequest&, const ResetAgentStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAgentStateAsyncHandler;
			typedef Outcome<Error, Model::ResetUserPasswordResult> ResetUserPasswordOutcome;
			typedef std::future<ResetUserPasswordOutcome> ResetUserPasswordOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ResetUserPasswordRequest&, const ResetUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestoreArchivedRecordingsResult> RestoreArchivedRecordingsOutcome;
			typedef std::future<RestoreArchivedRecordingsOutcome> RestoreArchivedRecordingsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RestoreArchivedRecordingsRequest&, const RestoreArchivedRecordingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreArchivedRecordingsAsyncHandler;
			typedef Outcome<Error, Model::ResumeCampaignResult> ResumeCampaignOutcome;
			typedef std::future<ResumeCampaignOutcome> ResumeCampaignOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ResumeCampaignRequest&, const ResumeCampaignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeCampaignAsyncHandler;
			typedef Outcome<Error, Model::RetrieveCallResult> RetrieveCallOutcome;
			typedef std::future<RetrieveCallOutcome> RetrieveCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RetrieveCallRequest&, const RetrieveCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetrieveCallAsyncHandler;
			typedef Outcome<Error, Model::SaveRTCStatsV2Result> SaveRTCStatsV2Outcome;
			typedef std::future<SaveRTCStatsV2Outcome> SaveRTCStatsV2OutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SaveRTCStatsV2Request&, const SaveRTCStatsV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveRTCStatsV2AsyncHandler;
			typedef Outcome<Error, Model::SaveTerminalLogResult> SaveTerminalLogOutcome;
			typedef std::future<SaveTerminalLogOutcome> SaveTerminalLogOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SaveTerminalLogRequest&, const SaveTerminalLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTerminalLogAsyncHandler;
			typedef Outcome<Error, Model::SaveWebRTCStatsResult> SaveWebRTCStatsOutcome;
			typedef std::future<SaveWebRTCStatsOutcome> SaveWebRTCStatsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SaveWebRTCStatsRequest&, const SaveWebRTCStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveWebRTCStatsAsyncHandler;
			typedef Outcome<Error, Model::SaveWebRtcInfoResult> SaveWebRtcInfoOutcome;
			typedef std::future<SaveWebRtcInfoOutcome> SaveWebRtcInfoOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SaveWebRtcInfoRequest&, const SaveWebRtcInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveWebRtcInfoAsyncHandler;
			typedef Outcome<Error, Model::SendDtmfSignalingResult> SendDtmfSignalingOutcome;
			typedef std::future<SendDtmfSignalingOutcome> SendDtmfSignalingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SendDtmfSignalingRequest&, const SendDtmfSignalingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendDtmfSignalingAsyncHandler;
			typedef Outcome<Error, Model::SignInGroupResult> SignInGroupOutcome;
			typedef std::future<SignInGroupOutcome> SignInGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SignInGroupRequest&, const SignInGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignInGroupAsyncHandler;
			typedef Outcome<Error, Model::SignOutGroupResult> SignOutGroupOutcome;
			typedef std::future<SignOutGroupOutcome> SignOutGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SignOutGroupRequest&, const SignOutGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignOutGroupAsyncHandler;
			typedef Outcome<Error, Model::StartBack2BackCallResult> StartBack2BackCallOutcome;
			typedef std::future<StartBack2BackCallOutcome> StartBack2BackCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartBack2BackCallRequest&, const StartBack2BackCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBack2BackCallAsyncHandler;
			typedef Outcome<Error, Model::StartConferenceResult> StartConferenceOutcome;
			typedef std::future<StartConferenceOutcome> StartConferenceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartConferenceRequest&, const StartConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartConferenceAsyncHandler;
			typedef Outcome<Error, Model::StartEditContactFlowResult> StartEditContactFlowOutcome;
			typedef std::future<StartEditContactFlowOutcome> StartEditContactFlowOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartEditContactFlowRequest&, const StartEditContactFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartEditContactFlowAsyncHandler;
			typedef Outcome<Error, Model::StartPredictiveCallResult> StartPredictiveCallOutcome;
			typedef std::future<StartPredictiveCallOutcome> StartPredictiveCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartPredictiveCallRequest&, const StartPredictiveCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartPredictiveCallAsyncHandler;
			typedef Outcome<Error, Model::StartPrivacyCallResult> StartPrivacyCallOutcome;
			typedef std::future<StartPrivacyCallOutcome> StartPrivacyCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::StartPrivacyCallRequest&, const StartPrivacyCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartPrivacyCallAsyncHandler;
			typedef Outcome<Error, Model::SubmitCampaignResult> SubmitCampaignOutcome;
			typedef std::future<SubmitCampaignOutcome> SubmitCampaignOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SubmitCampaignRequest&, const SubmitCampaignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCampaignAsyncHandler;
			typedef Outcome<Error, Model::SwitchToConferenceResult> SwitchToConferenceOutcome;
			typedef std::future<SwitchToConferenceOutcome> SwitchToConferenceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SwitchToConferenceRequest&, const SwitchToConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchToConferenceAsyncHandler;
			typedef Outcome<Error, Model::TakeBreakResult> TakeBreakOutcome;
			typedef std::future<TakeBreakOutcome> TakeBreakOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::TakeBreakRequest&, const TakeBreakOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TakeBreakAsyncHandler;
			typedef Outcome<Error, Model::UnmuteCallResult> UnmuteCallOutcome;
			typedef std::future<UnmuteCallOutcome> UnmuteCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::UnmuteCallRequest&, const UnmuteCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnmuteCallAsyncHandler;
			typedef Outcome<Error, Model::UnregisterDeviceResult> UnregisterDeviceOutcome;
			typedef std::future<UnregisterDeviceOutcome> UnregisterDeviceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::UnregisterDeviceRequest&, const UnregisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnregisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::UpdateConfigItemsResult> UpdateConfigItemsOutcome;
			typedef std::future<UpdateConfigItemsOutcome> UpdateConfigItemsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::UpdateConfigItemsRequest&, const UpdateConfigItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigItemsAsyncHandler;

			CCCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CCCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CCCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CCCClient();
			AbortCampaignOutcome abortCampaign(const Model::AbortCampaignRequest &request)const;
			void abortCampaignAsync(const Model::AbortCampaignRequest& request, const AbortCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbortCampaignOutcomeCallable abortCampaignCallable(const Model::AbortCampaignRequest& request) const;
			AddCasesOutcome addCases(const Model::AddCasesRequest &request)const;
			void addCasesAsync(const Model::AddCasesRequest& request, const AddCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCasesOutcomeCallable addCasesCallable(const Model::AddCasesRequest& request) const;
			AddNumbersToSkillGroupOutcome addNumbersToSkillGroup(const Model::AddNumbersToSkillGroupRequest &request)const;
			void addNumbersToSkillGroupAsync(const Model::AddNumbersToSkillGroupRequest& request, const AddNumbersToSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNumbersToSkillGroupOutcomeCallable addNumbersToSkillGroupCallable(const Model::AddNumbersToSkillGroupRequest& request) const;
			AddPersonalNumbersToUserOutcome addPersonalNumbersToUser(const Model::AddPersonalNumbersToUserRequest &request)const;
			void addPersonalNumbersToUserAsync(const Model::AddPersonalNumbersToUserRequest& request, const AddPersonalNumbersToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPersonalNumbersToUserOutcomeCallable addPersonalNumbersToUserCallable(const Model::AddPersonalNumbersToUserRequest& request) const;
			AddPhoneNumberToSkillGroupsOutcome addPhoneNumberToSkillGroups(const Model::AddPhoneNumberToSkillGroupsRequest &request)const;
			void addPhoneNumberToSkillGroupsAsync(const Model::AddPhoneNumberToSkillGroupsRequest& request, const AddPhoneNumberToSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPhoneNumberToSkillGroupsOutcomeCallable addPhoneNumberToSkillGroupsCallable(const Model::AddPhoneNumberToSkillGroupsRequest& request) const;
			AddPhoneNumbersOutcome addPhoneNumbers(const Model::AddPhoneNumbersRequest &request)const;
			void addPhoneNumbersAsync(const Model::AddPhoneNumbersRequest& request, const AddPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPhoneNumbersOutcomeCallable addPhoneNumbersCallable(const Model::AddPhoneNumbersRequest& request) const;
			AddSkillGroupsToUserOutcome addSkillGroupsToUser(const Model::AddSkillGroupsToUserRequest &request)const;
			void addSkillGroupsToUserAsync(const Model::AddSkillGroupsToUserRequest& request, const AddSkillGroupsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSkillGroupsToUserOutcomeCallable addSkillGroupsToUserCallable(const Model::AddSkillGroupsToUserRequest& request) const;
			AddUsersToSkillGroupOutcome addUsersToSkillGroup(const Model::AddUsersToSkillGroupRequest &request)const;
			void addUsersToSkillGroupAsync(const Model::AddUsersToSkillGroupRequest& request, const AddUsersToSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUsersToSkillGroupOutcomeCallable addUsersToSkillGroupCallable(const Model::AddUsersToSkillGroupRequest& request) const;
			AnswerCallOutcome answerCall(const Model::AnswerCallRequest &request)const;
			void answerCallAsync(const Model::AnswerCallRequest& request, const AnswerCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AnswerCallOutcomeCallable answerCallCallable(const Model::AnswerCallRequest& request) const;
			AppendCasesOutcome appendCases(const Model::AppendCasesRequest &request)const;
			void appendCasesAsync(const Model::AppendCasesRequest& request, const AppendCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AppendCasesOutcomeCallable appendCasesCallable(const Model::AppendCasesRequest& request) const;
			AssignUsersOutcome assignUsers(const Model::AssignUsersRequest &request)const;
			void assignUsersAsync(const Model::AssignUsersRequest& request, const AssignUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignUsersOutcomeCallable assignUsersCallable(const Model::AssignUsersRequest& request) const;
			BargeInCallOutcome bargeInCall(const Model::BargeInCallRequest &request)const;
			void bargeInCallAsync(const Model::BargeInCallRequest& request, const BargeInCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BargeInCallOutcomeCallable bargeInCallCallable(const Model::BargeInCallRequest& request) const;
			BlindTransferOutcome blindTransfer(const Model::BlindTransferRequest &request)const;
			void blindTransferAsync(const Model::BlindTransferRequest& request, const BlindTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BlindTransferOutcomeCallable blindTransferCallable(const Model::BlindTransferRequest& request) const;
			BridgeRtcCallOutcome bridgeRtcCall(const Model::BridgeRtcCallRequest &request)const;
			void bridgeRtcCallAsync(const Model::BridgeRtcCallRequest& request, const BridgeRtcCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BridgeRtcCallOutcomeCallable bridgeRtcCallCallable(const Model::BridgeRtcCallRequest& request) const;
			CancelAttendedTransferOutcome cancelAttendedTransfer(const Model::CancelAttendedTransferRequest &request)const;
			void cancelAttendedTransferAsync(const Model::CancelAttendedTransferRequest& request, const CancelAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelAttendedTransferOutcomeCallable cancelAttendedTransferCallable(const Model::CancelAttendedTransferRequest& request) const;
			ChangeWorkModeOutcome changeWorkMode(const Model::ChangeWorkModeRequest &request)const;
			void changeWorkModeAsync(const Model::ChangeWorkModeRequest& request, const ChangeWorkModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeWorkModeOutcomeCallable changeWorkModeCallable(const Model::ChangeWorkModeRequest& request) const;
			CoachCallOutcome coachCall(const Model::CoachCallRequest &request)const;
			void coachCallAsync(const Model::CoachCallRequest& request, const CoachCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CoachCallOutcomeCallable coachCallCallable(const Model::CoachCallRequest& request) const;
			CommitContactFlowOutcome commitContactFlow(const Model::CommitContactFlowRequest &request)const;
			void commitContactFlowAsync(const Model::CommitContactFlowRequest& request, const CommitContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitContactFlowOutcomeCallable commitContactFlowCallable(const Model::CommitContactFlowRequest& request) const;
			CompleteAttendedTransferOutcome completeAttendedTransfer(const Model::CompleteAttendedTransferRequest &request)const;
			void completeAttendedTransferAsync(const Model::CompleteAttendedTransferRequest& request, const CompleteAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompleteAttendedTransferOutcomeCallable completeAttendedTransferCallable(const Model::CompleteAttendedTransferRequest& request) const;
			CreateAudioFileOutcome createAudioFile(const Model::CreateAudioFileRequest &request)const;
			void createAudioFileAsync(const Model::CreateAudioFileRequest& request, const CreateAudioFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAudioFileOutcomeCallable createAudioFileCallable(const Model::CreateAudioFileRequest& request) const;
			CreateCallTagsOutcome createCallTags(const Model::CreateCallTagsRequest &request)const;
			void createCallTagsAsync(const Model::CreateCallTagsRequest& request, const CreateCallTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCallTagsOutcomeCallable createCallTagsCallable(const Model::CreateCallTagsRequest& request) const;
			CreateCampaignOutcome createCampaign(const Model::CreateCampaignRequest &request)const;
			void createCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCampaignOutcomeCallable createCampaignCallable(const Model::CreateCampaignRequest& request) const;
			CreateContactFlowOutcome createContactFlow(const Model::CreateContactFlowRequest &request)const;
			void createContactFlowAsync(const Model::CreateContactFlowRequest& request, const CreateContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateContactFlowOutcomeCallable createContactFlowCallable(const Model::CreateContactFlowRequest& request) const;
			CreateCustomCallTaggingOutcome createCustomCallTagging(const Model::CreateCustomCallTaggingRequest &request)const;
			void createCustomCallTaggingAsync(const Model::CreateCustomCallTaggingRequest& request, const CreateCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomCallTaggingOutcomeCallable createCustomCallTaggingCallable(const Model::CreateCustomCallTaggingRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateSkillGroupOutcome createSkillGroup(const Model::CreateSkillGroupRequest &request)const;
			void createSkillGroupAsync(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSkillGroupOutcomeCallable createSkillGroupCallable(const Model::CreateSkillGroupRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			DeleteAudioFileOutcome deleteAudioFile(const Model::DeleteAudioFileRequest &request)const;
			void deleteAudioFileAsync(const Model::DeleteAudioFileRequest& request, const DeleteAudioFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAudioFileOutcomeCallable deleteAudioFileCallable(const Model::DeleteAudioFileRequest& request) const;
			DeleteCallTagOutcome deleteCallTag(const Model::DeleteCallTagRequest &request)const;
			void deleteCallTagAsync(const Model::DeleteCallTagRequest& request, const DeleteCallTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCallTagOutcomeCallable deleteCallTagCallable(const Model::DeleteCallTagRequest& request) const;
			DeleteContactFlowOutcome deleteContactFlow(const Model::DeleteContactFlowRequest &request)const;
			void deleteContactFlowAsync(const Model::DeleteContactFlowRequest& request, const DeleteContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContactFlowOutcomeCallable deleteContactFlowCallable(const Model::DeleteContactFlowRequest& request) const;
			DeleteCustomCallTaggingOutcome deleteCustomCallTagging(const Model::DeleteCustomCallTaggingRequest &request)const;
			void deleteCustomCallTaggingAsync(const Model::DeleteCustomCallTaggingRequest& request, const DeleteCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomCallTaggingOutcomeCallable deleteCustomCallTaggingCallable(const Model::DeleteCustomCallTaggingRequest& request) const;
			DeleteSkillGroupOutcome deleteSkillGroup(const Model::DeleteSkillGroupRequest &request)const;
			void deleteSkillGroupAsync(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSkillGroupOutcomeCallable deleteSkillGroupCallable(const Model::DeleteSkillGroupRequest& request) const;
			DiscardEditingContactFlowOutcome discardEditingContactFlow(const Model::DiscardEditingContactFlowRequest &request)const;
			void discardEditingContactFlowAsync(const Model::DiscardEditingContactFlowRequest& request, const DiscardEditingContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DiscardEditingContactFlowOutcomeCallable discardEditingContactFlowCallable(const Model::DiscardEditingContactFlowRequest& request) const;
			EndConferenceOutcome endConference(const Model::EndConferenceRequest &request)const;
			void endConferenceAsync(const Model::EndConferenceRequest& request, const EndConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EndConferenceOutcomeCallable endConferenceCallable(const Model::EndConferenceRequest& request) const;
			ExportCustomCallTaggingOutcome exportCustomCallTagging(const Model::ExportCustomCallTaggingRequest &request)const;
			void exportCustomCallTaggingAsync(const Model::ExportCustomCallTaggingRequest& request, const ExportCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportCustomCallTaggingOutcomeCallable exportCustomCallTaggingCallable(const Model::ExportCustomCallTaggingRequest& request) const;
			ExportDoNotCallNumbersOutcome exportDoNotCallNumbers(const Model::ExportDoNotCallNumbersRequest &request)const;
			void exportDoNotCallNumbersAsync(const Model::ExportDoNotCallNumbersRequest& request, const ExportDoNotCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportDoNotCallNumbersOutcomeCallable exportDoNotCallNumbersCallable(const Model::ExportDoNotCallNumbersRequest& request) const;
			GetAudioFileOutcome getAudioFile(const Model::GetAudioFileRequest &request)const;
			void getAudioFileAsync(const Model::GetAudioFileRequest& request, const GetAudioFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAudioFileOutcomeCallable getAudioFileCallable(const Model::GetAudioFileRequest& request) const;
			GetAudioFileDownloadUrlOutcome getAudioFileDownloadUrl(const Model::GetAudioFileDownloadUrlRequest &request)const;
			void getAudioFileDownloadUrlAsync(const Model::GetAudioFileDownloadUrlRequest& request, const GetAudioFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAudioFileDownloadUrlOutcomeCallable getAudioFileDownloadUrlCallable(const Model::GetAudioFileDownloadUrlRequest& request) const;
			GetAudioFileUploadParametersOutcome getAudioFileUploadParameters(const Model::GetAudioFileUploadParametersRequest &request)const;
			void getAudioFileUploadParametersAsync(const Model::GetAudioFileUploadParametersRequest& request, const GetAudioFileUploadParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAudioFileUploadParametersOutcomeCallable getAudioFileUploadParametersCallable(const Model::GetAudioFileUploadParametersRequest& request) const;
			GetCallDetailRecordOutcome getCallDetailRecord(const Model::GetCallDetailRecordRequest &request)const;
			void getCallDetailRecordAsync(const Model::GetCallDetailRecordRequest& request, const GetCallDetailRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCallDetailRecordOutcomeCallable getCallDetailRecordCallable(const Model::GetCallDetailRecordRequest& request) const;
			GetCampaignOutcome getCampaign(const Model::GetCampaignRequest &request)const;
			void getCampaignAsync(const Model::GetCampaignRequest& request, const GetCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCampaignOutcomeCallable getCampaignCallable(const Model::GetCampaignRequest& request) const;
			GetCaseFileUploadUrlOutcome getCaseFileUploadUrl(const Model::GetCaseFileUploadUrlRequest &request)const;
			void getCaseFileUploadUrlAsync(const Model::GetCaseFileUploadUrlRequest& request, const GetCaseFileUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCaseFileUploadUrlOutcomeCallable getCaseFileUploadUrlCallable(const Model::GetCaseFileUploadUrlRequest& request) const;
			GetContactFlowOutcome getContactFlow(const Model::GetContactFlowRequest &request)const;
			void getContactFlowAsync(const Model::GetContactFlowRequest& request, const GetContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContactFlowOutcomeCallable getContactFlowCallable(const Model::GetContactFlowRequest& request) const;
			GetConversationDetailOutcome getConversationDetail(const Model::GetConversationDetailRequest &request)const;
			void getConversationDetailAsync(const Model::GetConversationDetailRequest& request, const GetConversationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConversationDetailOutcomeCallable getConversationDetailCallable(const Model::GetConversationDetailRequest& request) const;
			GetDataChannelCredentialsOutcome getDataChannelCredentials(const Model::GetDataChannelCredentialsRequest &request)const;
			void getDataChannelCredentialsAsync(const Model::GetDataChannelCredentialsRequest& request, const GetDataChannelCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataChannelCredentialsOutcomeCallable getDataChannelCredentialsCallable(const Model::GetDataChannelCredentialsRequest& request) const;
			GetDoNotCallFileUploadParametersOutcome getDoNotCallFileUploadParameters(const Model::GetDoNotCallFileUploadParametersRequest &request)const;
			void getDoNotCallFileUploadParametersAsync(const Model::GetDoNotCallFileUploadParametersRequest& request, const GetDoNotCallFileUploadParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDoNotCallFileUploadParametersOutcomeCallable getDoNotCallFileUploadParametersCallable(const Model::GetDoNotCallFileUploadParametersRequest& request) const;
			GetEarlyMediaRecordingOutcome getEarlyMediaRecording(const Model::GetEarlyMediaRecordingRequest &request)const;
			void getEarlyMediaRecordingAsync(const Model::GetEarlyMediaRecordingRequest& request, const GetEarlyMediaRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEarlyMediaRecordingOutcomeCallable getEarlyMediaRecordingCallable(const Model::GetEarlyMediaRecordingRequest& request) const;
			GetHistoricalCallerReportOutcome getHistoricalCallerReport(const Model::GetHistoricalCallerReportRequest &request)const;
			void getHistoricalCallerReportAsync(const Model::GetHistoricalCallerReportRequest& request, const GetHistoricalCallerReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHistoricalCallerReportOutcomeCallable getHistoricalCallerReportCallable(const Model::GetHistoricalCallerReportRequest& request) const;
			GetHistoricalCampaignReportOutcome getHistoricalCampaignReport(const Model::GetHistoricalCampaignReportRequest &request)const;
			void getHistoricalCampaignReportAsync(const Model::GetHistoricalCampaignReportRequest& request, const GetHistoricalCampaignReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHistoricalCampaignReportOutcomeCallable getHistoricalCampaignReportCallable(const Model::GetHistoricalCampaignReportRequest& request) const;
			GetHistoricalInstanceReportOutcome getHistoricalInstanceReport(const Model::GetHistoricalInstanceReportRequest &request)const;
			void getHistoricalInstanceReportAsync(const Model::GetHistoricalInstanceReportRequest& request, const GetHistoricalInstanceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHistoricalInstanceReportOutcomeCallable getHistoricalInstanceReportCallable(const Model::GetHistoricalInstanceReportRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetInstanceTrendingReportOutcome getInstanceTrendingReport(const Model::GetInstanceTrendingReportRequest &request)const;
			void getInstanceTrendingReportAsync(const Model::GetInstanceTrendingReportRequest& request, const GetInstanceTrendingReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceTrendingReportOutcomeCallable getInstanceTrendingReportCallable(const Model::GetInstanceTrendingReportRequest& request) const;
			GetLoginDetailsOutcome getLoginDetails(const Model::GetLoginDetailsRequest &request)const;
			void getLoginDetailsAsync(const Model::GetLoginDetailsRequest& request, const GetLoginDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoginDetailsOutcomeCallable getLoginDetailsCallable(const Model::GetLoginDetailsRequest& request) const;
			GetMonoRecordingOutcome getMonoRecording(const Model::GetMonoRecordingRequest &request)const;
			void getMonoRecordingAsync(const Model::GetMonoRecordingRequest& request, const GetMonoRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMonoRecordingOutcomeCallable getMonoRecordingCallable(const Model::GetMonoRecordingRequest& request) const;
			GetMultiChannelRecordingOutcome getMultiChannelRecording(const Model::GetMultiChannelRecordingRequest &request)const;
			void getMultiChannelRecordingAsync(const Model::GetMultiChannelRecordingRequest& request, const GetMultiChannelRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMultiChannelRecordingOutcomeCallable getMultiChannelRecordingCallable(const Model::GetMultiChannelRecordingRequest& request) const;
			GetNumberLocationOutcome getNumberLocation(const Model::GetNumberLocationRequest &request)const;
			void getNumberLocationAsync(const Model::GetNumberLocationRequest& request, const GetNumberLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNumberLocationOutcomeCallable getNumberLocationCallable(const Model::GetNumberLocationRequest& request) const;
			GetRealtimeCampaignStatsOutcome getRealtimeCampaignStats(const Model::GetRealtimeCampaignStatsRequest &request)const;
			void getRealtimeCampaignStatsAsync(const Model::GetRealtimeCampaignStatsRequest& request, const GetRealtimeCampaignStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRealtimeCampaignStatsOutcomeCallable getRealtimeCampaignStatsCallable(const Model::GetRealtimeCampaignStatsRequest& request) const;
			GetRealtimeInstanceStatesOutcome getRealtimeInstanceStates(const Model::GetRealtimeInstanceStatesRequest &request)const;
			void getRealtimeInstanceStatesAsync(const Model::GetRealtimeInstanceStatesRequest& request, const GetRealtimeInstanceStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRealtimeInstanceStatesOutcomeCallable getRealtimeInstanceStatesCallable(const Model::GetRealtimeInstanceStatesRequest& request) const;
			GetSkillGroupOutcome getSkillGroup(const Model::GetSkillGroupRequest &request)const;
			void getSkillGroupAsync(const Model::GetSkillGroupRequest& request, const GetSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSkillGroupOutcomeCallable getSkillGroupCallable(const Model::GetSkillGroupRequest& request) const;
			GetTurnCredentialsOutcome getTurnCredentials(const Model::GetTurnCredentialsRequest &request)const;
			void getTurnCredentialsAsync(const Model::GetTurnCredentialsRequest& request, const GetTurnCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTurnCredentialsOutcomeCallable getTurnCredentialsCallable(const Model::GetTurnCredentialsRequest& request) const;
			GetTurnServerListOutcome getTurnServerList(const Model::GetTurnServerListRequest &request)const;
			void getTurnServerListAsync(const Model::GetTurnServerListRequest& request, const GetTurnServerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTurnServerListOutcomeCallable getTurnServerListCallable(const Model::GetTurnServerListRequest& request) const;
			GetUploadAudioDataParamsOutcome getUploadAudioDataParams(const Model::GetUploadAudioDataParamsRequest &request)const;
			void getUploadAudioDataParamsAsync(const Model::GetUploadAudioDataParamsRequest& request, const GetUploadAudioDataParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUploadAudioDataParamsOutcomeCallable getUploadAudioDataParamsCallable(const Model::GetUploadAudioDataParamsRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			GetVideoOutcome getVideo(const Model::GetVideoRequest &request)const;
			void getVideoAsync(const Model::GetVideoRequest& request, const GetVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoOutcomeCallable getVideoCallable(const Model::GetVideoRequest& request) const;
			GetVoicemailRecordingOutcome getVoicemailRecording(const Model::GetVoicemailRecordingRequest &request)const;
			void getVoicemailRecordingAsync(const Model::GetVoicemailRecordingRequest& request, const GetVoicemailRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVoicemailRecordingOutcomeCallable getVoicemailRecordingCallable(const Model::GetVoicemailRecordingRequest& request) const;
			HoldCallOutcome holdCall(const Model::HoldCallRequest &request)const;
			void holdCallAsync(const Model::HoldCallRequest& request, const HoldCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HoldCallOutcomeCallable holdCallCallable(const Model::HoldCallRequest& request) const;
			ImportAdminsOutcome importAdmins(const Model::ImportAdminsRequest &request)const;
			void importAdminsAsync(const Model::ImportAdminsRequest& request, const ImportAdminsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportAdminsOutcomeCallable importAdminsCallable(const Model::ImportAdminsRequest& request) const;
			ImportCustomCallTaggingOutcome importCustomCallTagging(const Model::ImportCustomCallTaggingRequest &request)const;
			void importCustomCallTaggingAsync(const Model::ImportCustomCallTaggingRequest& request, const ImportCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportCustomCallTaggingOutcomeCallable importCustomCallTaggingCallable(const Model::ImportCustomCallTaggingRequest& request) const;
			ImportDoNotCallNumbersOutcome importDoNotCallNumbers(const Model::ImportDoNotCallNumbersRequest &request)const;
			void importDoNotCallNumbersAsync(const Model::ImportDoNotCallNumbersRequest& request, const ImportDoNotCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportDoNotCallNumbersOutcomeCallable importDoNotCallNumbersCallable(const Model::ImportDoNotCallNumbersRequest& request) const;
			InitiateAttendedTransferOutcome initiateAttendedTransfer(const Model::InitiateAttendedTransferRequest &request)const;
			void initiateAttendedTransferAsync(const Model::InitiateAttendedTransferRequest& request, const InitiateAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitiateAttendedTransferOutcomeCallable initiateAttendedTransferCallable(const Model::InitiateAttendedTransferRequest& request) const;
			InterceptCallOutcome interceptCall(const Model::InterceptCallRequest &request)const;
			void interceptCallAsync(const Model::InterceptCallRequest& request, const InterceptCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InterceptCallOutcomeCallable interceptCallCallable(const Model::InterceptCallRequest& request) const;
			LaunchAuthenticationOutcome launchAuthentication(const Model::LaunchAuthenticationRequest &request)const;
			void launchAuthenticationAsync(const Model::LaunchAuthenticationRequest& request, const LaunchAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LaunchAuthenticationOutcomeCallable launchAuthenticationCallable(const Model::LaunchAuthenticationRequest& request) const;
			LaunchSurveyOutcome launchSurvey(const Model::LaunchSurveyRequest &request)const;
			void launchSurveyAsync(const Model::LaunchSurveyRequest& request, const LaunchSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LaunchSurveyOutcomeCallable launchSurveyCallable(const Model::LaunchSurveyRequest& request) const;
			ListAgentStateLogsOutcome listAgentStateLogs(const Model::ListAgentStateLogsRequest &request)const;
			void listAgentStateLogsAsync(const Model::ListAgentStateLogsRequest& request, const ListAgentStateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentStateLogsOutcomeCallable listAgentStateLogsCallable(const Model::ListAgentStateLogsRequest& request) const;
			ListAgentStatesOutcome listAgentStates(const Model::ListAgentStatesRequest &request)const;
			void listAgentStatesAsync(const Model::ListAgentStatesRequest& request, const ListAgentStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentStatesOutcomeCallable listAgentStatesCallable(const Model::ListAgentStatesRequest& request) const;
			ListAgentSummaryReportsSinceMidnightOutcome listAgentSummaryReportsSinceMidnight(const Model::ListAgentSummaryReportsSinceMidnightRequest &request)const;
			void listAgentSummaryReportsSinceMidnightAsync(const Model::ListAgentSummaryReportsSinceMidnightRequest& request, const ListAgentSummaryReportsSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentSummaryReportsSinceMidnightOutcomeCallable listAgentSummaryReportsSinceMidnightCallable(const Model::ListAgentSummaryReportsSinceMidnightRequest& request) const;
			ListAttemptsOutcome listAttempts(const Model::ListAttemptsRequest &request)const;
			void listAttemptsAsync(const Model::ListAttemptsRequest& request, const ListAttemptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAttemptsOutcomeCallable listAttemptsCallable(const Model::ListAttemptsRequest& request) const;
			ListAudioFilesOutcome listAudioFiles(const Model::ListAudioFilesRequest &request)const;
			void listAudioFilesAsync(const Model::ListAudioFilesRequest& request, const ListAudioFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAudioFilesOutcomeCallable listAudioFilesCallable(const Model::ListAudioFilesRequest& request) const;
			ListBriefSkillGroupsOutcome listBriefSkillGroups(const Model::ListBriefSkillGroupsRequest &request)const;
			void listBriefSkillGroupsAsync(const Model::ListBriefSkillGroupsRequest& request, const ListBriefSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBriefSkillGroupsOutcomeCallable listBriefSkillGroupsCallable(const Model::ListBriefSkillGroupsRequest& request) const;
			ListCallDetailRecordsOutcome listCallDetailRecords(const Model::ListCallDetailRecordsRequest &request)const;
			void listCallDetailRecordsAsync(const Model::ListCallDetailRecordsRequest& request, const ListCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallDetailRecordsOutcomeCallable listCallDetailRecordsCallable(const Model::ListCallDetailRecordsRequest& request) const;
			ListCallTagsOutcome listCallTags(const Model::ListCallTagsRequest &request)const;
			void listCallTagsAsync(const Model::ListCallTagsRequest& request, const ListCallTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallTagsOutcomeCallable listCallTagsCallable(const Model::ListCallTagsRequest& request) const;
			ListCampaignTrendingReportOutcome listCampaignTrendingReport(const Model::ListCampaignTrendingReportRequest &request)const;
			void listCampaignTrendingReportAsync(const Model::ListCampaignTrendingReportRequest& request, const ListCampaignTrendingReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCampaignTrendingReportOutcomeCallable listCampaignTrendingReportCallable(const Model::ListCampaignTrendingReportRequest& request) const;
			ListCampaignsOutcome listCampaigns(const Model::ListCampaignsRequest &request)const;
			void listCampaignsAsync(const Model::ListCampaignsRequest& request, const ListCampaignsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCampaignsOutcomeCallable listCampaignsCallable(const Model::ListCampaignsRequest& request) const;
			ListCasesOutcome listCases(const Model::ListCasesRequest &request)const;
			void listCasesAsync(const Model::ListCasesRequest& request, const ListCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCasesOutcomeCallable listCasesCallable(const Model::ListCasesRequest& request) const;
			ListConfigItemsOutcome listConfigItems(const Model::ListConfigItemsRequest &request)const;
			void listConfigItemsAsync(const Model::ListConfigItemsRequest& request, const ListConfigItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigItemsOutcomeCallable listConfigItemsCallable(const Model::ListConfigItemsRequest& request) const;
			ListContactFlowsOutcome listContactFlows(const Model::ListContactFlowsRequest &request)const;
			void listContactFlowsAsync(const Model::ListContactFlowsRequest& request, const ListContactFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListContactFlowsOutcomeCallable listContactFlowsCallable(const Model::ListContactFlowsRequest& request) const;
			ListCustomCallTaggingOutcome listCustomCallTagging(const Model::ListCustomCallTaggingRequest &request)const;
			void listCustomCallTaggingAsync(const Model::ListCustomCallTaggingRequest& request, const ListCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomCallTaggingOutcomeCallable listCustomCallTaggingCallable(const Model::ListCustomCallTaggingRequest& request) const;
			ListDevicesOutcome listDevices(const Model::ListDevicesRequest &request)const;
			void listDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicesOutcomeCallable listDevicesCallable(const Model::ListDevicesRequest& request) const;
			ListDoNotCallNumbersOutcome listDoNotCallNumbers(const Model::ListDoNotCallNumbersRequest &request)const;
			void listDoNotCallNumbersAsync(const Model::ListDoNotCallNumbersRequest& request, const ListDoNotCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDoNotCallNumbersOutcomeCallable listDoNotCallNumbersCallable(const Model::ListDoNotCallNumbersRequest& request) const;
			ListHistoricalAgentReportOutcome listHistoricalAgentReport(const Model::ListHistoricalAgentReportRequest &request)const;
			void listHistoricalAgentReportAsync(const Model::ListHistoricalAgentReportRequest& request, const ListHistoricalAgentReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHistoricalAgentReportOutcomeCallable listHistoricalAgentReportCallable(const Model::ListHistoricalAgentReportRequest& request) const;
			ListHistoricalSkillGroupReportOutcome listHistoricalSkillGroupReport(const Model::ListHistoricalSkillGroupReportRequest &request)const;
			void listHistoricalSkillGroupReportAsync(const Model::ListHistoricalSkillGroupReportRequest& request, const ListHistoricalSkillGroupReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHistoricalSkillGroupReportOutcomeCallable listHistoricalSkillGroupReportCallable(const Model::ListHistoricalSkillGroupReportRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListInstancesOfUserOutcome listInstancesOfUser(const Model::ListInstancesOfUserRequest &request)const;
			void listInstancesOfUserAsync(const Model::ListInstancesOfUserRequest& request, const ListInstancesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOfUserOutcomeCallable listInstancesOfUserCallable(const Model::ListInstancesOfUserRequest& request) const;
			ListIntervalAgentReportOutcome listIntervalAgentReport(const Model::ListIntervalAgentReportRequest &request)const;
			void listIntervalAgentReportAsync(const Model::ListIntervalAgentReportRequest& request, const ListIntervalAgentReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIntervalAgentReportOutcomeCallable listIntervalAgentReportCallable(const Model::ListIntervalAgentReportRequest& request) const;
			ListIntervalInstanceReportOutcome listIntervalInstanceReport(const Model::ListIntervalInstanceReportRequest &request)const;
			void listIntervalInstanceReportAsync(const Model::ListIntervalInstanceReportRequest& request, const ListIntervalInstanceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIntervalInstanceReportOutcomeCallable listIntervalInstanceReportCallable(const Model::ListIntervalInstanceReportRequest& request) const;
			ListIntervalSkillGroupReportOutcome listIntervalSkillGroupReport(const Model::ListIntervalSkillGroupReportRequest &request)const;
			void listIntervalSkillGroupReportAsync(const Model::ListIntervalSkillGroupReportRequest& request, const ListIntervalSkillGroupReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIntervalSkillGroupReportOutcomeCallable listIntervalSkillGroupReportCallable(const Model::ListIntervalSkillGroupReportRequest& request) const;
			ListIvrTrackingDetailsOutcome listIvrTrackingDetails(const Model::ListIvrTrackingDetailsRequest &request)const;
			void listIvrTrackingDetailsAsync(const Model::ListIvrTrackingDetailsRequest& request, const ListIvrTrackingDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIvrTrackingDetailsOutcomeCallable listIvrTrackingDetailsCallable(const Model::ListIvrTrackingDetailsRequest& request) const;
			ListLegacyAgentEventLogsOutcome listLegacyAgentEventLogs(const Model::ListLegacyAgentEventLogsRequest &request)const;
			void listLegacyAgentEventLogsAsync(const Model::ListLegacyAgentEventLogsRequest& request, const ListLegacyAgentEventLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLegacyAgentEventLogsOutcomeCallable listLegacyAgentEventLogsCallable(const Model::ListLegacyAgentEventLogsRequest& request) const;
			ListLegacyAgentStatusLogsOutcome listLegacyAgentStatusLogs(const Model::ListLegacyAgentStatusLogsRequest &request)const;
			void listLegacyAgentStatusLogsAsync(const Model::ListLegacyAgentStatusLogsRequest& request, const ListLegacyAgentStatusLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLegacyAgentStatusLogsOutcomeCallable listLegacyAgentStatusLogsCallable(const Model::ListLegacyAgentStatusLogsRequest& request) const;
			ListLegacyAppraiseLogsOutcome listLegacyAppraiseLogs(const Model::ListLegacyAppraiseLogsRequest &request)const;
			void listLegacyAppraiseLogsAsync(const Model::ListLegacyAppraiseLogsRequest& request, const ListLegacyAppraiseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLegacyAppraiseLogsOutcomeCallable listLegacyAppraiseLogsCallable(const Model::ListLegacyAppraiseLogsRequest& request) const;
			ListLegacyQueueEventLogsOutcome listLegacyQueueEventLogs(const Model::ListLegacyQueueEventLogsRequest &request)const;
			void listLegacyQueueEventLogsAsync(const Model::ListLegacyQueueEventLogsRequest& request, const ListLegacyQueueEventLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLegacyQueueEventLogsOutcomeCallable listLegacyQueueEventLogsCallable(const Model::ListLegacyQueueEventLogsRequest& request) const;
			ListMonoRecordingsOutcome listMonoRecordings(const Model::ListMonoRecordingsRequest &request)const;
			void listMonoRecordingsAsync(const Model::ListMonoRecordingsRequest& request, const ListMonoRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMonoRecordingsOutcomeCallable listMonoRecordingsCallable(const Model::ListMonoRecordingsRequest& request) const;
			ListMultiChannelRecordingsOutcome listMultiChannelRecordings(const Model::ListMultiChannelRecordingsRequest &request)const;
			void listMultiChannelRecordingsAsync(const Model::ListMultiChannelRecordingsRequest& request, const ListMultiChannelRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiChannelRecordingsOutcomeCallable listMultiChannelRecordingsCallable(const Model::ListMultiChannelRecordingsRequest& request) const;
			ListOutboundNumbersOfUserOutcome listOutboundNumbersOfUser(const Model::ListOutboundNumbersOfUserRequest &request)const;
			void listOutboundNumbersOfUserAsync(const Model::ListOutboundNumbersOfUserRequest& request, const ListOutboundNumbersOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOutboundNumbersOfUserOutcomeCallable listOutboundNumbersOfUserCallable(const Model::ListOutboundNumbersOfUserRequest& request) const;
			ListPersonalNumbersOfUserOutcome listPersonalNumbersOfUser(const Model::ListPersonalNumbersOfUserRequest &request)const;
			void listPersonalNumbersOfUserAsync(const Model::ListPersonalNumbersOfUserRequest& request, const ListPersonalNumbersOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonalNumbersOfUserOutcomeCallable listPersonalNumbersOfUserCallable(const Model::ListPersonalNumbersOfUserRequest& request) const;
			ListPhoneNumbersOutcome listPhoneNumbers(const Model::ListPhoneNumbersRequest &request)const;
			void listPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPhoneNumbersOutcomeCallable listPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;
			ListPhoneNumbersOfSkillGroupOutcome listPhoneNumbersOfSkillGroup(const Model::ListPhoneNumbersOfSkillGroupRequest &request)const;
			void listPhoneNumbersOfSkillGroupAsync(const Model::ListPhoneNumbersOfSkillGroupRequest& request, const ListPhoneNumbersOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPhoneNumbersOfSkillGroupOutcomeCallable listPhoneNumbersOfSkillGroupCallable(const Model::ListPhoneNumbersOfSkillGroupRequest& request) const;
			ListPrivilegesOfUserOutcome listPrivilegesOfUser(const Model::ListPrivilegesOfUserRequest &request)const;
			void listPrivilegesOfUserAsync(const Model::ListPrivilegesOfUserRequest& request, const ListPrivilegesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivilegesOfUserOutcomeCallable listPrivilegesOfUserCallable(const Model::ListPrivilegesOfUserRequest& request) const;
			ListRamUsersOutcome listRamUsers(const Model::ListRamUsersRequest &request)const;
			void listRamUsersAsync(const Model::ListRamUsersRequest& request, const ListRamUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRamUsersOutcomeCallable listRamUsersCallable(const Model::ListRamUsersRequest& request) const;
			ListRealtimeAgentStatesOutcome listRealtimeAgentStates(const Model::ListRealtimeAgentStatesRequest &request)const;
			void listRealtimeAgentStatesAsync(const Model::ListRealtimeAgentStatesRequest& request, const ListRealtimeAgentStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRealtimeAgentStatesOutcomeCallable listRealtimeAgentStatesCallable(const Model::ListRealtimeAgentStatesRequest& request) const;
			ListRealtimeSkillGroupStatesOutcome listRealtimeSkillGroupStates(const Model::ListRealtimeSkillGroupStatesRequest &request)const;
			void listRealtimeSkillGroupStatesAsync(const Model::ListRealtimeSkillGroupStatesRequest& request, const ListRealtimeSkillGroupStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRealtimeSkillGroupStatesOutcomeCallable listRealtimeSkillGroupStatesCallable(const Model::ListRealtimeSkillGroupStatesRequest& request) const;
			ListRecentCallDetailRecordsOutcome listRecentCallDetailRecords(const Model::ListRecentCallDetailRecordsRequest &request)const;
			void listRecentCallDetailRecordsAsync(const Model::ListRecentCallDetailRecordsRequest& request, const ListRecentCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecentCallDetailRecordsOutcomeCallable listRecentCallDetailRecordsCallable(const Model::ListRecentCallDetailRecordsRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			ListSkillGroupStatesOutcome listSkillGroupStates(const Model::ListSkillGroupStatesRequest &request)const;
			void listSkillGroupStatesAsync(const Model::ListSkillGroupStatesRequest& request, const ListSkillGroupStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupStatesOutcomeCallable listSkillGroupStatesCallable(const Model::ListSkillGroupStatesRequest& request) const;
			ListSkillGroupSummaryReportsSinceMidnightOutcome listSkillGroupSummaryReportsSinceMidnight(const Model::ListSkillGroupSummaryReportsSinceMidnightRequest &request)const;
			void listSkillGroupSummaryReportsSinceMidnightAsync(const Model::ListSkillGroupSummaryReportsSinceMidnightRequest& request, const ListSkillGroupSummaryReportsSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupSummaryReportsSinceMidnightOutcomeCallable listSkillGroupSummaryReportsSinceMidnightCallable(const Model::ListSkillGroupSummaryReportsSinceMidnightRequest& request) const;
			ListSkillGroupsOutcome listSkillGroups(const Model::ListSkillGroupsRequest &request)const;
			void listSkillGroupsAsync(const Model::ListSkillGroupsRequest& request, const ListSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupsOutcomeCallable listSkillGroupsCallable(const Model::ListSkillGroupsRequest& request) const;
			ListSkillLevelsOfUserOutcome listSkillLevelsOfUser(const Model::ListSkillLevelsOfUserRequest &request)const;
			void listSkillLevelsOfUserAsync(const Model::ListSkillLevelsOfUserRequest& request, const ListSkillLevelsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillLevelsOfUserOutcomeCallable listSkillLevelsOfUserCallable(const Model::ListSkillLevelsOfUserRequest& request) const;
			ListUnassignedNumbersOutcome listUnassignedNumbers(const Model::ListUnassignedNumbersRequest &request)const;
			void listUnassignedNumbersAsync(const Model::ListUnassignedNumbersRequest& request, const ListUnassignedNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUnassignedNumbersOutcomeCallable listUnassignedNumbersCallable(const Model::ListUnassignedNumbersRequest& request) const;
			ListUserLevelsOfSkillGroupOutcome listUserLevelsOfSkillGroup(const Model::ListUserLevelsOfSkillGroupRequest &request)const;
			void listUserLevelsOfSkillGroupAsync(const Model::ListUserLevelsOfSkillGroupRequest& request, const ListUserLevelsOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserLevelsOfSkillGroupOutcomeCallable listUserLevelsOfSkillGroupCallable(const Model::ListUserLevelsOfSkillGroupRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			MakeCallOutcome makeCall(const Model::MakeCallRequest &request)const;
			void makeCallAsync(const Model::MakeCallRequest& request, const MakeCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MakeCallOutcomeCallable makeCallCallable(const Model::MakeCallRequest& request) const;
			ModifyAudioFileOutcome modifyAudioFile(const Model::ModifyAudioFileRequest &request)const;
			void modifyAudioFileAsync(const Model::ModifyAudioFileRequest& request, const ModifyAudioFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAudioFileOutcomeCallable modifyAudioFileCallable(const Model::ModifyAudioFileRequest& request) const;
			ModifyCustomCallTaggingOutcome modifyCustomCallTagging(const Model::ModifyCustomCallTaggingRequest &request)const;
			void modifyCustomCallTaggingAsync(const Model::ModifyCustomCallTaggingRequest& request, const ModifyCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCustomCallTaggingOutcomeCallable modifyCustomCallTaggingCallable(const Model::ModifyCustomCallTaggingRequest& request) const;
			ModifyInstanceOutcome modifyInstance(const Model::ModifyInstanceRequest &request)const;
			void modifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceOutcomeCallable modifyInstanceCallable(const Model::ModifyInstanceRequest& request) const;
			ModifyPhoneNumberOutcome modifyPhoneNumber(const Model::ModifyPhoneNumberRequest &request)const;
			void modifyPhoneNumberAsync(const Model::ModifyPhoneNumberRequest& request, const ModifyPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPhoneNumberOutcomeCallable modifyPhoneNumberCallable(const Model::ModifyPhoneNumberRequest& request) const;
			ModifySkillGroupOutcome modifySkillGroup(const Model::ModifySkillGroupRequest &request)const;
			void modifySkillGroupAsync(const Model::ModifySkillGroupRequest& request, const ModifySkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySkillGroupOutcomeCallable modifySkillGroupCallable(const Model::ModifySkillGroupRequest& request) const;
			ModifySkillLevelsOfUserOutcome modifySkillLevelsOfUser(const Model::ModifySkillLevelsOfUserRequest &request)const;
			void modifySkillLevelsOfUserAsync(const Model::ModifySkillLevelsOfUserRequest& request, const ModifySkillLevelsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySkillLevelsOfUserOutcomeCallable modifySkillLevelsOfUserCallable(const Model::ModifySkillLevelsOfUserRequest& request) const;
			ModifyUserOutcome modifyUser(const Model::ModifyUserRequest &request)const;
			void modifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserOutcomeCallable modifyUserCallable(const Model::ModifyUserRequest& request) const;
			ModifyUserLevelsOfSkillGroupOutcome modifyUserLevelsOfSkillGroup(const Model::ModifyUserLevelsOfSkillGroupRequest &request)const;
			void modifyUserLevelsOfSkillGroupAsync(const Model::ModifyUserLevelsOfSkillGroupRequest& request, const ModifyUserLevelsOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserLevelsOfSkillGroupOutcomeCallable modifyUserLevelsOfSkillGroupCallable(const Model::ModifyUserLevelsOfSkillGroupRequest& request) const;
			MonitorCallOutcome monitorCall(const Model::MonitorCallRequest &request)const;
			void monitorCallAsync(const Model::MonitorCallRequest& request, const MonitorCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MonitorCallOutcomeCallable monitorCallCallable(const Model::MonitorCallRequest& request) const;
			MuteCallOutcome muteCall(const Model::MuteCallRequest &request)const;
			void muteCallAsync(const Model::MuteCallRequest& request, const MuteCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteCallOutcomeCallable muteCallCallable(const Model::MuteCallRequest& request) const;
			PauseCampaignOutcome pauseCampaign(const Model::PauseCampaignRequest &request)const;
			void pauseCampaignAsync(const Model::PauseCampaignRequest& request, const PauseCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseCampaignOutcomeCallable pauseCampaignCallable(const Model::PauseCampaignRequest& request) const;
			PickOutboundNumbersOutcome pickOutboundNumbers(const Model::PickOutboundNumbersRequest &request)const;
			void pickOutboundNumbersAsync(const Model::PickOutboundNumbersRequest& request, const PickOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PickOutboundNumbersOutcomeCallable pickOutboundNumbersCallable(const Model::PickOutboundNumbersRequest& request) const;
			PollUserStatusOutcome pollUserStatus(const Model::PollUserStatusRequest &request)const;
			void pollUserStatusAsync(const Model::PollUserStatusRequest& request, const PollUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PollUserStatusOutcomeCallable pollUserStatusCallable(const Model::PollUserStatusRequest& request) const;
			PublishContactFlowOutcome publishContactFlow(const Model::PublishContactFlowRequest &request)const;
			void publishContactFlowAsync(const Model::PublishContactFlowRequest& request, const PublishContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishContactFlowOutcomeCallable publishContactFlowCallable(const Model::PublishContactFlowRequest& request) const;
			ReadyForServiceOutcome readyForService(const Model::ReadyForServiceRequest &request)const;
			void readyForServiceAsync(const Model::ReadyForServiceRequest& request, const ReadyForServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReadyForServiceOutcomeCallable readyForServiceCallable(const Model::ReadyForServiceRequest& request) const;
			RedialCallOutcome redialCall(const Model::RedialCallRequest &request)const;
			void redialCallAsync(const Model::RedialCallRequest& request, const RedialCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RedialCallOutcomeCallable redialCallCallable(const Model::RedialCallRequest& request) const;
			RegisterDeviceOutcome registerDevice(const Model::RegisterDeviceRequest &request)const;
			void registerDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDeviceOutcomeCallable registerDeviceCallable(const Model::RegisterDeviceRequest& request) const;
			RegisterDevicesOutcome registerDevices(const Model::RegisterDevicesRequest &request)const;
			void registerDevicesAsync(const Model::RegisterDevicesRequest& request, const RegisterDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDevicesOutcomeCallable registerDevicesCallable(const Model::RegisterDevicesRequest& request) const;
			ReleaseCallOutcome releaseCall(const Model::ReleaseCallRequest &request)const;
			void releaseCallAsync(const Model::ReleaseCallRequest& request, const ReleaseCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseCallOutcomeCallable releaseCallCallable(const Model::ReleaseCallRequest& request) const;
			RemoveDoNotCallNumbersOutcome removeDoNotCallNumbers(const Model::RemoveDoNotCallNumbersRequest &request)const;
			void removeDoNotCallNumbersAsync(const Model::RemoveDoNotCallNumbersRequest& request, const RemoveDoNotCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDoNotCallNumbersOutcomeCallable removeDoNotCallNumbersCallable(const Model::RemoveDoNotCallNumbersRequest& request) const;
			RemovePersonalNumbersFromUserOutcome removePersonalNumbersFromUser(const Model::RemovePersonalNumbersFromUserRequest &request)const;
			void removePersonalNumbersFromUserAsync(const Model::RemovePersonalNumbersFromUserRequest& request, const RemovePersonalNumbersFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePersonalNumbersFromUserOutcomeCallable removePersonalNumbersFromUserCallable(const Model::RemovePersonalNumbersFromUserRequest& request) const;
			RemovePhoneNumberFromSkillGroupsOutcome removePhoneNumberFromSkillGroups(const Model::RemovePhoneNumberFromSkillGroupsRequest &request)const;
			void removePhoneNumberFromSkillGroupsAsync(const Model::RemovePhoneNumberFromSkillGroupsRequest& request, const RemovePhoneNumberFromSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePhoneNumberFromSkillGroupsOutcomeCallable removePhoneNumberFromSkillGroupsCallable(const Model::RemovePhoneNumberFromSkillGroupsRequest& request) const;
			RemovePhoneNumbersOutcome removePhoneNumbers(const Model::RemovePhoneNumbersRequest &request)const;
			void removePhoneNumbersAsync(const Model::RemovePhoneNumbersRequest& request, const RemovePhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePhoneNumbersOutcomeCallable removePhoneNumbersCallable(const Model::RemovePhoneNumbersRequest& request) const;
			RemovePhoneNumbersFromSkillGroupOutcome removePhoneNumbersFromSkillGroup(const Model::RemovePhoneNumbersFromSkillGroupRequest &request)const;
			void removePhoneNumbersFromSkillGroupAsync(const Model::RemovePhoneNumbersFromSkillGroupRequest& request, const RemovePhoneNumbersFromSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePhoneNumbersFromSkillGroupOutcomeCallable removePhoneNumbersFromSkillGroupCallable(const Model::RemovePhoneNumbersFromSkillGroupRequest& request) const;
			RemoveSkillGroupsFromUserOutcome removeSkillGroupsFromUser(const Model::RemoveSkillGroupsFromUserRequest &request)const;
			void removeSkillGroupsFromUserAsync(const Model::RemoveSkillGroupsFromUserRequest& request, const RemoveSkillGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSkillGroupsFromUserOutcomeCallable removeSkillGroupsFromUserCallable(const Model::RemoveSkillGroupsFromUserRequest& request) const;
			RemoveUsersOutcome removeUsers(const Model::RemoveUsersRequest &request)const;
			void removeUsersAsync(const Model::RemoveUsersRequest& request, const RemoveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUsersOutcomeCallable removeUsersCallable(const Model::RemoveUsersRequest& request) const;
			RemoveUsersFromSkillGroupOutcome removeUsersFromSkillGroup(const Model::RemoveUsersFromSkillGroupRequest &request)const;
			void removeUsersFromSkillGroupAsync(const Model::RemoveUsersFromSkillGroupRequest& request, const RemoveUsersFromSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUsersFromSkillGroupOutcomeCallable removeUsersFromSkillGroupCallable(const Model::RemoveUsersFromSkillGroupRequest& request) const;
			ResetAgentStateOutcome resetAgentState(const Model::ResetAgentStateRequest &request)const;
			void resetAgentStateAsync(const Model::ResetAgentStateRequest& request, const ResetAgentStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAgentStateOutcomeCallable resetAgentStateCallable(const Model::ResetAgentStateRequest& request) const;
			ResetUserPasswordOutcome resetUserPassword(const Model::ResetUserPasswordRequest &request)const;
			void resetUserPasswordAsync(const Model::ResetUserPasswordRequest& request, const ResetUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetUserPasswordOutcomeCallable resetUserPasswordCallable(const Model::ResetUserPasswordRequest& request) const;
			RestoreArchivedRecordingsOutcome restoreArchivedRecordings(const Model::RestoreArchivedRecordingsRequest &request)const;
			void restoreArchivedRecordingsAsync(const Model::RestoreArchivedRecordingsRequest& request, const RestoreArchivedRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreArchivedRecordingsOutcomeCallable restoreArchivedRecordingsCallable(const Model::RestoreArchivedRecordingsRequest& request) const;
			ResumeCampaignOutcome resumeCampaign(const Model::ResumeCampaignRequest &request)const;
			void resumeCampaignAsync(const Model::ResumeCampaignRequest& request, const ResumeCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeCampaignOutcomeCallable resumeCampaignCallable(const Model::ResumeCampaignRequest& request) const;
			RetrieveCallOutcome retrieveCall(const Model::RetrieveCallRequest &request)const;
			void retrieveCallAsync(const Model::RetrieveCallRequest& request, const RetrieveCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetrieveCallOutcomeCallable retrieveCallCallable(const Model::RetrieveCallRequest& request) const;
			SaveRTCStatsV2Outcome saveRTCStatsV2(const Model::SaveRTCStatsV2Request &request)const;
			void saveRTCStatsV2Async(const Model::SaveRTCStatsV2Request& request, const SaveRTCStatsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveRTCStatsV2OutcomeCallable saveRTCStatsV2Callable(const Model::SaveRTCStatsV2Request& request) const;
			SaveTerminalLogOutcome saveTerminalLog(const Model::SaveTerminalLogRequest &request)const;
			void saveTerminalLogAsync(const Model::SaveTerminalLogRequest& request, const SaveTerminalLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTerminalLogOutcomeCallable saveTerminalLogCallable(const Model::SaveTerminalLogRequest& request) const;
			SaveWebRTCStatsOutcome saveWebRTCStats(const Model::SaveWebRTCStatsRequest &request)const;
			void saveWebRTCStatsAsync(const Model::SaveWebRTCStatsRequest& request, const SaveWebRTCStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveWebRTCStatsOutcomeCallable saveWebRTCStatsCallable(const Model::SaveWebRTCStatsRequest& request) const;
			SaveWebRtcInfoOutcome saveWebRtcInfo(const Model::SaveWebRtcInfoRequest &request)const;
			void saveWebRtcInfoAsync(const Model::SaveWebRtcInfoRequest& request, const SaveWebRtcInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveWebRtcInfoOutcomeCallable saveWebRtcInfoCallable(const Model::SaveWebRtcInfoRequest& request) const;
			SendDtmfSignalingOutcome sendDtmfSignaling(const Model::SendDtmfSignalingRequest &request)const;
			void sendDtmfSignalingAsync(const Model::SendDtmfSignalingRequest& request, const SendDtmfSignalingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendDtmfSignalingOutcomeCallable sendDtmfSignalingCallable(const Model::SendDtmfSignalingRequest& request) const;
			SignInGroupOutcome signInGroup(const Model::SignInGroupRequest &request)const;
			void signInGroupAsync(const Model::SignInGroupRequest& request, const SignInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignInGroupOutcomeCallable signInGroupCallable(const Model::SignInGroupRequest& request) const;
			SignOutGroupOutcome signOutGroup(const Model::SignOutGroupRequest &request)const;
			void signOutGroupAsync(const Model::SignOutGroupRequest& request, const SignOutGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignOutGroupOutcomeCallable signOutGroupCallable(const Model::SignOutGroupRequest& request) const;
			StartBack2BackCallOutcome startBack2BackCall(const Model::StartBack2BackCallRequest &request)const;
			void startBack2BackCallAsync(const Model::StartBack2BackCallRequest& request, const StartBack2BackCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBack2BackCallOutcomeCallable startBack2BackCallCallable(const Model::StartBack2BackCallRequest& request) const;
			StartConferenceOutcome startConference(const Model::StartConferenceRequest &request)const;
			void startConferenceAsync(const Model::StartConferenceRequest& request, const StartConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartConferenceOutcomeCallable startConferenceCallable(const Model::StartConferenceRequest& request) const;
			StartEditContactFlowOutcome startEditContactFlow(const Model::StartEditContactFlowRequest &request)const;
			void startEditContactFlowAsync(const Model::StartEditContactFlowRequest& request, const StartEditContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartEditContactFlowOutcomeCallable startEditContactFlowCallable(const Model::StartEditContactFlowRequest& request) const;
			StartPredictiveCallOutcome startPredictiveCall(const Model::StartPredictiveCallRequest &request)const;
			void startPredictiveCallAsync(const Model::StartPredictiveCallRequest& request, const StartPredictiveCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartPredictiveCallOutcomeCallable startPredictiveCallCallable(const Model::StartPredictiveCallRequest& request) const;
			StartPrivacyCallOutcome startPrivacyCall(const Model::StartPrivacyCallRequest &request)const;
			void startPrivacyCallAsync(const Model::StartPrivacyCallRequest& request, const StartPrivacyCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartPrivacyCallOutcomeCallable startPrivacyCallCallable(const Model::StartPrivacyCallRequest& request) const;
			SubmitCampaignOutcome submitCampaign(const Model::SubmitCampaignRequest &request)const;
			void submitCampaignAsync(const Model::SubmitCampaignRequest& request, const SubmitCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCampaignOutcomeCallable submitCampaignCallable(const Model::SubmitCampaignRequest& request) const;
			SwitchToConferenceOutcome switchToConference(const Model::SwitchToConferenceRequest &request)const;
			void switchToConferenceAsync(const Model::SwitchToConferenceRequest& request, const SwitchToConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchToConferenceOutcomeCallable switchToConferenceCallable(const Model::SwitchToConferenceRequest& request) const;
			TakeBreakOutcome takeBreak(const Model::TakeBreakRequest &request)const;
			void takeBreakAsync(const Model::TakeBreakRequest& request, const TakeBreakAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TakeBreakOutcomeCallable takeBreakCallable(const Model::TakeBreakRequest& request) const;
			UnmuteCallOutcome unmuteCall(const Model::UnmuteCallRequest &request)const;
			void unmuteCallAsync(const Model::UnmuteCallRequest& request, const UnmuteCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnmuteCallOutcomeCallable unmuteCallCallable(const Model::UnmuteCallRequest& request) const;
			UnregisterDeviceOutcome unregisterDevice(const Model::UnregisterDeviceRequest &request)const;
			void unregisterDeviceAsync(const Model::UnregisterDeviceRequest& request, const UnregisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnregisterDeviceOutcomeCallable unregisterDeviceCallable(const Model::UnregisterDeviceRequest& request) const;
			UpdateConfigItemsOutcome updateConfigItems(const Model::UpdateConfigItemsRequest &request)const;
			void updateConfigItemsAsync(const Model::UpdateConfigItemsRequest& request, const UpdateConfigItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConfigItemsOutcomeCallable updateConfigItemsCallable(const Model::UpdateConfigItemsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CCC_CCCCLIENT_H_
