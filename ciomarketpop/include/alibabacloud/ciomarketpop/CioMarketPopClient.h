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

#ifndef ALIBABACLOUD_CIOMARKETPOP_CIOMARKETPOPCLIENT_H_
#define ALIBABACLOUD_CIOMARKETPOP_CIOMARKETPOPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CioMarketPopExport.h"
#include "model/GetEveryOneSellsFormListRequest.h"
#include "model/GetEveryOneSellsFormListResult.h"


namespace AlibabaCloud
{
	namespace CioMarketPop
	{
		class ALIBABACLOUD_CIOMARKETPOP_EXPORT CioMarketPopClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetEveryOneSellsFormListResult> GetEveryOneSellsFormListOutcome;
			typedef std::future<GetEveryOneSellsFormListOutcome> GetEveryOneSellsFormListOutcomeCallable;
			typedef std::function<void(const CioMarketPopClient*, const Model::GetEveryOneSellsFormListRequest&, const GetEveryOneSellsFormListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEveryOneSellsFormListAsyncHandler;

			CioMarketPopClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CioMarketPopClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CioMarketPopClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CioMarketPopClient();
			GetEveryOneSellsFormListOutcome getEveryOneSellsFormList(const Model::GetEveryOneSellsFormListRequest &request)const;
			void getEveryOneSellsFormListAsync(const Model::GetEveryOneSellsFormListRequest& request, const GetEveryOneSellsFormListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEveryOneSellsFormListOutcomeCallable getEveryOneSellsFormListCallable(const Model::GetEveryOneSellsFormListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CIOMARKETPOP_CIOMARKETPOPCLIENT_H_
