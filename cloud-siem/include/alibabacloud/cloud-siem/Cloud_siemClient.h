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

#ifndef ALIBABACLOUD_CLOUD_SIEM_CLOUD_SIEMCLIENT_H_
#define ALIBABACLOUD_CLOUD_SIEM_CLOUD_SIEMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Cloud_siemExport.h"
#include "model/BatchJobCheckRequest.h"
#include "model/BatchJobCheckResult.h"
#include "model/BatchJobSubmitRequest.h"
#include "model/BatchJobSubmitResult.h"
#include "model/SendMessageRequest.h"
#include "model/SendMessageResult.h"


namespace AlibabaCloud
{
	namespace Cloud_siem
	{
		class ALIBABACLOUD_CLOUD_SIEM_EXPORT Cloud_siemClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchJobCheckResult> BatchJobCheckOutcome;
			typedef std::future<BatchJobCheckOutcome> BatchJobCheckOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::BatchJobCheckRequest&, const BatchJobCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchJobCheckAsyncHandler;
			typedef Outcome<Error, Model::BatchJobSubmitResult> BatchJobSubmitOutcome;
			typedef std::future<BatchJobSubmitOutcome> BatchJobSubmitOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::BatchJobSubmitRequest&, const BatchJobSubmitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchJobSubmitAsyncHandler;
			typedef Outcome<Error, Model::SendMessageResult> SendMessageOutcome;
			typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::SendMessageRequest&, const SendMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendMessageAsyncHandler;

			Cloud_siemClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Cloud_siemClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Cloud_siemClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Cloud_siemClient();
			BatchJobCheckOutcome batchJobCheck(const Model::BatchJobCheckRequest &request)const;
			void batchJobCheckAsync(const Model::BatchJobCheckRequest& request, const BatchJobCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchJobCheckOutcomeCallable batchJobCheckCallable(const Model::BatchJobCheckRequest& request) const;
			BatchJobSubmitOutcome batchJobSubmit(const Model::BatchJobSubmitRequest &request)const;
			void batchJobSubmitAsync(const Model::BatchJobSubmitRequest& request, const BatchJobSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchJobSubmitOutcomeCallable batchJobSubmitCallable(const Model::BatchJobSubmitRequest& request) const;
			SendMessageOutcome sendMessage(const Model::SendMessageRequest &request)const;
			void sendMessageAsync(const Model::SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendMessageOutcomeCallable sendMessageCallable(const Model::SendMessageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUD_SIEM_CLOUD_SIEMCLIENT_H_
