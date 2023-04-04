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
#include "model/CloseTimedResetOperateRequest.h"
#include "model/CloseTimedResetOperateResult.h"
#include "model/DuplexDecisionRequest.h"
#include "model/DuplexDecisionResult.h"
#include "model/GetVideoTaskInfoRequest.h"
#include "model/GetVideoTaskInfoResult.h"
#include "model/LicenseAuthRequest.h"
#include "model/LicenseAuthResult.h"
#include "model/QueryRunningInstanceRequest.h"
#include "model/QueryRunningInstanceResult.h"
#include "model/QueryTimedResetOperateStatusRequest.h"
#include "model/QueryTimedResetOperateStatusResult.h"
#include "model/SendMessageRequest.h"
#include "model/SendMessageResult.h"
#include "model/StartInstanceRequest.h"
#include "model/StartInstanceResult.h"
#include "model/StartTimedResetOperateRequest.h"
#include "model/StartTimedResetOperateResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/SubmitTextTo2DAvatarVideoTaskRequest.h"
#include "model/SubmitTextTo2DAvatarVideoTaskResult.h"
#include "model/SubmitTextTo3DAvatarVideoTaskRequest.h"
#include "model/SubmitTextTo3DAvatarVideoTaskResult.h"
#include "model/SubmitTextToSignVideoTaskRequest.h"
#include "model/SubmitTextToSignVideoTaskResult.h"


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
			typedef Outcome<Error, Model::CloseTimedResetOperateResult> CloseTimedResetOperateOutcome;
			typedef std::future<CloseTimedResetOperateOutcome> CloseTimedResetOperateOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::CloseTimedResetOperateRequest&, const CloseTimedResetOperateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseTimedResetOperateAsyncHandler;
			typedef Outcome<Error, Model::DuplexDecisionResult> DuplexDecisionOutcome;
			typedef std::future<DuplexDecisionOutcome> DuplexDecisionOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::DuplexDecisionRequest&, const DuplexDecisionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DuplexDecisionAsyncHandler;
			typedef Outcome<Error, Model::GetVideoTaskInfoResult> GetVideoTaskInfoOutcome;
			typedef std::future<GetVideoTaskInfoOutcome> GetVideoTaskInfoOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::GetVideoTaskInfoRequest&, const GetVideoTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::LicenseAuthResult> LicenseAuthOutcome;
			typedef std::future<LicenseAuthOutcome> LicenseAuthOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::LicenseAuthRequest&, const LicenseAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LicenseAuthAsyncHandler;
			typedef Outcome<Error, Model::QueryRunningInstanceResult> QueryRunningInstanceOutcome;
			typedef std::future<QueryRunningInstanceOutcome> QueryRunningInstanceOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::QueryRunningInstanceRequest&, const QueryRunningInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRunningInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryTimedResetOperateStatusResult> QueryTimedResetOperateStatusOutcome;
			typedef std::future<QueryTimedResetOperateStatusOutcome> QueryTimedResetOperateStatusOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::QueryTimedResetOperateStatusRequest&, const QueryTimedResetOperateStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTimedResetOperateStatusAsyncHandler;
			typedef Outcome<Error, Model::SendMessageResult> SendMessageOutcome;
			typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SendMessageRequest&, const SendMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;
			typedef Outcome<Error, Model::StartInstanceResult> StartInstanceOutcome;
			typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::StartInstanceRequest&, const StartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartTimedResetOperateResult> StartTimedResetOperateOutcome;
			typedef std::future<StartTimedResetOperateOutcome> StartTimedResetOperateOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::StartTimedResetOperateRequest&, const StartTimedResetOperateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTimedResetOperateAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::SubmitTextTo2DAvatarVideoTaskResult> SubmitTextTo2DAvatarVideoTaskOutcome;
			typedef std::future<SubmitTextTo2DAvatarVideoTaskOutcome> SubmitTextTo2DAvatarVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SubmitTextTo2DAvatarVideoTaskRequest&, const SubmitTextTo2DAvatarVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTextTo2DAvatarVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitTextTo3DAvatarVideoTaskResult> SubmitTextTo3DAvatarVideoTaskOutcome;
			typedef std::future<SubmitTextTo3DAvatarVideoTaskOutcome> SubmitTextTo3DAvatarVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SubmitTextTo3DAvatarVideoTaskRequest&, const SubmitTextTo3DAvatarVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTextTo3DAvatarVideoTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitTextToSignVideoTaskResult> SubmitTextToSignVideoTaskOutcome;
			typedef std::future<SubmitTextToSignVideoTaskOutcome> SubmitTextToSignVideoTaskOutcomeCallable;
			typedef std::function<void(const AvatarClient*, const Model::SubmitTextToSignVideoTaskRequest&, const SubmitTextToSignVideoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTextToSignVideoTaskAsyncHandler;

			AvatarClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AvatarClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AvatarClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AvatarClient();
			CancelVideoTaskOutcome cancelVideoTask(const Model::CancelVideoTaskRequest &request)const;
			void cancelVideoTaskAsync(const Model::CancelVideoTaskRequest& request, const CancelVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelVideoTaskOutcomeCallable cancelVideoTaskCallable(const Model::CancelVideoTaskRequest& request) const;
			CloseTimedResetOperateOutcome closeTimedResetOperate(const Model::CloseTimedResetOperateRequest &request)const;
			void closeTimedResetOperateAsync(const Model::CloseTimedResetOperateRequest& request, const CloseTimedResetOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseTimedResetOperateOutcomeCallable closeTimedResetOperateCallable(const Model::CloseTimedResetOperateRequest& request) const;
			DuplexDecisionOutcome duplexDecision(const Model::DuplexDecisionRequest &request)const;
			void duplexDecisionAsync(const Model::DuplexDecisionRequest& request, const DuplexDecisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DuplexDecisionOutcomeCallable duplexDecisionCallable(const Model::DuplexDecisionRequest& request) const;
			GetVideoTaskInfoOutcome getVideoTaskInfo(const Model::GetVideoTaskInfoRequest &request)const;
			void getVideoTaskInfoAsync(const Model::GetVideoTaskInfoRequest& request, const GetVideoTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoTaskInfoOutcomeCallable getVideoTaskInfoCallable(const Model::GetVideoTaskInfoRequest& request) const;
			LicenseAuthOutcome licenseAuth(const Model::LicenseAuthRequest &request)const;
			void licenseAuthAsync(const Model::LicenseAuthRequest& request, const LicenseAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LicenseAuthOutcomeCallable licenseAuthCallable(const Model::LicenseAuthRequest& request) const;
			QueryRunningInstanceOutcome queryRunningInstance(const Model::QueryRunningInstanceRequest &request)const;
			void queryRunningInstanceAsync(const Model::QueryRunningInstanceRequest& request, const QueryRunningInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRunningInstanceOutcomeCallable queryRunningInstanceCallable(const Model::QueryRunningInstanceRequest& request) const;
			QueryTimedResetOperateStatusOutcome queryTimedResetOperateStatus(const Model::QueryTimedResetOperateStatusRequest &request)const;
			void queryTimedResetOperateStatusAsync(const Model::QueryTimedResetOperateStatusRequest& request, const QueryTimedResetOperateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTimedResetOperateStatusOutcomeCallable queryTimedResetOperateStatusCallable(const Model::QueryTimedResetOperateStatusRequest& request) const;
			SendMessageOutcome sendMessage(const Model::SendMessageRequest &request)const;
			void sendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageOutcomeCallable sendMessageCallable(const Model::SendMessageRequest& request) const;
			StartInstanceOutcome startInstance(const Model::StartInstanceRequest &request)const;
			void startInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartInstanceOutcomeCallable startInstanceCallable(const Model::StartInstanceRequest& request) const;
			StartTimedResetOperateOutcome startTimedResetOperate(const Model::StartTimedResetOperateRequest &request)const;
			void startTimedResetOperateAsync(const Model::StartTimedResetOperateRequest& request, const StartTimedResetOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTimedResetOperateOutcomeCallable startTimedResetOperateCallable(const Model::StartTimedResetOperateRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			SubmitTextTo2DAvatarVideoTaskOutcome submitTextTo2DAvatarVideoTask(const Model::SubmitTextTo2DAvatarVideoTaskRequest &request)const;
			void submitTextTo2DAvatarVideoTaskAsync(const Model::SubmitTextTo2DAvatarVideoTaskRequest& request, const SubmitTextTo2DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTextTo2DAvatarVideoTaskOutcomeCallable submitTextTo2DAvatarVideoTaskCallable(const Model::SubmitTextTo2DAvatarVideoTaskRequest& request) const;
			SubmitTextTo3DAvatarVideoTaskOutcome submitTextTo3DAvatarVideoTask(const Model::SubmitTextTo3DAvatarVideoTaskRequest &request)const;
			void submitTextTo3DAvatarVideoTaskAsync(const Model::SubmitTextTo3DAvatarVideoTaskRequest& request, const SubmitTextTo3DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTextTo3DAvatarVideoTaskOutcomeCallable submitTextTo3DAvatarVideoTaskCallable(const Model::SubmitTextTo3DAvatarVideoTaskRequest& request) const;
			SubmitTextToSignVideoTaskOutcome submitTextToSignVideoTask(const Model::SubmitTextToSignVideoTaskRequest &request)const;
			void submitTextToSignVideoTaskAsync(const Model::SubmitTextToSignVideoTaskRequest& request, const SubmitTextToSignVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTextToSignVideoTaskOutcomeCallable submitTextToSignVideoTaskCallable(const Model::SubmitTextToSignVideoTaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AVATAR_AVATARCLIENT_H_
