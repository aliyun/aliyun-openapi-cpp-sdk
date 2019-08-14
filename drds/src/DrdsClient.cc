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

#include <alibabacloud/drds/DrdsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

namespace
{
	const std::string SERVICE_NAME = "Drds";
}

DrdsClient::DrdsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "drds");
}

DrdsClient::DrdsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "drds");
}

DrdsClient::DrdsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "drds");
}

DrdsClient::~DrdsClient()
{}

DrdsClient::DescribeDrdsDBOutcome DrdsClient::describeDrdsDB(const DescribeDrdsDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDBOutcome(DescribeDrdsDBResult(outcome.result()));
	else
		return DescribeDrdsDBOutcome(outcome.error());
}

void DrdsClient::describeDrdsDBAsync(const DescribeDrdsDBRequest& request, const DescribeDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDBOutcomeCallable DrdsClient::describeDrdsDBCallable(const DescribeDrdsDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDBOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DeleteDrdsDBOutcome DrdsClient::deleteDrdsDB(const DeleteDrdsDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDrdsDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDrdsDBOutcome(DeleteDrdsDBResult(outcome.result()));
	else
		return DeleteDrdsDBOutcome(outcome.error());
}

void DrdsClient::deleteDrdsDBAsync(const DeleteDrdsDBRequest& request, const DeleteDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDrdsDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DeleteDrdsDBOutcomeCallable DrdsClient::deleteDrdsDBCallable(const DeleteDrdsDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDrdsDBOutcome()>>(
			[this, request]()
			{
			return this->deleteDrdsDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateReadOnlyAccountOutcome DrdsClient::createReadOnlyAccount(const CreateReadOnlyAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateReadOnlyAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateReadOnlyAccountOutcome(CreateReadOnlyAccountResult(outcome.result()));
	else
		return CreateReadOnlyAccountOutcome(outcome.error());
}

void DrdsClient::createReadOnlyAccountAsync(const CreateReadOnlyAccountRequest& request, const CreateReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createReadOnlyAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateReadOnlyAccountOutcomeCallable DrdsClient::createReadOnlyAccountCallable(const CreateReadOnlyAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateReadOnlyAccountOutcome()>>(
			[this, request]()
			{
			return this->createReadOnlyAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeShardDBsOutcome DrdsClient::describeShardDBs(const DescribeShardDBsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeShardDBsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeShardDBsOutcome(DescribeShardDBsResult(outcome.result()));
	else
		return DescribeShardDBsOutcome(outcome.error());
}

void DrdsClient::describeShardDBsAsync(const DescribeShardDBsRequest& request, const DescribeShardDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeShardDBs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeShardDBsOutcomeCallable DrdsClient::describeShardDBsCallable(const DescribeShardDBsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeShardDBsOutcome()>>(
			[this, request]()
			{
			return this->describeShardDBs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RemoveDrdsInstanceOutcome DrdsClient::removeDrdsInstance(const RemoveDrdsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveDrdsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveDrdsInstanceOutcome(RemoveDrdsInstanceResult(outcome.result()));
	else
		return RemoveDrdsInstanceOutcome(outcome.error());
}

void DrdsClient::removeDrdsInstanceAsync(const RemoveDrdsInstanceRequest& request, const RemoveDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeDrdsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RemoveDrdsInstanceOutcomeCallable DrdsClient::removeDrdsInstanceCallable(const RemoveDrdsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveDrdsInstanceOutcome()>>(
			[this, request]()
			{
			return this->removeDrdsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyDrdsIpWhiteListOutcome DrdsClient::modifyDrdsIpWhiteList(const ModifyDrdsIpWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDrdsIpWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDrdsIpWhiteListOutcome(ModifyDrdsIpWhiteListResult(outcome.result()));
	else
		return ModifyDrdsIpWhiteListOutcome(outcome.error());
}

void DrdsClient::modifyDrdsIpWhiteListAsync(const ModifyDrdsIpWhiteListRequest& request, const ModifyDrdsIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDrdsIpWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyDrdsIpWhiteListOutcomeCallable DrdsClient::modifyDrdsIpWhiteListCallable(const ModifyDrdsIpWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDrdsIpWhiteListOutcome()>>(
			[this, request]()
			{
			return this->modifyDrdsIpWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyDrdsInstanceDescriptionOutcome DrdsClient::modifyDrdsInstanceDescription(const ModifyDrdsInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDrdsInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDrdsInstanceDescriptionOutcome(ModifyDrdsInstanceDescriptionResult(outcome.result()));
	else
		return ModifyDrdsInstanceDescriptionOutcome(outcome.error());
}

void DrdsClient::modifyDrdsInstanceDescriptionAsync(const ModifyDrdsInstanceDescriptionRequest& request, const ModifyDrdsInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDrdsInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyDrdsInstanceDescriptionOutcomeCallable DrdsClient::modifyDrdsInstanceDescriptionCallable(const ModifyDrdsInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDrdsInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDrdsInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateDrdsDBOutcome DrdsClient::createDrdsDB(const CreateDrdsDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDrdsDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDrdsDBOutcome(CreateDrdsDBResult(outcome.result()));
	else
		return CreateDrdsDBOutcome(outcome.error());
}

void DrdsClient::createDrdsDBAsync(const CreateDrdsDBRequest& request, const CreateDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDrdsDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateDrdsDBOutcomeCallable DrdsClient::createDrdsDBCallable(const CreateDrdsDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDrdsDBOutcome()>>(
			[this, request]()
			{
			return this->createDrdsDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceNetInfoForInnerOutcome DrdsClient::describeDrdsInstanceNetInfoForInner(const DescribeDrdsInstanceNetInfoForInnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceNetInfoForInnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceNetInfoForInnerOutcome(DescribeDrdsInstanceNetInfoForInnerResult(outcome.result()));
	else
		return DescribeDrdsInstanceNetInfoForInnerOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceNetInfoForInnerAsync(const DescribeDrdsInstanceNetInfoForInnerRequest& request, const DescribeDrdsInstanceNetInfoForInnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstanceNetInfoForInner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceNetInfoForInnerOutcomeCallable DrdsClient::describeDrdsInstanceNetInfoForInnerCallable(const DescribeDrdsInstanceNetInfoForInnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceNetInfoForInnerOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstanceNetInfoForInner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateDrdsAccountOutcome DrdsClient::createDrdsAccount(const CreateDrdsAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDrdsAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDrdsAccountOutcome(CreateDrdsAccountResult(outcome.result()));
	else
		return CreateDrdsAccountOutcome(outcome.error());
}

void DrdsClient::createDrdsAccountAsync(const CreateDrdsAccountRequest& request, const CreateDrdsAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDrdsAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateDrdsAccountOutcomeCallable DrdsClient::createDrdsAccountCallable(const CreateDrdsAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDrdsAccountOutcome()>>(
			[this, request]()
			{
			return this->createDrdsAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeReadOnlyAccountOutcome DrdsClient::describeReadOnlyAccount(const DescribeReadOnlyAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReadOnlyAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReadOnlyAccountOutcome(DescribeReadOnlyAccountResult(outcome.result()));
	else
		return DescribeReadOnlyAccountOutcome(outcome.error());
}

void DrdsClient::describeReadOnlyAccountAsync(const DescribeReadOnlyAccountRequest& request, const DescribeReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReadOnlyAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeReadOnlyAccountOutcomeCallable DrdsClient::describeReadOnlyAccountCallable(const DescribeReadOnlyAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReadOnlyAccountOutcome()>>(
			[this, request]()
			{
			return this->describeReadOnlyAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyRdsReadWeightOutcome DrdsClient::modifyRdsReadWeight(const ModifyRdsReadWeightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRdsReadWeightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRdsReadWeightOutcome(ModifyRdsReadWeightResult(outcome.result()));
	else
		return ModifyRdsReadWeightOutcome(outcome.error());
}

void DrdsClient::modifyRdsReadWeightAsync(const ModifyRdsReadWeightRequest& request, const ModifyRdsReadWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRdsReadWeight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyRdsReadWeightOutcomeCallable DrdsClient::modifyRdsReadWeightCallable(const ModifyRdsReadWeightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRdsReadWeightOutcome()>>(
			[this, request]()
			{
			return this->modifyRdsReadWeight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::CreateDrdsInstanceOutcome DrdsClient::createDrdsInstance(const CreateDrdsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDrdsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDrdsInstanceOutcome(CreateDrdsInstanceResult(outcome.result()));
	else
		return CreateDrdsInstanceOutcome(outcome.error());
}

void DrdsClient::createDrdsInstanceAsync(const CreateDrdsInstanceRequest& request, const CreateDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDrdsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::CreateDrdsInstanceOutcomeCallable DrdsClient::createDrdsInstanceCallable(const CreateDrdsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDrdsInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDrdsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceMonitorOutcome DrdsClient::describeDrdsInstanceMonitor(const DescribeDrdsInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceMonitorOutcome(DescribeDrdsInstanceMonitorResult(outcome.result()));
	else
		return DescribeDrdsInstanceMonitorOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceMonitorAsync(const DescribeDrdsInstanceMonitorRequest& request, const DescribeDrdsInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceMonitorOutcomeCallable DrdsClient::describeDrdsInstanceMonitorCallable(const DescribeDrdsInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRegionsOutcome DrdsClient::describeRegions(const DescribeRegionsRequest &request) const
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

void DrdsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRegionsOutcomeCallable DrdsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDBIpWhiteListOutcome DrdsClient::describeDrdsDBIpWhiteList(const DescribeDrdsDBIpWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDBIpWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDBIpWhiteListOutcome(DescribeDrdsDBIpWhiteListResult(outcome.result()));
	else
		return DescribeDrdsDBIpWhiteListOutcome(outcome.error());
}

void DrdsClient::describeDrdsDBIpWhiteListAsync(const DescribeDrdsDBIpWhiteListRequest& request, const DescribeDrdsDBIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDBIpWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDBIpWhiteListOutcomeCallable DrdsClient::describeDrdsDBIpWhiteListCallable(const DescribeDrdsDBIpWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDBIpWhiteListOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDBIpWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeRdsListOutcome DrdsClient::describeRdsList(const DescribeRdsListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsListOutcome(DescribeRdsListResult(outcome.result()));
	else
		return DescribeRdsListOutcome(outcome.error());
}

void DrdsClient::describeRdsListAsync(const DescribeRdsListRequest& request, const DescribeRdsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeRdsListOutcomeCallable DrdsClient::describeRdsListCallable(const DescribeRdsListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsListOutcome()>>(
			[this, request]()
			{
			return this->describeRdsList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstancesOutcome DrdsClient::describeDrdsInstances(const DescribeDrdsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstancesOutcome(DescribeDrdsInstancesResult(outcome.result()));
	else
		return DescribeDrdsInstancesOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstancesAsync(const DescribeDrdsInstancesRequest& request, const DescribeDrdsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstancesOutcomeCallable DrdsClient::describeDrdsInstancesCallable(const DescribeDrdsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyReadOnlyAccountPasswordOutcome DrdsClient::modifyReadOnlyAccountPassword(const ModifyReadOnlyAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReadOnlyAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReadOnlyAccountPasswordOutcome(ModifyReadOnlyAccountPasswordResult(outcome.result()));
	else
		return ModifyReadOnlyAccountPasswordOutcome(outcome.error());
}

void DrdsClient::modifyReadOnlyAccountPasswordAsync(const ModifyReadOnlyAccountPasswordRequest& request, const ModifyReadOnlyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReadOnlyAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyReadOnlyAccountPasswordOutcomeCallable DrdsClient::modifyReadOnlyAccountPasswordCallable(const ModifyReadOnlyAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReadOnlyAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyReadOnlyAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeShardDbConnectionInfoOutcome DrdsClient::describeShardDbConnectionInfo(const DescribeShardDbConnectionInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeShardDbConnectionInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeShardDbConnectionInfoOutcome(DescribeShardDbConnectionInfoResult(outcome.result()));
	else
		return DescribeShardDbConnectionInfoOutcome(outcome.error());
}

void DrdsClient::describeShardDbConnectionInfoAsync(const DescribeShardDbConnectionInfoRequest& request, const DescribeShardDbConnectionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeShardDbConnectionInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeShardDbConnectionInfoOutcomeCallable DrdsClient::describeShardDbConnectionInfoCallable(const DescribeShardDbConnectionInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeShardDbConnectionInfoOutcome()>>(
			[this, request]()
			{
			return this->describeShardDbConnectionInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::RemoveReadOnlyAccountOutcome DrdsClient::removeReadOnlyAccount(const RemoveReadOnlyAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveReadOnlyAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveReadOnlyAccountOutcome(RemoveReadOnlyAccountResult(outcome.result()));
	else
		return RemoveReadOnlyAccountOutcome(outcome.error());
}

void DrdsClient::removeReadOnlyAccountAsync(const RemoveReadOnlyAccountRequest& request, const RemoveReadOnlyAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeReadOnlyAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::RemoveReadOnlyAccountOutcomeCallable DrdsClient::removeReadOnlyAccountCallable(const RemoveReadOnlyAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveReadOnlyAccountOutcome()>>(
			[this, request]()
			{
			return this->removeReadOnlyAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyDrdsDBPasswdOutcome DrdsClient::modifyDrdsDBPasswd(const ModifyDrdsDBPasswdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDrdsDBPasswdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDrdsDBPasswdOutcome(ModifyDrdsDBPasswdResult(outcome.result()));
	else
		return ModifyDrdsDBPasswdOutcome(outcome.error());
}

void DrdsClient::modifyDrdsDBPasswdAsync(const ModifyDrdsDBPasswdRequest& request, const ModifyDrdsDBPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDrdsDBPasswd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyDrdsDBPasswdOutcomeCallable DrdsClient::modifyDrdsDBPasswdCallable(const ModifyDrdsDBPasswdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDrdsDBPasswdOutcome()>>(
			[this, request]()
			{
			return this->modifyDrdsDBPasswd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DeleteFailedDrdsDBOutcome DrdsClient::deleteFailedDrdsDB(const DeleteFailedDrdsDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFailedDrdsDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFailedDrdsDBOutcome(DeleteFailedDrdsDBResult(outcome.result()));
	else
		return DeleteFailedDrdsDBOutcome(outcome.error());
}

void DrdsClient::deleteFailedDrdsDBAsync(const DeleteFailedDrdsDBRequest& request, const DeleteFailedDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFailedDrdsDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DeleteFailedDrdsDBOutcomeCallable DrdsClient::deleteFailedDrdsDBCallable(const DeleteFailedDrdsDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFailedDrdsDBOutcome()>>(
			[this, request]()
			{
			return this->deleteFailedDrdsDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceDbMonitorOutcome DrdsClient::describeDrdsInstanceDbMonitor(const DescribeDrdsInstanceDbMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceDbMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceDbMonitorOutcome(DescribeDrdsInstanceDbMonitorResult(outcome.result()));
	else
		return DescribeDrdsInstanceDbMonitorOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceDbMonitorAsync(const DescribeDrdsInstanceDbMonitorRequest& request, const DescribeDrdsInstanceDbMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstanceDbMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceDbMonitorOutcomeCallable DrdsClient::describeDrdsInstanceDbMonitorCallable(const DescribeDrdsInstanceDbMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceDbMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstanceDbMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeCreateDrdsInstanceStatusOutcome DrdsClient::describeCreateDrdsInstanceStatus(const DescribeCreateDrdsInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCreateDrdsInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCreateDrdsInstanceStatusOutcome(DescribeCreateDrdsInstanceStatusResult(outcome.result()));
	else
		return DescribeCreateDrdsInstanceStatusOutcome(outcome.error());
}

void DrdsClient::describeCreateDrdsInstanceStatusAsync(const DescribeCreateDrdsInstanceStatusRequest& request, const DescribeCreateDrdsInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCreateDrdsInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeCreateDrdsInstanceStatusOutcomeCallable DrdsClient::describeCreateDrdsInstanceStatusCallable(const DescribeCreateDrdsInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCreateDrdsInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeCreateDrdsInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsDBsOutcome DrdsClient::describeDrdsDBs(const DescribeDrdsDBsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsDBsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsDBsOutcome(DescribeDrdsDBsResult(outcome.result()));
	else
		return DescribeDrdsDBsOutcome(outcome.error());
}

void DrdsClient::describeDrdsDBsAsync(const DescribeDrdsDBsRequest& request, const DescribeDrdsDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsDBs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsDBsOutcomeCallable DrdsClient::describeDrdsDBsCallable(const DescribeDrdsDBsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsDBsOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsDBs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::QueryInstanceInfoByConnOutcome DrdsClient::queryInstanceInfoByConn(const QueryInstanceInfoByConnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryInstanceInfoByConnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryInstanceInfoByConnOutcome(QueryInstanceInfoByConnResult(outcome.result()));
	else
		return QueryInstanceInfoByConnOutcome(outcome.error());
}

void DrdsClient::queryInstanceInfoByConnAsync(const QueryInstanceInfoByConnRequest& request, const QueryInstanceInfoByConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryInstanceInfoByConn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::QueryInstanceInfoByConnOutcomeCallable DrdsClient::queryInstanceInfoByConnCallable(const QueryInstanceInfoByConnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryInstanceInfoByConnOutcome()>>(
			[this, request]()
			{
			return this->queryInstanceInfoByConn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::ModifyFullTableScanOutcome DrdsClient::modifyFullTableScan(const ModifyFullTableScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFullTableScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFullTableScanOutcome(ModifyFullTableScanResult(outcome.result()));
	else
		return ModifyFullTableScanOutcome(outcome.error());
}

void DrdsClient::modifyFullTableScanAsync(const ModifyFullTableScanRequest& request, const ModifyFullTableScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFullTableScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::ModifyFullTableScanOutcomeCallable DrdsClient::modifyFullTableScanCallable(const ModifyFullTableScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFullTableScanOutcome()>>(
			[this, request]()
			{
			return this->modifyFullTableScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DrdsClient::DescribeDrdsInstanceOutcome DrdsClient::describeDrdsInstance(const DescribeDrdsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDrdsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDrdsInstanceOutcome(DescribeDrdsInstanceResult(outcome.result()));
	else
		return DescribeDrdsInstanceOutcome(outcome.error());
}

void DrdsClient::describeDrdsInstanceAsync(const DescribeDrdsInstanceRequest& request, const DescribeDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDrdsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DrdsClient::DescribeDrdsInstanceOutcomeCallable DrdsClient::describeDrdsInstanceCallable(const DescribeDrdsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDrdsInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeDrdsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

