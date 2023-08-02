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

#include <alibabacloud/gpdb/GpdbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

namespace
{
	const std::string SERVICE_NAME = "gpdb";
}

GpdbClient::GpdbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

GpdbClient::GpdbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

GpdbClient::GpdbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

GpdbClient::~GpdbClient()
{}

GpdbClient::AllocateInstancePublicConnectionOutcome GpdbClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
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

void GpdbClient::allocateInstancePublicConnectionAsync(const AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::AllocateInstancePublicConnectionOutcomeCallable GpdbClient::allocateInstancePublicConnectionCallable(const AllocateInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CheckServiceLinkedRoleOutcome GpdbClient::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) const
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

void GpdbClient::checkServiceLinkedRoleAsync(const CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CheckServiceLinkedRoleOutcomeCallable GpdbClient::checkServiceLinkedRoleCallable(const CheckServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CreateAccountOutcome GpdbClient::createAccount(const CreateAccountRequest &request) const
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

void GpdbClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CreateAccountOutcomeCallable GpdbClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CreateCollectionOutcome GpdbClient::createCollection(const CreateCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCollectionOutcome(CreateCollectionResult(outcome.result()));
	else
		return CreateCollectionOutcome(outcome.error());
}

void GpdbClient::createCollectionAsync(const CreateCollectionRequest& request, const CreateCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CreateCollectionOutcomeCallable GpdbClient::createCollectionCallable(const CreateCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCollectionOutcome()>>(
			[this, request]()
			{
			return this->createCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CreateDBInstanceOutcome GpdbClient::createDBInstance(const CreateDBInstanceRequest &request) const
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

void GpdbClient::createDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CreateDBInstanceOutcomeCallable GpdbClient::createDBInstanceCallable(const CreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CreateDBInstancePlanOutcome GpdbClient::createDBInstancePlan(const CreateDBInstancePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstancePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstancePlanOutcome(CreateDBInstancePlanResult(outcome.result()));
	else
		return CreateDBInstancePlanOutcome(outcome.error());
}

void GpdbClient::createDBInstancePlanAsync(const CreateDBInstancePlanRequest& request, const CreateDBInstancePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstancePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CreateDBInstancePlanOutcomeCallable GpdbClient::createDBInstancePlanCallable(const CreateDBInstancePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstancePlanOutcome()>>(
			[this, request]()
			{
			return this->createDBInstancePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CreateNamespaceOutcome GpdbClient::createNamespace(const CreateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNamespaceOutcome(CreateNamespaceResult(outcome.result()));
	else
		return CreateNamespaceOutcome(outcome.error());
}

void GpdbClient::createNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CreateNamespaceOutcomeCallable GpdbClient::createNamespaceCallable(const CreateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->createNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CreateSampleDataOutcome GpdbClient::createSampleData(const CreateSampleDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSampleDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSampleDataOutcome(CreateSampleDataResult(outcome.result()));
	else
		return CreateSampleDataOutcome(outcome.error());
}

void GpdbClient::createSampleDataAsync(const CreateSampleDataRequest& request, const CreateSampleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSampleData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CreateSampleDataOutcomeCallable GpdbClient::createSampleDataCallable(const CreateSampleDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSampleDataOutcome()>>(
			[this, request]()
			{
			return this->createSampleData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CreateServiceLinkedRoleOutcome GpdbClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(CreateServiceLinkedRoleResult(outcome.result()));
	else
		return CreateServiceLinkedRoleOutcome(outcome.error());
}

void GpdbClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CreateServiceLinkedRoleOutcomeCallable GpdbClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::CreateVectorIndexOutcome GpdbClient::createVectorIndex(const CreateVectorIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVectorIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVectorIndexOutcome(CreateVectorIndexResult(outcome.result()));
	else
		return CreateVectorIndexOutcome(outcome.error());
}

void GpdbClient::createVectorIndexAsync(const CreateVectorIndexRequest& request, const CreateVectorIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVectorIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::CreateVectorIndexOutcomeCallable GpdbClient::createVectorIndexCallable(const CreateVectorIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVectorIndexOutcome()>>(
			[this, request]()
			{
			return this->createVectorIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DeleteCollectionOutcome GpdbClient::deleteCollection(const DeleteCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCollectionOutcome(DeleteCollectionResult(outcome.result()));
	else
		return DeleteCollectionOutcome(outcome.error());
}

void GpdbClient::deleteCollectionAsync(const DeleteCollectionRequest& request, const DeleteCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DeleteCollectionOutcomeCallable GpdbClient::deleteCollectionCallable(const DeleteCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCollectionOutcome()>>(
			[this, request]()
			{
			return this->deleteCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DeleteCollectionDataOutcome GpdbClient::deleteCollectionData(const DeleteCollectionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCollectionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCollectionDataOutcome(DeleteCollectionDataResult(outcome.result()));
	else
		return DeleteCollectionDataOutcome(outcome.error());
}

void GpdbClient::deleteCollectionDataAsync(const DeleteCollectionDataRequest& request, const DeleteCollectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCollectionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DeleteCollectionDataOutcomeCallable GpdbClient::deleteCollectionDataCallable(const DeleteCollectionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCollectionDataOutcome()>>(
			[this, request]()
			{
			return this->deleteCollectionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DeleteDBInstanceOutcome GpdbClient::deleteDBInstance(const DeleteDBInstanceRequest &request) const
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

void GpdbClient::deleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DeleteDBInstanceOutcomeCallable GpdbClient::deleteDBInstanceCallable(const DeleteDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DeleteDBInstancePlanOutcome GpdbClient::deleteDBInstancePlan(const DeleteDBInstancePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBInstancePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBInstancePlanOutcome(DeleteDBInstancePlanResult(outcome.result()));
	else
		return DeleteDBInstancePlanOutcome(outcome.error());
}

void GpdbClient::deleteDBInstancePlanAsync(const DeleteDBInstancePlanRequest& request, const DeleteDBInstancePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstancePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DeleteDBInstancePlanOutcomeCallable GpdbClient::deleteDBInstancePlanCallable(const DeleteDBInstancePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstancePlanOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstancePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DeleteNamespaceOutcome GpdbClient::deleteNamespace(const DeleteNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNamespaceOutcome(DeleteNamespaceResult(outcome.result()));
	else
		return DeleteNamespaceOutcome(outcome.error());
}

void GpdbClient::deleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DeleteNamespaceOutcomeCallable GpdbClient::deleteNamespaceCallable(const DeleteNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DeleteVectorIndexOutcome GpdbClient::deleteVectorIndex(const DeleteVectorIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVectorIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVectorIndexOutcome(DeleteVectorIndexResult(outcome.result()));
	else
		return DeleteVectorIndexOutcome(outcome.error());
}

void GpdbClient::deleteVectorIndexAsync(const DeleteVectorIndexRequest& request, const DeleteVectorIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVectorIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DeleteVectorIndexOutcomeCallable GpdbClient::deleteVectorIndexCallable(const DeleteVectorIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVectorIndexOutcome()>>(
			[this, request]()
			{
			return this->deleteVectorIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeAccountsOutcome GpdbClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void GpdbClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeAccountsOutcomeCallable GpdbClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeAvailableResourcesOutcome GpdbClient::describeAvailableResources(const DescribeAvailableResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableResourcesOutcome(DescribeAvailableResourcesResult(outcome.result()));
	else
		return DescribeAvailableResourcesOutcome(outcome.error());
}

void GpdbClient::describeAvailableResourcesAsync(const DescribeAvailableResourcesRequest& request, const DescribeAvailableResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeAvailableResourcesOutcomeCallable GpdbClient::describeAvailableResourcesCallable(const DescribeAvailableResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeBackupPolicyOutcome GpdbClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
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

void GpdbClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeBackupPolicyOutcomeCallable GpdbClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeCollectionOutcome GpdbClient::describeCollection(const DescribeCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCollectionOutcome(DescribeCollectionResult(outcome.result()));
	else
		return DescribeCollectionOutcome(outcome.error());
}

void GpdbClient::describeCollectionAsync(const DescribeCollectionRequest& request, const DescribeCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeCollectionOutcomeCallable GpdbClient::describeCollectionCallable(const DescribeCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCollectionOutcome()>>(
			[this, request]()
			{
			return this->describeCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBClusterNodeOutcome GpdbClient::describeDBClusterNode(const DescribeDBClusterNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterNodeOutcome(DescribeDBClusterNodeResult(outcome.result()));
	else
		return DescribeDBClusterNodeOutcome(outcome.error());
}

void GpdbClient::describeDBClusterNodeAsync(const DescribeDBClusterNodeRequest& request, const DescribeDBClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBClusterNodeOutcomeCallable GpdbClient::describeDBClusterNodeCallable(const DescribeDBClusterNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterNodeOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBClusterPerformanceOutcome GpdbClient::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterPerformanceOutcome(DescribeDBClusterPerformanceResult(outcome.result()));
	else
		return DescribeDBClusterPerformanceOutcome(outcome.error());
}

void GpdbClient::describeDBClusterPerformanceAsync(const DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBClusterPerformanceOutcomeCallable GpdbClient::describeDBClusterPerformanceCallable(const DescribeDBClusterPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceAttributeOutcome GpdbClient::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) const
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

void GpdbClient::describeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceAttributeOutcomeCallable GpdbClient::describeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceDataBloatOutcome GpdbClient::describeDBInstanceDataBloat(const DescribeDBInstanceDataBloatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceDataBloatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceDataBloatOutcome(DescribeDBInstanceDataBloatResult(outcome.result()));
	else
		return DescribeDBInstanceDataBloatOutcome(outcome.error());
}

void GpdbClient::describeDBInstanceDataBloatAsync(const DescribeDBInstanceDataBloatRequest& request, const DescribeDBInstanceDataBloatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceDataBloat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceDataBloatOutcomeCallable GpdbClient::describeDBInstanceDataBloatCallable(const DescribeDBInstanceDataBloatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceDataBloatOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceDataBloat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceDataSkewOutcome GpdbClient::describeDBInstanceDataSkew(const DescribeDBInstanceDataSkewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceDataSkewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceDataSkewOutcome(DescribeDBInstanceDataSkewResult(outcome.result()));
	else
		return DescribeDBInstanceDataSkewOutcome(outcome.error());
}

void GpdbClient::describeDBInstanceDataSkewAsync(const DescribeDBInstanceDataSkewRequest& request, const DescribeDBInstanceDataSkewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceDataSkew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceDataSkewOutcomeCallable GpdbClient::describeDBInstanceDataSkewCallable(const DescribeDBInstanceDataSkewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceDataSkewOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceDataSkew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceDiagnosisSummaryOutcome GpdbClient::describeDBInstanceDiagnosisSummary(const DescribeDBInstanceDiagnosisSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceDiagnosisSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceDiagnosisSummaryOutcome(DescribeDBInstanceDiagnosisSummaryResult(outcome.result()));
	else
		return DescribeDBInstanceDiagnosisSummaryOutcome(outcome.error());
}

void GpdbClient::describeDBInstanceDiagnosisSummaryAsync(const DescribeDBInstanceDiagnosisSummaryRequest& request, const DescribeDBInstanceDiagnosisSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceDiagnosisSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceDiagnosisSummaryOutcomeCallable GpdbClient::describeDBInstanceDiagnosisSummaryCallable(const DescribeDBInstanceDiagnosisSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceDiagnosisSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceDiagnosisSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceErrorLogOutcome GpdbClient::describeDBInstanceErrorLog(const DescribeDBInstanceErrorLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceErrorLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceErrorLogOutcome(DescribeDBInstanceErrorLogResult(outcome.result()));
	else
		return DescribeDBInstanceErrorLogOutcome(outcome.error());
}

void GpdbClient::describeDBInstanceErrorLogAsync(const DescribeDBInstanceErrorLogRequest& request, const DescribeDBInstanceErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceErrorLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceErrorLogOutcomeCallable GpdbClient::describeDBInstanceErrorLogCallable(const DescribeDBInstanceErrorLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceErrorLogOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceErrorLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceIPArrayListOutcome GpdbClient::describeDBInstanceIPArrayList(const DescribeDBInstanceIPArrayListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceIPArrayListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceIPArrayListOutcome(DescribeDBInstanceIPArrayListResult(outcome.result()));
	else
		return DescribeDBInstanceIPArrayListOutcome(outcome.error());
}

void GpdbClient::describeDBInstanceIPArrayListAsync(const DescribeDBInstanceIPArrayListRequest& request, const DescribeDBInstanceIPArrayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceIPArrayList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceIPArrayListOutcomeCallable GpdbClient::describeDBInstanceIPArrayListCallable(const DescribeDBInstanceIPArrayListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceIPArrayListOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceIPArrayList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceIndexUsageOutcome GpdbClient::describeDBInstanceIndexUsage(const DescribeDBInstanceIndexUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceIndexUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceIndexUsageOutcome(DescribeDBInstanceIndexUsageResult(outcome.result()));
	else
		return DescribeDBInstanceIndexUsageOutcome(outcome.error());
}

void GpdbClient::describeDBInstanceIndexUsageAsync(const DescribeDBInstanceIndexUsageRequest& request, const DescribeDBInstanceIndexUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceIndexUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceIndexUsageOutcomeCallable GpdbClient::describeDBInstanceIndexUsageCallable(const DescribeDBInstanceIndexUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceIndexUsageOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceIndexUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceNetInfoOutcome GpdbClient::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) const
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

void GpdbClient::describeDBInstanceNetInfoAsync(const DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceNetInfoOutcomeCallable GpdbClient::describeDBInstanceNetInfoCallable(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstancePerformanceOutcome GpdbClient::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) const
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

void GpdbClient::describeDBInstancePerformanceAsync(const DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstancePerformanceOutcomeCallable GpdbClient::describeDBInstancePerformanceCallable(const DescribeDBInstancePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstancePlansOutcome GpdbClient::describeDBInstancePlans(const DescribeDBInstancePlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancePlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancePlansOutcome(DescribeDBInstancePlansResult(outcome.result()));
	else
		return DescribeDBInstancePlansOutcome(outcome.error());
}

void GpdbClient::describeDBInstancePlansAsync(const DescribeDBInstancePlansRequest& request, const DescribeDBInstancePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancePlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstancePlansOutcomeCallable GpdbClient::describeDBInstancePlansCallable(const DescribeDBInstancePlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancePlansOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancePlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstanceSSLOutcome GpdbClient::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) const
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

void GpdbClient::describeDBInstanceSSLAsync(const DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstanceSSLOutcomeCallable GpdbClient::describeDBInstanceSSLCallable(const DescribeDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDBInstancesOutcome GpdbClient::describeDBInstances(const DescribeDBInstancesRequest &request) const
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

void GpdbClient::describeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDBInstancesOutcomeCallable GpdbClient::describeDBInstancesCallable(const DescribeDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDataBackupsOutcome GpdbClient::describeDataBackups(const DescribeDataBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataBackupsOutcome(DescribeDataBackupsResult(outcome.result()));
	else
		return DescribeDataBackupsOutcome(outcome.error());
}

void GpdbClient::describeDataBackupsAsync(const DescribeDataBackupsRequest& request, const DescribeDataBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDataBackupsOutcomeCallable GpdbClient::describeDataBackupsCallable(const DescribeDataBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeDataBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDataReDistributeInfoOutcome GpdbClient::describeDataReDistributeInfo(const DescribeDataReDistributeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataReDistributeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataReDistributeInfoOutcome(DescribeDataReDistributeInfoResult(outcome.result()));
	else
		return DescribeDataReDistributeInfoOutcome(outcome.error());
}

void GpdbClient::describeDataReDistributeInfoAsync(const DescribeDataReDistributeInfoRequest& request, const DescribeDataReDistributeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataReDistributeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDataReDistributeInfoOutcomeCallable GpdbClient::describeDataReDistributeInfoCallable(const DescribeDataReDistributeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataReDistributeInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDataReDistributeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDataShareInstancesOutcome GpdbClient::describeDataShareInstances(const DescribeDataShareInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataShareInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataShareInstancesOutcome(DescribeDataShareInstancesResult(outcome.result()));
	else
		return DescribeDataShareInstancesOutcome(outcome.error());
}

void GpdbClient::describeDataShareInstancesAsync(const DescribeDataShareInstancesRequest& request, const DescribeDataShareInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataShareInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDataShareInstancesOutcomeCallable GpdbClient::describeDataShareInstancesCallable(const DescribeDataShareInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataShareInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDataShareInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDataSharePerformanceOutcome GpdbClient::describeDataSharePerformance(const DescribeDataSharePerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSharePerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSharePerformanceOutcome(DescribeDataSharePerformanceResult(outcome.result()));
	else
		return DescribeDataSharePerformanceOutcome(outcome.error());
}

void GpdbClient::describeDataSharePerformanceAsync(const DescribeDataSharePerformanceRequest& request, const DescribeDataSharePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSharePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDataSharePerformanceOutcomeCallable GpdbClient::describeDataSharePerformanceCallable(const DescribeDataSharePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSharePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDataSharePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDiagnosisDimensionsOutcome GpdbClient::describeDiagnosisDimensions(const DescribeDiagnosisDimensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosisDimensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosisDimensionsOutcome(DescribeDiagnosisDimensionsResult(outcome.result()));
	else
		return DescribeDiagnosisDimensionsOutcome(outcome.error());
}

void GpdbClient::describeDiagnosisDimensionsAsync(const DescribeDiagnosisDimensionsRequest& request, const DescribeDiagnosisDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosisDimensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDiagnosisDimensionsOutcomeCallable GpdbClient::describeDiagnosisDimensionsCallable(const DescribeDiagnosisDimensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosisDimensionsOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosisDimensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDiagnosisMonitorPerformanceOutcome GpdbClient::describeDiagnosisMonitorPerformance(const DescribeDiagnosisMonitorPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosisMonitorPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosisMonitorPerformanceOutcome(DescribeDiagnosisMonitorPerformanceResult(outcome.result()));
	else
		return DescribeDiagnosisMonitorPerformanceOutcome(outcome.error());
}

void GpdbClient::describeDiagnosisMonitorPerformanceAsync(const DescribeDiagnosisMonitorPerformanceRequest& request, const DescribeDiagnosisMonitorPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosisMonitorPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDiagnosisMonitorPerformanceOutcomeCallable GpdbClient::describeDiagnosisMonitorPerformanceCallable(const DescribeDiagnosisMonitorPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosisMonitorPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosisMonitorPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDiagnosisRecordsOutcome GpdbClient::describeDiagnosisRecords(const DescribeDiagnosisRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosisRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosisRecordsOutcome(DescribeDiagnosisRecordsResult(outcome.result()));
	else
		return DescribeDiagnosisRecordsOutcome(outcome.error());
}

void GpdbClient::describeDiagnosisRecordsAsync(const DescribeDiagnosisRecordsRequest& request, const DescribeDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosisRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDiagnosisRecordsOutcomeCallable GpdbClient::describeDiagnosisRecordsCallable(const DescribeDiagnosisRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosisRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosisRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDiagnosisSQLInfoOutcome GpdbClient::describeDiagnosisSQLInfo(const DescribeDiagnosisSQLInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosisSQLInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosisSQLInfoOutcome(DescribeDiagnosisSQLInfoResult(outcome.result()));
	else
		return DescribeDiagnosisSQLInfoOutcome(outcome.error());
}

void GpdbClient::describeDiagnosisSQLInfoAsync(const DescribeDiagnosisSQLInfoRequest& request, const DescribeDiagnosisSQLInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosisSQLInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDiagnosisSQLInfoOutcomeCallable GpdbClient::describeDiagnosisSQLInfoCallable(const DescribeDiagnosisSQLInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosisSQLInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosisSQLInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDownloadRecordsOutcome GpdbClient::describeDownloadRecords(const DescribeDownloadRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDownloadRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDownloadRecordsOutcome(DescribeDownloadRecordsResult(outcome.result()));
	else
		return DescribeDownloadRecordsOutcome(outcome.error());
}

void GpdbClient::describeDownloadRecordsAsync(const DescribeDownloadRecordsRequest& request, const DescribeDownloadRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDownloadRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDownloadRecordsOutcomeCallable GpdbClient::describeDownloadRecordsCallable(const DescribeDownloadRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDownloadRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeDownloadRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeDownloadSQLLogsOutcome GpdbClient::describeDownloadSQLLogs(const DescribeDownloadSQLLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDownloadSQLLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDownloadSQLLogsOutcome(DescribeDownloadSQLLogsResult(outcome.result()));
	else
		return DescribeDownloadSQLLogsOutcome(outcome.error());
}

void GpdbClient::describeDownloadSQLLogsAsync(const DescribeDownloadSQLLogsRequest& request, const DescribeDownloadSQLLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDownloadSQLLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeDownloadSQLLogsOutcomeCallable GpdbClient::describeDownloadSQLLogsCallable(const DescribeDownloadSQLLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDownloadSQLLogsOutcome()>>(
			[this, request]()
			{
			return this->describeDownloadSQLLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeHealthStatusOutcome GpdbClient::describeHealthStatus(const DescribeHealthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHealthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHealthStatusOutcome(DescribeHealthStatusResult(outcome.result()));
	else
		return DescribeHealthStatusOutcome(outcome.error());
}

void GpdbClient::describeHealthStatusAsync(const DescribeHealthStatusRequest& request, const DescribeHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHealthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeHealthStatusOutcomeCallable GpdbClient::describeHealthStatusCallable(const DescribeHealthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHealthStatusOutcome()>>(
			[this, request]()
			{
			return this->describeHealthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeLogBackupsOutcome GpdbClient::describeLogBackups(const DescribeLogBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogBackupsOutcome(DescribeLogBackupsResult(outcome.result()));
	else
		return DescribeLogBackupsOutcome(outcome.error());
}

void GpdbClient::describeLogBackupsAsync(const DescribeLogBackupsRequest& request, const DescribeLogBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeLogBackupsOutcomeCallable GpdbClient::describeLogBackupsCallable(const DescribeLogBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeLogBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeModifyParameterLogOutcome GpdbClient::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeModifyParameterLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeModifyParameterLogOutcome(DescribeModifyParameterLogResult(outcome.result()));
	else
		return DescribeModifyParameterLogOutcome(outcome.error());
}

void GpdbClient::describeModifyParameterLogAsync(const DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModifyParameterLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeModifyParameterLogOutcomeCallable GpdbClient::describeModifyParameterLogCallable(const DescribeModifyParameterLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModifyParameterLogOutcome()>>(
			[this, request]()
			{
			return this->describeModifyParameterLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeNamespaceOutcome GpdbClient::describeNamespace(const DescribeNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNamespaceOutcome(DescribeNamespaceResult(outcome.result()));
	else
		return DescribeNamespaceOutcome(outcome.error());
}

void GpdbClient::describeNamespaceAsync(const DescribeNamespaceRequest& request, const DescribeNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeNamespaceOutcomeCallable GpdbClient::describeNamespaceCallable(const DescribeNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNamespaceOutcome()>>(
			[this, request]()
			{
			return this->describeNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeParametersOutcome GpdbClient::describeParameters(const DescribeParametersRequest &request) const
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

void GpdbClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeParametersOutcomeCallable GpdbClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeRdsVSwitchsOutcome GpdbClient::describeRdsVSwitchs(const DescribeRdsVSwitchsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsVSwitchsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsVSwitchsOutcome(DescribeRdsVSwitchsResult(outcome.result()));
	else
		return DescribeRdsVSwitchsOutcome(outcome.error());
}

void GpdbClient::describeRdsVSwitchsAsync(const DescribeRdsVSwitchsRequest& request, const DescribeRdsVSwitchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsVSwitchs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeRdsVSwitchsOutcomeCallable GpdbClient::describeRdsVSwitchsCallable(const DescribeRdsVSwitchsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsVSwitchsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsVSwitchs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeRdsVpcsOutcome GpdbClient::describeRdsVpcs(const DescribeRdsVpcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsVpcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsVpcsOutcome(DescribeRdsVpcsResult(outcome.result()));
	else
		return DescribeRdsVpcsOutcome(outcome.error());
}

void GpdbClient::describeRdsVpcsAsync(const DescribeRdsVpcsRequest& request, const DescribeRdsVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeRdsVpcsOutcomeCallable GpdbClient::describeRdsVpcsCallable(const DescribeRdsVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsVpcsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsVpcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeRegionsOutcome GpdbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void GpdbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeRegionsOutcomeCallable GpdbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeSQLLogCountOutcome GpdbClient::describeSQLLogCount(const DescribeSQLLogCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogCountOutcome(DescribeSQLLogCountResult(outcome.result()));
	else
		return DescribeSQLLogCountOutcome(outcome.error());
}

void GpdbClient::describeSQLLogCountAsync(const DescribeSQLLogCountRequest& request, const DescribeSQLLogCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeSQLLogCountOutcomeCallable GpdbClient::describeSQLLogCountCallable(const DescribeSQLLogCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogCountOutcome()>>(
			[this, request]()
			{
			return this->describeSQLLogCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeSQLLogsV2Outcome GpdbClient::describeSQLLogsV2(const DescribeSQLLogsV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogsV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogsV2Outcome(DescribeSQLLogsV2Result(outcome.result()));
	else
		return DescribeSQLLogsV2Outcome(outcome.error());
}

void GpdbClient::describeSQLLogsV2Async(const DescribeSQLLogsV2Request& request, const DescribeSQLLogsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogsV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeSQLLogsV2OutcomeCallable GpdbClient::describeSQLLogsV2Callable(const DescribeSQLLogsV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogsV2Outcome()>>(
			[this, request]()
			{
			return this->describeSQLLogsV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeSampleDataOutcome GpdbClient::describeSampleData(const DescribeSampleDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSampleDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSampleDataOutcome(DescribeSampleDataResult(outcome.result()));
	else
		return DescribeSampleDataOutcome(outcome.error());
}

void GpdbClient::describeSampleDataAsync(const DescribeSampleDataRequest& request, const DescribeSampleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSampleData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeSampleDataOutcomeCallable GpdbClient::describeSampleDataCallable(const DescribeSampleDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSampleDataOutcome()>>(
			[this, request]()
			{
			return this->describeSampleData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeSupportFeaturesOutcome GpdbClient::describeSupportFeatures(const DescribeSupportFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSupportFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSupportFeaturesOutcome(DescribeSupportFeaturesResult(outcome.result()));
	else
		return DescribeSupportFeaturesOutcome(outcome.error());
}

void GpdbClient::describeSupportFeaturesAsync(const DescribeSupportFeaturesRequest& request, const DescribeSupportFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSupportFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeSupportFeaturesOutcomeCallable GpdbClient::describeSupportFeaturesCallable(const DescribeSupportFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSupportFeaturesOutcome()>>(
			[this, request]()
			{
			return this->describeSupportFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeTagsOutcome GpdbClient::describeTags(const DescribeTagsRequest &request) const
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

void GpdbClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeTagsOutcomeCallable GpdbClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeUserEncryptionKeyListOutcome GpdbClient::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) const
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

void GpdbClient::describeUserEncryptionKeyListAsync(const DescribeUserEncryptionKeyListRequest& request, const DescribeUserEncryptionKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserEncryptionKeyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeUserEncryptionKeyListOutcomeCallable GpdbClient::describeUserEncryptionKeyListCallable(const DescribeUserEncryptionKeyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserEncryptionKeyListOutcome()>>(
			[this, request]()
			{
			return this->describeUserEncryptionKeyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeWaitingSQLInfoOutcome GpdbClient::describeWaitingSQLInfo(const DescribeWaitingSQLInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWaitingSQLInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWaitingSQLInfoOutcome(DescribeWaitingSQLInfoResult(outcome.result()));
	else
		return DescribeWaitingSQLInfoOutcome(outcome.error());
}

void GpdbClient::describeWaitingSQLInfoAsync(const DescribeWaitingSQLInfoRequest& request, const DescribeWaitingSQLInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWaitingSQLInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeWaitingSQLInfoOutcomeCallable GpdbClient::describeWaitingSQLInfoCallable(const DescribeWaitingSQLInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWaitingSQLInfoOutcome()>>(
			[this, request]()
			{
			return this->describeWaitingSQLInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DescribeWaitingSQLRecordsOutcome GpdbClient::describeWaitingSQLRecords(const DescribeWaitingSQLRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWaitingSQLRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWaitingSQLRecordsOutcome(DescribeWaitingSQLRecordsResult(outcome.result()));
	else
		return DescribeWaitingSQLRecordsOutcome(outcome.error());
}

void GpdbClient::describeWaitingSQLRecordsAsync(const DescribeWaitingSQLRecordsRequest& request, const DescribeWaitingSQLRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWaitingSQLRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DescribeWaitingSQLRecordsOutcomeCallable GpdbClient::describeWaitingSQLRecordsCallable(const DescribeWaitingSQLRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWaitingSQLRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeWaitingSQLRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DownloadDiagnosisRecordsOutcome GpdbClient::downloadDiagnosisRecords(const DownloadDiagnosisRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadDiagnosisRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadDiagnosisRecordsOutcome(DownloadDiagnosisRecordsResult(outcome.result()));
	else
		return DownloadDiagnosisRecordsOutcome(outcome.error());
}

void GpdbClient::downloadDiagnosisRecordsAsync(const DownloadDiagnosisRecordsRequest& request, const DownloadDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadDiagnosisRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DownloadDiagnosisRecordsOutcomeCallable GpdbClient::downloadDiagnosisRecordsCallable(const DownloadDiagnosisRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadDiagnosisRecordsOutcome()>>(
			[this, request]()
			{
			return this->downloadDiagnosisRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::DownloadSQLLogsRecordsOutcome GpdbClient::downloadSQLLogsRecords(const DownloadSQLLogsRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadSQLLogsRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadSQLLogsRecordsOutcome(DownloadSQLLogsRecordsResult(outcome.result()));
	else
		return DownloadSQLLogsRecordsOutcome(outcome.error());
}

void GpdbClient::downloadSQLLogsRecordsAsync(const DownloadSQLLogsRecordsRequest& request, const DownloadSQLLogsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadSQLLogsRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::DownloadSQLLogsRecordsOutcomeCallable GpdbClient::downloadSQLLogsRecordsCallable(const DownloadSQLLogsRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadSQLLogsRecordsOutcome()>>(
			[this, request]()
			{
			return this->downloadSQLLogsRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::GrantCollectionOutcome GpdbClient::grantCollection(const GrantCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantCollectionOutcome(GrantCollectionResult(outcome.result()));
	else
		return GrantCollectionOutcome(outcome.error());
}

void GpdbClient::grantCollectionAsync(const GrantCollectionRequest& request, const GrantCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::GrantCollectionOutcomeCallable GpdbClient::grantCollectionCallable(const GrantCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantCollectionOutcome()>>(
			[this, request]()
			{
			return this->grantCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::InitVectorDatabaseOutcome GpdbClient::initVectorDatabase(const InitVectorDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitVectorDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitVectorDatabaseOutcome(InitVectorDatabaseResult(outcome.result()));
	else
		return InitVectorDatabaseOutcome(outcome.error());
}

void GpdbClient::initVectorDatabaseAsync(const InitVectorDatabaseRequest& request, const InitVectorDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initVectorDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::InitVectorDatabaseOutcomeCallable GpdbClient::initVectorDatabaseCallable(const InitVectorDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitVectorDatabaseOutcome()>>(
			[this, request]()
			{
			return this->initVectorDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ListCollectionsOutcome GpdbClient::listCollections(const ListCollectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCollectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCollectionsOutcome(ListCollectionsResult(outcome.result()));
	else
		return ListCollectionsOutcome(outcome.error());
}

void GpdbClient::listCollectionsAsync(const ListCollectionsRequest& request, const ListCollectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCollections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ListCollectionsOutcomeCallable GpdbClient::listCollectionsCallable(const ListCollectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCollectionsOutcome()>>(
			[this, request]()
			{
			return this->listCollections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ListNamespacesOutcome GpdbClient::listNamespaces(const ListNamespacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNamespacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNamespacesOutcome(ListNamespacesResult(outcome.result()));
	else
		return ListNamespacesOutcome(outcome.error());
}

void GpdbClient::listNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ListNamespacesOutcomeCallable GpdbClient::listNamespacesCallable(const ListNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNamespacesOutcome()>>(
			[this, request]()
			{
			return this->listNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ListTagResourcesOutcome GpdbClient::listTagResources(const ListTagResourcesRequest &request) const
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

void GpdbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ListTagResourcesOutcomeCallable GpdbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyAccountDescriptionOutcome GpdbClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void GpdbClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyAccountDescriptionOutcomeCallable GpdbClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyBackupPolicyOutcome GpdbClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
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

void GpdbClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyBackupPolicyOutcomeCallable GpdbClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyDBInstanceConfigOutcome GpdbClient::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) const
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

void GpdbClient::modifyDBInstanceConfigAsync(const ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyDBInstanceConfigOutcomeCallable GpdbClient::modifyDBInstanceConfigCallable(const ModifyDBInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyDBInstanceConnectionStringOutcome GpdbClient::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) const
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

void GpdbClient::modifyDBInstanceConnectionStringAsync(const ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyDBInstanceConnectionStringOutcomeCallable GpdbClient::modifyDBInstanceConnectionStringCallable(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyDBInstanceDescriptionOutcome GpdbClient::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) const
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

void GpdbClient::modifyDBInstanceDescriptionAsync(const ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyDBInstanceDescriptionOutcomeCallable GpdbClient::modifyDBInstanceDescriptionCallable(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyDBInstanceMaintainTimeOutcome GpdbClient::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) const
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

void GpdbClient::modifyDBInstanceMaintainTimeAsync(const ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyDBInstanceMaintainTimeOutcomeCallable GpdbClient::modifyDBInstanceMaintainTimeCallable(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyDBInstanceResourceGroupOutcome GpdbClient::modifyDBInstanceResourceGroup(const ModifyDBInstanceResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceResourceGroupOutcome(ModifyDBInstanceResourceGroupResult(outcome.result()));
	else
		return ModifyDBInstanceResourceGroupOutcome(outcome.error());
}

void GpdbClient::modifyDBInstanceResourceGroupAsync(const ModifyDBInstanceResourceGroupRequest& request, const ModifyDBInstanceResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyDBInstanceResourceGroupOutcomeCallable GpdbClient::modifyDBInstanceResourceGroupCallable(const ModifyDBInstanceResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyDBInstanceSSLOutcome GpdbClient::modifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request) const
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

void GpdbClient::modifyDBInstanceSSLAsync(const ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyDBInstanceSSLOutcomeCallable GpdbClient::modifyDBInstanceSSLCallable(const ModifyDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyParametersOutcome GpdbClient::modifyParameters(const ModifyParametersRequest &request) const
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

void GpdbClient::modifyParametersAsync(const ModifyParametersRequest& request, const ModifyParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyParametersOutcomeCallable GpdbClient::modifyParametersCallable(const ModifyParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParametersOutcome()>>(
			[this, request]()
			{
			return this->modifyParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifySQLCollectorPolicyOutcome GpdbClient::modifySQLCollectorPolicy(const ModifySQLCollectorPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySQLCollectorPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySQLCollectorPolicyOutcome(ModifySQLCollectorPolicyResult(outcome.result()));
	else
		return ModifySQLCollectorPolicyOutcome(outcome.error());
}

void GpdbClient::modifySQLCollectorPolicyAsync(const ModifySQLCollectorPolicyRequest& request, const ModifySQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySQLCollectorPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifySQLCollectorPolicyOutcomeCallable GpdbClient::modifySQLCollectorPolicyCallable(const ModifySQLCollectorPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySQLCollectorPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifySQLCollectorPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifySecurityIpsOutcome GpdbClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
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

void GpdbClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifySecurityIpsOutcomeCallable GpdbClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ModifyVectorConfigurationOutcome GpdbClient::modifyVectorConfiguration(const ModifyVectorConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVectorConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVectorConfigurationOutcome(ModifyVectorConfigurationResult(outcome.result()));
	else
		return ModifyVectorConfigurationOutcome(outcome.error());
}

void GpdbClient::modifyVectorConfigurationAsync(const ModifyVectorConfigurationRequest& request, const ModifyVectorConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVectorConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ModifyVectorConfigurationOutcomeCallable GpdbClient::modifyVectorConfigurationCallable(const ModifyVectorConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVectorConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifyVectorConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::PauseInstanceOutcome GpdbClient::pauseInstance(const PauseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseInstanceOutcome(PauseInstanceResult(outcome.result()));
	else
		return PauseInstanceOutcome(outcome.error());
}

void GpdbClient::pauseInstanceAsync(const PauseInstanceRequest& request, const PauseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::PauseInstanceOutcomeCallable GpdbClient::pauseInstanceCallable(const PauseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseInstanceOutcome()>>(
			[this, request]()
			{
			return this->pauseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::QueryCollectionDataOutcome GpdbClient::queryCollectionData(const QueryCollectionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCollectionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCollectionDataOutcome(QueryCollectionDataResult(outcome.result()));
	else
		return QueryCollectionDataOutcome(outcome.error());
}

void GpdbClient::queryCollectionDataAsync(const QueryCollectionDataRequest& request, const QueryCollectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCollectionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::QueryCollectionDataOutcomeCallable GpdbClient::queryCollectionDataCallable(const QueryCollectionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCollectionDataOutcome()>>(
			[this, request]()
			{
			return this->queryCollectionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::RebalanceDBInstanceOutcome GpdbClient::rebalanceDBInstance(const RebalanceDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebalanceDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebalanceDBInstanceOutcome(RebalanceDBInstanceResult(outcome.result()));
	else
		return RebalanceDBInstanceOutcome(outcome.error());
}

void GpdbClient::rebalanceDBInstanceAsync(const RebalanceDBInstanceRequest& request, const RebalanceDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebalanceDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::RebalanceDBInstanceOutcomeCallable GpdbClient::rebalanceDBInstanceCallable(const RebalanceDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebalanceDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebalanceDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ReleaseInstancePublicConnectionOutcome GpdbClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
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

void GpdbClient::releaseInstancePublicConnectionAsync(const ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ReleaseInstancePublicConnectionOutcomeCallable GpdbClient::releaseInstancePublicConnectionCallable(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ResetAccountPasswordOutcome GpdbClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void GpdbClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ResetAccountPasswordOutcomeCallable GpdbClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::RestartDBInstanceOutcome GpdbClient::restartDBInstance(const RestartDBInstanceRequest &request) const
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

void GpdbClient::restartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::RestartDBInstanceOutcomeCallable GpdbClient::restartDBInstanceCallable(const RestartDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::ResumeInstanceOutcome GpdbClient::resumeInstance(const ResumeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeInstanceOutcome(ResumeInstanceResult(outcome.result()));
	else
		return ResumeInstanceOutcome(outcome.error());
}

void GpdbClient::resumeInstanceAsync(const ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::ResumeInstanceOutcomeCallable GpdbClient::resumeInstanceCallable(const ResumeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeInstanceOutcome()>>(
			[this, request]()
			{
			return this->resumeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::SetDBInstancePlanStatusOutcome GpdbClient::setDBInstancePlanStatus(const SetDBInstancePlanStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDBInstancePlanStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDBInstancePlanStatusOutcome(SetDBInstancePlanStatusResult(outcome.result()));
	else
		return SetDBInstancePlanStatusOutcome(outcome.error());
}

void GpdbClient::setDBInstancePlanStatusAsync(const SetDBInstancePlanStatusRequest& request, const SetDBInstancePlanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDBInstancePlanStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::SetDBInstancePlanStatusOutcomeCallable GpdbClient::setDBInstancePlanStatusCallable(const SetDBInstancePlanStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDBInstancePlanStatusOutcome()>>(
			[this, request]()
			{
			return this->setDBInstancePlanStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::SetDataShareInstanceOutcome GpdbClient::setDataShareInstance(const SetDataShareInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDataShareInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDataShareInstanceOutcome(SetDataShareInstanceResult(outcome.result()));
	else
		return SetDataShareInstanceOutcome(outcome.error());
}

void GpdbClient::setDataShareInstanceAsync(const SetDataShareInstanceRequest& request, const SetDataShareInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDataShareInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::SetDataShareInstanceOutcomeCallable GpdbClient::setDataShareInstanceCallable(const SetDataShareInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDataShareInstanceOutcome()>>(
			[this, request]()
			{
			return this->setDataShareInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::SwitchDBInstanceNetTypeOutcome GpdbClient::switchDBInstanceNetType(const SwitchDBInstanceNetTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchDBInstanceNetTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchDBInstanceNetTypeOutcome(SwitchDBInstanceNetTypeResult(outcome.result()));
	else
		return SwitchDBInstanceNetTypeOutcome(outcome.error());
}

void GpdbClient::switchDBInstanceNetTypeAsync(const SwitchDBInstanceNetTypeRequest& request, const SwitchDBInstanceNetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceNetType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::SwitchDBInstanceNetTypeOutcomeCallable GpdbClient::switchDBInstanceNetTypeCallable(const SwitchDBInstanceNetTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceNetTypeOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceNetType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::TagResourcesOutcome GpdbClient::tagResources(const TagResourcesRequest &request) const
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

void GpdbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::TagResourcesOutcomeCallable GpdbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::UnloadSampleDataOutcome GpdbClient::unloadSampleData(const UnloadSampleDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnloadSampleDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnloadSampleDataOutcome(UnloadSampleDataResult(outcome.result()));
	else
		return UnloadSampleDataOutcome(outcome.error());
}

void GpdbClient::unloadSampleDataAsync(const UnloadSampleDataRequest& request, const UnloadSampleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unloadSampleData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::UnloadSampleDataOutcomeCallable GpdbClient::unloadSampleDataCallable(const UnloadSampleDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnloadSampleDataOutcome()>>(
			[this, request]()
			{
			return this->unloadSampleData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::UntagResourcesOutcome GpdbClient::untagResources(const UntagResourcesRequest &request) const
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

void GpdbClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::UntagResourcesOutcomeCallable GpdbClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::UpdateDBInstancePlanOutcome GpdbClient::updateDBInstancePlan(const UpdateDBInstancePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDBInstancePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDBInstancePlanOutcome(UpdateDBInstancePlanResult(outcome.result()));
	else
		return UpdateDBInstancePlanOutcome(outcome.error());
}

void GpdbClient::updateDBInstancePlanAsync(const UpdateDBInstancePlanRequest& request, const UpdateDBInstancePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDBInstancePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::UpdateDBInstancePlanOutcomeCallable GpdbClient::updateDBInstancePlanCallable(const UpdateDBInstancePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDBInstancePlanOutcome()>>(
			[this, request]()
			{
			return this->updateDBInstancePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::UpgradeDBInstanceOutcome GpdbClient::upgradeDBInstance(const UpgradeDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceOutcome(UpgradeDBInstanceResult(outcome.result()));
	else
		return UpgradeDBInstanceOutcome(outcome.error());
}

void GpdbClient::upgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::UpgradeDBInstanceOutcomeCallable GpdbClient::upgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::UpgradeDBVersionOutcome GpdbClient::upgradeDBVersion(const UpgradeDBVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBVersionOutcome(UpgradeDBVersionResult(outcome.result()));
	else
		return UpgradeDBVersionOutcome(outcome.error());
}

void GpdbClient::upgradeDBVersionAsync(const UpgradeDBVersionRequest& request, const UpgradeDBVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::UpgradeDBVersionOutcomeCallable GpdbClient::upgradeDBVersionCallable(const UpgradeDBVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GpdbClient::UpsertCollectionDataOutcome GpdbClient::upsertCollectionData(const UpsertCollectionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpsertCollectionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpsertCollectionDataOutcome(UpsertCollectionDataResult(outcome.result()));
	else
		return UpsertCollectionDataOutcome(outcome.error());
}

void GpdbClient::upsertCollectionDataAsync(const UpsertCollectionDataRequest& request, const UpsertCollectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upsertCollectionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GpdbClient::UpsertCollectionDataOutcomeCallable GpdbClient::upsertCollectionDataCallable(const UpsertCollectionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpsertCollectionDataOutcome()>>(
			[this, request]()
			{
			return this->upsertCollectionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

