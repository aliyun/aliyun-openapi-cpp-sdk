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

#ifndef ALIBABACLOUD_DYSMSAPI_DYSMSAPICLIENT_H_
#define ALIBABACLOUD_DYSMSAPI_DYSMSAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DysmsapiExport.h"
#include "model/BatchSendMessageToGlobeRequest.h"
#include "model/BatchSendMessageToGlobeResult.h"
#include "model/ConversionDataRequest.h"
#include "model/ConversionDataResult.h"
#include "model/QueryMessageRequest.h"
#include "model/QueryMessageResult.h"
#include "model/SendMessageToGlobeRequest.h"
#include "model/SendMessageToGlobeResult.h"
#include "model/SendMessageWithTemplateRequest.h"
#include "model/SendMessageWithTemplateResult.h"
#include "model/SmsConversionRequest.h"
#include "model/SmsConversionResult.h"


namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		class ALIBABACLOUD_DYSMSAPI_EXPORT DysmsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchSendMessageToGlobeResult> BatchSendMessageToGlobeOutcome;
			typedef std::future<BatchSendMessageToGlobeOutcome> BatchSendMessageToGlobeOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::BatchSendMessageToGlobeRequest&, const BatchSendMessageToGlobeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSendMessageToGlobeAsyncHandler;
			typedef Outcome<Error, Model::ConversionDataResult> ConversionDataOutcome;
			typedef std::future<ConversionDataOutcome> ConversionDataOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::ConversionDataRequest&, const ConversionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConversionDataAsyncHandler;
			typedef Outcome<Error, Model::QueryMessageResult> QueryMessageOutcome;
			typedef std::future<QueryMessageOutcome> QueryMessageOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QueryMessageRequest&, const QueryMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMessageAsyncHandler;
			typedef Outcome<Error, Model::SendMessageToGlobeResult> SendMessageToGlobeOutcome;
			typedef std::future<SendMessageToGlobeOutcome> SendMessageToGlobeOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::SendMessageToGlobeRequest&, const SendMessageToGlobeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageToGlobeAsyncHandler;
			typedef Outcome<Error, Model::SendMessageWithTemplateResult> SendMessageWithTemplateOutcome;
			typedef std::future<SendMessageWithTemplateOutcome> SendMessageWithTemplateOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::SendMessageWithTemplateRequest&, const SendMessageWithTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageWithTemplateAsyncHandler;
			typedef Outcome<Error, Model::SmsConversionResult> SmsConversionOutcome;
			typedef std::future<SmsConversionOutcome> SmsConversionOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::SmsConversionRequest&, const SmsConversionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SmsConversionAsyncHandler;

			DysmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DysmsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DysmsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DysmsapiClient();
			BatchSendMessageToGlobeOutcome batchSendMessageToGlobe(const Model::BatchSendMessageToGlobeRequest &request)const;
			void batchSendMessageToGlobeAsync(const Model::BatchSendMessageToGlobeRequest& request, const BatchSendMessageToGlobeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSendMessageToGlobeOutcomeCallable batchSendMessageToGlobeCallable(const Model::BatchSendMessageToGlobeRequest& request) const;
			ConversionDataOutcome conversionData(const Model::ConversionDataRequest &request)const;
			void conversionDataAsync(const Model::ConversionDataRequest& request, const ConversionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConversionDataOutcomeCallable conversionDataCallable(const Model::ConversionDataRequest& request) const;
			QueryMessageOutcome queryMessage(const Model::QueryMessageRequest &request)const;
			void queryMessageAsync(const Model::QueryMessageRequest& request, const QueryMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMessageOutcomeCallable queryMessageCallable(const Model::QueryMessageRequest& request) const;
			SendMessageToGlobeOutcome sendMessageToGlobe(const Model::SendMessageToGlobeRequest &request)const;
			void sendMessageToGlobeAsync(const Model::SendMessageToGlobeRequest& request, const SendMessageToGlobeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageToGlobeOutcomeCallable sendMessageToGlobeCallable(const Model::SendMessageToGlobeRequest& request) const;
			SendMessageWithTemplateOutcome sendMessageWithTemplate(const Model::SendMessageWithTemplateRequest &request)const;
			void sendMessageWithTemplateAsync(const Model::SendMessageWithTemplateRequest& request, const SendMessageWithTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageWithTemplateOutcomeCallable sendMessageWithTemplateCallable(const Model::SendMessageWithTemplateRequest& request) const;
			SmsConversionOutcome smsConversion(const Model::SmsConversionRequest &request)const;
			void smsConversionAsync(const Model::SmsConversionRequest& request, const SmsConversionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SmsConversionOutcomeCallable smsConversionCallable(const Model::SmsConversionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYSMSAPI_DYSMSAPICLIENT_H_
