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

#ifndef ALIBABACLOUD_SAF_SAFCLIENT_H_
#define ALIBABACLOUD_SAF_SAFCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SafExport.h"
#include "model/ExecuteRequestRequest.h"
#include "model/ExecuteRequestResult.h"


namespace AlibabaCloud
{
	namespace Saf
	{
		class ALIBABACLOUD_SAF_EXPORT SafClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ExecuteRequestResult> ExecuteRequestOutcome;
			typedef std::future<ExecuteRequestOutcome> ExecuteRequestOutcomeCallable;
			typedef std::function<void(const SafClient*, const Model::ExecuteRequestRequest&, const ExecuteRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteRequestAsyncHandler;

			SafClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SafClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SafClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SafClient();
			ExecuteRequestOutcome executeRequest(const Model::ExecuteRequestRequest &request)const;
			void executeRequestAsync(const Model::ExecuteRequestRequest& request, const ExecuteRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteRequestOutcomeCallable executeRequestCallable(const Model::ExecuteRequestRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAF_SAFCLIENT_H_
