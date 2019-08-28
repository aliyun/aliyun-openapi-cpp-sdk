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

#include <alibabacloud/dbs/DbsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

namespace
{
	const std::string SERVICE_NAME = "Dbs";
}

DbsClient::DbsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cbs");
}

DbsClient::DbsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cbs");
}

DbsClient::DbsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cbs");
}

DbsClient::~DbsClient()
{}

DbsClient::DescribeBackupPlanListOutcome DbsClient::describeBackupPlanList(const DescribeBackupPlanListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPlanListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPlanListOutcome(DescribeBackupPlanListResult(outcome.result()));
	else
		return DescribeBackupPlanListOutcome(outcome.error());
}

void DbsClient::describeBackupPlanListAsync(const DescribeBackupPlanListRequest& request, const DescribeBackupPlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPlanList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeBackupPlanListOutcomeCallable DbsClient::describeBackupPlanListCallable(const DescribeBackupPlanListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPlanListOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPlanList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::CreateBackupPlanOutcome DbsClient::createBackupPlan(const CreateBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupPlanOutcome(CreateBackupPlanResult(outcome.result()));
	else
		return CreateBackupPlanOutcome(outcome.error());
}

void DbsClient::createBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::CreateBackupPlanOutcomeCallable DbsClient::createBackupPlanCallable(const CreateBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->createBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::StartBackupPlanOutcome DbsClient::startBackupPlan(const StartBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartBackupPlanOutcome(StartBackupPlanResult(outcome.result()));
	else
		return StartBackupPlanOutcome(outcome.error());
}

void DbsClient::startBackupPlanAsync(const StartBackupPlanRequest& request, const StartBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::StartBackupPlanOutcomeCallable DbsClient::startBackupPlanCallable(const StartBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->startBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::RenewBackupPlanOutcome DbsClient::renewBackupPlan(const RenewBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewBackupPlanOutcome(RenewBackupPlanResult(outcome.result()));
	else
		return RenewBackupPlanOutcome(outcome.error());
}

void DbsClient::renewBackupPlanAsync(const RenewBackupPlanRequest& request, const RenewBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::RenewBackupPlanOutcomeCallable DbsClient::renewBackupPlanCallable(const RenewBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->renewBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::DescribeFullBackupListOutcome DbsClient::describeFullBackupList(const DescribeFullBackupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFullBackupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFullBackupListOutcome(DescribeFullBackupListResult(outcome.result()));
	else
		return DescribeFullBackupListOutcome(outcome.error());
}

void DbsClient::describeFullBackupListAsync(const DescribeFullBackupListRequest& request, const DescribeFullBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFullBackupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeFullBackupListOutcomeCallable DbsClient::describeFullBackupListCallable(const DescribeFullBackupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFullBackupListOutcome()>>(
			[this, request]()
			{
			return this->describeFullBackupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::UpgradeBackupPlanOutcome DbsClient::upgradeBackupPlan(const UpgradeBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeBackupPlanOutcome(UpgradeBackupPlanResult(outcome.result()));
	else
		return UpgradeBackupPlanOutcome(outcome.error());
}

void DbsClient::upgradeBackupPlanAsync(const UpgradeBackupPlanRequest& request, const UpgradeBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::UpgradeBackupPlanOutcomeCallable DbsClient::upgradeBackupPlanCallable(const UpgradeBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->upgradeBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::DescribeRestoreTaskListOutcome DbsClient::describeRestoreTaskList(const DescribeRestoreTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreTaskListOutcome(DescribeRestoreTaskListResult(outcome.result()));
	else
		return DescribeRestoreTaskListOutcome(outcome.error());
}

void DbsClient::describeRestoreTaskListAsync(const DescribeRestoreTaskListRequest& request, const DescribeRestoreTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeRestoreTaskListOutcomeCallable DbsClient::describeRestoreTaskListCallable(const DescribeRestoreTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreTaskListOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::ModifyBackupPlanNameOutcome DbsClient::modifyBackupPlanName(const ModifyBackupPlanNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPlanNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPlanNameOutcome(ModifyBackupPlanNameResult(outcome.result()));
	else
		return ModifyBackupPlanNameOutcome(outcome.error());
}

void DbsClient::modifyBackupPlanNameAsync(const ModifyBackupPlanNameRequest& request, const ModifyBackupPlanNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPlanName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::ModifyBackupPlanNameOutcomeCallable DbsClient::modifyBackupPlanNameCallable(const ModifyBackupPlanNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPlanNameOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPlanName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::StopBackupPlanOutcome DbsClient::stopBackupPlan(const StopBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopBackupPlanOutcome(StopBackupPlanResult(outcome.result()));
	else
		return StopBackupPlanOutcome(outcome.error());
}

void DbsClient::stopBackupPlanAsync(const StopBackupPlanRequest& request, const StopBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::StopBackupPlanOutcomeCallable DbsClient::stopBackupPlanCallable(const StopBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->stopBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::DescribeBackupGatewayListOutcome DbsClient::describeBackupGatewayList(const DescribeBackupGatewayListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupGatewayListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupGatewayListOutcome(DescribeBackupGatewayListResult(outcome.result()));
	else
		return DescribeBackupGatewayListOutcome(outcome.error());
}

void DbsClient::describeBackupGatewayListAsync(const DescribeBackupGatewayListRequest& request, const DescribeBackupGatewayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupGatewayList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeBackupGatewayListOutcomeCallable DbsClient::describeBackupGatewayListCallable(const DescribeBackupGatewayListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupGatewayListOutcome()>>(
			[this, request]()
			{
			return this->describeBackupGatewayList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::ModifyBackupSourceEndpointOutcome DbsClient::modifyBackupSourceEndpoint(const ModifyBackupSourceEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupSourceEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupSourceEndpointOutcome(ModifyBackupSourceEndpointResult(outcome.result()));
	else
		return ModifyBackupSourceEndpointOutcome(outcome.error());
}

void DbsClient::modifyBackupSourceEndpointAsync(const ModifyBackupSourceEndpointRequest& request, const ModifyBackupSourceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupSourceEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::ModifyBackupSourceEndpointOutcomeCallable DbsClient::modifyBackupSourceEndpointCallable(const ModifyBackupSourceEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupSourceEndpointOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupSourceEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::DescribePreCheckProgressListOutcome DbsClient::describePreCheckProgressList(const DescribePreCheckProgressListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePreCheckProgressListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePreCheckProgressListOutcome(DescribePreCheckProgressListResult(outcome.result()));
	else
		return DescribePreCheckProgressListOutcome(outcome.error());
}

void DbsClient::describePreCheckProgressListAsync(const DescribePreCheckProgressListRequest& request, const DescribePreCheckProgressListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePreCheckProgressList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribePreCheckProgressListOutcomeCallable DbsClient::describePreCheckProgressListCallable(const DescribePreCheckProgressListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePreCheckProgressListOutcome()>>(
			[this, request]()
			{
			return this->describePreCheckProgressList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::ModifyBackupObjectsOutcome DbsClient::modifyBackupObjects(const ModifyBackupObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupObjectsOutcome(ModifyBackupObjectsResult(outcome.result()));
	else
		return ModifyBackupObjectsOutcome(outcome.error());
}

void DbsClient::modifyBackupObjectsAsync(const ModifyBackupObjectsRequest& request, const ModifyBackupObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::ModifyBackupObjectsOutcomeCallable DbsClient::modifyBackupObjectsCallable(const ModifyBackupObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupObjectsOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::DescribeIncrementBackupListOutcome DbsClient::describeIncrementBackupList(const DescribeIncrementBackupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIncrementBackupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIncrementBackupListOutcome(DescribeIncrementBackupListResult(outcome.result()));
	else
		return DescribeIncrementBackupListOutcome(outcome.error());
}

void DbsClient::describeIncrementBackupListAsync(const DescribeIncrementBackupListRequest& request, const DescribeIncrementBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIncrementBackupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeIncrementBackupListOutcomeCallable DbsClient::describeIncrementBackupListCallable(const DescribeIncrementBackupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIncrementBackupListOutcome()>>(
			[this, request]()
			{
			return this->describeIncrementBackupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::CreateRestoreTaskOutcome DbsClient::createRestoreTask(const CreateRestoreTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRestoreTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRestoreTaskOutcome(CreateRestoreTaskResult(outcome.result()));
	else
		return CreateRestoreTaskOutcome(outcome.error());
}

void DbsClient::createRestoreTaskAsync(const CreateRestoreTaskRequest& request, const CreateRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRestoreTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::CreateRestoreTaskOutcomeCallable DbsClient::createRestoreTaskCallable(const CreateRestoreTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRestoreTaskOutcome()>>(
			[this, request]()
			{
			return this->createRestoreTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::ConfigureBackupPlanOutcome DbsClient::configureBackupPlan(const ConfigureBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureBackupPlanOutcome(ConfigureBackupPlanResult(outcome.result()));
	else
		return ConfigureBackupPlanOutcome(outcome.error());
}

void DbsClient::configureBackupPlanAsync(const ConfigureBackupPlanRequest& request, const ConfigureBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::ConfigureBackupPlanOutcomeCallable DbsClient::configureBackupPlanCallable(const ConfigureBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->configureBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::ModifyBackupStrategyOutcome DbsClient::modifyBackupStrategy(const ModifyBackupStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupStrategyOutcome(ModifyBackupStrategyResult(outcome.result()));
	else
		return ModifyBackupStrategyOutcome(outcome.error());
}

void DbsClient::modifyBackupStrategyAsync(const ModifyBackupStrategyRequest& request, const ModifyBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::ModifyBackupStrategyOutcomeCallable DbsClient::modifyBackupStrategyCallable(const ModifyBackupStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupStrategyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::StartRestoreTaskOutcome DbsClient::startRestoreTask(const StartRestoreTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRestoreTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRestoreTaskOutcome(StartRestoreTaskResult(outcome.result()));
	else
		return StartRestoreTaskOutcome(outcome.error());
}

void DbsClient::startRestoreTaskAsync(const StartRestoreTaskRequest& request, const StartRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRestoreTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::StartRestoreTaskOutcomeCallable DbsClient::startRestoreTaskCallable(const StartRestoreTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRestoreTaskOutcome()>>(
			[this, request]()
			{
			return this->startRestoreTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::DescribeNodeCidrListOutcome DbsClient::describeNodeCidrList(const DescribeNodeCidrListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNodeCidrListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNodeCidrListOutcome(DescribeNodeCidrListResult(outcome.result()));
	else
		return DescribeNodeCidrListOutcome(outcome.error());
}

void DbsClient::describeNodeCidrListAsync(const DescribeNodeCidrListRequest& request, const DescribeNodeCidrListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNodeCidrList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeNodeCidrListOutcomeCallable DbsClient::describeNodeCidrListCallable(const DescribeNodeCidrListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNodeCidrListOutcome()>>(
			[this, request]()
			{
			return this->describeNodeCidrList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

