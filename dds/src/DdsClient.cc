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

DdsClient::CheckServiceLinkedRoleOutcome DdsClient::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckServiceLinkedRoleOutcome(CheckServiceLinkedRoleResult(outcome.result()));
	else
		return CheckServiceLinkedRoleOutcome(outcome.error());
}

void DdsClient::checkServiceLinkedRoleAsync(const CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CheckServiceLinkedRoleOutcomeCallable DdsClient::checkServiceLinkedRoleCallable(const CheckServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::CreateAccountOutcome DdsClient::createAccount(const CreateAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountOutcome(CreateAccountResult(outcome.result()));
	else
		return CreateAccountOutcome(outcome.error());
}

void DdsClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CreateAccountOutcomeCallable DdsClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
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

DdsClient::CreateGlobalSecurityIPGroupOutcome DdsClient::createGlobalSecurityIPGroup(const CreateGlobalSecurityIPGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGlobalSecurityIPGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGlobalSecurityIPGroupOutcome(CreateGlobalSecurityIPGroupResult(outcome.result()));
	else
		return CreateGlobalSecurityIPGroupOutcome(outcome.error());
}

void DdsClient::createGlobalSecurityIPGroupAsync(const CreateGlobalSecurityIPGroupRequest& request, const CreateGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGlobalSecurityIPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CreateGlobalSecurityIPGroupOutcomeCallable DdsClient::createGlobalSecurityIPGroupCallable(const CreateGlobalSecurityIPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGlobalSecurityIPGroupOutcome()>>(
			[this, request]()
			{
			return this->createGlobalSecurityIPGroup(request);
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

DdsClient::CreateNodeBatchOutcome DdsClient::createNodeBatch(const CreateNodeBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNodeBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNodeBatchOutcome(CreateNodeBatchResult(outcome.result()));
	else
		return CreateNodeBatchOutcome(outcome.error());
}

void DdsClient::createNodeBatchAsync(const CreateNodeBatchRequest& request, const CreateNodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNodeBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::CreateNodeBatchOutcomeCallable DdsClient::createNodeBatchCallable(const CreateNodeBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNodeBatchOutcome()>>(
			[this, request]()
			{
			return this->createNodeBatch(request);
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

DdsClient::DeleteGlobalSecurityIPGroupOutcome DdsClient::deleteGlobalSecurityIPGroup(const DeleteGlobalSecurityIPGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGlobalSecurityIPGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGlobalSecurityIPGroupOutcome(DeleteGlobalSecurityIPGroupResult(outcome.result()));
	else
		return DeleteGlobalSecurityIPGroupOutcome(outcome.error());
}

void DdsClient::deleteGlobalSecurityIPGroupAsync(const DeleteGlobalSecurityIPGroupRequest& request, const DeleteGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGlobalSecurityIPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DeleteGlobalSecurityIPGroupOutcomeCallable DdsClient::deleteGlobalSecurityIPGroupCallable(const DeleteGlobalSecurityIPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGlobalSecurityIPGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteGlobalSecurityIPGroup(request);
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

DdsClient::DescribeActiveOperationMaintenanceConfigOutcome DdsClient::describeActiveOperationMaintenanceConfig(const DescribeActiveOperationMaintenanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationMaintenanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationMaintenanceConfigOutcome(DescribeActiveOperationMaintenanceConfigResult(outcome.result()));
	else
		return DescribeActiveOperationMaintenanceConfigOutcome(outcome.error());
}

void DdsClient::describeActiveOperationMaintenanceConfigAsync(const DescribeActiveOperationMaintenanceConfigRequest& request, const DescribeActiveOperationMaintenanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationMaintenanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeActiveOperationMaintenanceConfigOutcomeCallable DdsClient::describeActiveOperationMaintenanceConfigCallable(const DescribeActiveOperationMaintenanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationMaintenanceConfigOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationMaintenanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeActiveOperationTaskOutcome DdsClient::describeActiveOperationTask(const DescribeActiveOperationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTaskOutcome(DescribeActiveOperationTaskResult(outcome.result()));
	else
		return DescribeActiveOperationTaskOutcome(outcome.error());
}

void DdsClient::describeActiveOperationTaskAsync(const DescribeActiveOperationTaskRequest& request, const DescribeActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeActiveOperationTaskOutcomeCallable DdsClient::describeActiveOperationTaskCallable(const DescribeActiveOperationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeActiveOperationTaskCountOutcome DdsClient::describeActiveOperationTaskCount(const DescribeActiveOperationTaskCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTaskCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTaskCountOutcome(DescribeActiveOperationTaskCountResult(outcome.result()));
	else
		return DescribeActiveOperationTaskCountOutcome(outcome.error());
}

void DdsClient::describeActiveOperationTaskCountAsync(const DescribeActiveOperationTaskCountRequest& request, const DescribeActiveOperationTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTaskCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeActiveOperationTaskCountOutcomeCallable DdsClient::describeActiveOperationTaskCountCallable(const DescribeActiveOperationTaskCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskCountOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTaskCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeActiveOperationTaskRegionOutcome DdsClient::describeActiveOperationTaskRegion(const DescribeActiveOperationTaskRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTaskRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTaskRegionOutcome(DescribeActiveOperationTaskRegionResult(outcome.result()));
	else
		return DescribeActiveOperationTaskRegionOutcome(outcome.error());
}

void DdsClient::describeActiveOperationTaskRegionAsync(const DescribeActiveOperationTaskRegionRequest& request, const DescribeActiveOperationTaskRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTaskRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeActiveOperationTaskRegionOutcomeCallable DdsClient::describeActiveOperationTaskRegionCallable(const DescribeActiveOperationTaskRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskRegionOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTaskRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeActiveOperationTaskTypeOutcome DdsClient::describeActiveOperationTaskType(const DescribeActiveOperationTaskTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTaskTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTaskTypeOutcome(DescribeActiveOperationTaskTypeResult(outcome.result()));
	else
		return DescribeActiveOperationTaskTypeOutcome(outcome.error());
}

void DdsClient::describeActiveOperationTaskTypeAsync(const DescribeActiveOperationTaskTypeRequest& request, const DescribeActiveOperationTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTaskType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeActiveOperationTaskTypeOutcomeCallable DdsClient::describeActiveOperationTaskTypeCallable(const DescribeActiveOperationTaskTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskTypeOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTaskType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeActiveOperationTasksOutcome DdsClient::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationTasksOutcome(DescribeActiveOperationTasksResult(outcome.result()));
	else
		return DescribeActiveOperationTasksOutcome(outcome.error());
}

void DdsClient::describeActiveOperationTasksAsync(const DescribeActiveOperationTasksRequest& request, const DescribeActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeActiveOperationTasksOutcomeCallable DdsClient::describeActiveOperationTasksCallable(const DescribeActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTasks(request);
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

DdsClient::DescribeAvailabilityZonesOutcome DdsClient::describeAvailabilityZones(const DescribeAvailabilityZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailabilityZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailabilityZonesOutcome(DescribeAvailabilityZonesResult(outcome.result()));
	else
		return DescribeAvailabilityZonesOutcome(outcome.error());
}

void DdsClient::describeAvailabilityZonesAsync(const DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailabilityZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeAvailabilityZonesOutcomeCallable DdsClient::describeAvailabilityZonesCallable(const DescribeAvailabilityZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailabilityZonesOutcome()>>(
			[this, request]()
			{
			return this->describeAvailabilityZones(request);
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

DdsClient::DescribeBackupStorageOutcome DdsClient::describeBackupStorage(const DescribeBackupStorageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupStorageOutcome(DescribeBackupStorageResult(outcome.result()));
	else
		return DescribeBackupStorageOutcome(outcome.error());
}

void DdsClient::describeBackupStorageAsync(const DescribeBackupStorageRequest& request, const DescribeBackupStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeBackupStorageOutcomeCallable DdsClient::describeBackupStorageCallable(const DescribeBackupStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupStorageOutcome()>>(
			[this, request]()
			{
			return this->describeBackupStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeBackupTasksOutcome DdsClient::describeBackupTasks(const DescribeBackupTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupTasksOutcome(DescribeBackupTasksResult(outcome.result()));
	else
		return DescribeBackupTasksOutcome(outcome.error());
}

void DdsClient::describeBackupTasksAsync(const DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeBackupTasksOutcomeCallable DdsClient::describeBackupTasksCallable(const DescribeBackupTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupTasksOutcome()>>(
			[this, request]()
			{
			return this->describeBackupTasks(request);
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

DdsClient::DescribeClusterBackupsOutcome DdsClient::describeClusterBackups(const DescribeClusterBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterBackupsOutcome(DescribeClusterBackupsResult(outcome.result()));
	else
		return DescribeClusterBackupsOutcome(outcome.error());
}

void DdsClient::describeClusterBackupsAsync(const DescribeClusterBackupsRequest& request, const DescribeClusterBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeClusterBackupsOutcomeCallable DdsClient::describeClusterBackupsCallable(const DescribeClusterBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeClusterRecoverTimeOutcome DdsClient::describeClusterRecoverTime(const DescribeClusterRecoverTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterRecoverTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterRecoverTimeOutcome(DescribeClusterRecoverTimeResult(outcome.result()));
	else
		return DescribeClusterRecoverTimeOutcome(outcome.error());
}

void DdsClient::describeClusterRecoverTimeAsync(const DescribeClusterRecoverTimeRequest& request, const DescribeClusterRecoverTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterRecoverTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeClusterRecoverTimeOutcomeCallable DdsClient::describeClusterRecoverTimeCallable(const DescribeClusterRecoverTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterRecoverTimeOutcome()>>(
			[this, request]()
			{
			return this->describeClusterRecoverTime(request);
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

DdsClient::DescribeDBInstanceSpecInfoOutcome DdsClient::describeDBInstanceSpecInfo(const DescribeDBInstanceSpecInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceSpecInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceSpecInfoOutcome(DescribeDBInstanceSpecInfoResult(outcome.result()));
	else
		return DescribeDBInstanceSpecInfoOutcome(outcome.error());
}

void DdsClient::describeDBInstanceSpecInfoAsync(const DescribeDBInstanceSpecInfoRequest& request, const DescribeDBInstanceSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceSpecInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstanceSpecInfoOutcomeCallable DdsClient::describeDBInstanceSpecInfoCallable(const DescribeDBInstanceSpecInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSpecInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceSpecInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeDBInstanceSwitchLogOutcome DdsClient::describeDBInstanceSwitchLog(const DescribeDBInstanceSwitchLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceSwitchLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceSwitchLogOutcome(DescribeDBInstanceSwitchLogResult(outcome.result()));
	else
		return DescribeDBInstanceSwitchLogOutcome(outcome.error());
}

void DdsClient::describeDBInstanceSwitchLogAsync(const DescribeDBInstanceSwitchLogRequest& request, const DescribeDBInstanceSwitchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceSwitchLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstanceSwitchLogOutcomeCallable DdsClient::describeDBInstanceSwitchLogCallable(const DescribeDBInstanceSwitchLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSwitchLogOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceSwitchLog(request);
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

DdsClient::DescribeDBInstancesOverviewOutcome DdsClient::describeDBInstancesOverview(const DescribeDBInstancesOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesOverviewOutcome(DescribeDBInstancesOverviewResult(outcome.result()));
	else
		return DescribeDBInstancesOverviewOutcome(outcome.error());
}

void DdsClient::describeDBInstancesOverviewAsync(const DescribeDBInstancesOverviewRequest& request, const DescribeDBInstancesOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeDBInstancesOverviewOutcomeCallable DdsClient::describeDBInstancesOverviewCallable(const DescribeDBInstancesOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOverviewOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesOverview(request);
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

DdsClient::DescribeGlobalSecurityIPGroupOutcome DdsClient::describeGlobalSecurityIPGroup(const DescribeGlobalSecurityIPGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalSecurityIPGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalSecurityIPGroupOutcome(DescribeGlobalSecurityIPGroupResult(outcome.result()));
	else
		return DescribeGlobalSecurityIPGroupOutcome(outcome.error());
}

void DdsClient::describeGlobalSecurityIPGroupAsync(const DescribeGlobalSecurityIPGroupRequest& request, const DescribeGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalSecurityIPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeGlobalSecurityIPGroupOutcomeCallable DdsClient::describeGlobalSecurityIPGroupCallable(const DescribeGlobalSecurityIPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalSecurityIPGroupOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalSecurityIPGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeGlobalSecurityIPGroupRelationOutcome DdsClient::describeGlobalSecurityIPGroupRelation(const DescribeGlobalSecurityIPGroupRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalSecurityIPGroupRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalSecurityIPGroupRelationOutcome(DescribeGlobalSecurityIPGroupRelationResult(outcome.result()));
	else
		return DescribeGlobalSecurityIPGroupRelationOutcome(outcome.error());
}

void DdsClient::describeGlobalSecurityIPGroupRelationAsync(const DescribeGlobalSecurityIPGroupRelationRequest& request, const DescribeGlobalSecurityIPGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalSecurityIPGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeGlobalSecurityIPGroupRelationOutcomeCallable DdsClient::describeGlobalSecurityIPGroupRelationCallable(const DescribeGlobalSecurityIPGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalSecurityIPGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalSecurityIPGroupRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeHistoryTasksOutcome DdsClient::describeHistoryTasks(const DescribeHistoryTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryTasksOutcome(DescribeHistoryTasksResult(outcome.result()));
	else
		return DescribeHistoryTasksOutcome(outcome.error());
}

void DdsClient::describeHistoryTasksAsync(const DescribeHistoryTasksRequest& request, const DescribeHistoryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeHistoryTasksOutcomeCallable DdsClient::describeHistoryTasksCallable(const DescribeHistoryTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryTasksOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::DescribeHistoryTasksStatOutcome DdsClient::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryTasksStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryTasksStatOutcome(DescribeHistoryTasksStatResult(outcome.result()));
	else
		return DescribeHistoryTasksStatOutcome(outcome.error());
}

void DdsClient::describeHistoryTasksStatAsync(const DescribeHistoryTasksStatRequest& request, const DescribeHistoryTasksStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryTasksStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeHistoryTasksStatOutcomeCallable DdsClient::describeHistoryTasksStatCallable(const DescribeHistoryTasksStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryTasksStatOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryTasksStat(request);
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

DdsClient::DescribeInstanceRecoverTimeOutcome DdsClient::describeInstanceRecoverTime(const DescribeInstanceRecoverTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceRecoverTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceRecoverTimeOutcome(DescribeInstanceRecoverTimeResult(outcome.result()));
	else
		return DescribeInstanceRecoverTimeOutcome(outcome.error());
}

void DdsClient::describeInstanceRecoverTimeAsync(const DescribeInstanceRecoverTimeRequest& request, const DescribeInstanceRecoverTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceRecoverTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeInstanceRecoverTimeOutcomeCallable DdsClient::describeInstanceRecoverTimeCallable(const DescribeInstanceRecoverTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceRecoverTimeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceRecoverTime(request);
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

DdsClient::DescribeKmsKeysOutcome DdsClient::describeKmsKeys(const DescribeKmsKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKmsKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKmsKeysOutcome(DescribeKmsKeysResult(outcome.result()));
	else
		return DescribeKmsKeysOutcome(outcome.error());
}

void DdsClient::describeKmsKeysAsync(const DescribeKmsKeysRequest& request, const DescribeKmsKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKmsKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeKmsKeysOutcomeCallable DdsClient::describeKmsKeysCallable(const DescribeKmsKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKmsKeysOutcome()>>(
			[this, request]()
			{
			return this->describeKmsKeys(request);
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

DdsClient::DescribePriceOutcome DdsClient::describePrice(const DescribePriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePriceOutcome(DescribePriceResult(outcome.result()));
	else
		return DescribePriceOutcome(outcome.error());
}

void DdsClient::describePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribePriceOutcomeCallable DdsClient::describePriceCallable(const DescribePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
			[this, request]()
			{
			return this->describePrice(request);
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

DdsClient::DescribeRestoreDBInstanceListOutcome DdsClient::describeRestoreDBInstanceList(const DescribeRestoreDBInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreDBInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreDBInstanceListOutcome(DescribeRestoreDBInstanceListResult(outcome.result()));
	else
		return DescribeRestoreDBInstanceListOutcome(outcome.error());
}

void DdsClient::describeRestoreDBInstanceListAsync(const DescribeRestoreDBInstanceListRequest& request, const DescribeRestoreDBInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreDBInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::DescribeRestoreDBInstanceListOutcomeCallable DdsClient::describeRestoreDBInstanceListCallable(const DescribeRestoreDBInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreDBInstanceListOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreDBInstanceList(request);
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

DdsClient::EvaluateResourceOutcome DdsClient::evaluateResource(const EvaluateResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EvaluateResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EvaluateResourceOutcome(EvaluateResourceResult(outcome.result()));
	else
		return EvaluateResourceOutcome(outcome.error());
}

void DdsClient::evaluateResourceAsync(const EvaluateResourceRequest& request, const EvaluateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, evaluateResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::EvaluateResourceOutcomeCallable DdsClient::evaluateResourceCallable(const EvaluateResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EvaluateResourceOutcome()>>(
			[this, request]()
			{
			return this->evaluateResource(request);
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

DdsClient::ModifyActiveOperationTasksOutcome DdsClient::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyActiveOperationTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyActiveOperationTasksOutcome(ModifyActiveOperationTasksResult(outcome.result()));
	else
		return ModifyActiveOperationTasksOutcome(outcome.error());
}

void DdsClient::modifyActiveOperationTasksAsync(const ModifyActiveOperationTasksRequest& request, const ModifyActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyActiveOperationTasksOutcomeCallable DdsClient::modifyActiveOperationTasksCallable(const ModifyActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->modifyActiveOperationTasks(request);
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

DdsClient::ModifyDBInstanceAttributeOutcome DdsClient::modifyDBInstanceAttribute(const ModifyDBInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceAttributeOutcome(ModifyDBInstanceAttributeResult(outcome.result()));
	else
		return ModifyDBInstanceAttributeOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceAttributeAsync(const ModifyDBInstanceAttributeRequest& request, const ModifyDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceAttributeOutcomeCallable DdsClient::modifyDBInstanceAttributeCallable(const ModifyDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyDBInstanceConfigOutcome DdsClient::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceConfigOutcome(ModifyDBInstanceConfigResult(outcome.result()));
	else
		return ModifyDBInstanceConfigOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceConfigAsync(const ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceConfigOutcomeCallable DdsClient::modifyDBInstanceConfigCallable(const ModifyDBInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConfig(request);
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

DdsClient::ModifyDBInstanceDiskTypeOutcome DdsClient::modifyDBInstanceDiskType(const ModifyDBInstanceDiskTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceDiskTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceDiskTypeOutcome(ModifyDBInstanceDiskTypeResult(outcome.result()));
	else
		return ModifyDBInstanceDiskTypeOutcome(outcome.error());
}

void DdsClient::modifyDBInstanceDiskTypeAsync(const ModifyDBInstanceDiskTypeRequest& request, const ModifyDBInstanceDiskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDiskType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyDBInstanceDiskTypeOutcomeCallable DdsClient::modifyDBInstanceDiskTypeCallable(const ModifyDBInstanceDiskTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDiskTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDiskType(request);
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

DdsClient::ModifyGlobalSecurityIPGroupOutcome DdsClient::modifyGlobalSecurityIPGroup(const ModifyGlobalSecurityIPGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalSecurityIPGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalSecurityIPGroupOutcome(ModifyGlobalSecurityIPGroupResult(outcome.result()));
	else
		return ModifyGlobalSecurityIPGroupOutcome(outcome.error());
}

void DdsClient::modifyGlobalSecurityIPGroupAsync(const ModifyGlobalSecurityIPGroupRequest& request, const ModifyGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalSecurityIPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyGlobalSecurityIPGroupOutcomeCallable DdsClient::modifyGlobalSecurityIPGroupCallable(const ModifyGlobalSecurityIPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalSecurityIPGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalSecurityIPGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyGlobalSecurityIPGroupNameOutcome DdsClient::modifyGlobalSecurityIPGroupName(const ModifyGlobalSecurityIPGroupNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalSecurityIPGroupNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalSecurityIPGroupNameOutcome(ModifyGlobalSecurityIPGroupNameResult(outcome.result()));
	else
		return ModifyGlobalSecurityIPGroupNameOutcome(outcome.error());
}

void DdsClient::modifyGlobalSecurityIPGroupNameAsync(const ModifyGlobalSecurityIPGroupNameRequest& request, const ModifyGlobalSecurityIPGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalSecurityIPGroupName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyGlobalSecurityIPGroupNameOutcomeCallable DdsClient::modifyGlobalSecurityIPGroupNameCallable(const ModifyGlobalSecurityIPGroupNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalSecurityIPGroupNameOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalSecurityIPGroupName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::ModifyGlobalSecurityIPGroupRelationOutcome DdsClient::modifyGlobalSecurityIPGroupRelation(const ModifyGlobalSecurityIPGroupRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalSecurityIPGroupRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalSecurityIPGroupRelationOutcome(ModifyGlobalSecurityIPGroupRelationResult(outcome.result()));
	else
		return ModifyGlobalSecurityIPGroupRelationOutcome(outcome.error());
}

void DdsClient::modifyGlobalSecurityIPGroupRelationAsync(const ModifyGlobalSecurityIPGroupRelationRequest& request, const ModifyGlobalSecurityIPGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalSecurityIPGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyGlobalSecurityIPGroupRelationOutcomeCallable DdsClient::modifyGlobalSecurityIPGroupRelationCallable(const ModifyGlobalSecurityIPGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalSecurityIPGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalSecurityIPGroupRelation(request);
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

DdsClient::ModifyNodeSpecBatchOutcome DdsClient::modifyNodeSpecBatch(const ModifyNodeSpecBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNodeSpecBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNodeSpecBatchOutcome(ModifyNodeSpecBatchResult(outcome.result()));
	else
		return ModifyNodeSpecBatchOutcome(outcome.error());
}

void DdsClient::modifyNodeSpecBatchAsync(const ModifyNodeSpecBatchRequest& request, const ModifyNodeSpecBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNodeSpecBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyNodeSpecBatchOutcomeCallable DdsClient::modifyNodeSpecBatchCallable(const ModifyNodeSpecBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNodeSpecBatchOutcome()>>(
			[this, request]()
			{
			return this->modifyNodeSpecBatch(request);
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

DdsClient::ModifyResourceGroupOutcome DdsClient::modifyResourceGroup(const ModifyResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourceGroupOutcome(ModifyResourceGroupResult(outcome.result()));
	else
		return ModifyResourceGroupOutcome(outcome.error());
}

void DdsClient::modifyResourceGroupAsync(const ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyResourceGroupOutcomeCallable DdsClient::modifyResourceGroupCallable(const ModifyResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyResourceGroup(request);
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

DdsClient::ModifyTaskInfoOutcome DdsClient::modifyTaskInfo(const ModifyTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTaskInfoOutcome(ModifyTaskInfoResult(outcome.result()));
	else
		return ModifyTaskInfoOutcome(outcome.error());
}

void DdsClient::modifyTaskInfoAsync(const ModifyTaskInfoRequest& request, const ModifyTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::ModifyTaskInfoOutcomeCallable DdsClient::modifyTaskInfoCallable(const ModifyTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyTaskInfo(request);
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

DdsClient::RestartNodeOutcome DdsClient::restartNode(const RestartNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartNodeOutcome(RestartNodeResult(outcome.result()));
	else
		return RestartNodeOutcome(outcome.error());
}

void DdsClient::restartNodeAsync(const RestartNodeRequest& request, const RestartNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::RestartNodeOutcomeCallable DdsClient::restartNodeCallable(const RestartNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartNodeOutcome()>>(
			[this, request]()
			{
			return this->restartNode(request);
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

DdsClient::TransferClusterBackupOutcome DdsClient::transferClusterBackup(const TransferClusterBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferClusterBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferClusterBackupOutcome(TransferClusterBackupResult(outcome.result()));
	else
		return TransferClusterBackupOutcome(outcome.error());
}

void DdsClient::transferClusterBackupAsync(const TransferClusterBackupRequest& request, const TransferClusterBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferClusterBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::TransferClusterBackupOutcomeCallable DdsClient::transferClusterBackupCallable(const TransferClusterBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferClusterBackupOutcome()>>(
			[this, request]()
			{
			return this->transferClusterBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DdsClient::TransformInstanceChargeTypeOutcome DdsClient::transformInstanceChargeType(const TransformInstanceChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformInstanceChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformInstanceChargeTypeOutcome(TransformInstanceChargeTypeResult(outcome.result()));
	else
		return TransformInstanceChargeTypeOutcome(outcome.error());
}

void DdsClient::transformInstanceChargeTypeAsync(const TransformInstanceChargeTypeRequest& request, const TransformInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformInstanceChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DdsClient::TransformInstanceChargeTypeOutcomeCallable DdsClient::transformInstanceChargeTypeCallable(const TransformInstanceChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformInstanceChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->transformInstanceChargeType(request);
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

