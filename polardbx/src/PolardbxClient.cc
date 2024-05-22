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

#include <alibabacloud/polardbx/PolardbxClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

namespace
{
	const std::string SERVICE_NAME = "polardbx";
}

PolardbxClient::PolardbxClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardbx");
}

PolardbxClient::PolardbxClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardbx");
}

PolardbxClient::PolardbxClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "polardbx");
}

PolardbxClient::~PolardbxClient()
{}

PolardbxClient::AlignStoragePrimaryAzoneOutcome PolardbxClient::alignStoragePrimaryAzone(const AlignStoragePrimaryAzoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AlignStoragePrimaryAzoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AlignStoragePrimaryAzoneOutcome(AlignStoragePrimaryAzoneResult(outcome.result()));
	else
		return AlignStoragePrimaryAzoneOutcome(outcome.error());
}

void PolardbxClient::alignStoragePrimaryAzoneAsync(const AlignStoragePrimaryAzoneRequest& request, const AlignStoragePrimaryAzoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, alignStoragePrimaryAzone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::AlignStoragePrimaryAzoneOutcomeCallable PolardbxClient::alignStoragePrimaryAzoneCallable(const AlignStoragePrimaryAzoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AlignStoragePrimaryAzoneOutcome()>>(
			[this, request]()
			{
			return this->alignStoragePrimaryAzone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::AllocateColdDataVolumeOutcome PolardbxClient::allocateColdDataVolume(const AllocateColdDataVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateColdDataVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateColdDataVolumeOutcome(AllocateColdDataVolumeResult(outcome.result()));
	else
		return AllocateColdDataVolumeOutcome(outcome.error());
}

void PolardbxClient::allocateColdDataVolumeAsync(const AllocateColdDataVolumeRequest& request, const AllocateColdDataVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateColdDataVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::AllocateColdDataVolumeOutcomeCallable PolardbxClient::allocateColdDataVolumeCallable(const AllocateColdDataVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateColdDataVolumeOutcome()>>(
			[this, request]()
			{
			return this->allocateColdDataVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::AllocateInstancePublicConnectionOutcome PolardbxClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
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

void PolardbxClient::allocateInstancePublicConnectionAsync(const AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::AllocateInstancePublicConnectionOutcomeCallable PolardbxClient::allocateInstancePublicConnectionCallable(const AllocateInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CancelActiveOperationTasksOutcome PolardbxClient::cancelActiveOperationTasks(const CancelActiveOperationTasksRequest &request) const
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

void PolardbxClient::cancelActiveOperationTasksAsync(const CancelActiveOperationTasksRequest& request, const CancelActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CancelActiveOperationTasksOutcomeCallable PolardbxClient::cancelActiveOperationTasksCallable(const CancelActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->cancelActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ChangeResourceGroupOutcome PolardbxClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void PolardbxClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ChangeResourceGroupOutcomeCallable PolardbxClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CheckCloudResourceAuthorizedOutcome PolardbxClient::checkCloudResourceAuthorized(const CheckCloudResourceAuthorizedRequest &request) const
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

void PolardbxClient::checkCloudResourceAuthorizedAsync(const CheckCloudResourceAuthorizedRequest& request, const CheckCloudResourceAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCloudResourceAuthorized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CheckCloudResourceAuthorizedOutcomeCallable PolardbxClient::checkCloudResourceAuthorizedCallable(const CheckCloudResourceAuthorizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCloudResourceAuthorizedOutcome()>>(
			[this, request]()
			{
			return this->checkCloudResourceAuthorized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateAccountOutcome PolardbxClient::createAccount(const CreateAccountRequest &request) const
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

void PolardbxClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateAccountOutcomeCallable PolardbxClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateBackupOutcome PolardbxClient::createBackup(const CreateBackupRequest &request) const
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

void PolardbxClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateBackupOutcomeCallable PolardbxClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateDBOutcome PolardbxClient::createDB(const CreateDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBOutcome(CreateDBResult(outcome.result()));
	else
		return CreateDBOutcome(outcome.error());
}

void PolardbxClient::createDBAsync(const CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateDBOutcomeCallable PolardbxClient::createDBCallable(const CreateDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBOutcome()>>(
			[this, request]()
			{
			return this->createDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateDBInstanceOutcome PolardbxClient::createDBInstance(const CreateDBInstanceRequest &request) const
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

void PolardbxClient::createDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateDBInstanceOutcomeCallable PolardbxClient::createDBInstanceCallable(const CreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::CreateSuperAccountOutcome PolardbxClient::createSuperAccount(const CreateSuperAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSuperAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSuperAccountOutcome(CreateSuperAccountResult(outcome.result()));
	else
		return CreateSuperAccountOutcome(outcome.error());
}

void PolardbxClient::createSuperAccountAsync(const CreateSuperAccountRequest& request, const CreateSuperAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSuperAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::CreateSuperAccountOutcomeCallable PolardbxClient::createSuperAccountCallable(const CreateSuperAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSuperAccountOutcome()>>(
			[this, request]()
			{
			return this->createSuperAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DeleteAccountOutcome PolardbxClient::deleteAccount(const DeleteAccountRequest &request) const
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

void PolardbxClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DeleteAccountOutcomeCallable PolardbxClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DeleteDBOutcome PolardbxClient::deleteDB(const DeleteDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBOutcome(DeleteDBResult(outcome.result()));
	else
		return DeleteDBOutcome(outcome.error());
}

void PolardbxClient::deleteDBAsync(const DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DeleteDBOutcomeCallable PolardbxClient::deleteDBCallable(const DeleteDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBOutcome()>>(
			[this, request]()
			{
			return this->deleteDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DeleteDBInstanceOutcome PolardbxClient::deleteDBInstance(const DeleteDBInstanceRequest &request) const
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

void PolardbxClient::deleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DeleteDBInstanceOutcomeCallable PolardbxClient::deleteDBInstanceCallable(const DeleteDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeAccountListOutcome PolardbxClient::describeAccountList(const DescribeAccountListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountListOutcome(DescribeAccountListResult(outcome.result()));
	else
		return DescribeAccountListOutcome(outcome.error());
}

void PolardbxClient::describeAccountListAsync(const DescribeAccountListRequest& request, const DescribeAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeAccountListOutcomeCallable PolardbxClient::describeAccountListCallable(const DescribeAccountListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountListOutcome()>>(
			[this, request]()
			{
			return this->describeAccountList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeActiveOperationMaintainConfOutcome PolardbxClient::describeActiveOperationMaintainConf(const DescribeActiveOperationMaintainConfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActiveOperationMaintainConfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActiveOperationMaintainConfOutcome(DescribeActiveOperationMaintainConfResult(outcome.result()));
	else
		return DescribeActiveOperationMaintainConfOutcome(outcome.error());
}

void PolardbxClient::describeActiveOperationMaintainConfAsync(const DescribeActiveOperationMaintainConfRequest& request, const DescribeActiveOperationMaintainConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationMaintainConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeActiveOperationMaintainConfOutcomeCallable PolardbxClient::describeActiveOperationMaintainConfCallable(const DescribeActiveOperationMaintainConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationMaintainConfOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationMaintainConf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeActiveOperationTaskCountOutcome PolardbxClient::describeActiveOperationTaskCount(const DescribeActiveOperationTaskCountRequest &request) const
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

void PolardbxClient::describeActiveOperationTaskCountAsync(const DescribeActiveOperationTaskCountRequest& request, const DescribeActiveOperationTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTaskCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeActiveOperationTaskCountOutcomeCallable PolardbxClient::describeActiveOperationTaskCountCallable(const DescribeActiveOperationTaskCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTaskCountOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTaskCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeActiveOperationTasksOutcome PolardbxClient::describeActiveOperationTasks(const DescribeActiveOperationTasksRequest &request) const
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

void PolardbxClient::describeActiveOperationTasksAsync(const DescribeActiveOperationTasksRequest& request, const DescribeActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeActiveOperationTasksOutcomeCallable PolardbxClient::describeActiveOperationTasksCallable(const DescribeActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeArchiveTableListOutcome PolardbxClient::describeArchiveTableList(const DescribeArchiveTableListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeArchiveTableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeArchiveTableListOutcome(DescribeArchiveTableListResult(outcome.result()));
	else
		return DescribeArchiveTableListOutcome(outcome.error());
}

void PolardbxClient::describeArchiveTableListAsync(const DescribeArchiveTableListRequest& request, const DescribeArchiveTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeArchiveTableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeArchiveTableListOutcomeCallable PolardbxClient::describeArchiveTableListCallable(const DescribeArchiveTableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeArchiveTableListOutcome()>>(
			[this, request]()
			{
			return this->describeArchiveTableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeBackupPolicyOutcome PolardbxClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
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

void PolardbxClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeBackupPolicyOutcomeCallable PolardbxClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeBackupSetOutcome PolardbxClient::describeBackupSet(const DescribeBackupSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupSetOutcome(DescribeBackupSetResult(outcome.result()));
	else
		return DescribeBackupSetOutcome(outcome.error());
}

void PolardbxClient::describeBackupSetAsync(const DescribeBackupSetRequest& request, const DescribeBackupSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeBackupSetOutcomeCallable PolardbxClient::describeBackupSetCallable(const DescribeBackupSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupSetOutcome()>>(
			[this, request]()
			{
			return this->describeBackupSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeBackupSetListOutcome PolardbxClient::describeBackupSetList(const DescribeBackupSetListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupSetListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupSetListOutcome(DescribeBackupSetListResult(outcome.result()));
	else
		return DescribeBackupSetListOutcome(outcome.error());
}

void PolardbxClient::describeBackupSetListAsync(const DescribeBackupSetListRequest& request, const DescribeBackupSetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupSetList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeBackupSetListOutcomeCallable PolardbxClient::describeBackupSetListCallable(const DescribeBackupSetListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupSetListOutcome()>>(
			[this, request]()
			{
			return this->describeBackupSetList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeBinaryLogListOutcome PolardbxClient::describeBinaryLogList(const DescribeBinaryLogListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBinaryLogListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBinaryLogListOutcome(DescribeBinaryLogListResult(outcome.result()));
	else
		return DescribeBinaryLogListOutcome(outcome.error());
}

void PolardbxClient::describeBinaryLogListAsync(const DescribeBinaryLogListRequest& request, const DescribeBinaryLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBinaryLogList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeBinaryLogListOutcomeCallable PolardbxClient::describeBinaryLogListCallable(const DescribeBinaryLogListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBinaryLogListOutcome()>>(
			[this, request]()
			{
			return this->describeBinaryLogList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeCharacterSetOutcome PolardbxClient::describeCharacterSet(const DescribeCharacterSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCharacterSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCharacterSetOutcome(DescribeCharacterSetResult(outcome.result()));
	else
		return DescribeCharacterSetOutcome(outcome.error());
}

void PolardbxClient::describeCharacterSetAsync(const DescribeCharacterSetRequest& request, const DescribeCharacterSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCharacterSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeCharacterSetOutcomeCallable PolardbxClient::describeCharacterSetCallable(const DescribeCharacterSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCharacterSetOutcome()>>(
			[this, request]()
			{
			return this->describeCharacterSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeColdDataBasicInfoOutcome PolardbxClient::describeColdDataBasicInfo(const DescribeColdDataBasicInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeColdDataBasicInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeColdDataBasicInfoOutcome(DescribeColdDataBasicInfoResult(outcome.result()));
	else
		return DescribeColdDataBasicInfoOutcome(outcome.error());
}

void PolardbxClient::describeColdDataBasicInfoAsync(const DescribeColdDataBasicInfoRequest& request, const DescribeColdDataBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeColdDataBasicInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeColdDataBasicInfoOutcomeCallable PolardbxClient::describeColdDataBasicInfoCallable(const DescribeColdDataBasicInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeColdDataBasicInfoOutcome()>>(
			[this, request]()
			{
			return this->describeColdDataBasicInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceAttributeOutcome PolardbxClient::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) const
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

void PolardbxClient::describeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceAttributeOutcomeCallable PolardbxClient::describeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceConfigOutcome PolardbxClient::describeDBInstanceConfig(const DescribeDBInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceConfigOutcome(DescribeDBInstanceConfigResult(outcome.result()));
	else
		return DescribeDBInstanceConfigOutcome(outcome.error());
}

void PolardbxClient::describeDBInstanceConfigAsync(const DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceConfigOutcomeCallable PolardbxClient::describeDBInstanceConfigCallable(const DescribeDBInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceHAOutcome PolardbxClient::describeDBInstanceHA(const DescribeDBInstanceHARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceHAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceHAOutcome(DescribeDBInstanceHAResult(outcome.result()));
	else
		return DescribeDBInstanceHAOutcome(outcome.error());
}

void PolardbxClient::describeDBInstanceHAAsync(const DescribeDBInstanceHARequest& request, const DescribeDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceHA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceHAOutcomeCallable PolardbxClient::describeDBInstanceHACallable(const DescribeDBInstanceHARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceHAOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceHA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceSSLOutcome PolardbxClient::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) const
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

void PolardbxClient::describeDBInstanceSSLAsync(const DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceSSLOutcomeCallable PolardbxClient::describeDBInstanceSSLCallable(const DescribeDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceTDEOutcome PolardbxClient::describeDBInstanceTDE(const DescribeDBInstanceTDERequest &request) const
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

void PolardbxClient::describeDBInstanceTDEAsync(const DescribeDBInstanceTDERequest& request, const DescribeDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceTDEOutcomeCallable PolardbxClient::describeDBInstanceTDECallable(const DescribeDBInstanceTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceTDEOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceTopologyOutcome PolardbxClient::describeDBInstanceTopology(const DescribeDBInstanceTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceTopologyOutcome(DescribeDBInstanceTopologyResult(outcome.result()));
	else
		return DescribeDBInstanceTopologyOutcome(outcome.error());
}

void PolardbxClient::describeDBInstanceTopologyAsync(const DescribeDBInstanceTopologyRequest& request, const DescribeDBInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceTopologyOutcomeCallable PolardbxClient::describeDBInstanceTopologyCallable(const DescribeDBInstanceTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceTopologyOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstanceViaEndpointOutcome PolardbxClient::describeDBInstanceViaEndpoint(const DescribeDBInstanceViaEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceViaEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceViaEndpointOutcome(DescribeDBInstanceViaEndpointResult(outcome.result()));
	else
		return DescribeDBInstanceViaEndpointOutcome(outcome.error());
}

void PolardbxClient::describeDBInstanceViaEndpointAsync(const DescribeDBInstanceViaEndpointRequest& request, const DescribeDBInstanceViaEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceViaEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstanceViaEndpointOutcomeCallable PolardbxClient::describeDBInstanceViaEndpointCallable(const DescribeDBInstanceViaEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceViaEndpointOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceViaEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBInstancesOutcome PolardbxClient::describeDBInstances(const DescribeDBInstancesRequest &request) const
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

void PolardbxClient::describeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBInstancesOutcomeCallable PolardbxClient::describeDBInstancesCallable(const DescribeDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDBNodePerformanceOutcome PolardbxClient::describeDBNodePerformance(const DescribeDBNodePerformanceRequest &request) const
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

void PolardbxClient::describeDBNodePerformanceAsync(const DescribeDBNodePerformanceRequest& request, const DescribeDBNodePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBNodePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDBNodePerformanceOutcomeCallable PolardbxClient::describeDBNodePerformanceCallable(const DescribeDBNodePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBNodePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBNodePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDbListOutcome PolardbxClient::describeDbList(const DescribeDbListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDbListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDbListOutcome(DescribeDbListResult(outcome.result()));
	else
		return DescribeDbListOutcome(outcome.error());
}

void PolardbxClient::describeDbListAsync(const DescribeDbListRequest& request, const DescribeDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDbList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDbListOutcomeCallable PolardbxClient::describeDbListCallable(const DescribeDbListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDbListOutcome()>>(
			[this, request]()
			{
			return this->describeDbList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeDistributeTableListOutcome PolardbxClient::describeDistributeTableList(const DescribeDistributeTableListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDistributeTableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDistributeTableListOutcome(DescribeDistributeTableListResult(outcome.result()));
	else
		return DescribeDistributeTableListOutcome(outcome.error());
}

void PolardbxClient::describeDistributeTableListAsync(const DescribeDistributeTableListRequest& request, const DescribeDistributeTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDistributeTableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeDistributeTableListOutcomeCallable PolardbxClient::describeDistributeTableListCallable(const DescribeDistributeTableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDistributeTableListOutcome()>>(
			[this, request]()
			{
			return this->describeDistributeTableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeEventsOutcome PolardbxClient::describeEvents(const DescribeEventsRequest &request) const
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

void PolardbxClient::describeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeEventsOutcomeCallable PolardbxClient::describeEventsCallable(const DescribeEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
			[this, request]()
			{
			return this->describeEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeParameterTemplatesOutcome PolardbxClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
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

void PolardbxClient::describeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeParameterTemplatesOutcomeCallable PolardbxClient::describeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeParameterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeParametersOutcome PolardbxClient::describeParameters(const DescribeParametersRequest &request) const
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

void PolardbxClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeParametersOutcomeCallable PolardbxClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeRegionsOutcome PolardbxClient::describeRegions(const DescribeRegionsRequest &request) const
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

void PolardbxClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeRegionsOutcomeCallable PolardbxClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeScaleOutMigrateTaskListOutcome PolardbxClient::describeScaleOutMigrateTaskList(const DescribeScaleOutMigrateTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScaleOutMigrateTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScaleOutMigrateTaskListOutcome(DescribeScaleOutMigrateTaskListResult(outcome.result()));
	else
		return DescribeScaleOutMigrateTaskListOutcome(outcome.error());
}

void PolardbxClient::describeScaleOutMigrateTaskListAsync(const DescribeScaleOutMigrateTaskListRequest& request, const DescribeScaleOutMigrateTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScaleOutMigrateTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeScaleOutMigrateTaskListOutcomeCallable PolardbxClient::describeScaleOutMigrateTaskListCallable(const DescribeScaleOutMigrateTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScaleOutMigrateTaskListOutcome()>>(
			[this, request]()
			{
			return this->describeScaleOutMigrateTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeSecurityIpsOutcome PolardbxClient::describeSecurityIps(const DescribeSecurityIpsRequest &request) const
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

void PolardbxClient::describeSecurityIpsAsync(const DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeSecurityIpsOutcomeCallable PolardbxClient::describeSecurityIpsCallable(const DescribeSecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeTagsOutcome PolardbxClient::describeTags(const DescribeTagsRequest &request) const
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

void PolardbxClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeTagsOutcomeCallable PolardbxClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeTasksOutcome PolardbxClient::describeTasks(const DescribeTasksRequest &request) const
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

void PolardbxClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeTasksOutcomeCallable PolardbxClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DescribeUserEncryptionKeyListOutcome PolardbxClient::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) const
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

void PolardbxClient::describeUserEncryptionKeyListAsync(const DescribeUserEncryptionKeyListRequest& request, const DescribeUserEncryptionKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserEncryptionKeyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DescribeUserEncryptionKeyListOutcomeCallable PolardbxClient::describeUserEncryptionKeyListCallable(const DescribeUserEncryptionKeyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserEncryptionKeyListOutcome()>>(
			[this, request]()
			{
			return this->describeUserEncryptionKeyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::DisableRightsSeparationOutcome PolardbxClient::disableRightsSeparation(const DisableRightsSeparationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableRightsSeparationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableRightsSeparationOutcome(DisableRightsSeparationResult(outcome.result()));
	else
		return DisableRightsSeparationOutcome(outcome.error());
}

void PolardbxClient::disableRightsSeparationAsync(const DisableRightsSeparationRequest& request, const DisableRightsSeparationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableRightsSeparation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::DisableRightsSeparationOutcomeCallable PolardbxClient::disableRightsSeparationCallable(const DisableRightsSeparationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableRightsSeparationOutcome()>>(
			[this, request]()
			{
			return this->disableRightsSeparation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::EnableRightsSeparationOutcome PolardbxClient::enableRightsSeparation(const EnableRightsSeparationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableRightsSeparationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableRightsSeparationOutcome(EnableRightsSeparationResult(outcome.result()));
	else
		return EnableRightsSeparationOutcome(outcome.error());
}

void PolardbxClient::enableRightsSeparationAsync(const EnableRightsSeparationRequest& request, const EnableRightsSeparationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableRightsSeparation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::EnableRightsSeparationOutcomeCallable PolardbxClient::enableRightsSeparationCallable(const EnableRightsSeparationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableRightsSeparationOutcome()>>(
			[this, request]()
			{
			return this->enableRightsSeparation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ListTagResourcesOutcome PolardbxClient::listTagResources(const ListTagResourcesRequest &request) const
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

void PolardbxClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ListTagResourcesOutcomeCallable PolardbxClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyAccountDescriptionOutcome PolardbxClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void PolardbxClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyAccountDescriptionOutcomeCallable PolardbxClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyAccountPrivilegeOutcome PolardbxClient::modifyAccountPrivilege(const ModifyAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountPrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountPrivilegeOutcome(ModifyAccountPrivilegeResult(outcome.result()));
	else
		return ModifyAccountPrivilegeOutcome(outcome.error());
}

void PolardbxClient::modifyAccountPrivilegeAsync(const ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountPrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyAccountPrivilegeOutcomeCallable PolardbxClient::modifyAccountPrivilegeCallable(const ModifyAccountPrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountPrivilegeOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountPrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyActiveOperationMaintainConfOutcome PolardbxClient::modifyActiveOperationMaintainConf(const ModifyActiveOperationMaintainConfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyActiveOperationMaintainConfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyActiveOperationMaintainConfOutcome(ModifyActiveOperationMaintainConfResult(outcome.result()));
	else
		return ModifyActiveOperationMaintainConfOutcome(outcome.error());
}

void PolardbxClient::modifyActiveOperationMaintainConfAsync(const ModifyActiveOperationMaintainConfRequest& request, const ModifyActiveOperationMaintainConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActiveOperationMaintainConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyActiveOperationMaintainConfOutcomeCallable PolardbxClient::modifyActiveOperationMaintainConfCallable(const ModifyActiveOperationMaintainConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActiveOperationMaintainConfOutcome()>>(
			[this, request]()
			{
			return this->modifyActiveOperationMaintainConf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyActiveOperationTasksOutcome PolardbxClient::modifyActiveOperationTasks(const ModifyActiveOperationTasksRequest &request) const
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

void PolardbxClient::modifyActiveOperationTasksAsync(const ModifyActiveOperationTasksRequest& request, const ModifyActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActiveOperationTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyActiveOperationTasksOutcomeCallable PolardbxClient::modifyActiveOperationTasksCallable(const ModifyActiveOperationTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActiveOperationTasksOutcome()>>(
			[this, request]()
			{
			return this->modifyActiveOperationTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDBInstanceClassOutcome PolardbxClient::modifyDBInstanceClass(const ModifyDBInstanceClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceClassOutcome(ModifyDBInstanceClassResult(outcome.result()));
	else
		return ModifyDBInstanceClassOutcome(outcome.error());
}

void PolardbxClient::modifyDBInstanceClassAsync(const ModifyDBInstanceClassRequest& request, const ModifyDBInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDBInstanceClassOutcomeCallable PolardbxClient::modifyDBInstanceClassCallable(const ModifyDBInstanceClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceClassOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDBInstanceConfigOutcome PolardbxClient::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) const
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

void PolardbxClient::modifyDBInstanceConfigAsync(const ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDBInstanceConfigOutcomeCallable PolardbxClient::modifyDBInstanceConfigCallable(const ModifyDBInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDBInstanceConnectionStringOutcome PolardbxClient::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) const
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

void PolardbxClient::modifyDBInstanceConnectionStringAsync(const ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDBInstanceConnectionStringOutcomeCallable PolardbxClient::modifyDBInstanceConnectionStringCallable(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDBInstanceDescriptionOutcome PolardbxClient::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) const
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

void PolardbxClient::modifyDBInstanceDescriptionAsync(const ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDBInstanceDescriptionOutcomeCallable PolardbxClient::modifyDBInstanceDescriptionCallable(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyDatabaseDescriptionOutcome PolardbxClient::modifyDatabaseDescription(const ModifyDatabaseDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseDescriptionOutcome(ModifyDatabaseDescriptionResult(outcome.result()));
	else
		return ModifyDatabaseDescriptionOutcome(outcome.error());
}

void PolardbxClient::modifyDatabaseDescriptionAsync(const ModifyDatabaseDescriptionRequest& request, const ModifyDatabaseDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyDatabaseDescriptionOutcomeCallable PolardbxClient::modifyDatabaseDescriptionCallable(const ModifyDatabaseDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifyParameterOutcome PolardbxClient::modifyParameter(const ModifyParameterRequest &request) const
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

void PolardbxClient::modifyParameterAsync(const ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifyParameterOutcomeCallable PolardbxClient::modifyParameterCallable(const ModifyParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParameterOutcome()>>(
			[this, request]()
			{
			return this->modifyParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ModifySecurityIpsOutcome PolardbxClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
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

void PolardbxClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ModifySecurityIpsOutcomeCallable PolardbxClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ReleaseColdDataVolumeOutcome PolardbxClient::releaseColdDataVolume(const ReleaseColdDataVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseColdDataVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseColdDataVolumeOutcome(ReleaseColdDataVolumeResult(outcome.result()));
	else
		return ReleaseColdDataVolumeOutcome(outcome.error());
}

void PolardbxClient::releaseColdDataVolumeAsync(const ReleaseColdDataVolumeRequest& request, const ReleaseColdDataVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseColdDataVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ReleaseColdDataVolumeOutcomeCallable PolardbxClient::releaseColdDataVolumeCallable(const ReleaseColdDataVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseColdDataVolumeOutcome()>>(
			[this, request]()
			{
			return this->releaseColdDataVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ReleaseInstancePublicConnectionOutcome PolardbxClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
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

void PolardbxClient::releaseInstancePublicConnectionAsync(const ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstancePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ReleaseInstancePublicConnectionOutcomeCallable PolardbxClient::releaseInstancePublicConnectionCallable(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstancePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseInstancePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::ResetAccountPasswordOutcome PolardbxClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void PolardbxClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::ResetAccountPasswordOutcomeCallable PolardbxClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::RestartDBInstanceOutcome PolardbxClient::restartDBInstance(const RestartDBInstanceRequest &request) const
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

void PolardbxClient::restartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::RestartDBInstanceOutcomeCallable PolardbxClient::restartDBInstanceCallable(const RestartDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::SwitchDBInstanceHAOutcome PolardbxClient::switchDBInstanceHA(const SwitchDBInstanceHARequest &request) const
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

void PolardbxClient::switchDBInstanceHAAsync(const SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchDBInstanceHA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::SwitchDBInstanceHAOutcomeCallable PolardbxClient::switchDBInstanceHACallable(const SwitchDBInstanceHARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchDBInstanceHAOutcome()>>(
			[this, request]()
			{
			return this->switchDBInstanceHA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::TagResourcesOutcome PolardbxClient::tagResources(const TagResourcesRequest &request) const
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

void PolardbxClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::TagResourcesOutcomeCallable PolardbxClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::UntagResourcesOutcome PolardbxClient::untagResources(const UntagResourcesRequest &request) const
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

void PolardbxClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::UntagResourcesOutcomeCallable PolardbxClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::UpdateBackupPolicyOutcome PolardbxClient::updateBackupPolicy(const UpdateBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBackupPolicyOutcome(UpdateBackupPolicyResult(outcome.result()));
	else
		return UpdateBackupPolicyOutcome(outcome.error());
}

void PolardbxClient::updateBackupPolicyAsync(const UpdateBackupPolicyRequest& request, const UpdateBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::UpdateBackupPolicyOutcomeCallable PolardbxClient::updateBackupPolicyCallable(const UpdateBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::UpdateDBInstanceSSLOutcome PolardbxClient::updateDBInstanceSSL(const UpdateDBInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDBInstanceSSLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDBInstanceSSLOutcome(UpdateDBInstanceSSLResult(outcome.result()));
	else
		return UpdateDBInstanceSSLOutcome(outcome.error());
}

void PolardbxClient::updateDBInstanceSSLAsync(const UpdateDBInstanceSSLRequest& request, const UpdateDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDBInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::UpdateDBInstanceSSLOutcomeCallable PolardbxClient::updateDBInstanceSSLCallable(const UpdateDBInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDBInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->updateDBInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::UpdateDBInstanceTDEOutcome PolardbxClient::updateDBInstanceTDE(const UpdateDBInstanceTDERequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDBInstanceTDEOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDBInstanceTDEOutcome(UpdateDBInstanceTDEResult(outcome.result()));
	else
		return UpdateDBInstanceTDEOutcome(outcome.error());
}

void PolardbxClient::updateDBInstanceTDEAsync(const UpdateDBInstanceTDERequest& request, const UpdateDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDBInstanceTDE(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::UpdateDBInstanceTDEOutcomeCallable PolardbxClient::updateDBInstanceTDECallable(const UpdateDBInstanceTDERequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDBInstanceTDEOutcome()>>(
			[this, request]()
			{
			return this->updateDBInstanceTDE(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::UpdatePolarDBXInstanceNodeOutcome PolardbxClient::updatePolarDBXInstanceNode(const UpdatePolarDBXInstanceNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePolarDBXInstanceNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePolarDBXInstanceNodeOutcome(UpdatePolarDBXInstanceNodeResult(outcome.result()));
	else
		return UpdatePolarDBXInstanceNodeOutcome(outcome.error());
}

void PolardbxClient::updatePolarDBXInstanceNodeAsync(const UpdatePolarDBXInstanceNodeRequest& request, const UpdatePolarDBXInstanceNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePolarDBXInstanceNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::UpdatePolarDBXInstanceNodeOutcomeCallable PolardbxClient::updatePolarDBXInstanceNodeCallable(const UpdatePolarDBXInstanceNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePolarDBXInstanceNodeOutcome()>>(
			[this, request]()
			{
			return this->updatePolarDBXInstanceNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbxClient::UpgradeDBInstanceKernelVersionOutcome PolardbxClient::upgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request) const
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

void PolardbxClient::upgradeDBInstanceKernelVersionAsync(const UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceKernelVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbxClient::UpgradeDBInstanceKernelVersionOutcomeCallable PolardbxClient::upgradeDBInstanceKernelVersionCallable(const UpgradeDBInstanceKernelVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceKernelVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceKernelVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

