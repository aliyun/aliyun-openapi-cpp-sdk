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

#ifndef ALIBABACLOUD_DEMOCENTER_DEMOCENTERCLIENT_H_
#define ALIBABACLOUD_DEMOCENTER_DEMOCENTERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DemoCenterExport.h"
#include "model/CreateDemoAccessTokenRequest.h"
#include "model/CreateDemoAccessTokenResult.h"
#include "model/DescribeDemoAccessTokenRequest.h"
#include "model/DescribeDemoAccessTokenResult.h"
#include "model/ExpireDemoAccessTokenRequest.h"
#include "model/ExpireDemoAccessTokenResult.h"
#include "model/GetDemoTrialAuthRequest.h"
#include "model/GetDemoTrialAuthResult.h"


namespace AlibabaCloud
{
	namespace DemoCenter
	{
		class ALIBABACLOUD_DEMOCENTER_EXPORT DemoCenterClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateDemoAccessTokenResult> CreateDemoAccessTokenOutcome;
			typedef std::future<CreateDemoAccessTokenOutcome> CreateDemoAccessTokenOutcomeCallable;
			typedef std::function<void(const DemoCenterClient*, const Model::CreateDemoAccessTokenRequest&, const CreateDemoAccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDemoAccessTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeDemoAccessTokenResult> DescribeDemoAccessTokenOutcome;
			typedef std::future<DescribeDemoAccessTokenOutcome> DescribeDemoAccessTokenOutcomeCallable;
			typedef std::function<void(const DemoCenterClient*, const Model::DescribeDemoAccessTokenRequest&, const DescribeDemoAccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDemoAccessTokenAsyncHandler;
			typedef Outcome<Error, Model::ExpireDemoAccessTokenResult> ExpireDemoAccessTokenOutcome;
			typedef std::future<ExpireDemoAccessTokenOutcome> ExpireDemoAccessTokenOutcomeCallable;
			typedef std::function<void(const DemoCenterClient*, const Model::ExpireDemoAccessTokenRequest&, const ExpireDemoAccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExpireDemoAccessTokenAsyncHandler;
			typedef Outcome<Error, Model::GetDemoTrialAuthResult> GetDemoTrialAuthOutcome;
			typedef std::future<GetDemoTrialAuthOutcome> GetDemoTrialAuthOutcomeCallable;
			typedef std::function<void(const DemoCenterClient*, const Model::GetDemoTrialAuthRequest&, const GetDemoTrialAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDemoTrialAuthAsyncHandler;

			DemoCenterClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DemoCenterClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DemoCenterClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DemoCenterClient();
			CreateDemoAccessTokenOutcome createDemoAccessToken(const Model::CreateDemoAccessTokenRequest &request)const;
			void createDemoAccessTokenAsync(const Model::CreateDemoAccessTokenRequest& request, const CreateDemoAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDemoAccessTokenOutcomeCallable createDemoAccessTokenCallable(const Model::CreateDemoAccessTokenRequest& request) const;
			DescribeDemoAccessTokenOutcome describeDemoAccessToken(const Model::DescribeDemoAccessTokenRequest &request)const;
			void describeDemoAccessTokenAsync(const Model::DescribeDemoAccessTokenRequest& request, const DescribeDemoAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDemoAccessTokenOutcomeCallable describeDemoAccessTokenCallable(const Model::DescribeDemoAccessTokenRequest& request) const;
			ExpireDemoAccessTokenOutcome expireDemoAccessToken(const Model::ExpireDemoAccessTokenRequest &request)const;
			void expireDemoAccessTokenAsync(const Model::ExpireDemoAccessTokenRequest& request, const ExpireDemoAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExpireDemoAccessTokenOutcomeCallable expireDemoAccessTokenCallable(const Model::ExpireDemoAccessTokenRequest& request) const;
			GetDemoTrialAuthOutcome getDemoTrialAuth(const Model::GetDemoTrialAuthRequest &request)const;
			void getDemoTrialAuthAsync(const Model::GetDemoTrialAuthRequest& request, const GetDemoTrialAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDemoTrialAuthOutcomeCallable getDemoTrialAuthCallable(const Model::GetDemoTrialAuthRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DEMOCENTER_DEMOCENTERCLIENT_H_
