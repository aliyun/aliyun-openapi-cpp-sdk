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

#ifndef ALIBABACLOUD_DMS_DMSCLIENT_H_
#define ALIBABACLOUD_DMS_DMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DmsExport.h"
#include "model/CreateAirflowLoginTokenRequest.h"
#include "model/CreateAirflowLoginTokenResult.h"


namespace AlibabaCloud
{
	namespace Dms
	{
		class ALIBABACLOUD_DMS_EXPORT DmsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAirflowLoginTokenResult> CreateAirflowLoginTokenOutcome;
			typedef std::future<CreateAirflowLoginTokenOutcome> CreateAirflowLoginTokenOutcomeCallable;
			typedef std::function<void(const DmsClient*, const Model::CreateAirflowLoginTokenRequest&, const CreateAirflowLoginTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAirflowLoginTokenAsyncHandler;

			DmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DmsClient();
			CreateAirflowLoginTokenOutcome createAirflowLoginToken(const Model::CreateAirflowLoginTokenRequest &request)const;
			void createAirflowLoginTokenAsync(const Model::CreateAirflowLoginTokenRequest& request, const CreateAirflowLoginTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAirflowLoginTokenOutcomeCallable createAirflowLoginTokenCallable(const Model::CreateAirflowLoginTokenRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DMS_DMSCLIENT_H_
