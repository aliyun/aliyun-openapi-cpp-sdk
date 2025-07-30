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

#include <alibabacloud/ciomarketpop/CioMarketPopClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CioMarketPop;
using namespace AlibabaCloud::CioMarketPop::Model;

namespace
{
	const std::string SERVICE_NAME = "CioMarketPop";
}

CioMarketPopClient::CioMarketPopClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CioMarketPopClient::CioMarketPopClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CioMarketPopClient::CioMarketPopClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CioMarketPopClient::~CioMarketPopClient()
{}

CioMarketPopClient::GetEveryOneSellsFormListOutcome CioMarketPopClient::getEveryOneSellsFormList(const GetEveryOneSellsFormListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEveryOneSellsFormListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEveryOneSellsFormListOutcome(GetEveryOneSellsFormListResult(outcome.result()));
	else
		return GetEveryOneSellsFormListOutcome(outcome.error());
}

void CioMarketPopClient::getEveryOneSellsFormListAsync(const GetEveryOneSellsFormListRequest& request, const GetEveryOneSellsFormListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEveryOneSellsFormList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CioMarketPopClient::GetEveryOneSellsFormListOutcomeCallable CioMarketPopClient::getEveryOneSellsFormListCallable(const GetEveryOneSellsFormListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEveryOneSellsFormListOutcome()>>(
			[this, request]()
			{
			return this->getEveryOneSellsFormList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

