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

#ifndef ALIBABACLOUD_DYBASEAPI_DYBASEAPICLIENT_H_
#define ALIBABACLOUD_DYBASEAPI_DYBASEAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DybaseapiExport.h"
#include "model/QueryTokenForMnsQueueRequest.h"
#include "model/QueryTokenForMnsQueueResult.h"


namespace AlibabaCloud
{
	namespace Dybaseapi
	{
		class ALIBABACLOUD_DYBASEAPI_EXPORT DybaseapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::QueryTokenForMnsQueueResult> QueryTokenForMnsQueueOutcome;
			typedef std::future<QueryTokenForMnsQueueOutcome> QueryTokenForMnsQueueOutcomeCallable;
			typedef std::function<void(const DybaseapiClient*, const Model::QueryTokenForMnsQueueRequest&, const QueryTokenForMnsQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTokenForMnsQueueAsyncHandler;

			DybaseapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DybaseapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DybaseapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DybaseapiClient();
			QueryTokenForMnsQueueOutcome queryTokenForMnsQueue(const Model::QueryTokenForMnsQueueRequest &request)const;
			void queryTokenForMnsQueueAsync(const Model::QueryTokenForMnsQueueRequest& request, const QueryTokenForMnsQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTokenForMnsQueueOutcomeCallable queryTokenForMnsQueueCallable(const Model::QueryTokenForMnsQueueRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYBASEAPI_DYBASEAPICLIENT_H_
