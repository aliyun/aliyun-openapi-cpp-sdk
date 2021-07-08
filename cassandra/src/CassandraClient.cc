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

#include <alibabacloud/cassandra/CassandraClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

namespace
{
	const std::string SERVICE_NAME = "Cassandra";
}

CassandraClient::CassandraClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Cassandra");
}

CassandraClient::CassandraClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Cassandra");
}

CassandraClient::CassandraClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Cassandra");
}

CassandraClient::~CassandraClient()
{}

CassandraClient::AllocatePublicContactPointsOutcome CassandraClient::allocatePublicContactPoints(const AllocatePublicContactPointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocatePublicContactPointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocatePublicContactPointsOutcome(AllocatePublicContactPointsResult(outcome.result()));
	else
		return AllocatePublicContactPointsOutcome(outcome.error());
}

void CassandraClient::allocatePublicContactPointsAsync(const AllocatePublicContactPointsRequest& request, const AllocatePublicContactPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocatePublicContactPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::AllocatePublicContactPointsOutcomeCallable CassandraClient::allocatePublicContactPointsCallable(const AllocatePublicContactPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocatePublicContactPointsOutcome()>>(
			[this, request]()
			{
			return this->allocatePublicContactPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::CreateBackupPlanOutcome CassandraClient::createBackupPlan(const CreateBackupPlanRequest &request) const
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

void CassandraClient::createBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::CreateBackupPlanOutcomeCallable CassandraClient::createBackupPlanCallable(const CreateBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->createBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::CreateClusterOutcome CassandraClient::createCluster(const CreateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterOutcome(CreateClusterResult(outcome.result()));
	else
		return CreateClusterOutcome(outcome.error());
}

void CassandraClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::CreateClusterOutcomeCallable CassandraClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::CreateDataCenterOutcome CassandraClient::createDataCenter(const CreateDataCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataCenterOutcome(CreateDataCenterResult(outcome.result()));
	else
		return CreateDataCenterOutcome(outcome.error());
}

void CassandraClient::createDataCenterAsync(const CreateDataCenterRequest& request, const CreateDataCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::CreateDataCenterOutcomeCallable CassandraClient::createDataCenterCallable(const CreateDataCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataCenterOutcome()>>(
			[this, request]()
			{
			return this->createDataCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DeleteBackupPlanOutcome CassandraClient::deleteBackupPlan(const DeleteBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackupPlanOutcome(DeleteBackupPlanResult(outcome.result()));
	else
		return DeleteBackupPlanOutcome(outcome.error());
}

void CassandraClient::deleteBackupPlanAsync(const DeleteBackupPlanRequest& request, const DeleteBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DeleteBackupPlanOutcomeCallable CassandraClient::deleteBackupPlanCallable(const DeleteBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->deleteBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DeleteClusterOutcome CassandraClient::deleteCluster(const DeleteClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterOutcome(DeleteClusterResult(outcome.result()));
	else
		return DeleteClusterOutcome(outcome.error());
}

void CassandraClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DeleteClusterOutcomeCallable CassandraClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DeleteDataCenterOutcome CassandraClient::deleteDataCenter(const DeleteDataCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataCenterOutcome(DeleteDataCenterResult(outcome.result()));
	else
		return DeleteDataCenterOutcome(outcome.error());
}

void CassandraClient::deleteDataCenterAsync(const DeleteDataCenterRequest& request, const DeleteDataCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DeleteDataCenterOutcomeCallable CassandraClient::deleteDataCenterCallable(const DeleteDataCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataCenterOutcome()>>(
			[this, request]()
			{
			return this->deleteDataCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DeleteNodeToolExecutionHistoryOutcome CassandraClient::deleteNodeToolExecutionHistory(const DeleteNodeToolExecutionHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNodeToolExecutionHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNodeToolExecutionHistoryOutcome(DeleteNodeToolExecutionHistoryResult(outcome.result()));
	else
		return DeleteNodeToolExecutionHistoryOutcome(outcome.error());
}

void CassandraClient::deleteNodeToolExecutionHistoryAsync(const DeleteNodeToolExecutionHistoryRequest& request, const DeleteNodeToolExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNodeToolExecutionHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DeleteNodeToolExecutionHistoryOutcomeCallable CassandraClient::deleteNodeToolExecutionHistoryCallable(const DeleteNodeToolExecutionHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNodeToolExecutionHistoryOutcome()>>(
			[this, request]()
			{
			return this->deleteNodeToolExecutionHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeAccountsOutcome CassandraClient::describeAccounts(const DescribeAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountsOutcome(DescribeAccountsResult(outcome.result()));
	else
		return DescribeAccountsOutcome(outcome.error());
}

void CassandraClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeAccountsOutcomeCallable CassandraClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeBackupOutcome CassandraClient::describeBackup(const DescribeBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupOutcome(DescribeBackupResult(outcome.result()));
	else
		return DescribeBackupOutcome(outcome.error());
}

void CassandraClient::describeBackupAsync(const DescribeBackupRequest& request, const DescribeBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeBackupOutcomeCallable CassandraClient::describeBackupCallable(const DescribeBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupOutcome()>>(
			[this, request]()
			{
			return this->describeBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeBackupPlanOutcome CassandraClient::describeBackupPlan(const DescribeBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPlanOutcome(DescribeBackupPlanResult(outcome.result()));
	else
		return DescribeBackupPlanOutcome(outcome.error());
}

void CassandraClient::describeBackupPlanAsync(const DescribeBackupPlanRequest& request, const DescribeBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeBackupPlanOutcomeCallable CassandraClient::describeBackupPlanCallable(const DescribeBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeBackupPlansOutcome CassandraClient::describeBackupPlans(const DescribeBackupPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPlansOutcome(DescribeBackupPlansResult(outcome.result()));
	else
		return DescribeBackupPlansOutcome(outcome.error());
}

void CassandraClient::describeBackupPlansAsync(const DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeBackupPlansOutcomeCallable CassandraClient::describeBackupPlansCallable(const DescribeBackupPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPlansOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeBackupsOutcome CassandraClient::describeBackups(const DescribeBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupsOutcome(DescribeBackupsResult(outcome.result()));
	else
		return DescribeBackupsOutcome(outcome.error());
}

void CassandraClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeBackupsOutcomeCallable CassandraClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeClusterOutcome CassandraClient::describeCluster(const DescribeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterOutcome(DescribeClusterResult(outcome.result()));
	else
		return DescribeClusterOutcome(outcome.error());
}

void CassandraClient::describeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeClusterOutcomeCallable CassandraClient::describeClusterCallable(const DescribeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterOutcome()>>(
			[this, request]()
			{
			return this->describeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeClusterDashboardOutcome CassandraClient::describeClusterDashboard(const DescribeClusterDashboardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterDashboardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterDashboardOutcome(DescribeClusterDashboardResult(outcome.result()));
	else
		return DescribeClusterDashboardOutcome(outcome.error());
}

void CassandraClient::describeClusterDashboardAsync(const DescribeClusterDashboardRequest& request, const DescribeClusterDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterDashboard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeClusterDashboardOutcomeCallable CassandraClient::describeClusterDashboardCallable(const DescribeClusterDashboardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterDashboardOutcome()>>(
			[this, request]()
			{
			return this->describeClusterDashboard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeClusterStatusOutcome CassandraClient::describeClusterStatus(const DescribeClusterStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterStatusOutcome(DescribeClusterStatusResult(outcome.result()));
	else
		return DescribeClusterStatusOutcome(outcome.error());
}

void CassandraClient::describeClusterStatusAsync(const DescribeClusterStatusRequest& request, const DescribeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeClusterStatusOutcomeCallable CassandraClient::describeClusterStatusCallable(const DescribeClusterStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterStatusOutcome()>>(
			[this, request]()
			{
			return this->describeClusterStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeClustersOutcome CassandraClient::describeClusters(const DescribeClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClustersOutcome(DescribeClustersResult(outcome.result()));
	else
		return DescribeClustersOutcome(outcome.error());
}

void CassandraClient::describeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeClustersOutcomeCallable CassandraClient::describeClustersCallable(const DescribeClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
			[this, request]()
			{
			return this->describeClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeContactPointsOutcome CassandraClient::describeContactPoints(const DescribeContactPointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContactPointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContactPointsOutcome(DescribeContactPointsResult(outcome.result()));
	else
		return DescribeContactPointsOutcome(outcome.error());
}

void CassandraClient::describeContactPointsAsync(const DescribeContactPointsRequest& request, const DescribeContactPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContactPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeContactPointsOutcomeCallable CassandraClient::describeContactPointsCallable(const DescribeContactPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContactPointsOutcome()>>(
			[this, request]()
			{
			return this->describeContactPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeDataCenterOutcome CassandraClient::describeDataCenter(const DescribeDataCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataCenterOutcome(DescribeDataCenterResult(outcome.result()));
	else
		return DescribeDataCenterOutcome(outcome.error());
}

void CassandraClient::describeDataCenterAsync(const DescribeDataCenterRequest& request, const DescribeDataCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeDataCenterOutcomeCallable CassandraClient::describeDataCenterCallable(const DescribeDataCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataCenterOutcome()>>(
			[this, request]()
			{
			return this->describeDataCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeDataCentersOutcome CassandraClient::describeDataCenters(const DescribeDataCentersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataCentersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataCentersOutcome(DescribeDataCentersResult(outcome.result()));
	else
		return DescribeDataCentersOutcome(outcome.error());
}

void CassandraClient::describeDataCentersAsync(const DescribeDataCentersRequest& request, const DescribeDataCentersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataCenters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeDataCentersOutcomeCallable CassandraClient::describeDataCentersCallable(const DescribeDataCentersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataCentersOutcome()>>(
			[this, request]()
			{
			return this->describeDataCenters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeDeletedClustersOutcome CassandraClient::describeDeletedClusters(const DescribeDeletedClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeletedClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeletedClustersOutcome(DescribeDeletedClustersResult(outcome.result()));
	else
		return DescribeDeletedClustersOutcome(outcome.error());
}

void CassandraClient::describeDeletedClustersAsync(const DescribeDeletedClustersRequest& request, const DescribeDeletedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeletedClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeDeletedClustersOutcomeCallable CassandraClient::describeDeletedClustersCallable(const DescribeDeletedClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeletedClustersOutcome()>>(
			[this, request]()
			{
			return this->describeDeletedClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeInstanceTypeOutcome CassandraClient::describeInstanceType(const DescribeInstanceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTypeOutcome(DescribeInstanceTypeResult(outcome.result()));
	else
		return DescribeInstanceTypeOutcome(outcome.error());
}

void CassandraClient::describeInstanceTypeAsync(const DescribeInstanceTypeRequest& request, const DescribeInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeInstanceTypeOutcomeCallable CassandraClient::describeInstanceTypeCallable(const DescribeInstanceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTypeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeIpWhitelistOutcome CassandraClient::describeIpWhitelist(const DescribeIpWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpWhitelistOutcome(DescribeIpWhitelistResult(outcome.result()));
	else
		return DescribeIpWhitelistOutcome(outcome.error());
}

void CassandraClient::describeIpWhitelistAsync(const DescribeIpWhitelistRequest& request, const DescribeIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeIpWhitelistOutcomeCallable CassandraClient::describeIpWhitelistCallable(const DescribeIpWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeIpWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeIpWhitelistGroupsOutcome CassandraClient::describeIpWhitelistGroups(const DescribeIpWhitelistGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpWhitelistGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpWhitelistGroupsOutcome(DescribeIpWhitelistGroupsResult(outcome.result()));
	else
		return DescribeIpWhitelistGroupsOutcome(outcome.error());
}

void CassandraClient::describeIpWhitelistGroupsAsync(const DescribeIpWhitelistGroupsRequest& request, const DescribeIpWhitelistGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpWhitelistGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeIpWhitelistGroupsOutcomeCallable CassandraClient::describeIpWhitelistGroupsCallable(const DescribeIpWhitelistGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpWhitelistGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeIpWhitelistGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeNodeToolExecutionHistoriesOutcome CassandraClient::describeNodeToolExecutionHistories(const DescribeNodeToolExecutionHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNodeToolExecutionHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNodeToolExecutionHistoriesOutcome(DescribeNodeToolExecutionHistoriesResult(outcome.result()));
	else
		return DescribeNodeToolExecutionHistoriesOutcome(outcome.error());
}

void CassandraClient::describeNodeToolExecutionHistoriesAsync(const DescribeNodeToolExecutionHistoriesRequest& request, const DescribeNodeToolExecutionHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNodeToolExecutionHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeNodeToolExecutionHistoriesOutcomeCallable CassandraClient::describeNodeToolExecutionHistoriesCallable(const DescribeNodeToolExecutionHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNodeToolExecutionHistoriesOutcome()>>(
			[this, request]()
			{
			return this->describeNodeToolExecutionHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeNodeToolExecutionHistoryOutcome CassandraClient::describeNodeToolExecutionHistory(const DescribeNodeToolExecutionHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNodeToolExecutionHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNodeToolExecutionHistoryOutcome(DescribeNodeToolExecutionHistoryResult(outcome.result()));
	else
		return DescribeNodeToolExecutionHistoryOutcome(outcome.error());
}

void CassandraClient::describeNodeToolExecutionHistoryAsync(const DescribeNodeToolExecutionHistoryRequest& request, const DescribeNodeToolExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNodeToolExecutionHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeNodeToolExecutionHistoryOutcomeCallable CassandraClient::describeNodeToolExecutionHistoryCallable(const DescribeNodeToolExecutionHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNodeToolExecutionHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeNodeToolExecutionHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeParameterModificationHistoriesOutcome CassandraClient::describeParameterModificationHistories(const DescribeParameterModificationHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterModificationHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterModificationHistoriesOutcome(DescribeParameterModificationHistoriesResult(outcome.result()));
	else
		return DescribeParameterModificationHistoriesOutcome(outcome.error());
}

void CassandraClient::describeParameterModificationHistoriesAsync(const DescribeParameterModificationHistoriesRequest& request, const DescribeParameterModificationHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterModificationHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeParameterModificationHistoriesOutcomeCallable CassandraClient::describeParameterModificationHistoriesCallable(const DescribeParameterModificationHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterModificationHistoriesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterModificationHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeParametersOutcome CassandraClient::describeParameters(const DescribeParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParametersOutcome(DescribeParametersResult(outcome.result()));
	else
		return DescribeParametersOutcome(outcome.error());
}

void CassandraClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeParametersOutcomeCallable CassandraClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeRegionsOutcome CassandraClient::describeRegions(const DescribeRegionsRequest &request) const
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

void CassandraClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeRegionsOutcomeCallable CassandraClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::DescribeSecurityGroupsOutcome CassandraClient::describeSecurityGroups(const DescribeSecurityGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupsOutcome(DescribeSecurityGroupsResult(outcome.result()));
	else
		return DescribeSecurityGroupsOutcome(outcome.error());
}

void CassandraClient::describeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::DescribeSecurityGroupsOutcomeCallable CassandraClient::describeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ExecuteNodeToolOutcome CassandraClient::executeNodeTool(const ExecuteNodeToolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteNodeToolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteNodeToolOutcome(ExecuteNodeToolResult(outcome.result()));
	else
		return ExecuteNodeToolOutcome(outcome.error());
}

void CassandraClient::executeNodeToolAsync(const ExecuteNodeToolRequest& request, const ExecuteNodeToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeNodeTool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ExecuteNodeToolOutcomeCallable CassandraClient::executeNodeToolCallable(const ExecuteNodeToolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteNodeToolOutcome()>>(
			[this, request]()
			{
			return this->executeNodeTool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::GetCmsUrlOutcome CassandraClient::getCmsUrl(const GetCmsUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCmsUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCmsUrlOutcome(GetCmsUrlResult(outcome.result()));
	else
		return GetCmsUrlOutcome(outcome.error());
}

void CassandraClient::getCmsUrlAsync(const GetCmsUrlRequest& request, const GetCmsUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCmsUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::GetCmsUrlOutcomeCallable CassandraClient::getCmsUrlCallable(const GetCmsUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCmsUrlOutcome()>>(
			[this, request]()
			{
			return this->getCmsUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ListTagResourcesOutcome CassandraClient::listTagResources(const ListTagResourcesRequest &request) const
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

void CassandraClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ListTagResourcesOutcomeCallable CassandraClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ListTagsOutcome CassandraClient::listTags(const ListTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagsOutcome(ListTagsResult(outcome.result()));
	else
		return ListTagsOutcome(outcome.error());
}

void CassandraClient::listTagsAsync(const ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ListTagsOutcomeCallable CassandraClient::listTagsCallable(const ListTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsOutcome()>>(
			[this, request]()
			{
			return this->listTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyAccountPasswordOutcome CassandraClient::modifyAccountPassword(const ModifyAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountPasswordOutcome(ModifyAccountPasswordResult(outcome.result()));
	else
		return ModifyAccountPasswordOutcome(outcome.error());
}

void CassandraClient::modifyAccountPasswordAsync(const ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyAccountPasswordOutcomeCallable CassandraClient::modifyAccountPasswordCallable(const ModifyAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyBackupPlanOutcome CassandraClient::modifyBackupPlan(const ModifyBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPlanOutcome(ModifyBackupPlanResult(outcome.result()));
	else
		return ModifyBackupPlanOutcome(outcome.error());
}

void CassandraClient::modifyBackupPlanAsync(const ModifyBackupPlanRequest& request, const ModifyBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyBackupPlanOutcomeCallable CassandraClient::modifyBackupPlanCallable(const ModifyBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyClusterOutcome CassandraClient::modifyCluster(const ModifyClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterOutcome(ModifyClusterResult(outcome.result()));
	else
		return ModifyClusterOutcome(outcome.error());
}

void CassandraClient::modifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyClusterOutcomeCallable CassandraClient::modifyClusterCallable(const ModifyClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyDataCenterOutcome CassandraClient::modifyDataCenter(const ModifyDataCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataCenterOutcome(ModifyDataCenterResult(outcome.result()));
	else
		return ModifyDataCenterOutcome(outcome.error());
}

void CassandraClient::modifyDataCenterAsync(const ModifyDataCenterRequest& request, const ModifyDataCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyDataCenterOutcomeCallable CassandraClient::modifyDataCenterCallable(const ModifyDataCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataCenterOutcome()>>(
			[this, request]()
			{
			return this->modifyDataCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyInstanceMaintainTimeOutcome CassandraClient::modifyInstanceMaintainTime(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMaintainTimeOutcome(ModifyInstanceMaintainTimeResult(outcome.result()));
	else
		return ModifyInstanceMaintainTimeOutcome(outcome.error());
}

void CassandraClient::modifyInstanceMaintainTimeAsync(const ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyInstanceMaintainTimeOutcomeCallable CassandraClient::modifyInstanceMaintainTimeCallable(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyInstanceTypeOutcome CassandraClient::modifyInstanceType(const ModifyInstanceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceTypeOutcome(ModifyInstanceTypeResult(outcome.result()));
	else
		return ModifyInstanceTypeOutcome(outcome.error());
}

void CassandraClient::modifyInstanceTypeAsync(const ModifyInstanceTypeRequest& request, const ModifyInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyInstanceTypeOutcomeCallable CassandraClient::modifyInstanceTypeCallable(const ModifyInstanceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyIpWhitelistOutcome CassandraClient::modifyIpWhitelist(const ModifyIpWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpWhitelistOutcome(ModifyIpWhitelistResult(outcome.result()));
	else
		return ModifyIpWhitelistOutcome(outcome.error());
}

void CassandraClient::modifyIpWhitelistAsync(const ModifyIpWhitelistRequest& request, const ModifyIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyIpWhitelistOutcomeCallable CassandraClient::modifyIpWhitelistCallable(const ModifyIpWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyIpWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyIpWhitelistGroupOutcome CassandraClient::modifyIpWhitelistGroup(const ModifyIpWhitelistGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpWhitelistGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpWhitelistGroupOutcome(ModifyIpWhitelistGroupResult(outcome.result()));
	else
		return ModifyIpWhitelistGroupOutcome(outcome.error());
}

void CassandraClient::modifyIpWhitelistGroupAsync(const ModifyIpWhitelistGroupRequest& request, const ModifyIpWhitelistGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpWhitelistGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyIpWhitelistGroupOutcomeCallable CassandraClient::modifyIpWhitelistGroupCallable(const ModifyIpWhitelistGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpWhitelistGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyIpWhitelistGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifyParameterOutcome CassandraClient::modifyParameter(const ModifyParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyParameterOutcome(ModifyParameterResult(outcome.result()));
	else
		return ModifyParameterOutcome(outcome.error());
}

void CassandraClient::modifyParameterAsync(const ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifyParameterOutcomeCallable CassandraClient::modifyParameterCallable(const ModifyParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParameterOutcome()>>(
			[this, request]()
			{
			return this->modifyParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ModifySecurityGroupsOutcome CassandraClient::modifySecurityGroups(const ModifySecurityGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityGroupsOutcome(ModifySecurityGroupsResult(outcome.result()));
	else
		return ModifySecurityGroupsOutcome(outcome.error());
}

void CassandraClient::modifySecurityGroupsAsync(const ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ModifySecurityGroupsOutcomeCallable CassandraClient::modifySecurityGroupsCallable(const ModifySecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::MoveResourceGroupOutcome CassandraClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
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

void CassandraClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::MoveResourceGroupOutcomeCallable CassandraClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::PurgeClusterOutcome CassandraClient::purgeCluster(const PurgeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PurgeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PurgeClusterOutcome(PurgeClusterResult(outcome.result()));
	else
		return PurgeClusterOutcome(outcome.error());
}

void CassandraClient::purgeClusterAsync(const PurgeClusterRequest& request, const PurgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, purgeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::PurgeClusterOutcomeCallable CassandraClient::purgeClusterCallable(const PurgeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PurgeClusterOutcome()>>(
			[this, request]()
			{
			return this->purgeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::RebootClusterOutcome CassandraClient::rebootCluster(const RebootClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootClusterOutcome(RebootClusterResult(outcome.result()));
	else
		return RebootClusterOutcome(outcome.error());
}

void CassandraClient::rebootClusterAsync(const RebootClusterRequest& request, const RebootClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::RebootClusterOutcomeCallable CassandraClient::rebootClusterCallable(const RebootClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootClusterOutcome()>>(
			[this, request]()
			{
			return this->rebootCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ReleasePublicContactPointsOutcome CassandraClient::releasePublicContactPoints(const ReleasePublicContactPointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleasePublicContactPointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleasePublicContactPointsOutcome(ReleasePublicContactPointsResult(outcome.result()));
	else
		return ReleasePublicContactPointsOutcome(outcome.error());
}

void CassandraClient::releasePublicContactPointsAsync(const ReleasePublicContactPointsRequest& request, const ReleasePublicContactPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releasePublicContactPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ReleasePublicContactPointsOutcomeCallable CassandraClient::releasePublicContactPointsCallable(const ReleasePublicContactPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleasePublicContactPointsOutcome()>>(
			[this, request]()
			{
			return this->releasePublicContactPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ResizeDiskSizeOutcome CassandraClient::resizeDiskSize(const ResizeDiskSizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeDiskSizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeDiskSizeOutcome(ResizeDiskSizeResult(outcome.result()));
	else
		return ResizeDiskSizeOutcome(outcome.error());
}

void CassandraClient::resizeDiskSizeAsync(const ResizeDiskSizeRequest& request, const ResizeDiskSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeDiskSize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ResizeDiskSizeOutcomeCallable CassandraClient::resizeDiskSizeCallable(const ResizeDiskSizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeDiskSizeOutcome()>>(
			[this, request]()
			{
			return this->resizeDiskSize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::ResizeNodeCountOutcome CassandraClient::resizeNodeCount(const ResizeNodeCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeNodeCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeNodeCountOutcome(ResizeNodeCountResult(outcome.result()));
	else
		return ResizeNodeCountOutcome(outcome.error());
}

void CassandraClient::resizeNodeCountAsync(const ResizeNodeCountRequest& request, const ResizeNodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeNodeCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::ResizeNodeCountOutcomeCallable CassandraClient::resizeNodeCountCallable(const ResizeNodeCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeNodeCountOutcome()>>(
			[this, request]()
			{
			return this->resizeNodeCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::TagResourcesOutcome CassandraClient::tagResources(const TagResourcesRequest &request) const
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

void CassandraClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::TagResourcesOutcomeCallable CassandraClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::UnTagResourcesOutcome CassandraClient::unTagResources(const UnTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnTagResourcesOutcome(UnTagResourcesResult(outcome.result()));
	else
		return UnTagResourcesOutcome(outcome.error());
}

void CassandraClient::unTagResourcesAsync(const UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::UnTagResourcesOutcomeCallable CassandraClient::unTagResourcesCallable(const UnTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->unTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CassandraClient::UpgradeClusterVersionOutcome CassandraClient::upgradeClusterVersion(const UpgradeClusterVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeClusterVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeClusterVersionOutcome(UpgradeClusterVersionResult(outcome.result()));
	else
		return UpgradeClusterVersionOutcome(outcome.error());
}

void CassandraClient::upgradeClusterVersionAsync(const UpgradeClusterVersionRequest& request, const UpgradeClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeClusterVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CassandraClient::UpgradeClusterVersionOutcomeCallable CassandraClient::upgradeClusterVersionCallable(const UpgradeClusterVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeClusterVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeClusterVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

