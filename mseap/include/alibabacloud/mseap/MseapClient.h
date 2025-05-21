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

#ifndef ALIBABACLOUD_MSEAP_MSEAPCLIENT_H_
#define ALIBABACLOUD_MSEAP_MSEAPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "MseapExport.h"
#include "model/ActivateLicenseRequest.h"
#include "model/ActivateLicenseResult.h"
#include "model/CallbackTaskRequest.h"
#include "model/CallbackTaskResult.h"
#include "model/DescribeAgreementStatusRequest.h"
#include "model/DescribeAgreementStatusResult.h"
#include "model/GenerateUploadFilePolicyForPartnerRequest.h"
#include "model/GenerateUploadFilePolicyForPartnerResult.h"
#include "model/GetNodeByFlowIdRequest.h"
#include "model/GetNodeByFlowIdResult.h"
#include "model/GetNodeByTemplateIdRequest.h"
#include "model/GetNodeByTemplateIdResult.h"
#include "model/GetPlatformUserInfoForPartnerRequest.h"
#include "model/GetPlatformUserInfoForPartnerResult.h"
#include "model/GetProxyByTypeRequest.h"
#include "model/GetProxyByTypeResult.h"
#include "model/GetRedisValueRequest.h"
#include "model/GetRedisValueResult.h"
#include "model/GetVariableRequest.h"
#include "model/GetVariableResult.h"
#include "model/IdentifyCodeRequest.h"
#include "model/IdentifyCodeResult.h"
#include "model/PullRpaModelRequest.h"
#include "model/PullRpaModelResult.h"
#include "model/PullTaskRequest.h"
#include "model/PullTaskResult.h"
#include "model/PushRpaTaskRequest.h"
#include "model/PushRpaTaskResult.h"
#include "model/PushRpaTaskDetailRequest.h"
#include "model/PushRpaTaskDetailResult.h"
#include "model/SendNotificationForPartnerRequest.h"
#include "model/SendNotificationForPartnerResult.h"
#include "model/SetRedisValueRequest.h"
#include "model/SetRedisValueResult.h"
#include "model/UpdateAgreementStatusRequest.h"
#include "model/UpdateAgreementStatusResult.h"


namespace AlibabaCloud
{
	namespace Mseap
	{
		class ALIBABACLOUD_MSEAP_EXPORT MseapClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateLicenseResult> ActivateLicenseOutcome;
			typedef std::future<ActivateLicenseOutcome> ActivateLicenseOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::ActivateLicenseRequest&, const ActivateLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateLicenseAsyncHandler;
			typedef Outcome<Error, Model::CallbackTaskResult> CallbackTaskOutcome;
			typedef std::future<CallbackTaskOutcome> CallbackTaskOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::CallbackTaskRequest&, const CallbackTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CallbackTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeAgreementStatusResult> DescribeAgreementStatusOutcome;
			typedef std::future<DescribeAgreementStatusOutcome> DescribeAgreementStatusOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::DescribeAgreementStatusRequest&, const DescribeAgreementStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgreementStatusAsyncHandler;
			typedef Outcome<Error, Model::GenerateUploadFilePolicyForPartnerResult> GenerateUploadFilePolicyForPartnerOutcome;
			typedef std::future<GenerateUploadFilePolicyForPartnerOutcome> GenerateUploadFilePolicyForPartnerOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::GenerateUploadFilePolicyForPartnerRequest&, const GenerateUploadFilePolicyForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUploadFilePolicyForPartnerAsyncHandler;
			typedef Outcome<Error, Model::GetNodeByFlowIdResult> GetNodeByFlowIdOutcome;
			typedef std::future<GetNodeByFlowIdOutcome> GetNodeByFlowIdOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::GetNodeByFlowIdRequest&, const GetNodeByFlowIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeByFlowIdAsyncHandler;
			typedef Outcome<Error, Model::GetNodeByTemplateIdResult> GetNodeByTemplateIdOutcome;
			typedef std::future<GetNodeByTemplateIdOutcome> GetNodeByTemplateIdOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::GetNodeByTemplateIdRequest&, const GetNodeByTemplateIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeByTemplateIdAsyncHandler;
			typedef Outcome<Error, Model::GetPlatformUserInfoForPartnerResult> GetPlatformUserInfoForPartnerOutcome;
			typedef std::future<GetPlatformUserInfoForPartnerOutcome> GetPlatformUserInfoForPartnerOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::GetPlatformUserInfoForPartnerRequest&, const GetPlatformUserInfoForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPlatformUserInfoForPartnerAsyncHandler;
			typedef Outcome<Error, Model::GetProxyByTypeResult> GetProxyByTypeOutcome;
			typedef std::future<GetProxyByTypeOutcome> GetProxyByTypeOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::GetProxyByTypeRequest&, const GetProxyByTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProxyByTypeAsyncHandler;
			typedef Outcome<Error, Model::GetRedisValueResult> GetRedisValueOutcome;
			typedef std::future<GetRedisValueOutcome> GetRedisValueOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::GetRedisValueRequest&, const GetRedisValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRedisValueAsyncHandler;
			typedef Outcome<Error, Model::GetVariableResult> GetVariableOutcome;
			typedef std::future<GetVariableOutcome> GetVariableOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::GetVariableRequest&, const GetVariableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVariableAsyncHandler;
			typedef Outcome<Error, Model::IdentifyCodeResult> IdentifyCodeOutcome;
			typedef std::future<IdentifyCodeOutcome> IdentifyCodeOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::IdentifyCodeRequest&, const IdentifyCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IdentifyCodeAsyncHandler;
			typedef Outcome<Error, Model::PullRpaModelResult> PullRpaModelOutcome;
			typedef std::future<PullRpaModelOutcome> PullRpaModelOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::PullRpaModelRequest&, const PullRpaModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PullRpaModelAsyncHandler;
			typedef Outcome<Error, Model::PullTaskResult> PullTaskOutcome;
			typedef std::future<PullTaskOutcome> PullTaskOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::PullTaskRequest&, const PullTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PullTaskAsyncHandler;
			typedef Outcome<Error, Model::PushRpaTaskResult> PushRpaTaskOutcome;
			typedef std::future<PushRpaTaskOutcome> PushRpaTaskOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::PushRpaTaskRequest&, const PushRpaTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushRpaTaskAsyncHandler;
			typedef Outcome<Error, Model::PushRpaTaskDetailResult> PushRpaTaskDetailOutcome;
			typedef std::future<PushRpaTaskDetailOutcome> PushRpaTaskDetailOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::PushRpaTaskDetailRequest&, const PushRpaTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushRpaTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::SendNotificationForPartnerResult> SendNotificationForPartnerOutcome;
			typedef std::future<SendNotificationForPartnerOutcome> SendNotificationForPartnerOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::SendNotificationForPartnerRequest&, const SendNotificationForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendNotificationForPartnerAsyncHandler;
			typedef Outcome<Error, Model::SetRedisValueResult> SetRedisValueOutcome;
			typedef std::future<SetRedisValueOutcome> SetRedisValueOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::SetRedisValueRequest&, const SetRedisValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRedisValueAsyncHandler;
			typedef Outcome<Error, Model::UpdateAgreementStatusResult> UpdateAgreementStatusOutcome;
			typedef std::future<UpdateAgreementStatusOutcome> UpdateAgreementStatusOutcomeCallable;
			typedef std::function<void(const MseapClient*, const Model::UpdateAgreementStatusRequest&, const UpdateAgreementStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAgreementStatusAsyncHandler;

			MseapClient(const Credentials &credentials, const ClientConfiguration &configuration);
			MseapClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			MseapClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~MseapClient();
			ActivateLicenseOutcome activateLicense(const Model::ActivateLicenseRequest &request)const;
			void activateLicenseAsync(const Model::ActivateLicenseRequest& request, const ActivateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateLicenseOutcomeCallable activateLicenseCallable(const Model::ActivateLicenseRequest& request) const;
			CallbackTaskOutcome callbackTask(const Model::CallbackTaskRequest &request)const;
			void callbackTaskAsync(const Model::CallbackTaskRequest& request, const CallbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CallbackTaskOutcomeCallable callbackTaskCallable(const Model::CallbackTaskRequest& request) const;
			DescribeAgreementStatusOutcome describeAgreementStatus(const Model::DescribeAgreementStatusRequest &request)const;
			void describeAgreementStatusAsync(const Model::DescribeAgreementStatusRequest& request, const DescribeAgreementStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAgreementStatusOutcomeCallable describeAgreementStatusCallable(const Model::DescribeAgreementStatusRequest& request) const;
			GenerateUploadFilePolicyForPartnerOutcome generateUploadFilePolicyForPartner(const Model::GenerateUploadFilePolicyForPartnerRequest &request)const;
			void generateUploadFilePolicyForPartnerAsync(const Model::GenerateUploadFilePolicyForPartnerRequest& request, const GenerateUploadFilePolicyForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateUploadFilePolicyForPartnerOutcomeCallable generateUploadFilePolicyForPartnerCallable(const Model::GenerateUploadFilePolicyForPartnerRequest& request) const;
			GetNodeByFlowIdOutcome getNodeByFlowId(const Model::GetNodeByFlowIdRequest &request)const;
			void getNodeByFlowIdAsync(const Model::GetNodeByFlowIdRequest& request, const GetNodeByFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeByFlowIdOutcomeCallable getNodeByFlowIdCallable(const Model::GetNodeByFlowIdRequest& request) const;
			GetNodeByTemplateIdOutcome getNodeByTemplateId(const Model::GetNodeByTemplateIdRequest &request)const;
			void getNodeByTemplateIdAsync(const Model::GetNodeByTemplateIdRequest& request, const GetNodeByTemplateIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeByTemplateIdOutcomeCallable getNodeByTemplateIdCallable(const Model::GetNodeByTemplateIdRequest& request) const;
			GetPlatformUserInfoForPartnerOutcome getPlatformUserInfoForPartner(const Model::GetPlatformUserInfoForPartnerRequest &request)const;
			void getPlatformUserInfoForPartnerAsync(const Model::GetPlatformUserInfoForPartnerRequest& request, const GetPlatformUserInfoForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPlatformUserInfoForPartnerOutcomeCallable getPlatformUserInfoForPartnerCallable(const Model::GetPlatformUserInfoForPartnerRequest& request) const;
			GetProxyByTypeOutcome getProxyByType(const Model::GetProxyByTypeRequest &request)const;
			void getProxyByTypeAsync(const Model::GetProxyByTypeRequest& request, const GetProxyByTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProxyByTypeOutcomeCallable getProxyByTypeCallable(const Model::GetProxyByTypeRequest& request) const;
			GetRedisValueOutcome getRedisValue(const Model::GetRedisValueRequest &request)const;
			void getRedisValueAsync(const Model::GetRedisValueRequest& request, const GetRedisValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRedisValueOutcomeCallable getRedisValueCallable(const Model::GetRedisValueRequest& request) const;
			GetVariableOutcome getVariable(const Model::GetVariableRequest &request)const;
			void getVariableAsync(const Model::GetVariableRequest& request, const GetVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVariableOutcomeCallable getVariableCallable(const Model::GetVariableRequest& request) const;
			IdentifyCodeOutcome identifyCode(const Model::IdentifyCodeRequest &request)const;
			void identifyCodeAsync(const Model::IdentifyCodeRequest& request, const IdentifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IdentifyCodeOutcomeCallable identifyCodeCallable(const Model::IdentifyCodeRequest& request) const;
			PullRpaModelOutcome pullRpaModel(const Model::PullRpaModelRequest &request)const;
			void pullRpaModelAsync(const Model::PullRpaModelRequest& request, const PullRpaModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PullRpaModelOutcomeCallable pullRpaModelCallable(const Model::PullRpaModelRequest& request) const;
			PullTaskOutcome pullTask(const Model::PullTaskRequest &request)const;
			void pullTaskAsync(const Model::PullTaskRequest& request, const PullTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PullTaskOutcomeCallable pullTaskCallable(const Model::PullTaskRequest& request) const;
			PushRpaTaskOutcome pushRpaTask(const Model::PushRpaTaskRequest &request)const;
			void pushRpaTaskAsync(const Model::PushRpaTaskRequest& request, const PushRpaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushRpaTaskOutcomeCallable pushRpaTaskCallable(const Model::PushRpaTaskRequest& request) const;
			PushRpaTaskDetailOutcome pushRpaTaskDetail(const Model::PushRpaTaskDetailRequest &request)const;
			void pushRpaTaskDetailAsync(const Model::PushRpaTaskDetailRequest& request, const PushRpaTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushRpaTaskDetailOutcomeCallable pushRpaTaskDetailCallable(const Model::PushRpaTaskDetailRequest& request) const;
			SendNotificationForPartnerOutcome sendNotificationForPartner(const Model::SendNotificationForPartnerRequest &request)const;
			void sendNotificationForPartnerAsync(const Model::SendNotificationForPartnerRequest& request, const SendNotificationForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendNotificationForPartnerOutcomeCallable sendNotificationForPartnerCallable(const Model::SendNotificationForPartnerRequest& request) const;
			SetRedisValueOutcome setRedisValue(const Model::SetRedisValueRequest &request)const;
			void setRedisValueAsync(const Model::SetRedisValueRequest& request, const SetRedisValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetRedisValueOutcomeCallable setRedisValueCallable(const Model::SetRedisValueRequest& request) const;
			UpdateAgreementStatusOutcome updateAgreementStatus(const Model::UpdateAgreementStatusRequest &request)const;
			void updateAgreementStatusAsync(const Model::UpdateAgreementStatusRequest& request, const UpdateAgreementStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAgreementStatusOutcomeCallable updateAgreementStatusCallable(const Model::UpdateAgreementStatusRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MSEAP_MSEAPCLIENT_H_
