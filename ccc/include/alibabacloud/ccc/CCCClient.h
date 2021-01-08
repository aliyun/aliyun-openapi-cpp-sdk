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
#include "model/AnswerCallRequest.h"
#include "model/AnswerCallResult.h"
#include "model/BargeInCallRequest.h"
#include "model/BargeInCallResult.h"
#include "model/BlindTransferRequest.h"
#include "model/BlindTransferResult.h"
#include "model/CancelAttendedTransferRequest.h"
#include "model/CancelAttendedTransferResult.h"
#include "model/ChangeWorkModeRequest.h"
#include "model/ChangeWorkModeResult.h"
#include "model/CompleteAttendedTransferRequest.h"
#include "model/CompleteAttendedTransferResult.h"
#include "model/GetLoginDetailsRequest.h"
#include "model/GetLoginDetailsResult.h"
#include "model/GetNumberLocationRequest.h"
#include "model/GetNumberLocationResult.h"
#include "model/GetTurnCredentialsRequest.h"
#include "model/GetTurnCredentialsResult.h"
#include "model/GetTurnServerListRequest.h"
#include "model/GetTurnServerListResult.h"
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
#include "model/ListBriefSkillGroupsRequest.h"
#include "model/ListBriefSkillGroupsResult.h"
#include "model/ListCallDetailRecordsRequest.h"
#include "model/ListCallDetailRecordsResult.h"
#include "model/ListConfigItemsRequest.h"
#include "model/ListConfigItemsResult.h"
#include "model/ListDevicesRequest.h"
#include "model/ListDevicesResult.h"
#include "model/ListHistoricalAgentReportRequest.h"
#include "model/ListHistoricalAgentReportResult.h"
#include "model/ListOutboundNumbersOfUserRequest.h"
#include "model/ListOutboundNumbersOfUserResult.h"
#include "model/ListPrivilegesOfUserRequest.h"
#include "model/ListPrivilegesOfUserResult.h"
#include "model/ListRealtimeAgentStatesRequest.h"
#include "model/ListRealtimeAgentStatesResult.h"
#include "model/ListRecentCallDetailRecordsRequest.h"
#include "model/ListRecentCallDetailRecordsResult.h"
#include "model/ListSkillLevelsOfUserRequest.h"
#include "model/ListSkillLevelsOfUserResult.h"
#include "model/MakeCallRequest.h"
#include "model/MakeCallResult.h"
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
#include "model/ResetAgentStateRequest.h"
#include "model/ResetAgentStateResult.h"
#include "model/RetrieveCallRequest.h"
#include "model/RetrieveCallResult.h"
#include "model/SendDtmfSignalingRequest.h"
#include "model/SendDtmfSignalingResult.h"
#include "model/SignInGroupRequest.h"
#include "model/SignInGroupResult.h"
#include "model/SignOutGroupRequest.h"
#include "model/SignOutGroupResult.h"
#include "model/TakeBreakRequest.h"
#include "model/TakeBreakResult.h"
#include "model/UnmuteCallRequest.h"
#include "model/UnmuteCallResult.h"


namespace AlibabaCloud
{
	namespace CCC
	{
		class ALIBABACLOUD_CCC_EXPORT CCCClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AnswerCallResult> AnswerCallOutcome;
			typedef std::future<AnswerCallOutcome> AnswerCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::AnswerCallRequest&, const AnswerCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AnswerCallAsyncHandler;
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
			typedef Outcome<Error, Model::CompleteAttendedTransferResult> CompleteAttendedTransferOutcome;
			typedef std::future<CompleteAttendedTransferOutcome> CompleteAttendedTransferOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::CompleteAttendedTransferRequest&, const CompleteAttendedTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompleteAttendedTransferAsyncHandler;
			typedef Outcome<Error, Model::GetLoginDetailsResult> GetLoginDetailsOutcome;
			typedef std::future<GetLoginDetailsOutcome> GetLoginDetailsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetLoginDetailsRequest&, const GetLoginDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoginDetailsAsyncHandler;
			typedef Outcome<Error, Model::GetNumberLocationResult> GetNumberLocationOutcome;
			typedef std::future<GetNumberLocationOutcome> GetNumberLocationOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetNumberLocationRequest&, const GetNumberLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNumberLocationAsyncHandler;
			typedef Outcome<Error, Model::GetTurnCredentialsResult> GetTurnCredentialsOutcome;
			typedef std::future<GetTurnCredentialsOutcome> GetTurnCredentialsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTurnCredentialsRequest&, const GetTurnCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTurnCredentialsAsyncHandler;
			typedef Outcome<Error, Model::GetTurnServerListResult> GetTurnServerListOutcome;
			typedef std::future<GetTurnServerListOutcome> GetTurnServerListOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::GetTurnServerListRequest&, const GetTurnServerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTurnServerListAsyncHandler;
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
			typedef Outcome<Error, Model::ListBriefSkillGroupsResult> ListBriefSkillGroupsOutcome;
			typedef std::future<ListBriefSkillGroupsOutcome> ListBriefSkillGroupsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListBriefSkillGroupsRequest&, const ListBriefSkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBriefSkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListCallDetailRecordsResult> ListCallDetailRecordsOutcome;
			typedef std::future<ListCallDetailRecordsOutcome> ListCallDetailRecordsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListCallDetailRecordsRequest&, const ListCallDetailRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallDetailRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListConfigItemsResult> ListConfigItemsOutcome;
			typedef std::future<ListConfigItemsOutcome> ListConfigItemsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListConfigItemsRequest&, const ListConfigItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigItemsAsyncHandler;
			typedef Outcome<Error, Model::ListDevicesResult> ListDevicesOutcome;
			typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListDevicesRequest&, const ListDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicesAsyncHandler;
			typedef Outcome<Error, Model::ListHistoricalAgentReportResult> ListHistoricalAgentReportOutcome;
			typedef std::future<ListHistoricalAgentReportOutcome> ListHistoricalAgentReportOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListHistoricalAgentReportRequest&, const ListHistoricalAgentReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHistoricalAgentReportAsyncHandler;
			typedef Outcome<Error, Model::ListOutboundNumbersOfUserResult> ListOutboundNumbersOfUserOutcome;
			typedef std::future<ListOutboundNumbersOfUserOutcome> ListOutboundNumbersOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListOutboundNumbersOfUserRequest&, const ListOutboundNumbersOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOutboundNumbersOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListPrivilegesOfUserResult> ListPrivilegesOfUserOutcome;
			typedef std::future<ListPrivilegesOfUserOutcome> ListPrivilegesOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListPrivilegesOfUserRequest&, const ListPrivilegesOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivilegesOfUserAsyncHandler;
			typedef Outcome<Error, Model::ListRealtimeAgentStatesResult> ListRealtimeAgentStatesOutcome;
			typedef std::future<ListRealtimeAgentStatesOutcome> ListRealtimeAgentStatesOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRealtimeAgentStatesRequest&, const ListRealtimeAgentStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRealtimeAgentStatesAsyncHandler;
			typedef Outcome<Error, Model::ListRecentCallDetailRecordsResult> ListRecentCallDetailRecordsOutcome;
			typedef std::future<ListRecentCallDetailRecordsOutcome> ListRecentCallDetailRecordsOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListRecentCallDetailRecordsRequest&, const ListRecentCallDetailRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecentCallDetailRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListSkillLevelsOfUserResult> ListSkillLevelsOfUserOutcome;
			typedef std::future<ListSkillLevelsOfUserOutcome> ListSkillLevelsOfUserOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ListSkillLevelsOfUserRequest&, const ListSkillLevelsOfUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillLevelsOfUserAsyncHandler;
			typedef Outcome<Error, Model::MakeCallResult> MakeCallOutcome;
			typedef std::future<MakeCallOutcome> MakeCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::MakeCallRequest&, const MakeCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MakeCallAsyncHandler;
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
			typedef Outcome<Error, Model::ResetAgentStateResult> ResetAgentStateOutcome;
			typedef std::future<ResetAgentStateOutcome> ResetAgentStateOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::ResetAgentStateRequest&, const ResetAgentStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAgentStateAsyncHandler;
			typedef Outcome<Error, Model::RetrieveCallResult> RetrieveCallOutcome;
			typedef std::future<RetrieveCallOutcome> RetrieveCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::RetrieveCallRequest&, const RetrieveCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetrieveCallAsyncHandler;
			typedef Outcome<Error, Model::SendDtmfSignalingResult> SendDtmfSignalingOutcome;
			typedef std::future<SendDtmfSignalingOutcome> SendDtmfSignalingOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SendDtmfSignalingRequest&, const SendDtmfSignalingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendDtmfSignalingAsyncHandler;
			typedef Outcome<Error, Model::SignInGroupResult> SignInGroupOutcome;
			typedef std::future<SignInGroupOutcome> SignInGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SignInGroupRequest&, const SignInGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignInGroupAsyncHandler;
			typedef Outcome<Error, Model::SignOutGroupResult> SignOutGroupOutcome;
			typedef std::future<SignOutGroupOutcome> SignOutGroupOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::SignOutGroupRequest&, const SignOutGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignOutGroupAsyncHandler;
			typedef Outcome<Error, Model::TakeBreakResult> TakeBreakOutcome;
			typedef std::future<TakeBreakOutcome> TakeBreakOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::TakeBreakRequest&, const TakeBreakOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TakeBreakAsyncHandler;
			typedef Outcome<Error, Model::UnmuteCallResult> UnmuteCallOutcome;
			typedef std::future<UnmuteCallOutcome> UnmuteCallOutcomeCallable;
			typedef std::function<void(const CCCClient*, const Model::UnmuteCallRequest&, const UnmuteCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnmuteCallAsyncHandler;

			CCCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CCCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CCCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CCCClient();
			AnswerCallOutcome answerCall(const Model::AnswerCallRequest &request)const;
			void answerCallAsync(const Model::AnswerCallRequest& request, const AnswerCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AnswerCallOutcomeCallable answerCallCallable(const Model::AnswerCallRequest& request) const;
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
			CompleteAttendedTransferOutcome completeAttendedTransfer(const Model::CompleteAttendedTransferRequest &request)const;
			void completeAttendedTransferAsync(const Model::CompleteAttendedTransferRequest& request, const CompleteAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompleteAttendedTransferOutcomeCallable completeAttendedTransferCallable(const Model::CompleteAttendedTransferRequest& request) const;
			GetLoginDetailsOutcome getLoginDetails(const Model::GetLoginDetailsRequest &request)const;
			void getLoginDetailsAsync(const Model::GetLoginDetailsRequest& request, const GetLoginDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoginDetailsOutcomeCallable getLoginDetailsCallable(const Model::GetLoginDetailsRequest& request) const;
			GetNumberLocationOutcome getNumberLocation(const Model::GetNumberLocationRequest &request)const;
			void getNumberLocationAsync(const Model::GetNumberLocationRequest& request, const GetNumberLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNumberLocationOutcomeCallable getNumberLocationCallable(const Model::GetNumberLocationRequest& request) const;
			GetTurnCredentialsOutcome getTurnCredentials(const Model::GetTurnCredentialsRequest &request)const;
			void getTurnCredentialsAsync(const Model::GetTurnCredentialsRequest& request, const GetTurnCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTurnCredentialsOutcomeCallable getTurnCredentialsCallable(const Model::GetTurnCredentialsRequest& request) const;
			GetTurnServerListOutcome getTurnServerList(const Model::GetTurnServerListRequest &request)const;
			void getTurnServerListAsync(const Model::GetTurnServerListRequest& request, const GetTurnServerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTurnServerListOutcomeCallable getTurnServerListCallable(const Model::GetTurnServerListRequest& request) const;
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
			ListBriefSkillGroupsOutcome listBriefSkillGroups(const Model::ListBriefSkillGroupsRequest &request)const;
			void listBriefSkillGroupsAsync(const Model::ListBriefSkillGroupsRequest& request, const ListBriefSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBriefSkillGroupsOutcomeCallable listBriefSkillGroupsCallable(const Model::ListBriefSkillGroupsRequest& request) const;
			ListCallDetailRecordsOutcome listCallDetailRecords(const Model::ListCallDetailRecordsRequest &request)const;
			void listCallDetailRecordsAsync(const Model::ListCallDetailRecordsRequest& request, const ListCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallDetailRecordsOutcomeCallable listCallDetailRecordsCallable(const Model::ListCallDetailRecordsRequest& request) const;
			ListConfigItemsOutcome listConfigItems(const Model::ListConfigItemsRequest &request)const;
			void listConfigItemsAsync(const Model::ListConfigItemsRequest& request, const ListConfigItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigItemsOutcomeCallable listConfigItemsCallable(const Model::ListConfigItemsRequest& request) const;
			ListDevicesOutcome listDevices(const Model::ListDevicesRequest &request)const;
			void listDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicesOutcomeCallable listDevicesCallable(const Model::ListDevicesRequest& request) const;
			ListHistoricalAgentReportOutcome listHistoricalAgentReport(const Model::ListHistoricalAgentReportRequest &request)const;
			void listHistoricalAgentReportAsync(const Model::ListHistoricalAgentReportRequest& request, const ListHistoricalAgentReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHistoricalAgentReportOutcomeCallable listHistoricalAgentReportCallable(const Model::ListHistoricalAgentReportRequest& request) const;
			ListOutboundNumbersOfUserOutcome listOutboundNumbersOfUser(const Model::ListOutboundNumbersOfUserRequest &request)const;
			void listOutboundNumbersOfUserAsync(const Model::ListOutboundNumbersOfUserRequest& request, const ListOutboundNumbersOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOutboundNumbersOfUserOutcomeCallable listOutboundNumbersOfUserCallable(const Model::ListOutboundNumbersOfUserRequest& request) const;
			ListPrivilegesOfUserOutcome listPrivilegesOfUser(const Model::ListPrivilegesOfUserRequest &request)const;
			void listPrivilegesOfUserAsync(const Model::ListPrivilegesOfUserRequest& request, const ListPrivilegesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivilegesOfUserOutcomeCallable listPrivilegesOfUserCallable(const Model::ListPrivilegesOfUserRequest& request) const;
			ListRealtimeAgentStatesOutcome listRealtimeAgentStates(const Model::ListRealtimeAgentStatesRequest &request)const;
			void listRealtimeAgentStatesAsync(const Model::ListRealtimeAgentStatesRequest& request, const ListRealtimeAgentStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRealtimeAgentStatesOutcomeCallable listRealtimeAgentStatesCallable(const Model::ListRealtimeAgentStatesRequest& request) const;
			ListRecentCallDetailRecordsOutcome listRecentCallDetailRecords(const Model::ListRecentCallDetailRecordsRequest &request)const;
			void listRecentCallDetailRecordsAsync(const Model::ListRecentCallDetailRecordsRequest& request, const ListRecentCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecentCallDetailRecordsOutcomeCallable listRecentCallDetailRecordsCallable(const Model::ListRecentCallDetailRecordsRequest& request) const;
			ListSkillLevelsOfUserOutcome listSkillLevelsOfUser(const Model::ListSkillLevelsOfUserRequest &request)const;
			void listSkillLevelsOfUserAsync(const Model::ListSkillLevelsOfUserRequest& request, const ListSkillLevelsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillLevelsOfUserOutcomeCallable listSkillLevelsOfUserCallable(const Model::ListSkillLevelsOfUserRequest& request) const;
			MakeCallOutcome makeCall(const Model::MakeCallRequest &request)const;
			void makeCallAsync(const Model::MakeCallRequest& request, const MakeCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MakeCallOutcomeCallable makeCallCallable(const Model::MakeCallRequest& request) const;
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
			ResetAgentStateOutcome resetAgentState(const Model::ResetAgentStateRequest &request)const;
			void resetAgentStateAsync(const Model::ResetAgentStateRequest& request, const ResetAgentStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAgentStateOutcomeCallable resetAgentStateCallable(const Model::ResetAgentStateRequest& request) const;
			RetrieveCallOutcome retrieveCall(const Model::RetrieveCallRequest &request)const;
			void retrieveCallAsync(const Model::RetrieveCallRequest& request, const RetrieveCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetrieveCallOutcomeCallable retrieveCallCallable(const Model::RetrieveCallRequest& request) const;
			SendDtmfSignalingOutcome sendDtmfSignaling(const Model::SendDtmfSignalingRequest &request)const;
			void sendDtmfSignalingAsync(const Model::SendDtmfSignalingRequest& request, const SendDtmfSignalingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendDtmfSignalingOutcomeCallable sendDtmfSignalingCallable(const Model::SendDtmfSignalingRequest& request) const;
			SignInGroupOutcome signInGroup(const Model::SignInGroupRequest &request)const;
			void signInGroupAsync(const Model::SignInGroupRequest& request, const SignInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignInGroupOutcomeCallable signInGroupCallable(const Model::SignInGroupRequest& request) const;
			SignOutGroupOutcome signOutGroup(const Model::SignOutGroupRequest &request)const;
			void signOutGroupAsync(const Model::SignOutGroupRequest& request, const SignOutGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignOutGroupOutcomeCallable signOutGroupCallable(const Model::SignOutGroupRequest& request) const;
			TakeBreakOutcome takeBreak(const Model::TakeBreakRequest &request)const;
			void takeBreakAsync(const Model::TakeBreakRequest& request, const TakeBreakAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TakeBreakOutcomeCallable takeBreakCallable(const Model::TakeBreakRequest& request) const;
			UnmuteCallOutcome unmuteCall(const Model::UnmuteCallRequest &request)const;
			void unmuteCallAsync(const Model::UnmuteCallRequest& request, const UnmuteCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnmuteCallOutcomeCallable unmuteCallCallable(const Model::UnmuteCallRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CCC_CCCCLIENT_H_
