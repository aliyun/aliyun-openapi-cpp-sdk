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
#include "model/SendSmsRequest.h"
#include "model/SendSmsResult.h"
#include "model/SendBatchSmsRequest.h"
#include "model/SendBatchSmsResult.h"
#include "model/QuerySendDetailsRequest.h"
#include "model/QuerySendDetailsResult.h"


namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		class ALIBABACLOUD_DYSMSAPI_EXPORT DysmsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::SendSmsResult> SendSmsOutcome;
			typedef std::future<SendSmsOutcome> SendSmsOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::SendSmsRequest&, const SendSmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsAsyncHandler;
			typedef Outcome<Error, Model::SendBatchSmsResult> SendBatchSmsOutcome;
			typedef std::future<SendBatchSmsOutcome> SendBatchSmsOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::SendBatchSmsRequest&, const SendBatchSmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendBatchSmsAsyncHandler;
			typedef Outcome<Error, Model::QuerySendDetailsResult> QuerySendDetailsOutcome;
			typedef std::future<QuerySendDetailsOutcome> QuerySendDetailsOutcomeCallable;
			typedef std::function<void(const DysmsapiClient*, const Model::QuerySendDetailsRequest&, const QuerySendDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySendDetailsAsyncHandler;

			DysmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DysmsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DysmsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DysmsapiClient();
			SendSmsOutcome sendSms(const Model::SendSmsRequest &request)const;
			void sendSmsAsync(const Model::SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendSmsOutcomeCallable sendSmsCallable(const Model::SendSmsRequest& request) const;
			SendBatchSmsOutcome sendBatchSms(const Model::SendBatchSmsRequest &request)const;
			void sendBatchSmsAsync(const Model::SendBatchSmsRequest& request, const SendBatchSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendBatchSmsOutcomeCallable sendBatchSmsCallable(const Model::SendBatchSmsRequest& request) const;
			QuerySendDetailsOutcome querySendDetails(const Model::QuerySendDetailsRequest &request)const;
			void querySendDetailsAsync(const Model::QuerySendDetailsRequest& request, const QuerySendDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySendDetailsOutcomeCallable querySendDetailsCallable(const Model::QuerySendDetailsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYSMSAPI_DYSMSAPICLIENT_H_
