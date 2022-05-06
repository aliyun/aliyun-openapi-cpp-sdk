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
#include "model/AddRecordTemplateRequest.h"
#include "model/AddRecordTemplateResult.h"
#include "model/CreateAutoLiveStreamRuleRequest.h"
#include "model/CreateAutoLiveStreamRuleResult.h"
#include "model/CreateEventSubscribeRequest.h"
#include "model/CreateEventSubscribeResult.h"
#include "model/CreateMPULayoutRequest.h"
#include "model/CreateMPULayoutResult.h"
#include "model/DeleteAutoLiveStreamRuleRequest.h"
#include "model/DeleteAutoLiveStreamRuleResult.h"
#include "model/DeleteChannelRequest.h"
#include "model/DeleteChannelResult.h"
#include "model/DeleteEventSubscribeRequest.h"
#include "model/DeleteEventSubscribeResult.h"
#include "model/DeleteMPULayoutRequest.h"
#include "model/DeleteMPULayoutResult.h"
#include "model/DeleteRecordTemplateRequest.h"
#include "model/DeleteRecordTemplateResult.h"
#include "model/DescribeAppKeyRequest.h"
#include "model/DescribeAppKeyResult.h"
#include "model/DescribeAppsRequest.h"
#include "model/DescribeAppsResult.h"
#include "model/DescribeAutoLiveStreamRuleRequest.h"
#include "model/DescribeAutoLiveStreamRuleResult.h"
#include "model/DescribeChannelParticipantsRequest.h"
#include "model/DescribeChannelParticipantsResult.h"
#include "model/DescribeChannelUsersRequest.h"
#include "model/DescribeChannelUsersResult.h"
#include "model/DescribeMPULayoutInfoListRequest.h"
#include "model/DescribeMPULayoutInfoListResult.h"
#include "model/DescribeRecordFilesRequest.h"
#include "model/DescribeRecordFilesResult.h"
#include "model/DescribeRecordTemplatesRequest.h"
#include "model/DescribeRecordTemplatesResult.h"
#include "model/DescribeUserInfoInChannelRequest.h"
#include "model/DescribeUserInfoInChannelResult.h"
#include "model/DisableAutoLiveStreamRuleRequest.h"
#include "model/DisableAutoLiveStreamRuleResult.h"
#include "model/EnableAutoLiveStreamRuleRequest.h"
#include "model/EnableAutoLiveStreamRuleResult.h"
#include "model/GetMPUTaskStatusRequest.h"
#include "model/GetMPUTaskStatusResult.h"
#include "model/ModifyAppRequest.h"
#include "model/ModifyAppResult.h"
#include "model/ModifyMPULayoutRequest.h"
#include "model/ModifyMPULayoutResult.h"
#include "model/RemoveTerminalsRequest.h"
#include "model/RemoveTerminalsResult.h"
#include "model/StartMPUTaskRequest.h"
#include "model/StartMPUTaskResult.h"
#include "model/StartRecordTaskRequest.h"
#include "model/StartRecordTaskResult.h"
#include "model/StopMPUTaskRequest.h"
#include "model/StopMPUTaskResult.h"
#include "model/StopRecordTaskRequest.h"
#include "model/StopRecordTaskResult.h"
#include "model/UpdateAutoLiveStreamRuleRequest.h"
#include "model/UpdateAutoLiveStreamRuleResult.h"
#include "model/UpdateMPUTaskRequest.h"
#include "model/UpdateMPUTaskResult.h"
#include "model/UpdateRecordTaskRequest.h"
#include "model/UpdateRecordTaskResult.h"
#include "model/UpdateRecordTemplateRequest.h"
#include "model/UpdateRecordTemplateResult.h"


namespace AlibabaCloud
{
	namespace Rtc
	{
		class ALIBABACLOUD_RTC_EXPORT RtcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddRecordTemplateResult> AddRecordTemplateOutcome;
			typedef std::future<AddRecordTemplateOutcome> AddRecordTemplateOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::AddRecordTemplateRequest&, const AddRecordTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateAutoLiveStreamRuleResult> CreateAutoLiveStreamRuleOutcome;
			typedef std::future<CreateAutoLiveStreamRuleOutcome> CreateAutoLiveStreamRuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateAutoLiveStreamRuleRequest&, const CreateAutoLiveStreamRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoLiveStreamRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateEventSubscribeResult> CreateEventSubscribeOutcome;
			typedef std::future<CreateEventSubscribeOutcome> CreateEventSubscribeOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateEventSubscribeRequest&, const CreateEventSubscribeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEventSubscribeAsyncHandler;
			typedef Outcome<Error, Model::CreateMPULayoutResult> CreateMPULayoutOutcome;
			typedef std::future<CreateMPULayoutOutcome> CreateMPULayoutOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::CreateMPULayoutRequest&, const CreateMPULayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMPULayoutAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoLiveStreamRuleResult> DeleteAutoLiveStreamRuleOutcome;
			typedef std::future<DeleteAutoLiveStreamRuleOutcome> DeleteAutoLiveStreamRuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteAutoLiveStreamRuleRequest&, const DeleteAutoLiveStreamRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoLiveStreamRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteChannelResult> DeleteChannelOutcome;
			typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteChannelRequest&, const DeleteChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChannelAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventSubscribeResult> DeleteEventSubscribeOutcome;
			typedef std::future<DeleteEventSubscribeOutcome> DeleteEventSubscribeOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteEventSubscribeRequest&, const DeleteEventSubscribeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventSubscribeAsyncHandler;
			typedef Outcome<Error, Model::DeleteMPULayoutResult> DeleteMPULayoutOutcome;
			typedef std::future<DeleteMPULayoutOutcome> DeleteMPULayoutOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteMPULayoutRequest&, const DeleteMPULayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMPULayoutAsyncHandler;
			typedef Outcome<Error, Model::DeleteRecordTemplateResult> DeleteRecordTemplateOutcome;
			typedef std::future<DeleteRecordTemplateOutcome> DeleteRecordTemplateOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DeleteRecordTemplateRequest&, const DeleteRecordTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppKeyResult> DescribeAppKeyOutcome;
			typedef std::future<DescribeAppKeyOutcome> DescribeAppKeyOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeAppKeyRequest&, const DescribeAppKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppsResult> DescribeAppsOutcome;
			typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeAppsRequest&, const DescribeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoLiveStreamRuleResult> DescribeAutoLiveStreamRuleOutcome;
			typedef std::future<DescribeAutoLiveStreamRuleOutcome> DescribeAutoLiveStreamRuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeAutoLiveStreamRuleRequest&, const DescribeAutoLiveStreamRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoLiveStreamRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeChannelParticipantsResult> DescribeChannelParticipantsOutcome;
			typedef std::future<DescribeChannelParticipantsOutcome> DescribeChannelParticipantsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeChannelParticipantsRequest&, const DescribeChannelParticipantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelParticipantsAsyncHandler;
			typedef Outcome<Error, Model::DescribeChannelUsersResult> DescribeChannelUsersOutcome;
			typedef std::future<DescribeChannelUsersOutcome> DescribeChannelUsersOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeChannelUsersRequest&, const DescribeChannelUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeMPULayoutInfoListResult> DescribeMPULayoutInfoListOutcome;
			typedef std::future<DescribeMPULayoutInfoListOutcome> DescribeMPULayoutInfoListOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeMPULayoutInfoListRequest&, const DescribeMPULayoutInfoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMPULayoutInfoListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordFilesResult> DescribeRecordFilesOutcome;
			typedef std::future<DescribeRecordFilesOutcome> DescribeRecordFilesOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRecordFilesRequest&, const DescribeRecordFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordTemplatesResult> DescribeRecordTemplatesOutcome;
			typedef std::future<DescribeRecordTemplatesOutcome> DescribeRecordTemplatesOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeRecordTemplatesRequest&, const DescribeRecordTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserInfoInChannelResult> DescribeUserInfoInChannelOutcome;
			typedef std::future<DescribeUserInfoInChannelOutcome> DescribeUserInfoInChannelOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DescribeUserInfoInChannelRequest&, const DescribeUserInfoInChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoInChannelAsyncHandler;
			typedef Outcome<Error, Model::DisableAutoLiveStreamRuleResult> DisableAutoLiveStreamRuleOutcome;
			typedef std::future<DisableAutoLiveStreamRuleOutcome> DisableAutoLiveStreamRuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::DisableAutoLiveStreamRuleRequest&, const DisableAutoLiveStreamRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAutoLiveStreamRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableAutoLiveStreamRuleResult> EnableAutoLiveStreamRuleOutcome;
			typedef std::future<EnableAutoLiveStreamRuleOutcome> EnableAutoLiveStreamRuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::EnableAutoLiveStreamRuleRequest&, const EnableAutoLiveStreamRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoLiveStreamRuleAsyncHandler;
			typedef Outcome<Error, Model::GetMPUTaskStatusResult> GetMPUTaskStatusOutcome;
			typedef std::future<GetMPUTaskStatusOutcome> GetMPUTaskStatusOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::GetMPUTaskStatusRequest&, const GetMPUTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMPUTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppResult> ModifyAppOutcome;
			typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::ModifyAppRequest&, const ModifyAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
			typedef Outcome<Error, Model::ModifyMPULayoutResult> ModifyMPULayoutOutcome;
			typedef std::future<ModifyMPULayoutOutcome> ModifyMPULayoutOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::ModifyMPULayoutRequest&, const ModifyMPULayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMPULayoutAsyncHandler;
			typedef Outcome<Error, Model::RemoveTerminalsResult> RemoveTerminalsOutcome;
			typedef std::future<RemoveTerminalsOutcome> RemoveTerminalsOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::RemoveTerminalsRequest&, const RemoveTerminalsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTerminalsAsyncHandler;
			typedef Outcome<Error, Model::StartMPUTaskResult> StartMPUTaskOutcome;
			typedef std::future<StartMPUTaskOutcome> StartMPUTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StartMPUTaskRequest&, const StartMPUTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartMPUTaskAsyncHandler;
			typedef Outcome<Error, Model::StartRecordTaskResult> StartRecordTaskOutcome;
			typedef std::future<StartRecordTaskOutcome> StartRecordTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StartRecordTaskRequest&, const StartRecordTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRecordTaskAsyncHandler;
			typedef Outcome<Error, Model::StopMPUTaskResult> StopMPUTaskOutcome;
			typedef std::future<StopMPUTaskOutcome> StopMPUTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StopMPUTaskRequest&, const StopMPUTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMPUTaskAsyncHandler;
			typedef Outcome<Error, Model::StopRecordTaskResult> StopRecordTaskOutcome;
			typedef std::future<StopRecordTaskOutcome> StopRecordTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::StopRecordTaskRequest&, const StopRecordTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRecordTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateAutoLiveStreamRuleResult> UpdateAutoLiveStreamRuleOutcome;
			typedef std::future<UpdateAutoLiveStreamRuleOutcome> UpdateAutoLiveStreamRuleOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UpdateAutoLiveStreamRuleRequest&, const UpdateAutoLiveStreamRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAutoLiveStreamRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateMPUTaskResult> UpdateMPUTaskOutcome;
			typedef std::future<UpdateMPUTaskOutcome> UpdateMPUTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UpdateMPUTaskRequest&, const UpdateMPUTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMPUTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateRecordTaskResult> UpdateRecordTaskOutcome;
			typedef std::future<UpdateRecordTaskOutcome> UpdateRecordTaskOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UpdateRecordTaskRequest&, const UpdateRecordTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateRecordTemplateResult> UpdateRecordTemplateOutcome;
			typedef std::future<UpdateRecordTemplateOutcome> UpdateRecordTemplateOutcomeCallable;
			typedef std::function<void(const RtcClient*, const Model::UpdateRecordTemplateRequest&, const UpdateRecordTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordTemplateAsyncHandler;

			RtcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RtcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RtcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RtcClient();
			AddRecordTemplateOutcome addRecordTemplate(const Model::AddRecordTemplateRequest &request)const;
			void addRecordTemplateAsync(const Model::AddRecordTemplateRequest& request, const AddRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRecordTemplateOutcomeCallable addRecordTemplateCallable(const Model::AddRecordTemplateRequest& request) const;
			CreateAutoLiveStreamRuleOutcome createAutoLiveStreamRule(const Model::CreateAutoLiveStreamRuleRequest &request)const;
			void createAutoLiveStreamRuleAsync(const Model::CreateAutoLiveStreamRuleRequest& request, const CreateAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAutoLiveStreamRuleOutcomeCallable createAutoLiveStreamRuleCallable(const Model::CreateAutoLiveStreamRuleRequest& request) const;
			CreateEventSubscribeOutcome createEventSubscribe(const Model::CreateEventSubscribeRequest &request)const;
			void createEventSubscribeAsync(const Model::CreateEventSubscribeRequest& request, const CreateEventSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEventSubscribeOutcomeCallable createEventSubscribeCallable(const Model::CreateEventSubscribeRequest& request) const;
			CreateMPULayoutOutcome createMPULayout(const Model::CreateMPULayoutRequest &request)const;
			void createMPULayoutAsync(const Model::CreateMPULayoutRequest& request, const CreateMPULayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMPULayoutOutcomeCallable createMPULayoutCallable(const Model::CreateMPULayoutRequest& request) const;
			DeleteAutoLiveStreamRuleOutcome deleteAutoLiveStreamRule(const Model::DeleteAutoLiveStreamRuleRequest &request)const;
			void deleteAutoLiveStreamRuleAsync(const Model::DeleteAutoLiveStreamRuleRequest& request, const DeleteAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoLiveStreamRuleOutcomeCallable deleteAutoLiveStreamRuleCallable(const Model::DeleteAutoLiveStreamRuleRequest& request) const;
			DeleteChannelOutcome deleteChannel(const Model::DeleteChannelRequest &request)const;
			void deleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteChannelOutcomeCallable deleteChannelCallable(const Model::DeleteChannelRequest& request) const;
			DeleteEventSubscribeOutcome deleteEventSubscribe(const Model::DeleteEventSubscribeRequest &request)const;
			void deleteEventSubscribeAsync(const Model::DeleteEventSubscribeRequest& request, const DeleteEventSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventSubscribeOutcomeCallable deleteEventSubscribeCallable(const Model::DeleteEventSubscribeRequest& request) const;
			DeleteMPULayoutOutcome deleteMPULayout(const Model::DeleteMPULayoutRequest &request)const;
			void deleteMPULayoutAsync(const Model::DeleteMPULayoutRequest& request, const DeleteMPULayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMPULayoutOutcomeCallable deleteMPULayoutCallable(const Model::DeleteMPULayoutRequest& request) const;
			DeleteRecordTemplateOutcome deleteRecordTemplate(const Model::DeleteRecordTemplateRequest &request)const;
			void deleteRecordTemplateAsync(const Model::DeleteRecordTemplateRequest& request, const DeleteRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRecordTemplateOutcomeCallable deleteRecordTemplateCallable(const Model::DeleteRecordTemplateRequest& request) const;
			DescribeAppKeyOutcome describeAppKey(const Model::DescribeAppKeyRequest &request)const;
			void describeAppKeyAsync(const Model::DescribeAppKeyRequest& request, const DescribeAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppKeyOutcomeCallable describeAppKeyCallable(const Model::DescribeAppKeyRequest& request) const;
			DescribeAppsOutcome describeApps(const Model::DescribeAppsRequest &request)const;
			void describeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppsOutcomeCallable describeAppsCallable(const Model::DescribeAppsRequest& request) const;
			DescribeAutoLiveStreamRuleOutcome describeAutoLiveStreamRule(const Model::DescribeAutoLiveStreamRuleRequest &request)const;
			void describeAutoLiveStreamRuleAsync(const Model::DescribeAutoLiveStreamRuleRequest& request, const DescribeAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoLiveStreamRuleOutcomeCallable describeAutoLiveStreamRuleCallable(const Model::DescribeAutoLiveStreamRuleRequest& request) const;
			DescribeChannelParticipantsOutcome describeChannelParticipants(const Model::DescribeChannelParticipantsRequest &request)const;
			void describeChannelParticipantsAsync(const Model::DescribeChannelParticipantsRequest& request, const DescribeChannelParticipantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChannelParticipantsOutcomeCallable describeChannelParticipantsCallable(const Model::DescribeChannelParticipantsRequest& request) const;
			DescribeChannelUsersOutcome describeChannelUsers(const Model::DescribeChannelUsersRequest &request)const;
			void describeChannelUsersAsync(const Model::DescribeChannelUsersRequest& request, const DescribeChannelUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChannelUsersOutcomeCallable describeChannelUsersCallable(const Model::DescribeChannelUsersRequest& request) const;
			DescribeMPULayoutInfoListOutcome describeMPULayoutInfoList(const Model::DescribeMPULayoutInfoListRequest &request)const;
			void describeMPULayoutInfoListAsync(const Model::DescribeMPULayoutInfoListRequest& request, const DescribeMPULayoutInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMPULayoutInfoListOutcomeCallable describeMPULayoutInfoListCallable(const Model::DescribeMPULayoutInfoListRequest& request) const;
			DescribeRecordFilesOutcome describeRecordFiles(const Model::DescribeRecordFilesRequest &request)const;
			void describeRecordFilesAsync(const Model::DescribeRecordFilesRequest& request, const DescribeRecordFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordFilesOutcomeCallable describeRecordFilesCallable(const Model::DescribeRecordFilesRequest& request) const;
			DescribeRecordTemplatesOutcome describeRecordTemplates(const Model::DescribeRecordTemplatesRequest &request)const;
			void describeRecordTemplatesAsync(const Model::DescribeRecordTemplatesRequest& request, const DescribeRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordTemplatesOutcomeCallable describeRecordTemplatesCallable(const Model::DescribeRecordTemplatesRequest& request) const;
			DescribeUserInfoInChannelOutcome describeUserInfoInChannel(const Model::DescribeUserInfoInChannelRequest &request)const;
			void describeUserInfoInChannelAsync(const Model::DescribeUserInfoInChannelRequest& request, const DescribeUserInfoInChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserInfoInChannelOutcomeCallable describeUserInfoInChannelCallable(const Model::DescribeUserInfoInChannelRequest& request) const;
			DisableAutoLiveStreamRuleOutcome disableAutoLiveStreamRule(const Model::DisableAutoLiveStreamRuleRequest &request)const;
			void disableAutoLiveStreamRuleAsync(const Model::DisableAutoLiveStreamRuleRequest& request, const DisableAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAutoLiveStreamRuleOutcomeCallable disableAutoLiveStreamRuleCallable(const Model::DisableAutoLiveStreamRuleRequest& request) const;
			EnableAutoLiveStreamRuleOutcome enableAutoLiveStreamRule(const Model::EnableAutoLiveStreamRuleRequest &request)const;
			void enableAutoLiveStreamRuleAsync(const Model::EnableAutoLiveStreamRuleRequest& request, const EnableAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAutoLiveStreamRuleOutcomeCallable enableAutoLiveStreamRuleCallable(const Model::EnableAutoLiveStreamRuleRequest& request) const;
			GetMPUTaskStatusOutcome getMPUTaskStatus(const Model::GetMPUTaskStatusRequest &request)const;
			void getMPUTaskStatusAsync(const Model::GetMPUTaskStatusRequest& request, const GetMPUTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMPUTaskStatusOutcomeCallable getMPUTaskStatusCallable(const Model::GetMPUTaskStatusRequest& request) const;
			ModifyAppOutcome modifyApp(const Model::ModifyAppRequest &request)const;
			void modifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppOutcomeCallable modifyAppCallable(const Model::ModifyAppRequest& request) const;
			ModifyMPULayoutOutcome modifyMPULayout(const Model::ModifyMPULayoutRequest &request)const;
			void modifyMPULayoutAsync(const Model::ModifyMPULayoutRequest& request, const ModifyMPULayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMPULayoutOutcomeCallable modifyMPULayoutCallable(const Model::ModifyMPULayoutRequest& request) const;
			RemoveTerminalsOutcome removeTerminals(const Model::RemoveTerminalsRequest &request)const;
			void removeTerminalsAsync(const Model::RemoveTerminalsRequest& request, const RemoveTerminalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTerminalsOutcomeCallable removeTerminalsCallable(const Model::RemoveTerminalsRequest& request) const;
			StartMPUTaskOutcome startMPUTask(const Model::StartMPUTaskRequest &request)const;
			void startMPUTaskAsync(const Model::StartMPUTaskRequest& request, const StartMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartMPUTaskOutcomeCallable startMPUTaskCallable(const Model::StartMPUTaskRequest& request) const;
			StartRecordTaskOutcome startRecordTask(const Model::StartRecordTaskRequest &request)const;
			void startRecordTaskAsync(const Model::StartRecordTaskRequest& request, const StartRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRecordTaskOutcomeCallable startRecordTaskCallable(const Model::StartRecordTaskRequest& request) const;
			StopMPUTaskOutcome stopMPUTask(const Model::StopMPUTaskRequest &request)const;
			void stopMPUTaskAsync(const Model::StopMPUTaskRequest& request, const StopMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMPUTaskOutcomeCallable stopMPUTaskCallable(const Model::StopMPUTaskRequest& request) const;
			StopRecordTaskOutcome stopRecordTask(const Model::StopRecordTaskRequest &request)const;
			void stopRecordTaskAsync(const Model::StopRecordTaskRequest& request, const StopRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRecordTaskOutcomeCallable stopRecordTaskCallable(const Model::StopRecordTaskRequest& request) const;
			UpdateAutoLiveStreamRuleOutcome updateAutoLiveStreamRule(const Model::UpdateAutoLiveStreamRuleRequest &request)const;
			void updateAutoLiveStreamRuleAsync(const Model::UpdateAutoLiveStreamRuleRequest& request, const UpdateAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAutoLiveStreamRuleOutcomeCallable updateAutoLiveStreamRuleCallable(const Model::UpdateAutoLiveStreamRuleRequest& request) const;
			UpdateMPUTaskOutcome updateMPUTask(const Model::UpdateMPUTaskRequest &request)const;
			void updateMPUTaskAsync(const Model::UpdateMPUTaskRequest& request, const UpdateMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMPUTaskOutcomeCallable updateMPUTaskCallable(const Model::UpdateMPUTaskRequest& request) const;
			UpdateRecordTaskOutcome updateRecordTask(const Model::UpdateRecordTaskRequest &request)const;
			void updateRecordTaskAsync(const Model::UpdateRecordTaskRequest& request, const UpdateRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRecordTaskOutcomeCallable updateRecordTaskCallable(const Model::UpdateRecordTaskRequest& request) const;
			UpdateRecordTemplateOutcome updateRecordTemplate(const Model::UpdateRecordTemplateRequest &request)const;
			void updateRecordTemplateAsync(const Model::UpdateRecordTemplateRequest& request, const UpdateRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRecordTemplateOutcomeCallable updateRecordTemplateCallable(const Model::UpdateRecordTemplateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RTC_RTCCLIENT_H_
