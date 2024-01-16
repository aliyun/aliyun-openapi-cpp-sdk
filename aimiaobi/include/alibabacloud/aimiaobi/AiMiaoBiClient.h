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

#ifndef ALIBABACLOUD_AIMIAOBI_AIMIAOBICLIENT_H_
#define ALIBABACLOUD_AIMIAOBI_AIMIAOBICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AiMiaoBiExport.h"
#include "model/CreateTokenRequest.h"
#include "model/CreateTokenResult.h"


namespace AlibabaCloud
{
	namespace AiMiaoBi
	{
		class ALIBABACLOUD_AIMIAOBI_EXPORT AiMiaoBiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateTokenResult> CreateTokenOutcome;
			typedef std::future<CreateTokenOutcome> CreateTokenOutcomeCallable;
			typedef std::function<void(const AiMiaoBiClient*, const Model::CreateTokenRequest&, const CreateTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTokenAsyncHandler;

			AiMiaoBiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AiMiaoBiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AiMiaoBiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AiMiaoBiClient();
			CreateTokenOutcome createToken(const Model::CreateTokenRequest &request)const;
			void createTokenAsync(const Model::CreateTokenRequest& request, const CreateTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTokenOutcomeCallable createTokenCallable(const Model::CreateTokenRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AIMIAOBI_AIMIAOBICLIENT_H_
