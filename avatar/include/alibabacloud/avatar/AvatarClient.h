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

#ifndef ALIBABACLOUD_AVATAR_AVATARCLIENT_H_
#define ALIBABACLOUD_AVATAR_AVATARCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AvatarExport.h"
#include "model/CancelVideoTaskRequest.h"
#include "model/CancelVideoTaskResult.h"
#include "model/ClientAuthRequest.h"
#include "model/ClientAuthResult.h"
#include "model/ClientStartRequest.h"
#include "model/ClientStartResult.h"
#include "model/ClientUnbindDeviceRequest.h"
#include "model/ClientUnbindDeviceResult.h"
#include "model/CloseTimedResetOperateRequest.h"
#include "model/CloseTimedResetOperateResult.h"
#include "model/ConfirmAvatar2dTrainRequest.h"
#include "model/ConfirmAvatar2dTrainResult.h"
#include "model/Create2dAvatarRequest.h"
#include "model/Create2dAvatarResult.h"
#include "model/DeleteAvatarRequest.h"
#include "model/DeleteAvatarResult.h"
#include "model/DuplexDecisionRequest.h"
#include "model/DuplexDecisionResult.h"
#include "model/GetVideoTaskInfoRequest.h"
#include "model/GetVideoTaskInfoResult.h"
#include "model/LicenseAuthRequest.h"
#include "model/LicenseAuthResult.h"
#include "model/QueryAvatarRequest.h"
#include "model/QueryAvatarResult.h"
#include "model/QueryAvatarListRequest.h"
#include "model/QueryAvatarListResult.h"
#include "model/QueryRunningInstanceRequest.h"
#include "model/QueryRunningInstanceResult.h"
#include "model/QueryTimedResetOperateStatusRequest.h"
#include "model/QueryTimedResetOperateStatusResult.h"
#include "model/QueryVideoTaskInfoRequest.h"
#include "model/QueryVideoTaskInfoResult.h"
#include "model/Render3dAvatarRequest.h"
#include "model/Render3dAvatarResult.h"
#include "model/SendCommandRequest.h"
#include "model/SendCommandResult.h"
#include "model/SendMessageRequest.h"
#include "model/SendMessageResult.h"
#include "model/SendTextRequest.h"
#include "model/SendTextResult.h"
#include "model/SendVamlRequest.h"
#include "model/SendVamlResult.h"
#include "model/StartInstanceRequest.h"
#include "model/StartInstanceResult.h"
#include "model/StartTimedResetOperateRequest.h"
#include "model/StartTimedResetOperateResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/SubmitAudioTo2DAvatarVideoTaskRequest.h"
#include "model/SubmitAudioTo2DAvatarVideoTaskResult.h"
#include "model/SubmitAudioTo3DAvatarVideoTaskRequest.h"
#include "model/SubmitAudioTo3DAvatarVideoTaskResult.h"
#include "model/SubmitAvatarVideoTaskRequest.h"
#include "model/SubmitAvatarVideoTaskResult.h"
#include "model/SubmitTextTo2DAvatarVideoTaskRequest.h"
#include "model/SubmitTextTo2DAvatarVideoTaskResult.h"
#include "model/SubmitTextTo3DAvatarVideoTaskRequest.h"
#include "model/SubmitTextTo3DAvatarVideoTaskResult.h"
#include "model/Update2dAvatarRequest.h"
#include "model/Update2dAvatarResult.h"


namespace AlibabaCloud
{
	namespace Avatar
	{
		class ALIBABACLOUD_AVATAR_EXPORT AvatarClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CancelVideoTaskResult> CancelVideoTaskOutcome;
			typedef std::future<CancelVideoTaskOutcome> CancelVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::CancelVideoTaskRequest&, const CancelVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::ClientAuthResult> ClientAuthOutcome;
			typedef std::future<ClientAuthOutcome> ClientAuthOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::ClientAuthRequest&, const ClientAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClientAuthAsyncHandler;
			typedef Outcome<Error, Model::ClientStartResult> ClientStartOutcome;
			typedef std::future<ClientStartOutcome> ClientStartOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::ClientStartRequest&, const ClientStartOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClientStartAsyncHandler;
			typedef Outcome<Error, Model::ClientUnbindDeviceResult> ClientUnbindDeviceOutcome;
			typedef std::future<ClientUnbindDeviceOutcome> ClientUnbindDeviceOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::ClientUnbindDeviceRequest&, const ClientUnbindDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClientUnbindDeviceAsyncHandler;
			typedef Outcome<Error, Model::CloseTimedResetOperateResult> CloseTimedResetOperateOutcome;
			typedef std::future<CloseTimedResetOperateOutcome> CloseTimedResetOperateOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::CloseTimedResetOperateRequest&, const CloseTimedResetOperateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseTimedResetOperateAsyncHandler;
			typedef Outcome<Error, Model::ConfirmAvatar2dTrainResult> ConfirmAvatar2dTrainOutcome;
			typedef std::future<ConfirmAvatar2dTrainOutcome> ConfirmAvatar2dTrainOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::ConfirmAvatar2dTrainRequest&, const ConfirmAvatar2dTrainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmAvatar2dTrainAsyncHandler;
			typedef Outcome<Error, Model::Create2dAvatarResult> Create2dAvatarOutcome;
			typedef std::future<Create2dAvatarOutcome> Create2dAvatarOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::Create2dAvatarRequest&, const Create2dAvatarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Create2dAvatarAsyncHandler;
			typedef Outcome<Error, Model::DeleteAvatarResult> DeleteAvatarOutcome;
			typedef std::future<DeleteAvatarOutcome> DeleteAvatarOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::DeleteAvatarRequest&, const DeleteAvatarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAvatarAsyncHandler;
			typedef Outcome<Error, Model::DuplexDecisionResult> DuplexDecisionOutcome;
			typedef std::future<DuplexDecisionOutcome> DuplexDecisionOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::DuplexDecisionRequest&, const DuplexDecisionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DuplexDecisionAsyncHandler;
			typedef Outcome<Error, Model::GetVideoTaskInfoResult> GetVideoTaskInfoOutcome;
			typedef std::future<GetVideoTaskInfoOutcome> GetVideoTaskInfoOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::GetVideoTaskInfoRequest&, const GetVideoTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::LicenseAuthResult> LicenseAuthOutcome;
			typedef std::future<LicenseAuthOutcome> LicenseAuthOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::LicenseAuthRequest&, const LicenseAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LicenseAuthAsyncHandler;
			typedef Outcome<Error, Model::QueryAvatarResult> QueryAvatarOutcome;
			typedef std::future<QueryAvatarOutcome> QueryAvatarOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::QueryAvatarRequest&, const QueryAvatarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAvatarAsyncHandler;
			typedef Outcome<Error, Model::QueryAvatarListResult> QueryAvatarListOutcome;
			typedef std::future<QueryAvatarListOutcome> QueryAvatarListOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::QueryAvatarListRequest&, const QueryAvatarListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAvatarListAsyncHandler;
			typedef Outcome<Error, Model::QueryRunningInstanceResult> QueryRunningInstanceOutcome;
			typedef std::future<QueryRunningInstanceOutcome> QueryRunningInstanceOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::QueryRunningInstanceRequest&, const QueryRunningInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRunningInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryTimedResetOperateStatusResult> QueryTimedResetOperateStatusOutcome;
			typedef std::future<QueryTimedResetOperateStatusOutcome> QueryTimedResetOperateStatusOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::QueryTimedResetOperateStatusRequest&, const QueryTimedResetOperateStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTimedResetOperateStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryVideoTaskInfoResult> QueryVideoTaskInfoOutcome;
			typedef std::future<QueryVideoTaskInfoOutcome> QueryVideoTaskInfoOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::QueryVideoTaskInfoRequest&, const QueryVideoTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVideoTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::Render3dAvatarResult> Render3dAvatarOutcome;
			typedef std::future<Render3dAvatarOutcome> Render3dAvatarOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::Render3dAvatarRequest&, const Render3dAvatarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Render3dAvatarAsyncHandler;
			typedef Outcome<Error, Model::SendCommandResult> SendCommandOutcome;
			typedef std::future<SendCommandOutcome> SendCommandOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SendCommandRequest&, const SendCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendCommandAsyncHandler;
			typedef Outcome<Error, Model::SendMessageResult> SendMessageOutcome;
			typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SendMessageRequest&, const SendMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;
			typedef Outcome<Error, Model::SendTextResult> SendTextOutcome;
			typedef std::future<SendTextOutcome> SendTextOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SendTextRequest&, const SendTextOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendTextAsyncHandler;
			typedef Outcome<Error, Model::SendVamlResult> SendVamlOutcome;
			typedef std::future<SendVamlOutcome> SendVamlOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SendVamlRequest&, const SendVamlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVamlAsyncHandler;
			typedef Outcome<Error, Model::StartInstanceResult> StartInstanceOutcome;
			typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::StartInstanceRequest&, const StartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartTimedResetOperateResult> StartTimedResetOperateOutcome;
			typedef std::future<StartTimedResetOperateOutcome> StartTimedResetOperateOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::StartTimedResetOperateRequest&, const StartTimedResetOperateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTimedResetOperateAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::SubmitAudioTo2DAvatarVideoTaskResult> SubmitAudioTo2DAvatarVideoTaskOutcome;
			typedef std::future<SubmitAudioTo2DAvatarVideoTaskOutcome> SubmitAudioTo2DAvatarVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SubmitAudioTo2DAvatarVideoTaskRequest&, const SubmitAudioTo2DAvatarVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAudioTo2DAvatarVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitAudioTo3DAvatarVideoTaskResult> SubmitAudioTo3DAvatarVideoTaskOutcome;
			typedef std::future<SubmitAudioTo3DAvatarVideoTaskOutcome> SubmitAudioTo3DAvatarVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SubmitAudioTo3DAvatarVideoTaskRequest&, const SubmitAudioTo3DAvatarVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAudioTo3DAvatarVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitAvatarVideoTaskResult> SubmitAvatarVideoTaskOutcome;
			typedef std::future<SubmitAvatarVideoTaskOutcome> SubmitAvatarVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SubmitAvatarVideoTaskRequest&, const SubmitAvatarVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAvatarVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitTextTo2DAvatarVideoTaskResult> SubmitTextTo2DAvatarVideoTaskOutcome;
			typedef std::future<SubmitTextTo2DAvatarVideoTaskOutcome> SubmitTextTo2DAvatarVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SubmitTextTo2DAvatarVideoTaskRequest&, const SubmitTextTo2DAvatarVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTextTo2DAvatarVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitTextTo3DAvatarVideoTaskResult> SubmitTextTo3DAvatarVideoTaskOutcome;
			typedef std::future<SubmitTextTo3DAvatarVideoTaskOutcome> SubmitTextTo3DAvatarVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SubmitTextTo3DAvatarVideoTaskRequest&, const SubmitTextTo3DAvatarVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTextTo3DAvatarVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::Update2dAvatarResult> Update2dAvatarOutcome;
			typedef std::future<Update2dAvatarOutcome> Update2dAvatarOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::Update2dAvatarRequest&, const Update2dAvatarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Update2dAvatarAsyncHandler;

			AvatarClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AvatarClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AvatarClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AvatarClient();
			CancelVideoTaskOutcome cancelVideoTask(const Model::CancelVideoTaskRequest &request)const;
			void cancelVideoTaskAsync(const Model::CancelVideoTaskRequest& request, const CancelVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelVideoTaskOutcomeCallable cancelVideoTaskCallable(const Model::CancelVideoTaskRequest& request) const;
			ClientAuthOutcome clientAuth(const Model::ClientAuthRequest &request)const;
			void clientAuthAsync(const Model::ClientAuthRequest& request, const ClientAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClientAuthOutcomeCallable clientAuthCallable(const Model::ClientAuthRequest& request) const;
			ClientStartOutcome clientStart(const Model::ClientStartRequest &request)const;
			void clientStartAsync(const Model::ClientStartRequest& request, const ClientStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClientStartOutcomeCallable clientStartCallable(const Model::ClientStartRequest& request) const;
			ClientUnbindDeviceOutcome clientUnbindDevice(const Model::ClientUnbindDeviceRequest &request)const;
			void clientUnbindDeviceAsync(const Model::ClientUnbindDeviceRequest& request, const ClientUnbindDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClientUnbindDeviceOutcomeCallable clientUnbindDeviceCallable(const Model::ClientUnbindDeviceRequest& request) const;
			CloseTimedResetOperateOutcome closeTimedResetOperate(const Model::CloseTimedResetOperateRequest &request)const;
			void closeTimedResetOperateAsync(const Model::CloseTimedResetOperateRequest& request, const CloseTimedResetOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseTimedResetOperateOutcomeCallable closeTimedResetOperateCallable(const Model::CloseTimedResetOperateRequest& request) const;
			ConfirmAvatar2dTrainOutcome confirmAvatar2dTrain(const Model::ConfirmAvatar2dTrainRequest &request)const;
			void confirmAvatar2dTrainAsync(const Model::ConfirmAvatar2dTrainRequest& request, const ConfirmAvatar2dTrainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmAvatar2dTrainOutcomeCallable confirmAvatar2dTrainCallable(const Model::ConfirmAvatar2dTrainRequest& request) const;
			Create2dAvatarOutcome create2dAvatar(const Model::Create2dAvatarRequest &request)const;
			void create2dAvatarAsync(const Model::Create2dAvatarRequest& request, const Create2dAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Create2dAvatarOutcomeCallable create2dAvatarCallable(const Model::Create2dAvatarRequest& request) const;
			DeleteAvatarOutcome deleteAvatar(const Model::DeleteAvatarRequest &request)const;
			void deleteAvatarAsync(const Model::DeleteAvatarRequest& request, const DeleteAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAvatarOutcomeCallable deleteAvatarCallable(const Model::DeleteAvatarRequest& request) const;
			DuplexDecisionOutcome duplexDecision(const Model::DuplexDecisionRequest &request)const;
			void duplexDecisionAsync(const Model::DuplexDecisionRequest& request, const DuplexDecisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DuplexDecisionOutcomeCallable duplexDecisionCallable(const Model::DuplexDecisionRequest& request) const;
			GetVideoTaskInfoOutcome getVideoTaskInfo(const Model::GetVideoTaskInfoRequest &request)const;
			void getVideoTaskInfoAsync(const Model::GetVideoTaskInfoRequest& request, const GetVideoTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoTaskInfoOutcomeCallable getVideoTaskInfoCallable(const Model::GetVideoTaskInfoRequest& request) const;
			LicenseAuthOutcome licenseAuth(const Model::LicenseAuthRequest &request)const;
			void licenseAuthAsync(const Model::LicenseAuthRequest& request, const LicenseAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LicenseAuthOutcomeCallable licenseAuthCallable(const Model::LicenseAuthRequest& request) const;
			QueryAvatarOutcome queryAvatar(const Model::QueryAvatarRequest &request)const;
			void queryAvatarAsync(const Model::QueryAvatarRequest& request, const QueryAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAvatarOutcomeCallable queryAvatarCallable(const Model::QueryAvatarRequest& request) const;
			QueryAvatarListOutcome queryAvatarList(const Model::QueryAvatarListRequest &request)const;
			void queryAvatarListAsync(const Model::QueryAvatarListRequest& request, const QueryAvatarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAvatarListOutcomeCallable queryAvatarListCallable(const Model::QueryAvatarListRequest& request) const;
			QueryRunningInstanceOutcome queryRunningInstance(const Model::QueryRunningInstanceRequest &request)const;
			void queryRunningInstanceAsync(const Model::QueryRunningInstanceRequest& request, const QueryRunningInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRunningInstanceOutcomeCallable queryRunningInstanceCallable(const Model::QueryRunningInstanceRequest& request) const;
			QueryTimedResetOperateStatusOutcome queryTimedResetOperateStatus(const Model::QueryTimedResetOperateStatusRequest &request)const;
			void queryTimedResetOperateStatusAsync(const Model::QueryTimedResetOperateStatusRequest& request, const QueryTimedResetOperateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTimedResetOperateStatusOutcomeCallable queryTimedResetOperateStatusCallable(const Model::QueryTimedResetOperateStatusRequest& request) const;
			QueryVideoTaskInfoOutcome queryVideoTaskInfo(const Model::QueryVideoTaskInfoRequest &request)const;
			void queryVideoTaskInfoAsync(const Model::QueryVideoTaskInfoRequest& request, const QueryVideoTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVideoTaskInfoOutcomeCallable queryVideoTaskInfoCallable(const Model::QueryVideoTaskInfoRequest& request) const;
			Render3dAvatarOutcome render3dAvatar(const Model::Render3dAvatarRequest &request)const;
			void render3dAvatarAsync(const Model::Render3dAvatarRequest& request, const Render3dAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Render3dAvatarOutcomeCallable render3dAvatarCallable(const Model::Render3dAvatarRequest& request) const;
			SendCommandOutcome sendCommand(const Model::SendCommandRequest &request)const;
			void sendCommandAsync(const Model::SendCommandRequest& request, const SendCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendCommandOutcomeCallable sendCommandCallable(const Model::SendCommandRequest& request) const;
			SendMessageOutcome sendMessage(const Model::SendMessageRequest &request)const;
			void sendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageOutcomeCallable sendMessageCallable(const Model::SendMessageRequest& request) const;
			SendTextOutcome sendText(const Model::SendTextRequest &request)const;
			void sendTextAsync(const Model::SendTextRequest& request, const SendTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendTextOutcomeCallable sendTextCallable(const Model::SendTextRequest& request) const;
			SendVamlOutcome sendVaml(const Model::SendVamlRequest &request)const;
			void sendVamlAsync(const Model::SendVamlRequest& request, const SendVamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVamlOutcomeCallable sendVamlCallable(const Model::SendVamlRequest& request) const;
			StartInstanceOutcome startInstance(const Model::StartInstanceRequest &request)const;
			void startInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartInstanceOutcomeCallable startInstanceCallable(const Model::StartInstanceRequest& request) const;
			StartTimedResetOperateOutcome startTimedResetOperate(const Model::StartTimedResetOperateRequest &request)const;
			void startTimedResetOperateAsync(const Model::StartTimedResetOperateRequest& request, const StartTimedResetOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTimedResetOperateOutcomeCallable startTimedResetOperateCallable(const Model::StartTimedResetOperateRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			SubmitAudioTo2DAvatarVideoTaskOutcome submitAudioTo2DAvatarVideoTask(const Model::SubmitAudioTo2DAvatarVideoTaskRequest &request)const;
			void submitAudioTo2DAvatarVideoTaskAsync(const Model::SubmitAudioTo2DAvatarVideoTaskRequest& request, const SubmitAudioTo2DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAudioTo2DAvatarVideoTaskOutcomeCallable submitAudioTo2DAvatarVideoTaskCallable(const Model::SubmitAudioTo2DAvatarVideoTaskRequest& request) const;
			SubmitAudioTo3DAvatarVideoTaskOutcome submitAudioTo3DAvatarVideoTask(const Model::SubmitAudioTo3DAvatarVideoTaskRequest &request)const;
			void submitAudioTo3DAvatarVideoTaskAsync(const Model::SubmitAudioTo3DAvatarVideoTaskRequest& request, const SubmitAudioTo3DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAudioTo3DAvatarVideoTaskOutcomeCallable submitAudioTo3DAvatarVideoTaskCallable(const Model::SubmitAudioTo3DAvatarVideoTaskRequest& request) const;
			SubmitAvatarVideoTaskOutcome submitAvatarVideoTask(const Model::SubmitAvatarVideoTaskRequest &request)const;
			void submitAvatarVideoTaskAsync(const Model::SubmitAvatarVideoTaskRequest& request, const SubmitAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAvatarVideoTaskOutcomeCallable submitAvatarVideoTaskCallable(const Model::SubmitAvatarVideoTaskRequest& request) const;
			SubmitTextTo2DAvatarVideoTaskOutcome submitTextTo2DAvatarVideoTask(const Model::SubmitTextTo2DAvatarVideoTaskRequest &request)const;
			void submitTextTo2DAvatarVideoTaskAsync(const Model::SubmitTextTo2DAvatarVideoTaskRequest& request, const SubmitTextTo2DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTextTo2DAvatarVideoTaskOutcomeCallable submitTextTo2DAvatarVideoTaskCallable(const Model::SubmitTextTo2DAvatarVideoTaskRequest& request) const;
			SubmitTextTo3DAvatarVideoTaskOutcome submitTextTo3DAvatarVideoTask(const Model::SubmitTextTo3DAvatarVideoTaskRequest &request)const;
			void submitTextTo3DAvatarVideoTaskAsync(const Model::SubmitTextTo3DAvatarVideoTaskRequest& request, const SubmitTextTo3DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTextTo3DAvatarVideoTaskOutcomeCallable submitTextTo3DAvatarVideoTaskCallable(const Model::SubmitTextTo3DAvatarVideoTaskRequest& request) const;
			Update2dAvatarOutcome update2dAvatar(const Model::Update2dAvatarRequest &request)const;
			void update2dAvatarAsync(const Model::Update2dAvatarRequest& request, const Update2dAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Update2dAvatarOutcomeCallable update2dAvatarCallable(const Model::Update2dAvatarRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AVATAR_AVATARCLIENT_H_
