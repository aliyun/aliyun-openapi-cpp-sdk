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

#include <alibabacloud/clickhouse/ClickhouseClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

namespace
{
	const std::string SERVICE_NAME = "clickhouse";
}

ClickhouseClient::ClickhouseClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "service");
}

ClickhouseClient::ClickhouseClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "service");
}

ClickhouseClient::ClickhouseClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "service");
}

ClickhouseClient::~ClickhouseClient()
{}

ClickhouseClient::AllocateClusterPublicConnectionOutcome ClickhouseClient::allocateClusterPublicConnection(const AllocateClusterPublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateClusterPublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateClusterPublicConnectionOutcome(AllocateClusterPublicConnectionResult(outcome.result()));
	else
		return AllocateClusterPublicConnectionOutcome(outcome.error());
}

void ClickhouseClient::allocateClusterPublicConnectionAsync(const AllocateClusterPublicConnectionRequest& request, const AllocateClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateClusterPublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::AllocateClusterPublicConnectionOutcomeCallable ClickhouseClient::allocateClusterPublicConnectionCallable(const AllocateClusterPublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateClusterPublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateClusterPublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CheckClickhouseToRDSOutcome ClickhouseClient::checkClickhouseToRDS(const CheckClickhouseToRDSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckClickhouseToRDSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckClickhouseToRDSOutcome(CheckClickhouseToRDSResult(outcome.result()));
	else
		return CheckClickhouseToRDSOutcome(outcome.error());
}

void ClickhouseClient::checkClickhouseToRDSAsync(const CheckClickhouseToRDSRequest& request, const CheckClickhouseToRDSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkClickhouseToRDS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CheckClickhouseToRDSOutcomeCallable ClickhouseClient::checkClickhouseToRDSCallable(const CheckClickhouseToRDSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckClickhouseToRDSOutcome()>>(
			[this, request]()
			{
			return this->checkClickhouseToRDS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CheckModifyConfigNeedRestartOutcome ClickhouseClient::checkModifyConfigNeedRestart(const CheckModifyConfigNeedRestartRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckModifyConfigNeedRestartOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckModifyConfigNeedRestartOutcome(CheckModifyConfigNeedRestartResult(outcome.result()));
	else
		return CheckModifyConfigNeedRestartOutcome(outcome.error());
}

void ClickhouseClient::checkModifyConfigNeedRestartAsync(const CheckModifyConfigNeedRestartRequest& request, const CheckModifyConfigNeedRestartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkModifyConfigNeedRestart(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CheckModifyConfigNeedRestartOutcomeCallable ClickhouseClient::checkModifyConfigNeedRestartCallable(const CheckModifyConfigNeedRestartRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckModifyConfigNeedRestartOutcome()>>(
			[this, request]()
			{
			return this->checkModifyConfigNeedRestart(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CheckMonitorAlertOutcome ClickhouseClient::checkMonitorAlert(const CheckMonitorAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckMonitorAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckMonitorAlertOutcome(CheckMonitorAlertResult(outcome.result()));
	else
		return CheckMonitorAlertOutcome(outcome.error());
}

void ClickhouseClient::checkMonitorAlertAsync(const CheckMonitorAlertRequest& request, const CheckMonitorAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkMonitorAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CheckMonitorAlertOutcomeCallable ClickhouseClient::checkMonitorAlertCallable(const CheckMonitorAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckMonitorAlertOutcome()>>(
			[this, request]()
			{
			return this->checkMonitorAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CheckScaleOutBalancedOutcome ClickhouseClient::checkScaleOutBalanced(const CheckScaleOutBalancedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckScaleOutBalancedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckScaleOutBalancedOutcome(CheckScaleOutBalancedResult(outcome.result()));
	else
		return CheckScaleOutBalancedOutcome(outcome.error());
}

void ClickhouseClient::checkScaleOutBalancedAsync(const CheckScaleOutBalancedRequest& request, const CheckScaleOutBalancedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkScaleOutBalanced(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CheckScaleOutBalancedOutcomeCallable ClickhouseClient::checkScaleOutBalancedCallable(const CheckScaleOutBalancedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckScaleOutBalancedOutcome()>>(
			[this, request]()
			{
			return this->checkScaleOutBalanced(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CheckServiceLinkedRoleOutcome ClickhouseClient::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) const
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

void ClickhouseClient::checkServiceLinkedRoleAsync(const CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CheckServiceLinkedRoleOutcomeCallable ClickhouseClient::checkServiceLinkedRoleCallable(const CheckServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateAccountOutcome ClickhouseClient::createAccount(const CreateAccountRequest &request) const
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

void ClickhouseClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateAccountOutcomeCallable ClickhouseClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateAccountAndAuthorityOutcome ClickhouseClient::createAccountAndAuthority(const CreateAccountAndAuthorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountAndAuthorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountAndAuthorityOutcome(CreateAccountAndAuthorityResult(outcome.result()));
	else
		return CreateAccountAndAuthorityOutcome(outcome.error());
}

void ClickhouseClient::createAccountAndAuthorityAsync(const CreateAccountAndAuthorityRequest& request, const CreateAccountAndAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccountAndAuthority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateAccountAndAuthorityOutcomeCallable ClickhouseClient::createAccountAndAuthorityCallable(const CreateAccountAndAuthorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountAndAuthorityOutcome()>>(
			[this, request]()
			{
			return this->createAccountAndAuthority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateBackupPolicyOutcome ClickhouseClient::createBackupPolicy(const CreateBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupPolicyOutcome(CreateBackupPolicyResult(outcome.result()));
	else
		return CreateBackupPolicyOutcome(outcome.error());
}

void ClickhouseClient::createBackupPolicyAsync(const CreateBackupPolicyRequest& request, const CreateBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateBackupPolicyOutcomeCallable ClickhouseClient::createBackupPolicyCallable(const CreateBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->createBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateDBInstanceOutcome ClickhouseClient::createDBInstance(const CreateDBInstanceRequest &request) const
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

void ClickhouseClient::createDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateDBInstanceOutcomeCallable ClickhouseClient::createDBInstanceCallable(const CreateDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateMonitorDataReportOutcome ClickhouseClient::createMonitorDataReport(const CreateMonitorDataReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitorDataReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitorDataReportOutcome(CreateMonitorDataReportResult(outcome.result()));
	else
		return CreateMonitorDataReportOutcome(outcome.error());
}

void ClickhouseClient::createMonitorDataReportAsync(const CreateMonitorDataReportRequest& request, const CreateMonitorDataReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitorDataReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateMonitorDataReportOutcomeCallable ClickhouseClient::createMonitorDataReportCallable(const CreateMonitorDataReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitorDataReportOutcome()>>(
			[this, request]()
			{
			return this->createMonitorDataReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateOSSStorageOutcome ClickhouseClient::createOSSStorage(const CreateOSSStorageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOSSStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOSSStorageOutcome(CreateOSSStorageResult(outcome.result()));
	else
		return CreateOSSStorageOutcome(outcome.error());
}

void ClickhouseClient::createOSSStorageAsync(const CreateOSSStorageRequest& request, const CreateOSSStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOSSStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateOSSStorageOutcomeCallable ClickhouseClient::createOSSStorageCallable(const CreateOSSStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOSSStorageOutcome()>>(
			[this, request]()
			{
			return this->createOSSStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreatePortsForClickHouseOutcome ClickhouseClient::createPortsForClickHouse(const CreatePortsForClickHouseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePortsForClickHouseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePortsForClickHouseOutcome(CreatePortsForClickHouseResult(outcome.result()));
	else
		return CreatePortsForClickHouseOutcome(outcome.error());
}

void ClickhouseClient::createPortsForClickHouseAsync(const CreatePortsForClickHouseRequest& request, const CreatePortsForClickHouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPortsForClickHouse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreatePortsForClickHouseOutcomeCallable ClickhouseClient::createPortsForClickHouseCallable(const CreatePortsForClickHouseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePortsForClickHouseOutcome()>>(
			[this, request]()
			{
			return this->createPortsForClickHouse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateRDSToClickhouseDbOutcome ClickhouseClient::createRDSToClickhouseDb(const CreateRDSToClickhouseDbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRDSToClickhouseDbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRDSToClickhouseDbOutcome(CreateRDSToClickhouseDbResult(outcome.result()));
	else
		return CreateRDSToClickhouseDbOutcome(outcome.error());
}

void ClickhouseClient::createRDSToClickhouseDbAsync(const CreateRDSToClickhouseDbRequest& request, const CreateRDSToClickhouseDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRDSToClickhouseDb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateRDSToClickhouseDbOutcomeCallable ClickhouseClient::createRDSToClickhouseDbCallable(const CreateRDSToClickhouseDbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRDSToClickhouseDbOutcome()>>(
			[this, request]()
			{
			return this->createRDSToClickhouseDb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateSQLAccountOutcome ClickhouseClient::createSQLAccount(const CreateSQLAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSQLAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSQLAccountOutcome(CreateSQLAccountResult(outcome.result()));
	else
		return CreateSQLAccountOutcome(outcome.error());
}

void ClickhouseClient::createSQLAccountAsync(const CreateSQLAccountRequest& request, const CreateSQLAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSQLAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateSQLAccountOutcomeCallable ClickhouseClient::createSQLAccountCallable(const CreateSQLAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSQLAccountOutcome()>>(
			[this, request]()
			{
			return this->createSQLAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::CreateServiceLinkedRoleOutcome ClickhouseClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
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

void ClickhouseClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::CreateServiceLinkedRoleOutcomeCallable ClickhouseClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DeleteAccountOutcome ClickhouseClient::deleteAccount(const DeleteAccountRequest &request) const
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

void ClickhouseClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DeleteAccountOutcomeCallable ClickhouseClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DeleteDBClusterOutcome ClickhouseClient::deleteDBCluster(const DeleteDBClusterRequest &request) const
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

void ClickhouseClient::deleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DeleteDBClusterOutcomeCallable ClickhouseClient::deleteDBClusterCallable(const DeleteDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DeleteSyndbOutcome ClickhouseClient::deleteSyndb(const DeleteSyndbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSyndbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSyndbOutcome(DeleteSyndbResult(outcome.result()));
	else
		return DeleteSyndbOutcome(outcome.error());
}

void ClickhouseClient::deleteSyndbAsync(const DeleteSyndbRequest& request, const DeleteSyndbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSyndb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DeleteSyndbOutcomeCallable ClickhouseClient::deleteSyndbCallable(const DeleteSyndbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSyndbOutcome()>>(
			[this, request]()
			{
			return this->deleteSyndb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeAccountAuthorityOutcome ClickhouseClient::describeAccountAuthority(const DescribeAccountAuthorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountAuthorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountAuthorityOutcome(DescribeAccountAuthorityResult(outcome.result()));
	else
		return DescribeAccountAuthorityOutcome(outcome.error());
}

void ClickhouseClient::describeAccountAuthorityAsync(const DescribeAccountAuthorityRequest& request, const DescribeAccountAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountAuthority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeAccountAuthorityOutcomeCallable ClickhouseClient::describeAccountAuthorityCallable(const DescribeAccountAuthorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountAuthorityOutcome()>>(
			[this, request]()
			{
			return this->describeAccountAuthority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeAccountsOutcome ClickhouseClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void ClickhouseClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeAccountsOutcomeCallable ClickhouseClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeAllDataSourceOutcome ClickhouseClient::describeAllDataSource(const DescribeAllDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllDataSourceOutcome(DescribeAllDataSourceResult(outcome.result()));
	else
		return DescribeAllDataSourceOutcome(outcome.error());
}

void ClickhouseClient::describeAllDataSourceAsync(const DescribeAllDataSourceRequest& request, const DescribeAllDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeAllDataSourceOutcomeCallable ClickhouseClient::describeAllDataSourceCallable(const DescribeAllDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllDataSourceOutcome()>>(
			[this, request]()
			{
			return this->describeAllDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeAllDataSourcesOutcome ClickhouseClient::describeAllDataSources(const DescribeAllDataSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllDataSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllDataSourcesOutcome(DescribeAllDataSourcesResult(outcome.result()));
	else
		return DescribeAllDataSourcesOutcome(outcome.error());
}

void ClickhouseClient::describeAllDataSourcesAsync(const DescribeAllDataSourcesRequest& request, const DescribeAllDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllDataSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeAllDataSourcesOutcomeCallable ClickhouseClient::describeAllDataSourcesCallable(const DescribeAllDataSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllDataSourcesOutcome()>>(
			[this, request]()
			{
			return this->describeAllDataSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeBackupPolicyOutcome ClickhouseClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
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

void ClickhouseClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeBackupPolicyOutcomeCallable ClickhouseClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeBackupsOutcome ClickhouseClient::describeBackups(const DescribeBackupsRequest &request) const
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

void ClickhouseClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeBackupsOutcomeCallable ClickhouseClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeColumnsOutcome ClickhouseClient::describeColumns(const DescribeColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeColumnsOutcome(DescribeColumnsResult(outcome.result()));
	else
		return DescribeColumnsOutcome(outcome.error());
}

void ClickhouseClient::describeColumnsAsync(const DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeColumnsOutcomeCallable ClickhouseClient::describeColumnsCallable(const DescribeColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeColumnsOutcome()>>(
			[this, request]()
			{
			return this->describeColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeConfigHistoryOutcome ClickhouseClient::describeConfigHistory(const DescribeConfigHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigHistoryOutcome(DescribeConfigHistoryResult(outcome.result()));
	else
		return DescribeConfigHistoryOutcome(outcome.error());
}

void ClickhouseClient::describeConfigHistoryAsync(const DescribeConfigHistoryRequest& request, const DescribeConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeConfigHistoryOutcomeCallable ClickhouseClient::describeConfigHistoryCallable(const DescribeConfigHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeConfigHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeConfigVersionDifferenceOutcome ClickhouseClient::describeConfigVersionDifference(const DescribeConfigVersionDifferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigVersionDifferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigVersionDifferenceOutcome(DescribeConfigVersionDifferenceResult(outcome.result()));
	else
		return DescribeConfigVersionDifferenceOutcome(outcome.error());
}

void ClickhouseClient::describeConfigVersionDifferenceAsync(const DescribeConfigVersionDifferenceRequest& request, const DescribeConfigVersionDifferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigVersionDifference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeConfigVersionDifferenceOutcomeCallable ClickhouseClient::describeConfigVersionDifferenceCallable(const DescribeConfigVersionDifferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigVersionDifferenceOutcome()>>(
			[this, request]()
			{
			return this->describeConfigVersionDifference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeDBClusterAccessWhiteListOutcome ClickhouseClient::describeDBClusterAccessWhiteList(const DescribeDBClusterAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterAccessWhiteListOutcome(DescribeDBClusterAccessWhiteListResult(outcome.result()));
	else
		return DescribeDBClusterAccessWhiteListOutcome(outcome.error());
}

void ClickhouseClient::describeDBClusterAccessWhiteListAsync(const DescribeDBClusterAccessWhiteListRequest& request, const DescribeDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeDBClusterAccessWhiteListOutcomeCallable ClickhouseClient::describeDBClusterAccessWhiteListCallable(const DescribeDBClusterAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeDBClusterAttributeOutcome ClickhouseClient::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) const
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

void ClickhouseClient::describeDBClusterAttributeAsync(const DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeDBClusterAttributeOutcomeCallable ClickhouseClient::describeDBClusterAttributeCallable(const DescribeDBClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeDBClusterConfigOutcome ClickhouseClient::describeDBClusterConfig(const DescribeDBClusterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterConfigOutcome(DescribeDBClusterConfigResult(outcome.result()));
	else
		return DescribeDBClusterConfigOutcome(outcome.error());
}

void ClickhouseClient::describeDBClusterConfigAsync(const DescribeDBClusterConfigRequest& request, const DescribeDBClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeDBClusterConfigOutcomeCallable ClickhouseClient::describeDBClusterConfigCallable(const DescribeDBClusterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeDBClusterConfigInXMLOutcome ClickhouseClient::describeDBClusterConfigInXML(const DescribeDBClusterConfigInXMLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterConfigInXMLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterConfigInXMLOutcome(DescribeDBClusterConfigInXMLResult(outcome.result()));
	else
		return DescribeDBClusterConfigInXMLOutcome(outcome.error());
}

void ClickhouseClient::describeDBClusterConfigInXMLAsync(const DescribeDBClusterConfigInXMLRequest& request, const DescribeDBClusterConfigInXMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterConfigInXML(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeDBClusterConfigInXMLOutcomeCallable ClickhouseClient::describeDBClusterConfigInXMLCallable(const DescribeDBClusterConfigInXMLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterConfigInXMLOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterConfigInXML(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeDBClusterNetInfoItemsOutcome ClickhouseClient::describeDBClusterNetInfoItems(const DescribeDBClusterNetInfoItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterNetInfoItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterNetInfoItemsOutcome(DescribeDBClusterNetInfoItemsResult(outcome.result()));
	else
		return DescribeDBClusterNetInfoItemsOutcome(outcome.error());
}

void ClickhouseClient::describeDBClusterNetInfoItemsAsync(const DescribeDBClusterNetInfoItemsRequest& request, const DescribeDBClusterNetInfoItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterNetInfoItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeDBClusterNetInfoItemsOutcomeCallable ClickhouseClient::describeDBClusterNetInfoItemsCallable(const DescribeDBClusterNetInfoItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterNetInfoItemsOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterNetInfoItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeDBClusterPerformanceOutcome ClickhouseClient::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) const
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

void ClickhouseClient::describeDBClusterPerformanceAsync(const DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeDBClusterPerformanceOutcomeCallable ClickhouseClient::describeDBClusterPerformanceCallable(const DescribeDBClusterPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeDBClustersOutcome ClickhouseClient::describeDBClusters(const DescribeDBClustersRequest &request) const
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

void ClickhouseClient::describeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeDBClustersOutcomeCallable ClickhouseClient::describeDBClustersCallable(const DescribeDBClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClustersOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeDBConfigOutcome ClickhouseClient::describeDBConfig(const DescribeDBConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBConfigOutcome(DescribeDBConfigResult(outcome.result()));
	else
		return DescribeDBConfigOutcome(outcome.error());
}

void ClickhouseClient::describeDBConfigAsync(const DescribeDBConfigRequest& request, const DescribeDBConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeDBConfigOutcomeCallable ClickhouseClient::describeDBConfigCallable(const DescribeDBConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBConfigOutcome()>>(
			[this, request]()
			{
			return this->describeDBConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeOSSStorageOutcome ClickhouseClient::describeOSSStorage(const DescribeOSSStorageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOSSStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOSSStorageOutcome(DescribeOSSStorageResult(outcome.result()));
	else
		return DescribeOSSStorageOutcome(outcome.error());
}

void ClickhouseClient::describeOSSStorageAsync(const DescribeOSSStorageRequest& request, const DescribeOSSStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOSSStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeOSSStorageOutcomeCallable ClickhouseClient::describeOSSStorageCallable(const DescribeOSSStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOSSStorageOutcome()>>(
			[this, request]()
			{
			return this->describeOSSStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeProcessListOutcome ClickhouseClient::describeProcessList(const DescribeProcessListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProcessListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProcessListOutcome(DescribeProcessListResult(outcome.result()));
	else
		return DescribeProcessListOutcome(outcome.error());
}

void ClickhouseClient::describeProcessListAsync(const DescribeProcessListRequest& request, const DescribeProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProcessList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeProcessListOutcomeCallable ClickhouseClient::describeProcessListCallable(const DescribeProcessListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProcessListOutcome()>>(
			[this, request]()
			{
			return this->describeProcessList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeRegionsOutcome ClickhouseClient::describeRegions(const DescribeRegionsRequest &request) const
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

void ClickhouseClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeRegionsOutcomeCallable ClickhouseClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeSchemasOutcome ClickhouseClient::describeSchemas(const DescribeSchemasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSchemasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSchemasOutcome(DescribeSchemasResult(outcome.result()));
	else
		return DescribeSchemasOutcome(outcome.error());
}

void ClickhouseClient::describeSchemasAsync(const DescribeSchemasRequest& request, const DescribeSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSchemas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeSchemasOutcomeCallable ClickhouseClient::describeSchemasCallable(const DescribeSchemasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSchemasOutcome()>>(
			[this, request]()
			{
			return this->describeSchemas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeSlowLogRecordsOutcome ClickhouseClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
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

void ClickhouseClient::describeSlowLogRecordsAsync(const DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeSlowLogRecordsOutcomeCallable ClickhouseClient::describeSlowLogRecordsCallable(const DescribeSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeSynDbTablesOutcome ClickhouseClient::describeSynDbTables(const DescribeSynDbTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSynDbTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSynDbTablesOutcome(DescribeSynDbTablesResult(outcome.result()));
	else
		return DescribeSynDbTablesOutcome(outcome.error());
}

void ClickhouseClient::describeSynDbTablesAsync(const DescribeSynDbTablesRequest& request, const DescribeSynDbTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSynDbTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeSynDbTablesOutcomeCallable ClickhouseClient::describeSynDbTablesCallable(const DescribeSynDbTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSynDbTablesOutcome()>>(
			[this, request]()
			{
			return this->describeSynDbTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeSynDbsOutcome ClickhouseClient::describeSynDbs(const DescribeSynDbsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSynDbsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSynDbsOutcome(DescribeSynDbsResult(outcome.result()));
	else
		return DescribeSynDbsOutcome(outcome.error());
}

void ClickhouseClient::describeSynDbsAsync(const DescribeSynDbsRequest& request, const DescribeSynDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSynDbs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeSynDbsOutcomeCallable ClickhouseClient::describeSynDbsCallable(const DescribeSynDbsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSynDbsOutcome()>>(
			[this, request]()
			{
			return this->describeSynDbs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeTablesOutcome ClickhouseClient::describeTables(const DescribeTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTablesOutcome(DescribeTablesResult(outcome.result()));
	else
		return DescribeTablesOutcome(outcome.error());
}

void ClickhouseClient::describeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeTablesOutcomeCallable ClickhouseClient::describeTablesCallable(const DescribeTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
			[this, request]()
			{
			return this->describeTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::DescribeTransferHistoryOutcome ClickhouseClient::describeTransferHistory(const DescribeTransferHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTransferHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTransferHistoryOutcome(DescribeTransferHistoryResult(outcome.result()));
	else
		return DescribeTransferHistoryOutcome(outcome.error());
}

void ClickhouseClient::describeTransferHistoryAsync(const DescribeTransferHistoryRequest& request, const DescribeTransferHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTransferHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::DescribeTransferHistoryOutcomeCallable ClickhouseClient::describeTransferHistoryCallable(const DescribeTransferHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTransferHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeTransferHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::KillProcessOutcome ClickhouseClient::killProcess(const KillProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillProcessOutcome(KillProcessResult(outcome.result()));
	else
		return KillProcessOutcome(outcome.error());
}

void ClickhouseClient::killProcessAsync(const KillProcessRequest& request, const KillProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::KillProcessOutcomeCallable ClickhouseClient::killProcessCallable(const KillProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillProcessOutcome()>>(
			[this, request]()
			{
			return this->killProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyAccountAuthorityOutcome ClickhouseClient::modifyAccountAuthority(const ModifyAccountAuthorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountAuthorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountAuthorityOutcome(ModifyAccountAuthorityResult(outcome.result()));
	else
		return ModifyAccountAuthorityOutcome(outcome.error());
}

void ClickhouseClient::modifyAccountAuthorityAsync(const ModifyAccountAuthorityRequest& request, const ModifyAccountAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountAuthority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyAccountAuthorityOutcomeCallable ClickhouseClient::modifyAccountAuthorityCallable(const ModifyAccountAuthorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountAuthorityOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountAuthority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyAccountDescriptionOutcome ClickhouseClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void ClickhouseClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyAccountDescriptionOutcomeCallable ClickhouseClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyBackupPolicyOutcome ClickhouseClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
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

void ClickhouseClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyBackupPolicyOutcomeCallable ClickhouseClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyDBClusterOutcome ClickhouseClient::modifyDBCluster(const ModifyDBClusterRequest &request) const
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

void ClickhouseClient::modifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyDBClusterOutcomeCallable ClickhouseClient::modifyDBClusterCallable(const ModifyDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyDBClusterAccessWhiteListOutcome ClickhouseClient::modifyDBClusterAccessWhiteList(const ModifyDBClusterAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterAccessWhiteListOutcome(ModifyDBClusterAccessWhiteListResult(outcome.result()));
	else
		return ModifyDBClusterAccessWhiteListOutcome(outcome.error());
}

void ClickhouseClient::modifyDBClusterAccessWhiteListAsync(const ModifyDBClusterAccessWhiteListRequest& request, const ModifyDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyDBClusterAccessWhiteListOutcomeCallable ClickhouseClient::modifyDBClusterAccessWhiteListCallable(const ModifyDBClusterAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyDBClusterConfigOutcome ClickhouseClient::modifyDBClusterConfig(const ModifyDBClusterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterConfigOutcome(ModifyDBClusterConfigResult(outcome.result()));
	else
		return ModifyDBClusterConfigOutcome(outcome.error());
}

void ClickhouseClient::modifyDBClusterConfigAsync(const ModifyDBClusterConfigRequest& request, const ModifyDBClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyDBClusterConfigOutcomeCallable ClickhouseClient::modifyDBClusterConfigCallable(const ModifyDBClusterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyDBClusterConfigInXMLOutcome ClickhouseClient::modifyDBClusterConfigInXML(const ModifyDBClusterConfigInXMLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterConfigInXMLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterConfigInXMLOutcome(ModifyDBClusterConfigInXMLResult(outcome.result()));
	else
		return ModifyDBClusterConfigInXMLOutcome(outcome.error());
}

void ClickhouseClient::modifyDBClusterConfigInXMLAsync(const ModifyDBClusterConfigInXMLRequest& request, const ModifyDBClusterConfigInXMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterConfigInXML(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyDBClusterConfigInXMLOutcomeCallable ClickhouseClient::modifyDBClusterConfigInXMLCallable(const ModifyDBClusterConfigInXMLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterConfigInXMLOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterConfigInXML(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyDBClusterDescriptionOutcome ClickhouseClient::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) const
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

void ClickhouseClient::modifyDBClusterDescriptionAsync(const ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyDBClusterDescriptionOutcomeCallable ClickhouseClient::modifyDBClusterDescriptionCallable(const ModifyDBClusterDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyDBClusterMaintainTimeOutcome ClickhouseClient::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) const
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

void ClickhouseClient::modifyDBClusterMaintainTimeAsync(const ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyDBClusterMaintainTimeOutcomeCallable ClickhouseClient::modifyDBClusterMaintainTimeCallable(const ModifyDBClusterMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyDBConfigOutcome ClickhouseClient::modifyDBConfig(const ModifyDBConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBConfigOutcome(ModifyDBConfigResult(outcome.result()));
	else
		return ModifyDBConfigOutcome(outcome.error());
}

void ClickhouseClient::modifyDBConfigAsync(const ModifyDBConfigRequest& request, const ModifyDBConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyDBConfigOutcomeCallable ClickhouseClient::modifyDBConfigCallable(const ModifyDBConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyMinorVersionGreadeTypeOutcome ClickhouseClient::modifyMinorVersionGreadeType(const ModifyMinorVersionGreadeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMinorVersionGreadeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMinorVersionGreadeTypeOutcome(ModifyMinorVersionGreadeTypeResult(outcome.result()));
	else
		return ModifyMinorVersionGreadeTypeOutcome(outcome.error());
}

void ClickhouseClient::modifyMinorVersionGreadeTypeAsync(const ModifyMinorVersionGreadeTypeRequest& request, const ModifyMinorVersionGreadeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMinorVersionGreadeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyMinorVersionGreadeTypeOutcomeCallable ClickhouseClient::modifyMinorVersionGreadeTypeCallable(const ModifyMinorVersionGreadeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMinorVersionGreadeTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyMinorVersionGreadeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ModifyRDSToClickhouseDbOutcome ClickhouseClient::modifyRDSToClickhouseDb(const ModifyRDSToClickhouseDbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRDSToClickhouseDbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRDSToClickhouseDbOutcome(ModifyRDSToClickhouseDbResult(outcome.result()));
	else
		return ModifyRDSToClickhouseDbOutcome(outcome.error());
}

void ClickhouseClient::modifyRDSToClickhouseDbAsync(const ModifyRDSToClickhouseDbRequest& request, const ModifyRDSToClickhouseDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRDSToClickhouseDb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ModifyRDSToClickhouseDbOutcomeCallable ClickhouseClient::modifyRDSToClickhouseDbCallable(const ModifyRDSToClickhouseDbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRDSToClickhouseDbOutcome()>>(
			[this, request]()
			{
			return this->modifyRDSToClickhouseDb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ReleaseClusterPublicConnectionOutcome ClickhouseClient::releaseClusterPublicConnection(const ReleaseClusterPublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseClusterPublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseClusterPublicConnectionOutcome(ReleaseClusterPublicConnectionResult(outcome.result()));
	else
		return ReleaseClusterPublicConnectionOutcome(outcome.error());
}

void ClickhouseClient::releaseClusterPublicConnectionAsync(const ReleaseClusterPublicConnectionRequest& request, const ReleaseClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseClusterPublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ReleaseClusterPublicConnectionOutcomeCallable ClickhouseClient::releaseClusterPublicConnectionCallable(const ReleaseClusterPublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseClusterPublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseClusterPublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::ResetAccountPasswordOutcome ClickhouseClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void ClickhouseClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::ResetAccountPasswordOutcomeCallable ClickhouseClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::RestartInstanceOutcome ClickhouseClient::restartInstance(const RestartInstanceRequest &request) const
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

void ClickhouseClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::RestartInstanceOutcomeCallable ClickhouseClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::TransferVersionOutcome ClickhouseClient::transferVersion(const TransferVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferVersionOutcome(TransferVersionResult(outcome.result()));
	else
		return TransferVersionOutcome(outcome.error());
}

void ClickhouseClient::transferVersionAsync(const TransferVersionRequest& request, const TransferVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::TransferVersionOutcomeCallable ClickhouseClient::transferVersionCallable(const TransferVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferVersionOutcome()>>(
			[this, request]()
			{
			return this->transferVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ClickhouseClient::UpgradeMinorVersionOutcome ClickhouseClient::upgradeMinorVersion(const UpgradeMinorVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeMinorVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeMinorVersionOutcome(UpgradeMinorVersionResult(outcome.result()));
	else
		return UpgradeMinorVersionOutcome(outcome.error());
}

void ClickhouseClient::upgradeMinorVersionAsync(const UpgradeMinorVersionRequest& request, const UpgradeMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeMinorVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ClickhouseClient::UpgradeMinorVersionOutcomeCallable ClickhouseClient::upgradeMinorVersionCallable(const UpgradeMinorVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeMinorVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeMinorVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

