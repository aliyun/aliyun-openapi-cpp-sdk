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

#include <alibabacloud/hbase/HBaseClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

namespace
{
	const std::string SERVICE_NAME = "HBase";
}

HBaseClient::HBaseClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hbase");
}

HBaseClient::HBaseClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hbase");
}

HBaseClient::HBaseClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hbase");
}

HBaseClient::~HBaseClient()
{}

HBaseClient::AddUserHdfsInfoOutcome HBaseClient::addUserHdfsInfo(const AddUserHdfsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserHdfsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserHdfsInfoOutcome(AddUserHdfsInfoResult(outcome.result()));
	else
		return AddUserHdfsInfoOutcome(outcome.error());
}

void HBaseClient::addUserHdfsInfoAsync(const AddUserHdfsInfoRequest& request, const AddUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserHdfsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::AddUserHdfsInfoOutcomeCallable HBaseClient::addUserHdfsInfoCallable(const AddUserHdfsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserHdfsInfoOutcome()>>(
			[this, request]()
			{
			return this->addUserHdfsInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ConvertInstanceOutcome HBaseClient::convertInstance(const ConvertInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertInstanceOutcome(ConvertInstanceResult(outcome.result()));
	else
		return ConvertInstanceOutcome(outcome.error());
}

void HBaseClient::convertInstanceAsync(const ConvertInstanceRequest& request, const ConvertInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ConvertInstanceOutcomeCallable HBaseClient::convertInstanceCallable(const ConvertInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertInstanceOutcome()>>(
			[this, request]()
			{
			return this->convertInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateBackupPlanOutcome HBaseClient::createBackupPlan(const CreateBackupPlanRequest &request) const
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

void HBaseClient::createBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateBackupPlanOutcomeCallable HBaseClient::createBackupPlanCallable(const CreateBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->createBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateClusterOutcome HBaseClient::createCluster(const CreateClusterRequest &request) const
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

void HBaseClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateClusterOutcomeCallable HBaseClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateHbaseHaSlbOutcome HBaseClient::createHbaseHaSlb(const CreateHbaseHaSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHbaseHaSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHbaseHaSlbOutcome(CreateHbaseHaSlbResult(outcome.result()));
	else
		return CreateHbaseHaSlbOutcome(outcome.error());
}

void HBaseClient::createHbaseHaSlbAsync(const CreateHbaseHaSlbRequest& request, const CreateHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHbaseHaSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateHbaseHaSlbOutcomeCallable HBaseClient::createHbaseHaSlbCallable(const CreateHbaseHaSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHbaseHaSlbOutcome()>>(
			[this, request]()
			{
			return this->createHbaseHaSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateMultiZoneClusterOutcome HBaseClient::createMultiZoneCluster(const CreateMultiZoneClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMultiZoneClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMultiZoneClusterOutcome(CreateMultiZoneClusterResult(outcome.result()));
	else
		return CreateMultiZoneClusterOutcome(outcome.error());
}

void HBaseClient::createMultiZoneClusterAsync(const CreateMultiZoneClusterRequest& request, const CreateMultiZoneClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMultiZoneCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateMultiZoneClusterOutcomeCallable HBaseClient::createMultiZoneClusterCallable(const CreateMultiZoneClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMultiZoneClusterOutcome()>>(
			[this, request]()
			{
			return this->createMultiZoneCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateRestorePlanOutcome HBaseClient::createRestorePlan(const CreateRestorePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRestorePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRestorePlanOutcome(CreateRestorePlanResult(outcome.result()));
	else
		return CreateRestorePlanOutcome(outcome.error());
}

void HBaseClient::createRestorePlanAsync(const CreateRestorePlanRequest& request, const CreateRestorePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRestorePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateRestorePlanOutcomeCallable HBaseClient::createRestorePlanCallable(const CreateRestorePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRestorePlanOutcome()>>(
			[this, request]()
			{
			return this->createRestorePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::CreateServerlessClusterOutcome HBaseClient::createServerlessCluster(const CreateServerlessClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServerlessClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServerlessClusterOutcome(CreateServerlessClusterResult(outcome.result()));
	else
		return CreateServerlessClusterOutcome(outcome.error());
}

void HBaseClient::createServerlessClusterAsync(const CreateServerlessClusterRequest& request, const CreateServerlessClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServerlessCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::CreateServerlessClusterOutcomeCallable HBaseClient::createServerlessClusterCallable(const CreateServerlessClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServerlessClusterOutcome()>>(
			[this, request]()
			{
			return this->createServerlessCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DeleteHBaseHaDBOutcome HBaseClient::deleteHBaseHaDB(const DeleteHBaseHaDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHBaseHaDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHBaseHaDBOutcome(DeleteHBaseHaDBResult(outcome.result()));
	else
		return DeleteHBaseHaDBOutcome(outcome.error());
}

void HBaseClient::deleteHBaseHaDBAsync(const DeleteHBaseHaDBRequest& request, const DeleteHBaseHaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHBaseHaDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DeleteHBaseHaDBOutcomeCallable HBaseClient::deleteHBaseHaDBCallable(const DeleteHBaseHaDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHBaseHaDBOutcome()>>(
			[this, request]()
			{
			return this->deleteHBaseHaDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DeleteHbaseHaSlbOutcome HBaseClient::deleteHbaseHaSlb(const DeleteHbaseHaSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHbaseHaSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHbaseHaSlbOutcome(DeleteHbaseHaSlbResult(outcome.result()));
	else
		return DeleteHbaseHaSlbOutcome(outcome.error());
}

void HBaseClient::deleteHbaseHaSlbAsync(const DeleteHbaseHaSlbRequest& request, const DeleteHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHbaseHaSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DeleteHbaseHaSlbOutcomeCallable HBaseClient::deleteHbaseHaSlbCallable(const DeleteHbaseHaSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHbaseHaSlbOutcome()>>(
			[this, request]()
			{
			return this->deleteHbaseHaSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DeleteInstanceOutcome HBaseClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void HBaseClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DeleteInstanceOutcomeCallable HBaseClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DeleteMultiZoneClusterOutcome HBaseClient::deleteMultiZoneCluster(const DeleteMultiZoneClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMultiZoneClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMultiZoneClusterOutcome(DeleteMultiZoneClusterResult(outcome.result()));
	else
		return DeleteMultiZoneClusterOutcome(outcome.error());
}

void HBaseClient::deleteMultiZoneClusterAsync(const DeleteMultiZoneClusterRequest& request, const DeleteMultiZoneClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMultiZoneCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DeleteMultiZoneClusterOutcomeCallable HBaseClient::deleteMultiZoneClusterCallable(const DeleteMultiZoneClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMultiZoneClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteMultiZoneCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DeleteUserHdfsInfoOutcome HBaseClient::deleteUserHdfsInfo(const DeleteUserHdfsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserHdfsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserHdfsInfoOutcome(DeleteUserHdfsInfoResult(outcome.result()));
	else
		return DeleteUserHdfsInfoOutcome(outcome.error());
}

void HBaseClient::deleteUserHdfsInfoAsync(const DeleteUserHdfsInfoRequest& request, const DeleteUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserHdfsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DeleteUserHdfsInfoOutcomeCallable HBaseClient::deleteUserHdfsInfoCallable(const DeleteUserHdfsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserHdfsInfoOutcome()>>(
			[this, request]()
			{
			return this->deleteUserHdfsInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeAvailableResourceOutcome HBaseClient::describeAvailableResource(const DescribeAvailableResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableResourceOutcome(DescribeAvailableResourceResult(outcome.result()));
	else
		return DescribeAvailableResourceOutcome(outcome.error());
}

void HBaseClient::describeAvailableResourceAsync(const DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeAvailableResourceOutcomeCallable HBaseClient::describeAvailableResourceCallable(const DescribeAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeBackupPlanConfigOutcome HBaseClient::describeBackupPlanConfig(const DescribeBackupPlanConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPlanConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPlanConfigOutcome(DescribeBackupPlanConfigResult(outcome.result()));
	else
		return DescribeBackupPlanConfigOutcome(outcome.error());
}

void HBaseClient::describeBackupPlanConfigAsync(const DescribeBackupPlanConfigRequest& request, const DescribeBackupPlanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPlanConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeBackupPlanConfigOutcomeCallable HBaseClient::describeBackupPlanConfigCallable(const DescribeBackupPlanConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPlanConfigOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPlanConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeBackupStatusOutcome HBaseClient::describeBackupStatus(const DescribeBackupStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupStatusOutcome(DescribeBackupStatusResult(outcome.result()));
	else
		return DescribeBackupStatusOutcome(outcome.error());
}

void HBaseClient::describeBackupStatusAsync(const DescribeBackupStatusRequest& request, const DescribeBackupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeBackupStatusOutcomeCallable HBaseClient::describeBackupStatusCallable(const DescribeBackupStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupStatusOutcome()>>(
			[this, request]()
			{
			return this->describeBackupStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeBackupSummaryOutcome HBaseClient::describeBackupSummary(const DescribeBackupSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupSummaryOutcome(DescribeBackupSummaryResult(outcome.result()));
	else
		return DescribeBackupSummaryOutcome(outcome.error());
}

void HBaseClient::describeBackupSummaryAsync(const DescribeBackupSummaryRequest& request, const DescribeBackupSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeBackupSummaryOutcomeCallable HBaseClient::describeBackupSummaryCallable(const DescribeBackupSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeBackupSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeBackupTablesOutcome HBaseClient::describeBackupTables(const DescribeBackupTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupTablesOutcome(DescribeBackupTablesResult(outcome.result()));
	else
		return DescribeBackupTablesOutcome(outcome.error());
}

void HBaseClient::describeBackupTablesAsync(const DescribeBackupTablesRequest& request, const DescribeBackupTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeBackupTablesOutcomeCallable HBaseClient::describeBackupTablesCallable(const DescribeBackupTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupTablesOutcome()>>(
			[this, request]()
			{
			return this->describeBackupTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeDBInstanceUsageOutcome HBaseClient::describeDBInstanceUsage(const DescribeDBInstanceUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceUsageOutcome(DescribeDBInstanceUsageResult(outcome.result()));
	else
		return DescribeDBInstanceUsageOutcome(outcome.error());
}

void HBaseClient::describeDBInstanceUsageAsync(const DescribeDBInstanceUsageRequest& request, const DescribeDBInstanceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeDBInstanceUsageOutcomeCallable HBaseClient::describeDBInstanceUsageCallable(const DescribeDBInstanceUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceUsageOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeDeletedInstancesOutcome HBaseClient::describeDeletedInstances(const DescribeDeletedInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeletedInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeletedInstancesOutcome(DescribeDeletedInstancesResult(outcome.result()));
	else
		return DescribeDeletedInstancesOutcome(outcome.error());
}

void HBaseClient::describeDeletedInstancesAsync(const DescribeDeletedInstancesRequest& request, const DescribeDeletedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeletedInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeDeletedInstancesOutcomeCallable HBaseClient::describeDeletedInstancesCallable(const DescribeDeletedInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeletedInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDeletedInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeEndpointsOutcome HBaseClient::describeEndpoints(const DescribeEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEndpointsOutcome(DescribeEndpointsResult(outcome.result()));
	else
		return DescribeEndpointsOutcome(outcome.error());
}

void HBaseClient::describeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeEndpointsOutcomeCallable HBaseClient::describeEndpointsCallable(const DescribeEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEndpointsOutcome()>>(
			[this, request]()
			{
			return this->describeEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeInstanceOutcome HBaseClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void HBaseClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeInstanceOutcomeCallable HBaseClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeInstanceTypeOutcome HBaseClient::describeInstanceType(const DescribeInstanceTypeRequest &request) const
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

void HBaseClient::describeInstanceTypeAsync(const DescribeInstanceTypeRequest& request, const DescribeInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeInstanceTypeOutcomeCallable HBaseClient::describeInstanceTypeCallable(const DescribeInstanceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTypeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeInstancesOutcome HBaseClient::describeInstances(const DescribeInstancesRequest &request) const
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

void HBaseClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeInstancesOutcomeCallable HBaseClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeIpWhitelistOutcome HBaseClient::describeIpWhitelist(const DescribeIpWhitelistRequest &request) const
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

void HBaseClient::describeIpWhitelistAsync(const DescribeIpWhitelistRequest& request, const DescribeIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeIpWhitelistOutcomeCallable HBaseClient::describeIpWhitelistCallable(const DescribeIpWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeIpWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeMultiZoneAvailableRegionsOutcome HBaseClient::describeMultiZoneAvailableRegions(const DescribeMultiZoneAvailableRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMultiZoneAvailableRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMultiZoneAvailableRegionsOutcome(DescribeMultiZoneAvailableRegionsResult(outcome.result()));
	else
		return DescribeMultiZoneAvailableRegionsOutcome(outcome.error());
}

void HBaseClient::describeMultiZoneAvailableRegionsAsync(const DescribeMultiZoneAvailableRegionsRequest& request, const DescribeMultiZoneAvailableRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMultiZoneAvailableRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeMultiZoneAvailableRegionsOutcomeCallable HBaseClient::describeMultiZoneAvailableRegionsCallable(const DescribeMultiZoneAvailableRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMultiZoneAvailableRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeMultiZoneAvailableRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeMultiZoneAvailableResourceOutcome HBaseClient::describeMultiZoneAvailableResource(const DescribeMultiZoneAvailableResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMultiZoneAvailableResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMultiZoneAvailableResourceOutcome(DescribeMultiZoneAvailableResourceResult(outcome.result()));
	else
		return DescribeMultiZoneAvailableResourceOutcome(outcome.error());
}

void HBaseClient::describeMultiZoneAvailableResourceAsync(const DescribeMultiZoneAvailableResourceRequest& request, const DescribeMultiZoneAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMultiZoneAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeMultiZoneAvailableResourceOutcomeCallable HBaseClient::describeMultiZoneAvailableResourceCallable(const DescribeMultiZoneAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMultiZoneAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeMultiZoneAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeMultiZoneClusterOutcome HBaseClient::describeMultiZoneCluster(const DescribeMultiZoneClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMultiZoneClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMultiZoneClusterOutcome(DescribeMultiZoneClusterResult(outcome.result()));
	else
		return DescribeMultiZoneClusterOutcome(outcome.error());
}

void HBaseClient::describeMultiZoneClusterAsync(const DescribeMultiZoneClusterRequest& request, const DescribeMultiZoneClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMultiZoneCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeMultiZoneClusterOutcomeCallable HBaseClient::describeMultiZoneClusterCallable(const DescribeMultiZoneClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMultiZoneClusterOutcome()>>(
			[this, request]()
			{
			return this->describeMultiZoneCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeRecoverableTimeRangeOutcome HBaseClient::describeRecoverableTimeRange(const DescribeRecoverableTimeRangeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecoverableTimeRangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecoverableTimeRangeOutcome(DescribeRecoverableTimeRangeResult(outcome.result()));
	else
		return DescribeRecoverableTimeRangeOutcome(outcome.error());
}

void HBaseClient::describeRecoverableTimeRangeAsync(const DescribeRecoverableTimeRangeRequest& request, const DescribeRecoverableTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecoverableTimeRange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeRecoverableTimeRangeOutcomeCallable HBaseClient::describeRecoverableTimeRangeCallable(const DescribeRecoverableTimeRangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecoverableTimeRangeOutcome()>>(
			[this, request]()
			{
			return this->describeRecoverableTimeRange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeRegionsOutcome HBaseClient::describeRegions(const DescribeRegionsRequest &request) const
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

void HBaseClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeRegionsOutcomeCallable HBaseClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeRestoreFullDetailsOutcome HBaseClient::describeRestoreFullDetails(const DescribeRestoreFullDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreFullDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreFullDetailsOutcome(DescribeRestoreFullDetailsResult(outcome.result()));
	else
		return DescribeRestoreFullDetailsOutcome(outcome.error());
}

void HBaseClient::describeRestoreFullDetailsAsync(const DescribeRestoreFullDetailsRequest& request, const DescribeRestoreFullDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreFullDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeRestoreFullDetailsOutcomeCallable HBaseClient::describeRestoreFullDetailsCallable(const DescribeRestoreFullDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreFullDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreFullDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeRestoreIncrDetailOutcome HBaseClient::describeRestoreIncrDetail(const DescribeRestoreIncrDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreIncrDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreIncrDetailOutcome(DescribeRestoreIncrDetailResult(outcome.result()));
	else
		return DescribeRestoreIncrDetailOutcome(outcome.error());
}

void HBaseClient::describeRestoreIncrDetailAsync(const DescribeRestoreIncrDetailRequest& request, const DescribeRestoreIncrDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreIncrDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeRestoreIncrDetailOutcomeCallable HBaseClient::describeRestoreIncrDetailCallable(const DescribeRestoreIncrDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreIncrDetailOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreIncrDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeRestoreSchemaDetailsOutcome HBaseClient::describeRestoreSchemaDetails(const DescribeRestoreSchemaDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreSchemaDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreSchemaDetailsOutcome(DescribeRestoreSchemaDetailsResult(outcome.result()));
	else
		return DescribeRestoreSchemaDetailsOutcome(outcome.error());
}

void HBaseClient::describeRestoreSchemaDetailsAsync(const DescribeRestoreSchemaDetailsRequest& request, const DescribeRestoreSchemaDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreSchemaDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeRestoreSchemaDetailsOutcomeCallable HBaseClient::describeRestoreSchemaDetailsCallable(const DescribeRestoreSchemaDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreSchemaDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreSchemaDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeRestoreSummaryOutcome HBaseClient::describeRestoreSummary(const DescribeRestoreSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreSummaryOutcome(DescribeRestoreSummaryResult(outcome.result()));
	else
		return DescribeRestoreSummaryOutcome(outcome.error());
}

void HBaseClient::describeRestoreSummaryAsync(const DescribeRestoreSummaryRequest& request, const DescribeRestoreSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeRestoreSummaryOutcomeCallable HBaseClient::describeRestoreSummaryCallable(const DescribeRestoreSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeRestoreTablesOutcome HBaseClient::describeRestoreTables(const DescribeRestoreTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreTablesOutcome(DescribeRestoreTablesResult(outcome.result()));
	else
		return DescribeRestoreTablesOutcome(outcome.error());
}

void HBaseClient::describeRestoreTablesAsync(const DescribeRestoreTablesRequest& request, const DescribeRestoreTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeRestoreTablesOutcomeCallable HBaseClient::describeRestoreTablesCallable(const DescribeRestoreTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreTablesOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::DescribeSecurityGroupsOutcome HBaseClient::describeSecurityGroups(const DescribeSecurityGroupsRequest &request) const
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

void HBaseClient::describeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::DescribeSecurityGroupsOutcomeCallable HBaseClient::describeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::EnableHBaseueBackupOutcome HBaseClient::enableHBaseueBackup(const EnableHBaseueBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableHBaseueBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableHBaseueBackupOutcome(EnableHBaseueBackupResult(outcome.result()));
	else
		return EnableHBaseueBackupOutcome(outcome.error());
}

void HBaseClient::enableHBaseueBackupAsync(const EnableHBaseueBackupRequest& request, const EnableHBaseueBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableHBaseueBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::EnableHBaseueBackupOutcomeCallable HBaseClient::enableHBaseueBackupCallable(const EnableHBaseueBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableHBaseueBackupOutcome()>>(
			[this, request]()
			{
			return this->enableHBaseueBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::EnableHBaseueModuleOutcome HBaseClient::enableHBaseueModule(const EnableHBaseueModuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableHBaseueModuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableHBaseueModuleOutcome(EnableHBaseueModuleResult(outcome.result()));
	else
		return EnableHBaseueModuleOutcome(outcome.error());
}

void HBaseClient::enableHBaseueModuleAsync(const EnableHBaseueModuleRequest& request, const EnableHBaseueModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableHBaseueModule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::EnableHBaseueModuleOutcomeCallable HBaseClient::enableHBaseueModuleCallable(const EnableHBaseueModuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableHBaseueModuleOutcome()>>(
			[this, request]()
			{
			return this->enableHBaseueModule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::EvaluateMultiZoneResourceOutcome HBaseClient::evaluateMultiZoneResource(const EvaluateMultiZoneResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EvaluateMultiZoneResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EvaluateMultiZoneResourceOutcome(EvaluateMultiZoneResourceResult(outcome.result()));
	else
		return EvaluateMultiZoneResourceOutcome(outcome.error());
}

void HBaseClient::evaluateMultiZoneResourceAsync(const EvaluateMultiZoneResourceRequest& request, const EvaluateMultiZoneResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, evaluateMultiZoneResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::EvaluateMultiZoneResourceOutcomeCallable HBaseClient::evaluateMultiZoneResourceCallable(const EvaluateMultiZoneResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EvaluateMultiZoneResourceOutcome()>>(
			[this, request]()
			{
			return this->evaluateMultiZoneResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ListTagResourcesOutcome HBaseClient::listTagResources(const ListTagResourcesRequest &request) const
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

void HBaseClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ListTagResourcesOutcomeCallable HBaseClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ListTagsOutcome HBaseClient::listTags(const ListTagsRequest &request) const
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

void HBaseClient::listTagsAsync(const ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ListTagsOutcomeCallable HBaseClient::listTagsCallable(const ListTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsOutcome()>>(
			[this, request]()
			{
			return this->listTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyBackupPlanConfigOutcome HBaseClient::modifyBackupPlanConfig(const ModifyBackupPlanConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPlanConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPlanConfigOutcome(ModifyBackupPlanConfigResult(outcome.result()));
	else
		return ModifyBackupPlanConfigOutcome(outcome.error());
}

void HBaseClient::modifyBackupPlanConfigAsync(const ModifyBackupPlanConfigRequest& request, const ModifyBackupPlanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPlanConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyBackupPlanConfigOutcomeCallable HBaseClient::modifyBackupPlanConfigCallable(const ModifyBackupPlanConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPlanConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPlanConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyClusterDeletionProtectionOutcome HBaseClient::modifyClusterDeletionProtection(const ModifyClusterDeletionProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterDeletionProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterDeletionProtectionOutcome(ModifyClusterDeletionProtectionResult(outcome.result()));
	else
		return ModifyClusterDeletionProtectionOutcome(outcome.error());
}

void HBaseClient::modifyClusterDeletionProtectionAsync(const ModifyClusterDeletionProtectionRequest& request, const ModifyClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterDeletionProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyClusterDeletionProtectionOutcomeCallable HBaseClient::modifyClusterDeletionProtectionCallable(const ModifyClusterDeletionProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterDeletionProtectionOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterDeletionProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyInstanceMaintainTimeOutcome HBaseClient::modifyInstanceMaintainTime(const ModifyInstanceMaintainTimeRequest &request) const
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

void HBaseClient::modifyInstanceMaintainTimeAsync(const ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyInstanceMaintainTimeOutcomeCallable HBaseClient::modifyInstanceMaintainTimeCallable(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyInstanceNameOutcome HBaseClient::modifyInstanceName(const ModifyInstanceNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceNameOutcome(ModifyInstanceNameResult(outcome.result()));
	else
		return ModifyInstanceNameOutcome(outcome.error());
}

void HBaseClient::modifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyInstanceNameOutcomeCallable HBaseClient::modifyInstanceNameCallable(const ModifyInstanceNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceNameOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyIpWhitelistOutcome HBaseClient::modifyIpWhitelist(const ModifyIpWhitelistRequest &request) const
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

void HBaseClient::modifyIpWhitelistAsync(const ModifyIpWhitelistRequest& request, const ModifyIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyIpWhitelistOutcomeCallable HBaseClient::modifyIpWhitelistCallable(const ModifyIpWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyIpWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyMultiZoneClusterNodeTypeOutcome HBaseClient::modifyMultiZoneClusterNodeType(const ModifyMultiZoneClusterNodeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMultiZoneClusterNodeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMultiZoneClusterNodeTypeOutcome(ModifyMultiZoneClusterNodeTypeResult(outcome.result()));
	else
		return ModifyMultiZoneClusterNodeTypeOutcome(outcome.error());
}

void HBaseClient::modifyMultiZoneClusterNodeTypeAsync(const ModifyMultiZoneClusterNodeTypeRequest& request, const ModifyMultiZoneClusterNodeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMultiZoneClusterNodeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyMultiZoneClusterNodeTypeOutcomeCallable HBaseClient::modifyMultiZoneClusterNodeTypeCallable(const ModifyMultiZoneClusterNodeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMultiZoneClusterNodeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyMultiZoneClusterNodeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifySecurityGroupsOutcome HBaseClient::modifySecurityGroups(const ModifySecurityGroupsRequest &request) const
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

void HBaseClient::modifySecurityGroupsAsync(const ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifySecurityGroupsOutcomeCallable HBaseClient::modifySecurityGroupsCallable(const ModifySecurityGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ModifyUIAccountPasswordOutcome HBaseClient::modifyUIAccountPassword(const ModifyUIAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUIAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUIAccountPasswordOutcome(ModifyUIAccountPasswordResult(outcome.result()));
	else
		return ModifyUIAccountPasswordOutcome(outcome.error());
}

void HBaseClient::modifyUIAccountPasswordAsync(const ModifyUIAccountPasswordRequest& request, const ModifyUIAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUIAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ModifyUIAccountPasswordOutcomeCallable HBaseClient::modifyUIAccountPasswordCallable(const ModifyUIAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUIAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyUIAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::PurgeInstanceOutcome HBaseClient::purgeInstance(const PurgeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PurgeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PurgeInstanceOutcome(PurgeInstanceResult(outcome.result()));
	else
		return PurgeInstanceOutcome(outcome.error());
}

void HBaseClient::purgeInstanceAsync(const PurgeInstanceRequest& request, const PurgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, purgeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::PurgeInstanceOutcomeCallable HBaseClient::purgeInstanceCallable(const PurgeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PurgeInstanceOutcome()>>(
			[this, request]()
			{
			return this->purgeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::QueryHBaseHaDBOutcome HBaseClient::queryHBaseHaDB(const QueryHBaseHaDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryHBaseHaDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryHBaseHaDBOutcome(QueryHBaseHaDBResult(outcome.result()));
	else
		return QueryHBaseHaDBOutcome(outcome.error());
}

void HBaseClient::queryHBaseHaDBAsync(const QueryHBaseHaDBRequest& request, const QueryHBaseHaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryHBaseHaDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::QueryHBaseHaDBOutcomeCallable HBaseClient::queryHBaseHaDBCallable(const QueryHBaseHaDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryHBaseHaDBOutcome()>>(
			[this, request]()
			{
			return this->queryHBaseHaDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::QueryXpackRelateDBOutcome HBaseClient::queryXpackRelateDB(const QueryXpackRelateDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryXpackRelateDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryXpackRelateDBOutcome(QueryXpackRelateDBResult(outcome.result()));
	else
		return QueryXpackRelateDBOutcome(outcome.error());
}

void HBaseClient::queryXpackRelateDBAsync(const QueryXpackRelateDBRequest& request, const QueryXpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryXpackRelateDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::QueryXpackRelateDBOutcomeCallable HBaseClient::queryXpackRelateDBCallable(const QueryXpackRelateDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryXpackRelateDBOutcome()>>(
			[this, request]()
			{
			return this->queryXpackRelateDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::RenewInstanceOutcome HBaseClient::renewInstance(const RenewInstanceRequest &request) const
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

void HBaseClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::RenewInstanceOutcomeCallable HBaseClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ResizeDiskSizeOutcome HBaseClient::resizeDiskSize(const ResizeDiskSizeRequest &request) const
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

void HBaseClient::resizeDiskSizeAsync(const ResizeDiskSizeRequest& request, const ResizeDiskSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeDiskSize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ResizeDiskSizeOutcomeCallable HBaseClient::resizeDiskSizeCallable(const ResizeDiskSizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeDiskSizeOutcome()>>(
			[this, request]()
			{
			return this->resizeDiskSize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ResizeMultiZoneClusterDiskSizeOutcome HBaseClient::resizeMultiZoneClusterDiskSize(const ResizeMultiZoneClusterDiskSizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeMultiZoneClusterDiskSizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeMultiZoneClusterDiskSizeOutcome(ResizeMultiZoneClusterDiskSizeResult(outcome.result()));
	else
		return ResizeMultiZoneClusterDiskSizeOutcome(outcome.error());
}

void HBaseClient::resizeMultiZoneClusterDiskSizeAsync(const ResizeMultiZoneClusterDiskSizeRequest& request, const ResizeMultiZoneClusterDiskSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeMultiZoneClusterDiskSize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ResizeMultiZoneClusterDiskSizeOutcomeCallable HBaseClient::resizeMultiZoneClusterDiskSizeCallable(const ResizeMultiZoneClusterDiskSizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeMultiZoneClusterDiskSizeOutcome()>>(
			[this, request]()
			{
			return this->resizeMultiZoneClusterDiskSize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ResizeMultiZoneClusterNodeCountOutcome HBaseClient::resizeMultiZoneClusterNodeCount(const ResizeMultiZoneClusterNodeCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeMultiZoneClusterNodeCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeMultiZoneClusterNodeCountOutcome(ResizeMultiZoneClusterNodeCountResult(outcome.result()));
	else
		return ResizeMultiZoneClusterNodeCountOutcome(outcome.error());
}

void HBaseClient::resizeMultiZoneClusterNodeCountAsync(const ResizeMultiZoneClusterNodeCountRequest& request, const ResizeMultiZoneClusterNodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeMultiZoneClusterNodeCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ResizeMultiZoneClusterNodeCountOutcomeCallable HBaseClient::resizeMultiZoneClusterNodeCountCallable(const ResizeMultiZoneClusterNodeCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeMultiZoneClusterNodeCountOutcome()>>(
			[this, request]()
			{
			return this->resizeMultiZoneClusterNodeCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::ResizeNodeCountOutcome HBaseClient::resizeNodeCount(const ResizeNodeCountRequest &request) const
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

void HBaseClient::resizeNodeCountAsync(const ResizeNodeCountRequest& request, const ResizeNodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeNodeCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::ResizeNodeCountOutcomeCallable HBaseClient::resizeNodeCountCallable(const ResizeNodeCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeNodeCountOutcome()>>(
			[this, request]()
			{
			return this->resizeNodeCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::RestartInstanceOutcome HBaseClient::restartInstance(const RestartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartInstanceOutcome(RestartInstanceResult(outcome.result()));
	else
		return RestartInstanceOutcome(outcome.error());
}

void HBaseClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::RestartInstanceOutcomeCallable HBaseClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::SwitchHbaseHaSlbOutcome HBaseClient::switchHbaseHaSlb(const SwitchHbaseHaSlbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchHbaseHaSlbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchHbaseHaSlbOutcome(SwitchHbaseHaSlbResult(outcome.result()));
	else
		return SwitchHbaseHaSlbOutcome(outcome.error());
}

void HBaseClient::switchHbaseHaSlbAsync(const SwitchHbaseHaSlbRequest& request, const SwitchHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchHbaseHaSlb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::SwitchHbaseHaSlbOutcomeCallable HBaseClient::switchHbaseHaSlbCallable(const SwitchHbaseHaSlbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchHbaseHaSlbOutcome()>>(
			[this, request]()
			{
			return this->switchHbaseHaSlb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::TagResourcesOutcome HBaseClient::tagResources(const TagResourcesRequest &request) const
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

void HBaseClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::TagResourcesOutcomeCallable HBaseClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::UnTagResourcesOutcome HBaseClient::unTagResources(const UnTagResourcesRequest &request) const
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

void HBaseClient::unTagResourcesAsync(const UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::UnTagResourcesOutcomeCallable HBaseClient::unTagResourcesCallable(const UnTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->unTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::UpgradeMultiZoneClusterOutcome HBaseClient::upgradeMultiZoneCluster(const UpgradeMultiZoneClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeMultiZoneClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeMultiZoneClusterOutcome(UpgradeMultiZoneClusterResult(outcome.result()));
	else
		return UpgradeMultiZoneClusterOutcome(outcome.error());
}

void HBaseClient::upgradeMultiZoneClusterAsync(const UpgradeMultiZoneClusterRequest& request, const UpgradeMultiZoneClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeMultiZoneCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::UpgradeMultiZoneClusterOutcomeCallable HBaseClient::upgradeMultiZoneClusterCallable(const UpgradeMultiZoneClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeMultiZoneClusterOutcome()>>(
			[this, request]()
			{
			return this->upgradeMultiZoneCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HBaseClient::XpackRelateDBOutcome HBaseClient::xpackRelateDB(const XpackRelateDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return XpackRelateDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return XpackRelateDBOutcome(XpackRelateDBResult(outcome.result()));
	else
		return XpackRelateDBOutcome(outcome.error());
}

void HBaseClient::xpackRelateDBAsync(const XpackRelateDBRequest& request, const XpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, xpackRelateDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HBaseClient::XpackRelateDBOutcomeCallable HBaseClient::xpackRelateDBCallable(const XpackRelateDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<XpackRelateDBOutcome()>>(
			[this, request]()
			{
			return this->xpackRelateDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

