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

#include <alibabacloud/tesladam/TeslaDamClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::TeslaDam;
using namespace AlibabaCloud::TeslaDam::Model;

namespace
{
	const std::string SERVICE_NAME = "TeslaDam";
}

TeslaDamClient::TeslaDamClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tesladam");
}

TeslaDamClient::TeslaDamClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tesladam");
}

TeslaDamClient::TeslaDamClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "tesladam");
}

TeslaDamClient::~TeslaDamClient()
{}

TeslaDamClient::ActionOutcome TeslaDamClient::action(const ActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActionOutcome(ActionResult(outcome.result()));
	else
		return ActionOutcome(outcome.error());
}

void TeslaDamClient::actionAsync(const ActionRequest& request, const ActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, action(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaDamClient::ActionOutcomeCallable TeslaDamClient::actionCallable(const ActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActionOutcome()>>(
			[this, request]()
			{
			return this->action(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaDamClient::ActionDiskCheckOutcome TeslaDamClient::actionDiskCheck(const ActionDiskCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActionDiskCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActionDiskCheckOutcome(ActionDiskCheckResult(outcome.result()));
	else
		return ActionDiskCheckOutcome(outcome.error());
}

void TeslaDamClient::actionDiskCheckAsync(const ActionDiskCheckRequest& request, const ActionDiskCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, actionDiskCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaDamClient::ActionDiskCheckOutcomeCallable TeslaDamClient::actionDiskCheckCallable(const ActionDiskCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActionDiskCheckOutcome()>>(
			[this, request]()
			{
			return this->actionDiskCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaDamClient::ActionDiskMaskOutcome TeslaDamClient::actionDiskMask(const ActionDiskMaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActionDiskMaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActionDiskMaskOutcome(ActionDiskMaskResult(outcome.result()));
	else
		return ActionDiskMaskOutcome(outcome.error());
}

void TeslaDamClient::actionDiskMaskAsync(const ActionDiskMaskRequest& request, const ActionDiskMaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, actionDiskMask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaDamClient::ActionDiskMaskOutcomeCallable TeslaDamClient::actionDiskMaskCallable(const ActionDiskMaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActionDiskMaskOutcome()>>(
			[this, request]()
			{
			return this->actionDiskMask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaDamClient::ActionDiskRmaOutcome TeslaDamClient::actionDiskRma(const ActionDiskRmaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActionDiskRmaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActionDiskRmaOutcome(ActionDiskRmaResult(outcome.result()));
	else
		return ActionDiskRmaOutcome(outcome.error());
}

void TeslaDamClient::actionDiskRmaAsync(const ActionDiskRmaRequest& request, const ActionDiskRmaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, actionDiskRma(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaDamClient::ActionDiskRmaOutcomeCallable TeslaDamClient::actionDiskRmaCallable(const ActionDiskRmaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActionDiskRmaOutcome()>>(
			[this, request]()
			{
			return this->actionDiskRma(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaDamClient::HostGetsOutcome TeslaDamClient::hostGets(const HostGetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HostGetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HostGetsOutcome(HostGetsResult(outcome.result()));
	else
		return HostGetsOutcome(outcome.error());
}

void TeslaDamClient::hostGetsAsync(const HostGetsRequest& request, const HostGetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, hostGets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaDamClient::HostGetsOutcomeCallable TeslaDamClient::hostGetsCallable(const HostGetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HostGetsOutcome()>>(
			[this, request]()
			{
			return this->hostGets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

