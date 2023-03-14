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

#ifndef ALIBABACLOUD_DYPNSAPI_INTL_DYPNSAPI_INTLCLIENT_H_
#define ALIBABACLOUD_DYPNSAPI_INTL_DYPNSAPI_INTLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Dypnsapi_intlExport.h"
#include "model/CheckVerificationRequest.h"
#include "model/CheckVerificationResult.h"
#include "model/SearchVerificationRequest.h"
#include "model/SearchVerificationResult.h"
#include "model/StartVerificationRequest.h"
#include "model/StartVerificationResult.h"


namespace AlibabaCloud
{
	namespace Dypnsapi_intl
	{
		class ALIBABACLOUD_DYPNSAPI_INTL_EXPORT Dypnsapi_intlClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CheckVerificationResult> CheckVerificationOutcome;
			typedef std::future<CheckVerificationOutcome> CheckVerificationOutcomeCallable;
			typedef std::function<void(const Dypnsapi_intlClient*, const Model::CheckVerificationRequest&, const CheckVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckVerificationAsyncHandler;
			typedef Outcome<Error, Model::SearchVerificationResult> SearchVerificationOutcome;
			typedef std::future<SearchVerificationOutcome> SearchVerificationOutcomeCallable;
			typedef std::function<void(const Dypnsapi_intlClient*, const Model::SearchVerificationRequest&, const SearchVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchVerificationAsyncHandler;
			typedef Outcome<Error, Model::StartVerificationResult> StartVerificationOutcome;
			typedef std::future<StartVerificationOutcome> StartVerificationOutcomeCallable;
			typedef std::function<void(const Dypnsapi_intlClient*, const Model::StartVerificationRequest&, const StartVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartVerificationAsyncHandler;

			Dypnsapi_intlClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Dypnsapi_intlClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Dypnsapi_intlClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Dypnsapi_intlClient();
			CheckVerificationOutcome checkVerification(const Model::CheckVerificationRequest &request)const;
			void checkVerificationAsync(const Model::CheckVerificationRequest& request, const CheckVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckVerificationOutcomeCallable checkVerificationCallable(const Model::CheckVerificationRequest& request) const;
			SearchVerificationOutcome searchVerification(const Model::SearchVerificationRequest &request)const;
			void searchVerificationAsync(const Model::SearchVerificationRequest& request, const SearchVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchVerificationOutcomeCallable searchVerificationCallable(const Model::SearchVerificationRequest& request) const;
			StartVerificationOutcome startVerification(const Model::StartVerificationRequest &request)const;
			void startVerificationAsync(const Model::StartVerificationRequest& request, const StartVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartVerificationOutcomeCallable startVerificationCallable(const Model::StartVerificationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYPNSAPI_INTL_DYPNSAPI_INTLCLIENT_H_
