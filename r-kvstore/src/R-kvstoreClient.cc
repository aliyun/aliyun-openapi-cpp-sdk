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

#include <alibabacloud/r-kvstore/R_kvstoreClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

namespace
{
	const std::string SERVICE_NAME = "R-kvstore";
}

R_kvstoreClient::R_kvstoreClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "redisa");
}

R_kvstoreClient::R_kvstoreClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "redisa");
}

R_kvstoreClient::R_kvstoreClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "redisa");
}

R_kvstoreClient::~R_kvstoreClient()
{}

R_kvstoreClient::AddShardingNodeOutcome R_kvstoreClient::addShardingNode(const AddShardingNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddShardingNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddShardingNodeOutcome(AddShardingNodeResult(outcome.result()));
	else
		return AddShardingNodeOutcome(outcome.error());
}

void R_kvstoreClient::addShardingNodeAsync(const AddShardingNodeRequest& request, const AddShardingNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addShardingNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::AddShardingNodeOutcomeCallable R_kvstoreClient::addShardingNodeCallable(const AddShardingNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddShardingNodeOutcome()>>(
			[this, request]()
			{
			return this->addShardingNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::AllocateDirectConnectionOutcome R_kvstoreClient::allocateDirectConnection(const AllocateDirectConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateDirectConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateDirectConnectionOutcome(AllocateDirectConnectionResult(outcome.result()));
	else
		return AllocateDirectConnectionOutcome(outcome.error());
}

void R_kvstoreClient::allocateDirectConnectionAsync(const AllocateDirectConnectionRequest& request, const AllocateDirectConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateDirectConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::AllocateDirectConnectionOutcomeCallable R_kvstoreClient::allocateDirectConnectionCallable(const AllocateDirectConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateDirectConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateDirectConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::AllocateInstancePublicConnectionOutcome R_kvstoreClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateInstancePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateInstancePublicConnectionOutcome(AllocateInstancePublicConnectionResult(outcome.result()));
	else
		return AllocateInstancePublicConnectionOutcome(outcome.error());
}

void R_kvstoreClient::allocateInstancePublicConnectionAsync(const AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::AllocateInstancePublicConnectionOutcomeCallable R_kvstoreClient::allocateInstancePublicConnectionCallable(const AllocateInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateAccountOutcome R_kvstoreClient::createAccount(const CreateAccountRequest &request) const
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

void R_kvstoreClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateAccountOutcomeCallable R_kvstoreClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateBackupOutcome R_kvstoreClient::createBackup(const CreateBackupRequest &request) const
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

void R_kvstoreClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateBackupOutcomeCallable R_kvstoreClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateCacheAnalysisTaskOutcome R_kvstoreClient::createCacheAnalysisTask(const CreateCacheAnalysisTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCacheAnalysisTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCacheAnalysisTaskOutcome(CreateCacheAnalysisTaskResult(outcome.result()));
	else
		return CreateCacheAnalysisTaskOutcome(outcome.error());
}

void R_kvstoreClient::createCacheAnalysisTaskAsync(const CreateCacheAnalysisTaskRequest& request, const CreateCacheAnalysisTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCacheAnalysisTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateCacheAnalysisTaskOutcomeCallable R_kvstoreClient::createCacheAnalysisTaskCallable(const CreateCacheAnalysisTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCacheAnalysisTaskOutcome()>>(
			[this, request]()
			{
			return this->createCacheAnalysisTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateGlobalDistributeCacheOutcome R_kvstoreClient::createGlobalDistributeCache(const CreateGlobalDistributeCacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGlobalDistributeCacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGlobalDistributeCacheOutcome(CreateGlobalDistributeCacheResult(outcome.result()));
	else
		return CreateGlobalDistributeCacheOutcome(outcome.error());
}

void R_kvstoreClient::createGlobalDistributeCacheAsync(const CreateGlobalDistributeCacheRequest& request, const CreateGlobalDistributeCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGlobalDistributeCache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateGlobalDistributeCacheOutcomeCallable R_kvstoreClient::createGlobalDistributeCacheCallable(const CreateGlobalDistributeCacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGlobalDistributeCacheOutcome()>>(
			[this, request]()
			{
			return this->createGlobalDistributeCache(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateInstanceOutcome R_kvstoreClient::createInstance(const CreateInstanceRequest &request) const
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

void R_kvstoreClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateInstanceOutcomeCallable R_kvstoreClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateInstancesOutcome R_kvstoreClient::createInstances(const CreateInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstancesOutcome(CreateInstancesResult(outcome.result()));
	else
		return CreateInstancesOutcome(outcome.error());
}

void R_kvstoreClient::createInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateInstancesOutcomeCallable R_kvstoreClient::createInstancesCallable(const CreateInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstancesOutcome()>>(
			[this, request]()
			{
			return this->createInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateTairInstanceOutcome R_kvstoreClient::createTairInstance(const CreateTairInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTairInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTairInstanceOutcome(CreateTairInstanceResult(outcome.result()));
	else
		return CreateTairInstanceOutcome(outcome.error());
}

void R_kvstoreClient::createTairInstanceAsync(const CreateTairInstanceRequest& request, const CreateTairInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTairInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateTairInstanceOutcomeCallable R_kvstoreClient::createTairInstanceCallable(const CreateTairInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTairInstanceOutcome()>>(
			[this, request]()
			{
			return this->createTairInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::CreateUserClusterHostOutcome R_kvstoreClient::createUserClusterHost(const CreateUserClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserClusterHostOutcome(CreateUserClusterHostResult(outcome.result()));
	else
		return CreateUserClusterHostOutcome(outcome.error());
}

void R_kvstoreClient::createUserClusterHostAsync(const CreateUserClusterHostRequest& request, const CreateUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::CreateUserClusterHostOutcomeCallable R_kvstoreClient::createUserClusterHostCallable(const CreateUserClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserClusterHostOutcome()>>(
			[this, request]()
			{
			return this->createUserClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteAccountOutcome R_kvstoreClient::deleteAccount(const DeleteAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountOutcome(DeleteAccountResult(outcome.result()));
	else
		return DeleteAccountOutcome(outcome.error());
}

void R_kvstoreClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteAccountOutcomeCallable R_kvstoreClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteInstanceOutcome R_kvstoreClient::deleteInstance(const DeleteInstanceRequest &request) const
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

void R_kvstoreClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteInstanceOutcomeCallable R_kvstoreClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteShardingNodeOutcome R_kvstoreClient::deleteShardingNode(const DeleteShardingNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteShardingNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteShardingNodeOutcome(DeleteShardingNodeResult(outcome.result()));
	else
		return DeleteShardingNodeOutcome(outcome.error());
}

void R_kvstoreClient::deleteShardingNodeAsync(const DeleteShardingNodeRequest& request, const DeleteShardingNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteShardingNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteShardingNodeOutcomeCallable R_kvstoreClient::deleteShardingNodeCallable(const DeleteShardingNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteShardingNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteShardingNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DeleteUserClusterHostOutcome R_kvstoreClient::deleteUserClusterHost(const DeleteUserClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserClusterHostOutcome(DeleteUserClusterHostResult(outcome.result()));
	else
		return DeleteUserClusterHostOutcome(outcome.error());
}

void R_kvstoreClient::deleteUserClusterHostAsync(const DeleteUserClusterHostRequest& request, const DeleteUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DeleteUserClusterHostOutcomeCallable R_kvstoreClient::deleteUserClusterHostCallable(const DeleteUserClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserClusterHostOutcome()>>(
			[this, request]()
			{
			return this->deleteUserClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeAccountsOutcome R_kvstoreClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void R_kvstoreClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeAccountsOutcomeCallable R_kvstoreClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeActiveOperationTaskOutcome R_kvstoreClient::describeActiveOperationTask(const DescribeActiveOperationTaskRequest &request) const
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

void R_kvstoreClient::describeActiveOperationTaskAsync(const DescribeActiveOperationTaskRequest& request, const DescribeActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeActiveOperationTaskOutcomeCallable R_kvstoreClient::describeActiveOperationTaskCallable(const DescribeActiveOperationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeAuditLogConfigOutcome R_kvstoreClient::describeAuditLogConfig(const DescribeAuditLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditLogConfigOutcome(DescribeAuditLogConfigResult(outcome.result()));
	else
		return DescribeAuditLogConfigOutcome(outcome.error());
}

void R_kvstoreClient::describeAuditLogConfigAsync(const DescribeAuditLogConfigRequest& request, const DescribeAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeAuditLogConfigOutcomeCallable R_kvstoreClient::describeAuditLogConfigCallable(const DescribeAuditLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditLogConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAuditLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeAuditRecordsOutcome R_kvstoreClient::describeAuditRecords(const DescribeAuditRecordsRequest &request) const
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

void R_kvstoreClient::describeAuditRecordsAsync(const DescribeAuditRecordsRequest& request, const DescribeAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeAuditRecordsOutcomeCallable R_kvstoreClient::describeAuditRecordsCallable(const DescribeAuditRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeAuditRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeAvailableResourceOutcome R_kvstoreClient::describeAvailableResource(const DescribeAvailableResourceRequest &request) const
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

void R_kvstoreClient::describeAvailableResourceAsync(const DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeAvailableResourceOutcomeCallable R_kvstoreClient::describeAvailableResourceCallable(const DescribeAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeBackupPolicyOutcome R_kvstoreClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
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

void R_kvstoreClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeBackupPolicyOutcomeCallable R_kvstoreClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeBackupTasksOutcome R_kvstoreClient::describeBackupTasks(const DescribeBackupTasksRequest &request) const
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

void R_kvstoreClient::describeBackupTasksAsync(const DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeBackupTasksOutcomeCallable R_kvstoreClient::describeBackupTasksCallable(const DescribeBackupTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupTasksOutcome()>>(
			[this, request]()
			{
			return this->describeBackupTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeBackupsOutcome R_kvstoreClient::describeBackups(const DescribeBackupsRequest &request) const
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

void R_kvstoreClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeBackupsOutcomeCallable R_kvstoreClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeCacheAnalysisReportOutcome R_kvstoreClient::describeCacheAnalysisReport(const DescribeCacheAnalysisReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCacheAnalysisReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCacheAnalysisReportOutcome(DescribeCacheAnalysisReportResult(outcome.result()));
	else
		return DescribeCacheAnalysisReportOutcome(outcome.error());
}

void R_kvstoreClient::describeCacheAnalysisReportAsync(const DescribeCacheAnalysisReportRequest& request, const DescribeCacheAnalysisReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCacheAnalysisReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeCacheAnalysisReportOutcomeCallable R_kvstoreClient::describeCacheAnalysisReportCallable(const DescribeCacheAnalysisReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCacheAnalysisReportOutcome()>>(
			[this, request]()
			{
			return this->describeCacheAnalysisReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeCacheAnalysisReportListOutcome R_kvstoreClient::describeCacheAnalysisReportList(const DescribeCacheAnalysisReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCacheAnalysisReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCacheAnalysisReportListOutcome(DescribeCacheAnalysisReportListResult(outcome.result()));
	else
		return DescribeCacheAnalysisReportListOutcome(outcome.error());
}

void R_kvstoreClient::describeCacheAnalysisReportListAsync(const DescribeCacheAnalysisReportListRequest& request, const DescribeCacheAnalysisReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCacheAnalysisReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeCacheAnalysisReportListOutcomeCallable R_kvstoreClient::describeCacheAnalysisReportListCallable(const DescribeCacheAnalysisReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCacheAnalysisReportListOutcome()>>(
			[this, request]()
			{
			return this->describeCacheAnalysisReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeClusterMemberInfoOutcome R_kvstoreClient::describeClusterMemberInfo(const DescribeClusterMemberInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterMemberInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterMemberInfoOutcome(DescribeClusterMemberInfoResult(outcome.result()));
	else
		return DescribeClusterMemberInfoOutcome(outcome.error());
}

void R_kvstoreClient::describeClusterMemberInfoAsync(const DescribeClusterMemberInfoRequest& request, const DescribeClusterMemberInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterMemberInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeClusterMemberInfoOutcomeCallable R_kvstoreClient::describeClusterMemberInfoCallable(const DescribeClusterMemberInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterMemberInfoOutcome()>>(
			[this, request]()
			{
			return this->describeClusterMemberInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeDBInstanceNetInfoOutcome R_kvstoreClient::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceNetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceNetInfoOutcome(DescribeDBInstanceNetInfoResult(outcome.result()));
	else
		return DescribeDBInstanceNetInfoOutcome(outcome.error());
}

void R_kvstoreClient::describeDBInstanceNetInfoAsync(const DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeDBInstanceNetInfoOutcomeCallable R_kvstoreClient::describeDBInstanceNetInfoCallable(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeDedicatedClusterInstanceListOutcome R_kvstoreClient::describeDedicatedClusterInstanceList(const DescribeDedicatedClusterInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedClusterInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedClusterInstanceListOutcome(DescribeDedicatedClusterInstanceListResult(outcome.result()));
	else
		return DescribeDedicatedClusterInstanceListOutcome(outcome.error());
}

void R_kvstoreClient::describeDedicatedClusterInstanceListAsync(const DescribeDedicatedClusterInstanceListRequest& request, const DescribeDedicatedClusterInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedClusterInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeDedicatedClusterInstanceListOutcomeCallable R_kvstoreClient::describeDedicatedClusterInstanceListCallable(const DescribeDedicatedClusterInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterInstanceListOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedClusterInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeEngineVersionOutcome R_kvstoreClient::describeEngineVersion(const DescribeEngineVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEngineVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEngineVersionOutcome(DescribeEngineVersionResult(outcome.result()));
	else
		return DescribeEngineVersionOutcome(outcome.error());
}

void R_kvstoreClient::describeEngineVersionAsync(const DescribeEngineVersionRequest& request, const DescribeEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEngineVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeEngineVersionOutcomeCallable R_kvstoreClient::describeEngineVersionCallable(const DescribeEngineVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEngineVersionOutcome()>>(
			[this, request]()
			{
			return this->describeEngineVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeGlobalDistributeCacheOutcome R_kvstoreClient::describeGlobalDistributeCache(const DescribeGlobalDistributeCacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalDistributeCacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalDistributeCacheOutcome(DescribeGlobalDistributeCacheResult(outcome.result()));
	else
		return DescribeGlobalDistributeCacheOutcome(outcome.error());
}

void R_kvstoreClient::describeGlobalDistributeCacheAsync(const DescribeGlobalDistributeCacheRequest& request, const DescribeGlobalDistributeCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalDistributeCache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeGlobalDistributeCacheOutcomeCallable R_kvstoreClient::describeGlobalDistributeCacheCallable(const DescribeGlobalDistributeCacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalDistributeCacheOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalDistributeCache(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeHistoryMonitorValuesOutcome R_kvstoreClient::describeHistoryMonitorValues(const DescribeHistoryMonitorValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryMonitorValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryMonitorValuesOutcome(DescribeHistoryMonitorValuesResult(outcome.result()));
	else
		return DescribeHistoryMonitorValuesOutcome(outcome.error());
}

void R_kvstoreClient::describeHistoryMonitorValuesAsync(const DescribeHistoryMonitorValuesRequest& request, const DescribeHistoryMonitorValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryMonitorValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeHistoryMonitorValuesOutcomeCallable R_kvstoreClient::describeHistoryMonitorValuesCallable(const DescribeHistoryMonitorValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryMonitorValuesOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryMonitorValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstanceAttributeOutcome R_kvstoreClient::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAttributeOutcome(DescribeInstanceAttributeResult(outcome.result()));
	else
		return DescribeInstanceAttributeOutcome(outcome.error());
}

void R_kvstoreClient::describeInstanceAttributeAsync(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstanceAttributeOutcomeCallable R_kvstoreClient::describeInstanceAttributeCallable(const DescribeInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstanceAutoRenewalAttributeOutcome R_kvstoreClient::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) const
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

void R_kvstoreClient::describeInstanceAutoRenewalAttributeAsync(const DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstanceAutoRenewalAttributeOutcomeCallable R_kvstoreClient::describeInstanceAutoRenewalAttributeCallable(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstanceConfigOutcome R_kvstoreClient::describeInstanceConfig(const DescribeInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceConfigOutcome(DescribeInstanceConfigResult(outcome.result()));
	else
		return DescribeInstanceConfigOutcome(outcome.error());
}

void R_kvstoreClient::describeInstanceConfigAsync(const DescribeInstanceConfigRequest& request, const DescribeInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstanceConfigOutcomeCallable R_kvstoreClient::describeInstanceConfigCallable(const DescribeInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstanceSSLOutcome R_kvstoreClient::describeInstanceSSL(const DescribeInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSSLOutcome(DescribeInstanceSSLResult(outcome.result()));
	else
		return DescribeInstanceSSLOutcome(outcome.error());
}

void R_kvstoreClient::describeInstanceSSLAsync(const DescribeInstanceSSLRequest& request, const DescribeInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstanceSSLOutcomeCallable R_kvstoreClient::describeInstanceSSLCallable(const DescribeInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeInstancesOutcome R_kvstoreClient::describeInstances(const DescribeInstancesRequest &request) const
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

void R_kvstoreClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeInstancesOutcomeCallable R_kvstoreClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeIntranetAttributeOutcome R_kvstoreClient::describeIntranetAttribute(const DescribeIntranetAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIntranetAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIntranetAttributeOutcome(DescribeIntranetAttributeResult(outcome.result()));
	else
		return DescribeIntranetAttributeOutcome(outcome.error());
}

void R_kvstoreClient::describeIntranetAttributeAsync(const DescribeIntranetAttributeRequest& request, const DescribeIntranetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIntranetAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeIntranetAttributeOutcomeCallable R_kvstoreClient::describeIntranetAttributeCallable(const DescribeIntranetAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIntranetAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeIntranetAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeLogicInstanceTopologyOutcome R_kvstoreClient::describeLogicInstanceTopology(const DescribeLogicInstanceTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogicInstanceTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogicInstanceTopologyOutcome(DescribeLogicInstanceTopologyResult(outcome.result()));
	else
		return DescribeLogicInstanceTopologyOutcome(outcome.error());
}

void R_kvstoreClient::describeLogicInstanceTopologyAsync(const DescribeLogicInstanceTopologyRequest& request, const DescribeLogicInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogicInstanceTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeLogicInstanceTopologyOutcomeCallable R_kvstoreClient::describeLogicInstanceTopologyCallable(const DescribeLogicInstanceTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogicInstanceTopologyOutcome()>>(
			[this, request]()
			{
			return this->describeLogicInstanceTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeMonitorItemsOutcome R_kvstoreClient::describeMonitorItems(const DescribeMonitorItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorItemsOutcome(DescribeMonitorItemsResult(outcome.result()));
	else
		return DescribeMonitorItemsOutcome(outcome.error());
}

void R_kvstoreClient::describeMonitorItemsAsync(const DescribeMonitorItemsRequest& request, const DescribeMonitorItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeMonitorItemsOutcomeCallable R_kvstoreClient::describeMonitorItemsCallable(const DescribeMonitorItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorItemsOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeParameterTemplatesOutcome R_kvstoreClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
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

void R_kvstoreClient::describeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeParameterTemplatesOutcomeCallable R_kvstoreClient::describeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeParametersOutcome R_kvstoreClient::describeParameters(const DescribeParametersRequest &request) const
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

void R_kvstoreClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeParametersOutcomeCallable R_kvstoreClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribePriceOutcome R_kvstoreClient::describePrice(const DescribePriceRequest &request) const
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

void R_kvstoreClient::describePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribePriceOutcomeCallable R_kvstoreClient::describePriceCallable(const DescribePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
			[this, request]()
			{
			return this->describePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeRegionsOutcome R_kvstoreClient::describeRegions(const DescribeRegionsRequest &request) const
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

void R_kvstoreClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeRegionsOutcomeCallable R_kvstoreClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeRoleZoneInfoOutcome R_kvstoreClient::describeRoleZoneInfo(const DescribeRoleZoneInfoRequest &request) const
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

void R_kvstoreClient::describeRoleZoneInfoAsync(const DescribeRoleZoneInfoRequest& request, const DescribeRoleZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRoleZoneInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeRoleZoneInfoOutcomeCallable R_kvstoreClient::describeRoleZoneInfoCallable(const DescribeRoleZoneInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRoleZoneInfoOutcome()>>(
			[this, request]()
			{
			return this->describeRoleZoneInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeRunningLogRecordsOutcome R_kvstoreClient::describeRunningLogRecords(const DescribeRunningLogRecordsRequest &request) const
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

void R_kvstoreClient::describeRunningLogRecordsAsync(const DescribeRunningLogRecordsRequest& request, const DescribeRunningLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRunningLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeRunningLogRecordsOutcomeCallable R_kvstoreClient::describeRunningLogRecordsCallable(const DescribeRunningLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRunningLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeRunningLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeSecurityGroupConfigurationOutcome R_kvstoreClient::describeSecurityGroupConfiguration(const DescribeSecurityGroupConfigurationRequest &request) const
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

void R_kvstoreClient::describeSecurityGroupConfigurationAsync(const DescribeSecurityGroupConfigurationRequest& request, const DescribeSecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeSecurityGroupConfigurationOutcomeCallable R_kvstoreClient::describeSecurityGroupConfigurationCallable(const DescribeSecurityGroupConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupConfigurationOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeSecurityIpsOutcome R_kvstoreClient::describeSecurityIps(const DescribeSecurityIpsRequest &request) const
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

void R_kvstoreClient::describeSecurityIpsAsync(const DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeSecurityIpsOutcomeCallable R_kvstoreClient::describeSecurityIpsCallable(const DescribeSecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeSlowLogRecordsOutcome R_kvstoreClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
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

void R_kvstoreClient::describeSlowLogRecordsAsync(const DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeSlowLogRecordsOutcomeCallable R_kvstoreClient::describeSlowLogRecordsCallable(const DescribeSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeTasksOutcome R_kvstoreClient::describeTasks(const DescribeTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTasksOutcome(DescribeTasksResult(outcome.result()));
	else
		return DescribeTasksOutcome(outcome.error());
}

void R_kvstoreClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeTasksOutcomeCallable R_kvstoreClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeUserClusterHostOutcome R_kvstoreClient::describeUserClusterHost(const DescribeUserClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserClusterHostOutcome(DescribeUserClusterHostResult(outcome.result()));
	else
		return DescribeUserClusterHostOutcome(outcome.error());
}

void R_kvstoreClient::describeUserClusterHostAsync(const DescribeUserClusterHostRequest& request, const DescribeUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeUserClusterHostOutcomeCallable R_kvstoreClient::describeUserClusterHostCallable(const DescribeUserClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserClusterHostOutcome()>>(
			[this, request]()
			{
			return this->describeUserClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeUserClusterHostInstanceOutcome R_kvstoreClient::describeUserClusterHostInstance(const DescribeUserClusterHostInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserClusterHostInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserClusterHostInstanceOutcome(DescribeUserClusterHostInstanceResult(outcome.result()));
	else
		return DescribeUserClusterHostInstanceOutcome(outcome.error());
}

void R_kvstoreClient::describeUserClusterHostInstanceAsync(const DescribeUserClusterHostInstanceRequest& request, const DescribeUserClusterHostInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserClusterHostInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeUserClusterHostInstanceOutcomeCallable R_kvstoreClient::describeUserClusterHostInstanceCallable(const DescribeUserClusterHostInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserClusterHostInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeUserClusterHostInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::DescribeZonesOutcome R_kvstoreClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void R_kvstoreClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::DescribeZonesOutcomeCallable R_kvstoreClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::EnableAdditionalBandwidthOutcome R_kvstoreClient::enableAdditionalBandwidth(const EnableAdditionalBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAdditionalBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAdditionalBandwidthOutcome(EnableAdditionalBandwidthResult(outcome.result()));
	else
		return EnableAdditionalBandwidthOutcome(outcome.error());
}

void R_kvstoreClient::enableAdditionalBandwidthAsync(const EnableAdditionalBandwidthRequest& request, const EnableAdditionalBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAdditionalBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::EnableAdditionalBandwidthOutcomeCallable R_kvstoreClient::enableAdditionalBandwidthCallable(const EnableAdditionalBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAdditionalBandwidthOutcome()>>(
			[this, request]()
			{
			return this->enableAdditionalBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::FlushExpireKeysOutcome R_kvstoreClient::flushExpireKeys(const FlushExpireKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FlushExpireKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FlushExpireKeysOutcome(FlushExpireKeysResult(outcome.result()));
	else
		return FlushExpireKeysOutcome(outcome.error());
}

void R_kvstoreClient::flushExpireKeysAsync(const FlushExpireKeysRequest& request, const FlushExpireKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, flushExpireKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::FlushExpireKeysOutcomeCallable R_kvstoreClient::flushExpireKeysCallable(const FlushExpireKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FlushExpireKeysOutcome()>>(
			[this, request]()
			{
			return this->flushExpireKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::FlushInstanceOutcome R_kvstoreClient::flushInstance(const FlushInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FlushInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FlushInstanceOutcome(FlushInstanceResult(outcome.result()));
	else
		return FlushInstanceOutcome(outcome.error());
}

void R_kvstoreClient::flushInstanceAsync(const FlushInstanceRequest& request, const FlushInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, flushInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::FlushInstanceOutcomeCallable R_kvstoreClient::flushInstanceCallable(const FlushInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FlushInstanceOutcome()>>(
			[this, request]()
			{
			return this->flushInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::GrantAccountPrivilegeOutcome R_kvstoreClient::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantAccountPrivilegeOutcome(GrantAccountPrivilegeResult(outcome.result()));
	else
		return GrantAccountPrivilegeOutcome(outcome.error());
}

void R_kvstoreClient::grantAccountPrivilegeAsync(const GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::GrantAccountPrivilegeOutcomeCallable R_kvstoreClient::grantAccountPrivilegeCallable(const GrantAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->grantAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::InitializeKvstorePermissionOutcome R_kvstoreClient::initializeKvstorePermission(const InitializeKvstorePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeKvstorePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeKvstorePermissionOutcome(InitializeKvstorePermissionResult(outcome.result()));
	else
		return InitializeKvstorePermissionOutcome(outcome.error());
}

void R_kvstoreClient::initializeKvstorePermissionAsync(const InitializeKvstorePermissionRequest& request, const InitializeKvstorePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeKvstorePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::InitializeKvstorePermissionOutcomeCallable R_kvstoreClient::initializeKvstorePermissionCallable(const InitializeKvstorePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeKvstorePermissionOutcome()>>(
			[this, request]()
			{
			return this->initializeKvstorePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ListTagResourcesOutcome R_kvstoreClient::listTagResources(const ListTagResourcesRequest &request) const
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

void R_kvstoreClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ListTagResourcesOutcomeCallable R_kvstoreClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::MigrateToOtherZoneOutcome R_kvstoreClient::migrateToOtherZone(const MigrateToOtherZoneRequest &request) const
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

void R_kvstoreClient::migrateToOtherZoneAsync(const MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateToOtherZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::MigrateToOtherZoneOutcomeCallable R_kvstoreClient::migrateToOtherZoneCallable(const MigrateToOtherZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateToOtherZoneOutcome()>>(
			[this, request]()
			{
			return this->migrateToOtherZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyAccountDescriptionOutcome R_kvstoreClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void R_kvstoreClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyAccountDescriptionOutcomeCallable R_kvstoreClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyAccountPasswordOutcome R_kvstoreClient::modifyAccountPassword(const ModifyAccountPasswordRequest &request) const
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

void R_kvstoreClient::modifyAccountPasswordAsync(const ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyAccountPasswordOutcomeCallable R_kvstoreClient::modifyAccountPasswordCallable(const ModifyAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyActiveOperationTaskOutcome R_kvstoreClient::modifyActiveOperationTask(const ModifyActiveOperationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyActiveOperationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyActiveOperationTaskOutcome(ModifyActiveOperationTaskResult(outcome.result()));
	else
		return ModifyActiveOperationTaskOutcome(outcome.error());
}

void R_kvstoreClient::modifyActiveOperationTaskAsync(const ModifyActiveOperationTaskRequest& request, const ModifyActiveOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActiveOperationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyActiveOperationTaskOutcomeCallable R_kvstoreClient::modifyActiveOperationTaskCallable(const ModifyActiveOperationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActiveOperationTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyActiveOperationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyAuditLogConfigOutcome R_kvstoreClient::modifyAuditLogConfig(const ModifyAuditLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAuditLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAuditLogConfigOutcome(ModifyAuditLogConfigResult(outcome.result()));
	else
		return ModifyAuditLogConfigOutcome(outcome.error());
}

void R_kvstoreClient::modifyAuditLogConfigAsync(const ModifyAuditLogConfigRequest& request, const ModifyAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAuditLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyAuditLogConfigOutcomeCallable R_kvstoreClient::modifyAuditLogConfigCallable(const ModifyAuditLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAuditLogConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAuditLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyBackupPolicyOutcome R_kvstoreClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
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

void R_kvstoreClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyBackupPolicyOutcomeCallable R_kvstoreClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyDBInstanceConnectionStringOutcome R_kvstoreClient::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) const
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

void R_kvstoreClient::modifyDBInstanceConnectionStringAsync(const ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyDBInstanceConnectionStringOutcomeCallable R_kvstoreClient::modifyDBInstanceConnectionStringCallable(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceAttributeOutcome R_kvstoreClient::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAttributeOutcome(ModifyInstanceAttributeResult(outcome.result()));
	else
		return ModifyInstanceAttributeOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceAttributeOutcomeCallable R_kvstoreClient::modifyInstanceAttributeCallable(const ModifyInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceAutoRenewalAttributeOutcome R_kvstoreClient::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) const
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

void R_kvstoreClient::modifyInstanceAutoRenewalAttributeAsync(const ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceAutoRenewalAttributeOutcomeCallable R_kvstoreClient::modifyInstanceAutoRenewalAttributeCallable(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceConfigOutcome R_kvstoreClient::modifyInstanceConfig(const ModifyInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceConfigOutcome(ModifyInstanceConfigResult(outcome.result()));
	else
		return ModifyInstanceConfigOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceConfigAsync(const ModifyInstanceConfigRequest& request, const ModifyInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceConfigOutcomeCallable R_kvstoreClient::modifyInstanceConfigCallable(const ModifyInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceMaintainTimeOutcome R_kvstoreClient::modifyInstanceMaintainTime(const ModifyInstanceMaintainTimeRequest &request) const
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

void R_kvstoreClient::modifyInstanceMaintainTimeAsync(const ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceMaintainTimeOutcomeCallable R_kvstoreClient::modifyInstanceMaintainTimeCallable(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceMajorVersionOutcome R_kvstoreClient::modifyInstanceMajorVersion(const ModifyInstanceMajorVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMajorVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMajorVersionOutcome(ModifyInstanceMajorVersionResult(outcome.result()));
	else
		return ModifyInstanceMajorVersionOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceMajorVersionAsync(const ModifyInstanceMajorVersionRequest& request, const ModifyInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMajorVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceMajorVersionOutcomeCallable R_kvstoreClient::modifyInstanceMajorVersionCallable(const ModifyInstanceMajorVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMajorVersionOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMajorVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceMinorVersionOutcome R_kvstoreClient::modifyInstanceMinorVersion(const ModifyInstanceMinorVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMinorVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMinorVersionOutcome(ModifyInstanceMinorVersionResult(outcome.result()));
	else
		return ModifyInstanceMinorVersionOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceMinorVersionAsync(const ModifyInstanceMinorVersionRequest& request, const ModifyInstanceMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMinorVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceMinorVersionOutcomeCallable R_kvstoreClient::modifyInstanceMinorVersionCallable(const ModifyInstanceMinorVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMinorVersionOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMinorVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceNetExpireTimeOutcome R_kvstoreClient::modifyInstanceNetExpireTime(const ModifyInstanceNetExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceNetExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceNetExpireTimeOutcome(ModifyInstanceNetExpireTimeResult(outcome.result()));
	else
		return ModifyInstanceNetExpireTimeOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceNetExpireTimeAsync(const ModifyInstanceNetExpireTimeRequest& request, const ModifyInstanceNetExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceNetExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceNetExpireTimeOutcomeCallable R_kvstoreClient::modifyInstanceNetExpireTimeCallable(const ModifyInstanceNetExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceNetExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceNetExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceSSLOutcome R_kvstoreClient::modifyInstanceSSL(const ModifyInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceSSLOutcome(ModifyInstanceSSLResult(outcome.result()));
	else
		return ModifyInstanceSSLOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceSSLAsync(const ModifyInstanceSSLRequest& request, const ModifyInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceSSLOutcomeCallable R_kvstoreClient::modifyInstanceSSLCallable(const ModifyInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceSpecOutcome R_kvstoreClient::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceSpecOutcome(ModifyInstanceSpecResult(outcome.result()));
	else
		return ModifyInstanceSpecOutcome(outcome.error());
}

void R_kvstoreClient::modifyInstanceSpecAsync(const ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceSpecOutcomeCallable R_kvstoreClient::modifyInstanceSpecCallable(const ModifyInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyInstanceVpcAuthModeOutcome R_kvstoreClient::modifyInstanceVpcAuthMode(const ModifyInstanceVpcAuthModeRequest &request) const
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

void R_kvstoreClient::modifyInstanceVpcAuthModeAsync(const ModifyInstanceVpcAuthModeRequest& request, const ModifyInstanceVpcAuthModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceVpcAuthMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyInstanceVpcAuthModeOutcomeCallable R_kvstoreClient::modifyInstanceVpcAuthModeCallable(const ModifyInstanceVpcAuthModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceVpcAuthModeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceVpcAuthMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyIntranetAttributeOutcome R_kvstoreClient::modifyIntranetAttribute(const ModifyIntranetAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIntranetAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIntranetAttributeOutcome(ModifyIntranetAttributeResult(outcome.result()));
	else
		return ModifyIntranetAttributeOutcome(outcome.error());
}

void R_kvstoreClient::modifyIntranetAttributeAsync(const ModifyIntranetAttributeRequest& request, const ModifyIntranetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIntranetAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyIntranetAttributeOutcomeCallable R_kvstoreClient::modifyIntranetAttributeCallable(const ModifyIntranetAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIntranetAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyIntranetAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyNodeSpecOutcome R_kvstoreClient::modifyNodeSpec(const ModifyNodeSpecRequest &request) const
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

void R_kvstoreClient::modifyNodeSpecAsync(const ModifyNodeSpecRequest& request, const ModifyNodeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNodeSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyNodeSpecOutcomeCallable R_kvstoreClient::modifyNodeSpecCallable(const ModifyNodeSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNodeSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyNodeSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyResourceGroupOutcome R_kvstoreClient::modifyResourceGroup(const ModifyResourceGroupRequest &request) const
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

void R_kvstoreClient::modifyResourceGroupAsync(const ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyResourceGroupOutcomeCallable R_kvstoreClient::modifyResourceGroupCallable(const ModifyResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifySecurityGroupConfigurationOutcome R_kvstoreClient::modifySecurityGroupConfiguration(const ModifySecurityGroupConfigurationRequest &request) const
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

void R_kvstoreClient::modifySecurityGroupConfigurationAsync(const ModifySecurityGroupConfigurationRequest& request, const ModifySecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifySecurityGroupConfigurationOutcomeCallable R_kvstoreClient::modifySecurityGroupConfigurationCallable(const ModifySecurityGroupConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifySecurityIpsOutcome R_kvstoreClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
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

void R_kvstoreClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifySecurityIpsOutcomeCallable R_kvstoreClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ModifyUserClusterHostOutcome R_kvstoreClient::modifyUserClusterHost(const ModifyUserClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserClusterHostOutcome(ModifyUserClusterHostResult(outcome.result()));
	else
		return ModifyUserClusterHostOutcome(outcome.error());
}

void R_kvstoreClient::modifyUserClusterHostAsync(const ModifyUserClusterHostRequest& request, const ModifyUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ModifyUserClusterHostOutcomeCallable R_kvstoreClient::modifyUserClusterHostCallable(const ModifyUserClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserClusterHostOutcome()>>(
			[this, request]()
			{
			return this->modifyUserClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ReleaseDirectConnectionOutcome R_kvstoreClient::releaseDirectConnection(const ReleaseDirectConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseDirectConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseDirectConnectionOutcome(ReleaseDirectConnectionResult(outcome.result()));
	else
		return ReleaseDirectConnectionOutcome(outcome.error());
}

void R_kvstoreClient::releaseDirectConnectionAsync(const ReleaseDirectConnectionRequest& request, const ReleaseDirectConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseDirectConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ReleaseDirectConnectionOutcomeCallable R_kvstoreClient::releaseDirectConnectionCallable(const ReleaseDirectConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseDirectConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseDirectConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ReleaseInstancePublicConnectionOutcome R_kvstoreClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstancePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstancePublicConnectionOutcome(ReleaseInstancePublicConnectionResult(outcome.result()));
	else
		return ReleaseInstancePublicConnectionOutcome(outcome.error());
}

void R_kvstoreClient::releaseInstancePublicConnectionAsync(const ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ReleaseInstancePublicConnectionOutcomeCallable R_kvstoreClient::releaseInstancePublicConnectionCallable(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RemoveSubInstanceOutcome R_kvstoreClient::removeSubInstance(const RemoveSubInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSubInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSubInstanceOutcome(RemoveSubInstanceResult(outcome.result()));
	else
		return RemoveSubInstanceOutcome(outcome.error());
}

void R_kvstoreClient::removeSubInstanceAsync(const RemoveSubInstanceRequest& request, const RemoveSubInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSubInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RemoveSubInstanceOutcomeCallable R_kvstoreClient::removeSubInstanceCallable(const RemoveSubInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSubInstanceOutcome()>>(
			[this, request]()
			{
			return this->removeSubInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RenewAdditionalBandwidthOutcome R_kvstoreClient::renewAdditionalBandwidth(const RenewAdditionalBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewAdditionalBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewAdditionalBandwidthOutcome(RenewAdditionalBandwidthResult(outcome.result()));
	else
		return RenewAdditionalBandwidthOutcome(outcome.error());
}

void R_kvstoreClient::renewAdditionalBandwidthAsync(const RenewAdditionalBandwidthRequest& request, const RenewAdditionalBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewAdditionalBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RenewAdditionalBandwidthOutcomeCallable R_kvstoreClient::renewAdditionalBandwidthCallable(const RenewAdditionalBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewAdditionalBandwidthOutcome()>>(
			[this, request]()
			{
			return this->renewAdditionalBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RenewInstanceOutcome R_kvstoreClient::renewInstance(const RenewInstanceRequest &request) const
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

void R_kvstoreClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RenewInstanceOutcomeCallable R_kvstoreClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ReplaceUserClusterHostOutcome R_kvstoreClient::replaceUserClusterHost(const ReplaceUserClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceUserClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceUserClusterHostOutcome(ReplaceUserClusterHostResult(outcome.result()));
	else
		return ReplaceUserClusterHostOutcome(outcome.error());
}

void R_kvstoreClient::replaceUserClusterHostAsync(const ReplaceUserClusterHostRequest& request, const ReplaceUserClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceUserClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ReplaceUserClusterHostOutcomeCallable R_kvstoreClient::replaceUserClusterHostCallable(const ReplaceUserClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceUserClusterHostOutcome()>>(
			[this, request]()
			{
			return this->replaceUserClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::ResetAccountPasswordOutcome R_kvstoreClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void R_kvstoreClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::ResetAccountPasswordOutcomeCallable R_kvstoreClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RestartInstanceOutcome R_kvstoreClient::restartInstance(const RestartInstanceRequest &request) const
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

void R_kvstoreClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RestartInstanceOutcomeCallable R_kvstoreClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::RestoreInstanceOutcome R_kvstoreClient::restoreInstance(const RestoreInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreInstanceOutcome(RestoreInstanceResult(outcome.result()));
	else
		return RestoreInstanceOutcome(outcome.error());
}

void R_kvstoreClient::restoreInstanceAsync(const RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::RestoreInstanceOutcomeCallable R_kvstoreClient::restoreInstanceCallable(const RestoreInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreInstanceOutcome()>>(
			[this, request]()
			{
			return this->restoreInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::SwitchInstanceHAOutcome R_kvstoreClient::switchInstanceHA(const SwitchInstanceHARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchInstanceHAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchInstanceHAOutcome(SwitchInstanceHAResult(outcome.result()));
	else
		return SwitchInstanceHAOutcome(outcome.error());
}

void R_kvstoreClient::switchInstanceHAAsync(const SwitchInstanceHARequest& request, const SwitchInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchInstanceHA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::SwitchInstanceHAOutcomeCallable R_kvstoreClient::switchInstanceHACallable(const SwitchInstanceHARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchInstanceHAOutcome()>>(
			[this, request]()
			{
			return this->switchInstanceHA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::SwitchInstanceProxyOutcome R_kvstoreClient::switchInstanceProxy(const SwitchInstanceProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchInstanceProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchInstanceProxyOutcome(SwitchInstanceProxyResult(outcome.result()));
	else
		return SwitchInstanceProxyOutcome(outcome.error());
}

void R_kvstoreClient::switchInstanceProxyAsync(const SwitchInstanceProxyRequest& request, const SwitchInstanceProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchInstanceProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::SwitchInstanceProxyOutcomeCallable R_kvstoreClient::switchInstanceProxyCallable(const SwitchInstanceProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchInstanceProxyOutcome()>>(
			[this, request]()
			{
			return this->switchInstanceProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::SwitchNetworkOutcome R_kvstoreClient::switchNetwork(const SwitchNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchNetworkOutcome(SwitchNetworkResult(outcome.result()));
	else
		return SwitchNetworkOutcome(outcome.error());
}

void R_kvstoreClient::switchNetworkAsync(const SwitchNetworkRequest& request, const SwitchNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::SwitchNetworkOutcomeCallable R_kvstoreClient::switchNetworkCallable(const SwitchNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchNetworkOutcome()>>(
			[this, request]()
			{
			return this->switchNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::SyncDtsStatusOutcome R_kvstoreClient::syncDtsStatus(const SyncDtsStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncDtsStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncDtsStatusOutcome(SyncDtsStatusResult(outcome.result()));
	else
		return SyncDtsStatusOutcome(outcome.error());
}

void R_kvstoreClient::syncDtsStatusAsync(const SyncDtsStatusRequest& request, const SyncDtsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncDtsStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::SyncDtsStatusOutcomeCallable R_kvstoreClient::syncDtsStatusCallable(const SyncDtsStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncDtsStatusOutcome()>>(
			[this, request]()
			{
			return this->syncDtsStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::TagResourcesOutcome R_kvstoreClient::tagResources(const TagResourcesRequest &request) const
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

void R_kvstoreClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::TagResourcesOutcomeCallable R_kvstoreClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::TransformInstanceChargeTypeOutcome R_kvstoreClient::transformInstanceChargeType(const TransformInstanceChargeTypeRequest &request) const
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

void R_kvstoreClient::transformInstanceChargeTypeAsync(const TransformInstanceChargeTypeRequest& request, const TransformInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformInstanceChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::TransformInstanceChargeTypeOutcomeCallable R_kvstoreClient::transformInstanceChargeTypeCallable(const TransformInstanceChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformInstanceChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->transformInstanceChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::TransformToPrePaidOutcome R_kvstoreClient::transformToPrePaid(const TransformToPrePaidRequest &request) const
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

void R_kvstoreClient::transformToPrePaidAsync(const TransformToPrePaidRequest& request, const TransformToPrePaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformToPrePaid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::TransformToPrePaidOutcomeCallable R_kvstoreClient::transformToPrePaidCallable(const TransformToPrePaidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformToPrePaidOutcome()>>(
			[this, request]()
			{
			return this->transformToPrePaid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

R_kvstoreClient::UntagResourcesOutcome R_kvstoreClient::untagResources(const UntagResourcesRequest &request) const
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

void R_kvstoreClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

R_kvstoreClient::UntagResourcesOutcomeCallable R_kvstoreClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

