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

