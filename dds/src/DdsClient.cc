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

#include <alibabacloud/dds/DdsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

namespace
{
	const std::string SERVICE_NAME = "Dds";
}

DdsClient::DdsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dds");
}

DdsClient::DdsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dds");
}

DdsClient::DdsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dds");
}

DdsClient::~DdsClient()
{}

DdsClient::AllocateNodePrivateNetworkAddressOutcome DdsClient::allocateNodePrivateNetworkAddress(const AllocateNodePrivateNetworkAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateNodePrivateNetworkAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateNodePrivateNetworkAddressOutcome(AllocateNodePrivateNetworkAddressResult(outcome.result()));
	else
		return AllocateNodePrivateNetworkAddressOutcome(outcome.error());
}

void DdsClient::allocateNodePrivateNetworkAddressAsync(const AllocateNodePrivateNetworkAddressRequest& request, const AllocateNodePrivateNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateNodePrivateNetworkAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::AllocateNodePrivateNetworkAddressOutcomeCallable DdsClient::allocateNodePrivateNetworkAddressCallable(const AllocateNodePrivateNetworkAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateNodePrivateNetworkAddressOutcome()>>(
			[this, request]()
			{
			return this->allocateNodePrivateNetworkAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::AllocatePublicNetworkAddressOutcome DdsClient::allocatePublicNetworkAddress(const AllocatePublicNetworkAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocatePublicNetworkAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocatePublicNetworkAddressOutcome(AllocatePublicNetworkAddressResult(outcome.result()));
	else
		return AllocatePublicNetworkAddressOutcome(outcome.error());
}

void DdsClient::allocatePublicNetworkAddressAsync(const AllocatePublicNetworkAddressRequest& request, const AllocatePublicNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocatePublicNetworkAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::AllocatePublicNetworkAddressOutcomeCallable DdsClient::allocatePublicNetworkAddressCallable(const AllocatePublicNetworkAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocatePublicNetworkAddressOutcome()>>(
			[this, request]()
			{
			return this->allocatePublicNetworkAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::CheckCloudResourceAuthorizedOutcome DdsClient::checkCloudResourceAuthorized(const CheckCloudResourceAuthorizedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCloudResourceAuthorizedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCloudResourceAuthorizedOutcome(CheckCloudResourceAuthorizedResult(outcome.result()));
	else
		return CheckCloudResourceAuthorizedOutcome(outcome.error());
}

void DdsClient::checkCloudResourceAuthorizedAsync(const CheckCloudResourceAuthorizedRequest& request, const CheckCloudResourceAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCloudResourceAuthorized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CheckCloudResourceAuthorizedOutcomeCallable DdsClient::checkCloudResourceAuthorizedCallable(const CheckCloudResourceAuthorizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCloudResourceAuthorizedOutcome()>>(
			[this, request]()
			{
			return this->checkCloudResourceAuthorized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::CheckRecoveryConditionOutcome DdsClient::checkRecoveryCondition(const CheckRecoveryConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckRecoveryConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckRecoveryConditionOutcome(CheckRecoveryConditionResult(outcome.result()));
	else
		return CheckRecoveryConditionOutcome(outcome.error());
}

void DdsClient::checkRecoveryConditionAsync(const CheckRecoveryConditionRequest& request, const CheckRecoveryConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkRecoveryCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CheckRecoveryConditionOutcomeCallable DdsClient::checkRecoveryConditionCallable(const CheckRecoveryConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckRecoveryConditionOutcome()>>(
			[this, request]()
			{
			return this->checkRecoveryCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::CreateBackupOutcome DdsClient::createBackup(const CreateBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupOutcome(CreateBackupResult(outcome.result()));
	else
		return CreateBackupOutcome(outcome.error());
}

void DdsClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CreateBackupOutcomeCallable DdsClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::CreateDBInstanceOutcome DdsClient::createDBInstance(const CreateDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstanceOutcome(CreateDBInstanceResult(outcome.result()));
	else
		return CreateDBInstanceOutcome(outcome.error());
}

void DdsClient::createDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CreateDBInstanceOutcomeCallable DdsClient::createDBInstanceCallable(const CreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::CreateNodeOutcome DdsClient::createNode(const CreateNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNodeOutcome(CreateNodeResult(outcome.result()));
	else
		return CreateNodeOutcome(outcome.error());
}

void DdsClient::createNodeAsync(const CreateNodeRequest& request, const CreateNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CreateNodeOutcomeCallable DdsClient::createNodeCallable(const CreateNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNodeOutcome()>>(
			[this, request]()
			{
			return this->createNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::CreateRecommendationTaskOutcome DdsClient::createRecommendationTask(const CreateRecommendationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRecommendationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRecommendationTaskOutcome(CreateRecommendationTaskResult(outcome.result()));
	else
		return CreateRecommendationTaskOutcome(outcome.error());
}

void DdsClient::createRecommendationTaskAsync(const CreateRecommendationTaskRequest& request, const CreateRecommendationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRecommendationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CreateRecommendationTaskOutcomeCallable DdsClient::createRecommendationTaskCallable(const CreateRecommendationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRecommendationTaskOutcome()>>(
			[this, request]()
			{
			return this->createRecommendationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::CreateShardingDBInstanceOutcome DdsClient::createShardingDBInstance(const CreateShardingDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateShardingDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateShardingDBInstanceOutcome(CreateShardingDBInstanceResult(outcome.result()));
	else
		return CreateShardingDBInstanceOutcome(outcome.error());
}

void DdsClient::createShardingDBInstanceAsync(const CreateShardingDBInstanceRequest& request, const CreateShardingDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createShardingDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CreateShardingDBInstanceOutcomeCallable DdsClient::createShardingDBInstanceCallable(const CreateShardingDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateShardingDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createShardingDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DeleteDBInstanceOutcome DdsClient::deleteDBInstance(const DeleteDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBInstanceOutcome(DeleteDBInstanceResult(outcome.result()));
	else
		return DeleteDBInstanceOutcome(outcome.error());
}

void DdsClient::deleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DeleteDBInstanceOutcomeCallable DdsClient::deleteDBInstanceCallable(const DeleteDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DeleteNodeOutcome DdsClient::deleteNode(const DeleteNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNodeOutcome(DeleteNodeResult(outcome.result()));
	else
		return DeleteNodeOutcome(outcome.error());
}

void DdsClient::deleteNodeAsync(const DeleteNodeRequest& request, const DeleteNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DeleteNodeOutcomeCallable DdsClient::deleteNodeCallable(const DeleteNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeAccountsOutcome DdsClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void DdsClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAccountsOutcomeCallable DdsClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeAuditFilesOutcome DdsClient::describeAuditFiles(const DescribeAuditFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditFilesOutcome(DescribeAuditFilesResult(outcome.result()));
	else
		return DescribeAuditFilesOutcome(outcome.error());
}

void DdsClient::describeAuditFilesAsync(const DescribeAuditFilesRequest& request, const DescribeAuditFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAuditFilesOutcomeCallable DdsClient::describeAuditFilesCallable(const DescribeAuditFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditFilesOutcome()>>(
			[this, request]()
			{
			return this->describeAuditFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeAuditLogFilterOutcome DdsClient::describeAuditLogFilter(const DescribeAuditLogFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditLogFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditLogFilterOutcome(DescribeAuditLogFilterResult(outcome.result()));
	else
		return DescribeAuditLogFilterOutcome(outcome.error());
}

void DdsClient::describeAuditLogFilterAsync(const DescribeAuditLogFilterRequest& request, const DescribeAuditLogFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditLogFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAuditLogFilterOutcomeCallable DdsClient::describeAuditLogFilterCallable(const DescribeAuditLogFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditLogFilterOutcome()>>(
			[this, request]()
			{
			return this->describeAuditLogFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeAuditPolicyOutcome DdsClient::describeAuditPolicy(const DescribeAuditPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditPolicyOutcome(DescribeAuditPolicyResult(outcome.result()));
	else
		return DescribeAuditPolicyOutcome(outcome.error());
}

void DdsClient::describeAuditPolicyAsync(const DescribeAuditPolicyRequest& request, const DescribeAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAuditPolicyOutcomeCallable DdsClient::describeAuditPolicyCallable(const DescribeAuditPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeAuditPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeAuditRecordsOutcome DdsClient::describeAuditRecords(const DescribeAuditRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditRecordsOutcome(DescribeAuditRecordsResult(outcome.result()));
	else
		return DescribeAuditRecordsOutcome(outcome.error());
}

void DdsClient::describeAuditRecordsAsync(const DescribeAuditRecordsRequest& request, const DescribeAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAuditRecordsOutcomeCallable DdsClient::describeAuditRecordsCallable(const DescribeAuditRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeAuditRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeAvailableEngineVersionOutcome DdsClient::describeAvailableEngineVersion(const DescribeAvailableEngineVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableEngineVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableEngineVersionOutcome(DescribeAvailableEngineVersionResult(outcome.result()));
	else
		return DescribeAvailableEngineVersionOutcome(outcome.error());
}

void DdsClient::describeAvailableEngineVersionAsync(const DescribeAvailableEngineVersionRequest& request, const DescribeAvailableEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableEngineVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAvailableEngineVersionOutcomeCallable DdsClient::describeAvailableEngineVersionCallable(const DescribeAvailableEngineVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableEngineVersionOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableEngineVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeAvailableResourceOutcome DdsClient::describeAvailableResource(const DescribeAvailableResourceRequest &request) const
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

void DdsClient::describeAvailableResourceAsync(const DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAvailableResourceOutcomeCallable DdsClient::describeAvailableResourceCallable(const DescribeAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeAvailableTimeRangeOutcome DdsClient::describeAvailableTimeRange(const DescribeAvailableTimeRangeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableTimeRangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableTimeRangeOutcome(DescribeAvailableTimeRangeResult(outcome.result()));
	else
		return DescribeAvailableTimeRangeOutcome(outcome.error());
}

void DdsClient::describeAvailableTimeRangeAsync(const DescribeAvailableTimeRangeRequest& request, const DescribeAvailableTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableTimeRange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAvailableTimeRangeOutcomeCallable DdsClient::describeAvailableTimeRangeCallable(const DescribeAvailableTimeRangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableTimeRangeOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableTimeRange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeBackupDBsOutcome DdsClient::describeBackupDBs(const DescribeBackupDBsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupDBsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupDBsOutcome(DescribeBackupDBsResult(outcome.result()));
	else
		return DescribeBackupDBsOutcome(outcome.error());
}

void DdsClient::describeBackupDBsAsync(const DescribeBackupDBsRequest& request, const DescribeBackupDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupDBs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeBackupDBsOutcomeCallable DdsClient::describeBackupDBsCallable(const DescribeBackupDBsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupDBsOutcome()>>(
			[this, request]()
			{
			return this->describeBackupDBs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeBackupPolicyOutcome DdsClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPolicyOutcome(DescribeBackupPolicyResult(outcome.result()));
	else
		return DescribeBackupPolicyOutcome(outcome.error());
}

void DdsClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeBackupPolicyOutcomeCallable DdsClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeBackupsOutcome DdsClient::describeBackups(const DescribeBackupsRequest &request) const
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

void DdsClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeBackupsOutcomeCallable DdsClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeDBInstanceAttributeOutcome DdsClient::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceAttributeOutcome(DescribeDBInstanceAttributeResult(outcome.result()));
	else
		return DescribeDBInstanceAttributeOutcome(outcome.error());
}

void DdsClient::describeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstanceAttributeOutcomeCallable DdsClient::describeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeDBInstanceEncryptionKeyOutcome DdsClient::describeDBInstanceEncryptionKey(const DescribeDBInstanceEncryptionKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceEncryptionKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceEncryptionKeyOutcome(DescribeDBInstanceEncryptionKeyResult(outcome.result()));
	else
		return DescribeDBInstanceEncryptionKeyOutcome(outcome.error());
}

void DdsClient::describeDBInstanceEncryptionKeyAsync(const DescribeDBInstanceEncryptionKeyRequest& request, const DescribeDBInstanceEncryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceEncryptionKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstanceEncryptionKeyOutcomeCallable DdsClient::describeDBInstanceEncryptionKeyCallable(const DescribeDBInstanceEncryptionKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceEncryptionKeyOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceEncryptionKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeDBInstanceMonitorOutcome DdsClient::describeDBInstanceMonitor(const DescribeDBInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceMonitorOutcome(DescribeDBInstanceMonitorResult(outcome.result()));
	else
		return DescribeDBInstanceMonitorOutcome(outcome.error());
}

void DdsClient::describeDBInstanceMonitorAsync(const DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstanceMonitorOutcomeCallable DdsClient::describeDBInstanceMonitorCallable(const DescribeDBInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeDBInstancePerformanceOutcome DdsClient::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancePerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancePerformanceOutcome(DescribeDBInstancePerformanceResult(outcome.result()));
	else
		return DescribeDBInstancePerformanceOutcome(outcome.error());
}

void DdsClient::describeDBInstancePerformanceAsync(const DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstancePerformanceOutcomeCallable DdsClient::describeDBInstancePerformanceCallable(const DescribeDBInstancePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeDBInstanceSSLOutcome DdsClient::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceSSLOutcome(DescribeDBInstanceSSLResult(outcome.result()));
	else
		return DescribeDBInstanceSSLOutcome(outcome.error());
}

void DdsClient::describeDBInstanceSSLAsync(const DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstanceSSLOutcomeCallable DdsClient::describeDBInstanceSSLCallable(const DescribeDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeDBInstanceTDEInfoOutcome DdsClient::describeDBInstanceTDEInfo(const DescribeDBInstanceTDEInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceTDEInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceTDEInfoOutcome(DescribeDBInstanceTDEInfoResult(outcome.result()));
	else
		return DescribeDBInstanceTDEInfoOutcome(outcome.error());
}

void DdsClient::describeDBInstanceTDEInfoAsync(const DescribeDBInstanceTDEInfoRequest& request, const DescribeDBInstanceTDEInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceTDEInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstanceTDEInfoOutcomeCallable DdsClient::describeDBInstanceTDEInfoCallable(const DescribeDBInstanceTDEInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceTDEInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceTDEInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeDBInstancesOutcome DdsClient::describeDBInstances(const DescribeDBInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesOutcome(DescribeDBInstancesResult(outcome.result()));
	else
		return DescribeDBInstancesOutcome(outcome.error());
}

void DdsClient::describeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstancesOutcomeCallable DdsClient::describeDBInstancesCallable(const DescribeDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeErrorLogRecordsOutcome DdsClient::describeErrorLogRecords(const DescribeErrorLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeErrorLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeErrorLogRecordsOutcome(DescribeErrorLogRecordsResult(outcome.result()));
	else
		return DescribeErrorLogRecordsOutcome(outcome.error());
}

void DdsClient::describeErrorLogRecordsAsync(const DescribeErrorLogRecordsRequest& request, const DescribeErrorLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeErrorLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeErrorLogRecordsOutcomeCallable DdsClient::describeErrorLogRecordsCallable(const DescribeErrorLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeErrorLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeErrorLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeIndexRecommendationOutcome DdsClient::describeIndexRecommendation(const DescribeIndexRecommendationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIndexRecommendationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIndexRecommendationOutcome(DescribeIndexRecommendationResult(outcome.result()));
	else
		return DescribeIndexRecommendationOutcome(outcome.error());
}

void DdsClient::describeIndexRecommendationAsync(const DescribeIndexRecommendationRequest& request, const DescribeIndexRecommendationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIndexRecommendation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeIndexRecommendationOutcomeCallable DdsClient::describeIndexRecommendationCallable(const DescribeIndexRecommendationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIndexRecommendationOutcome()>>(
			[this, request]()
			{
			return this->describeIndexRecommendation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeInstanceAutoRenewalAttributeOutcome DdsClient::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAutoRenewalAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAutoRenewalAttributeOutcome(DescribeInstanceAutoRenewalAttributeResult(outcome.result()));
	else
		return DescribeInstanceAutoRenewalAttributeOutcome(outcome.error());
}

void DdsClient::describeInstanceAutoRenewalAttributeAsync(const DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeInstanceAutoRenewalAttributeOutcomeCallable DdsClient::describeInstanceAutoRenewalAttributeCallable(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeKernelReleaseNotesOutcome DdsClient::describeKernelReleaseNotes(const DescribeKernelReleaseNotesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKernelReleaseNotesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKernelReleaseNotesOutcome(DescribeKernelReleaseNotesResult(outcome.result()));
	else
		return DescribeKernelReleaseNotesOutcome(outcome.error());
}

void DdsClient::describeKernelReleaseNotesAsync(const DescribeKernelReleaseNotesRequest& request, const DescribeKernelReleaseNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKernelReleaseNotes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeKernelReleaseNotesOutcomeCallable DdsClient::describeKernelReleaseNotesCallable(const DescribeKernelReleaseNotesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKernelReleaseNotesOutcome()>>(
			[this, request]()
			{
			return this->describeKernelReleaseNotes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeMongoDBLogConfigOutcome DdsClient::describeMongoDBLogConfig(const DescribeMongoDBLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMongoDBLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMongoDBLogConfigOutcome(DescribeMongoDBLogConfigResult(outcome.result()));
	else
		return DescribeMongoDBLogConfigOutcome(outcome.error());
}

void DdsClient::describeMongoDBLogConfigAsync(const DescribeMongoDBLogConfigRequest& request, const DescribeMongoDBLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMongoDBLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeMongoDBLogConfigOutcomeCallable DdsClient::describeMongoDBLogConfigCallable(const DescribeMongoDBLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMongoDBLogConfigOutcome()>>(
			[this, request]()
			{
			return this->describeMongoDBLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeParameterModificationHistoryOutcome DdsClient::describeParameterModificationHistory(const DescribeParameterModificationHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterModificationHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterModificationHistoryOutcome(DescribeParameterModificationHistoryResult(outcome.result()));
	else
		return DescribeParameterModificationHistoryOutcome(outcome.error());
}

void DdsClient::describeParameterModificationHistoryAsync(const DescribeParameterModificationHistoryRequest& request, const DescribeParameterModificationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterModificationHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeParameterModificationHistoryOutcomeCallable DdsClient::describeParameterModificationHistoryCallable(const DescribeParameterModificationHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterModificationHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeParameterModificationHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeParameterTemplatesOutcome DdsClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterTemplatesOutcome(DescribeParameterTemplatesResult(outcome.result()));
	else
		return DescribeParameterTemplatesOutcome(outcome.error());
}

void DdsClient::describeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeParameterTemplatesOutcomeCallable DdsClient::describeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeParametersOutcome DdsClient::describeParameters(const DescribeParametersRequest &request) const
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

void DdsClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeParametersOutcomeCallable DdsClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeRegionsOutcome DdsClient::describeRegions(const DescribeRegionsRequest &request) const
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

void DdsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeRegionsOutcomeCallable DdsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeRenewalPriceOutcome DdsClient::describeRenewalPrice(const DescribeRenewalPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRenewalPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRenewalPriceOutcome(DescribeRenewalPriceResult(outcome.result()));
	else
		return DescribeRenewalPriceOutcome(outcome.error());
}

void DdsClient::describeRenewalPriceAsync(const DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRenewalPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeRenewalPriceOutcomeCallable DdsClient::describeRenewalPriceCallable(const DescribeRenewalPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRenewalPriceOutcome()>>(
			[this, request]()
			{
			return this->describeRenewalPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeReplicaSetRoleOutcome DdsClient::describeReplicaSetRole(const DescribeReplicaSetRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicaSetRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicaSetRoleOutcome(DescribeReplicaSetRoleResult(outcome.result()));
	else
		return DescribeReplicaSetRoleOutcome(outcome.error());
}

void DdsClient::describeReplicaSetRoleAsync(const DescribeReplicaSetRoleRequest& request, const DescribeReplicaSetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicaSetRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeReplicaSetRoleOutcomeCallable DdsClient::describeReplicaSetRoleCallable(const DescribeReplicaSetRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicaSetRoleOutcome()>>(
			[this, request]()
			{
			return this->describeReplicaSetRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeRoleZoneInfoOutcome DdsClient::describeRoleZoneInfo(const DescribeRoleZoneInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRoleZoneInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRoleZoneInfoOutcome(DescribeRoleZoneInfoResult(outcome.result()));
	else
		return DescribeRoleZoneInfoOutcome(outcome.error());
}

void DdsClient::describeRoleZoneInfoAsync(const DescribeRoleZoneInfoRequest& request, const DescribeRoleZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRoleZoneInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeRoleZoneInfoOutcomeCallable DdsClient::describeRoleZoneInfoCallable(const DescribeRoleZoneInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRoleZoneInfoOutcome()>>(
			[this, request]()
			{
			return this->describeRoleZoneInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeRunningLogRecordsOutcome DdsClient::describeRunningLogRecords(const DescribeRunningLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRunningLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRunningLogRecordsOutcome(DescribeRunningLogRecordsResult(outcome.result()));
	else
		return DescribeRunningLogRecordsOutcome(outcome.error());
}

void DdsClient::describeRunningLogRecordsAsync(const DescribeRunningLogRecordsRequest& request, const DescribeRunningLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRunningLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeRunningLogRecordsOutcomeCallable DdsClient::describeRunningLogRecordsCallable(const DescribeRunningLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRunningLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeRunningLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeSecurityGroupConfigurationOutcome DdsClient::describeSecurityGroupConfiguration(const DescribeSecurityGroupConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupConfigurationOutcome(DescribeSecurityGroupConfigurationResult(outcome.result()));
	else
		return DescribeSecurityGroupConfigurationOutcome(outcome.error());
}

void DdsClient::describeSecurityGroupConfigurationAsync(const DescribeSecurityGroupConfigurationRequest& request, const DescribeSecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeSecurityGroupConfigurationOutcomeCallable DdsClient::describeSecurityGroupConfigurationCallable(const DescribeSecurityGroupConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupConfigurationOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeSecurityIpsOutcome DdsClient::describeSecurityIps(const DescribeSecurityIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityIpsOutcome(DescribeSecurityIpsResult(outcome.result()));
	else
		return DescribeSecurityIpsOutcome(outcome.error());
}

void DdsClient::describeSecurityIpsAsync(const DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeSecurityIpsOutcomeCallable DdsClient::describeSecurityIpsCallable(const DescribeSecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeShardingNetworkAddressOutcome DdsClient::describeShardingNetworkAddress(const DescribeShardingNetworkAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeShardingNetworkAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeShardingNetworkAddressOutcome(DescribeShardingNetworkAddressResult(outcome.result()));
	else
		return DescribeShardingNetworkAddressOutcome(outcome.error());
}

void DdsClient::describeShardingNetworkAddressAsync(const DescribeShardingNetworkAddressRequest& request, const DescribeShardingNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeShardingNetworkAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeShardingNetworkAddressOutcomeCallable DdsClient::describeShardingNetworkAddressCallable(const DescribeShardingNetworkAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeShardingNetworkAddressOutcome()>>(
			[this, request]()
			{
			return this->describeShardingNetworkAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeSlowLogRecordsOutcome DdsClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowLogRecordsOutcome(DescribeSlowLogRecordsResult(outcome.result()));
	else
		return DescribeSlowLogRecordsOutcome(outcome.error());
}

void DdsClient::describeSlowLogRecordsAsync(const DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeSlowLogRecordsOutcomeCallable DdsClient::describeSlowLogRecordsCallable(const DescribeSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeTagsOutcome DdsClient::describeTags(const DescribeTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagsOutcome(DescribeTagsResult(outcome.result()));
	else
		return DescribeTagsOutcome(outcome.error());
}

void DdsClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeTagsOutcomeCallable DdsClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeUserEncryptionKeyListOutcome DdsClient::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserEncryptionKeyListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserEncryptionKeyListOutcome(DescribeUserEncryptionKeyListResult(outcome.result()));
	else
		return DescribeUserEncryptionKeyListOutcome(outcome.error());
}

void DdsClient::describeUserEncryptionKeyListAsync(const DescribeUserEncryptionKeyListRequest& request, const DescribeUserEncryptionKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserEncryptionKeyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeUserEncryptionKeyListOutcomeCallable DdsClient::describeUserEncryptionKeyListCallable(const DescribeUserEncryptionKeyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserEncryptionKeyListOutcome()>>(
			[this, request]()
			{
			return this->describeUserEncryptionKeyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DestroyInstanceOutcome DdsClient::destroyInstance(const DestroyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DestroyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DestroyInstanceOutcome(DestroyInstanceResult(outcome.result()));
	else
		return DestroyInstanceOutcome(outcome.error());
}

void DdsClient::destroyInstanceAsync(const DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, destroyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DestroyInstanceOutcomeCallable DdsClient::destroyInstanceCallable(const DestroyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DestroyInstanceOutcome()>>(
			[this, request]()
			{
			return this->destroyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ListTagResourcesOutcome DdsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void DdsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ListTagResourcesOutcomeCallable DdsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::MigrateAvailableZoneOutcome DdsClient::migrateAvailableZone(const MigrateAvailableZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateAvailableZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateAvailableZoneOutcome(MigrateAvailableZoneResult(outcome.result()));
	else
		return MigrateAvailableZoneOutcome(outcome.error());
}

void DdsClient::migrateAvailableZoneAsync(const MigrateAvailableZoneRequest& request, const MigrateAvailableZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateAvailableZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::MigrateAvailableZoneOutcomeCallable DdsClient::migrateAvailableZoneCallable(const MigrateAvailableZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateAvailableZoneOutcome()>>(
			[this, request]()
			{
			return this->migrateAvailableZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::MigrateToOtherZoneOutcome DdsClient::migrateToOtherZone(const MigrateToOtherZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateToOtherZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateToOtherZoneOutcome(MigrateToOtherZoneResult(outcome.result()));
	else
		return MigrateToOtherZoneOutcome(outcome.error());
}

void DdsClient::migrateToOtherZoneAsync(const MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateToOtherZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::MigrateToOtherZoneOutcomeCallable DdsClient::migrateToOtherZoneCallable(const MigrateToOtherZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateToOtherZoneOutcome()>>(
			[this, request]()
			{
			return this->migrateToOtherZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyAccountDescriptionOutcome DdsClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountDescriptionOutcome(ModifyAccountDescriptionResult(outcome.result()));
	else
		return ModifyAccountDescriptionOutcome(outcome.error());
}

void DdsClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyAccountDescriptionOutcomeCallable DdsClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyAuditLogFilterOutcome DdsClient::modifyAuditLogFilter(const ModifyAuditLogFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAuditLogFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAuditLogFilterOutcome(ModifyAuditLogFilterResult(outcome.result()));
	else
		return ModifyAuditLogFilterOutcome(outcome.error());
}

void DdsClient::modifyAuditLogFilterAsync(const ModifyAuditLogFilterRequest& request, const ModifyAuditLogFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAuditLogFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyAuditLogFilterOutcomeCallable DdsClient::modifyAuditLogFilterCallable(const ModifyAuditLogFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAuditLogFilterOutcome()>>(
			[this, request]()
			{
			return this->modifyAuditLogFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyAuditPolicyOutcome DdsClient::modifyAuditPolicy(const ModifyAuditPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAuditPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAuditPolicyOutcome(ModifyAuditPolicyResult(outcome.result()));
	else
		return ModifyAuditPolicyOutcome(outcome.error());
}

void DdsClient::modifyAuditPolicyAsync(const ModifyAuditPolicyRequest& request, const ModifyAuditPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAuditPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyAuditPolicyOutcomeCallable DdsClient::modifyAuditPolicyCallable(const ModifyAuditPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAuditPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyAuditPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyBackupPolicyOutcome DdsClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPolicyOutcome(ModifyBackupPolicyResult(outcome.result()));
	else
		return ModifyBackupPolicyOutcome(outcome.error());
}

void DdsClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyBackupPolicyOutcomeCallable DdsClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceConnectionStringOutcome DdsClient::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceConnectionStringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceConnectionStringOutcome(ModifyDBInstanceConnectionStringResult(outcome.result()));
	else
		return ModifyDBInstanceConnectionStringOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceConnectionStringAsync(const ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceConnectionStringOutcomeCallable DdsClient::modifyDBInstanceConnectionStringCallable(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceDescriptionOutcome DdsClient::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceDescriptionOutcome(ModifyDBInstanceDescriptionResult(outcome.result()));
	else
		return ModifyDBInstanceDescriptionOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceDescriptionAsync(const ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceDescriptionOutcomeCallable DdsClient::modifyDBInstanceDescriptionCallable(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceMaintainTimeOutcome DdsClient::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceMaintainTimeOutcome(ModifyDBInstanceMaintainTimeResult(outcome.result()));
	else
		return ModifyDBInstanceMaintainTimeOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceMaintainTimeAsync(const ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceMaintainTimeOutcomeCallable DdsClient::modifyDBInstanceMaintainTimeCallable(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceMonitorOutcome DdsClient::modifyDBInstanceMonitor(const ModifyDBInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceMonitorOutcome(ModifyDBInstanceMonitorResult(outcome.result()));
	else
		return ModifyDBInstanceMonitorOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceMonitorAsync(const ModifyDBInstanceMonitorRequest& request, const ModifyDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceMonitorOutcomeCallable DdsClient::modifyDBInstanceMonitorCallable(const ModifyDBInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceNetExpireTimeOutcome DdsClient::modifyDBInstanceNetExpireTime(const ModifyDBInstanceNetExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceNetExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceNetExpireTimeOutcome(ModifyDBInstanceNetExpireTimeResult(outcome.result()));
	else
		return ModifyDBInstanceNetExpireTimeOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceNetExpireTimeAsync(const ModifyDBInstanceNetExpireTimeRequest& request, const ModifyDBInstanceNetExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceNetExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceNetExpireTimeOutcomeCallable DdsClient::modifyDBInstanceNetExpireTimeCallable(const ModifyDBInstanceNetExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNetExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceNetExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceNetworkTypeOutcome DdsClient::modifyDBInstanceNetworkType(const ModifyDBInstanceNetworkTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceNetworkTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceNetworkTypeOutcome(ModifyDBInstanceNetworkTypeResult(outcome.result()));
	else
		return ModifyDBInstanceNetworkTypeOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceNetworkTypeAsync(const ModifyDBInstanceNetworkTypeRequest& request, const ModifyDBInstanceNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceNetworkType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceNetworkTypeOutcomeCallable DdsClient::modifyDBInstanceNetworkTypeCallable(const ModifyDBInstanceNetworkTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNetworkTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceNetworkType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceSSLOutcome DdsClient::modifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceSSLOutcome(ModifyDBInstanceSSLResult(outcome.result()));
	else
		return ModifyDBInstanceSSLOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceSSLAsync(const ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceSSLOutcomeCallable DdsClient::modifyDBInstanceSSLCallable(const ModifyDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceSpecOutcome DdsClient::modifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceSpecOutcome(ModifyDBInstanceSpecResult(outcome.result()));
	else
		return ModifyDBInstanceSpecOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceSpecAsync(const ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceSpecOutcomeCallable DdsClient::modifyDBInstanceSpecCallable(const ModifyDBInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceTDEOutcome DdsClient::modifyDBInstanceTDE(const ModifyDBInstanceTDERequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceTDEOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceTDEOutcome(ModifyDBInstanceTDEResult(outcome.result()));
	else
		return ModifyDBInstanceTDEOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceTDEAsync(const ModifyDBInstanceTDERequest& request, const ModifyDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceTDEOutcomeCallable DdsClient::modifyDBInstanceTDECallable(const ModifyDBInstanceTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceTDEOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyInstanceAutoRenewalAttributeOutcome DdsClient::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAutoRenewalAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAutoRenewalAttributeOutcome(ModifyInstanceAutoRenewalAttributeResult(outcome.result()));
	else
		return ModifyInstanceAutoRenewalAttributeOutcome(outcome.error());
}

void DdsClient::modifyInstanceAutoRenewalAttributeAsync(const ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyInstanceAutoRenewalAttributeOutcomeCallable DdsClient::modifyInstanceAutoRenewalAttributeCallable(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyInstanceVpcAuthModeOutcome DdsClient::modifyInstanceVpcAuthMode(const ModifyInstanceVpcAuthModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceVpcAuthModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceVpcAuthModeOutcome(ModifyInstanceVpcAuthModeResult(outcome.result()));
	else
		return ModifyInstanceVpcAuthModeOutcome(outcome.error());
}

void DdsClient::modifyInstanceVpcAuthModeAsync(const ModifyInstanceVpcAuthModeRequest& request, const ModifyInstanceVpcAuthModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceVpcAuthMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyInstanceVpcAuthModeOutcomeCallable DdsClient::modifyInstanceVpcAuthModeCallable(const ModifyInstanceVpcAuthModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceVpcAuthModeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceVpcAuthMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyNodeSpecOutcome DdsClient::modifyNodeSpec(const ModifyNodeSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNodeSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNodeSpecOutcome(ModifyNodeSpecResult(outcome.result()));
	else
		return ModifyNodeSpecOutcome(outcome.error());
}

void DdsClient::modifyNodeSpecAsync(const ModifyNodeSpecRequest& request, const ModifyNodeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNodeSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyNodeSpecOutcomeCallable DdsClient::modifyNodeSpecCallable(const ModifyNodeSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNodeSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyNodeSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyParametersOutcome DdsClient::modifyParameters(const ModifyParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyParametersOutcome(ModifyParametersResult(outcome.result()));
	else
		return ModifyParametersOutcome(outcome.error());
}

void DdsClient::modifyParametersAsync(const ModifyParametersRequest& request, const ModifyParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyParametersOutcomeCallable DdsClient::modifyParametersCallable(const ModifyParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParametersOutcome()>>(
			[this, request]()
			{
			return this->modifyParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifySecurityGroupConfigurationOutcome DdsClient::modifySecurityGroupConfiguration(const ModifySecurityGroupConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityGroupConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityGroupConfigurationOutcome(ModifySecurityGroupConfigurationResult(outcome.result()));
	else
		return ModifySecurityGroupConfigurationOutcome(outcome.error());
}

void DdsClient::modifySecurityGroupConfigurationAsync(const ModifySecurityGroupConfigurationRequest& request, const ModifySecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifySecurityGroupConfigurationOutcomeCallable DdsClient::modifySecurityGroupConfigurationCallable(const ModifySecurityGroupConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifySecurityIpsOutcome DdsClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityIpsOutcome(ModifySecurityIpsResult(outcome.result()));
	else
		return ModifySecurityIpsOutcome(outcome.error());
}

void DdsClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifySecurityIpsOutcomeCallable DdsClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ReleaseNodePrivateNetworkAddressOutcome DdsClient::releaseNodePrivateNetworkAddress(const ReleaseNodePrivateNetworkAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseNodePrivateNetworkAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseNodePrivateNetworkAddressOutcome(ReleaseNodePrivateNetworkAddressResult(outcome.result()));
	else
		return ReleaseNodePrivateNetworkAddressOutcome(outcome.error());
}

void DdsClient::releaseNodePrivateNetworkAddressAsync(const ReleaseNodePrivateNetworkAddressRequest& request, const ReleaseNodePrivateNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseNodePrivateNetworkAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ReleaseNodePrivateNetworkAddressOutcomeCallable DdsClient::releaseNodePrivateNetworkAddressCallable(const ReleaseNodePrivateNetworkAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseNodePrivateNetworkAddressOutcome()>>(
			[this, request]()
			{
			return this->releaseNodePrivateNetworkAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ReleasePublicNetworkAddressOutcome DdsClient::releasePublicNetworkAddress(const ReleasePublicNetworkAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleasePublicNetworkAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleasePublicNetworkAddressOutcome(ReleasePublicNetworkAddressResult(outcome.result()));
	else
		return ReleasePublicNetworkAddressOutcome(outcome.error());
}

void DdsClient::releasePublicNetworkAddressAsync(const ReleasePublicNetworkAddressRequest& request, const ReleasePublicNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releasePublicNetworkAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ReleasePublicNetworkAddressOutcomeCallable DdsClient::releasePublicNetworkAddressCallable(const ReleasePublicNetworkAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleasePublicNetworkAddressOutcome()>>(
			[this, request]()
			{
			return this->releasePublicNetworkAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::RenewDBInstanceOutcome DdsClient::renewDBInstance(const RenewDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewDBInstanceOutcome(RenewDBInstanceResult(outcome.result()));
	else
		return RenewDBInstanceOutcome(outcome.error());
}

void DdsClient::renewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::RenewDBInstanceOutcomeCallable DdsClient::renewDBInstanceCallable(const RenewDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ResetAccountPasswordOutcome DdsClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountPasswordOutcome(ResetAccountPasswordResult(outcome.result()));
	else
		return ResetAccountPasswordOutcome(outcome.error());
}

void DdsClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ResetAccountPasswordOutcomeCallable DdsClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::RestartDBInstanceOutcome DdsClient::restartDBInstance(const RestartDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDBInstanceOutcome(RestartDBInstanceResult(outcome.result()));
	else
		return RestartDBInstanceOutcome(outcome.error());
}

void DdsClient::restartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::RestartDBInstanceOutcomeCallable DdsClient::restartDBInstanceCallable(const RestartDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::RestoreDBInstanceOutcome DdsClient::restoreDBInstance(const RestoreDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreDBInstanceOutcome(RestoreDBInstanceResult(outcome.result()));
	else
		return RestoreDBInstanceOutcome(outcome.error());
}

void DdsClient::restoreDBInstanceAsync(const RestoreDBInstanceRequest& request, const RestoreDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::RestoreDBInstanceOutcomeCallable DdsClient::restoreDBInstanceCallable(const RestoreDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restoreDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::SwitchDBInstanceHAOutcome DdsClient::switchDBInstanceHA(const SwitchDBInstanceHARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchDBInstanceHAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchDBInstanceHAOutcome(SwitchDBInstanceHAResult(outcome.result()));
	else
		return SwitchDBInstanceHAOutcome(outcome.error());
}

void DdsClient::switchDBInstanceHAAsync(const SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceHA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::SwitchDBInstanceHAOutcomeCallable DdsClient::switchDBInstanceHACallable(const SwitchDBInstanceHARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceHAOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceHA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::TagResourcesOutcome DdsClient::tagResources(const TagResourcesRequest &request) const
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

void DdsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::TagResourcesOutcomeCallable DdsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::TransformToPrePaidOutcome DdsClient::transformToPrePaid(const TransformToPrePaidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformToPrePaidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformToPrePaidOutcome(TransformToPrePaidResult(outcome.result()));
	else
		return TransformToPrePaidOutcome(outcome.error());
}

void DdsClient::transformToPrePaidAsync(const TransformToPrePaidRequest& request, const TransformToPrePaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformToPrePaid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::TransformToPrePaidOutcomeCallable DdsClient::transformToPrePaidCallable(const TransformToPrePaidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformToPrePaidOutcome()>>(
			[this, request]()
			{
			return this->transformToPrePaid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::UntagResourcesOutcome DdsClient::untagResources(const UntagResourcesRequest &request) const
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

void DdsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::UntagResourcesOutcomeCallable DdsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::UpgradeDBInstanceEngineVersionOutcome DdsClient::upgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceEngineVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceEngineVersionOutcome(UpgradeDBInstanceEngineVersionResult(outcome.result()));
	else
		return UpgradeDBInstanceEngineVersionOutcome(outcome.error());
}

void DdsClient::upgradeDBInstanceEngineVersionAsync(const UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceEngineVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::UpgradeDBInstanceEngineVersionOutcomeCallable DdsClient::upgradeDBInstanceEngineVersionCallable(const UpgradeDBInstanceEngineVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceEngineVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceEngineVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::UpgradeDBInstanceKernelVersionOutcome DdsClient::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceKernelVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceKernelVersionOutcome(UpgradeDBInstanceKernelVersionResult(outcome.result()));
	else
		return UpgradeDBInstanceKernelVersionOutcome(outcome.error());
}

void DdsClient::upgradeDBInstanceKernelVersionAsync(const UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceKernelVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::UpgradeDBInstanceKernelVersionOutcomeCallable DdsClient::upgradeDBInstanceKernelVersionCallable(const UpgradeDBInstanceKernelVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceKernelVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceKernelVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

