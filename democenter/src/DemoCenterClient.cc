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

#include <alibabacloud/democenter/DemoCenterClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::DemoCenter;
using namespace AlibabaCloud::DemoCenter::Model;

namespace
{
	const std::string SERVICE_NAME = "DemoCenter";
}

DemoCenterClient::DemoCenterClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DemoCenterClient::DemoCenterClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DemoCenterClient::DemoCenterClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DemoCenterClient::~DemoCenterClient()
{}

DemoCenterClient::CreateDemoAccessTokenOutcome DemoCenterClient::createDemoAccessToken(const CreateDemoAccessTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDemoAccessTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDemoAccessTokenOutcome(CreateDemoAccessTokenResult(outcome.result()));
	else
		return CreateDemoAccessTokenOutcome(outcome.error());
}

void DemoCenterClient::createDemoAccessTokenAsync(const CreateDemoAccessTokenRequest& request, const CreateDemoAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDemoAccessToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DemoCenterClient::CreateDemoAccessTokenOutcomeCallable DemoCenterClient::createDemoAccessTokenCallable(const CreateDemoAccessTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDemoAccessTokenOutcome()>>(
			[this, request]()
			{
			return this->createDemoAccessToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DemoCenterClient::DescribeDemoAccessTokenOutcome DemoCenterClient::describeDemoAccessToken(const DescribeDemoAccessTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDemoAccessTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDemoAccessTokenOutcome(DescribeDemoAccessTokenResult(outcome.result()));
	else
		return DescribeDemoAccessTokenOutcome(outcome.error());
}

void DemoCenterClient::describeDemoAccessTokenAsync(const DescribeDemoAccessTokenRequest& request, const DescribeDemoAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDemoAccessToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DemoCenterClient::DescribeDemoAccessTokenOutcomeCallable DemoCenterClient::describeDemoAccessTokenCallable(const DescribeDemoAccessTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDemoAccessTokenOutcome()>>(
			[this, request]()
			{
			return this->describeDemoAccessToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DemoCenterClient::ExpireDemoAccessTokenOutcome DemoCenterClient::expireDemoAccessToken(const ExpireDemoAccessTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExpireDemoAccessTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExpireDemoAccessTokenOutcome(ExpireDemoAccessTokenResult(outcome.result()));
	else
		return ExpireDemoAccessTokenOutcome(outcome.error());
}

void DemoCenterClient::expireDemoAccessTokenAsync(const ExpireDemoAccessTokenRequest& request, const ExpireDemoAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, expireDemoAccessToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DemoCenterClient::ExpireDemoAccessTokenOutcomeCallable DemoCenterClient::expireDemoAccessTokenCallable(const ExpireDemoAccessTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExpireDemoAccessTokenOutcome()>>(
			[this, request]()
			{
			return this->expireDemoAccessToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DemoCenterClient::GetDemoTrialAuthOutcome DemoCenterClient::getDemoTrialAuth(const GetDemoTrialAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDemoTrialAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDemoTrialAuthOutcome(GetDemoTrialAuthResult(outcome.result()));
	else
		return GetDemoTrialAuthOutcome(outcome.error());
}

void DemoCenterClient::getDemoTrialAuthAsync(const GetDemoTrialAuthRequest& request, const GetDemoTrialAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDemoTrialAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DemoCenterClient::GetDemoTrialAuthOutcomeCallable DemoCenterClient::getDemoTrialAuthCallable(const GetDemoTrialAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDemoTrialAuthOutcome()>>(
			[this, request]()
			{
			return this->getDemoTrialAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

