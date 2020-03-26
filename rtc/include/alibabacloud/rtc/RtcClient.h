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

#ifndef ALIBABACLOUD_RTC_RTCCLIENT_H_
#define ALIBABACLOUD_RTC_RTCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "RtcExport.h"
#include "model/CreateChannelRequest.h"
#include "model/CreateChannelResult.h"
#include "model/CreateConferenceRequest.h"
#include "model/CreateConferenceResult.h"
#include "model/CreateMAURuleRequest.h"
#include "model/CreateMAURuleResult.h"
#include "model/CreateTemplateRequest.h"
#include "model/CreateTemplateResult.h"
#include "model/DeleteChannelRequest.h"
#include "model/DeleteChannelResult.h"
#include "model/DeleteConferenceRequest.h"
#include "model/DeleteConferenceResult.h"
#include "model/DeleteMAURuleRequest.h"
#include "model/DeleteMAURuleResult.h"
#include "model/DeleteTemplateRequest.h"
#include "model/DeleteTemplateResult.h"
#include "model/DescribeAppsRequest.h"
#include "model/DescribeAppsResult.h"
#include "model/DescribeChannelParticipantsRequest.h"
#include "model/DescribeChannelParticipantsResult.h"
#include "model/DescribeChannelUsersRequest.h"
#include "model/DescribeChannelUsersResult.h"
#include "model/DescribeConferenceAuthInfoRequest.h"
#include "model/DescribeConferenceAuthInfoResult.h"
#include "model/DescribeMAURuleRequest.h"
#include "model/DescribeMAURuleResult.h"
#include "model/DescribeRTCAppKeyRequest.h"
#include "model/DescribeRTCAppKeyResult.h"
#include "model/DescribeRtcChannelCntDataRequest.h"
#include "model/DescribeRtcChannelCntDataResult.h"
#include "model/DescribeRtcChannelListRequest.h"
#include "model/DescribeRtcChannelListResult.h"
#include "model/DescribeRtcChannelMetricRequest.h"
#include "model/DescribeRtcChannelMetricResult.h"
#include "model/DescribeRtcChannelUserListRequest.h"
#include "model/DescribeRtcChannelUserListResult.h"
#include "model/DescribeRtcDurationDataRequest.h"
#include "model/DescribeRtcDurationDataResult.h"
#include "model/DescribeRtcPeakChannelCntDataRequest.h"
#include "model/DescribeRtcPeakChannelCntDataResult.h"
#include "model/DescribeRtcPeakUserCntDataRequest.h"
#include "model/DescribeRtcPeakUserCntDataResult.h"
#include "model/DescribeRtcQualityMetricRequest.h"
#include "model/DescribeRtcQualityMetricResult.h"
#include "model/DescribeRtcUserCntDataRequest.h"
#include "model/DescribeRtcUserCntDataResult.h"
#include "model/DescribeRtcUserListRequest.h"
#include "model/DescribeRtcUserListResult.h"
#include "model/DescribeUserInfoInChannelRequest.h"
#include "model/DescribeUserInfoInChannelResult.h"
#include "model/DisableMAURuleRequest.h"
#include "model/DisableMAURuleResult.h"
#include "model/EnableMAURuleRequest.h"
#include "model/EnableMAURuleResult.h"
#include "model/GetMPUTaskStatusRequest.h"
#include "model/GetMPUTaskStatusResult.h"
#include "model/GetTaskStatusRequest.h"
#include "model/GetTaskStatusResult.h"
#include "model/ModifyAppRequest.h"
#include "model/ModifyAppResult.h"
#include "model/ModifyConferenceRequest.h"
#include "model/ModifyConferenceResult.h"
#include "model/MuteAudioRequest.h"
#include "model/MuteAudioResult.h"
#include "model/MuteAudioAllRequest.h"
#include "model/MuteAudioAllResult.h"
#include "model/ReceiveNotifyRequest.h"
#include "model/ReceiveNotifyResult.h"
#include "model/RemoveParticipantsRequest.h"
#include "model/RemoveParticipantsResult.h"
#include "model/RemoveTerminalsRequest.h"
#include "model/RemoveTerminalsResult.h"
#include "model/SetChannelPropertyRequest.h"
#include "model/SetChannelPropertyResult.h"
#include "model/StartMPUTaskRequest.h"
#include "model/StartMPUTaskResult.h"
#include "model/StartTaskRequest.h"
#include "model/StartTaskResult.h"
#include "model/StopMPUTaskRequest.h"
#include "model/StopMPUTaskResult.h"
#include "model/StopTaskRequest.h"
#include "model/StopTaskResult.h"
#include "model/UnmuteAudioRequest.h"
#include "model/UnmuteAudioResult.h"
#include "model/UnmuteAudioAllRequest.h"
#include "model/UnmuteAudioAllResult.h"
#include "model/UpdateChannelRequest.h"
#include "model/UpdateChannelResult.h"
#include "model/UpdateMPULayoutRequest.h"
#include "model/UpdateMPULayoutResult.h"


namespace AlibabaCloud
{
	namespace Rtc
	{
		class ALIBABACLOUD_RTC_EXPORT RtcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateChannelResult> CreateChannelOutcome;
			typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateChannelRequest&, const CreateChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelAsyncHandler;
			typedef Outcome<Error, Model::CreateConferenceResult> CreateConferenceOutcome;
			typedef std::future<CreateConferenceOutcome> CreateConferenceOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateConferenceRequest&, const CreateConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConferenceAsyncHandler;
			typedef Outcome<Error, Model::CreateMAURuleResult> CreateMAURuleOutcome;
			typedef std::future<CreateMAURuleOutcome> CreateMAURuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateMAURuleRequest&, const CreateMAURuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMAURuleAsyncHandler;
			typedef Outcome<Error, Model::CreateTemplateResult> CreateTemplateOutcome;
			typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateTemplateRequest&, const CreateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteChannelResult> DeleteChannelOutcome;
			typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteChannelRequest&, const DeleteChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChannelAsyncHandler;
			typedef Outcome<Error, Model::DeleteConferenceResult> DeleteConferenceOutcome;
			typedef std::future<DeleteConferenceOutcome> DeleteConferenceOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteConferenceRequest&, const DeleteConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConferenceAsyncHandler;
			typedef Outcome<Error, Model::DeleteMAURuleResult> DeleteMAURuleOutcome;
			typedef std::future<DeleteMAURuleOutcome> DeleteMAURuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteMAURuleRequest&, const DeleteMAURuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMAURuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateResult> DeleteTemplateOutcome;
			typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteTemplateRequest&, const DeleteTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppsResult> DescribeAppsOutcome;
			typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeAppsRequest&, const DescribeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppsAsyncHandler;
			typedef Outcome<Error, Model::DescribeChannelParticipantsResult> DescribeChannelParticipantsOutcome;
			typedef std::future<DescribeChannelParticipantsOutcome> DescribeChannelParticipantsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeChannelParticipantsRequest&, const DescribeChannelParticipantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelParticipantsAsyncHandler;
			typedef Outcome<Error, Model::DescribeChannelUsersResult> DescribeChannelUsersOutcome;
			typedef std::future<DescribeChannelUsersOutcome> DescribeChannelUsersOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeChannelUsersRequest&, const DescribeChannelUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeConferenceAuthInfoResult> DescribeConferenceAuthInfoOutcome;
			typedef std::future<DescribeConferenceAuthInfoOutcome> DescribeConferenceAuthInfoOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeConferenceAuthInfoRequest&, const DescribeConferenceAuthInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConferenceAuthInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeMAURuleResult> DescribeMAURuleOutcome;
			typedef std::future<DescribeMAURuleOutcome> DescribeMAURuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeMAURuleRequest&, const DescribeMAURuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMAURuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeRTCAppKeyResult> DescribeRTCAppKeyOutcome;
			typedef std::future<DescribeRTCAppKeyOutcome> DescribeRTCAppKeyOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRTCAppKeyRequest&, const DescribeRTCAppKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRTCAppKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcChannelCntDataResult> DescribeRtcChannelCntDataOutcome;
			typedef std::future<DescribeRtcChannelCntDataOutcome> DescribeRtcChannelCntDataOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcChannelCntDataRequest&, const DescribeRtcChannelCntDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcChannelCntDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcChannelListResult> DescribeRtcChannelListOutcome;
			typedef std::future<DescribeRtcChannelListOutcome> DescribeRtcChannelListOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcChannelListRequest&, const DescribeRtcChannelListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcChannelListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcChannelMetricResult> DescribeRtcChannelMetricOutcome;
			typedef std::future<DescribeRtcChannelMetricOutcome> DescribeRtcChannelMetricOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcChannelMetricRequest&, const DescribeRtcChannelMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcChannelMetricAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcChannelUserListResult> DescribeRtcChannelUserListOutcome;
			typedef std::future<DescribeRtcChannelUserListOutcome> DescribeRtcChannelUserListOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcChannelUserListRequest&, const DescribeRtcChannelUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcChannelUserListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcDurationDataResult> DescribeRtcDurationDataOutcome;
			typedef std::future<DescribeRtcDurationDataOutcome> DescribeRtcDurationDataOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcDurationDataRequest&, const DescribeRtcDurationDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcDurationDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcPeakChannelCntDataResult> DescribeRtcPeakChannelCntDataOutcome;
			typedef std::future<DescribeRtcPeakChannelCntDataOutcome> DescribeRtcPeakChannelCntDataOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcPeakChannelCntDataRequest&, const DescribeRtcPeakChannelCntDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcPeakChannelCntDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcPeakUserCntDataResult> DescribeRtcPeakUserCntDataOutcome;
			typedef std::future<DescribeRtcPeakUserCntDataOutcome> DescribeRtcPeakUserCntDataOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcPeakUserCntDataRequest&, const DescribeRtcPeakUserCntDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcPeakUserCntDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcQualityMetricResult> DescribeRtcQualityMetricOutcome;
			typedef std::future<DescribeRtcQualityMetricOutcome> DescribeRtcQualityMetricOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcQualityMetricRequest&, const DescribeRtcQualityMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcQualityMetricAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcUserCntDataResult> DescribeRtcUserCntDataOutcome;
			typedef std::future<DescribeRtcUserCntDataOutcome> DescribeRtcUserCntDataOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcUserCntDataRequest&, const DescribeRtcUserCntDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcUserCntDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeRtcUserListResult> DescribeRtcUserListOutcome;
			typedef std::future<DescribeRtcUserListOutcome> DescribeRtcUserListOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRtcUserListRequest&, const DescribeRtcUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRtcUserListAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserInfoInChannelResult> DescribeUserInfoInChannelOutcome;
			typedef std::future<DescribeUserInfoInChannelOutcome> DescribeUserInfoInChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeUserInfoInChannelRequest&, const DescribeUserInfoInChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoInChannelAsyncHandler;
			typedef Outcome<Error, Model::DisableMAURuleResult> DisableMAURuleOutcome;
			typedef std::future<DisableMAURuleOutcome> DisableMAURuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DisableMAURuleRequest&, const DisableMAURuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableMAURuleAsyncHandler;
			typedef Outcome<Error, Model::EnableMAURuleResult> EnableMAURuleOutcome;
			typedef std::future<EnableMAURuleOutcome> EnableMAURuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::EnableMAURuleRequest&, const EnableMAURuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableMAURuleAsyncHandler;
			typedef Outcome<Error, Model::GetMPUTaskStatusResult> GetMPUTaskStatusOutcome;
			typedef std::future<GetMPUTaskStatusOutcome> GetMPUTaskStatusOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::GetMPUTaskStatusRequest&, const GetMPUTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMPUTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::GetTaskStatusResult> GetTaskStatusOutcome;
			typedef std::future<GetTaskStatusOutcome> GetTaskStatusOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::GetTaskStatusRequest&, const GetTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppResult> ModifyAppOutcome;
			typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::ModifyAppRequest&, const ModifyAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
			typedef Outcome<Error, Model::ModifyConferenceResult> ModifyConferenceOutcome;
			typedef std::future<ModifyConferenceOutcome> ModifyConferenceOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::ModifyConferenceRequest&, const ModifyConferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConferenceAsyncHandler;
			typedef Outcome<Error, Model::MuteAudioResult> MuteAudioOutcome;
			typedef std::future<MuteAudioOutcome> MuteAudioOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::MuteAudioRequest&, const MuteAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteAudioAsyncHandler;
			typedef Outcome<Error, Model::MuteAudioAllResult> MuteAudioAllOutcome;
			typedef std::future<MuteAudioAllOutcome> MuteAudioAllOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::MuteAudioAllRequest&, const MuteAudioAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MuteAudioAllAsyncHandler;
			typedef Outcome<Error, Model::ReceiveNotifyResult> ReceiveNotifyOutcome;
			typedef std::future<ReceiveNotifyOutcome> ReceiveNotifyOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::ReceiveNotifyRequest&, const ReceiveNotifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReceiveNotifyAsyncHandler;
			typedef Outcome<Error, Model::RemoveParticipantsResult> RemoveParticipantsOutcome;
			typedef std::future<RemoveParticipantsOutcome> RemoveParticipantsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::RemoveParticipantsRequest&, const RemoveParticipantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveParticipantsAsyncHandler;
			typedef Outcome<Error, Model::RemoveTerminalsResult> RemoveTerminalsOutcome;
			typedef std::future<RemoveTerminalsOutcome> RemoveTerminalsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::RemoveTerminalsRequest&, const RemoveTerminalsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTerminalsAsyncHandler;
			typedef Outcome<Error, Model::SetChannelPropertyResult> SetChannelPropertyOutcome;
			typedef std::future<SetChannelPropertyOutcome> SetChannelPropertyOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::SetChannelPropertyRequest&, const SetChannelPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetChannelPropertyAsyncHandler;
			typedef Outcome<Error, Model::StartMPUTaskResult> StartMPUTaskOutcome;
			typedef std::future<StartMPUTaskOutcome> StartMPUTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StartMPUTaskRequest&, const StartMPUTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartMPUTaskAsyncHandler;
			typedef Outcome<Error, Model::StartTaskResult> StartTaskOutcome;
			typedef std::future<StartTaskOutcome> StartTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StartTaskRequest&, const StartTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTaskAsyncHandler;
			typedef Outcome<Error, Model::StopMPUTaskResult> StopMPUTaskOutcome;
			typedef std::future<StopMPUTaskOutcome> StopMPUTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StopMPUTaskRequest&, const StopMPUTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMPUTaskAsyncHandler;
			typedef Outcome<Error, Model::StopTaskResult> StopTaskOutcome;
			typedef std::future<StopTaskOutcome> StopTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StopTaskRequest&, const StopTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopTaskAsyncHandler;
			typedef Outcome<Error, Model::UnmuteAudioResult> UnmuteAudioOutcome;
			typedef std::future<UnmuteAudioOutcome> UnmuteAudioOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UnmuteAudioRequest&, const UnmuteAudioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnmuteAudioAsyncHandler;
			typedef Outcome<Error, Model::UnmuteAudioAllResult> UnmuteAudioAllOutcome;
			typedef std::future<UnmuteAudioAllOutcome> UnmuteAudioAllOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UnmuteAudioAllRequest&, const UnmuteAudioAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnmuteAudioAllAsyncHandler;
			typedef Outcome<Error, Model::UpdateChannelResult> UpdateChannelOutcome;
			typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UpdateChannelRequest&, const UpdateChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateChannelAsyncHandler;
			typedef Outcome<Error, Model::UpdateMPULayoutResult> UpdateMPULayoutOutcome;
			typedef std::future<UpdateMPULayoutOutcome> UpdateMPULayoutOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UpdateMPULayoutRequest&, const UpdateMPULayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMPULayoutAsyncHandler;

			RtcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RtcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RtcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RtcClient();
			CreateChannelOutcome createChannel(const Model::CreateChannelRequest &request)const;
			void createChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateChannelOutcomeCallable createChannelCallable(const Model::CreateChannelRequest& request) const;
			CreateConferenceOutcome createConference(const Model::CreateConferenceRequest &request)const;
			void createConferenceAsync(const Model::CreateConferenceRequest& request, const CreateConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConferenceOutcomeCallable createConferenceCallable(const Model::CreateConferenceRequest& request) const;
			CreateMAURuleOutcome createMAURule(const Model::CreateMAURuleRequest &request)const;
			void createMAURuleAsync(const Model::CreateMAURuleRequest& request, const CreateMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMAURuleOutcomeCallable createMAURuleCallable(const Model::CreateMAURuleRequest& request) const;
			CreateTemplateOutcome createTemplate(const Model::CreateTemplateRequest &request)const;
			void createTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTemplateOutcomeCallable createTemplateCallable(const Model::CreateTemplateRequest& request) const;
			DeleteChannelOutcome deleteChannel(const Model::DeleteChannelRequest &request)const;
			void deleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteChannelOutcomeCallable deleteChannelCallable(const Model::DeleteChannelRequest& request) const;
			DeleteConferenceOutcome deleteConference(const Model::DeleteConferenceRequest &request)const;
			void deleteConferenceAsync(const Model::DeleteConferenceRequest& request, const DeleteConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConferenceOutcomeCallable deleteConferenceCallable(const Model::DeleteConferenceRequest& request) const;
			DeleteMAURuleOutcome deleteMAURule(const Model::DeleteMAURuleRequest &request)const;
			void deleteMAURuleAsync(const Model::DeleteMAURuleRequest& request, const DeleteMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMAURuleOutcomeCallable deleteMAURuleCallable(const Model::DeleteMAURuleRequest& request) const;
			DeleteTemplateOutcome deleteTemplate(const Model::DeleteTemplateRequest &request)const;
			void deleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateOutcomeCallable deleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;
			DescribeAppsOutcome describeApps(const Model::DescribeAppsRequest &request)const;
			void describeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppsOutcomeCallable describeAppsCallable(const Model::DescribeAppsRequest& request) const;
			DescribeChannelParticipantsOutcome describeChannelParticipants(const Model::DescribeChannelParticipantsRequest &request)const;
			void describeChannelParticipantsAsync(const Model::DescribeChannelParticipantsRequest& request, const DescribeChannelParticipantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChannelParticipantsOutcomeCallable describeChannelParticipantsCallable(const Model::DescribeChannelParticipantsRequest& request) const;
			DescribeChannelUsersOutcome describeChannelUsers(const Model::DescribeChannelUsersRequest &request)const;
			void describeChannelUsersAsync(const Model::DescribeChannelUsersRequest& request, const DescribeChannelUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChannelUsersOutcomeCallable describeChannelUsersCallable(const Model::DescribeChannelUsersRequest& request) const;
			DescribeConferenceAuthInfoOutcome describeConferenceAuthInfo(const Model::DescribeConferenceAuthInfoRequest &request)const;
			void describeConferenceAuthInfoAsync(const Model::DescribeConferenceAuthInfoRequest& request, const DescribeConferenceAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConferenceAuthInfoOutcomeCallable describeConferenceAuthInfoCallable(const Model::DescribeConferenceAuthInfoRequest& request) const;
			DescribeMAURuleOutcome describeMAURule(const Model::DescribeMAURuleRequest &request)const;
			void describeMAURuleAsync(const Model::DescribeMAURuleRequest& request, const DescribeMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMAURuleOutcomeCallable describeMAURuleCallable(const Model::DescribeMAURuleRequest& request) const;
			DescribeRTCAppKeyOutcome describeRTCAppKey(const Model::DescribeRTCAppKeyRequest &request)const;
			void describeRTCAppKeyAsync(const Model::DescribeRTCAppKeyRequest& request, const DescribeRTCAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRTCAppKeyOutcomeCallable describeRTCAppKeyCallable(const Model::DescribeRTCAppKeyRequest& request) const;
			DescribeRtcChannelCntDataOutcome describeRtcChannelCntData(const Model::DescribeRtcChannelCntDataRequest &request)const;
			void describeRtcChannelCntDataAsync(const Model::DescribeRtcChannelCntDataRequest& request, const DescribeRtcChannelCntDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcChannelCntDataOutcomeCallable describeRtcChannelCntDataCallable(const Model::DescribeRtcChannelCntDataRequest& request) const;
			DescribeRtcChannelListOutcome describeRtcChannelList(const Model::DescribeRtcChannelListRequest &request)const;
			void describeRtcChannelListAsync(const Model::DescribeRtcChannelListRequest& request, const DescribeRtcChannelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcChannelListOutcomeCallable describeRtcChannelListCallable(const Model::DescribeRtcChannelListRequest& request) const;
			DescribeRtcChannelMetricOutcome describeRtcChannelMetric(const Model::DescribeRtcChannelMetricRequest &request)const;
			void describeRtcChannelMetricAsync(const Model::DescribeRtcChannelMetricRequest& request, const DescribeRtcChannelMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcChannelMetricOutcomeCallable describeRtcChannelMetricCallable(const Model::DescribeRtcChannelMetricRequest& request) const;
			DescribeRtcChannelUserListOutcome describeRtcChannelUserList(const Model::DescribeRtcChannelUserListRequest &request)const;
			void describeRtcChannelUserListAsync(const Model::DescribeRtcChannelUserListRequest& request, const DescribeRtcChannelUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcChannelUserListOutcomeCallable describeRtcChannelUserListCallable(const Model::DescribeRtcChannelUserListRequest& request) const;
			DescribeRtcDurationDataOutcome describeRtcDurationData(const Model::DescribeRtcDurationDataRequest &request)const;
			void describeRtcDurationDataAsync(const Model::DescribeRtcDurationDataRequest& request, const DescribeRtcDurationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcDurationDataOutcomeCallable describeRtcDurationDataCallable(const Model::DescribeRtcDurationDataRequest& request) const;
			DescribeRtcPeakChannelCntDataOutcome describeRtcPeakChannelCntData(const Model::DescribeRtcPeakChannelCntDataRequest &request)const;
			void describeRtcPeakChannelCntDataAsync(const Model::DescribeRtcPeakChannelCntDataRequest& request, const DescribeRtcPeakChannelCntDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcPeakChannelCntDataOutcomeCallable describeRtcPeakChannelCntDataCallable(const Model::DescribeRtcPeakChannelCntDataRequest& request) const;
			DescribeRtcPeakUserCntDataOutcome describeRtcPeakUserCntData(const Model::DescribeRtcPeakUserCntDataRequest &request)const;
			void describeRtcPeakUserCntDataAsync(const Model::DescribeRtcPeakUserCntDataRequest& request, const DescribeRtcPeakUserCntDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcPeakUserCntDataOutcomeCallable describeRtcPeakUserCntDataCallable(const Model::DescribeRtcPeakUserCntDataRequest& request) const;
			DescribeRtcQualityMetricOutcome describeRtcQualityMetric(const Model::DescribeRtcQualityMetricRequest &request)const;
			void describeRtcQualityMetricAsync(const Model::DescribeRtcQualityMetricRequest& request, const DescribeRtcQualityMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcQualityMetricOutcomeCallable describeRtcQualityMetricCallable(const Model::DescribeRtcQualityMetricRequest& request) const;
			DescribeRtcUserCntDataOutcome describeRtcUserCntData(const Model::DescribeRtcUserCntDataRequest &request)const;
			void describeRtcUserCntDataAsync(const Model::DescribeRtcUserCntDataRequest& request, const DescribeRtcUserCntDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcUserCntDataOutcomeCallable describeRtcUserCntDataCallable(const Model::DescribeRtcUserCntDataRequest& request) const;
			DescribeRtcUserListOutcome describeRtcUserList(const Model::DescribeRtcUserListRequest &request)const;
			void describeRtcUserListAsync(const Model::DescribeRtcUserListRequest& request, const DescribeRtcUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRtcUserListOutcomeCallable describeRtcUserListCallable(const Model::DescribeRtcUserListRequest& request) const;
			DescribeUserInfoInChannelOutcome describeUserInfoInChannel(const Model::DescribeUserInfoInChannelRequest &request)const;
			void describeUserInfoInChannelAsync(const Model::DescribeUserInfoInChannelRequest& request, const DescribeUserInfoInChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserInfoInChannelOutcomeCallable describeUserInfoInChannelCallable(const Model::DescribeUserInfoInChannelRequest& request) const;
			DisableMAURuleOutcome disableMAURule(const Model::DisableMAURuleRequest &request)const;
			void disableMAURuleAsync(const Model::DisableMAURuleRequest& request, const DisableMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableMAURuleOutcomeCallable disableMAURuleCallable(const Model::DisableMAURuleRequest& request) const;
			EnableMAURuleOutcome enableMAURule(const Model::EnableMAURuleRequest &request)const;
			void enableMAURuleAsync(const Model::EnableMAURuleRequest& request, const EnableMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableMAURuleOutcomeCallable enableMAURuleCallable(const Model::EnableMAURuleRequest& request) const;
			GetMPUTaskStatusOutcome getMPUTaskStatus(const Model::GetMPUTaskStatusRequest &request)const;
			void getMPUTaskStatusAsync(const Model::GetMPUTaskStatusRequest& request, const GetMPUTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMPUTaskStatusOutcomeCallable getMPUTaskStatusCallable(const Model::GetMPUTaskStatusRequest& request) const;
			GetTaskStatusOutcome getTaskStatus(const Model::GetTaskStatusRequest &request)const;
			void getTaskStatusAsync(const Model::GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskStatusOutcomeCallable getTaskStatusCallable(const Model::GetTaskStatusRequest& request) const;
			ModifyAppOutcome modifyApp(const Model::ModifyAppRequest &request)const;
			void modifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppOutcomeCallable modifyAppCallable(const Model::ModifyAppRequest& request) const;
			ModifyConferenceOutcome modifyConference(const Model::ModifyConferenceRequest &request)const;
			void modifyConferenceAsync(const Model::ModifyConferenceRequest& request, const ModifyConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConferenceOutcomeCallable modifyConferenceCallable(const Model::ModifyConferenceRequest& request) const;
			MuteAudioOutcome muteAudio(const Model::MuteAudioRequest &request)const;
			void muteAudioAsync(const Model::MuteAudioRequest& request, const MuteAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteAudioOutcomeCallable muteAudioCallable(const Model::MuteAudioRequest& request) const;
			MuteAudioAllOutcome muteAudioAll(const Model::MuteAudioAllRequest &request)const;
			void muteAudioAllAsync(const Model::MuteAudioAllRequest& request, const MuteAudioAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MuteAudioAllOutcomeCallable muteAudioAllCallable(const Model::MuteAudioAllRequest& request) const;
			ReceiveNotifyOutcome receiveNotify(const Model::ReceiveNotifyRequest &request)const;
			void receiveNotifyAsync(const Model::ReceiveNotifyRequest& request, const ReceiveNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReceiveNotifyOutcomeCallable receiveNotifyCallable(const Model::ReceiveNotifyRequest& request) const;
			RemoveParticipantsOutcome removeParticipants(const Model::RemoveParticipantsRequest &request)const;
			void removeParticipantsAsync(const Model::RemoveParticipantsRequest& request, const RemoveParticipantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveParticipantsOutcomeCallable removeParticipantsCallable(const Model::RemoveParticipantsRequest& request) const;
			RemoveTerminalsOutcome removeTerminals(const Model::RemoveTerminalsRequest &request)const;
			void removeTerminalsAsync(const Model::RemoveTerminalsRequest& request, const RemoveTerminalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTerminalsOutcomeCallable removeTerminalsCallable(const Model::RemoveTerminalsRequest& request) const;
			SetChannelPropertyOutcome setChannelProperty(const Model::SetChannelPropertyRequest &request)const;
			void setChannelPropertyAsync(const Model::SetChannelPropertyRequest& request, const SetChannelPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetChannelPropertyOutcomeCallable setChannelPropertyCallable(const Model::SetChannelPropertyRequest& request) const;
			StartMPUTaskOutcome startMPUTask(const Model::StartMPUTaskRequest &request)const;
			void startMPUTaskAsync(const Model::StartMPUTaskRequest& request, const StartMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartMPUTaskOutcomeCallable startMPUTaskCallable(const Model::StartMPUTaskRequest& request) const;
			StartTaskOutcome startTask(const Model::StartTaskRequest &request)const;
			void startTaskAsync(const Model::StartTaskRequest& request, const StartTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTaskOutcomeCallable startTaskCallable(const Model::StartTaskRequest& request) const;
			StopMPUTaskOutcome stopMPUTask(const Model::StopMPUTaskRequest &request)const;
			void stopMPUTaskAsync(const Model::StopMPUTaskRequest& request, const StopMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMPUTaskOutcomeCallable stopMPUTaskCallable(const Model::StopMPUTaskRequest& request) const;
			StopTaskOutcome stopTask(const Model::StopTaskRequest &request)const;
			void stopTaskAsync(const Model::StopTaskRequest& request, const StopTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopTaskOutcomeCallable stopTaskCallable(const Model::StopTaskRequest& request) const;
			UnmuteAudioOutcome unmuteAudio(const Model::UnmuteAudioRequest &request)const;
			void unmuteAudioAsync(const Model::UnmuteAudioRequest& request, const UnmuteAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnmuteAudioOutcomeCallable unmuteAudioCallable(const Model::UnmuteAudioRequest& request) const;
			UnmuteAudioAllOutcome unmuteAudioAll(const Model::UnmuteAudioAllRequest &request)const;
			void unmuteAudioAllAsync(const Model::UnmuteAudioAllRequest& request, const UnmuteAudioAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnmuteAudioAllOutcomeCallable unmuteAudioAllCallable(const Model::UnmuteAudioAllRequest& request) const;
			UpdateChannelOutcome updateChannel(const Model::UpdateChannelRequest &request)const;
			void updateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateChannelOutcomeCallable updateChannelCallable(const Model::UpdateChannelRequest& request) const;
			UpdateMPULayoutOutcome updateMPULayout(const Model::UpdateMPULayoutRequest &request)const;
			void updateMPULayoutAsync(const Model::UpdateMPULayoutRequest& request, const UpdateMPULayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMPULayoutOutcomeCallable updateMPULayoutCallable(const Model::UpdateMPULayoutRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RTC_RTCCLIENT_H_
