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

#include <alibabacloud/rds/RdsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

namespace
{
	const std::string SERVICE_NAME = "Rds";
}

RdsClient::RdsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rds");
}

RdsClient::RdsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rds");
}

RdsClient::RdsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rds");
}

RdsClient::~RdsClient()
{}

RdsClient::AddTagsToResourceOutcome RdsClient::addTagsToResource(const AddTagsToResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagsToResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagsToResourceOutcome(AddTagsToResourceResult(outcome.result()));
	else
		return AddTagsToResourceOutcome(outcome.error());
}

void RdsClient::addTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTagsToResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AddTagsToResourceOutcomeCallable RdsClient::addTagsToResourceCallable(const AddTagsToResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsToResourceOutcome()>>(
			[this, request]()
			{
			return this->addTagsToResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AllocateInstancePublicConnectionOutcome RdsClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
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

void RdsClient::allocateInstancePublicConnectionAsync(const AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AllocateInstancePublicConnectionOutcomeCallable RdsClient::allocateInstancePublicConnectionCallable(const AllocateInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AllocateReadWriteSplittingConnectionOutcome RdsClient::allocateReadWriteSplittingConnection(const AllocateReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateReadWriteSplittingConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateReadWriteSplittingConnectionOutcome(AllocateReadWriteSplittingConnectionResult(outcome.result()));
	else
		return AllocateReadWriteSplittingConnectionOutcome(outcome.error());
}

void RdsClient::allocateReadWriteSplittingConnectionAsync(const AllocateReadWriteSplittingConnectionRequest& request, const AllocateReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateReadWriteSplittingConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AllocateReadWriteSplittingConnectionOutcomeCallable RdsClient::allocateReadWriteSplittingConnectionCallable(const AllocateReadWriteSplittingConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateReadWriteSplittingConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateReadWriteSplittingConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CalculateDBInstanceWeightOutcome RdsClient::calculateDBInstanceWeight(const CalculateDBInstanceWeightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CalculateDBInstanceWeightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CalculateDBInstanceWeightOutcome(CalculateDBInstanceWeightResult(outcome.result()));
	else
		return CalculateDBInstanceWeightOutcome(outcome.error());
}

void RdsClient::calculateDBInstanceWeightAsync(const CalculateDBInstanceWeightRequest& request, const CalculateDBInstanceWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, calculateDBInstanceWeight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CalculateDBInstanceWeightOutcomeCallable RdsClient::calculateDBInstanceWeightCallable(const CalculateDBInstanceWeightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CalculateDBInstanceWeightOutcome()>>(
			[this, request]()
			{
			return this->calculateDBInstanceWeight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CancelImportOutcome RdsClient::cancelImport(const CancelImportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelImportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelImportOutcome(CancelImportResult(outcome.result()));
	else
		return CancelImportOutcome(outcome.error());
}

void RdsClient::cancelImportAsync(const CancelImportRequest& request, const CancelImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelImport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CancelImportOutcomeCallable RdsClient::cancelImportCallable(const CancelImportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelImportOutcome()>>(
			[this, request]()
			{
			return this->cancelImport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckAccountNameAvailableOutcome RdsClient::checkAccountNameAvailable(const CheckAccountNameAvailableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAccountNameAvailableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAccountNameAvailableOutcome(CheckAccountNameAvailableResult(outcome.result()));
	else
		return CheckAccountNameAvailableOutcome(outcome.error());
}

void RdsClient::checkAccountNameAvailableAsync(const CheckAccountNameAvailableRequest& request, const CheckAccountNameAvailableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAccountNameAvailable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckAccountNameAvailableOutcomeCallable RdsClient::checkAccountNameAvailableCallable(const CheckAccountNameAvailableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAccountNameAvailableOutcome()>>(
			[this, request]()
			{
			return this->checkAccountNameAvailable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckCreateDdrDBInstanceOutcome RdsClient::checkCreateDdrDBInstance(const CheckCreateDdrDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCreateDdrDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCreateDdrDBInstanceOutcome(CheckCreateDdrDBInstanceResult(outcome.result()));
	else
		return CheckCreateDdrDBInstanceOutcome(outcome.error());
}

void RdsClient::checkCreateDdrDBInstanceAsync(const CheckCreateDdrDBInstanceRequest& request, const CheckCreateDdrDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCreateDdrDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckCreateDdrDBInstanceOutcomeCallable RdsClient::checkCreateDdrDBInstanceCallable(const CheckCreateDdrDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCreateDdrDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->checkCreateDdrDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckDBNameAvailableOutcome RdsClient::checkDBNameAvailable(const CheckDBNameAvailableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDBNameAvailableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDBNameAvailableOutcome(CheckDBNameAvailableResult(outcome.result()));
	else
		return CheckDBNameAvailableOutcome(outcome.error());
}

void RdsClient::checkDBNameAvailableAsync(const CheckDBNameAvailableRequest& request, const CheckDBNameAvailableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDBNameAvailable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckDBNameAvailableOutcomeCallable RdsClient::checkDBNameAvailableCallable(const CheckDBNameAvailableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDBNameAvailableOutcome()>>(
			[this, request]()
			{
			return this->checkDBNameAvailable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckInstanceExistOutcome RdsClient::checkInstanceExist(const CheckInstanceExistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckInstanceExistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckInstanceExistOutcome(CheckInstanceExistResult(outcome.result()));
	else
		return CheckInstanceExistOutcome(outcome.error());
}

void RdsClient::checkInstanceExistAsync(const CheckInstanceExistRequest& request, const CheckInstanceExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkInstanceExist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckInstanceExistOutcomeCallable RdsClient::checkInstanceExistCallable(const CheckInstanceExistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckInstanceExistOutcome()>>(
			[this, request]()
			{
			return this->checkInstanceExist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckRecoveryConditionsOutcome RdsClient::checkRecoveryConditions(const CheckRecoveryConditionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckRecoveryConditionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckRecoveryConditionsOutcome(CheckRecoveryConditionsResult(outcome.result()));
	else
		return CheckRecoveryConditionsOutcome(outcome.error());
}

void RdsClient::checkRecoveryConditionsAsync(const CheckRecoveryConditionsRequest& request, const CheckRecoveryConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkRecoveryConditions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckRecoveryConditionsOutcomeCallable RdsClient::checkRecoveryConditionsCallable(const CheckRecoveryConditionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckRecoveryConditionsOutcome()>>(
			[this, request]()
			{
			return this->checkRecoveryConditions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ClearDedicatedHostOutcome RdsClient::clearDedicatedHost(const ClearDedicatedHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearDedicatedHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearDedicatedHostOutcome(ClearDedicatedHostResult(outcome.result()));
	else
		return ClearDedicatedHostOutcome(outcome.error());
}

void RdsClient::clearDedicatedHostAsync(const ClearDedicatedHostRequest& request, const ClearDedicatedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearDedicatedHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ClearDedicatedHostOutcomeCallable RdsClient::clearDedicatedHostCallable(const ClearDedicatedHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearDedicatedHostOutcome()>>(
			[this, request]()
			{
			return this->clearDedicatedHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CloneDBInstanceOutcome RdsClient::cloneDBInstance(const CloneDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneDBInstanceOutcome(CloneDBInstanceResult(outcome.result()));
	else
		return CloneDBInstanceOutcome(outcome.error());
}

void RdsClient::cloneDBInstanceAsync(const CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CloneDBInstanceOutcomeCallable RdsClient::cloneDBInstanceCallable(const CloneDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->cloneDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CloneParameterGroupOutcome RdsClient::cloneParameterGroup(const CloneParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneParameterGroupOutcome(CloneParameterGroupResult(outcome.result()));
	else
		return CloneParameterGroupOutcome(outcome.error());
}

void RdsClient::cloneParameterGroupAsync(const CloneParameterGroupRequest& request, const CloneParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CloneParameterGroupOutcomeCallable RdsClient::cloneParameterGroupCallable(const CloneParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->cloneParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CopyDatabaseOutcome RdsClient::copyDatabase(const CopyDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyDatabaseOutcome(CopyDatabaseResult(outcome.result()));
	else
		return CopyDatabaseOutcome(outcome.error());
}

void RdsClient::copyDatabaseAsync(const CopyDatabaseRequest& request, const CopyDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CopyDatabaseOutcomeCallable RdsClient::copyDatabaseCallable(const CopyDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyDatabaseOutcome()>>(
			[this, request]()
			{
			return this->copyDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CopyDatabaseBetweenInstancesOutcome RdsClient::copyDatabaseBetweenInstances(const CopyDatabaseBetweenInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyDatabaseBetweenInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyDatabaseBetweenInstancesOutcome(CopyDatabaseBetweenInstancesResult(outcome.result()));
	else
		return CopyDatabaseBetweenInstancesOutcome(outcome.error());
}

void RdsClient::copyDatabaseBetweenInstancesAsync(const CopyDatabaseBetweenInstancesRequest& request, const CopyDatabaseBetweenInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyDatabaseBetweenInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CopyDatabaseBetweenInstancesOutcomeCallable RdsClient::copyDatabaseBetweenInstancesCallable(const CopyDatabaseBetweenInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyDatabaseBetweenInstancesOutcome()>>(
			[this, request]()
			{
			return this->copyDatabaseBetweenInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateAccountOutcome RdsClient::createAccount(const CreateAccountRequest &request) const
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

void RdsClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateAccountOutcomeCallable RdsClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateBackupOutcome RdsClient::createBackup(const CreateBackupRequest &request) const
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

void RdsClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateBackupOutcomeCallable RdsClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBInstanceOutcome RdsClient::createDBInstance(const CreateDBInstanceRequest &request) const
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

void RdsClient::createDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBInstanceOutcomeCallable RdsClient::createDBInstanceCallable(const CreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDatabaseOutcome RdsClient::createDatabase(const CreateDatabaseRequest &request) const
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

void RdsClient::createDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDatabaseOutcomeCallable RdsClient::createDatabaseCallable(const CreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDdrInstanceOutcome RdsClient::createDdrInstance(const CreateDdrInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDdrInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDdrInstanceOutcome(CreateDdrInstanceResult(outcome.result()));
	else
		return CreateDdrInstanceOutcome(outcome.error());
}

void RdsClient::createDdrInstanceAsync(const CreateDdrInstanceRequest& request, const CreateDdrInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDdrInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDdrInstanceOutcomeCallable RdsClient::createDdrInstanceCallable(const CreateDdrInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDdrInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDdrInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDedicatedHostOutcome RdsClient::createDedicatedHost(const CreateDedicatedHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDedicatedHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDedicatedHostOutcome(CreateDedicatedHostResult(outcome.result()));
	else
		return CreateDedicatedHostOutcome(outcome.error());
}

void RdsClient::createDedicatedHostAsync(const CreateDedicatedHostRequest& request, const CreateDedicatedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDedicatedHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDedicatedHostOutcomeCallable RdsClient::createDedicatedHostCallable(const CreateDedicatedHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDedicatedHostOutcome()>>(
			[this, request]()
			{
			return this->createDedicatedHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDedicatedHostAccountOutcome RdsClient::createDedicatedHostAccount(const CreateDedicatedHostAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDedicatedHostAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDedicatedHostAccountOutcome(CreateDedicatedHostAccountResult(outcome.result()));
	else
		return CreateDedicatedHostAccountOutcome(outcome.error());
}

void RdsClient::createDedicatedHostAccountAsync(const CreateDedicatedHostAccountRequest& request, const CreateDedicatedHostAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDedicatedHostAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDedicatedHostAccountOutcomeCallable RdsClient::createDedicatedHostAccountCallable(const CreateDedicatedHostAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDedicatedHostAccountOutcome()>>(
			[this, request]()
			{
			return this->createDedicatedHostAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDedicatedHostGroupOutcome RdsClient::createDedicatedHostGroup(const CreateDedicatedHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDedicatedHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDedicatedHostGroupOutcome(CreateDedicatedHostGroupResult(outcome.result()));
	else
		return CreateDedicatedHostGroupOutcome(outcome.error());
}

void RdsClient::createDedicatedHostGroupAsync(const CreateDedicatedHostGroupRequest& request, const CreateDedicatedHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDedicatedHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDedicatedHostGroupOutcomeCallable RdsClient::createDedicatedHostGroupCallable(const CreateDedicatedHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDedicatedHostGroupOutcome()>>(
			[this, request]()
			{
			return this->createDedicatedHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDedicatedHostUserOutcome RdsClient::createDedicatedHostUser(const CreateDedicatedHostUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDedicatedHostUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDedicatedHostUserOutcome(CreateDedicatedHostUserResult(outcome.result()));
	else
		return CreateDedicatedHostUserOutcome(outcome.error());
}

void RdsClient::createDedicatedHostUserAsync(const CreateDedicatedHostUserRequest& request, const CreateDedicatedHostUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDedicatedHostUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDedicatedHostUserOutcomeCallable RdsClient::createDedicatedHostUserCallable(const CreateDedicatedHostUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDedicatedHostUserOutcome()>>(
			[this, request]()
			{
			return this->createDedicatedHostUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDiagnosticReportOutcome RdsClient::createDiagnosticReport(const CreateDiagnosticReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDiagnosticReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDiagnosticReportOutcome(CreateDiagnosticReportResult(outcome.result()));
	else
		return CreateDiagnosticReportOutcome(outcome.error());
}

void RdsClient::createDiagnosticReportAsync(const CreateDiagnosticReportRequest& request, const CreateDiagnosticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDiagnosticReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDiagnosticReportOutcomeCallable RdsClient::createDiagnosticReportCallable(const CreateDiagnosticReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDiagnosticReportOutcome()>>(
			[this, request]()
			{
			return this->createDiagnosticReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateHostAccountOutcome RdsClient::createHostAccount(const CreateHostAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHostAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHostAccountOutcome(CreateHostAccountResult(outcome.result()));
	else
		return CreateHostAccountOutcome(outcome.error());
}

void RdsClient::createHostAccountAsync(const CreateHostAccountRequest& request, const CreateHostAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHostAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateHostAccountOutcomeCallable RdsClient::createHostAccountCallable(const CreateHostAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHostAccountOutcome()>>(
			[this, request]()
			{
			return this->createHostAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateMigrateTaskOutcome RdsClient::createMigrateTask(const CreateMigrateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMigrateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMigrateTaskOutcome(CreateMigrateTaskResult(outcome.result()));
	else
		return CreateMigrateTaskOutcome(outcome.error());
}

void RdsClient::createMigrateTaskAsync(const CreateMigrateTaskRequest& request, const CreateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMigrateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateMigrateTaskOutcomeCallable RdsClient::createMigrateTaskCallable(const CreateMigrateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMigrateTaskOutcome()>>(
			[this, request]()
			{
			return this->createMigrateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateMigrateTaskForSQLServerOutcome RdsClient::createMigrateTaskForSQLServer(const CreateMigrateTaskForSQLServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMigrateTaskForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMigrateTaskForSQLServerOutcome(CreateMigrateTaskForSQLServerResult(outcome.result()));
	else
		return CreateMigrateTaskForSQLServerOutcome(outcome.error());
}

void RdsClient::createMigrateTaskForSQLServerAsync(const CreateMigrateTaskForSQLServerRequest& request, const CreateMigrateTaskForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMigrateTaskForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateMigrateTaskForSQLServerOutcomeCallable RdsClient::createMigrateTaskForSQLServerCallable(const CreateMigrateTaskForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMigrateTaskForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->createMigrateTaskForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateOnlineDatabaseTaskOutcome RdsClient::createOnlineDatabaseTask(const CreateOnlineDatabaseTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOnlineDatabaseTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOnlineDatabaseTaskOutcome(CreateOnlineDatabaseTaskResult(outcome.result()));
	else
		return CreateOnlineDatabaseTaskOutcome(outcome.error());
}

void RdsClient::createOnlineDatabaseTaskAsync(const CreateOnlineDatabaseTaskRequest& request, const CreateOnlineDatabaseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOnlineDatabaseTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateOnlineDatabaseTaskOutcomeCallable RdsClient::createOnlineDatabaseTaskCallable(const CreateOnlineDatabaseTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOnlineDatabaseTaskOutcome()>>(
			[this, request]()
			{
			return this->createOnlineDatabaseTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateParameterGroupOutcome RdsClient::createParameterGroup(const CreateParameterGroupRequest &request) const
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

void RdsClient::createParameterGroupAsync(const CreateParameterGroupRequest& request, const CreateParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateParameterGroupOutcomeCallable RdsClient::createParameterGroupCallable(const CreateParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->createParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateReadOnlyDBInstanceOutcome RdsClient::createReadOnlyDBInstance(const CreateReadOnlyDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateReadOnlyDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateReadOnlyDBInstanceOutcome(CreateReadOnlyDBInstanceResult(outcome.result()));
	else
		return CreateReadOnlyDBInstanceOutcome(outcome.error());
}

void RdsClient::createReadOnlyDBInstanceAsync(const CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createReadOnlyDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateReadOnlyDBInstanceOutcomeCallable RdsClient::createReadOnlyDBInstanceCallable(const CreateReadOnlyDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateReadOnlyDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createReadOnlyDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateTempDBInstanceOutcome RdsClient::createTempDBInstance(const CreateTempDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTempDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTempDBInstanceOutcome(CreateTempDBInstanceResult(outcome.result()));
	else
		return CreateTempDBInstanceOutcome(outcome.error());
}

void RdsClient::createTempDBInstanceAsync(const CreateTempDBInstanceRequest& request, const CreateTempDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTempDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateTempDBInstanceOutcomeCallable RdsClient::createTempDBInstanceCallable(const CreateTempDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTempDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createTempDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteAccountOutcome RdsClient::deleteAccount(const DeleteAccountRequest &request) const
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

void RdsClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteAccountOutcomeCallable RdsClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteBackupOutcome RdsClient::deleteBackup(const DeleteBackupRequest &request) const
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

void RdsClient::deleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteBackupOutcomeCallable RdsClient::deleteBackupCallable(const DeleteBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupOutcome()>>(
			[this, request]()
			{
			return this->deleteBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteBackupFileOutcome RdsClient::deleteBackupFile(const DeleteBackupFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackupFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackupFileOutcome(DeleteBackupFileResult(outcome.result()));
	else
		return DeleteBackupFileOutcome(outcome.error());
}

void RdsClient::deleteBackupFileAsync(const DeleteBackupFileRequest& request, const DeleteBackupFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackupFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteBackupFileOutcomeCallable RdsClient::deleteBackupFileCallable(const DeleteBackupFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupFileOutcome()>>(
			[this, request]()
			{
			return this->deleteBackupFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDBInstanceOutcome RdsClient::deleteDBInstance(const DeleteDBInstanceRequest &request) const
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

void RdsClient::deleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDBInstanceOutcomeCallable RdsClient::deleteDBInstanceCallable(const DeleteDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDatabaseOutcome RdsClient::deleteDatabase(const DeleteDatabaseRequest &request) const
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

void RdsClient::deleteDatabaseAsync(const DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDatabaseOutcomeCallable RdsClient::deleteDatabaseCallable(const DeleteDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDedicatedHostAccountOutcome RdsClient::deleteDedicatedHostAccount(const DeleteDedicatedHostAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDedicatedHostAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDedicatedHostAccountOutcome(DeleteDedicatedHostAccountResult(outcome.result()));
	else
		return DeleteDedicatedHostAccountOutcome(outcome.error());
}

void RdsClient::deleteDedicatedHostAccountAsync(const DeleteDedicatedHostAccountRequest& request, const DeleteDedicatedHostAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDedicatedHostAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDedicatedHostAccountOutcomeCallable RdsClient::deleteDedicatedHostAccountCallable(const DeleteDedicatedHostAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDedicatedHostAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteDedicatedHostAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDedicatedHostGroupOutcome RdsClient::deleteDedicatedHostGroup(const DeleteDedicatedHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDedicatedHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDedicatedHostGroupOutcome(DeleteDedicatedHostGroupResult(outcome.result()));
	else
		return DeleteDedicatedHostGroupOutcome(outcome.error());
}

void RdsClient::deleteDedicatedHostGroupAsync(const DeleteDedicatedHostGroupRequest& request, const DeleteDedicatedHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDedicatedHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDedicatedHostGroupOutcomeCallable RdsClient::deleteDedicatedHostGroupCallable(const DeleteDedicatedHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDedicatedHostGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDedicatedHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteHostAccountOutcome RdsClient::deleteHostAccount(const DeleteHostAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHostAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHostAccountOutcome(DeleteHostAccountResult(outcome.result()));
	else
		return DeleteHostAccountOutcome(outcome.error());
}

void RdsClient::deleteHostAccountAsync(const DeleteHostAccountRequest& request, const DeleteHostAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHostAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteHostAccountOutcomeCallable RdsClient::deleteHostAccountCallable(const DeleteHostAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHostAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteHostAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteParameterGroupOutcome RdsClient::deleteParameterGroup(const DeleteParameterGroupRequest &request) const
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

void RdsClient::deleteParameterGroupAsync(const DeleteParameterGroupRequest& request, const DeleteParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteParameterGroupOutcomeCallable RdsClient::deleteParameterGroupCallable(const DeleteParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescibeImportsFromDatabaseOutcome RdsClient::descibeImportsFromDatabase(const DescibeImportsFromDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescibeImportsFromDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescibeImportsFromDatabaseOutcome(DescibeImportsFromDatabaseResult(outcome.result()));
	else
		return DescibeImportsFromDatabaseOutcome(outcome.error());
}

void RdsClient::descibeImportsFromDatabaseAsync(const DescibeImportsFromDatabaseRequest& request, const DescibeImportsFromDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, descibeImportsFromDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescibeImportsFromDatabaseOutcomeCallable RdsClient::descibeImportsFromDatabaseCallable(const DescibeImportsFromDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescibeImportsFromDatabaseOutcome()>>(
			[this, request]()
			{
			return this->descibeImportsFromDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAccountsOutcome RdsClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void RdsClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAccountsOutcomeCallable RdsClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeActionEventPolicyOutcome RdsClient::describeActionEventPolicy(const DescribeActionEventPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActionEventPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActionEventPolicyOutcome(DescribeActionEventPolicyResult(outcome.result()));
	else
		return DescribeActionEventPolicyOutcome(outcome.error());
}

void RdsClient::describeActionEventPolicyAsync(const DescribeActionEventPolicyRequest& request, const DescribeActionEventPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActionEventPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeActionEventPolicyOutcomeCallable RdsClient::describeActionEventPolicyCallable(const DescribeActionEventPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActionEventPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeActionEventPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableClassesOutcome RdsClient::describeAvailableClasses(const DescribeAvailableClassesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableClassesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableClassesOutcome(DescribeAvailableClassesResult(outcome.result()));
	else
		return DescribeAvailableClassesOutcome(outcome.error());
}

void RdsClient::describeAvailableClassesAsync(const DescribeAvailableClassesRequest& request, const DescribeAvailableClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableClasses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableClassesOutcomeCallable RdsClient::describeAvailableClassesCallable(const DescribeAvailableClassesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableClassesOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableClasses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableCrossRegionOutcome RdsClient::describeAvailableCrossRegion(const DescribeAvailableCrossRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableCrossRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableCrossRegionOutcome(DescribeAvailableCrossRegionResult(outcome.result()));
	else
		return DescribeAvailableCrossRegionOutcome(outcome.error());
}

void RdsClient::describeAvailableCrossRegionAsync(const DescribeAvailableCrossRegionRequest& request, const DescribeAvailableCrossRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableCrossRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableCrossRegionOutcomeCallable RdsClient::describeAvailableCrossRegionCallable(const DescribeAvailableCrossRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableCrossRegionOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableCrossRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableDedicatedHostClassesOutcome RdsClient::describeAvailableDedicatedHostClasses(const DescribeAvailableDedicatedHostClassesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableDedicatedHostClassesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableDedicatedHostClassesOutcome(DescribeAvailableDedicatedHostClassesResult(outcome.result()));
	else
		return DescribeAvailableDedicatedHostClassesOutcome(outcome.error());
}

void RdsClient::describeAvailableDedicatedHostClassesAsync(const DescribeAvailableDedicatedHostClassesRequest& request, const DescribeAvailableDedicatedHostClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableDedicatedHostClasses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableDedicatedHostClassesOutcomeCallable RdsClient::describeAvailableDedicatedHostClassesCallable(const DescribeAvailableDedicatedHostClassesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableDedicatedHostClassesOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableDedicatedHostClasses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableDedicatedHostZonesOutcome RdsClient::describeAvailableDedicatedHostZones(const DescribeAvailableDedicatedHostZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableDedicatedHostZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableDedicatedHostZonesOutcome(DescribeAvailableDedicatedHostZonesResult(outcome.result()));
	else
		return DescribeAvailableDedicatedHostZonesOutcome(outcome.error());
}

void RdsClient::describeAvailableDedicatedHostZonesAsync(const DescribeAvailableDedicatedHostZonesRequest& request, const DescribeAvailableDedicatedHostZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableDedicatedHostZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableDedicatedHostZonesOutcomeCallable RdsClient::describeAvailableDedicatedHostZonesCallable(const DescribeAvailableDedicatedHostZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableDedicatedHostZonesOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableDedicatedHostZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableRecoveryTimeOutcome RdsClient::describeAvailableRecoveryTime(const DescribeAvailableRecoveryTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableRecoveryTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableRecoveryTimeOutcome(DescribeAvailableRecoveryTimeResult(outcome.result()));
	else
		return DescribeAvailableRecoveryTimeOutcome(outcome.error());
}

void RdsClient::describeAvailableRecoveryTimeAsync(const DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableRecoveryTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableRecoveryTimeOutcomeCallable RdsClient::describeAvailableRecoveryTimeCallable(const DescribeAvailableRecoveryTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableRecoveryTimeOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableRecoveryTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableResourceOutcome RdsClient::describeAvailableResource(const DescribeAvailableResourceRequest &request) const
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

void RdsClient::describeAvailableResourceAsync(const DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableResourceOutcomeCallable RdsClient::describeAvailableResourceCallable(const DescribeAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeAvailableZonesOutcome RdsClient::describeAvailableZones(const DescribeAvailableZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableZonesOutcome(DescribeAvailableZonesResult(outcome.result()));
	else
		return DescribeAvailableZonesOutcome(outcome.error());
}

void RdsClient::describeAvailableZonesAsync(const DescribeAvailableZonesRequest& request, const DescribeAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableZonesOutcomeCallable RdsClient::describeAvailableZonesCallable(const DescribeAvailableZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableZonesOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupDatabaseOutcome RdsClient::describeBackupDatabase(const DescribeBackupDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupDatabaseOutcome(DescribeBackupDatabaseResult(outcome.result()));
	else
		return DescribeBackupDatabaseOutcome(outcome.error());
}

void RdsClient::describeBackupDatabaseAsync(const DescribeBackupDatabaseRequest& request, const DescribeBackupDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupDatabaseOutcomeCallable RdsClient::describeBackupDatabaseCallable(const DescribeBackupDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupDatabaseOutcome()>>(
			[this, request]()
			{
			return this->describeBackupDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupPolicyOutcome RdsClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
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

void RdsClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupPolicyOutcomeCallable RdsClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupTasksOutcome RdsClient::describeBackupTasks(const DescribeBackupTasksRequest &request) const
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

void RdsClient::describeBackupTasksAsync(const DescribeBackupTasksRequest& request, const DescribeBackupTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupTasksOutcomeCallable RdsClient::describeBackupTasksCallable(const DescribeBackupTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupTasksOutcome()>>(
			[this, request]()
			{
			return this->describeBackupTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupsOutcome RdsClient::describeBackups(const DescribeBackupsRequest &request) const
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

void RdsClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupsOutcomeCallable RdsClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBinlogFilesOutcome RdsClient::describeBinlogFiles(const DescribeBinlogFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBinlogFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBinlogFilesOutcome(DescribeBinlogFilesResult(outcome.result()));
	else
		return DescribeBinlogFilesOutcome(outcome.error());
}

void RdsClient::describeBinlogFilesAsync(const DescribeBinlogFilesRequest& request, const DescribeBinlogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBinlogFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBinlogFilesOutcomeCallable RdsClient::describeBinlogFilesCallable(const DescribeBinlogFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBinlogFilesOutcome()>>(
			[this, request]()
			{
			return this->describeBinlogFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCharacterSetNameOutcome RdsClient::describeCharacterSetName(const DescribeCharacterSetNameRequest &request) const
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

void RdsClient::describeCharacterSetNameAsync(const DescribeCharacterSetNameRequest& request, const DescribeCharacterSetNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCharacterSetName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCharacterSetNameOutcomeCallable RdsClient::describeCharacterSetNameCallable(const DescribeCharacterSetNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCharacterSetNameOutcome()>>(
			[this, request]()
			{
			return this->describeCharacterSetName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCollationTimeZonesOutcome RdsClient::describeCollationTimeZones(const DescribeCollationTimeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCollationTimeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCollationTimeZonesOutcome(DescribeCollationTimeZonesResult(outcome.result()));
	else
		return DescribeCollationTimeZonesOutcome(outcome.error());
}

void RdsClient::describeCollationTimeZonesAsync(const DescribeCollationTimeZonesRequest& request, const DescribeCollationTimeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCollationTimeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCollationTimeZonesOutcomeCallable RdsClient::describeCollationTimeZonesCallable(const DescribeCollationTimeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCollationTimeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeCollationTimeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCrossBackupMetaListOutcome RdsClient::describeCrossBackupMetaList(const DescribeCrossBackupMetaListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossBackupMetaListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossBackupMetaListOutcome(DescribeCrossBackupMetaListResult(outcome.result()));
	else
		return DescribeCrossBackupMetaListOutcome(outcome.error());
}

void RdsClient::describeCrossBackupMetaListAsync(const DescribeCrossBackupMetaListRequest& request, const DescribeCrossBackupMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossBackupMetaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCrossBackupMetaListOutcomeCallable RdsClient::describeCrossBackupMetaListCallable(const DescribeCrossBackupMetaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossBackupMetaListOutcome()>>(
			[this, request]()
			{
			return this->describeCrossBackupMetaList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCrossRegionBackupDBInstanceOutcome RdsClient::describeCrossRegionBackupDBInstance(const DescribeCrossRegionBackupDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossRegionBackupDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossRegionBackupDBInstanceOutcome(DescribeCrossRegionBackupDBInstanceResult(outcome.result()));
	else
		return DescribeCrossRegionBackupDBInstanceOutcome(outcome.error());
}

void RdsClient::describeCrossRegionBackupDBInstanceAsync(const DescribeCrossRegionBackupDBInstanceRequest& request, const DescribeCrossRegionBackupDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossRegionBackupDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCrossRegionBackupDBInstanceOutcomeCallable RdsClient::describeCrossRegionBackupDBInstanceCallable(const DescribeCrossRegionBackupDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossRegionBackupDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeCrossRegionBackupDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCrossRegionBackupsOutcome RdsClient::describeCrossRegionBackups(const DescribeCrossRegionBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossRegionBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossRegionBackupsOutcome(DescribeCrossRegionBackupsResult(outcome.result()));
	else
		return DescribeCrossRegionBackupsOutcome(outcome.error());
}

void RdsClient::describeCrossRegionBackupsAsync(const DescribeCrossRegionBackupsRequest& request, const DescribeCrossRegionBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossRegionBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCrossRegionBackupsOutcomeCallable RdsClient::describeCrossRegionBackupsCallable(const DescribeCrossRegionBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossRegionBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeCrossRegionBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCrossRegionLogBackupFilesOutcome RdsClient::describeCrossRegionLogBackupFiles(const DescribeCrossRegionLogBackupFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossRegionLogBackupFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossRegionLogBackupFilesOutcome(DescribeCrossRegionLogBackupFilesResult(outcome.result()));
	else
		return DescribeCrossRegionLogBackupFilesOutcome(outcome.error());
}

void RdsClient::describeCrossRegionLogBackupFilesAsync(const DescribeCrossRegionLogBackupFilesRequest& request, const DescribeCrossRegionLogBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossRegionLogBackupFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCrossRegionLogBackupFilesOutcomeCallable RdsClient::describeCrossRegionLogBackupFilesCallable(const DescribeCrossRegionLogBackupFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossRegionLogBackupFilesOutcome()>>(
			[this, request]()
			{
			return this->describeCrossRegionLogBackupFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceAttributeOutcome RdsClient::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) const
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

void RdsClient::describeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceAttributeOutcomeCallable RdsClient::describeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceByTagsOutcome RdsClient::describeDBInstanceByTags(const DescribeDBInstanceByTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceByTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceByTagsOutcome(DescribeDBInstanceByTagsResult(outcome.result()));
	else
		return DescribeDBInstanceByTagsOutcome(outcome.error());
}

void RdsClient::describeDBInstanceByTagsAsync(const DescribeDBInstanceByTagsRequest& request, const DescribeDBInstanceByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceByTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceByTagsOutcomeCallable RdsClient::describeDBInstanceByTagsCallable(const DescribeDBInstanceByTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceByTagsOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceByTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceHAConfigOutcome RdsClient::describeDBInstanceHAConfig(const DescribeDBInstanceHAConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceHAConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceHAConfigOutcome(DescribeDBInstanceHAConfigResult(outcome.result()));
	else
		return DescribeDBInstanceHAConfigOutcome(outcome.error());
}

void RdsClient::describeDBInstanceHAConfigAsync(const DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceHAConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceHAConfigOutcomeCallable RdsClient::describeDBInstanceHAConfigCallable(const DescribeDBInstanceHAConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceHAConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceHAConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceIPArrayListOutcome RdsClient::describeDBInstanceIPArrayList(const DescribeDBInstanceIPArrayListRequest &request) const
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

void RdsClient::describeDBInstanceIPArrayListAsync(const DescribeDBInstanceIPArrayListRequest& request, const DescribeDBInstanceIPArrayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceIPArrayList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceIPArrayListOutcomeCallable RdsClient::describeDBInstanceIPArrayListCallable(const DescribeDBInstanceIPArrayListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceIPArrayListOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceIPArrayList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceIpHostnameOutcome RdsClient::describeDBInstanceIpHostname(const DescribeDBInstanceIpHostnameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceIpHostnameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceIpHostnameOutcome(DescribeDBInstanceIpHostnameResult(outcome.result()));
	else
		return DescribeDBInstanceIpHostnameOutcome(outcome.error());
}

void RdsClient::describeDBInstanceIpHostnameAsync(const DescribeDBInstanceIpHostnameRequest& request, const DescribeDBInstanceIpHostnameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceIpHostname(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceIpHostnameOutcomeCallable RdsClient::describeDBInstanceIpHostnameCallable(const DescribeDBInstanceIpHostnameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceIpHostnameOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceIpHostname(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceMonitorOutcome RdsClient::describeDBInstanceMonitor(const DescribeDBInstanceMonitorRequest &request) const
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

void RdsClient::describeDBInstanceMonitorAsync(const DescribeDBInstanceMonitorRequest& request, const DescribeDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceMonitorOutcomeCallable RdsClient::describeDBInstanceMonitorCallable(const DescribeDBInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceNetInfoOutcome RdsClient::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) const
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

void RdsClient::describeDBInstanceNetInfoAsync(const DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceNetInfoOutcomeCallable RdsClient::describeDBInstanceNetInfoCallable(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancePerformanceOutcome RdsClient::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) const
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

void RdsClient::describeDBInstancePerformanceAsync(const DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancePerformanceOutcomeCallable RdsClient::describeDBInstancePerformanceCallable(const DescribeDBInstancePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceProxyConfigurationOutcome RdsClient::describeDBInstanceProxyConfiguration(const DescribeDBInstanceProxyConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceProxyConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceProxyConfigurationOutcome(DescribeDBInstanceProxyConfigurationResult(outcome.result()));
	else
		return DescribeDBInstanceProxyConfigurationOutcome(outcome.error());
}

void RdsClient::describeDBInstanceProxyConfigurationAsync(const DescribeDBInstanceProxyConfigurationRequest& request, const DescribeDBInstanceProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceProxyConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceProxyConfigurationOutcomeCallable RdsClient::describeDBInstanceProxyConfigurationCallable(const DescribeDBInstanceProxyConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceProxyConfigurationOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceProxyConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceSSLOutcome RdsClient::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) const
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

void RdsClient::describeDBInstanceSSLAsync(const DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceSSLOutcomeCallable RdsClient::describeDBInstanceSSLCallable(const DescribeDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceTDEOutcome RdsClient::describeDBInstanceTDE(const DescribeDBInstanceTDERequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceTDEOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceTDEOutcome(DescribeDBInstanceTDEResult(outcome.result()));
	else
		return DescribeDBInstanceTDEOutcome(outcome.error());
}

void RdsClient::describeDBInstanceTDEAsync(const DescribeDBInstanceTDERequest& request, const DescribeDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceTDEOutcomeCallable RdsClient::describeDBInstanceTDECallable(const DescribeDBInstanceTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceTDEOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesOutcome RdsClient::describeDBInstances(const DescribeDBInstancesRequest &request) const
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

void RdsClient::describeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesOutcomeCallable RdsClient::describeDBInstancesCallable(const DescribeDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesAsCsvOutcome RdsClient::describeDBInstancesAsCsv(const DescribeDBInstancesAsCsvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesAsCsvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesAsCsvOutcome(DescribeDBInstancesAsCsvResult(outcome.result()));
	else
		return DescribeDBInstancesAsCsvOutcome(outcome.error());
}

void RdsClient::describeDBInstancesAsCsvAsync(const DescribeDBInstancesAsCsvRequest& request, const DescribeDBInstancesAsCsvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesAsCsv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesAsCsvOutcomeCallable RdsClient::describeDBInstancesAsCsvCallable(const DescribeDBInstancesAsCsvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesAsCsvOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesAsCsv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesByExpireTimeOutcome RdsClient::describeDBInstancesByExpireTime(const DescribeDBInstancesByExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesByExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesByExpireTimeOutcome(DescribeDBInstancesByExpireTimeResult(outcome.result()));
	else
		return DescribeDBInstancesByExpireTimeOutcome(outcome.error());
}

void RdsClient::describeDBInstancesByExpireTimeAsync(const DescribeDBInstancesByExpireTimeRequest& request, const DescribeDBInstancesByExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesByExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesByExpireTimeOutcomeCallable RdsClient::describeDBInstancesByExpireTimeCallable(const DescribeDBInstancesByExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesByExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesByExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesByPerformanceOutcome RdsClient::describeDBInstancesByPerformance(const DescribeDBInstancesByPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesByPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesByPerformanceOutcome(DescribeDBInstancesByPerformanceResult(outcome.result()));
	else
		return DescribeDBInstancesByPerformanceOutcome(outcome.error());
}

void RdsClient::describeDBInstancesByPerformanceAsync(const DescribeDBInstancesByPerformanceRequest& request, const DescribeDBInstancesByPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesByPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesByPerformanceOutcomeCallable RdsClient::describeDBInstancesByPerformanceCallable(const DescribeDBInstancesByPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesByPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesByPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesForCloneOutcome RdsClient::describeDBInstancesForClone(const DescribeDBInstancesForCloneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstancesForCloneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstancesForCloneOutcome(DescribeDBInstancesForCloneResult(outcome.result()));
	else
		return DescribeDBInstancesForCloneOutcome(outcome.error());
}

void RdsClient::describeDBInstancesForCloneAsync(const DescribeDBInstancesForCloneRequest& request, const DescribeDBInstancesForCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesForClone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesForCloneOutcomeCallable RdsClient::describeDBInstancesForCloneCallable(const DescribeDBInstancesForCloneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesForCloneOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesForClone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesOverviewOutcome RdsClient::describeDBInstancesOverview(const DescribeDBInstancesOverviewRequest &request) const
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

void RdsClient::describeDBInstancesOverviewAsync(const DescribeDBInstancesOverviewRequest& request, const DescribeDBInstancesOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancesOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstancesOverviewOutcomeCallable RdsClient::describeDBInstancesOverviewCallable(const DescribeDBInstancesOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOverviewOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancesOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBProxyOutcome RdsClient::describeDBProxy(const DescribeDBProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBProxyOutcome(DescribeDBProxyResult(outcome.result()));
	else
		return DescribeDBProxyOutcome(outcome.error());
}

void RdsClient::describeDBProxyAsync(const DescribeDBProxyRequest& request, const DescribeDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBProxyOutcomeCallable RdsClient::describeDBProxyCallable(const DescribeDBProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBProxyOutcome()>>(
			[this, request]()
			{
			return this->describeDBProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBProxyEndpointOutcome RdsClient::describeDBProxyEndpoint(const DescribeDBProxyEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBProxyEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBProxyEndpointOutcome(DescribeDBProxyEndpointResult(outcome.result()));
	else
		return DescribeDBProxyEndpointOutcome(outcome.error());
}

void RdsClient::describeDBProxyEndpointAsync(const DescribeDBProxyEndpointRequest& request, const DescribeDBProxyEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBProxyEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBProxyEndpointOutcomeCallable RdsClient::describeDBProxyEndpointCallable(const DescribeDBProxyEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBProxyEndpointOutcome()>>(
			[this, request]()
			{
			return this->describeDBProxyEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBProxyPerformanceOutcome RdsClient::describeDBProxyPerformance(const DescribeDBProxyPerformanceRequest &request) const
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

void RdsClient::describeDBProxyPerformanceAsync(const DescribeDBProxyPerformanceRequest& request, const DescribeDBProxyPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBProxyPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBProxyPerformanceOutcomeCallable RdsClient::describeDBProxyPerformanceCallable(const DescribeDBProxyPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBProxyPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBProxyPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDTCSecurityIpHostsForSQLServerOutcome RdsClient::describeDTCSecurityIpHostsForSQLServer(const DescribeDTCSecurityIpHostsForSQLServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDTCSecurityIpHostsForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDTCSecurityIpHostsForSQLServerOutcome(DescribeDTCSecurityIpHostsForSQLServerResult(outcome.result()));
	else
		return DescribeDTCSecurityIpHostsForSQLServerOutcome(outcome.error());
}

void RdsClient::describeDTCSecurityIpHostsForSQLServerAsync(const DescribeDTCSecurityIpHostsForSQLServerRequest& request, const DescribeDTCSecurityIpHostsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDTCSecurityIpHostsForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDTCSecurityIpHostsForSQLServerOutcomeCallable RdsClient::describeDTCSecurityIpHostsForSQLServerCallable(const DescribeDTCSecurityIpHostsForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDTCSecurityIpHostsForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->describeDTCSecurityIpHostsForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDatabasesOutcome RdsClient::describeDatabases(const DescribeDatabasesRequest &request) const
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

void RdsClient::describeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDatabasesOutcomeCallable RdsClient::describeDatabasesCallable(const DescribeDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
			[this, request]()
			{
			return this->describeDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDedicatedHostAttributeOutcome RdsClient::describeDedicatedHostAttribute(const DescribeDedicatedHostAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostAttributeOutcome(DescribeDedicatedHostAttributeResult(outcome.result()));
	else
		return DescribeDedicatedHostAttributeOutcome(outcome.error());
}

void RdsClient::describeDedicatedHostAttributeAsync(const DescribeDedicatedHostAttributeRequest& request, const DescribeDedicatedHostAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHostAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDedicatedHostAttributeOutcomeCallable RdsClient::describeDedicatedHostAttributeCallable(const DescribeDedicatedHostAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHostAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDedicatedHostGroupsOutcome RdsClient::describeDedicatedHostGroups(const DescribeDedicatedHostGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostGroupsOutcome(DescribeDedicatedHostGroupsResult(outcome.result()));
	else
		return DescribeDedicatedHostGroupsOutcome(outcome.error());
}

void RdsClient::describeDedicatedHostGroupsAsync(const DescribeDedicatedHostGroupsRequest& request, const DescribeDedicatedHostGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHostGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDedicatedHostGroupsOutcomeCallable RdsClient::describeDedicatedHostGroupsCallable(const DescribeDedicatedHostGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHostGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDedicatedHostImageCategoriesOutcome RdsClient::describeDedicatedHostImageCategories(const DescribeDedicatedHostImageCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostImageCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostImageCategoriesOutcome(DescribeDedicatedHostImageCategoriesResult(outcome.result()));
	else
		return DescribeDedicatedHostImageCategoriesOutcome(outcome.error());
}

void RdsClient::describeDedicatedHostImageCategoriesAsync(const DescribeDedicatedHostImageCategoriesRequest& request, const DescribeDedicatedHostImageCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHostImageCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDedicatedHostImageCategoriesOutcomeCallable RdsClient::describeDedicatedHostImageCategoriesCallable(const DescribeDedicatedHostImageCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostImageCategoriesOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHostImageCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDedicatedHostsOutcome RdsClient::describeDedicatedHosts(const DescribeDedicatedHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDedicatedHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDedicatedHostsOutcome(DescribeDedicatedHostsResult(outcome.result()));
	else
		return DescribeDedicatedHostsOutcome(outcome.error());
}

void RdsClient::describeDedicatedHostsAsync(const DescribeDedicatedHostsRequest& request, const DescribeDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDedicatedHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDedicatedHostsOutcomeCallable RdsClient::describeDedicatedHostsCallable(const DescribeDedicatedHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDedicatedHostsOutcome()>>(
			[this, request]()
			{
			return this->describeDedicatedHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDetachedBackupsOutcome RdsClient::describeDetachedBackups(const DescribeDetachedBackupsRequest &request) const
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

void RdsClient::describeDetachedBackupsAsync(const DescribeDetachedBackupsRequest& request, const DescribeDetachedBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDetachedBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDetachedBackupsOutcomeCallable RdsClient::describeDetachedBackupsCallable(const DescribeDetachedBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDetachedBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeDetachedBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDiagnosticReportListOutcome RdsClient::describeDiagnosticReportList(const DescribeDiagnosticReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosticReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosticReportListOutcome(DescribeDiagnosticReportListResult(outcome.result()));
	else
		return DescribeDiagnosticReportListOutcome(outcome.error());
}

void RdsClient::describeDiagnosticReportListAsync(const DescribeDiagnosticReportListRequest& request, const DescribeDiagnosticReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosticReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDiagnosticReportListOutcomeCallable RdsClient::describeDiagnosticReportListCallable(const DescribeDiagnosticReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosticReportListOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosticReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeErrorLogsOutcome RdsClient::describeErrorLogs(const DescribeErrorLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeErrorLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeErrorLogsOutcome(DescribeErrorLogsResult(outcome.result()));
	else
		return DescribeErrorLogsOutcome(outcome.error());
}

void RdsClient::describeErrorLogsAsync(const DescribeErrorLogsRequest& request, const DescribeErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeErrorLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeErrorLogsOutcomeCallable RdsClient::describeErrorLogsCallable(const DescribeErrorLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeErrorLogsOutcome()>>(
			[this, request]()
			{
			return this->describeErrorLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeEventsOutcome RdsClient::describeEvents(const DescribeEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventsOutcome(DescribeEventsResult(outcome.result()));
	else
		return DescribeEventsOutcome(outcome.error());
}

void RdsClient::describeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeEventsOutcomeCallable RdsClient::describeEventsCallable(const DescribeEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
			[this, request]()
			{
			return this->describeEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHASwitchConfigOutcome RdsClient::describeHASwitchConfig(const DescribeHASwitchConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHASwitchConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHASwitchConfigOutcome(DescribeHASwitchConfigResult(outcome.result()));
	else
		return DescribeHASwitchConfigOutcome(outcome.error());
}

void RdsClient::describeHASwitchConfigAsync(const DescribeHASwitchConfigRequest& request, const DescribeHASwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHASwitchConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHASwitchConfigOutcomeCallable RdsClient::describeHASwitchConfigCallable(const DescribeHASwitchConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHASwitchConfigOutcome()>>(
			[this, request]()
			{
			return this->describeHASwitchConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeHostAccountsOutcome RdsClient::describeHostAccounts(const DescribeHostAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHostAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHostAccountsOutcome(DescribeHostAccountsResult(outcome.result()));
	else
		return DescribeHostAccountsOutcome(outcome.error());
}

void RdsClient::describeHostAccountsAsync(const DescribeHostAccountsRequest& request, const DescribeHostAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHostAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeHostAccountsOutcomeCallable RdsClient::describeHostAccountsCallable(const DescribeHostAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHostAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeHostAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceAutoRenewalAttributeOutcome RdsClient::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) const
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

void RdsClient::describeInstanceAutoRenewalAttributeAsync(const DescribeInstanceAutoRenewalAttributeRequest& request, const DescribeInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceAutoRenewalAttributeOutcomeCallable RdsClient::describeInstanceAutoRenewalAttributeCallable(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceCrossBackupPolicyOutcome RdsClient::describeInstanceCrossBackupPolicy(const DescribeInstanceCrossBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceCrossBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceCrossBackupPolicyOutcome(DescribeInstanceCrossBackupPolicyResult(outcome.result()));
	else
		return DescribeInstanceCrossBackupPolicyOutcome(outcome.error());
}

void RdsClient::describeInstanceCrossBackupPolicyAsync(const DescribeInstanceCrossBackupPolicyRequest& request, const DescribeInstanceCrossBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceCrossBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceCrossBackupPolicyOutcomeCallable RdsClient::describeInstanceCrossBackupPolicyCallable(const DescribeInstanceCrossBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceCrossBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceCrossBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceKeywordsOutcome RdsClient::describeInstanceKeywords(const DescribeInstanceKeywordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceKeywordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceKeywordsOutcome(DescribeInstanceKeywordsResult(outcome.result()));
	else
		return DescribeInstanceKeywordsOutcome(outcome.error());
}

void RdsClient::describeInstanceKeywordsAsync(const DescribeInstanceKeywordsRequest& request, const DescribeInstanceKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceKeywords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceKeywordsOutcomeCallable RdsClient::describeInstanceKeywordsCallable(const DescribeInstanceKeywordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceKeywordsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceKeywords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeLocalAvailableRecoveryTimeOutcome RdsClient::describeLocalAvailableRecoveryTime(const DescribeLocalAvailableRecoveryTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLocalAvailableRecoveryTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLocalAvailableRecoveryTimeOutcome(DescribeLocalAvailableRecoveryTimeResult(outcome.result()));
	else
		return DescribeLocalAvailableRecoveryTimeOutcome(outcome.error());
}

void RdsClient::describeLocalAvailableRecoveryTimeAsync(const DescribeLocalAvailableRecoveryTimeRequest& request, const DescribeLocalAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLocalAvailableRecoveryTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeLocalAvailableRecoveryTimeOutcomeCallable RdsClient::describeLocalAvailableRecoveryTimeCallable(const DescribeLocalAvailableRecoveryTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLocalAvailableRecoveryTimeOutcome()>>(
			[this, request]()
			{
			return this->describeLocalAvailableRecoveryTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeLogBackupFilesOutcome RdsClient::describeLogBackupFiles(const DescribeLogBackupFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogBackupFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogBackupFilesOutcome(DescribeLogBackupFilesResult(outcome.result()));
	else
		return DescribeLogBackupFilesOutcome(outcome.error());
}

void RdsClient::describeLogBackupFilesAsync(const DescribeLogBackupFilesRequest& request, const DescribeLogBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogBackupFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeLogBackupFilesOutcomeCallable RdsClient::describeLogBackupFilesCallable(const DescribeLogBackupFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogBackupFilesOutcome()>>(
			[this, request]()
			{
			return this->describeLogBackupFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMigrateTaskByIdOutcome RdsClient::describeMigrateTaskById(const DescribeMigrateTaskByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrateTaskByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrateTaskByIdOutcome(DescribeMigrateTaskByIdResult(outcome.result()));
	else
		return DescribeMigrateTaskByIdOutcome(outcome.error());
}

void RdsClient::describeMigrateTaskByIdAsync(const DescribeMigrateTaskByIdRequest& request, const DescribeMigrateTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrateTaskById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMigrateTaskByIdOutcomeCallable RdsClient::describeMigrateTaskByIdCallable(const DescribeMigrateTaskByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrateTaskByIdOutcome()>>(
			[this, request]()
			{
			return this->describeMigrateTaskById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMigrateTasksOutcome RdsClient::describeMigrateTasks(const DescribeMigrateTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrateTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrateTasksOutcome(DescribeMigrateTasksResult(outcome.result()));
	else
		return DescribeMigrateTasksOutcome(outcome.error());
}

void RdsClient::describeMigrateTasksAsync(const DescribeMigrateTasksRequest& request, const DescribeMigrateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrateTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMigrateTasksOutcomeCallable RdsClient::describeMigrateTasksCallable(const DescribeMigrateTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrateTasksOutcome()>>(
			[this, request]()
			{
			return this->describeMigrateTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMigrateTasksForSQLServerOutcome RdsClient::describeMigrateTasksForSQLServer(const DescribeMigrateTasksForSQLServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrateTasksForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrateTasksForSQLServerOutcome(DescribeMigrateTasksForSQLServerResult(outcome.result()));
	else
		return DescribeMigrateTasksForSQLServerOutcome(outcome.error());
}

void RdsClient::describeMigrateTasksForSQLServerAsync(const DescribeMigrateTasksForSQLServerRequest& request, const DescribeMigrateTasksForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrateTasksForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMigrateTasksForSQLServerOutcomeCallable RdsClient::describeMigrateTasksForSQLServerCallable(const DescribeMigrateTasksForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrateTasksForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->describeMigrateTasksForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeModifyParameterLogOutcome RdsClient::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) const
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

void RdsClient::describeModifyParameterLogAsync(const DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModifyParameterLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeModifyParameterLogOutcomeCallable RdsClient::describeModifyParameterLogCallable(const DescribeModifyParameterLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModifyParameterLogOutcome()>>(
			[this, request]()
			{
			return this->describeModifyParameterLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeNextEventForSignOutcome RdsClient::describeNextEventForSign(const DescribeNextEventForSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNextEventForSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNextEventForSignOutcome(DescribeNextEventForSignResult(outcome.result()));
	else
		return DescribeNextEventForSignOutcome(outcome.error());
}

void RdsClient::describeNextEventForSignAsync(const DescribeNextEventForSignRequest& request, const DescribeNextEventForSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNextEventForSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeNextEventForSignOutcomeCallable RdsClient::describeNextEventForSignCallable(const DescribeNextEventForSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNextEventForSignOutcome()>>(
			[this, request]()
			{
			return this->describeNextEventForSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeOssDownloadsOutcome RdsClient::describeOssDownloads(const DescribeOssDownloadsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssDownloadsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssDownloadsOutcome(DescribeOssDownloadsResult(outcome.result()));
	else
		return DescribeOssDownloadsOutcome(outcome.error());
}

void RdsClient::describeOssDownloadsAsync(const DescribeOssDownloadsRequest& request, const DescribeOssDownloadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssDownloads(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOssDownloadsOutcomeCallable RdsClient::describeOssDownloadsCallable(const DescribeOssDownloadsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssDownloadsOutcome()>>(
			[this, request]()
			{
			return this->describeOssDownloads(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeOssDownloadsForSQLServerOutcome RdsClient::describeOssDownloadsForSQLServer(const DescribeOssDownloadsForSQLServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssDownloadsForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssDownloadsForSQLServerOutcome(DescribeOssDownloadsForSQLServerResult(outcome.result()));
	else
		return DescribeOssDownloadsForSQLServerOutcome(outcome.error());
}

void RdsClient::describeOssDownloadsForSQLServerAsync(const DescribeOssDownloadsForSQLServerRequest& request, const DescribeOssDownloadsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssDownloadsForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOssDownloadsForSQLServerOutcomeCallable RdsClient::describeOssDownloadsForSQLServerCallable(const DescribeOssDownloadsForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssDownloadsForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->describeOssDownloadsForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeParameterGroupOutcome RdsClient::describeParameterGroup(const DescribeParameterGroupRequest &request) const
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

void RdsClient::describeParameterGroupAsync(const DescribeParameterGroupRequest& request, const DescribeParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeParameterGroupOutcomeCallable RdsClient::describeParameterGroupCallable(const DescribeParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->describeParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeParameterGroupsOutcome RdsClient::describeParameterGroups(const DescribeParameterGroupsRequest &request) const
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

void RdsClient::describeParameterGroupsAsync(const DescribeParameterGroupsRequest& request, const DescribeParameterGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeParameterGroupsOutcomeCallable RdsClient::describeParameterGroupsCallable(const DescribeParameterGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeParameterGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeParameterTemplatesOutcome RdsClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
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

void RdsClient::describeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeParameterTemplatesOutcomeCallable RdsClient::describeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeParametersOutcome RdsClient::describeParameters(const DescribeParametersRequest &request) const
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

void RdsClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeParametersOutcomeCallable RdsClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribePriceOutcome RdsClient::describePrice(const DescribePriceRequest &request) const
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

void RdsClient::describePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribePriceOutcomeCallable RdsClient::describePriceCallable(const DescribePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
			[this, request]()
			{
			return this->describePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRdsResourceSettingsOutcome RdsClient::describeRdsResourceSettings(const DescribeRdsResourceSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRdsResourceSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRdsResourceSettingsOutcome(DescribeRdsResourceSettingsResult(outcome.result()));
	else
		return DescribeRdsResourceSettingsOutcome(outcome.error());
}

void RdsClient::describeRdsResourceSettingsAsync(const DescribeRdsResourceSettingsRequest& request, const DescribeRdsResourceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsResourceSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRdsResourceSettingsOutcomeCallable RdsClient::describeRdsResourceSettingsCallable(const DescribeRdsResourceSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsResourceSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsResourceSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeReadDBInstanceDelayOutcome RdsClient::describeReadDBInstanceDelay(const DescribeReadDBInstanceDelayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReadDBInstanceDelayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReadDBInstanceDelayOutcome(DescribeReadDBInstanceDelayResult(outcome.result()));
	else
		return DescribeReadDBInstanceDelayOutcome(outcome.error());
}

void RdsClient::describeReadDBInstanceDelayAsync(const DescribeReadDBInstanceDelayRequest& request, const DescribeReadDBInstanceDelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReadDBInstanceDelay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeReadDBInstanceDelayOutcomeCallable RdsClient::describeReadDBInstanceDelayCallable(const DescribeReadDBInstanceDelayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReadDBInstanceDelayOutcome()>>(
			[this, request]()
			{
			return this->describeReadDBInstanceDelay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRegionsOutcome RdsClient::describeRegions(const DescribeRegionsRequest &request) const
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

void RdsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRegionsOutcomeCallable RdsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRenewalPriceOutcome RdsClient::describeRenewalPrice(const DescribeRenewalPriceRequest &request) const
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

void RdsClient::describeRenewalPriceAsync(const DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRenewalPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRenewalPriceOutcomeCallable RdsClient::describeRenewalPriceCallable(const DescribeRenewalPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRenewalPriceOutcome()>>(
			[this, request]()
			{
			return this->describeRenewalPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeResourceUsageOutcome RdsClient::describeResourceUsage(const DescribeResourceUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceUsageOutcome(DescribeResourceUsageResult(outcome.result()));
	else
		return DescribeResourceUsageOutcome(outcome.error());
}

void RdsClient::describeResourceUsageAsync(const DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeResourceUsageOutcomeCallable RdsClient::describeResourceUsageCallable(const DescribeResourceUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceUsageOutcome()>>(
			[this, request]()
			{
			return this->describeResourceUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLCollectorPolicyOutcome RdsClient::describeSQLCollectorPolicy(const DescribeSQLCollectorPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLCollectorPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLCollectorPolicyOutcome(DescribeSQLCollectorPolicyResult(outcome.result()));
	else
		return DescribeSQLCollectorPolicyOutcome(outcome.error());
}

void RdsClient::describeSQLCollectorPolicyAsync(const DescribeSQLCollectorPolicyRequest& request, const DescribeSQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLCollectorPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLCollectorPolicyOutcomeCallable RdsClient::describeSQLCollectorPolicyCallable(const DescribeSQLCollectorPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLCollectorPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeSQLCollectorPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLCollectorRetentionOutcome RdsClient::describeSQLCollectorRetention(const DescribeSQLCollectorRetentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLCollectorRetentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLCollectorRetentionOutcome(DescribeSQLCollectorRetentionResult(outcome.result()));
	else
		return DescribeSQLCollectorRetentionOutcome(outcome.error());
}

void RdsClient::describeSQLCollectorRetentionAsync(const DescribeSQLCollectorRetentionRequest& request, const DescribeSQLCollectorRetentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLCollectorRetention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLCollectorRetentionOutcomeCallable RdsClient::describeSQLCollectorRetentionCallable(const DescribeSQLCollectorRetentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLCollectorRetentionOutcome()>>(
			[this, request]()
			{
			return this->describeSQLCollectorRetention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLLogFilesOutcome RdsClient::describeSQLLogFiles(const DescribeSQLLogFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogFilesOutcome(DescribeSQLLogFilesResult(outcome.result()));
	else
		return DescribeSQLLogFilesOutcome(outcome.error());
}

void RdsClient::describeSQLLogFilesAsync(const DescribeSQLLogFilesRequest& request, const DescribeSQLLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLLogFilesOutcomeCallable RdsClient::describeSQLLogFilesCallable(const DescribeSQLLogFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogFilesOutcome()>>(
			[this, request]()
			{
			return this->describeSQLLogFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLLogRecordsOutcome RdsClient::describeSQLLogRecords(const DescribeSQLLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogRecordsOutcome(DescribeSQLLogRecordsResult(outcome.result()));
	else
		return DescribeSQLLogRecordsOutcome(outcome.error());
}

void RdsClient::describeSQLLogRecordsAsync(const DescribeSQLLogRecordsRequest& request, const DescribeSQLLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLLogRecordsOutcomeCallable RdsClient::describeSQLLogRecordsCallable(const DescribeSQLLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSQLLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLLogReportListOutcome RdsClient::describeSQLLogReportList(const DescribeSQLLogReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogReportListOutcome(DescribeSQLLogReportListResult(outcome.result()));
	else
		return DescribeSQLLogReportListOutcome(outcome.error());
}

void RdsClient::describeSQLLogReportListAsync(const DescribeSQLLogReportListRequest& request, const DescribeSQLLogReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLLogReportListOutcomeCallable RdsClient::describeSQLLogReportListCallable(const DescribeSQLLogReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogReportListOutcome()>>(
			[this, request]()
			{
			return this->describeSQLLogReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLLogReportsOutcome RdsClient::describeSQLLogReports(const DescribeSQLLogReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLLogReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLLogReportsOutcome(DescribeSQLLogReportsResult(outcome.result()));
	else
		return DescribeSQLLogReportsOutcome(outcome.error());
}

void RdsClient::describeSQLLogReportsAsync(const DescribeSQLLogReportsRequest& request, const DescribeSQLLogReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLLogReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLLogReportsOutcomeCallable RdsClient::describeSQLLogReportsCallable(const DescribeSQLLogReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLLogReportsOutcome()>>(
			[this, request]()
			{
			return this->describeSQLLogReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLReportsOutcome RdsClient::describeSQLReports(const DescribeSQLReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLReportsOutcome(DescribeSQLReportsResult(outcome.result()));
	else
		return DescribeSQLReportsOutcome(outcome.error());
}

void RdsClient::describeSQLReportsAsync(const DescribeSQLReportsRequest& request, const DescribeSQLReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLReportsOutcomeCallable RdsClient::describeSQLReportsCallable(const DescribeSQLReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLReportsOutcome()>>(
			[this, request]()
			{
			return this->describeSQLReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSecurityGroupConfigurationOutcome RdsClient::describeSecurityGroupConfiguration(const DescribeSecurityGroupConfigurationRequest &request) const
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

void RdsClient::describeSecurityGroupConfigurationAsync(const DescribeSecurityGroupConfigurationRequest& request, const DescribeSecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSecurityGroupConfigurationOutcomeCallable RdsClient::describeSecurityGroupConfigurationCallable(const DescribeSecurityGroupConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupConfigurationOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSignedEventActionsOutcome RdsClient::describeSignedEventActions(const DescribeSignedEventActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSignedEventActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSignedEventActionsOutcome(DescribeSignedEventActionsResult(outcome.result()));
	else
		return DescribeSignedEventActionsOutcome(outcome.error());
}

void RdsClient::describeSignedEventActionsAsync(const DescribeSignedEventActionsRequest& request, const DescribeSignedEventActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSignedEventActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSignedEventActionsOutcomeCallable RdsClient::describeSignedEventActionsCallable(const DescribeSignedEventActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSignedEventActionsOutcome()>>(
			[this, request]()
			{
			return this->describeSignedEventActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSlowLogRecordsOutcome RdsClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
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

void RdsClient::describeSlowLogRecordsAsync(const DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSlowLogRecordsOutcomeCallable RdsClient::describeSlowLogRecordsCallable(const DescribeSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSlowLogsOutcome RdsClient::describeSlowLogs(const DescribeSlowLogsRequest &request) const
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

void RdsClient::describeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSlowLogsOutcomeCallable RdsClient::describeSlowLogsCallable(const DescribeSlowLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeTagsOutcome RdsClient::describeTags(const DescribeTagsRequest &request) const
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

void RdsClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeTagsOutcomeCallable RdsClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeTasksOutcome RdsClient::describeTasks(const DescribeTasksRequest &request) const
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

void RdsClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeTasksOutcomeCallable RdsClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DestroyDBInstanceOutcome RdsClient::destroyDBInstance(const DestroyDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DestroyDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DestroyDBInstanceOutcome(DestroyDBInstanceResult(outcome.result()));
	else
		return DestroyDBInstanceOutcome(outcome.error());
}

void RdsClient::destroyDBInstanceAsync(const DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, destroyDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DestroyDBInstanceOutcomeCallable RdsClient::destroyDBInstanceCallable(const DestroyDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DestroyDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->destroyDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DropDedicatedHostUserOutcome RdsClient::dropDedicatedHostUser(const DropDedicatedHostUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DropDedicatedHostUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DropDedicatedHostUserOutcome(DropDedicatedHostUserResult(outcome.result()));
	else
		return DropDedicatedHostUserOutcome(outcome.error());
}

void RdsClient::dropDedicatedHostUserAsync(const DropDedicatedHostUserRequest& request, const DropDedicatedHostUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dropDedicatedHostUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DropDedicatedHostUserOutcomeCallable RdsClient::dropDedicatedHostUserCallable(const DropDedicatedHostUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DropDedicatedHostUserOutcome()>>(
			[this, request]()
			{
			return this->dropDedicatedHostUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::EvaluateDedicatedHostInstanceResourceOutcome RdsClient::evaluateDedicatedHostInstanceResource(const EvaluateDedicatedHostInstanceResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EvaluateDedicatedHostInstanceResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EvaluateDedicatedHostInstanceResourceOutcome(EvaluateDedicatedHostInstanceResourceResult(outcome.result()));
	else
		return EvaluateDedicatedHostInstanceResourceOutcome(outcome.error());
}

void RdsClient::evaluateDedicatedHostInstanceResourceAsync(const EvaluateDedicatedHostInstanceResourceRequest& request, const EvaluateDedicatedHostInstanceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, evaluateDedicatedHostInstanceResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::EvaluateDedicatedHostInstanceResourceOutcomeCallable RdsClient::evaluateDedicatedHostInstanceResourceCallable(const EvaluateDedicatedHostInstanceResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EvaluateDedicatedHostInstanceResourceOutcome()>>(
			[this, request]()
			{
			return this->evaluateDedicatedHostInstanceResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::GrantAccountPrivilegeOutcome RdsClient::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) const
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

void RdsClient::grantAccountPrivilegeAsync(const GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::GrantAccountPrivilegeOutcomeCallable RdsClient::grantAccountPrivilegeCallable(const GrantAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->grantAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::GrantOperatorPermissionOutcome RdsClient::grantOperatorPermission(const GrantOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantOperatorPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantOperatorPermissionOutcome(GrantOperatorPermissionResult(outcome.result()));
	else
		return GrantOperatorPermissionOutcome(outcome.error());
}

void RdsClient::grantOperatorPermissionAsync(const GrantOperatorPermissionRequest& request, const GrantOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantOperatorPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::GrantOperatorPermissionOutcomeCallable RdsClient::grantOperatorPermissionCallable(const GrantOperatorPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantOperatorPermissionOutcome()>>(
			[this, request]()
			{
			return this->grantOperatorPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ImportDatabaseBetweenInstancesOutcome RdsClient::importDatabaseBetweenInstances(const ImportDatabaseBetweenInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportDatabaseBetweenInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportDatabaseBetweenInstancesOutcome(ImportDatabaseBetweenInstancesResult(outcome.result()));
	else
		return ImportDatabaseBetweenInstancesOutcome(outcome.error());
}

void RdsClient::importDatabaseBetweenInstancesAsync(const ImportDatabaseBetweenInstancesRequest& request, const ImportDatabaseBetweenInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importDatabaseBetweenInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ImportDatabaseBetweenInstancesOutcomeCallable RdsClient::importDatabaseBetweenInstancesCallable(const ImportDatabaseBetweenInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportDatabaseBetweenInstancesOutcome()>>(
			[this, request]()
			{
			return this->importDatabaseBetweenInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ListTagResourcesOutcome RdsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void RdsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ListTagResourcesOutcomeCallable RdsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::LockAccountOutcome RdsClient::lockAccount(const LockAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockAccountOutcome(LockAccountResult(outcome.result()));
	else
		return LockAccountOutcome(outcome.error());
}

void RdsClient::lockAccountAsync(const LockAccountRequest& request, const LockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::LockAccountOutcomeCallable RdsClient::lockAccountCallable(const LockAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockAccountOutcome()>>(
			[this, request]()
			{
			return this->lockAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::MigrateDBInstanceOutcome RdsClient::migrateDBInstance(const MigrateDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateDBInstanceOutcome(MigrateDBInstanceResult(outcome.result()));
	else
		return MigrateDBInstanceOutcome(outcome.error());
}

void RdsClient::migrateDBInstanceAsync(const MigrateDBInstanceRequest& request, const MigrateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateDBInstanceOutcomeCallable RdsClient::migrateDBInstanceCallable(const MigrateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->migrateDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::MigrateSecurityIPModeOutcome RdsClient::migrateSecurityIPMode(const MigrateSecurityIPModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateSecurityIPModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateSecurityIPModeOutcome(MigrateSecurityIPModeResult(outcome.result()));
	else
		return MigrateSecurityIPModeOutcome(outcome.error());
}

void RdsClient::migrateSecurityIPModeAsync(const MigrateSecurityIPModeRequest& request, const MigrateSecurityIPModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateSecurityIPMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateSecurityIPModeOutcomeCallable RdsClient::migrateSecurityIPModeCallable(const MigrateSecurityIPModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateSecurityIPModeOutcome()>>(
			[this, request]()
			{
			return this->migrateSecurityIPMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::MigrateToOtherZoneOutcome RdsClient::migrateToOtherZone(const MigrateToOtherZoneRequest &request) const
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

void RdsClient::migrateToOtherZoneAsync(const MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateToOtherZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateToOtherZoneOutcomeCallable RdsClient::migrateToOtherZoneCallable(const MigrateToOtherZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateToOtherZoneOutcome()>>(
			[this, request]()
			{
			return this->migrateToOtherZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyAccountDescriptionOutcome RdsClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void RdsClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyAccountDescriptionOutcomeCallable RdsClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyActionEventPolicyOutcome RdsClient::modifyActionEventPolicy(const ModifyActionEventPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyActionEventPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyActionEventPolicyOutcome(ModifyActionEventPolicyResult(outcome.result()));
	else
		return ModifyActionEventPolicyOutcome(outcome.error());
}

void RdsClient::modifyActionEventPolicyAsync(const ModifyActionEventPolicyRequest& request, const ModifyActionEventPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActionEventPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyActionEventPolicyOutcomeCallable RdsClient::modifyActionEventPolicyCallable(const ModifyActionEventPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActionEventPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyActionEventPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyActionEventVerifyPolicyOutcome RdsClient::modifyActionEventVerifyPolicy(const ModifyActionEventVerifyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyActionEventVerifyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyActionEventVerifyPolicyOutcome(ModifyActionEventVerifyPolicyResult(outcome.result()));
	else
		return ModifyActionEventVerifyPolicyOutcome(outcome.error());
}

void RdsClient::modifyActionEventVerifyPolicyAsync(const ModifyActionEventVerifyPolicyRequest& request, const ModifyActionEventVerifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActionEventVerifyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyActionEventVerifyPolicyOutcomeCallable RdsClient::modifyActionEventVerifyPolicyCallable(const ModifyActionEventVerifyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActionEventVerifyPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyActionEventVerifyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyBackupPolicyOutcome RdsClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
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

void RdsClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyBackupPolicyOutcomeCallable RdsClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyCollationTimeZoneOutcome RdsClient::modifyCollationTimeZone(const ModifyCollationTimeZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCollationTimeZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCollationTimeZoneOutcome(ModifyCollationTimeZoneResult(outcome.result()));
	else
		return ModifyCollationTimeZoneOutcome(outcome.error());
}

void RdsClient::modifyCollationTimeZoneAsync(const ModifyCollationTimeZoneRequest& request, const ModifyCollationTimeZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCollationTimeZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyCollationTimeZoneOutcomeCallable RdsClient::modifyCollationTimeZoneCallable(const ModifyCollationTimeZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCollationTimeZoneOutcome()>>(
			[this, request]()
			{
			return this->modifyCollationTimeZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBDescriptionOutcome RdsClient::modifyDBDescription(const ModifyDBDescriptionRequest &request) const
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

void RdsClient::modifyDBDescriptionAsync(const ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBDescriptionOutcomeCallable RdsClient::modifyDBDescriptionCallable(const ModifyDBDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceAutoUpgradeMinorVersionOutcome RdsClient::modifyDBInstanceAutoUpgradeMinorVersion(const ModifyDBInstanceAutoUpgradeMinorVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceAutoUpgradeMinorVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceAutoUpgradeMinorVersionOutcome(ModifyDBInstanceAutoUpgradeMinorVersionResult(outcome.result()));
	else
		return ModifyDBInstanceAutoUpgradeMinorVersionOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceAutoUpgradeMinorVersionAsync(const ModifyDBInstanceAutoUpgradeMinorVersionRequest& request, const ModifyDBInstanceAutoUpgradeMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceAutoUpgradeMinorVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceAutoUpgradeMinorVersionOutcomeCallable RdsClient::modifyDBInstanceAutoUpgradeMinorVersionCallable(const ModifyDBInstanceAutoUpgradeMinorVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceAutoUpgradeMinorVersionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceAutoUpgradeMinorVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceConnectionModeOutcome RdsClient::modifyDBInstanceConnectionMode(const ModifyDBInstanceConnectionModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceConnectionModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceConnectionModeOutcome(ModifyDBInstanceConnectionModeResult(outcome.result()));
	else
		return ModifyDBInstanceConnectionModeOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceConnectionModeAsync(const ModifyDBInstanceConnectionModeRequest& request, const ModifyDBInstanceConnectionModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConnectionMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceConnectionModeOutcomeCallable RdsClient::modifyDBInstanceConnectionModeCallable(const ModifyDBInstanceConnectionModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConnectionModeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConnectionMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceConnectionStringOutcome RdsClient::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) const
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

void RdsClient::modifyDBInstanceConnectionStringAsync(const ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceConnectionStringOutcomeCallable RdsClient::modifyDBInstanceConnectionStringCallable(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceDescriptionOutcome RdsClient::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) const
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

void RdsClient::modifyDBInstanceDescriptionAsync(const ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceDescriptionOutcomeCallable RdsClient::modifyDBInstanceDescriptionCallable(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceHAConfigOutcome RdsClient::modifyDBInstanceHAConfig(const ModifyDBInstanceHAConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceHAConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceHAConfigOutcome(ModifyDBInstanceHAConfigResult(outcome.result()));
	else
		return ModifyDBInstanceHAConfigOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceHAConfigAsync(const ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceHAConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceHAConfigOutcomeCallable RdsClient::modifyDBInstanceHAConfigCallable(const ModifyDBInstanceHAConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceHAConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceHAConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceMaintainTimeOutcome RdsClient::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) const
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

void RdsClient::modifyDBInstanceMaintainTimeAsync(const ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceMaintainTimeOutcomeCallable RdsClient::modifyDBInstanceMaintainTimeCallable(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceMonitorOutcome RdsClient::modifyDBInstanceMonitor(const ModifyDBInstanceMonitorRequest &request) const
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

void RdsClient::modifyDBInstanceMonitorAsync(const ModifyDBInstanceMonitorRequest& request, const ModifyDBInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceMonitorOutcomeCallable RdsClient::modifyDBInstanceMonitorCallable(const ModifyDBInstanceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceMonitorOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceNetworkExpireTimeOutcome RdsClient::modifyDBInstanceNetworkExpireTime(const ModifyDBInstanceNetworkExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceNetworkExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceNetworkExpireTimeOutcome(ModifyDBInstanceNetworkExpireTimeResult(outcome.result()));
	else
		return ModifyDBInstanceNetworkExpireTimeOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceNetworkExpireTimeAsync(const ModifyDBInstanceNetworkExpireTimeRequest& request, const ModifyDBInstanceNetworkExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceNetworkExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceNetworkExpireTimeOutcomeCallable RdsClient::modifyDBInstanceNetworkExpireTimeCallable(const ModifyDBInstanceNetworkExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNetworkExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceNetworkExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceNetworkTypeOutcome RdsClient::modifyDBInstanceNetworkType(const ModifyDBInstanceNetworkTypeRequest &request) const
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

void RdsClient::modifyDBInstanceNetworkTypeAsync(const ModifyDBInstanceNetworkTypeRequest& request, const ModifyDBInstanceNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceNetworkType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceNetworkTypeOutcomeCallable RdsClient::modifyDBInstanceNetworkTypeCallable(const ModifyDBInstanceNetworkTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNetworkTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceNetworkType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstancePayTypeOutcome RdsClient::modifyDBInstancePayType(const ModifyDBInstancePayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstancePayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstancePayTypeOutcome(ModifyDBInstancePayTypeResult(outcome.result()));
	else
		return ModifyDBInstancePayTypeOutcome(outcome.error());
}

void RdsClient::modifyDBInstancePayTypeAsync(const ModifyDBInstancePayTypeRequest& request, const ModifyDBInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstancePayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstancePayTypeOutcomeCallable RdsClient::modifyDBInstancePayTypeCallable(const ModifyDBInstancePayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstancePayTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstancePayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceProxyConfigurationOutcome RdsClient::modifyDBInstanceProxyConfiguration(const ModifyDBInstanceProxyConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceProxyConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceProxyConfigurationOutcome(ModifyDBInstanceProxyConfigurationResult(outcome.result()));
	else
		return ModifyDBInstanceProxyConfigurationOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceProxyConfigurationAsync(const ModifyDBInstanceProxyConfigurationRequest& request, const ModifyDBInstanceProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceProxyConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceProxyConfigurationOutcomeCallable RdsClient::modifyDBInstanceProxyConfigurationCallable(const ModifyDBInstanceProxyConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceProxyConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceProxyConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceSSLOutcome RdsClient::modifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request) const
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

void RdsClient::modifyDBInstanceSSLAsync(const ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceSSLOutcomeCallable RdsClient::modifyDBInstanceSSLCallable(const ModifyDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceSpecOutcome RdsClient::modifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request) const
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

void RdsClient::modifyDBInstanceSpecAsync(const ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceSpecOutcomeCallable RdsClient::modifyDBInstanceSpecCallable(const ModifyDBInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceTDEOutcome RdsClient::modifyDBInstanceTDE(const ModifyDBInstanceTDERequest &request) const
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

void RdsClient::modifyDBInstanceTDEAsync(const ModifyDBInstanceTDERequest& request, const ModifyDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceTDEOutcomeCallable RdsClient::modifyDBInstanceTDECallable(const ModifyDBInstanceTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceTDEOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBProxyOutcome RdsClient::modifyDBProxy(const ModifyDBProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBProxyOutcome(ModifyDBProxyResult(outcome.result()));
	else
		return ModifyDBProxyOutcome(outcome.error());
}

void RdsClient::modifyDBProxyAsync(const ModifyDBProxyRequest& request, const ModifyDBProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBProxyOutcomeCallable RdsClient::modifyDBProxyCallable(const ModifyDBProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBProxyOutcome()>>(
			[this, request]()
			{
			return this->modifyDBProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBProxyEndpointOutcome RdsClient::modifyDBProxyEndpoint(const ModifyDBProxyEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBProxyEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBProxyEndpointOutcome(ModifyDBProxyEndpointResult(outcome.result()));
	else
		return ModifyDBProxyEndpointOutcome(outcome.error());
}

void RdsClient::modifyDBProxyEndpointAsync(const ModifyDBProxyEndpointRequest& request, const ModifyDBProxyEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBProxyEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBProxyEndpointOutcomeCallable RdsClient::modifyDBProxyEndpointCallable(const ModifyDBProxyEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBProxyEndpointOutcome()>>(
			[this, request]()
			{
			return this->modifyDBProxyEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBProxyEndpointAddressOutcome RdsClient::modifyDBProxyEndpointAddress(const ModifyDBProxyEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBProxyEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBProxyEndpointAddressOutcome(ModifyDBProxyEndpointAddressResult(outcome.result()));
	else
		return ModifyDBProxyEndpointAddressOutcome(outcome.error());
}

void RdsClient::modifyDBProxyEndpointAddressAsync(const ModifyDBProxyEndpointAddressRequest& request, const ModifyDBProxyEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBProxyEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBProxyEndpointAddressOutcomeCallable RdsClient::modifyDBProxyEndpointAddressCallable(const ModifyDBProxyEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBProxyEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->modifyDBProxyEndpointAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBProxyInstanceOutcome RdsClient::modifyDBProxyInstance(const ModifyDBProxyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBProxyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBProxyInstanceOutcome(ModifyDBProxyInstanceResult(outcome.result()));
	else
		return ModifyDBProxyInstanceOutcome(outcome.error());
}

void RdsClient::modifyDBProxyInstanceAsync(const ModifyDBProxyInstanceRequest& request, const ModifyDBProxyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBProxyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBProxyInstanceOutcomeCallable RdsClient::modifyDBProxyInstanceCallable(const ModifyDBProxyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBProxyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyDBProxyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDTCSecurityIpHostsForSQLServerOutcome RdsClient::modifyDTCSecurityIpHostsForSQLServer(const ModifyDTCSecurityIpHostsForSQLServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDTCSecurityIpHostsForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDTCSecurityIpHostsForSQLServerOutcome(ModifyDTCSecurityIpHostsForSQLServerResult(outcome.result()));
	else
		return ModifyDTCSecurityIpHostsForSQLServerOutcome(outcome.error());
}

void RdsClient::modifyDTCSecurityIpHostsForSQLServerAsync(const ModifyDTCSecurityIpHostsForSQLServerRequest& request, const ModifyDTCSecurityIpHostsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDTCSecurityIpHostsForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDTCSecurityIpHostsForSQLServerOutcomeCallable RdsClient::modifyDTCSecurityIpHostsForSQLServerCallable(const ModifyDTCSecurityIpHostsForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDTCSecurityIpHostsForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->modifyDTCSecurityIpHostsForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDedicatedHostAccountOutcome RdsClient::modifyDedicatedHostAccount(const ModifyDedicatedHostAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostAccountOutcome(ModifyDedicatedHostAccountResult(outcome.result()));
	else
		return ModifyDedicatedHostAccountOutcome(outcome.error());
}

void RdsClient::modifyDedicatedHostAccountAsync(const ModifyDedicatedHostAccountRequest& request, const ModifyDedicatedHostAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDedicatedHostAccountOutcomeCallable RdsClient::modifyDedicatedHostAccountCallable(const ModifyDedicatedHostAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostAccountOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDedicatedHostAttributeOutcome RdsClient::modifyDedicatedHostAttribute(const ModifyDedicatedHostAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostAttributeOutcome(ModifyDedicatedHostAttributeResult(outcome.result()));
	else
		return ModifyDedicatedHostAttributeOutcome(outcome.error());
}

void RdsClient::modifyDedicatedHostAttributeAsync(const ModifyDedicatedHostAttributeRequest& request, const ModifyDedicatedHostAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDedicatedHostAttributeOutcomeCallable RdsClient::modifyDedicatedHostAttributeCallable(const ModifyDedicatedHostAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDedicatedHostGroupAttributeOutcome RdsClient::modifyDedicatedHostGroupAttribute(const ModifyDedicatedHostGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostGroupAttributeOutcome(ModifyDedicatedHostGroupAttributeResult(outcome.result()));
	else
		return ModifyDedicatedHostGroupAttributeOutcome(outcome.error());
}

void RdsClient::modifyDedicatedHostGroupAttributeAsync(const ModifyDedicatedHostGroupAttributeRequest& request, const ModifyDedicatedHostGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDedicatedHostGroupAttributeOutcomeCallable RdsClient::modifyDedicatedHostGroupAttributeCallable(const ModifyDedicatedHostGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDedicatedHostUserOutcome RdsClient::modifyDedicatedHostUser(const ModifyDedicatedHostUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDedicatedHostUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDedicatedHostUserOutcome(ModifyDedicatedHostUserResult(outcome.result()));
	else
		return ModifyDedicatedHostUserOutcome(outcome.error());
}

void RdsClient::modifyDedicatedHostUserAsync(const ModifyDedicatedHostUserRequest& request, const ModifyDedicatedHostUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDedicatedHostUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDedicatedHostUserOutcomeCallable RdsClient::modifyDedicatedHostUserCallable(const ModifyDedicatedHostUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDedicatedHostUserOutcome()>>(
			[this, request]()
			{
			return this->modifyDedicatedHostUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyHASwitchConfigOutcome RdsClient::modifyHASwitchConfig(const ModifyHASwitchConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHASwitchConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHASwitchConfigOutcome(ModifyHASwitchConfigResult(outcome.result()));
	else
		return ModifyHASwitchConfigOutcome(outcome.error());
}

void RdsClient::modifyHASwitchConfigAsync(const ModifyHASwitchConfigRequest& request, const ModifyHASwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHASwitchConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyHASwitchConfigOutcomeCallable RdsClient::modifyHASwitchConfigCallable(const ModifyHASwitchConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHASwitchConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyHASwitchConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyInstanceAutoRenewalAttributeOutcome RdsClient::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) const
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

void RdsClient::modifyInstanceAutoRenewalAttributeAsync(const ModifyInstanceAutoRenewalAttributeRequest& request, const ModifyInstanceAutoRenewalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAutoRenewalAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyInstanceAutoRenewalAttributeOutcomeCallable RdsClient::modifyInstanceAutoRenewalAttributeCallable(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAutoRenewalAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAutoRenewalAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyInstanceCrossBackupPolicyOutcome RdsClient::modifyInstanceCrossBackupPolicy(const ModifyInstanceCrossBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceCrossBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceCrossBackupPolicyOutcome(ModifyInstanceCrossBackupPolicyResult(outcome.result()));
	else
		return ModifyInstanceCrossBackupPolicyOutcome(outcome.error());
}

void RdsClient::modifyInstanceCrossBackupPolicyAsync(const ModifyInstanceCrossBackupPolicyRequest& request, const ModifyInstanceCrossBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceCrossBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyInstanceCrossBackupPolicyOutcomeCallable RdsClient::modifyInstanceCrossBackupPolicyCallable(const ModifyInstanceCrossBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceCrossBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceCrossBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyParameterOutcome RdsClient::modifyParameter(const ModifyParameterRequest &request) const
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

void RdsClient::modifyParameterAsync(const ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyParameterOutcomeCallable RdsClient::modifyParameterCallable(const ModifyParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParameterOutcome()>>(
			[this, request]()
			{
			return this->modifyParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyParameterGroupOutcome RdsClient::modifyParameterGroup(const ModifyParameterGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyParameterGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyParameterGroupOutcome(ModifyParameterGroupResult(outcome.result()));
	else
		return ModifyParameterGroupOutcome(outcome.error());
}

void RdsClient::modifyParameterGroupAsync(const ModifyParameterGroupRequest& request, const ModifyParameterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameterGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyParameterGroupOutcomeCallable RdsClient::modifyParameterGroupCallable(const ModifyParameterGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParameterGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyParameterGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyReadWriteSplittingConnectionOutcome RdsClient::modifyReadWriteSplittingConnection(const ModifyReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReadWriteSplittingConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReadWriteSplittingConnectionOutcome(ModifyReadWriteSplittingConnectionResult(outcome.result()));
	else
		return ModifyReadWriteSplittingConnectionOutcome(outcome.error());
}

void RdsClient::modifyReadWriteSplittingConnectionAsync(const ModifyReadWriteSplittingConnectionRequest& request, const ModifyReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReadWriteSplittingConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyReadWriteSplittingConnectionOutcomeCallable RdsClient::modifyReadWriteSplittingConnectionCallable(const ModifyReadWriteSplittingConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReadWriteSplittingConnectionOutcome()>>(
			[this, request]()
			{
			return this->modifyReadWriteSplittingConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyReadonlyInstanceDelayReplicationTimeOutcome RdsClient::modifyReadonlyInstanceDelayReplicationTime(const ModifyReadonlyInstanceDelayReplicationTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReadonlyInstanceDelayReplicationTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReadonlyInstanceDelayReplicationTimeOutcome(ModifyReadonlyInstanceDelayReplicationTimeResult(outcome.result()));
	else
		return ModifyReadonlyInstanceDelayReplicationTimeOutcome(outcome.error());
}

void RdsClient::modifyReadonlyInstanceDelayReplicationTimeAsync(const ModifyReadonlyInstanceDelayReplicationTimeRequest& request, const ModifyReadonlyInstanceDelayReplicationTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReadonlyInstanceDelayReplicationTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyReadonlyInstanceDelayReplicationTimeOutcomeCallable RdsClient::modifyReadonlyInstanceDelayReplicationTimeCallable(const ModifyReadonlyInstanceDelayReplicationTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReadonlyInstanceDelayReplicationTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyReadonlyInstanceDelayReplicationTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyResourceGroupOutcome RdsClient::modifyResourceGroup(const ModifyResourceGroupRequest &request) const
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

void RdsClient::modifyResourceGroupAsync(const ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyResourceGroupOutcomeCallable RdsClient::modifyResourceGroupCallable(const ModifyResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifySQLCollectorPolicyOutcome RdsClient::modifySQLCollectorPolicy(const ModifySQLCollectorPolicyRequest &request) const
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

void RdsClient::modifySQLCollectorPolicyAsync(const ModifySQLCollectorPolicyRequest& request, const ModifySQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySQLCollectorPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifySQLCollectorPolicyOutcomeCallable RdsClient::modifySQLCollectorPolicyCallable(const ModifySQLCollectorPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySQLCollectorPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifySQLCollectorPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifySQLCollectorRetentionOutcome RdsClient::modifySQLCollectorRetention(const ModifySQLCollectorRetentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySQLCollectorRetentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySQLCollectorRetentionOutcome(ModifySQLCollectorRetentionResult(outcome.result()));
	else
		return ModifySQLCollectorRetentionOutcome(outcome.error());
}

void RdsClient::modifySQLCollectorRetentionAsync(const ModifySQLCollectorRetentionRequest& request, const ModifySQLCollectorRetentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySQLCollectorRetention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifySQLCollectorRetentionOutcomeCallable RdsClient::modifySQLCollectorRetentionCallable(const ModifySQLCollectorRetentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySQLCollectorRetentionOutcome()>>(
			[this, request]()
			{
			return this->modifySQLCollectorRetention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifySecurityGroupConfigurationOutcome RdsClient::modifySecurityGroupConfiguration(const ModifySecurityGroupConfigurationRequest &request) const
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

void RdsClient::modifySecurityGroupConfigurationAsync(const ModifySecurityGroupConfigurationRequest& request, const ModifySecurityGroupConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityGroupConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifySecurityGroupConfigurationOutcomeCallable RdsClient::modifySecurityGroupConfigurationCallable(const ModifySecurityGroupConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityGroupConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityGroupConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifySecurityIpsOutcome RdsClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
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

void RdsClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifySecurityIpsOutcomeCallable RdsClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::PurgeDBInstanceLogOutcome RdsClient::purgeDBInstanceLog(const PurgeDBInstanceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PurgeDBInstanceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PurgeDBInstanceLogOutcome(PurgeDBInstanceLogResult(outcome.result()));
	else
		return PurgeDBInstanceLogOutcome(outcome.error());
}

void RdsClient::purgeDBInstanceLogAsync(const PurgeDBInstanceLogRequest& request, const PurgeDBInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, purgeDBInstanceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::PurgeDBInstanceLogOutcomeCallable RdsClient::purgeDBInstanceLogCallable(const PurgeDBInstanceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PurgeDBInstanceLogOutcome()>>(
			[this, request]()
			{
			return this->purgeDBInstanceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RebuildDBInstanceOutcome RdsClient::rebuildDBInstance(const RebuildDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebuildDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebuildDBInstanceOutcome(RebuildDBInstanceResult(outcome.result()));
	else
		return RebuildDBInstanceOutcome(outcome.error());
}

void RdsClient::rebuildDBInstanceAsync(const RebuildDBInstanceRequest& request, const RebuildDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebuildDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RebuildDBInstanceOutcomeCallable RdsClient::rebuildDBInstanceCallable(const RebuildDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebuildDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebuildDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RecoveryDBInstanceOutcome RdsClient::recoveryDBInstance(const RecoveryDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecoveryDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoveryDBInstanceOutcome(RecoveryDBInstanceResult(outcome.result()));
	else
		return RecoveryDBInstanceOutcome(outcome.error());
}

void RdsClient::recoveryDBInstanceAsync(const RecoveryDBInstanceRequest& request, const RecoveryDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoveryDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RecoveryDBInstanceOutcomeCallable RdsClient::recoveryDBInstanceCallable(const RecoveryDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoveryDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->recoveryDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReleaseInstanceConnectionOutcome RdsClient::releaseInstanceConnection(const ReleaseInstanceConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceConnectionOutcome(ReleaseInstanceConnectionResult(outcome.result()));
	else
		return ReleaseInstanceConnectionOutcome(outcome.error());
}

void RdsClient::releaseInstanceConnectionAsync(const ReleaseInstanceConnectionRequest& request, const ReleaseInstanceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstanceConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReleaseInstanceConnectionOutcomeCallable RdsClient::releaseInstanceConnectionCallable(const ReleaseInstanceConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstanceConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReleaseInstancePublicConnectionOutcome RdsClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
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

void RdsClient::releaseInstancePublicConnectionAsync(const ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReleaseInstancePublicConnectionOutcomeCallable RdsClient::releaseInstancePublicConnectionCallable(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReleaseReadWriteSplittingConnectionOutcome RdsClient::releaseReadWriteSplittingConnection(const ReleaseReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseReadWriteSplittingConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseReadWriteSplittingConnectionOutcome(ReleaseReadWriteSplittingConnectionResult(outcome.result()));
	else
		return ReleaseReadWriteSplittingConnectionOutcome(outcome.error());
}

void RdsClient::releaseReadWriteSplittingConnectionAsync(const ReleaseReadWriteSplittingConnectionRequest& request, const ReleaseReadWriteSplittingConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseReadWriteSplittingConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReleaseReadWriteSplittingConnectionOutcomeCallable RdsClient::releaseReadWriteSplittingConnectionCallable(const ReleaseReadWriteSplittingConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseReadWriteSplittingConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseReadWriteSplittingConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RemoveTagsFromResourceOutcome RdsClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTagsFromResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTagsFromResourceOutcome(RemoveTagsFromResourceResult(outcome.result()));
	else
		return RemoveTagsFromResourceOutcome(outcome.error());
}

void RdsClient::removeTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTagsFromResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RemoveTagsFromResourceOutcomeCallable RdsClient::removeTagsFromResourceCallable(const RemoveTagsFromResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTagsFromResourceOutcome()>>(
			[this, request]()
			{
			return this->removeTagsFromResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RenewInstanceOutcome RdsClient::renewInstance(const RenewInstanceRequest &request) const
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

void RdsClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RenewInstanceOutcomeCallable RdsClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ReplaceDedicatedHostOutcome RdsClient::replaceDedicatedHost(const ReplaceDedicatedHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceDedicatedHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceDedicatedHostOutcome(ReplaceDedicatedHostResult(outcome.result()));
	else
		return ReplaceDedicatedHostOutcome(outcome.error());
}

void RdsClient::replaceDedicatedHostAsync(const ReplaceDedicatedHostRequest& request, const ReplaceDedicatedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceDedicatedHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReplaceDedicatedHostOutcomeCallable RdsClient::replaceDedicatedHostCallable(const ReplaceDedicatedHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceDedicatedHostOutcome()>>(
			[this, request]()
			{
			return this->replaceDedicatedHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResetAccountOutcome RdsClient::resetAccount(const ResetAccountRequest &request) const
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

void RdsClient::resetAccountAsync(const ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ResetAccountOutcomeCallable RdsClient::resetAccountCallable(const ResetAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountOutcome()>>(
			[this, request]()
			{
			return this->resetAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResetAccountForPGOutcome RdsClient::resetAccountForPG(const ResetAccountForPGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountForPGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountForPGOutcome(ResetAccountForPGResult(outcome.result()));
	else
		return ResetAccountForPGOutcome(outcome.error());
}

void RdsClient::resetAccountForPGAsync(const ResetAccountForPGRequest& request, const ResetAccountForPGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountForPG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ResetAccountForPGOutcomeCallable RdsClient::resetAccountForPGCallable(const ResetAccountForPGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountForPGOutcome()>>(
			[this, request]()
			{
			return this->resetAccountForPG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResetAccountPasswordOutcome RdsClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void RdsClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ResetAccountPasswordOutcomeCallable RdsClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResetHostAccountPasswordOutcome RdsClient::resetHostAccountPassword(const ResetHostAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetHostAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetHostAccountPasswordOutcome(ResetHostAccountPasswordResult(outcome.result()));
	else
		return ResetHostAccountPasswordOutcome(outcome.error());
}

void RdsClient::resetHostAccountPasswordAsync(const ResetHostAccountPasswordRequest& request, const ResetHostAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetHostAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ResetHostAccountPasswordOutcomeCallable RdsClient::resetHostAccountPasswordCallable(const ResetHostAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetHostAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetHostAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RestartDBInstanceOutcome RdsClient::restartDBInstance(const RestartDBInstanceRequest &request) const
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

void RdsClient::restartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RestartDBInstanceOutcomeCallable RdsClient::restartDBInstanceCallable(const RestartDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RestartDedicatedHostOutcome RdsClient::restartDedicatedHost(const RestartDedicatedHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDedicatedHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDedicatedHostOutcome(RestartDedicatedHostResult(outcome.result()));
	else
		return RestartDedicatedHostOutcome(outcome.error());
}

void RdsClient::restartDedicatedHostAsync(const RestartDedicatedHostRequest& request, const RestartDedicatedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDedicatedHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RestartDedicatedHostOutcomeCallable RdsClient::restartDedicatedHostCallable(const RestartDedicatedHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDedicatedHostOutcome()>>(
			[this, request]()
			{
			return this->restartDedicatedHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RestoreDdrTableOutcome RdsClient::restoreDdrTable(const RestoreDdrTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreDdrTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreDdrTableOutcome(RestoreDdrTableResult(outcome.result()));
	else
		return RestoreDdrTableOutcome(outcome.error());
}

void RdsClient::restoreDdrTableAsync(const RestoreDdrTableRequest& request, const RestoreDdrTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreDdrTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RestoreDdrTableOutcomeCallable RdsClient::restoreDdrTableCallable(const RestoreDdrTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreDdrTableOutcome()>>(
			[this, request]()
			{
			return this->restoreDdrTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RestoreTableOutcome RdsClient::restoreTable(const RestoreTableRequest &request) const
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

void RdsClient::restoreTableAsync(const RestoreTableRequest& request, const RestoreTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RestoreTableOutcomeCallable RdsClient::restoreTableCallable(const RestoreTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreTableOutcome()>>(
			[this, request]()
			{
			return this->restoreTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RevokeAccountPrivilegeOutcome RdsClient::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) const
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

void RdsClient::revokeAccountPrivilegeAsync(const RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RevokeAccountPrivilegeOutcomeCallable RdsClient::revokeAccountPrivilegeCallable(const RevokeAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->revokeAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RevokeOperatorPermissionOutcome RdsClient::revokeOperatorPermission(const RevokeOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeOperatorPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeOperatorPermissionOutcome(RevokeOperatorPermissionResult(outcome.result()));
	else
		return RevokeOperatorPermissionOutcome(outcome.error());
}

void RdsClient::revokeOperatorPermissionAsync(const RevokeOperatorPermissionRequest& request, const RevokeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeOperatorPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RevokeOperatorPermissionOutcomeCallable RdsClient::revokeOperatorPermissionCallable(const RevokeOperatorPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeOperatorPermissionOutcome()>>(
			[this, request]()
			{
			return this->revokeOperatorPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SignEventActionOutcome RdsClient::signEventAction(const SignEventActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SignEventActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignEventActionOutcome(SignEventActionResult(outcome.result()));
	else
		return SignEventActionOutcome(outcome.error());
}

void RdsClient::signEventActionAsync(const SignEventActionRequest& request, const SignEventActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, signEventAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SignEventActionOutcomeCallable RdsClient::signEventActionCallable(const SignEventActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignEventActionOutcome()>>(
			[this, request]()
			{
			return this->signEventAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StartDBInstanceOutcome RdsClient::startDBInstance(const StartDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDBInstanceOutcome(StartDBInstanceResult(outcome.result()));
	else
		return StartDBInstanceOutcome(outcome.error());
}

void RdsClient::startDBInstanceAsync(const StartDBInstanceRequest& request, const StartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StartDBInstanceOutcomeCallable RdsClient::startDBInstanceCallable(const StartDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->startDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StopDBInstanceOutcome RdsClient::stopDBInstance(const StopDBInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDBInstanceOutcome(StopDBInstanceResult(outcome.result()));
	else
		return StopDBInstanceOutcome(outcome.error());
}

void RdsClient::stopDBInstanceAsync(const StopDBInstanceRequest& request, const StopDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StopDBInstanceOutcomeCallable RdsClient::stopDBInstanceCallable(const StopDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SwitchDBInstanceHAOutcome RdsClient::switchDBInstanceHA(const SwitchDBInstanceHARequest &request) const
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

void RdsClient::switchDBInstanceHAAsync(const SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceHA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SwitchDBInstanceHAOutcomeCallable RdsClient::switchDBInstanceHACallable(const SwitchDBInstanceHARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceHAOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceHA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SwitchDBInstanceNetTypeOutcome RdsClient::switchDBInstanceNetType(const SwitchDBInstanceNetTypeRequest &request) const
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

void RdsClient::switchDBInstanceNetTypeAsync(const SwitchDBInstanceNetTypeRequest& request, const SwitchDBInstanceNetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceNetType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SwitchDBInstanceNetTypeOutcomeCallable RdsClient::switchDBInstanceNetTypeCallable(const SwitchDBInstanceNetTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceNetTypeOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceNetType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::SwitchDBInstanceVpcOutcome RdsClient::switchDBInstanceVpc(const SwitchDBInstanceVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchDBInstanceVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchDBInstanceVpcOutcome(SwitchDBInstanceVpcResult(outcome.result()));
	else
		return SwitchDBInstanceVpcOutcome(outcome.error());
}

void RdsClient::switchDBInstanceVpcAsync(const SwitchDBInstanceVpcRequest& request, const SwitchDBInstanceVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::SwitchDBInstanceVpcOutcomeCallable RdsClient::switchDBInstanceVpcCallable(const SwitchDBInstanceVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceVpcOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::TagResourcesOutcome RdsClient::tagResources(const TagResourcesRequest &request) const
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

void RdsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::TagResourcesOutcomeCallable RdsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::TerminateMigrateTaskOutcome RdsClient::terminateMigrateTask(const TerminateMigrateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TerminateMigrateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminateMigrateTaskOutcome(TerminateMigrateTaskResult(outcome.result()));
	else
		return TerminateMigrateTaskOutcome(outcome.error());
}

void RdsClient::terminateMigrateTaskAsync(const TerminateMigrateTaskRequest& request, const TerminateMigrateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateMigrateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::TerminateMigrateTaskOutcomeCallable RdsClient::terminateMigrateTaskCallable(const TerminateMigrateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateMigrateTaskOutcome()>>(
			[this, request]()
			{
			return this->terminateMigrateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::TransformDBInstancePayTypeOutcome RdsClient::transformDBInstancePayType(const TransformDBInstancePayTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformDBInstancePayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformDBInstancePayTypeOutcome(TransformDBInstancePayTypeResult(outcome.result()));
	else
		return TransformDBInstancePayTypeOutcome(outcome.error());
}

void RdsClient::transformDBInstancePayTypeAsync(const TransformDBInstancePayTypeRequest& request, const TransformDBInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformDBInstancePayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::TransformDBInstancePayTypeOutcomeCallable RdsClient::transformDBInstancePayTypeCallable(const TransformDBInstancePayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformDBInstancePayTypeOutcome()>>(
			[this, request]()
			{
			return this->transformDBInstancePayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UnlockAccountOutcome RdsClient::unlockAccount(const UnlockAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockAccountOutcome(UnlockAccountResult(outcome.result()));
	else
		return UnlockAccountOutcome(outcome.error());
}

void RdsClient::unlockAccountAsync(const UnlockAccountRequest& request, const UnlockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UnlockAccountOutcomeCallable RdsClient::unlockAccountCallable(const UnlockAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockAccountOutcome()>>(
			[this, request]()
			{
			return this->unlockAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UntagResourcesOutcome RdsClient::untagResources(const UntagResourcesRequest &request) const
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

void RdsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UntagResourcesOutcomeCallable RdsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBInstanceEngineVersionOutcome RdsClient::upgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request) const
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

void RdsClient::upgradeDBInstanceEngineVersionAsync(const UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceEngineVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBInstanceEngineVersionOutcomeCallable RdsClient::upgradeDBInstanceEngineVersionCallable(const UpgradeDBInstanceEngineVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceEngineVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceEngineVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBInstanceKernelVersionOutcome RdsClient::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) const
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

void RdsClient::upgradeDBInstanceKernelVersionAsync(const UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceKernelVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBInstanceKernelVersionOutcomeCallable RdsClient::upgradeDBInstanceKernelVersionCallable(const UpgradeDBInstanceKernelVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceKernelVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceKernelVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBProxyInstanceKernelVersionOutcome RdsClient::upgradeDBProxyInstanceKernelVersion(const UpgradeDBProxyInstanceKernelVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBProxyInstanceKernelVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBProxyInstanceKernelVersionOutcome(UpgradeDBProxyInstanceKernelVersionResult(outcome.result()));
	else
		return UpgradeDBProxyInstanceKernelVersionOutcome(outcome.error());
}

void RdsClient::upgradeDBProxyInstanceKernelVersionAsync(const UpgradeDBProxyInstanceKernelVersionRequest& request, const UpgradeDBProxyInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBProxyInstanceKernelVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBProxyInstanceKernelVersionOutcomeCallable RdsClient::upgradeDBProxyInstanceKernelVersionCallable(const UpgradeDBProxyInstanceKernelVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBProxyInstanceKernelVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBProxyInstanceKernelVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

