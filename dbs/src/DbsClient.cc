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

DbsClient::CreateAndStartBackupPlanOutcome DbsClient::createAndStartBackupPlan(const CreateAndStartBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAndStartBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAndStartBackupPlanOutcome(CreateAndStartBackupPlanResult(outcome.result()));
	else
		return CreateAndStartBackupPlanOutcome(outcome.error());
}

void DbsClient::createAndStartBackupPlanAsync(const CreateAndStartBackupPlanRequest& request, const CreateAndStartBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAndStartBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::CreateAndStartBackupPlanOutcomeCallable DbsClient::createAndStartBackupPlanCallable(const CreateAndStartBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAndStartBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->createAndStartBackupPlan(request);
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

DbsClient::CreateFullBackupSetDownloadOutcome DbsClient::createFullBackupSetDownload(const CreateFullBackupSetDownloadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFullBackupSetDownloadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFullBackupSetDownloadOutcome(CreateFullBackupSetDownloadResult(outcome.result()));
	else
		return CreateFullBackupSetDownloadOutcome(outcome.error());
}

void DbsClient::createFullBackupSetDownloadAsync(const CreateFullBackupSetDownloadRequest& request, const CreateFullBackupSetDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFullBackupSetDownload(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::CreateFullBackupSetDownloadOutcomeCallable DbsClient::createFullBackupSetDownloadCallable(const CreateFullBackupSetDownloadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFullBackupSetDownloadOutcome()>>(
			[this, request]()
			{
			return this->createFullBackupSetDownload(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::CreateGetDBListFromAgentTaskOutcome DbsClient::createGetDBListFromAgentTask(const CreateGetDBListFromAgentTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGetDBListFromAgentTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGetDBListFromAgentTaskOutcome(CreateGetDBListFromAgentTaskResult(outcome.result()));
	else
		return CreateGetDBListFromAgentTaskOutcome(outcome.error());
}

void DbsClient::createGetDBListFromAgentTaskAsync(const CreateGetDBListFromAgentTaskRequest& request, const CreateGetDBListFromAgentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGetDBListFromAgentTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::CreateGetDBListFromAgentTaskOutcomeCallable DbsClient::createGetDBListFromAgentTaskCallable(const CreateGetDBListFromAgentTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGetDBListFromAgentTaskOutcome()>>(
			[this, request]()
			{
			return this->createGetDBListFromAgentTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::CreateIncrementBackupSetDownloadOutcome DbsClient::createIncrementBackupSetDownload(const CreateIncrementBackupSetDownloadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIncrementBackupSetDownloadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIncrementBackupSetDownloadOutcome(CreateIncrementBackupSetDownloadResult(outcome.result()));
	else
		return CreateIncrementBackupSetDownloadOutcome(outcome.error());
}

void DbsClient::createIncrementBackupSetDownloadAsync(const CreateIncrementBackupSetDownloadRequest& request, const CreateIncrementBackupSetDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIncrementBackupSetDownload(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::CreateIncrementBackupSetDownloadOutcomeCallable DbsClient::createIncrementBackupSetDownloadCallable(const CreateIncrementBackupSetDownloadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIncrementBackupSetDownloadOutcome()>>(
			[this, request]()
			{
			return this->createIncrementBackupSetDownload(request);
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

DbsClient::DescribeBackupPlanBillingOutcome DbsClient::describeBackupPlanBilling(const DescribeBackupPlanBillingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPlanBillingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPlanBillingOutcome(DescribeBackupPlanBillingResult(outcome.result()));
	else
		return DescribeBackupPlanBillingOutcome(outcome.error());
}

void DbsClient::describeBackupPlanBillingAsync(const DescribeBackupPlanBillingRequest& request, const DescribeBackupPlanBillingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPlanBilling(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeBackupPlanBillingOutcomeCallable DbsClient::describeBackupPlanBillingCallable(const DescribeBackupPlanBillingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPlanBillingOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPlanBilling(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

DbsClient::DescribeBackupSetDownloadTaskListOutcome DbsClient::describeBackupSetDownloadTaskList(const DescribeBackupSetDownloadTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupSetDownloadTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupSetDownloadTaskListOutcome(DescribeBackupSetDownloadTaskListResult(outcome.result()));
	else
		return DescribeBackupSetDownloadTaskListOutcome(outcome.error());
}

void DbsClient::describeBackupSetDownloadTaskListAsync(const DescribeBackupSetDownloadTaskListRequest& request, const DescribeBackupSetDownloadTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupSetDownloadTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeBackupSetDownloadTaskListOutcomeCallable DbsClient::describeBackupSetDownloadTaskListCallable(const DescribeBackupSetDownloadTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupSetDownloadTaskListOutcome()>>(
			[this, request]()
			{
			return this->describeBackupSetDownloadTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::DescribeDLAServiceOutcome DbsClient::describeDLAService(const DescribeDLAServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDLAServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDLAServiceOutcome(DescribeDLAServiceResult(outcome.result()));
	else
		return DescribeDLAServiceOutcome(outcome.error());
}

void DbsClient::describeDLAServiceAsync(const DescribeDLAServiceRequest& request, const DescribeDLAServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDLAService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeDLAServiceOutcomeCallable DbsClient::describeDLAServiceCallable(const DescribeDLAServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDLAServiceOutcome()>>(
			[this, request]()
			{
			return this->describeDLAService(request);
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

DbsClient::DescribeJobErrorCodeOutcome DbsClient::describeJobErrorCode(const DescribeJobErrorCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobErrorCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobErrorCodeOutcome(DescribeJobErrorCodeResult(outcome.result()));
	else
		return DescribeJobErrorCodeOutcome(outcome.error());
}

void DbsClient::describeJobErrorCodeAsync(const DescribeJobErrorCodeRequest& request, const DescribeJobErrorCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobErrorCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeJobErrorCodeOutcomeCallable DbsClient::describeJobErrorCodeCallable(const DescribeJobErrorCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobErrorCodeOutcome()>>(
			[this, request]()
			{
			return this->describeJobErrorCode(request);
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

DbsClient::DescribeRegionsOutcome DbsClient::describeRegions(const DescribeRegionsRequest &request) const
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

void DbsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeRegionsOutcomeCallable DbsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::DescribeRestoreRangeInfoOutcome DbsClient::describeRestoreRangeInfo(const DescribeRestoreRangeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreRangeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreRangeInfoOutcome(DescribeRestoreRangeInfoResult(outcome.result()));
	else
		return DescribeRestoreRangeInfoOutcome(outcome.error());
}

void DbsClient::describeRestoreRangeInfoAsync(const DescribeRestoreRangeInfoRequest& request, const DescribeRestoreRangeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreRangeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DescribeRestoreRangeInfoOutcomeCallable DbsClient::describeRestoreRangeInfoCallable(const DescribeRestoreRangeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreRangeInfoOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreRangeInfo(request);
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

DbsClient::DisableBackupLogOutcome DbsClient::disableBackupLog(const DisableBackupLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableBackupLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableBackupLogOutcome(DisableBackupLogResult(outcome.result()));
	else
		return DisableBackupLogOutcome(outcome.error());
}

void DbsClient::disableBackupLogAsync(const DisableBackupLogRequest& request, const DisableBackupLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableBackupLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::DisableBackupLogOutcomeCallable DbsClient::disableBackupLogCallable(const DisableBackupLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableBackupLogOutcome()>>(
			[this, request]()
			{
			return this->disableBackupLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::EnableBackupLogOutcome DbsClient::enableBackupLog(const EnableBackupLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableBackupLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableBackupLogOutcome(EnableBackupLogResult(outcome.result()));
	else
		return EnableBackupLogOutcome(outcome.error());
}

void DbsClient::enableBackupLogAsync(const EnableBackupLogRequest& request, const EnableBackupLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableBackupLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::EnableBackupLogOutcomeCallable DbsClient::enableBackupLogCallable(const EnableBackupLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableBackupLogOutcome()>>(
			[this, request]()
			{
			return this->enableBackupLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::GetDBListFromAgentOutcome DbsClient::getDBListFromAgent(const GetDBListFromAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDBListFromAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDBListFromAgentOutcome(GetDBListFromAgentResult(outcome.result()));
	else
		return GetDBListFromAgentOutcome(outcome.error());
}

void DbsClient::getDBListFromAgentAsync(const GetDBListFromAgentRequest& request, const GetDBListFromAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDBListFromAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::GetDBListFromAgentOutcomeCallable DbsClient::getDBListFromAgentCallable(const GetDBListFromAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDBListFromAgentOutcome()>>(
			[this, request]()
			{
			return this->getDBListFromAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::InitializeDbsServiceLinkedRoleOutcome DbsClient::initializeDbsServiceLinkedRole(const InitializeDbsServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeDbsServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeDbsServiceLinkedRoleOutcome(InitializeDbsServiceLinkedRoleResult(outcome.result()));
	else
		return InitializeDbsServiceLinkedRoleOutcome(outcome.error());
}

void DbsClient::initializeDbsServiceLinkedRoleAsync(const InitializeDbsServiceLinkedRoleRequest& request, const InitializeDbsServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeDbsServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::InitializeDbsServiceLinkedRoleOutcomeCallable DbsClient::initializeDbsServiceLinkedRoleCallable(const InitializeDbsServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeDbsServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->initializeDbsServiceLinkedRole(request);
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

DbsClient::ModifyBackupSetDownloadRulesOutcome DbsClient::modifyBackupSetDownloadRules(const ModifyBackupSetDownloadRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupSetDownloadRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupSetDownloadRulesOutcome(ModifyBackupSetDownloadRulesResult(outcome.result()));
	else
		return ModifyBackupSetDownloadRulesOutcome(outcome.error());
}

void DbsClient::modifyBackupSetDownloadRulesAsync(const ModifyBackupSetDownloadRulesRequest& request, const ModifyBackupSetDownloadRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupSetDownloadRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::ModifyBackupSetDownloadRulesOutcomeCallable DbsClient::modifyBackupSetDownloadRulesCallable(const ModifyBackupSetDownloadRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupSetDownloadRulesOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupSetDownloadRules(request);
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

DbsClient::ModifyStorageStrategyOutcome DbsClient::modifyStorageStrategy(const ModifyStorageStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStorageStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStorageStrategyOutcome(ModifyStorageStrategyResult(outcome.result()));
	else
		return ModifyStorageStrategyOutcome(outcome.error());
}

void DbsClient::modifyStorageStrategyAsync(const ModifyStorageStrategyRequest& request, const ModifyStorageStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStorageStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::ModifyStorageStrategyOutcomeCallable DbsClient::modifyStorageStrategyCallable(const ModifyStorageStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStorageStrategyOutcome()>>(
			[this, request]()
			{
			return this->modifyStorageStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DbsClient::ReleaseBackupPlanOutcome DbsClient::releaseBackupPlan(const ReleaseBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseBackupPlanOutcome(ReleaseBackupPlanResult(outcome.result()));
	else
		return ReleaseBackupPlanOutcome(outcome.error());
}

void DbsClient::releaseBackupPlanAsync(const ReleaseBackupPlanRequest& request, const ReleaseBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DbsClient::ReleaseBackupPlanOutcomeCallable DbsClient::releaseBackupPlanCallable(const ReleaseBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->releaseBackupPlan(request);
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

