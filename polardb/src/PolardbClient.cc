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

#include <alibabacloud/polardb/PolardbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

namespace
{
	const std::string SERVICE_NAME = "polardb";
}

PolardbClient::PolardbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardb");
}

PolardbClient::PolardbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardb");
}

PolardbClient::PolardbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardb");
}

PolardbClient::~PolardbClient()
{}

PolardbClient::CancelActiveOperationTasksOutcome PolardbClient::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelActiveOperationTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelActiveOperationTasksOutcome(CancelActiveOperationTasksResult(outcome.result()));
	else
		return CancelActiveOperationTasksOutcome(outcome.error());
}

void PolardbClient::cancelActiveOperationTasksAsync(const CancelActiveOperationTasksRequest& request, const CancelActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CancelActiveOperationTasksOutcomeCallable PolardbClient::cancelActiveOperationTasksCallable(const CancelActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->cancelActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CancelScheduleTasksOutcome PolardbClient::cancelScheduleTasks(const CancelScheduleTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelScheduleTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelScheduleTasksOutcome(CancelScheduleTasksResult(outcome.result()));
	else
		return CancelScheduleTasksOutcome(outcome.error());
}

void PolardbClient::cancelScheduleTasksAsync(const CancelScheduleTasksRequest& request, const CancelScheduleTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelScheduleTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CancelScheduleTasksOutcomeCallable PolardbClient::cancelScheduleTasksCallable(const CancelScheduleTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelScheduleTasksOutcome()>>(
			[this, request]()
			{
			return this->cancelScheduleTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CheckAccountNameOutcome PolardbClient::checkAccountName(const CheckAccountNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAccountNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAccountNameOutcome(CheckAccountNameResult(outcome.result()));
	else
		return CheckAccountNameOutcome(outcome.error());
}

void PolardbClient::checkAccountNameAsync(const CheckAccountNameRequest& request, const CheckAccountNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAccountName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CheckAccountNameOutcomeCallable PolardbClient::checkAccountNameCallable(const CheckAccountNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAccountNameOutcome()>>(
			[this, request]()
			{
			return this->checkAccountName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CheckDBNameOutcome PolardbClient::checkDBName(const CheckDBNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDBNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDBNameOutcome(CheckDBNameResult(outcome.result()));
	else
		return CheckDBNameOutcome(outcome.error());
}

void PolardbClient::checkDBNameAsync(const CheckDBNameRequest& request, const CheckDBNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDBName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CheckDBNameOutcomeCallable PolardbClient::checkDBNameCallable(const CheckDBNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDBNameOutcome()>>(
			[this, request]()
			{
			return this->checkDBName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CheckKMSAuthorizedOutcome PolardbClient::checkKMSAuthorized(const CheckKMSAuthorizedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckKMSAuthorizedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckKMSAuthorizedOutcome(CheckKMSAuthorizedResult(outcome.result()));
	else
		return CheckKMSAuthorizedOutcome(outcome.error());
}

void PolardbClient::checkKMSAuthorizedAsync(const CheckKMSAuthorizedRequest& request, const CheckKMSAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkKMSAuthorized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CheckKMSAuthorizedOutcomeCallable PolardbClient::checkKMSAuthorizedCallable(const CheckKMSAuthorizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckKMSAuthorizedOutcome()>>(
			[this, request]()
			{
			return this->checkKMSAuthorized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CheckServiceLinkedRoleOutcome PolardbClient::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) const
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

void PolardbClient::checkServiceLinkedRoleAsync(const CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CheckServiceLinkedRoleOutcomeCallable PolardbClient::checkServiceLinkedRoleCallable(const CheckServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CloseAITaskOutcome PolardbClient::closeAITask(const CloseAITaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseAITaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseAITaskOutcome(CloseAITaskResult(outcome.result()));
	else
		return CloseAITaskOutcome(outcome.error());
}

void PolardbClient::closeAITaskAsync(const CloseAITaskRequest& request, const CloseAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeAITask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CloseAITaskOutcomeCallable PolardbClient::closeAITaskCallable(const CloseAITaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseAITaskOutcome()>>(
			[this, request]()
			{
			return this->closeAITask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CloseDBClusterMigrationOutcome PolardbClient::closeDBClusterMigration(const CloseDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseDBClusterMigrationOutcome(CloseDBClusterMigrationResult(outcome.result()));
	else
		return CloseDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::closeDBClusterMigrationAsync(const CloseDBClusterMigrationRequest& request, const CloseDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CloseDBClusterMigrationOutcomeCallable PolardbClient::closeDBClusterMigrationCallable(const CloseDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->closeDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateAccountOutcome PolardbClient::createAccount(const CreateAccountRequest &request) const
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

void PolardbClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateAccountOutcomeCallable PolardbClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateActivationCodeOutcome PolardbClient::createActivationCode(const CreateActivationCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateActivationCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateActivationCodeOutcome(CreateActivationCodeResult(outcome.result()));
	else
		return CreateActivationCodeOutcome(outcome.error());
}

void PolardbClient::createActivationCodeAsync(const CreateActivationCodeRequest& request, const CreateActivationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createActivationCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateActivationCodeOutcomeCallable PolardbClient::createActivationCodeCallable(const CreateActivationCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateActivationCodeOutcome()>>(
			[this, request]()
			{
			return this->createActivationCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateBackupOutcome PolardbClient::createBackup(const CreateBackupRequest &request) const
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

void PolardbClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateBackupOutcomeCallable PolardbClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateColdStorageInstanceOutcome PolardbClient::createColdStorageInstance(const CreateColdStorageInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateColdStorageInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateColdStorageInstanceOutcome(CreateColdStorageInstanceResult(outcome.result()));
	else
		return CreateColdStorageInstanceOutcome(outcome.error());
}

void PolardbClient::createColdStorageInstanceAsync(const CreateColdStorageInstanceRequest& request, const CreateColdStorageInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createColdStorageInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateColdStorageInstanceOutcomeCallable PolardbClient::createColdStorageInstanceCallable(const CreateColdStorageInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateColdStorageInstanceOutcome()>>(
			[this, request]()
			{
			return this->createColdStorageInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBClusterOutcome PolardbClient::createDBCluster(const CreateDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBClusterOutcome(CreateDBClusterResult(outcome.result()));
	else
		return CreateDBClusterOutcome(outcome.error());
}

void PolardbClient::createDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBClusterOutcomeCallable PolardbClient::createDBClusterCallable(const CreateDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBClusterOutcome()>>(
			[this, request]()
			{
			return this->createDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBClusterEndpointOutcome PolardbClient::createDBClusterEndpoint(const CreateDBClusterEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBClusterEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBClusterEndpointOutcome(CreateDBClusterEndpointResult(outcome.result()));
	else
		return CreateDBClusterEndpointOutcome(outcome.error());
}

void PolardbClient::createDBClusterEndpointAsync(const CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBClusterEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBClusterEndpointOutcomeCallable PolardbClient::createDBClusterEndpointCallable(const CreateDBClusterEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBClusterEndpointOutcome()>>(
			[this, request]()
			{
			return this->createDBClusterEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBEndpointAddressOutcome PolardbClient::createDBEndpointAddress(const CreateDBEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBEndpointAddressOutcome(CreateDBEndpointAddressResult(outcome.result()));
	else
		return CreateDBEndpointAddressOutcome(outcome.error());
}

void PolardbClient::createDBEndpointAddressAsync(const CreateDBEndpointAddressRequest& request, const CreateDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBEndpointAddressOutcomeCallable PolardbClient::createDBEndpointAddressCallable(const CreateDBEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->createDBEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBLinkOutcome PolardbClient::createDBLink(const CreateDBLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBLinkOutcome(CreateDBLinkResult(outcome.result()));
	else
		return CreateDBLinkOutcome(outcome.error());
}

void PolardbClient::createDBLinkAsync(const CreateDBLinkRequest& request, const CreateDBLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBLinkOutcomeCallable PolardbClient::createDBLinkCallable(const CreateDBLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBLinkOutcome()>>(
			[this, request]()
			{
			return this->createDBLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDBNodesOutcome PolardbClient::createDBNodes(const CreateDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBNodesOutcome(CreateDBNodesResult(outcome.result()));
	else
		return CreateDBNodesOutcome(outcome.error());
}

void PolardbClient::createDBNodesAsync(const CreateDBNodesRequest& request, const CreateDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBNodesOutcomeCallable PolardbClient::createDBNodesCallable(const CreateDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBNodesOutcome()>>(
			[this, request]()
			{
			return this->createDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateDatabaseOutcome PolardbClient::createDatabase(const CreateDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatabaseOutcome(CreateDatabaseResult(outcome.result()));
	else
		return CreateDatabaseOutcome(outcome.error());
}

void PolardbClient::createDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDatabaseOutcomeCallable PolardbClient::createDatabaseCallable(const CreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateGlobalDatabaseNetworkOutcome PolardbClient::createGlobalDatabaseNetwork(const CreateGlobalDatabaseNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGlobalDatabaseNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGlobalDatabaseNetworkOutcome(CreateGlobalDatabaseNetworkResult(outcome.result()));
	else
		return CreateGlobalDatabaseNetworkOutcome(outcome.error());
}

void PolardbClient::createGlobalDatabaseNetworkAsync(const CreateGlobalDatabaseNetworkRequest& request, const CreateGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGlobalDatabaseNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateGlobalDatabaseNetworkOutcomeCallable PolardbClient::createGlobalDatabaseNetworkCallable(const CreateGlobalDatabaseNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGlobalDatabaseNetworkOutcome()>>(
			[this, request]()
			{
			return this->createGlobalDatabaseNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateGlobalSecurityIPGroupOutcome PolardbClient::createGlobalSecurityIPGroup(const CreateGlobalSecurityIPGroupRequest &request) const
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

void PolardbClient::createGlobalSecurityIPGroupAsync(const CreateGlobalSecurityIPGroupRequest& request, const CreateGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGlobalSecurityIPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateGlobalSecurityIPGroupOutcomeCallable PolardbClient::createGlobalSecurityIPGroupCallable(const CreateGlobalSecurityIPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGlobalSecurityIPGroupOutcome()>>(
			[this, request]()
			{
			return this->createGlobalSecurityIPGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateOrGetVirtualLicenseOrderOutcome PolardbClient::createOrGetVirtualLicenseOrder(const CreateOrGetVirtualLicenseOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrGetVirtualLicenseOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrGetVirtualLicenseOrderOutcome(CreateOrGetVirtualLicenseOrderResult(outcome.result()));
	else
		return CreateOrGetVirtualLicenseOrderOutcome(outcome.error());
}

void PolardbClient::createOrGetVirtualLicenseOrderAsync(const CreateOrGetVirtualLicenseOrderRequest& request, const CreateOrGetVirtualLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrGetVirtualLicenseOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateOrGetVirtualLicenseOrderOutcomeCallable PolardbClient::createOrGetVirtualLicenseOrderCallable(const CreateOrGetVirtualLicenseOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrGetVirtualLicenseOrderOutcome()>>(
			[this, request]()
			{
			return this->createOrGetVirtualLicenseOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateParameterGroupOutcome PolardbClient::createParameterGroup(const CreateParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateParameterGroupOutcome(CreateParameterGroupResult(outcome.result()));
	else
		return CreateParameterGroupOutcome(outcome.error());
}

void PolardbClient::createParameterGroupAsync(const CreateParameterGroupRequest& request, const CreateParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateParameterGroupOutcomeCallable PolardbClient::createParameterGroupCallable(const CreateParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->createParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateServiceLinkedRoleOutcome PolardbClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
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

void PolardbClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateServiceLinkedRoleOutcomeCallable PolardbClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateStoragePlanOutcome PolardbClient::createStoragePlan(const CreateStoragePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStoragePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStoragePlanOutcome(CreateStoragePlanResult(outcome.result()));
	else
		return CreateStoragePlanOutcome(outcome.error());
}

void PolardbClient::createStoragePlanAsync(const CreateStoragePlanRequest& request, const CreateStoragePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStoragePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateStoragePlanOutcomeCallable PolardbClient::createStoragePlanCallable(const CreateStoragePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStoragePlanOutcome()>>(
			[this, request]()
			{
			return this->createStoragePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteAccountOutcome PolardbClient::deleteAccount(const DeleteAccountRequest &request) const
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

void PolardbClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteAccountOutcomeCallable PolardbClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteBackupOutcome PolardbClient::deleteBackup(const DeleteBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackupOutcome(DeleteBackupResult(outcome.result()));
	else
		return DeleteBackupOutcome(outcome.error());
}

void PolardbClient::deleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteBackupOutcomeCallable PolardbClient::deleteBackupCallable(const DeleteBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupOutcome()>>(
			[this, request]()
			{
			return this->deleteBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBClusterOutcome PolardbClient::deleteDBCluster(const DeleteDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBClusterOutcome(DeleteDBClusterResult(outcome.result()));
	else
		return DeleteDBClusterOutcome(outcome.error());
}

void PolardbClient::deleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBClusterOutcomeCallable PolardbClient::deleteDBClusterCallable(const DeleteDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBClusterEndpointOutcome PolardbClient::deleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBClusterEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBClusterEndpointOutcome(DeleteDBClusterEndpointResult(outcome.result()));
	else
		return DeleteDBClusterEndpointOutcome(outcome.error());
}

void PolardbClient::deleteDBClusterEndpointAsync(const DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBClusterEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBClusterEndpointOutcomeCallable PolardbClient::deleteDBClusterEndpointCallable(const DeleteDBClusterEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterEndpointOutcome()>>(
			[this, request]()
			{
			return this->deleteDBClusterEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBEndpointAddressOutcome PolardbClient::deleteDBEndpointAddress(const DeleteDBEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBEndpointAddressOutcome(DeleteDBEndpointAddressResult(outcome.result()));
	else
		return DeleteDBEndpointAddressOutcome(outcome.error());
}

void PolardbClient::deleteDBEndpointAddressAsync(const DeleteDBEndpointAddressRequest& request, const DeleteDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBEndpointAddressOutcomeCallable PolardbClient::deleteDBEndpointAddressCallable(const DeleteDBEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->deleteDBEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBLinkOutcome PolardbClient::deleteDBLink(const DeleteDBLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBLinkOutcome(DeleteDBLinkResult(outcome.result()));
	else
		return DeleteDBLinkOutcome(outcome.error());
}

void PolardbClient::deleteDBLinkAsync(const DeleteDBLinkRequest& request, const DeleteDBLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBLinkOutcomeCallable PolardbClient::deleteDBLinkCallable(const DeleteDBLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBLinkOutcome()>>(
			[this, request]()
			{
			return this->deleteDBLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDBNodesOutcome PolardbClient::deleteDBNodes(const DeleteDBNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBNodesOutcome(DeleteDBNodesResult(outcome.result()));
	else
		return DeleteDBNodesOutcome(outcome.error());
}

void PolardbClient::deleteDBNodesAsync(const DeleteDBNodesRequest& request, const DeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBNodesOutcomeCallable PolardbClient::deleteDBNodesCallable(const DeleteDBNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBNodesOutcome()>>(
			[this, request]()
			{
			return this->deleteDBNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteDatabaseOutcome PolardbClient::deleteDatabase(const DeleteDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabaseOutcome(DeleteDatabaseResult(outcome.result()));
	else
		return DeleteDatabaseOutcome(outcome.error());
}

void PolardbClient::deleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDatabaseOutcomeCallable PolardbClient::deleteDatabaseCallable(const DeleteDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteGlobalDatabaseNetworkOutcome PolardbClient::deleteGlobalDatabaseNetwork(const DeleteGlobalDatabaseNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGlobalDatabaseNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGlobalDatabaseNetworkOutcome(DeleteGlobalDatabaseNetworkResult(outcome.result()));
	else
		return DeleteGlobalDatabaseNetworkOutcome(outcome.error());
}

void PolardbClient::deleteGlobalDatabaseNetworkAsync(const DeleteGlobalDatabaseNetworkRequest& request, const DeleteGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGlobalDatabaseNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteGlobalDatabaseNetworkOutcomeCallable PolardbClient::deleteGlobalDatabaseNetworkCallable(const DeleteGlobalDatabaseNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGlobalDatabaseNetworkOutcome()>>(
			[this, request]()
			{
			return this->deleteGlobalDatabaseNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteGlobalSecurityIPGroupOutcome PolardbClient::deleteGlobalSecurityIPGroup(const DeleteGlobalSecurityIPGroupRequest &request) const
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

void PolardbClient::deleteGlobalSecurityIPGroupAsync(const DeleteGlobalSecurityIPGroupRequest& request, const DeleteGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGlobalSecurityIPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteGlobalSecurityIPGroupOutcomeCallable PolardbClient::deleteGlobalSecurityIPGroupCallable(const DeleteGlobalSecurityIPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGlobalSecurityIPGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteGlobalSecurityIPGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteMaskingRulesOutcome PolardbClient::deleteMaskingRules(const DeleteMaskingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMaskingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMaskingRulesOutcome(DeleteMaskingRulesResult(outcome.result()));
	else
		return DeleteMaskingRulesOutcome(outcome.error());
}

void PolardbClient::deleteMaskingRulesAsync(const DeleteMaskingRulesRequest& request, const DeleteMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMaskingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteMaskingRulesOutcomeCallable PolardbClient::deleteMaskingRulesCallable(const DeleteMaskingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMaskingRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteMaskingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteParameterGroupOutcome PolardbClient::deleteParameterGroup(const DeleteParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteParameterGroupOutcome(DeleteParameterGroupResult(outcome.result()));
	else
		return DeleteParameterGroupOutcome(outcome.error());
}

void PolardbClient::deleteParameterGroupAsync(const DeleteParameterGroupRequest& request, const DeleteParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteParameterGroupOutcomeCallable PolardbClient::deleteParameterGroupCallable(const DeleteParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeAITaskStatusOutcome PolardbClient::describeAITaskStatus(const DescribeAITaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAITaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAITaskStatusOutcome(DescribeAITaskStatusResult(outcome.result()));
	else
		return DescribeAITaskStatusOutcome(outcome.error());
}

void PolardbClient::describeAITaskStatusAsync(const DescribeAITaskStatusRequest& request, const DescribeAITaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAITaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAITaskStatusOutcomeCallable PolardbClient::describeAITaskStatusCallable(const DescribeAITaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAITaskStatusOutcome()>>(
			[this, request]()
			{
			return this->describeAITaskStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeAccountsOutcome PolardbClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void PolardbClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAccountsOutcomeCallable PolardbClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeActivationCodeDetailsOutcome PolardbClient::describeActivationCodeDetails(const DescribeActivationCodeDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActivationCodeDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActivationCodeDetailsOutcome(DescribeActivationCodeDetailsResult(outcome.result()));
	else
		return DescribeActivationCodeDetailsOutcome(outcome.error());
}

void PolardbClient::describeActivationCodeDetailsAsync(const DescribeActivationCodeDetailsRequest& request, const DescribeActivationCodeDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActivationCodeDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeActivationCodeDetailsOutcomeCallable PolardbClient::describeActivationCodeDetailsCallable(const DescribeActivationCodeDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActivationCodeDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeActivationCodeDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeActivationCodesOutcome PolardbClient::describeActivationCodes(const DescribeActivationCodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActivationCodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActivationCodesOutcome(DescribeActivationCodesResult(outcome.result()));
	else
		return DescribeActivationCodesOutcome(outcome.error());
}

void PolardbClient::describeActivationCodesAsync(const DescribeActivationCodesRequest& request, const DescribeActivationCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActivationCodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeActivationCodesOutcomeCallable PolardbClient::describeActivationCodesCallable(const DescribeActivationCodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActivationCodesOutcome()>>(
			[this, request]()
			{
			return this->describeActivationCodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeActiveOperationTasksOutcome PolardbClient::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) const
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

void PolardbClient::describeActiveOperationTasksAsync(const DescribeActiveOperationTasksRequest& request, const DescribeActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeActiveOperationTasksOutcomeCallable PolardbClient::describeActiveOperationTasksCallable(const DescribeActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeAutoRenewAttributeOutcome PolardbClient::describeAutoRenewAttribute(const DescribeAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoRenewAttributeOutcome(DescribeAutoRenewAttributeResult(outcome.result()));
	else
		return DescribeAutoRenewAttributeOutcome(outcome.error());
}

void PolardbClient::describeAutoRenewAttributeAsync(const DescribeAutoRenewAttributeRequest& request, const DescribeAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAutoRenewAttributeOutcomeCallable PolardbClient::describeAutoRenewAttributeCallable(const DescribeAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeBackupLogsOutcome PolardbClient::describeBackupLogs(const DescribeBackupLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupLogsOutcome(DescribeBackupLogsResult(outcome.result()));
	else
		return DescribeBackupLogsOutcome(outcome.error());
}

void PolardbClient::describeBackupLogsAsync(const DescribeBackupLogsRequest& request, const DescribeBackupLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeBackupLogsOutcomeCallable PolardbClient::describeBackupLogsCallable(const DescribeBackupLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupLogsOutcome()>>(
			[this, request]()
			{
			return this->describeBackupLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeBackupPolicyOutcome PolardbClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
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

void PolardbClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeBackupPolicyOutcomeCallable PolardbClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeBackupTasksOutcome PolardbClient::describeBackupTasks(const DescribeBackupTasksRequest &request) const
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

void PolardbClient::describeBackupTasksAsync(const DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeBackupTasksOutcomeCallable PolardbClient::describeBackupTasksCallable(const DescribeBackupTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupTasksOutcome()>>(
			[this, request]()
			{
			return this->describeBackupTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeBackupsOutcome PolardbClient::describeBackups(const DescribeBackupsRequest &request) const
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

void PolardbClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeBackupsOutcomeCallable PolardbClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeCharacterSetNameOutcome PolardbClient::describeCharacterSetName(const DescribeCharacterSetNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCharacterSetNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCharacterSetNameOutcome(DescribeCharacterSetNameResult(outcome.result()));
	else
		return DescribeCharacterSetNameOutcome(outcome.error());
}

void PolardbClient::describeCharacterSetNameAsync(const DescribeCharacterSetNameRequest& request, const DescribeCharacterSetNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCharacterSetName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeCharacterSetNameOutcomeCallable PolardbClient::describeCharacterSetNameCallable(const DescribeCharacterSetNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCharacterSetNameOutcome()>>(
			[this, request]()
			{
			return this->describeCharacterSetName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeClassListOutcome PolardbClient::describeClassList(const DescribeClassListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClassListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClassListOutcome(DescribeClassListResult(outcome.result()));
	else
		return DescribeClassListOutcome(outcome.error());
}

void PolardbClient::describeClassListAsync(const DescribeClassListRequest& request, const DescribeClassListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClassList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeClassListOutcomeCallable PolardbClient::describeClassListCallable(const DescribeClassListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClassListOutcome()>>(
			[this, request]()
			{
			return this->describeClassList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterAccessWhitelistOutcome PolardbClient::describeDBClusterAccessWhitelist(const DescribeDBClusterAccessWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterAccessWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterAccessWhitelistOutcome(DescribeDBClusterAccessWhitelistResult(outcome.result()));
	else
		return DescribeDBClusterAccessWhitelistOutcome(outcome.error());
}

void PolardbClient::describeDBClusterAccessWhitelistAsync(const DescribeDBClusterAccessWhitelistRequest& request, const DescribeDBClusterAccessWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAccessWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterAccessWhitelistOutcomeCallable PolardbClient::describeDBClusterAccessWhitelistCallable(const DescribeDBClusterAccessWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAccessWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAccessWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterAttributeOutcome PolardbClient::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterAttributeOutcome(DescribeDBClusterAttributeResult(outcome.result()));
	else
		return DescribeDBClusterAttributeOutcome(outcome.error());
}

void PolardbClient::describeDBClusterAttributeAsync(const DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterAttributeOutcomeCallable PolardbClient::describeDBClusterAttributeCallable(const DescribeDBClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterAuditLogCollectorOutcome PolardbClient::describeDBClusterAuditLogCollector(const DescribeDBClusterAuditLogCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterAuditLogCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterAuditLogCollectorOutcome(DescribeDBClusterAuditLogCollectorResult(outcome.result()));
	else
		return DescribeDBClusterAuditLogCollectorOutcome(outcome.error());
}

void PolardbClient::describeDBClusterAuditLogCollectorAsync(const DescribeDBClusterAuditLogCollectorRequest& request, const DescribeDBClusterAuditLogCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAuditLogCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterAuditLogCollectorOutcomeCallable PolardbClient::describeDBClusterAuditLogCollectorCallable(const DescribeDBClusterAuditLogCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAuditLogCollectorOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAuditLogCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterAvailableResourcesOutcome PolardbClient::describeDBClusterAvailableResources(const DescribeDBClusterAvailableResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterAvailableResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterAvailableResourcesOutcome(DescribeDBClusterAvailableResourcesResult(outcome.result()));
	else
		return DescribeDBClusterAvailableResourcesOutcome(outcome.error());
}

void PolardbClient::describeDBClusterAvailableResourcesAsync(const DescribeDBClusterAvailableResourcesRequest& request, const DescribeDBClusterAvailableResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAvailableResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterAvailableResourcesOutcomeCallable PolardbClient::describeDBClusterAvailableResourcesCallable(const DescribeDBClusterAvailableResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAvailableResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAvailableResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterConnectivityOutcome PolardbClient::describeDBClusterConnectivity(const DescribeDBClusterConnectivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterConnectivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterConnectivityOutcome(DescribeDBClusterConnectivityResult(outcome.result()));
	else
		return DescribeDBClusterConnectivityOutcome(outcome.error());
}

void PolardbClient::describeDBClusterConnectivityAsync(const DescribeDBClusterConnectivityRequest& request, const DescribeDBClusterConnectivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterConnectivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterConnectivityOutcomeCallable PolardbClient::describeDBClusterConnectivityCallable(const DescribeDBClusterConnectivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterConnectivityOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterConnectivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterEndpointsOutcome PolardbClient::describeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterEndpointsOutcome(DescribeDBClusterEndpointsResult(outcome.result()));
	else
		return DescribeDBClusterEndpointsOutcome(outcome.error());
}

void PolardbClient::describeDBClusterEndpointsAsync(const DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterEndpointsOutcomeCallable PolardbClient::describeDBClusterEndpointsCallable(const DescribeDBClusterEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterEndpointsOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterMigrationOutcome PolardbClient::describeDBClusterMigration(const DescribeDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterMigrationOutcome(DescribeDBClusterMigrationResult(outcome.result()));
	else
		return DescribeDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::describeDBClusterMigrationAsync(const DescribeDBClusterMigrationRequest& request, const DescribeDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterMigrationOutcomeCallable PolardbClient::describeDBClusterMigrationCallable(const DescribeDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterMonitorOutcome PolardbClient::describeDBClusterMonitor(const DescribeDBClusterMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterMonitorOutcome(DescribeDBClusterMonitorResult(outcome.result()));
	else
		return DescribeDBClusterMonitorOutcome(outcome.error());
}

void PolardbClient::describeDBClusterMonitorAsync(const DescribeDBClusterMonitorRequest& request, const DescribeDBClusterMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterMonitorOutcomeCallable PolardbClient::describeDBClusterMonitorCallable(const DescribeDBClusterMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterParametersOutcome PolardbClient::describeDBClusterParameters(const DescribeDBClusterParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterParametersOutcome(DescribeDBClusterParametersResult(outcome.result()));
	else
		return DescribeDBClusterParametersOutcome(outcome.error());
}

void PolardbClient::describeDBClusterParametersAsync(const DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterParametersOutcomeCallable PolardbClient::describeDBClusterParametersCallable(const DescribeDBClusterParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterParametersOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterPerformanceOutcome PolardbClient::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) const
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

void PolardbClient::describeDBClusterPerformanceAsync(const DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterPerformanceOutcomeCallable PolardbClient::describeDBClusterPerformanceCallable(const DescribeDBClusterPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterSSLOutcome PolardbClient::describeDBClusterSSL(const DescribeDBClusterSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterSSLOutcome(DescribeDBClusterSSLResult(outcome.result()));
	else
		return DescribeDBClusterSSLOutcome(outcome.error());
}

void PolardbClient::describeDBClusterSSLAsync(const DescribeDBClusterSSLRequest& request, const DescribeDBClusterSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterSSLOutcomeCallable PolardbClient::describeDBClusterSSLCallable(const DescribeDBClusterSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterSSLOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterServerlessConfOutcome PolardbClient::describeDBClusterServerlessConf(const DescribeDBClusterServerlessConfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterServerlessConfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterServerlessConfOutcome(DescribeDBClusterServerlessConfResult(outcome.result()));
	else
		return DescribeDBClusterServerlessConfOutcome(outcome.error());
}

void PolardbClient::describeDBClusterServerlessConfAsync(const DescribeDBClusterServerlessConfRequest& request, const DescribeDBClusterServerlessConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterServerlessConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterServerlessConfOutcomeCallable PolardbClient::describeDBClusterServerlessConfCallable(const DescribeDBClusterServerlessConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterServerlessConfOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterServerlessConf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterTDEOutcome PolardbClient::describeDBClusterTDE(const DescribeDBClusterTDERequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterTDEOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterTDEOutcome(DescribeDBClusterTDEResult(outcome.result()));
	else
		return DescribeDBClusterTDEOutcome(outcome.error());
}

void PolardbClient::describeDBClusterTDEAsync(const DescribeDBClusterTDERequest& request, const DescribeDBClusterTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterTDEOutcomeCallable PolardbClient::describeDBClusterTDECallable(const DescribeDBClusterTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterTDEOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClusterVersionOutcome PolardbClient::describeDBClusterVersion(const DescribeDBClusterVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterVersionOutcome(DescribeDBClusterVersionResult(outcome.result()));
	else
		return DescribeDBClusterVersionOutcome(outcome.error());
}

void PolardbClient::describeDBClusterVersionAsync(const DescribeDBClusterVersionRequest& request, const DescribeDBClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterVersionOutcomeCallable PolardbClient::describeDBClusterVersionCallable(const DescribeDBClusterVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterVersionOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClustersOutcome PolardbClient::describeDBClusters(const DescribeDBClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClustersOutcome(DescribeDBClustersResult(outcome.result()));
	else
		return DescribeDBClustersOutcome(outcome.error());
}

void PolardbClient::describeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClustersOutcomeCallable PolardbClient::describeDBClustersCallable(const DescribeDBClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClustersOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBClustersWithBackupsOutcome PolardbClient::describeDBClustersWithBackups(const DescribeDBClustersWithBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClustersWithBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClustersWithBackupsOutcome(DescribeDBClustersWithBackupsResult(outcome.result()));
	else
		return DescribeDBClustersWithBackupsOutcome(outcome.error());
}

void PolardbClient::describeDBClustersWithBackupsAsync(const DescribeDBClustersWithBackupsRequest& request, const DescribeDBClustersWithBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClustersWithBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClustersWithBackupsOutcomeCallable PolardbClient::describeDBClustersWithBackupsCallable(const DescribeDBClustersWithBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClustersWithBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeDBClustersWithBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBInitializeVariableOutcome PolardbClient::describeDBInitializeVariable(const DescribeDBInitializeVariableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInitializeVariableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInitializeVariableOutcome(DescribeDBInitializeVariableResult(outcome.result()));
	else
		return DescribeDBInitializeVariableOutcome(outcome.error());
}

void PolardbClient::describeDBInitializeVariableAsync(const DescribeDBInitializeVariableRequest& request, const DescribeDBInitializeVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInitializeVariable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBInitializeVariableOutcomeCallable PolardbClient::describeDBInitializeVariableCallable(const DescribeDBInitializeVariableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInitializeVariableOutcome()>>(
			[this, request]()
			{
			return this->describeDBInitializeVariable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBLinksOutcome PolardbClient::describeDBLinks(const DescribeDBLinksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBLinksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBLinksOutcome(DescribeDBLinksResult(outcome.result()));
	else
		return DescribeDBLinksOutcome(outcome.error());
}

void PolardbClient::describeDBLinksAsync(const DescribeDBLinksRequest& request, const DescribeDBLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBLinks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBLinksOutcomeCallable PolardbClient::describeDBLinksCallable(const DescribeDBLinksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBLinksOutcome()>>(
			[this, request]()
			{
			return this->describeDBLinks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBNodePerformanceOutcome PolardbClient::describeDBNodePerformance(const DescribeDBNodePerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBNodePerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBNodePerformanceOutcome(DescribeDBNodePerformanceResult(outcome.result()));
	else
		return DescribeDBNodePerformanceOutcome(outcome.error());
}

void PolardbClient::describeDBNodePerformanceAsync(const DescribeDBNodePerformanceRequest& request, const DescribeDBNodePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBNodePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBNodePerformanceOutcomeCallable PolardbClient::describeDBNodePerformanceCallable(const DescribeDBNodePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBNodePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBNodePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBNodesParametersOutcome PolardbClient::describeDBNodesParameters(const DescribeDBNodesParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBNodesParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBNodesParametersOutcome(DescribeDBNodesParametersResult(outcome.result()));
	else
		return DescribeDBNodesParametersOutcome(outcome.error());
}

void PolardbClient::describeDBNodesParametersAsync(const DescribeDBNodesParametersRequest& request, const DescribeDBNodesParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBNodesParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBNodesParametersOutcomeCallable PolardbClient::describeDBNodesParametersCallable(const DescribeDBNodesParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBNodesParametersOutcome()>>(
			[this, request]()
			{
			return this->describeDBNodesParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBProxyPerformanceOutcome PolardbClient::describeDBProxyPerformance(const DescribeDBProxyPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBProxyPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBProxyPerformanceOutcome(DescribeDBProxyPerformanceResult(outcome.result()));
	else
		return DescribeDBProxyPerformanceOutcome(outcome.error());
}

void PolardbClient::describeDBProxyPerformanceAsync(const DescribeDBProxyPerformanceRequest& request, const DescribeDBProxyPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBProxyPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBProxyPerformanceOutcomeCallable PolardbClient::describeDBProxyPerformanceCallable(const DescribeDBProxyPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBProxyPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBProxyPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDasConfigOutcome PolardbClient::describeDasConfig(const DescribeDasConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDasConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDasConfigOutcome(DescribeDasConfigResult(outcome.result()));
	else
		return DescribeDasConfigOutcome(outcome.error());
}

void PolardbClient::describeDasConfigAsync(const DescribeDasConfigRequest& request, const DescribeDasConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDasConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDasConfigOutcomeCallable PolardbClient::describeDasConfigCallable(const DescribeDasConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDasConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDasConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDatabasesOutcome PolardbClient::describeDatabases(const DescribeDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabasesOutcome(DescribeDatabasesResult(outcome.result()));
	else
		return DescribeDatabasesOutcome(outcome.error());
}

void PolardbClient::describeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDatabasesOutcomeCallable PolardbClient::describeDatabasesCallable(const DescribeDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
			[this, request]()
			{
			return this->describeDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDetachedBackupsOutcome PolardbClient::describeDetachedBackups(const DescribeDetachedBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDetachedBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDetachedBackupsOutcome(DescribeDetachedBackupsResult(outcome.result()));
	else
		return DescribeDetachedBackupsOutcome(outcome.error());
}

void PolardbClient::describeDetachedBackupsAsync(const DescribeDetachedBackupsRequest& request, const DescribeDetachedBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDetachedBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDetachedBackupsOutcomeCallable PolardbClient::describeDetachedBackupsCallable(const DescribeDetachedBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDetachedBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeDetachedBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeGlobalDatabaseNetworkOutcome PolardbClient::describeGlobalDatabaseNetwork(const DescribeGlobalDatabaseNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalDatabaseNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalDatabaseNetworkOutcome(DescribeGlobalDatabaseNetworkResult(outcome.result()));
	else
		return DescribeGlobalDatabaseNetworkOutcome(outcome.error());
}

void PolardbClient::describeGlobalDatabaseNetworkAsync(const DescribeGlobalDatabaseNetworkRequest& request, const DescribeGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalDatabaseNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeGlobalDatabaseNetworkOutcomeCallable PolardbClient::describeGlobalDatabaseNetworkCallable(const DescribeGlobalDatabaseNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalDatabaseNetworkOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalDatabaseNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeGlobalDatabaseNetworksOutcome PolardbClient::describeGlobalDatabaseNetworks(const DescribeGlobalDatabaseNetworksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalDatabaseNetworksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalDatabaseNetworksOutcome(DescribeGlobalDatabaseNetworksResult(outcome.result()));
	else
		return DescribeGlobalDatabaseNetworksOutcome(outcome.error());
}

void PolardbClient::describeGlobalDatabaseNetworksAsync(const DescribeGlobalDatabaseNetworksRequest& request, const DescribeGlobalDatabaseNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalDatabaseNetworks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeGlobalDatabaseNetworksOutcomeCallable PolardbClient::describeGlobalDatabaseNetworksCallable(const DescribeGlobalDatabaseNetworksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalDatabaseNetworksOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalDatabaseNetworks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeGlobalSecurityIPGroupOutcome PolardbClient::describeGlobalSecurityIPGroup(const DescribeGlobalSecurityIPGroupRequest &request) const
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

void PolardbClient::describeGlobalSecurityIPGroupAsync(const DescribeGlobalSecurityIPGroupRequest& request, const DescribeGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalSecurityIPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeGlobalSecurityIPGroupOutcomeCallable PolardbClient::describeGlobalSecurityIPGroupCallable(const DescribeGlobalSecurityIPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalSecurityIPGroupOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalSecurityIPGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeGlobalSecurityIPGroupRelationOutcome PolardbClient::describeGlobalSecurityIPGroupRelation(const DescribeGlobalSecurityIPGroupRelationRequest &request) const
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

void PolardbClient::describeGlobalSecurityIPGroupRelationAsync(const DescribeGlobalSecurityIPGroupRelationRequest& request, const DescribeGlobalSecurityIPGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalSecurityIPGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeGlobalSecurityIPGroupRelationOutcomeCallable PolardbClient::describeGlobalSecurityIPGroupRelationCallable(const DescribeGlobalSecurityIPGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalSecurityIPGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalSecurityIPGroupRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeLicenseOrderDetailsOutcome PolardbClient::describeLicenseOrderDetails(const DescribeLicenseOrderDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLicenseOrderDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLicenseOrderDetailsOutcome(DescribeLicenseOrderDetailsResult(outcome.result()));
	else
		return DescribeLicenseOrderDetailsOutcome(outcome.error());
}

void PolardbClient::describeLicenseOrderDetailsAsync(const DescribeLicenseOrderDetailsRequest& request, const DescribeLicenseOrderDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLicenseOrderDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeLicenseOrderDetailsOutcomeCallable PolardbClient::describeLicenseOrderDetailsCallable(const DescribeLicenseOrderDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLicenseOrderDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeLicenseOrderDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeLicenseOrdersOutcome PolardbClient::describeLicenseOrders(const DescribeLicenseOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLicenseOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLicenseOrdersOutcome(DescribeLicenseOrdersResult(outcome.result()));
	else
		return DescribeLicenseOrdersOutcome(outcome.error());
}

void PolardbClient::describeLicenseOrdersAsync(const DescribeLicenseOrdersRequest& request, const DescribeLicenseOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLicenseOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeLicenseOrdersOutcomeCallable PolardbClient::describeLicenseOrdersCallable(const DescribeLicenseOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLicenseOrdersOutcome()>>(
			[this, request]()
			{
			return this->describeLicenseOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeLogBackupPolicyOutcome PolardbClient::describeLogBackupPolicy(const DescribeLogBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogBackupPolicyOutcome(DescribeLogBackupPolicyResult(outcome.result()));
	else
		return DescribeLogBackupPolicyOutcome(outcome.error());
}

void PolardbClient::describeLogBackupPolicyAsync(const DescribeLogBackupPolicyRequest& request, const DescribeLogBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeLogBackupPolicyOutcomeCallable PolardbClient::describeLogBackupPolicyCallable(const DescribeLogBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeLogBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeMaskingRulesOutcome PolardbClient::describeMaskingRules(const DescribeMaskingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMaskingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMaskingRulesOutcome(DescribeMaskingRulesResult(outcome.result()));
	else
		return DescribeMaskingRulesOutcome(outcome.error());
}

void PolardbClient::describeMaskingRulesAsync(const DescribeMaskingRulesRequest& request, const DescribeMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMaskingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeMaskingRulesOutcomeCallable PolardbClient::describeMaskingRulesCallable(const DescribeMaskingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMaskingRulesOutcome()>>(
			[this, request]()
			{
			return this->describeMaskingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeMetaListOutcome PolardbClient::describeMetaList(const DescribeMetaListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetaListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetaListOutcome(DescribeMetaListResult(outcome.result()));
	else
		return DescribeMetaListOutcome(outcome.error());
}

void PolardbClient::describeMetaListAsync(const DescribeMetaListRequest& request, const DescribeMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeMetaListOutcomeCallable PolardbClient::describeMetaListCallable(const DescribeMetaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetaListOutcome()>>(
			[this, request]()
			{
			return this->describeMetaList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeParameterGroupOutcome PolardbClient::describeParameterGroup(const DescribeParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterGroupOutcome(DescribeParameterGroupResult(outcome.result()));
	else
		return DescribeParameterGroupOutcome(outcome.error());
}

void PolardbClient::describeParameterGroupAsync(const DescribeParameterGroupRequest& request, const DescribeParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeParameterGroupOutcomeCallable PolardbClient::describeParameterGroupCallable(const DescribeParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->describeParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeParameterGroupsOutcome PolardbClient::describeParameterGroups(const DescribeParameterGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParameterGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParameterGroupsOutcome(DescribeParameterGroupsResult(outcome.result()));
	else
		return DescribeParameterGroupsOutcome(outcome.error());
}

void PolardbClient::describeParameterGroupsAsync(const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeParameterGroupsOutcomeCallable PolardbClient::describeParameterGroupsCallable(const DescribeParameterGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeParameterGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeParameterTemplatesOutcome PolardbClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
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

void PolardbClient::describeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeParameterTemplatesOutcomeCallable PolardbClient::describeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribePendingMaintenanceActionOutcome PolardbClient::describePendingMaintenanceAction(const DescribePendingMaintenanceActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePendingMaintenanceActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePendingMaintenanceActionOutcome(DescribePendingMaintenanceActionResult(outcome.result()));
	else
		return DescribePendingMaintenanceActionOutcome(outcome.error());
}

void PolardbClient::describePendingMaintenanceActionAsync(const DescribePendingMaintenanceActionRequest& request, const DescribePendingMaintenanceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePendingMaintenanceAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribePendingMaintenanceActionOutcomeCallable PolardbClient::describePendingMaintenanceActionCallable(const DescribePendingMaintenanceActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePendingMaintenanceActionOutcome()>>(
			[this, request]()
			{
			return this->describePendingMaintenanceAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribePendingMaintenanceActionsOutcome PolardbClient::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePendingMaintenanceActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePendingMaintenanceActionsOutcome(DescribePendingMaintenanceActionsResult(outcome.result()));
	else
		return DescribePendingMaintenanceActionsOutcome(outcome.error());
}

void PolardbClient::describePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequest& request, const DescribePendingMaintenanceActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePendingMaintenanceActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribePendingMaintenanceActionsOutcomeCallable PolardbClient::describePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePendingMaintenanceActionsOutcome()>>(
			[this, request]()
			{
			return this->describePendingMaintenanceActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribePolarSQLCollectorPolicyOutcome PolardbClient::describePolarSQLCollectorPolicy(const DescribePolarSQLCollectorPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePolarSQLCollectorPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePolarSQLCollectorPolicyOutcome(DescribePolarSQLCollectorPolicyResult(outcome.result()));
	else
		return DescribePolarSQLCollectorPolicyOutcome(outcome.error());
}

void PolardbClient::describePolarSQLCollectorPolicyAsync(const DescribePolarSQLCollectorPolicyRequest& request, const DescribePolarSQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolarSQLCollectorPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribePolarSQLCollectorPolicyOutcomeCallable PolardbClient::describePolarSQLCollectorPolicyCallable(const DescribePolarSQLCollectorPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePolarSQLCollectorPolicyOutcome()>>(
			[this, request]()
			{
			return this->describePolarSQLCollectorPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeRegionsOutcome PolardbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void PolardbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeRegionsOutcomeCallable PolardbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeScheduleTasksOutcome PolardbClient::describeScheduleTasks(const DescribeScheduleTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScheduleTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScheduleTasksOutcome(DescribeScheduleTasksResult(outcome.result()));
	else
		return DescribeScheduleTasksOutcome(outcome.error());
}

void PolardbClient::describeScheduleTasksAsync(const DescribeScheduleTasksRequest& request, const DescribeScheduleTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScheduleTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeScheduleTasksOutcomeCallable PolardbClient::describeScheduleTasksCallable(const DescribeScheduleTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScheduleTasksOutcome()>>(
			[this, request]()
			{
			return this->describeScheduleTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeSlowLogRecordsOutcome PolardbClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
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

void PolardbClient::describeSlowLogRecordsAsync(const DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeSlowLogRecordsOutcomeCallable PolardbClient::describeSlowLogRecordsCallable(const DescribeSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeSlowLogsOutcome PolardbClient::describeSlowLogs(const DescribeSlowLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowLogsOutcome(DescribeSlowLogsResult(outcome.result()));
	else
		return DescribeSlowLogsOutcome(outcome.error());
}

void PolardbClient::describeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeSlowLogsOutcomeCallable PolardbClient::describeSlowLogsCallable(const DescribeSlowLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeTasksOutcome PolardbClient::describeTasks(const DescribeTasksRequest &request) const
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

void PolardbClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeTasksOutcomeCallable PolardbClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeUserEncryptionKeyListOutcome PolardbClient::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) const
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

void PolardbClient::describeUserEncryptionKeyListAsync(const DescribeUserEncryptionKeyListRequest& request, const DescribeUserEncryptionKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserEncryptionKeyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeUserEncryptionKeyListOutcomeCallable PolardbClient::describeUserEncryptionKeyListCallable(const DescribeUserEncryptionKeyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserEncryptionKeyListOutcome()>>(
			[this, request]()
			{
			return this->describeUserEncryptionKeyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeVSwitchesOutcome PolardbClient::describeVSwitches(const DescribeVSwitchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchesOutcome(DescribeVSwitchesResult(outcome.result()));
	else
		return DescribeVSwitchesOutcome(outcome.error());
}

void PolardbClient::describeVSwitchesAsync(const DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeVSwitchesOutcomeCallable PolardbClient::describeVSwitchesCallable(const DescribeVSwitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DisableDBClusterServerlessOutcome PolardbClient::disableDBClusterServerless(const DisableDBClusterServerlessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDBClusterServerlessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDBClusterServerlessOutcome(DisableDBClusterServerlessResult(outcome.result()));
	else
		return DisableDBClusterServerlessOutcome(outcome.error());
}

void PolardbClient::disableDBClusterServerlessAsync(const DisableDBClusterServerlessRequest& request, const DisableDBClusterServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDBClusterServerless(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DisableDBClusterServerlessOutcomeCallable PolardbClient::disableDBClusterServerlessCallable(const DisableDBClusterServerlessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDBClusterServerlessOutcome()>>(
			[this, request]()
			{
			return this->disableDBClusterServerless(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::EnableDBClusterServerlessOutcome PolardbClient::enableDBClusterServerless(const EnableDBClusterServerlessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDBClusterServerlessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDBClusterServerlessOutcome(EnableDBClusterServerlessResult(outcome.result()));
	else
		return EnableDBClusterServerlessOutcome(outcome.error());
}

void PolardbClient::enableDBClusterServerlessAsync(const EnableDBClusterServerlessRequest& request, const EnableDBClusterServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDBClusterServerless(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::EnableDBClusterServerlessOutcomeCallable PolardbClient::enableDBClusterServerlessCallable(const EnableDBClusterServerlessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDBClusterServerlessOutcome()>>(
			[this, request]()
			{
			return this->enableDBClusterServerless(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::EnableFirewallRulesOutcome PolardbClient::enableFirewallRules(const EnableFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableFirewallRulesOutcome(EnableFirewallRulesResult(outcome.result()));
	else
		return EnableFirewallRulesOutcome(outcome.error());
}

void PolardbClient::enableFirewallRulesAsync(const EnableFirewallRulesRequest& request, const EnableFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::EnableFirewallRulesOutcomeCallable PolardbClient::enableFirewallRulesCallable(const EnableFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->enableFirewallRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::EvaluateRegionResourceOutcome PolardbClient::evaluateRegionResource(const EvaluateRegionResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EvaluateRegionResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EvaluateRegionResourceOutcome(EvaluateRegionResourceResult(outcome.result()));
	else
		return EvaluateRegionResourceOutcome(outcome.error());
}

void PolardbClient::evaluateRegionResourceAsync(const EvaluateRegionResourceRequest& request, const EvaluateRegionResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, evaluateRegionResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::EvaluateRegionResourceOutcomeCallable PolardbClient::evaluateRegionResourceCallable(const EvaluateRegionResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EvaluateRegionResourceOutcome()>>(
			[this, request]()
			{
			return this->evaluateRegionResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::FailoverDBClusterOutcome PolardbClient::failoverDBCluster(const FailoverDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FailoverDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FailoverDBClusterOutcome(FailoverDBClusterResult(outcome.result()));
	else
		return FailoverDBClusterOutcome(outcome.error());
}

void PolardbClient::failoverDBClusterAsync(const FailoverDBClusterRequest& request, const FailoverDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, failoverDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::FailoverDBClusterOutcomeCallable PolardbClient::failoverDBClusterCallable(const FailoverDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FailoverDBClusterOutcome()>>(
			[this, request]()
			{
			return this->failoverDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::GrantAccountPrivilegeOutcome PolardbClient::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) const
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

void PolardbClient::grantAccountPrivilegeAsync(const GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::GrantAccountPrivilegeOutcomeCallable PolardbClient::grantAccountPrivilegeCallable(const GrantAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->grantAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ListTagResourcesOutcome PolardbClient::listTagResources(const ListTagResourcesRequest &request) const
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

void PolardbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ListTagResourcesOutcomeCallable PolardbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ManuallyStartDBClusterOutcome PolardbClient::manuallyStartDBCluster(const ManuallyStartDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManuallyStartDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManuallyStartDBClusterOutcome(ManuallyStartDBClusterResult(outcome.result()));
	else
		return ManuallyStartDBClusterOutcome(outcome.error());
}

void PolardbClient::manuallyStartDBClusterAsync(const ManuallyStartDBClusterRequest& request, const ManuallyStartDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manuallyStartDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ManuallyStartDBClusterOutcomeCallable PolardbClient::manuallyStartDBClusterCallable(const ManuallyStartDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManuallyStartDBClusterOutcome()>>(
			[this, request]()
			{
			return this->manuallyStartDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyAccountDescriptionOutcome PolardbClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void PolardbClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAccountDescriptionOutcomeCallable PolardbClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyAccountPasswordOutcome PolardbClient::modifyAccountPassword(const ModifyAccountPasswordRequest &request) const
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

void PolardbClient::modifyAccountPasswordAsync(const ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAccountPasswordOutcomeCallable PolardbClient::modifyAccountPasswordCallable(const ModifyAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyActiveOperationTasksOutcome PolardbClient::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) const
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

void PolardbClient::modifyActiveOperationTasksAsync(const ModifyActiveOperationTasksRequest& request, const ModifyActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyActiveOperationTasksOutcomeCallable PolardbClient::modifyActiveOperationTasksCallable(const ModifyActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->modifyActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyAutoRenewAttributeOutcome PolardbClient::modifyAutoRenewAttribute(const ModifyAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoRenewAttributeOutcome(ModifyAutoRenewAttributeResult(outcome.result()));
	else
		return ModifyAutoRenewAttributeOutcome(outcome.error());
}

void PolardbClient::modifyAutoRenewAttributeAsync(const ModifyAutoRenewAttributeRequest& request, const ModifyAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAutoRenewAttributeOutcomeCallable PolardbClient::modifyAutoRenewAttributeCallable(const ModifyAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyBackupPolicyOutcome PolardbClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
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

void PolardbClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyBackupPolicyOutcomeCallable PolardbClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterOutcome PolardbClient::modifyDBCluster(const ModifyDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterOutcome(ModifyDBClusterResult(outcome.result()));
	else
		return ModifyDBClusterOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterOutcomeCallable PolardbClient::modifyDBClusterCallable(const ModifyDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterAccessWhitelistOutcome PolardbClient::modifyDBClusterAccessWhitelist(const ModifyDBClusterAccessWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterAccessWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterAccessWhitelistOutcome(ModifyDBClusterAccessWhitelistResult(outcome.result()));
	else
		return ModifyDBClusterAccessWhitelistOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterAccessWhitelistAsync(const ModifyDBClusterAccessWhitelistRequest& request, const ModifyDBClusterAccessWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterAccessWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterAccessWhitelistOutcomeCallable PolardbClient::modifyDBClusterAccessWhitelistCallable(const ModifyDBClusterAccessWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterAccessWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterAccessWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterAndNodesParametersOutcome PolardbClient::modifyDBClusterAndNodesParameters(const ModifyDBClusterAndNodesParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterAndNodesParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterAndNodesParametersOutcome(ModifyDBClusterAndNodesParametersResult(outcome.result()));
	else
		return ModifyDBClusterAndNodesParametersOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterAndNodesParametersAsync(const ModifyDBClusterAndNodesParametersRequest& request, const ModifyDBClusterAndNodesParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterAndNodesParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterAndNodesParametersOutcomeCallable PolardbClient::modifyDBClusterAndNodesParametersCallable(const ModifyDBClusterAndNodesParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterAndNodesParametersOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterAndNodesParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterAuditLogCollectorOutcome PolardbClient::modifyDBClusterAuditLogCollector(const ModifyDBClusterAuditLogCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterAuditLogCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterAuditLogCollectorOutcome(ModifyDBClusterAuditLogCollectorResult(outcome.result()));
	else
		return ModifyDBClusterAuditLogCollectorOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterAuditLogCollectorAsync(const ModifyDBClusterAuditLogCollectorRequest& request, const ModifyDBClusterAuditLogCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterAuditLogCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterAuditLogCollectorOutcomeCallable PolardbClient::modifyDBClusterAuditLogCollectorCallable(const ModifyDBClusterAuditLogCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterAuditLogCollectorOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterAuditLogCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterDeletionOutcome PolardbClient::modifyDBClusterDeletion(const ModifyDBClusterDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterDeletionOutcome(ModifyDBClusterDeletionResult(outcome.result()));
	else
		return ModifyDBClusterDeletionOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterDeletionAsync(const ModifyDBClusterDeletionRequest& request, const ModifyDBClusterDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterDeletionOutcomeCallable PolardbClient::modifyDBClusterDeletionCallable(const ModifyDBClusterDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterDeletionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterDescriptionOutcome PolardbClient::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterDescriptionOutcome(ModifyDBClusterDescriptionResult(outcome.result()));
	else
		return ModifyDBClusterDescriptionOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterDescriptionAsync(const ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterDescriptionOutcomeCallable PolardbClient::modifyDBClusterDescriptionCallable(const ModifyDBClusterDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterEndpointOutcome PolardbClient::modifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterEndpointOutcome(ModifyDBClusterEndpointResult(outcome.result()));
	else
		return ModifyDBClusterEndpointOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterEndpointAsync(const ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterEndpointOutcomeCallable PolardbClient::modifyDBClusterEndpointCallable(const ModifyDBClusterEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterEndpointOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterMaintainTimeOutcome PolardbClient::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterMaintainTimeOutcome(ModifyDBClusterMaintainTimeResult(outcome.result()));
	else
		return ModifyDBClusterMaintainTimeOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterMaintainTimeAsync(const ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterMaintainTimeOutcomeCallable PolardbClient::modifyDBClusterMaintainTimeCallable(const ModifyDBClusterMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterMigrationOutcome PolardbClient::modifyDBClusterMigration(const ModifyDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterMigrationOutcome(ModifyDBClusterMigrationResult(outcome.result()));
	else
		return ModifyDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterMigrationAsync(const ModifyDBClusterMigrationRequest& request, const ModifyDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterMigrationOutcomeCallable PolardbClient::modifyDBClusterMigrationCallable(const ModifyDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterMonitorOutcome PolardbClient::modifyDBClusterMonitor(const ModifyDBClusterMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterMonitorOutcome(ModifyDBClusterMonitorResult(outcome.result()));
	else
		return ModifyDBClusterMonitorOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterMonitorAsync(const ModifyDBClusterMonitorRequest& request, const ModifyDBClusterMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterMonitorOutcomeCallable PolardbClient::modifyDBClusterMonitorCallable(const ModifyDBClusterMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMonitorOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterParametersOutcome PolardbClient::modifyDBClusterParameters(const ModifyDBClusterParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterParametersOutcome(ModifyDBClusterParametersResult(outcome.result()));
	else
		return ModifyDBClusterParametersOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterParametersAsync(const ModifyDBClusterParametersRequest& request, const ModifyDBClusterParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterParametersOutcomeCallable PolardbClient::modifyDBClusterParametersCallable(const ModifyDBClusterParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterParametersOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterPrimaryZoneOutcome PolardbClient::modifyDBClusterPrimaryZone(const ModifyDBClusterPrimaryZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterPrimaryZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterPrimaryZoneOutcome(ModifyDBClusterPrimaryZoneResult(outcome.result()));
	else
		return ModifyDBClusterPrimaryZoneOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterPrimaryZoneAsync(const ModifyDBClusterPrimaryZoneRequest& request, const ModifyDBClusterPrimaryZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterPrimaryZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterPrimaryZoneOutcomeCallable PolardbClient::modifyDBClusterPrimaryZoneCallable(const ModifyDBClusterPrimaryZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterPrimaryZoneOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterPrimaryZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterResourceGroupOutcome PolardbClient::modifyDBClusterResourceGroup(const ModifyDBClusterResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterResourceGroupOutcome(ModifyDBClusterResourceGroupResult(outcome.result()));
	else
		return ModifyDBClusterResourceGroupOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterResourceGroupAsync(const ModifyDBClusterResourceGroupRequest& request, const ModifyDBClusterResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterResourceGroupOutcomeCallable PolardbClient::modifyDBClusterResourceGroupCallable(const ModifyDBClusterResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterSSLOutcome PolardbClient::modifyDBClusterSSL(const ModifyDBClusterSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterSSLOutcome(ModifyDBClusterSSLResult(outcome.result()));
	else
		return ModifyDBClusterSSLOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterSSLAsync(const ModifyDBClusterSSLRequest& request, const ModifyDBClusterSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterSSLOutcomeCallable PolardbClient::modifyDBClusterSSLCallable(const ModifyDBClusterSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterSSLOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterServerlessConfOutcome PolardbClient::modifyDBClusterServerlessConf(const ModifyDBClusterServerlessConfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterServerlessConfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterServerlessConfOutcome(ModifyDBClusterServerlessConfResult(outcome.result()));
	else
		return ModifyDBClusterServerlessConfOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterServerlessConfAsync(const ModifyDBClusterServerlessConfRequest& request, const ModifyDBClusterServerlessConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterServerlessConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterServerlessConfOutcomeCallable PolardbClient::modifyDBClusterServerlessConfCallable(const ModifyDBClusterServerlessConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterServerlessConfOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterServerlessConf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterStoragePerformanceOutcome PolardbClient::modifyDBClusterStoragePerformance(const ModifyDBClusterStoragePerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterStoragePerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterStoragePerformanceOutcome(ModifyDBClusterStoragePerformanceResult(outcome.result()));
	else
		return ModifyDBClusterStoragePerformanceOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterStoragePerformanceAsync(const ModifyDBClusterStoragePerformanceRequest& request, const ModifyDBClusterStoragePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterStoragePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterStoragePerformanceOutcomeCallable PolardbClient::modifyDBClusterStoragePerformanceCallable(const ModifyDBClusterStoragePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterStoragePerformanceOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterStoragePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterStorageSpaceOutcome PolardbClient::modifyDBClusterStorageSpace(const ModifyDBClusterStorageSpaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterStorageSpaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterStorageSpaceOutcome(ModifyDBClusterStorageSpaceResult(outcome.result()));
	else
		return ModifyDBClusterStorageSpaceOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterStorageSpaceAsync(const ModifyDBClusterStorageSpaceRequest& request, const ModifyDBClusterStorageSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterStorageSpace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterStorageSpaceOutcomeCallable PolardbClient::modifyDBClusterStorageSpaceCallable(const ModifyDBClusterStorageSpaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterStorageSpaceOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterStorageSpace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBClusterTDEOutcome PolardbClient::modifyDBClusterTDE(const ModifyDBClusterTDERequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterTDEOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterTDEOutcome(ModifyDBClusterTDEResult(outcome.result()));
	else
		return ModifyDBClusterTDEOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterTDEAsync(const ModifyDBClusterTDERequest& request, const ModifyDBClusterTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterTDEOutcomeCallable PolardbClient::modifyDBClusterTDECallable(const ModifyDBClusterTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterTDEOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBDescriptionOutcome PolardbClient::modifyDBDescription(const ModifyDBDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBDescriptionOutcome(ModifyDBDescriptionResult(outcome.result()));
	else
		return ModifyDBDescriptionOutcome(outcome.error());
}

void PolardbClient::modifyDBDescriptionAsync(const ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBDescriptionOutcomeCallable PolardbClient::modifyDBDescriptionCallable(const ModifyDBDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBEndpointAddressOutcome PolardbClient::modifyDBEndpointAddress(const ModifyDBEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBEndpointAddressOutcome(ModifyDBEndpointAddressResult(outcome.result()));
	else
		return ModifyDBEndpointAddressOutcome(outcome.error());
}

void PolardbClient::modifyDBEndpointAddressAsync(const ModifyDBEndpointAddressRequest& request, const ModifyDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBEndpointAddressOutcomeCallable PolardbClient::modifyDBEndpointAddressCallable(const ModifyDBEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->modifyDBEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBNodeClassOutcome PolardbClient::modifyDBNodeClass(const ModifyDBNodeClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodeClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodeClassOutcome(ModifyDBNodeClassResult(outcome.result()));
	else
		return ModifyDBNodeClassOutcome(outcome.error());
}

void PolardbClient::modifyDBNodeClassAsync(const ModifyDBNodeClassRequest& request, const ModifyDBNodeClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNodeClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBNodeClassOutcomeCallable PolardbClient::modifyDBNodeClassCallable(const ModifyDBNodeClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodeClassOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNodeClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBNodeHotReplicaModeOutcome PolardbClient::modifyDBNodeHotReplicaMode(const ModifyDBNodeHotReplicaModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodeHotReplicaModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodeHotReplicaModeOutcome(ModifyDBNodeHotReplicaModeResult(outcome.result()));
	else
		return ModifyDBNodeHotReplicaModeOutcome(outcome.error());
}

void PolardbClient::modifyDBNodeHotReplicaModeAsync(const ModifyDBNodeHotReplicaModeRequest& request, const ModifyDBNodeHotReplicaModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNodeHotReplicaMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBNodeHotReplicaModeOutcomeCallable PolardbClient::modifyDBNodeHotReplicaModeCallable(const ModifyDBNodeHotReplicaModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodeHotReplicaModeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNodeHotReplicaMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBNodesClassOutcome PolardbClient::modifyDBNodesClass(const ModifyDBNodesClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodesClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodesClassOutcome(ModifyDBNodesClassResult(outcome.result()));
	else
		return ModifyDBNodesClassOutcome(outcome.error());
}

void PolardbClient::modifyDBNodesClassAsync(const ModifyDBNodesClassRequest& request, const ModifyDBNodesClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNodesClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBNodesClassOutcomeCallable PolardbClient::modifyDBNodesClassCallable(const ModifyDBNodesClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodesClassOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNodesClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBNodesParametersOutcome PolardbClient::modifyDBNodesParameters(const ModifyDBNodesParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodesParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodesParametersOutcome(ModifyDBNodesParametersResult(outcome.result()));
	else
		return ModifyDBNodesParametersOutcome(outcome.error());
}

void PolardbClient::modifyDBNodesParametersAsync(const ModifyDBNodesParametersRequest& request, const ModifyDBNodesParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNodesParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBNodesParametersOutcomeCallable PolardbClient::modifyDBNodesParametersCallable(const ModifyDBNodesParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodesParametersOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNodesParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyGlobalDatabaseNetworkOutcome PolardbClient::modifyGlobalDatabaseNetwork(const ModifyGlobalDatabaseNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalDatabaseNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalDatabaseNetworkOutcome(ModifyGlobalDatabaseNetworkResult(outcome.result()));
	else
		return ModifyGlobalDatabaseNetworkOutcome(outcome.error());
}

void PolardbClient::modifyGlobalDatabaseNetworkAsync(const ModifyGlobalDatabaseNetworkRequest& request, const ModifyGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalDatabaseNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyGlobalDatabaseNetworkOutcomeCallable PolardbClient::modifyGlobalDatabaseNetworkCallable(const ModifyGlobalDatabaseNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalDatabaseNetworkOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalDatabaseNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyGlobalSecurityIPGroupOutcome PolardbClient::modifyGlobalSecurityIPGroup(const ModifyGlobalSecurityIPGroupRequest &request) const
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

void PolardbClient::modifyGlobalSecurityIPGroupAsync(const ModifyGlobalSecurityIPGroupRequest& request, const ModifyGlobalSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalSecurityIPGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyGlobalSecurityIPGroupOutcomeCallable PolardbClient::modifyGlobalSecurityIPGroupCallable(const ModifyGlobalSecurityIPGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalSecurityIPGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalSecurityIPGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyGlobalSecurityIPGroupNameOutcome PolardbClient::modifyGlobalSecurityIPGroupName(const ModifyGlobalSecurityIPGroupNameRequest &request) const
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

void PolardbClient::modifyGlobalSecurityIPGroupNameAsync(const ModifyGlobalSecurityIPGroupNameRequest& request, const ModifyGlobalSecurityIPGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalSecurityIPGroupName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyGlobalSecurityIPGroupNameOutcomeCallable PolardbClient::modifyGlobalSecurityIPGroupNameCallable(const ModifyGlobalSecurityIPGroupNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalSecurityIPGroupNameOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalSecurityIPGroupName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyGlobalSecurityIPGroupRelationOutcome PolardbClient::modifyGlobalSecurityIPGroupRelation(const ModifyGlobalSecurityIPGroupRelationRequest &request) const
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

void PolardbClient::modifyGlobalSecurityIPGroupRelationAsync(const ModifyGlobalSecurityIPGroupRelationRequest& request, const ModifyGlobalSecurityIPGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalSecurityIPGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyGlobalSecurityIPGroupRelationOutcomeCallable PolardbClient::modifyGlobalSecurityIPGroupRelationCallable(const ModifyGlobalSecurityIPGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalSecurityIPGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalSecurityIPGroupRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyLogBackupPolicyOutcome PolardbClient::modifyLogBackupPolicy(const ModifyLogBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLogBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLogBackupPolicyOutcome(ModifyLogBackupPolicyResult(outcome.result()));
	else
		return ModifyLogBackupPolicyOutcome(outcome.error());
}

void PolardbClient::modifyLogBackupPolicyAsync(const ModifyLogBackupPolicyRequest& request, const ModifyLogBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLogBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyLogBackupPolicyOutcomeCallable PolardbClient::modifyLogBackupPolicyCallable(const ModifyLogBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLogBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyLogBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyMaskingRulesOutcome PolardbClient::modifyMaskingRules(const ModifyMaskingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMaskingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMaskingRulesOutcome(ModifyMaskingRulesResult(outcome.result()));
	else
		return ModifyMaskingRulesOutcome(outcome.error());
}

void PolardbClient::modifyMaskingRulesAsync(const ModifyMaskingRulesRequest& request, const ModifyMaskingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMaskingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyMaskingRulesOutcomeCallable PolardbClient::modifyMaskingRulesCallable(const ModifyMaskingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMaskingRulesOutcome()>>(
			[this, request]()
			{
			return this->modifyMaskingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyPendingMaintenanceActionOutcome PolardbClient::modifyPendingMaintenanceAction(const ModifyPendingMaintenanceActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPendingMaintenanceActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPendingMaintenanceActionOutcome(ModifyPendingMaintenanceActionResult(outcome.result()));
	else
		return ModifyPendingMaintenanceActionOutcome(outcome.error());
}

void PolardbClient::modifyPendingMaintenanceActionAsync(const ModifyPendingMaintenanceActionRequest& request, const ModifyPendingMaintenanceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPendingMaintenanceAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyPendingMaintenanceActionOutcomeCallable PolardbClient::modifyPendingMaintenanceActionCallable(const ModifyPendingMaintenanceActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPendingMaintenanceActionOutcome()>>(
			[this, request]()
			{
			return this->modifyPendingMaintenanceAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::OpenAITaskOutcome PolardbClient::openAITask(const OpenAITaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenAITaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenAITaskOutcome(OpenAITaskResult(outcome.result()));
	else
		return OpenAITaskOutcome(outcome.error());
}

void PolardbClient::openAITaskAsync(const OpenAITaskRequest& request, const OpenAITaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openAITask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::OpenAITaskOutcomeCallable PolardbClient::openAITaskCallable(const OpenAITaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenAITaskOutcome()>>(
			[this, request]()
			{
			return this->openAITask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::RefreshDBClusterStorageUsageOutcome PolardbClient::refreshDBClusterStorageUsage(const RefreshDBClusterStorageUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshDBClusterStorageUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshDBClusterStorageUsageOutcome(RefreshDBClusterStorageUsageResult(outcome.result()));
	else
		return RefreshDBClusterStorageUsageOutcome(outcome.error());
}

void PolardbClient::refreshDBClusterStorageUsageAsync(const RefreshDBClusterStorageUsageRequest& request, const RefreshDBClusterStorageUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshDBClusterStorageUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RefreshDBClusterStorageUsageOutcomeCallable PolardbClient::refreshDBClusterStorageUsageCallable(const RefreshDBClusterStorageUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshDBClusterStorageUsageOutcome()>>(
			[this, request]()
			{
			return this->refreshDBClusterStorageUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::RemoveDBClusterFromGDNOutcome PolardbClient::removeDBClusterFromGDN(const RemoveDBClusterFromGDNRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveDBClusterFromGDNOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveDBClusterFromGDNOutcome(RemoveDBClusterFromGDNResult(outcome.result()));
	else
		return RemoveDBClusterFromGDNOutcome(outcome.error());
}

void PolardbClient::removeDBClusterFromGDNAsync(const RemoveDBClusterFromGDNRequest& request, const RemoveDBClusterFromGDNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeDBClusterFromGDN(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RemoveDBClusterFromGDNOutcomeCallable PolardbClient::removeDBClusterFromGDNCallable(const RemoveDBClusterFromGDNRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveDBClusterFromGDNOutcome()>>(
			[this, request]()
			{
			return this->removeDBClusterFromGDN(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ResetAccountOutcome PolardbClient::resetAccount(const ResetAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountOutcome(ResetAccountResult(outcome.result()));
	else
		return ResetAccountOutcome(outcome.error());
}

void PolardbClient::resetAccountAsync(const ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ResetAccountOutcomeCallable PolardbClient::resetAccountCallable(const ResetAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountOutcome()>>(
			[this, request]()
			{
			return this->resetAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ResetGlobalDatabaseNetworkOutcome PolardbClient::resetGlobalDatabaseNetwork(const ResetGlobalDatabaseNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetGlobalDatabaseNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetGlobalDatabaseNetworkOutcome(ResetGlobalDatabaseNetworkResult(outcome.result()));
	else
		return ResetGlobalDatabaseNetworkOutcome(outcome.error());
}

void PolardbClient::resetGlobalDatabaseNetworkAsync(const ResetGlobalDatabaseNetworkRequest& request, const ResetGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetGlobalDatabaseNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ResetGlobalDatabaseNetworkOutcomeCallable PolardbClient::resetGlobalDatabaseNetworkCallable(const ResetGlobalDatabaseNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetGlobalDatabaseNetworkOutcome()>>(
			[this, request]()
			{
			return this->resetGlobalDatabaseNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::RestartDBLinkOutcome PolardbClient::restartDBLink(const RestartDBLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDBLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDBLinkOutcome(RestartDBLinkResult(outcome.result()));
	else
		return RestartDBLinkOutcome(outcome.error());
}

void PolardbClient::restartDBLinkAsync(const RestartDBLinkRequest& request, const RestartDBLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RestartDBLinkOutcomeCallable PolardbClient::restartDBLinkCallable(const RestartDBLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBLinkOutcome()>>(
			[this, request]()
			{
			return this->restartDBLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::RestartDBNodeOutcome PolardbClient::restartDBNode(const RestartDBNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDBNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDBNodeOutcome(RestartDBNodeResult(outcome.result()));
	else
		return RestartDBNodeOutcome(outcome.error());
}

void PolardbClient::restartDBNodeAsync(const RestartDBNodeRequest& request, const RestartDBNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RestartDBNodeOutcomeCallable PolardbClient::restartDBNodeCallable(const RestartDBNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBNodeOutcome()>>(
			[this, request]()
			{
			return this->restartDBNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::RestoreTableOutcome PolardbClient::restoreTable(const RestoreTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreTableOutcome(RestoreTableResult(outcome.result()));
	else
		return RestoreTableOutcome(outcome.error());
}

void PolardbClient::restoreTableAsync(const RestoreTableRequest& request, const RestoreTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RestoreTableOutcomeCallable PolardbClient::restoreTableCallable(const RestoreTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreTableOutcome()>>(
			[this, request]()
			{
			return this->restoreTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::RevokeAccountPrivilegeOutcome PolardbClient::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeAccountPrivilegeOutcome(RevokeAccountPrivilegeResult(outcome.result()));
	else
		return RevokeAccountPrivilegeOutcome(outcome.error());
}

void PolardbClient::revokeAccountPrivilegeAsync(const RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RevokeAccountPrivilegeOutcomeCallable PolardbClient::revokeAccountPrivilegeCallable(const RevokeAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->revokeAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::SwitchOverGlobalDatabaseNetworkOutcome PolardbClient::switchOverGlobalDatabaseNetwork(const SwitchOverGlobalDatabaseNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchOverGlobalDatabaseNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchOverGlobalDatabaseNetworkOutcome(SwitchOverGlobalDatabaseNetworkResult(outcome.result()));
	else
		return SwitchOverGlobalDatabaseNetworkOutcome(outcome.error());
}

void PolardbClient::switchOverGlobalDatabaseNetworkAsync(const SwitchOverGlobalDatabaseNetworkRequest& request, const SwitchOverGlobalDatabaseNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchOverGlobalDatabaseNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::SwitchOverGlobalDatabaseNetworkOutcomeCallable PolardbClient::switchOverGlobalDatabaseNetworkCallable(const SwitchOverGlobalDatabaseNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchOverGlobalDatabaseNetworkOutcome()>>(
			[this, request]()
			{
			return this->switchOverGlobalDatabaseNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::TagResourcesOutcome PolardbClient::tagResources(const TagResourcesRequest &request) const
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

void PolardbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::TagResourcesOutcomeCallable PolardbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::TempModifyDBNodeOutcome PolardbClient::tempModifyDBNode(const TempModifyDBNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TempModifyDBNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TempModifyDBNodeOutcome(TempModifyDBNodeResult(outcome.result()));
	else
		return TempModifyDBNodeOutcome(outcome.error());
}

void PolardbClient::tempModifyDBNodeAsync(const TempModifyDBNodeRequest& request, const TempModifyDBNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tempModifyDBNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::TempModifyDBNodeOutcomeCallable PolardbClient::tempModifyDBNodeCallable(const TempModifyDBNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TempModifyDBNodeOutcome()>>(
			[this, request]()
			{
			return this->tempModifyDBNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::TransformDBClusterPayTypeOutcome PolardbClient::transformDBClusterPayType(const TransformDBClusterPayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformDBClusterPayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformDBClusterPayTypeOutcome(TransformDBClusterPayTypeResult(outcome.result()));
	else
		return TransformDBClusterPayTypeOutcome(outcome.error());
}

void PolardbClient::transformDBClusterPayTypeAsync(const TransformDBClusterPayTypeRequest& request, const TransformDBClusterPayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformDBClusterPayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::TransformDBClusterPayTypeOutcomeCallable PolardbClient::transformDBClusterPayTypeCallable(const TransformDBClusterPayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformDBClusterPayTypeOutcome()>>(
			[this, request]()
			{
			return this->transformDBClusterPayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::UntagResourcesOutcome PolardbClient::untagResources(const UntagResourcesRequest &request) const
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

void PolardbClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::UntagResourcesOutcomeCallable PolardbClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::UpgradeDBClusterVersionOutcome PolardbClient::upgradeDBClusterVersion(const UpgradeDBClusterVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBClusterVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBClusterVersionOutcome(UpgradeDBClusterVersionResult(outcome.result()));
	else
		return UpgradeDBClusterVersionOutcome(outcome.error());
}

void PolardbClient::upgradeDBClusterVersionAsync(const UpgradeDBClusterVersionRequest& request, const UpgradeDBClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBClusterVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::UpgradeDBClusterVersionOutcomeCallable PolardbClient::upgradeDBClusterVersionCallable(const UpgradeDBClusterVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBClusterVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBClusterVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

