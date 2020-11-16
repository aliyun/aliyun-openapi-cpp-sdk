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

#include <alibabacloud/goodstech/GoodstechClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Goodstech;
using namespace AlibabaCloud::Goodstech::Model;

namespace
{
	const std::string SERVICE_NAME = "goodstech";
}

GoodstechClient::GoodstechClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "goodstech");
}

GoodstechClient::GoodstechClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "goodstech");
}

GoodstechClient::GoodstechClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "goodstech");
}

GoodstechClient::~GoodstechClient()
{}

GoodstechClient::ClassifyCommodityOutcome GoodstechClient::classifyCommodity(const ClassifyCommodityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClassifyCommodityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClassifyCommodityOutcome(ClassifyCommodityResult(outcome.result()));
	else
		return ClassifyCommodityOutcome(outcome.error());
}

void GoodstechClient::classifyCommodityAsync(const ClassifyCommodityRequest& request, const ClassifyCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, classifyCommodity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GoodstechClient::ClassifyCommodityOutcomeCallable GoodstechClient::classifyCommodityCallable(const ClassifyCommodityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClassifyCommodityOutcome()>>(
			[this, request]()
			{
			return this->classifyCommodity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GoodstechClient::RecognizeFurnitureAttributeOutcome GoodstechClient::recognizeFurnitureAttribute(const RecognizeFurnitureAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeFurnitureAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeFurnitureAttributeOutcome(RecognizeFurnitureAttributeResult(outcome.result()));
	else
		return RecognizeFurnitureAttributeOutcome(outcome.error());
}

void GoodstechClient::recognizeFurnitureAttributeAsync(const RecognizeFurnitureAttributeRequest& request, const RecognizeFurnitureAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeFurnitureAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GoodstechClient::RecognizeFurnitureAttributeOutcomeCallable GoodstechClient::recognizeFurnitureAttributeCallable(const RecognizeFurnitureAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeFurnitureAttributeOutcome()>>(
			[this, request]()
			{
			return this->recognizeFurnitureAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GoodstechClient::RecognizeFurnitureSpuOutcome GoodstechClient::recognizeFurnitureSpu(const RecognizeFurnitureSpuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeFurnitureSpuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeFurnitureSpuOutcome(RecognizeFurnitureSpuResult(outcome.result()));
	else
		return RecognizeFurnitureSpuOutcome(outcome.error());
}

void GoodstechClient::recognizeFurnitureSpuAsync(const RecognizeFurnitureSpuRequest& request, const RecognizeFurnitureSpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeFurnitureSpu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GoodstechClient::RecognizeFurnitureSpuOutcomeCallable GoodstechClient::recognizeFurnitureSpuCallable(const RecognizeFurnitureSpuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeFurnitureSpuOutcome()>>(
			[this, request]()
			{
			return this->recognizeFurnitureSpu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

