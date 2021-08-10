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
#include "model/AssignUsersRequest.h"
#include "model/AssignUsersResult.h"
#include "model/BargeInCallRequest.h"
#include "model/BargeInCallResult.h"
#include "model/BlindTransferRequest.h"
#include "model/BlindTransferResult.h"
#include "model/CancelAttendedTransferRequest.h"
#include "model/CancelAttendedTransferResult.h"
#include "model/ChangeWorkModeRequest.h"
#include "model/ChangeWorkModeResult.h"
#include "model/CoachCallRequest.h"
#include "model/CoachCallResult.h"
#include "model/CompleteAttendedTransferRequest.h"
#include "model/CompleteAttendedTransferResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateSkillGroupRequest.h"
#include "model/CreateSkillGroupResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/DeleteSkillGroupRequest.h"
#include "model/DeleteSkillGroupResult.h"
#include "model/GetCallDetailRecordRequest.h"
#include "model/GetCallDetailRecordResult.h"
#include "model/GetHistoricalCallerReportRequest.h"
#include "model/GetHistoricalCallerReportResult.h"
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
#include "model/GetRealtimeInstanceStatesRequest.h"
#include "model/GetRealtimeInstanceStatesResult.h"
#include "model/GetTurnCredentialsRequest.h"
#include "model/GetTurnCredentialsResult.h"
#include "model/GetTurnServerListRequest.h"
#include "model/GetTurnServerListResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/HoldCallRequest.h"
#include "model/HoldCallResult.h"
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
#include "model/ListBriefSkillGroupsRequest.h"
#include "model/ListBriefSkillGroupsResult.h"
#include "model/ListCallDetailRecordsRequest.h"
#include "model/ListCallDetailRecordsResult.h"
#include "model/ListConfigItemsRequest.h"
#include "model/ListConfigItemsResult.h"
#include "model/ListContactFlowsRequest.h"
#include "model/ListContactFlowsResult.h"
#include "model/ListDevicesRequest.h"
#include "model/ListDevicesResult.h"
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
#include "model/ListSkillGroupsRequest.h"
#include "model/ListSkillGroupsResult.h"
#include "model/ListSkillLevelsOfUserRequest.h"
#include "model/ListSkillLevelsOfUserResult.h"
#include "model/ListUserLevelsOfSkillGroupRequest.h"
#include "model/ListUserLevelsOfSkillGroupResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/MakeCallRequest.h"
#include "model/MakeCallResult.h"
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
#include "model/PickOutboundNumbersRequest.h"
#include "model/PickOutboundNumbersResult.h"
#include "model/PollUserStatusRequest.h"
#include "model/PollUserStatusResult.h"
#include "model/ReadyForServiceRequest.h"
#include "model/ReadyForServiceResult.h"
#include "model/RegisterDeviceRequest.h"
#include "model/RegisterDeviceResult.h"
#include "model/ReleaseCallRequest.h"
#include "model/ReleaseCallResult.h"
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
#include "model/TakeBreakRequest.h"
#include "model/TakeBreakResult.h"
#include "model/UnmuteCallRequest.h"
#include "model/UnmuteCallResult.h"
#include "model/UpdateConfigItemsRequest.h"
#include "model/UpdateConfigItemsResult.h"


namespace AlibabaCloud
{
	namespace CCC
	{
		class ALIBABACLOUD_CCC_EXPORT CCCClient : public RpcServiceClient
		{
		public:
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
			typedef Outcome<Error, Model::AssignUsersResult> AssignUsersOutcome;
			typedef std::future<AssignUsersOutcome> AssignUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AssignUsersRequest&, const AssignUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignUsersAsyncHandler;
			typedef Outcome<Error, Model::BargeInCallResult> BargeInCallOutcome;
			typedef std::future<BargeInCallOutcome> BargeInCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::BargeInCallRequest&, const BargeInCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BargeInCallAsyncHandler;
			typedef Outcome<Error, Model::BlindTransferResult> BlindTransferOutcome;
			typedef std::future<BlindTransferOutcome> BlindTransferOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::BlindTransferRequest&, const BlindTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BlindTransferAsyncHandler;
			typedef Outcome<Error, Model::CancelAttendedTransferResult> CancelAttendedTransferOutcome;
			typedef std::future<CancelAttendedTransferOutcome> CancelAttendedTransferOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CancelAttendedTransferRequest&, const CancelAttendedTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelAttendedTransferAsyncHandler;
			typedef Outcome<Error, Model::ChangeWorkModeResult> ChangeWorkModeOutcome;
			typedef std::future<ChangeWorkModeOutcome> ChangeWorkModeOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ChangeWorkModeRequest&, const ChangeWorkModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeWorkModeAsyncHandler;
			typedef Outcome<Error, Model::CoachCallResult> CoachCallOutcome;
			typedef std::future<CoachCallOutcome> CoachCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CoachCallRequest&, const CoachCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CoachCallAsyncHandler;
			typedef Outcome<Error, Model::CompleteAttendedTransferResult> CompleteAttendedTransferOutcome;
			typedef std::future<CompleteAttendedTransferOutcome> CompleteAttendedTransferOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CompleteAttendedTransferRequest&, const CompleteAttendedTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompleteAttendedTransferAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateSkillGroupResult> CreateSkillGroupOutcome;
			typedef std::future<CreateSkillGroupOutcome> CreateSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateSkillGroupRequest&, const CreateSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteSkillGroupResult> DeleteSkillGroupOutcome;
			typedef std::future<DeleteSkillGroupOutcome> DeleteSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::DeleteSkillGroupRequest&, const DeleteSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::GetCallDetailRecordResult> GetCallDetailRecordOutcome;
			typedef std::future<GetCallDetailRecordOutcome> GetCallDetailRecordOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetCallDetailRecordRequest&, const GetCallDetailRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCallDetailRecordAsyncHandler;
			typedef Outcome<Error, Model::GetHistoricalCallerReportResult> GetHistoricalCallerReportOutcome;
			typedef std::future<GetHistoricalCallerReportOutcome> GetHistoricalCallerReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetHistoricalCallerReportRequest&, const GetHistoricalCallerReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHistoricalCallerReportAsyncHandler;
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
			typedef Outcome<Error, Model::GetRealtimeInstanceStatesResult> GetRealtimeInstanceStatesOutcome;
			typedef std::future<GetRealtimeInstanceStatesOutcome> GetRealtimeInstanceStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetRealtimeInstanceStatesRequest&, const GetRealtimeInstanceStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRealtimeInstanceStatesAsyncHandler;
			typedef Outcome<Error, Model::GetTurnCredentialsResult> GetTurnCredentialsOutcome;
			typedef std::future<GetTurnCredentialsOutcome> GetTurnCredentialsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTurnCredentialsRequest&, const GetTurnCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTurnCredentialsAsyncHandler;
			typedef Outcome<Error, Model::GetTurnServerListResult> GetTurnServerListOutcome;
			typedef std::future<GetTurnServerListOutcome> GetTurnServerListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTurnServerListRequest&, const GetTurnServerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTurnServerListAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::HoldCallResult> HoldCallOutcome;
			typedef std::future<HoldCallOutcome> HoldCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::HoldCallRequest&, const HoldCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HoldCallAsyncHandler;
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
			typedef Outcome<Error, Model::ListBriefSkillGroupsResult> ListBriefSkillGroupsOutcome;
			typedef std::future<ListBriefSkillGroupsOutcome> ListBriefSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListBriefSkillGroupsRequest&, const ListBriefSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBriefSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListCallDetailRecordsResult> ListCallDetailRecordsOutcome;
			typedef std::future<ListCallDetailRecordsOutcome> ListCallDetailRecordsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCallDetailRecordsRequest&, const ListCallDetailRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallDetailRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListConfigItemsResult> ListConfigItemsOutcome;
			typedef std::future<ListConfigItemsOutcome> ListConfigItemsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListConfigItemsRequest&, const ListConfigItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigItemsAsyncHandler;
			typedef Outcome<Error, Model::ListContactFlowsResult> ListContactFlowsOutcome;
			typedef std::future<ListContactFlowsOutcome> ListContactFlowsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListContactFlowsRequest&, const ListContactFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContactFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListDevicesResult> ListDevicesOutcome;
			typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListDevicesRequest&, const ListDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicesAsyncHandler;
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
			typedef Outcome<Error, Model::ListSkillGroupsResult> ListSkillGroupsOutcome;
			typedef std::future<ListSkillGroupsOutcome> ListSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillGroupsRequest&, const ListSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListSkillLevelsOfUserResult> ListSkillLevelsOfUserOutcome;
			typedef std::future<ListSkillLevelsOfUserOutcome> ListSkillLevelsOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillLevelsOfUserRequest&, const ListSkillLevelsOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillLevelsOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListUserLevelsOfSkillGroupResult> ListUserLevelsOfSkillGroupOutcome;
			typedef std::future<ListUserLevelsOfSkillGroupOutcome> ListUserLevelsOfSkillGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUserLevelsOfSkillGroupRequest&, const ListUserLevelsOfSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserLevelsOfSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::MakeCallResult> MakeCallOutcome;
			typedef std::future<MakeCallOutcome> MakeCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::MakeCallRequest&, const MakeCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MakeCallAsyncHandler;
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
			typedef Outcome<Error, Model::PickOutboundNumbersResult> PickOutboundNumbersOutcome;
			typedef std::future<PickOutboundNumbersOutcome> PickOutboundNumbersOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PickOutboundNumbersRequest&, const PickOutboundNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PickOutboundNumbersAsyncHandler;
			typedef Outcome<Error, Model::PollUserStatusResult> PollUserStatusOutcome;
			typedef std::future<PollUserStatusOutcome> PollUserStatusOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::PollUserStatusRequest&, const PollUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PollUserStatusAsyncHandler;
			typedef Outcome<Error, Model::ReadyForServiceResult> ReadyForServiceOutcome;
			typedef std::future<ReadyForServiceOutcome> ReadyForServiceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ReadyForServiceRequest&, const ReadyForServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReadyForServiceAsyncHandler;
			typedef Outcome<Error, Model::RegisterDeviceResult> RegisterDeviceOutcome;
			typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RegisterDeviceRequest&, const RegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseCallResult> ReleaseCallOutcome;
			typedef std::future<ReleaseCallOutcome> ReleaseCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ReleaseCallRequest&, const ReleaseCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseCallAsyncHandler;
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
			typedef Outcome<Error, Model::TakeBreakResult> TakeBreakOutcome;
			typedef std::future<TakeBreakOutcome> TakeBreakOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::TakeBreakRequest&, const TakeBreakOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TakeBreakAsyncHandler;
			typedef Outcome<Error, Model::UnmuteCallResult> UnmuteCallOutcome;
			typedef std::future<UnmuteCallOutcome> UnmuteCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::UnmuteCallRequest&, const UnmuteCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnmuteCallAsyncHandler;
			typedef Outcome<Error, Model::UpdateConfigItemsResult> UpdateConfigItemsOutcome;
			typedef std::future<UpdateConfigItemsOutcome> UpdateConfigItemsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::UpdateConfigItemsRequest&, const UpdateConfigItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigItemsAsyncHandler;

			CCCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CCCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CCCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CCCClient();
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
			AssignUsersOutcome assignUsers(const Model::AssignUsersRequest &request)const;
			void assignUsersAsync(const Model::AssignUsersRequest& request, const AssignUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignUsersOutcomeCallable assignUsersCallable(const Model::AssignUsersRequest& request) const;
			BargeInCallOutcome bargeInCall(const Model::BargeInCallRequest &request)const;
			void bargeInCallAsync(const Model::BargeInCallRequest& request, const BargeInCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BargeInCallOutcomeCallable bargeInCallCallable(const Model::BargeInCallRequest& request) const;
			BlindTransferOutcome blindTransfer(const Model::BlindTransferRequest &request)const;
			void blindTransferAsync(const Model::BlindTransferRequest& request, const BlindTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BlindTransferOutcomeCallable blindTransferCallable(const Model::BlindTransferRequest& request) const;
			CancelAttendedTransferOutcome cancelAttendedTransfer(const Model::CancelAttendedTransferRequest &request)const;
			void cancelAttendedTransferAsync(const Model::CancelAttendedTransferRequest& request, const CancelAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelAttendedTransferOutcomeCallable cancelAttendedTransferCallable(const Model::CancelAttendedTransferRequest& request) const;
			ChangeWorkModeOutcome changeWorkMode(const Model::ChangeWorkModeRequest &request)const;
			void changeWorkModeAsync(const Model::ChangeWorkModeRequest& request, const ChangeWorkModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeWorkModeOutcomeCallable changeWorkModeCallable(const Model::ChangeWorkModeRequest& request) const;
			CoachCallOutcome coachCall(const Model::CoachCallRequest &request)const;
			void coachCallAsync(const Model::CoachCallRequest& request, const CoachCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CoachCallOutcomeCallable coachCallCallable(const Model::CoachCallRequest& request) const;
			CompleteAttendedTransferOutcome completeAttendedTransfer(const Model::CompleteAttendedTransferRequest &request)const;
			void completeAttendedTransferAsync(const Model::CompleteAttendedTransferRequest& request, const CompleteAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompleteAttendedTransferOutcomeCallable completeAttendedTransferCallable(const Model::CompleteAttendedTransferRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateSkillGroupOutcome createSkillGroup(const Model::CreateSkillGroupRequest &request)const;
			void createSkillGroupAsync(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSkillGroupOutcomeCallable createSkillGroupCallable(const Model::CreateSkillGroupRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			DeleteSkillGroupOutcome deleteSkillGroup(const Model::DeleteSkillGroupRequest &request)const;
			void deleteSkillGroupAsync(const Model::DeleteSkillGroupRequest& request, const DeleteSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSkillGroupOutcomeCallable deleteSkillGroupCallable(const Model::DeleteSkillGroupRequest& request) const;
			GetCallDetailRecordOutcome getCallDetailRecord(const Model::GetCallDetailRecordRequest &request)const;
			void getCallDetailRecordAsync(const Model::GetCallDetailRecordRequest& request, const GetCallDetailRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCallDetailRecordOutcomeCallable getCallDetailRecordCallable(const Model::GetCallDetailRecordRequest& request) const;
			GetHistoricalCallerReportOutcome getHistoricalCallerReport(const Model::GetHistoricalCallerReportRequest &request)const;
			void getHistoricalCallerReportAsync(const Model::GetHistoricalCallerReportRequest& request, const GetHistoricalCallerReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHistoricalCallerReportOutcomeCallable getHistoricalCallerReportCallable(const Model::GetHistoricalCallerReportRequest& request) const;
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
			GetRealtimeInstanceStatesOutcome getRealtimeInstanceStates(const Model::GetRealtimeInstanceStatesRequest &request)const;
			void getRealtimeInstanceStatesAsync(const Model::GetRealtimeInstanceStatesRequest& request, const GetRealtimeInstanceStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRealtimeInstanceStatesOutcomeCallable getRealtimeInstanceStatesCallable(const Model::GetRealtimeInstanceStatesRequest& request) const;
			GetTurnCredentialsOutcome getTurnCredentials(const Model::GetTurnCredentialsRequest &request)const;
			void getTurnCredentialsAsync(const Model::GetTurnCredentialsRequest& request, const GetTurnCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTurnCredentialsOutcomeCallable getTurnCredentialsCallable(const Model::GetTurnCredentialsRequest& request) const;
			GetTurnServerListOutcome getTurnServerList(const Model::GetTurnServerListRequest &request)const;
			void getTurnServerListAsync(const Model::GetTurnServerListRequest& request, const GetTurnServerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTurnServerListOutcomeCallable getTurnServerListCallable(const Model::GetTurnServerListRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			HoldCallOutcome holdCall(const Model::HoldCallRequest &request)const;
			void holdCallAsync(const Model::HoldCallRequest& request, const HoldCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HoldCallOutcomeCallable holdCallCallable(const Model::HoldCallRequest& request) const;
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
			ListBriefSkillGroupsOutcome listBriefSkillGroups(const Model::ListBriefSkillGroupsRequest &request)const;
			void listBriefSkillGroupsAsync(const Model::ListBriefSkillGroupsRequest& request, const ListBriefSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBriefSkillGroupsOutcomeCallable listBriefSkillGroupsCallable(const Model::ListBriefSkillGroupsRequest& request) const;
			ListCallDetailRecordsOutcome listCallDetailRecords(const Model::ListCallDetailRecordsRequest &request)const;
			void listCallDetailRecordsAsync(const Model::ListCallDetailRecordsRequest& request, const ListCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallDetailRecordsOutcomeCallable listCallDetailRecordsCallable(const Model::ListCallDetailRecordsRequest& request) const;
			ListConfigItemsOutcome listConfigItems(const Model::ListConfigItemsRequest &request)const;
			void listConfigItemsAsync(const Model::ListConfigItemsRequest& request, const ListConfigItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigItemsOutcomeCallable listConfigItemsCallable(const Model::ListConfigItemsRequest& request) const;
			ListContactFlowsOutcome listContactFlows(const Model::ListContactFlowsRequest &request)const;
			void listContactFlowsAsync(const Model::ListContactFlowsRequest& request, const ListContactFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListContactFlowsOutcomeCallable listContactFlowsCallable(const Model::ListContactFlowsRequest& request) const;
			ListDevicesOutcome listDevices(const Model::ListDevicesRequest &request)const;
			void listDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicesOutcomeCallable listDevicesCallable(const Model::ListDevicesRequest& request) const;
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
			ListSkillGroupsOutcome listSkillGroups(const Model::ListSkillGroupsRequest &request)const;
			void listSkillGroupsAsync(const Model::ListSkillGroupsRequest& request, const ListSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupsOutcomeCallable listSkillGroupsCallable(const Model::ListSkillGroupsRequest& request) const;
			ListSkillLevelsOfUserOutcome listSkillLevelsOfUser(const Model::ListSkillLevelsOfUserRequest &request)const;
			void listSkillLevelsOfUserAsync(const Model::ListSkillLevelsOfUserRequest& request, const ListSkillLevelsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillLevelsOfUserOutcomeCallable listSkillLevelsOfUserCallable(const Model::ListSkillLevelsOfUserRequest& request) const;
			ListUserLevelsOfSkillGroupOutcome listUserLevelsOfSkillGroup(const Model::ListUserLevelsOfSkillGroupRequest &request)const;
			void listUserLevelsOfSkillGroupAsync(const Model::ListUserLevelsOfSkillGroupRequest& request, const ListUserLevelsOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserLevelsOfSkillGroupOutcomeCallable listUserLevelsOfSkillGroupCallable(const Model::ListUserLevelsOfSkillGroupRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			MakeCallOutcome makeCall(const Model::MakeCallRequest &request)const;
			void makeCallAsync(const Model::MakeCallRequest& request, const MakeCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MakeCallOutcomeCallable makeCallCallable(const Model::MakeCallRequest& request) const;
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
			PickOutboundNumbersOutcome pickOutboundNumbers(const Model::PickOutboundNumbersRequest &request)const;
			void pickOutboundNumbersAsync(const Model::PickOutboundNumbersRequest& request, const PickOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PickOutboundNumbersOutcomeCallable pickOutboundNumbersCallable(const Model::PickOutboundNumbersRequest& request) const;
			PollUserStatusOutcome pollUserStatus(const Model::PollUserStatusRequest &request)const;
			void pollUserStatusAsync(const Model::PollUserStatusRequest& request, const PollUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PollUserStatusOutcomeCallable pollUserStatusCallable(const Model::PollUserStatusRequest& request) const;
			ReadyForServiceOutcome readyForService(const Model::ReadyForServiceRequest &request)const;
			void readyForServiceAsync(const Model::ReadyForServiceRequest& request, const ReadyForServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReadyForServiceOutcomeCallable readyForServiceCallable(const Model::ReadyForServiceRequest& request) const;
			RegisterDeviceOutcome registerDevice(const Model::RegisterDeviceRequest &request)const;
			void registerDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDeviceOutcomeCallable registerDeviceCallable(const Model::RegisterDeviceRequest& request) const;
			ReleaseCallOutcome releaseCall(const Model::ReleaseCallRequest &request)const;
			void releaseCallAsync(const Model::ReleaseCallRequest& request, const ReleaseCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseCallOutcomeCallable releaseCallCallable(const Model::ReleaseCallRequest& request) const;
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
			TakeBreakOutcome takeBreak(const Model::TakeBreakRequest &request)const;
			void takeBreakAsync(const Model::TakeBreakRequest& request, const TakeBreakAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TakeBreakOutcomeCallable takeBreakCallable(const Model::TakeBreakRequest& request) const;
			UnmuteCallOutcome unmuteCall(const Model::UnmuteCallRequest &request)const;
			void unmuteCallAsync(const Model::UnmuteCallRequest& request, const UnmuteCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnmuteCallOutcomeCallable unmuteCallCallable(const Model::UnmuteCallRequest& request) const;
			UpdateConfigItemsOutcome updateConfigItems(const Model::UpdateConfigItemsRequest &request)const;
			void updateConfigItemsAsync(const Model::UpdateConfigItemsRequest& request, const UpdateConfigItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConfigItemsOutcomeCallable updateConfigItemsCallable(const Model::UpdateConfigItemsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CCC_CCCCLIENT_H_
