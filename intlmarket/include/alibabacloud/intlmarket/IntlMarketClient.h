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

#ifndef ALIBABACLOUD_INTLMARKET_INTLMARKETCLIENT_H_
#define ALIBABACLOUD_INTLMARKET_INTLMARKETCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "IntlMarketExport.h"
#include "model/CreateOrderRequest.h"
#include "model/CreateOrderResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"


namespace AlibabaCloud
{
	namespace IntlMarket
	{
		class ALIBABACLOUD_INTLMARKET_EXPORT IntlMarketClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateOrderResult> CreateOrderOutcome;
			typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
			typedef std::function<void(const IntlMarketClient*, const Model::CreateOrderRequest&, const CreateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const IntlMarketClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;

			IntlMarketClient(const Credentials &credentials, const ClientConfiguration &configuration);
			IntlMarketClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			IntlMarketClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~IntlMarketClient();
			CreateOrderOutcome createOrder(const Model::CreateOrderRequest &request)const;
			void createOrderAsync(const Model::CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderOutcomeCallable createOrderCallable(const Model::CreateOrderRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_INTLMARKET_INTLMARKETCLIENT_H_
