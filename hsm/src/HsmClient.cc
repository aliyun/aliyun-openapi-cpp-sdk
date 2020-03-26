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

#include <alibabacloud/hsm/HsmClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Hsm;
using namespace AlibabaCloud::Hsm::Model;

namespace
{
	const std::string SERVICE_NAME = "hsm";
}

HsmClient::HsmClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hsm");
}

HsmClient::HsmClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hsm");
}

HsmClient::HsmClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hsm");
}

HsmClient::~HsmClient()
{}

HsmClient::ConfigNetworkOutcome HsmClient::configNetwork(const ConfigNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigNetworkOutcome(ConfigNetworkResult(outcome.result()));
	else
		return ConfigNetworkOutcome(outcome.error());
}

void HsmClient::configNetworkAsync(const ConfigNetworkRequest& request, const ConfigNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::ConfigNetworkOutcomeCallable HsmClient::configNetworkCallable(const ConfigNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigNetworkOutcome()>>(
			[this, request]()
			{
			return this->configNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HsmClient::ConfigWhiteListOutcome HsmClient::configWhiteList(const ConfigWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigWhiteListOutcome(ConfigWhiteListResult(outcome.result()));
	else
		return ConfigWhiteListOutcome(outcome.error());
}

void HsmClient::configWhiteListAsync(const ConfigWhiteListRequest& request, const ConfigWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::ConfigWhiteListOutcomeCallable HsmClient::configWhiteListCallable(const ConfigWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigWhiteListOutcome()>>(
			[this, request]()
			{
			return this->configWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HsmClient::CreateInstanceOutcome HsmClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void HsmClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::CreateInstanceOutcomeCallable HsmClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HsmClient::DescribeInstancesOutcome HsmClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesOutcome(DescribeInstancesResult(outcome.result()));
	else
		return DescribeInstancesOutcome(outcome.error());
}

void HsmClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::DescribeInstancesOutcomeCallable HsmClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HsmClient::DescribeRegionsOutcome HsmClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void HsmClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::DescribeRegionsOutcomeCallable HsmClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HsmClient::ModifyInstanceOutcome HsmClient::modifyInstance(const ModifyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceOutcome(ModifyInstanceResult(outcome.result()));
	else
		return ModifyInstanceOutcome(outcome.error());
}

void HsmClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::ModifyInstanceOutcomeCallable HsmClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HsmClient::MoveResourceGroupOutcome HsmClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveResourceGroupOutcome(MoveResourceGroupResult(outcome.result()));
	else
		return MoveResourceGroupOutcome(outcome.error());
}

void HsmClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::MoveResourceGroupOutcomeCallable HsmClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HsmClient::ReleaseInstanceOutcome HsmClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void HsmClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::ReleaseInstanceOutcomeCallable HsmClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HsmClient::RenewInstanceOutcome HsmClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void HsmClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HsmClient::RenewInstanceOutcomeCallable HsmClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

