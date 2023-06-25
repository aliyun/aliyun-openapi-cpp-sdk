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

#include <alibabacloud/ddosbgp/DdosbgpClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

namespace
{
	const std::string SERVICE_NAME = "ddosbgp";
}

DdosbgpClient::DdosbgpClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdosbgpClient::DdosbgpClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdosbgpClient::DdosbgpClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DdosbgpClient::~DdosbgpClient()
{}

DdosbgpClient::AddIpOutcome DdosbgpClient::addIp(const AddIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddIpOutcome(AddIpResult(outcome.result()));
	else
		return AddIpOutcome(outcome.error());
}

void DdosbgpClient::addIpAsync(const AddIpRequest& request, const AddIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::AddIpOutcomeCallable DdosbgpClient::addIpCallable(const AddIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddIpOutcome()>>(
			[this, request]()
			{
			return this->addIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::CheckAccessLogAuthOutcome DdosbgpClient::checkAccessLogAuth(const CheckAccessLogAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAccessLogAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAccessLogAuthOutcome(CheckAccessLogAuthResult(outcome.result()));
	else
		return CheckAccessLogAuthOutcome(outcome.error());
}

void DdosbgpClient::checkAccessLogAuthAsync(const CheckAccessLogAuthRequest& request, const CheckAccessLogAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAccessLogAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::CheckAccessLogAuthOutcomeCallable DdosbgpClient::checkAccessLogAuthCallable(const CheckAccessLogAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAccessLogAuthOutcome()>>(
			[this, request]()
			{
			return this->checkAccessLogAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::CheckGrantOutcome DdosbgpClient::checkGrant(const CheckGrantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckGrantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckGrantOutcome(CheckGrantResult(outcome.result()));
	else
		return CheckGrantOutcome(outcome.error());
}

void DdosbgpClient::checkGrantAsync(const CheckGrantRequest& request, const CheckGrantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkGrant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::CheckGrantOutcomeCallable DdosbgpClient::checkGrantCallable(const CheckGrantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckGrantOutcome()>>(
			[this, request]()
			{
			return this->checkGrant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::ConfigSchedruleOnDemandOutcome DdosbgpClient::configSchedruleOnDemand(const ConfigSchedruleOnDemandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigSchedruleOnDemandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigSchedruleOnDemandOutcome(ConfigSchedruleOnDemandResult(outcome.result()));
	else
		return ConfigSchedruleOnDemandOutcome(outcome.error());
}

void DdosbgpClient::configSchedruleOnDemandAsync(const ConfigSchedruleOnDemandRequest& request, const ConfigSchedruleOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configSchedruleOnDemand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::ConfigSchedruleOnDemandOutcomeCallable DdosbgpClient::configSchedruleOnDemandCallable(const ConfigSchedruleOnDemandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigSchedruleOnDemandOutcome()>>(
			[this, request]()
			{
			return this->configSchedruleOnDemand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::CreateSchedruleOnDemandOutcome DdosbgpClient::createSchedruleOnDemand(const CreateSchedruleOnDemandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSchedruleOnDemandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSchedruleOnDemandOutcome(CreateSchedruleOnDemandResult(outcome.result()));
	else
		return CreateSchedruleOnDemandOutcome(outcome.error());
}

void DdosbgpClient::createSchedruleOnDemandAsync(const CreateSchedruleOnDemandRequest& request, const CreateSchedruleOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSchedruleOnDemand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::CreateSchedruleOnDemandOutcomeCallable DdosbgpClient::createSchedruleOnDemandCallable(const CreateSchedruleOnDemandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSchedruleOnDemandOutcome()>>(
			[this, request]()
			{
			return this->createSchedruleOnDemand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DeleteBlackholeOutcome DdosbgpClient::deleteBlackhole(const DeleteBlackholeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBlackholeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBlackholeOutcome(DeleteBlackholeResult(outcome.result()));
	else
		return DeleteBlackholeOutcome(outcome.error());
}

void DdosbgpClient::deleteBlackholeAsync(const DeleteBlackholeRequest& request, const DeleteBlackholeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBlackhole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DeleteBlackholeOutcomeCallable DdosbgpClient::deleteBlackholeCallable(const DeleteBlackholeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBlackholeOutcome()>>(
			[this, request]()
			{
			return this->deleteBlackhole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DeleteIpOutcome DdosbgpClient::deleteIp(const DeleteIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIpOutcome(DeleteIpResult(outcome.result()));
	else
		return DeleteIpOutcome(outcome.error());
}

void DdosbgpClient::deleteIpAsync(const DeleteIpRequest& request, const DeleteIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DeleteIpOutcomeCallable DdosbgpClient::deleteIpCallable(const DeleteIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIpOutcome()>>(
			[this, request]()
			{
			return this->deleteIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DeleteSchedruleOnDemandOutcome DdosbgpClient::deleteSchedruleOnDemand(const DeleteSchedruleOnDemandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSchedruleOnDemandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSchedruleOnDemandOutcome(DeleteSchedruleOnDemandResult(outcome.result()));
	else
		return DeleteSchedruleOnDemandOutcome(outcome.error());
}

void DdosbgpClient::deleteSchedruleOnDemandAsync(const DeleteSchedruleOnDemandRequest& request, const DeleteSchedruleOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSchedruleOnDemand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DeleteSchedruleOnDemandOutcomeCallable DdosbgpClient::deleteSchedruleOnDemandCallable(const DeleteSchedruleOnDemandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSchedruleOnDemandOutcome()>>(
			[this, request]()
			{
			return this->deleteSchedruleOnDemand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeDdosEventOutcome DdosbgpClient::describeDdosEvent(const DescribeDdosEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDdosEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDdosEventOutcome(DescribeDdosEventResult(outcome.result()));
	else
		return DescribeDdosEventOutcome(outcome.error());
}

void DdosbgpClient::describeDdosEventAsync(const DescribeDdosEventRequest& request, const DescribeDdosEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDdosEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeDdosEventOutcomeCallable DdosbgpClient::describeDdosEventCallable(const DescribeDdosEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDdosEventOutcome()>>(
			[this, request]()
			{
			return this->describeDdosEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeExcpetionCountOutcome DdosbgpClient::describeExcpetionCount(const DescribeExcpetionCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExcpetionCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExcpetionCountOutcome(DescribeExcpetionCountResult(outcome.result()));
	else
		return DescribeExcpetionCountOutcome(outcome.error());
}

void DdosbgpClient::describeExcpetionCountAsync(const DescribeExcpetionCountRequest& request, const DescribeExcpetionCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExcpetionCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeExcpetionCountOutcomeCallable DdosbgpClient::describeExcpetionCountCallable(const DescribeExcpetionCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExcpetionCountOutcome()>>(
			[this, request]()
			{
			return this->describeExcpetionCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeInstanceListOutcome DdosbgpClient::describeInstanceList(const DescribeInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceListOutcome(DescribeInstanceListResult(outcome.result()));
	else
		return DescribeInstanceListOutcome(outcome.error());
}

void DdosbgpClient::describeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeInstanceListOutcomeCallable DdosbgpClient::describeInstanceListCallable(const DescribeInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceListOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeInstanceSpecsOutcome DdosbgpClient::describeInstanceSpecs(const DescribeInstanceSpecsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSpecsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSpecsOutcome(DescribeInstanceSpecsResult(outcome.result()));
	else
		return DescribeInstanceSpecsOutcome(outcome.error());
}

void DdosbgpClient::describeInstanceSpecsAsync(const DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSpecs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeInstanceSpecsOutcomeCallable DdosbgpClient::describeInstanceSpecsCallable(const DescribeInstanceSpecsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSpecsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSpecs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeOnDemandDdosEventOutcome DdosbgpClient::describeOnDemandDdosEvent(const DescribeOnDemandDdosEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOnDemandDdosEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOnDemandDdosEventOutcome(DescribeOnDemandDdosEventResult(outcome.result()));
	else
		return DescribeOnDemandDdosEventOutcome(outcome.error());
}

void DdosbgpClient::describeOnDemandDdosEventAsync(const DescribeOnDemandDdosEventRequest& request, const DescribeOnDemandDdosEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOnDemandDdosEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeOnDemandDdosEventOutcomeCallable DdosbgpClient::describeOnDemandDdosEventCallable(const DescribeOnDemandDdosEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOnDemandDdosEventOutcome()>>(
			[this, request]()
			{
			return this->describeOnDemandDdosEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeOnDemandInstanceStatusOutcome DdosbgpClient::describeOnDemandInstanceStatus(const DescribeOnDemandInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOnDemandInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOnDemandInstanceStatusOutcome(DescribeOnDemandInstanceStatusResult(outcome.result()));
	else
		return DescribeOnDemandInstanceStatusOutcome(outcome.error());
}

void DdosbgpClient::describeOnDemandInstanceStatusAsync(const DescribeOnDemandInstanceStatusRequest& request, const DescribeOnDemandInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOnDemandInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeOnDemandInstanceStatusOutcomeCallable DdosbgpClient::describeOnDemandInstanceStatusCallable(const DescribeOnDemandInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOnDemandInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeOnDemandInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeOpEntitiesOutcome DdosbgpClient::describeOpEntities(const DescribeOpEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOpEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOpEntitiesOutcome(DescribeOpEntitiesResult(outcome.result()));
	else
		return DescribeOpEntitiesOutcome(outcome.error());
}

void DdosbgpClient::describeOpEntitiesAsync(const DescribeOpEntitiesRequest& request, const DescribeOpEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOpEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeOpEntitiesOutcomeCallable DdosbgpClient::describeOpEntitiesCallable(const DescribeOpEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOpEntitiesOutcome()>>(
			[this, request]()
			{
			return this->describeOpEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribePackIpListOutcome DdosbgpClient::describePackIpList(const DescribePackIpListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePackIpListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePackIpListOutcome(DescribePackIpListResult(outcome.result()));
	else
		return DescribePackIpListOutcome(outcome.error());
}

void DdosbgpClient::describePackIpListAsync(const DescribePackIpListRequest& request, const DescribePackIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePackIpList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribePackIpListOutcomeCallable DdosbgpClient::describePackIpListCallable(const DescribePackIpListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePackIpListOutcome()>>(
			[this, request]()
			{
			return this->describePackIpList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeRegionsOutcome DdosbgpClient::describeRegions(const DescribeRegionsRequest &request) const
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

void DdosbgpClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeRegionsOutcomeCallable DdosbgpClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::DescribeTrafficOutcome DdosbgpClient::describeTraffic(const DescribeTrafficRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTrafficOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTrafficOutcome(DescribeTrafficResult(outcome.result()));
	else
		return DescribeTrafficOutcome(outcome.error());
}

void DdosbgpClient::describeTrafficAsync(const DescribeTrafficRequest& request, const DescribeTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTraffic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::DescribeTrafficOutcomeCallable DdosbgpClient::describeTrafficCallable(const DescribeTrafficRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTrafficOutcome()>>(
			[this, request]()
			{
			return this->describeTraffic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::GetSlsOpenStatusOutcome DdosbgpClient::getSlsOpenStatus(const GetSlsOpenStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSlsOpenStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSlsOpenStatusOutcome(GetSlsOpenStatusResult(outcome.result()));
	else
		return GetSlsOpenStatusOutcome(outcome.error());
}

void DdosbgpClient::getSlsOpenStatusAsync(const GetSlsOpenStatusRequest& request, const GetSlsOpenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSlsOpenStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::GetSlsOpenStatusOutcomeCallable DdosbgpClient::getSlsOpenStatusCallable(const GetSlsOpenStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSlsOpenStatusOutcome()>>(
			[this, request]()
			{
			return this->getSlsOpenStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::ListOpenedAccessLogInstancesOutcome DdosbgpClient::listOpenedAccessLogInstances(const ListOpenedAccessLogInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOpenedAccessLogInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOpenedAccessLogInstancesOutcome(ListOpenedAccessLogInstancesResult(outcome.result()));
	else
		return ListOpenedAccessLogInstancesOutcome(outcome.error());
}

void DdosbgpClient::listOpenedAccessLogInstancesAsync(const ListOpenedAccessLogInstancesRequest& request, const ListOpenedAccessLogInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOpenedAccessLogInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::ListOpenedAccessLogInstancesOutcomeCallable DdosbgpClient::listOpenedAccessLogInstancesCallable(const ListOpenedAccessLogInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOpenedAccessLogInstancesOutcome()>>(
			[this, request]()
			{
			return this->listOpenedAccessLogInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::ListTagKeysOutcome DdosbgpClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void DdosbgpClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::ListTagKeysOutcomeCallable DdosbgpClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::ListTagResourcesOutcome DdosbgpClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void DdosbgpClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::ListTagResourcesOutcomeCallable DdosbgpClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::ModifyRemarkOutcome DdosbgpClient::modifyRemark(const ModifyRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRemarkOutcome(ModifyRemarkResult(outcome.result()));
	else
		return ModifyRemarkOutcome(outcome.error());
}

void DdosbgpClient::modifyRemarkAsync(const ModifyRemarkRequest& request, const ModifyRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::ModifyRemarkOutcomeCallable DdosbgpClient::modifyRemarkCallable(const ModifyRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRemarkOutcome()>>(
			[this, request]()
			{
			return this->modifyRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::QuerySchedruleOnDemandOutcome DdosbgpClient::querySchedruleOnDemand(const QuerySchedruleOnDemandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySchedruleOnDemandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySchedruleOnDemandOutcome(QuerySchedruleOnDemandResult(outcome.result()));
	else
		return QuerySchedruleOnDemandOutcome(outcome.error());
}

void DdosbgpClient::querySchedruleOnDemandAsync(const QuerySchedruleOnDemandRequest& request, const QuerySchedruleOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySchedruleOnDemand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::QuerySchedruleOnDemandOutcomeCallable DdosbgpClient::querySchedruleOnDemandCallable(const QuerySchedruleOnDemandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySchedruleOnDemandOutcome()>>(
			[this, request]()
			{
			return this->querySchedruleOnDemand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::SetInstanceModeOnDemandOutcome DdosbgpClient::setInstanceModeOnDemand(const SetInstanceModeOnDemandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetInstanceModeOnDemandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetInstanceModeOnDemandOutcome(SetInstanceModeOnDemandResult(outcome.result()));
	else
		return SetInstanceModeOnDemandOutcome(outcome.error());
}

void DdosbgpClient::setInstanceModeOnDemandAsync(const SetInstanceModeOnDemandRequest& request, const SetInstanceModeOnDemandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setInstanceModeOnDemand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::SetInstanceModeOnDemandOutcomeCallable DdosbgpClient::setInstanceModeOnDemandCallable(const SetInstanceModeOnDemandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetInstanceModeOnDemandOutcome()>>(
			[this, request]()
			{
			return this->setInstanceModeOnDemand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::TagResourcesOutcome DdosbgpClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void DdosbgpClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::TagResourcesOutcomeCallable DdosbgpClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdosbgpClient::UntagResourcesOutcome DdosbgpClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void DdosbgpClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdosbgpClient::UntagResourcesOutcomeCallable DdosbgpClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

