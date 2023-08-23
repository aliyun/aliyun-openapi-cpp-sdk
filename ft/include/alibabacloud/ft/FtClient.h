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

#ifndef ALIBABACLOUD_FT_FTCLIENT_H_
#define ALIBABACLOUD_FT_FTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "FtExport.h"
#include "model/CreateInsRequest.h"
#include "model/CreateInsResult.h"
#include "model/RpcNoDefaultErrorCodeApiRequest.h"
#include "model/RpcNoDefaultErrorCodeApiResult.h"
#include "model/UpdateInsRequest.h"
#include "model/UpdateInsResult.h"


namespace AlibabaCloud
{
	namespace Ft
	{
		class ALIBABACLOUD_FT_EXPORT FtClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateInsResult> CreateInsOutcome;
			typedef std::future<CreateInsOutcome> CreateInsOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::CreateInsRequest&, const CreateInsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInsAsyncHandler;
			typedef Outcome<Error, Model::RpcNoDefaultErrorCodeApiResult> RpcNoDefaultErrorCodeApiOutcome;
			typedef std::future<RpcNoDefaultErrorCodeApiOutcome> RpcNoDefaultErrorCodeApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::RpcNoDefaultErrorCodeApiRequest&, const RpcNoDefaultErrorCodeApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RpcNoDefaultErrorCodeApiAsyncHandler;
			typedef Outcome<Error, Model::UpdateInsResult> UpdateInsOutcome;
			typedef std::future<UpdateInsOutcome> UpdateInsOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::UpdateInsRequest&, const UpdateInsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInsAsyncHandler;

			FtClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FtClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FtClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FtClient();
			CreateInsOutcome createIns(const Model::CreateInsRequest &request)const;
			void createInsAsync(const Model::CreateInsRequest& request, const CreateInsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInsOutcomeCallable createInsCallable(const Model::CreateInsRequest& request) const;
			RpcNoDefaultErrorCodeApiOutcome rpcNoDefaultErrorCodeApi(const Model::RpcNoDefaultErrorCodeApiRequest &request)const;
			void rpcNoDefaultErrorCodeApiAsync(const Model::RpcNoDefaultErrorCodeApiRequest& request, const RpcNoDefaultErrorCodeApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RpcNoDefaultErrorCodeApiOutcomeCallable rpcNoDefaultErrorCodeApiCallable(const Model::RpcNoDefaultErrorCodeApiRequest& request) const;
			UpdateInsOutcome updateIns(const Model::UpdateInsRequest &request)const;
			void updateInsAsync(const Model::UpdateInsRequest& request, const UpdateInsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInsOutcomeCallable updateInsCallable(const Model::UpdateInsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FT_FTCLIENT_H_
