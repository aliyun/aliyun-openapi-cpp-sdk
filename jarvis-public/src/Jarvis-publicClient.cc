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

#include <alibabacloud/jarvis-public/Jarvis-publicClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Jarvis-public;
using namespace AlibabaCloud::Jarvis-public::Model;

namespace
{
	const std::string SERVICE_NAME = "jarvis-public";
}

Jarvis-publicClient::Jarvis-publicClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "jarvis-public");
}

Jarvis-publicClient::Jarvis-publicClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "jarvis-public");
}

Jarvis-publicClient::Jarvis-publicClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "jarvis-public");
}

Jarvis-publicClient::~Jarvis-publicClient()
{}

Jarvis-publicClient::DescribeCountAttackEventOutcome Jarvis-publicClient::describeCountAttackEvent(const DescribeCountAttackEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCountAttackEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCountAttackEventOutcome(DescribeCountAttackEventResult(outcome.result()));
	else
		return DescribeCountAttackEventOutcome(outcome.error());
}

void Jarvis-publicClient::describeCountAttackEventAsync(const DescribeCountAttackEventRequest& request, const DescribeCountAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCountAttackEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Jarvis-publicClient::DescribeCountAttackEventOutcomeCallable Jarvis-publicClient::describeCountAttackEventCallable(const DescribeCountAttackEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCountAttackEventOutcome()>>(
			[this, request]()
			{
			return this->describeCountAttackEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Jarvis-publicClient::DescribeAttackEventOutcome Jarvis-publicClient::describeAttackEvent(const DescribeAttackEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAttackEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAttackEventOutcome(DescribeAttackEventResult(outcome.result()));
	else
		return DescribeAttackEventOutcome(outcome.error());
}

void Jarvis-publicClient::describeAttackEventAsync(const DescribeAttackEventRequest& request, const DescribeAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAttackEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Jarvis-publicClient::DescribeAttackEventOutcomeCallable Jarvis-publicClient::describeAttackEventCallable(const DescribeAttackEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAttackEventOutcome()>>(
			[this, request]()
			{
			return this->describeAttackEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Jarvis-publicClient::DescribePhoneInfoOutcome Jarvis-publicClient::describePhoneInfo(const DescribePhoneInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhoneInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhoneInfoOutcome(DescribePhoneInfoResult(outcome.result()));
	else
		return DescribePhoneInfoOutcome(outcome.error());
}

void Jarvis-publicClient::describePhoneInfoAsync(const DescribePhoneInfoRequest& request, const DescribePhoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhoneInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Jarvis-publicClient::DescribePhoneInfoOutcomeCallable Jarvis-publicClient::describePhoneInfoCallable(const DescribePhoneInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhoneInfoOutcome()>>(
			[this, request]()
			{
			return this->describePhoneInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Jarvis-publicClient::DescribeAttackedIpOutcome Jarvis-publicClient::describeAttackedIp(const DescribeAttackedIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAttackedIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAttackedIpOutcome(DescribeAttackedIpResult(outcome.result()));
	else
		return DescribeAttackedIpOutcome(outcome.error());
}

void Jarvis-publicClient::describeAttackedIpAsync(const DescribeAttackedIpRequest& request, const DescribeAttackedIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAttackedIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Jarvis-publicClient::DescribeAttackedIpOutcomeCallable Jarvis-publicClient::describeAttackedIpCallable(const DescribeAttackedIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAttackedIpOutcome()>>(
			[this, request]()
			{
			return this->describeAttackedIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

