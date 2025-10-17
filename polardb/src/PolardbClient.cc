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

PolardbClient::AbortDBClusterMigrationOutcome PolardbClient::abortDBClusterMigration(const AbortDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortDBClusterMigrationOutcome(AbortDBClusterMigrationResult(outcome.result()));
	else
		return AbortDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::abortDBClusterMigrationAsync(const AbortDBClusterMigrationRequest& request, const AbortDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::AbortDBClusterMigrationOutcomeCallable PolardbClient::abortDBClusterMigrationCallable(const AbortDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->abortDBClusterMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::AddEncryptionDBRolePrivilegeOutcome PolardbClient::addEncryptionDBRolePrivilege(const AddEncryptionDBRolePrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEncryptionDBRolePrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEncryptionDBRolePrivilegeOutcome(AddEncryptionDBRolePrivilegeResult(outcome.result()));
	else
		return AddEncryptionDBRolePrivilegeOutcome(outcome.error());
}

void PolardbClient::addEncryptionDBRolePrivilegeAsync(const AddEncryptionDBRolePrivilegeRequest& request, const AddEncryptionDBRolePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEncryptionDBRolePrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::AddEncryptionDBRolePrivilegeOutcomeCallable PolardbClient::addEncryptionDBRolePrivilegeCallable(const AddEncryptionDBRolePrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEncryptionDBRolePrivilegeOutcome()>>(
			[this, request]()
			{
			return this->addEncryptionDBRolePrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::AddFirewallRulesOutcome PolardbClient::addFirewallRules(const AddFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFirewallRulesOutcome(AddFirewallRulesResult(outcome.result()));
	else
		return AddFirewallRulesOutcome(outcome.error());
}

void PolardbClient::addFirewallRulesAsync(const AddFirewallRulesRequest& request, const AddFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::AddFirewallRulesOutcomeCallable PolardbClient::addFirewallRulesCallable(const AddFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->addFirewallRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::AddSQLRateLimitingRulesOutcome PolardbClient::addSQLRateLimitingRules(const AddSQLRateLimitingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSQLRateLimitingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSQLRateLimitingRulesOutcome(AddSQLRateLimitingRulesResult(outcome.result()));
	else
		return AddSQLRateLimitingRulesOutcome(outcome.error());
}

void PolardbClient::addSQLRateLimitingRulesAsync(const AddSQLRateLimitingRulesRequest& request, const AddSQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSQLRateLimitingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::AddSQLRateLimitingRulesOutcomeCallable PolardbClient::addSQLRateLimitingRulesCallable(const AddSQLRateLimitingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSQLRateLimitingRulesOutcome()>>(
			[this, request]()
			{
			return this->addSQLRateLimitingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::AttachApplicationPolarFSOutcome PolardbClient::attachApplicationPolarFS(const AttachApplicationPolarFSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachApplicationPolarFSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachApplicationPolarFSOutcome(AttachApplicationPolarFSResult(outcome.result()));
	else
		return AttachApplicationPolarFSOutcome(outcome.error());
}

void PolardbClient::attachApplicationPolarFSAsync(const AttachApplicationPolarFSRequest& request, const AttachApplicationPolarFSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachApplicationPolarFS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::AttachApplicationPolarFSOutcomeCallable PolardbClient::attachApplicationPolarFSCallable(const AttachApplicationPolarFSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachApplicationPolarFSOutcome()>>(
			[this, request]()
			{
			return this->attachApplicationPolarFS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

PolardbClient::CancelCronJobPolicyServerlessOutcome PolardbClient::cancelCronJobPolicyServerless(const CancelCronJobPolicyServerlessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCronJobPolicyServerlessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCronJobPolicyServerlessOutcome(CancelCronJobPolicyServerlessResult(outcome.result()));
	else
		return CancelCronJobPolicyServerlessOutcome(outcome.error());
}

void PolardbClient::cancelCronJobPolicyServerlessAsync(const CancelCronJobPolicyServerlessRequest& request, const CancelCronJobPolicyServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCronJobPolicyServerless(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CancelCronJobPolicyServerlessOutcomeCallable PolardbClient::cancelCronJobPolicyServerlessCallable(const CancelCronJobPolicyServerlessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCronJobPolicyServerlessOutcome()>>(
			[this, request]()
			{
			return this->cancelCronJobPolicyServerless(request);
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

PolardbClient::CheckAccountNameZonalOutcome PolardbClient::checkAccountNameZonal(const CheckAccountNameZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAccountNameZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAccountNameZonalOutcome(CheckAccountNameZonalResult(outcome.result()));
	else
		return CheckAccountNameZonalOutcome(outcome.error());
}

void PolardbClient::checkAccountNameZonalAsync(const CheckAccountNameZonalRequest& request, const CheckAccountNameZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAccountNameZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CheckAccountNameZonalOutcomeCallable PolardbClient::checkAccountNameZonalCallable(const CheckAccountNameZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAccountNameZonalOutcome()>>(
			[this, request]()
			{
			return this->checkAccountNameZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CheckConnectionStringOutcome PolardbClient::checkConnectionString(const CheckConnectionStringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckConnectionStringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckConnectionStringOutcome(CheckConnectionStringResult(outcome.result()));
	else
		return CheckConnectionStringOutcome(outcome.error());
}

void PolardbClient::checkConnectionStringAsync(const CheckConnectionStringRequest& request, const CheckConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CheckConnectionStringOutcomeCallable PolardbClient::checkConnectionStringCallable(const CheckConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->checkConnectionString(request);
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

PolardbClient::CheckDBNameZonalOutcome PolardbClient::checkDBNameZonal(const CheckDBNameZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDBNameZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDBNameZonalOutcome(CheckDBNameZonalResult(outcome.result()));
	else
		return CheckDBNameZonalOutcome(outcome.error());
}

void PolardbClient::checkDBNameZonalAsync(const CheckDBNameZonalRequest& request, const CheckDBNameZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDBNameZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CheckDBNameZonalOutcomeCallable PolardbClient::checkDBNameZonalCallable(const CheckDBNameZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDBNameZonalOutcome()>>(
			[this, request]()
			{
			return this->checkDBNameZonal(request);
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

PolardbClient::ContinueDBClusterMigrationOutcome PolardbClient::continueDBClusterMigration(const ContinueDBClusterMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinueDBClusterMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinueDBClusterMigrationOutcome(ContinueDBClusterMigrationResult(outcome.result()));
	else
		return ContinueDBClusterMigrationOutcome(outcome.error());
}

void PolardbClient::continueDBClusterMigrationAsync(const ContinueDBClusterMigrationRequest& request, const ContinueDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continueDBClusterMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ContinueDBClusterMigrationOutcomeCallable PolardbClient::continueDBClusterMigrationCallable(const ContinueDBClusterMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinueDBClusterMigrationOutcome()>>(
			[this, request]()
			{
			return this->continueDBClusterMigration(request);
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

PolardbClient::CreateAccountZonalOutcome PolardbClient::createAccountZonal(const CreateAccountZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountZonalOutcome(CreateAccountZonalResult(outcome.result()));
	else
		return CreateAccountZonalOutcome(outcome.error());
}

void PolardbClient::createAccountZonalAsync(const CreateAccountZonalRequest& request, const CreateAccountZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccountZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateAccountZonalOutcomeCallable PolardbClient::createAccountZonalCallable(const CreateAccountZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountZonalOutcome()>>(
			[this, request]()
			{
			return this->createAccountZonal(request);
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

PolardbClient::CreateApplicationOutcome PolardbClient::createApplication(const CreateApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationOutcome(CreateApplicationResult(outcome.result()));
	else
		return CreateApplicationOutcome(outcome.error());
}

void PolardbClient::createApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateApplicationOutcomeCallable PolardbClient::createApplicationCallable(const CreateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
			[this, request]()
			{
			return this->createApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateApplicationEndpointAddressOutcome PolardbClient::createApplicationEndpointAddress(const CreateApplicationEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationEndpointAddressOutcome(CreateApplicationEndpointAddressResult(outcome.result()));
	else
		return CreateApplicationEndpointAddressOutcome(outcome.error());
}

void PolardbClient::createApplicationEndpointAddressAsync(const CreateApplicationEndpointAddressRequest& request, const CreateApplicationEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateApplicationEndpointAddressOutcomeCallable PolardbClient::createApplicationEndpointAddressCallable(const CreateApplicationEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->createApplicationEndpointAddress(request);
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

PolardbClient::CreateCronJobPolicyServerlessOutcome PolardbClient::createCronJobPolicyServerless(const CreateCronJobPolicyServerlessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCronJobPolicyServerlessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCronJobPolicyServerlessOutcome(CreateCronJobPolicyServerlessResult(outcome.result()));
	else
		return CreateCronJobPolicyServerlessOutcome(outcome.error());
}

void PolardbClient::createCronJobPolicyServerlessAsync(const CreateCronJobPolicyServerlessRequest& request, const CreateCronJobPolicyServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCronJobPolicyServerless(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateCronJobPolicyServerlessOutcomeCallable PolardbClient::createCronJobPolicyServerlessCallable(const CreateCronJobPolicyServerlessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCronJobPolicyServerlessOutcome()>>(
			[this, request]()
			{
			return this->createCronJobPolicyServerless(request);
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

PolardbClient::CreateDBClusterEndpointZonalOutcome PolardbClient::createDBClusterEndpointZonal(const CreateDBClusterEndpointZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBClusterEndpointZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBClusterEndpointZonalOutcome(CreateDBClusterEndpointZonalResult(outcome.result()));
	else
		return CreateDBClusterEndpointZonalOutcome(outcome.error());
}

void PolardbClient::createDBClusterEndpointZonalAsync(const CreateDBClusterEndpointZonalRequest& request, const CreateDBClusterEndpointZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBClusterEndpointZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDBClusterEndpointZonalOutcomeCallable PolardbClient::createDBClusterEndpointZonalCallable(const CreateDBClusterEndpointZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBClusterEndpointZonalOutcome()>>(
			[this, request]()
			{
			return this->createDBClusterEndpointZonal(request);
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

PolardbClient::CreateDatabaseZonalOutcome PolardbClient::createDatabaseZonal(const CreateDatabaseZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatabaseZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatabaseZonalOutcome(CreateDatabaseZonalResult(outcome.result()));
	else
		return CreateDatabaseZonalOutcome(outcome.error());
}

void PolardbClient::createDatabaseZonalAsync(const CreateDatabaseZonalRequest& request, const CreateDatabaseZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabaseZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateDatabaseZonalOutcomeCallable PolardbClient::createDatabaseZonalCallable(const CreateDatabaseZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseZonalOutcome()>>(
			[this, request]()
			{
			return this->createDatabaseZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateExtensionsOutcome PolardbClient::createExtensions(const CreateExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateExtensionsOutcome(CreateExtensionsResult(outcome.result()));
	else
		return CreateExtensionsOutcome(outcome.error());
}

void PolardbClient::createExtensionsAsync(const CreateExtensionsRequest& request, const CreateExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateExtensionsOutcomeCallable PolardbClient::createExtensionsCallable(const CreateExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateExtensionsOutcome()>>(
			[this, request]()
			{
			return this->createExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::CreateGlobalDataNetworkOutcome PolardbClient::createGlobalDataNetwork(const CreateGlobalDataNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGlobalDataNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGlobalDataNetworkOutcome(CreateGlobalDataNetworkResult(outcome.result()));
	else
		return CreateGlobalDataNetworkOutcome(outcome.error());
}

void PolardbClient::createGlobalDataNetworkAsync(const CreateGlobalDataNetworkRequest& request, const CreateGlobalDataNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGlobalDataNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateGlobalDataNetworkOutcomeCallable PolardbClient::createGlobalDataNetworkCallable(const CreateGlobalDataNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGlobalDataNetworkOutcome()>>(
			[this, request]()
			{
			return this->createGlobalDataNetwork(request);
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

PolardbClient::CreateNetworkChannelOutcome PolardbClient::createNetworkChannel(const CreateNetworkChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkChannelOutcome(CreateNetworkChannelResult(outcome.result()));
	else
		return CreateNetworkChannelOutcome(outcome.error());
}

void PolardbClient::createNetworkChannelAsync(const CreateNetworkChannelRequest& request, const CreateNetworkChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::CreateNetworkChannelOutcomeCallable PolardbClient::createNetworkChannelCallable(const CreateNetworkChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkChannelOutcome()>>(
			[this, request]()
			{
			return this->createNetworkChannel(request);
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

PolardbClient::DeleteAIDBClusterOutcome PolardbClient::deleteAIDBCluster(const DeleteAIDBClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAIDBClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAIDBClusterOutcome(DeleteAIDBClusterResult(outcome.result()));
	else
		return DeleteAIDBClusterOutcome(outcome.error());
}

void PolardbClient::deleteAIDBClusterAsync(const DeleteAIDBClusterRequest& request, const DeleteAIDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAIDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteAIDBClusterOutcomeCallable PolardbClient::deleteAIDBClusterCallable(const DeleteAIDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAIDBClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteAIDBCluster(request);
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

PolardbClient::DeleteAccountZonalOutcome PolardbClient::deleteAccountZonal(const DeleteAccountZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountZonalOutcome(DeleteAccountZonalResult(outcome.result()));
	else
		return DeleteAccountZonalOutcome(outcome.error());
}

void PolardbClient::deleteAccountZonalAsync(const DeleteAccountZonalRequest& request, const DeleteAccountZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccountZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteAccountZonalOutcomeCallable PolardbClient::deleteAccountZonalCallable(const DeleteAccountZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountZonalOutcome()>>(
			[this, request]()
			{
			return this->deleteAccountZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteApplicationOutcome PolardbClient::deleteApplication(const DeleteApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationOutcome(DeleteApplicationResult(outcome.result()));
	else
		return DeleteApplicationOutcome(outcome.error());
}

void PolardbClient::deleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteApplicationOutcomeCallable PolardbClient::deleteApplicationCallable(const DeleteApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
			[this, request]()
			{
			return this->deleteApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteApplicationEndpointAddressOutcome PolardbClient::deleteApplicationEndpointAddress(const DeleteApplicationEndpointAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationEndpointAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationEndpointAddressOutcome(DeleteApplicationEndpointAddressResult(outcome.result()));
	else
		return DeleteApplicationEndpointAddressOutcome(outcome.error());
}

void PolardbClient::deleteApplicationEndpointAddressAsync(const DeleteApplicationEndpointAddressRequest& request, const DeleteApplicationEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationEndpointAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteApplicationEndpointAddressOutcomeCallable PolardbClient::deleteApplicationEndpointAddressCallable(const DeleteApplicationEndpointAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationEndpointAddressOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationEndpointAddress(request);
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

PolardbClient::DeleteDBClusterEndpointZonalOutcome PolardbClient::deleteDBClusterEndpointZonal(const DeleteDBClusterEndpointZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBClusterEndpointZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBClusterEndpointZonalOutcome(DeleteDBClusterEndpointZonalResult(outcome.result()));
	else
		return DeleteDBClusterEndpointZonalOutcome(outcome.error());
}

void PolardbClient::deleteDBClusterEndpointZonalAsync(const DeleteDBClusterEndpointZonalRequest& request, const DeleteDBClusterEndpointZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBClusterEndpointZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDBClusterEndpointZonalOutcomeCallable PolardbClient::deleteDBClusterEndpointZonalCallable(const DeleteDBClusterEndpointZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterEndpointZonalOutcome()>>(
			[this, request]()
			{
			return this->deleteDBClusterEndpointZonal(request);
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

PolardbClient::DeleteDatabaseZonalOutcome PolardbClient::deleteDatabaseZonal(const DeleteDatabaseZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabaseZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabaseZonalOutcome(DeleteDatabaseZonalResult(outcome.result()));
	else
		return DeleteDatabaseZonalOutcome(outcome.error());
}

void PolardbClient::deleteDatabaseZonalAsync(const DeleteDatabaseZonalRequest& request, const DeleteDatabaseZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabaseZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteDatabaseZonalOutcomeCallable PolardbClient::deleteDatabaseZonalCallable(const DeleteDatabaseZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabaseZonalOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabaseZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteEncryptionDBRolePrivilegeOutcome PolardbClient::deleteEncryptionDBRolePrivilege(const DeleteEncryptionDBRolePrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEncryptionDBRolePrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEncryptionDBRolePrivilegeOutcome(DeleteEncryptionDBRolePrivilegeResult(outcome.result()));
	else
		return DeleteEncryptionDBRolePrivilegeOutcome(outcome.error());
}

void PolardbClient::deleteEncryptionDBRolePrivilegeAsync(const DeleteEncryptionDBRolePrivilegeRequest& request, const DeleteEncryptionDBRolePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEncryptionDBRolePrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteEncryptionDBRolePrivilegeOutcomeCallable PolardbClient::deleteEncryptionDBRolePrivilegeCallable(const DeleteEncryptionDBRolePrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEncryptionDBRolePrivilegeOutcome()>>(
			[this, request]()
			{
			return this->deleteEncryptionDBRolePrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteExtensionsOutcome PolardbClient::deleteExtensions(const DeleteExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExtensionsOutcome(DeleteExtensionsResult(outcome.result()));
	else
		return DeleteExtensionsOutcome(outcome.error());
}

void PolardbClient::deleteExtensionsAsync(const DeleteExtensionsRequest& request, const DeleteExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteExtensionsOutcomeCallable PolardbClient::deleteExtensionsCallable(const DeleteExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExtensionsOutcome()>>(
			[this, request]()
			{
			return this->deleteExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteFirewallRulesOutcome PolardbClient::deleteFirewallRules(const DeleteFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFirewallRulesOutcome(DeleteFirewallRulesResult(outcome.result()));
	else
		return DeleteFirewallRulesOutcome(outcome.error());
}

void PolardbClient::deleteFirewallRulesAsync(const DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteFirewallRulesOutcomeCallable PolardbClient::deleteFirewallRulesCallable(const DeleteFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteFirewallRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DeleteGlobalDataNetworkOutcome PolardbClient::deleteGlobalDataNetwork(const DeleteGlobalDataNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGlobalDataNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGlobalDataNetworkOutcome(DeleteGlobalDataNetworkResult(outcome.result()));
	else
		return DeleteGlobalDataNetworkOutcome(outcome.error());
}

void PolardbClient::deleteGlobalDataNetworkAsync(const DeleteGlobalDataNetworkRequest& request, const DeleteGlobalDataNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGlobalDataNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteGlobalDataNetworkOutcomeCallable PolardbClient::deleteGlobalDataNetworkCallable(const DeleteGlobalDataNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGlobalDataNetworkOutcome()>>(
			[this, request]()
			{
			return this->deleteGlobalDataNetwork(request);
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

PolardbClient::DeleteNetworkChannelOutcome PolardbClient::deleteNetworkChannel(const DeleteNetworkChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkChannelOutcome(DeleteNetworkChannelResult(outcome.result()));
	else
		return DeleteNetworkChannelOutcome(outcome.error());
}

void PolardbClient::deleteNetworkChannelAsync(const DeleteNetworkChannelRequest& request, const DeleteNetworkChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteNetworkChannelOutcomeCallable PolardbClient::deleteNetworkChannelCallable(const DeleteNetworkChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkChannelOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkChannel(request);
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

PolardbClient::DeleteSQLRateLimitingRulesOutcome PolardbClient::deleteSQLRateLimitingRules(const DeleteSQLRateLimitingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSQLRateLimitingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSQLRateLimitingRulesOutcome(DeleteSQLRateLimitingRulesResult(outcome.result()));
	else
		return DeleteSQLRateLimitingRulesOutcome(outcome.error());
}

void PolardbClient::deleteSQLRateLimitingRulesAsync(const DeleteSQLRateLimitingRulesRequest& request, const DeleteSQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSQLRateLimitingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DeleteSQLRateLimitingRulesOutcomeCallable PolardbClient::deleteSQLRateLimitingRulesCallable(const DeleteSQLRateLimitingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSQLRateLimitingRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteSQLRateLimitingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeAIDBClusterAttributeOutcome PolardbClient::describeAIDBClusterAttribute(const DescribeAIDBClusterAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAIDBClusterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAIDBClusterAttributeOutcome(DescribeAIDBClusterAttributeResult(outcome.result()));
	else
		return DescribeAIDBClusterAttributeOutcome(outcome.error());
}

void PolardbClient::describeAIDBClusterAttributeAsync(const DescribeAIDBClusterAttributeRequest& request, const DescribeAIDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAIDBClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAIDBClusterAttributeOutcomeCallable PolardbClient::describeAIDBClusterAttributeCallable(const DescribeAIDBClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAIDBClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeAIDBClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeAIDBClusterPerformanceOutcome PolardbClient::describeAIDBClusterPerformance(const DescribeAIDBClusterPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAIDBClusterPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAIDBClusterPerformanceOutcome(DescribeAIDBClusterPerformanceResult(outcome.result()));
	else
		return DescribeAIDBClusterPerformanceOutcome(outcome.error());
}

void PolardbClient::describeAIDBClusterPerformanceAsync(const DescribeAIDBClusterPerformanceRequest& request, const DescribeAIDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAIDBClusterPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAIDBClusterPerformanceOutcomeCallable PolardbClient::describeAIDBClusterPerformanceCallable(const DescribeAIDBClusterPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAIDBClusterPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeAIDBClusterPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeAIDBClustersOutcome PolardbClient::describeAIDBClusters(const DescribeAIDBClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAIDBClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAIDBClustersOutcome(DescribeAIDBClustersResult(outcome.result()));
	else
		return DescribeAIDBClustersOutcome(outcome.error());
}

void PolardbClient::describeAIDBClustersAsync(const DescribeAIDBClustersRequest& request, const DescribeAIDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAIDBClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAIDBClustersOutcomeCallable PolardbClient::describeAIDBClustersCallable(const DescribeAIDBClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAIDBClustersOutcome()>>(
			[this, request]()
			{
			return this->describeAIDBClusters(request);
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

PolardbClient::DescribeAccountsZonalOutcome PolardbClient::describeAccountsZonal(const DescribeAccountsZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountsZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountsZonalOutcome(DescribeAccountsZonalResult(outcome.result()));
	else
		return DescribeAccountsZonalOutcome(outcome.error());
}

void PolardbClient::describeAccountsZonalAsync(const DescribeAccountsZonalRequest& request, const DescribeAccountsZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountsZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAccountsZonalOutcomeCallable PolardbClient::describeAccountsZonalCallable(const DescribeAccountsZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsZonalOutcome()>>(
			[this, request]()
			{
			return this->describeAccountsZonal(request);
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

PolardbClient::DescribeActiveOperationMaintainConfOutcome PolardbClient::describeActiveOperationMaintainConf(const DescribeActiveOperationMaintainConfRequest &request) const
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

void PolardbClient::describeActiveOperationMaintainConfAsync(const DescribeActiveOperationMaintainConfRequest& request, const DescribeActiveOperationMaintainConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActiveOperationMaintainConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeActiveOperationMaintainConfOutcomeCallable PolardbClient::describeActiveOperationMaintainConfCallable(const DescribeActiveOperationMaintainConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActiveOperationMaintainConfOutcome()>>(
			[this, request]()
			{
			return this->describeActiveOperationMaintainConf(request);
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

PolardbClient::DescribeApplicationAttributeOutcome PolardbClient::describeApplicationAttribute(const DescribeApplicationAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationAttributeOutcome(DescribeApplicationAttributeResult(outcome.result()));
	else
		return DescribeApplicationAttributeOutcome(outcome.error());
}

void PolardbClient::describeApplicationAttributeAsync(const DescribeApplicationAttributeRequest& request, const DescribeApplicationAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeApplicationAttributeOutcomeCallable PolardbClient::describeApplicationAttributeCallable(const DescribeApplicationAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeApplicationParametersOutcome PolardbClient::describeApplicationParameters(const DescribeApplicationParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationParametersOutcome(DescribeApplicationParametersResult(outcome.result()));
	else
		return DescribeApplicationParametersOutcome(outcome.error());
}

void PolardbClient::describeApplicationParametersAsync(const DescribeApplicationParametersRequest& request, const DescribeApplicationParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeApplicationParametersOutcomeCallable PolardbClient::describeApplicationParametersCallable(const DescribeApplicationParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationParametersOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeApplicationServerlessConfOutcome PolardbClient::describeApplicationServerlessConf(const DescribeApplicationServerlessConfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationServerlessConfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationServerlessConfOutcome(DescribeApplicationServerlessConfResult(outcome.result()));
	else
		return DescribeApplicationServerlessConfOutcome(outcome.error());
}

void PolardbClient::describeApplicationServerlessConfAsync(const DescribeApplicationServerlessConfRequest& request, const DescribeApplicationServerlessConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationServerlessConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeApplicationServerlessConfOutcomeCallable PolardbClient::describeApplicationServerlessConfCallable(const DescribeApplicationServerlessConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationServerlessConfOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationServerlessConf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeApplicationsOutcome PolardbClient::describeApplications(const DescribeApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationsOutcome(DescribeApplicationsResult(outcome.result()));
	else
		return DescribeApplicationsOutcome(outcome.error());
}

void PolardbClient::describeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeApplicationsOutcomeCallable PolardbClient::describeApplicationsCallable(const DescribeApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationsOutcome()>>(
			[this, request]()
			{
			return this->describeApplications(request);
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

PolardbClient::DescribeAvailableCrossRegionsOutcome PolardbClient::describeAvailableCrossRegions(const DescribeAvailableCrossRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableCrossRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableCrossRegionsOutcome(DescribeAvailableCrossRegionsResult(outcome.result()));
	else
		return DescribeAvailableCrossRegionsOutcome(outcome.error());
}

void PolardbClient::describeAvailableCrossRegionsAsync(const DescribeAvailableCrossRegionsRequest& request, const DescribeAvailableCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableCrossRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeAvailableCrossRegionsOutcomeCallable PolardbClient::describeAvailableCrossRegionsCallable(const DescribeAvailableCrossRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableCrossRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableCrossRegions(request);
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

PolardbClient::DescribeBackupRegionsOutcome PolardbClient::describeBackupRegions(const DescribeBackupRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupRegionsOutcome(DescribeBackupRegionsResult(outcome.result()));
	else
		return DescribeBackupRegionsOutcome(outcome.error());
}

void PolardbClient::describeBackupRegionsAsync(const DescribeBackupRegionsRequest& request, const DescribeBackupRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeBackupRegionsOutcomeCallable PolardbClient::describeBackupRegionsCallable(const DescribeBackupRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeBackupRegions(request);
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

PolardbClient::DescribeColdStorageInstanceOutcome PolardbClient::describeColdStorageInstance(const DescribeColdStorageInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeColdStorageInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeColdStorageInstanceOutcome(DescribeColdStorageInstanceResult(outcome.result()));
	else
		return DescribeColdStorageInstanceOutcome(outcome.error());
}

void PolardbClient::describeColdStorageInstanceAsync(const DescribeColdStorageInstanceRequest& request, const DescribeColdStorageInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeColdStorageInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeColdStorageInstanceOutcomeCallable PolardbClient::describeColdStorageInstanceCallable(const DescribeColdStorageInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeColdStorageInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeColdStorageInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeCronJobPolicyServerlessOutcome PolardbClient::describeCronJobPolicyServerless(const DescribeCronJobPolicyServerlessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCronJobPolicyServerlessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCronJobPolicyServerlessOutcome(DescribeCronJobPolicyServerlessResult(outcome.result()));
	else
		return DescribeCronJobPolicyServerlessOutcome(outcome.error());
}

void PolardbClient::describeCronJobPolicyServerlessAsync(const DescribeCronJobPolicyServerlessRequest& request, const DescribeCronJobPolicyServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCronJobPolicyServerless(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeCronJobPolicyServerlessOutcomeCallable PolardbClient::describeCronJobPolicyServerlessCallable(const DescribeCronJobPolicyServerlessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCronJobPolicyServerlessOutcome()>>(
			[this, request]()
			{
			return this->describeCronJobPolicyServerless(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeCrossCloudLevelsOutcome PolardbClient::describeCrossCloudLevels(const DescribeCrossCloudLevelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossCloudLevelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossCloudLevelsOutcome(DescribeCrossCloudLevelsResult(outcome.result()));
	else
		return DescribeCrossCloudLevelsOutcome(outcome.error());
}

void PolardbClient::describeCrossCloudLevelsAsync(const DescribeCrossCloudLevelsRequest& request, const DescribeCrossCloudLevelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossCloudLevels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeCrossCloudLevelsOutcomeCallable PolardbClient::describeCrossCloudLevelsCallable(const DescribeCrossCloudLevelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossCloudLevelsOutcome()>>(
			[this, request]()
			{
			return this->describeCrossCloudLevels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeCrossCloudRegionOutcome PolardbClient::describeCrossCloudRegion(const DescribeCrossCloudRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossCloudRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossCloudRegionOutcome(DescribeCrossCloudRegionResult(outcome.result()));
	else
		return DescribeCrossCloudRegionOutcome(outcome.error());
}

void PolardbClient::describeCrossCloudRegionAsync(const DescribeCrossCloudRegionRequest& request, const DescribeCrossCloudRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossCloudRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeCrossCloudRegionOutcomeCallable PolardbClient::describeCrossCloudRegionCallable(const DescribeCrossCloudRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossCloudRegionOutcome()>>(
			[this, request]()
			{
			return this->describeCrossCloudRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeCrossCloudRegionMappingToAliyunOutcome PolardbClient::describeCrossCloudRegionMappingToAliyun(const DescribeCrossCloudRegionMappingToAliyunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCrossCloudRegionMappingToAliyunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCrossCloudRegionMappingToAliyunOutcome(DescribeCrossCloudRegionMappingToAliyunResult(outcome.result()));
	else
		return DescribeCrossCloudRegionMappingToAliyunOutcome(outcome.error());
}

void PolardbClient::describeCrossCloudRegionMappingToAliyunAsync(const DescribeCrossCloudRegionMappingToAliyunRequest& request, const DescribeCrossCloudRegionMappingToAliyunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCrossCloudRegionMappingToAliyun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeCrossCloudRegionMappingToAliyunOutcomeCallable PolardbClient::describeCrossCloudRegionMappingToAliyunCallable(const DescribeCrossCloudRegionMappingToAliyunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCrossCloudRegionMappingToAliyunOutcome()>>(
			[this, request]()
			{
			return this->describeCrossCloudRegionMappingToAliyun(request);
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

PolardbClient::DescribeDBClusterEncryptionKeyOutcome PolardbClient::describeDBClusterEncryptionKey(const DescribeDBClusterEncryptionKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterEncryptionKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterEncryptionKeyOutcome(DescribeDBClusterEncryptionKeyResult(outcome.result()));
	else
		return DescribeDBClusterEncryptionKeyOutcome(outcome.error());
}

void PolardbClient::describeDBClusterEncryptionKeyAsync(const DescribeDBClusterEncryptionKeyRequest& request, const DescribeDBClusterEncryptionKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterEncryptionKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterEncryptionKeyOutcomeCallable PolardbClient::describeDBClusterEncryptionKeyCallable(const DescribeDBClusterEncryptionKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterEncryptionKeyOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterEncryptionKey(request);
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

PolardbClient::DescribeDBClusterEndpointsZonalOutcome PolardbClient::describeDBClusterEndpointsZonal(const DescribeDBClusterEndpointsZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterEndpointsZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterEndpointsZonalOutcome(DescribeDBClusterEndpointsZonalResult(outcome.result()));
	else
		return DescribeDBClusterEndpointsZonalOutcome(outcome.error());
}

void PolardbClient::describeDBClusterEndpointsZonalAsync(const DescribeDBClusterEndpointsZonalRequest& request, const DescribeDBClusterEndpointsZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterEndpointsZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterEndpointsZonalOutcomeCallable PolardbClient::describeDBClusterEndpointsZonalCallable(const DescribeDBClusterEndpointsZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterEndpointsZonalOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterEndpointsZonal(request);
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

PolardbClient::DescribeDBClusterNetInfoOutcome PolardbClient::describeDBClusterNetInfo(const DescribeDBClusterNetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterNetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterNetInfoOutcome(DescribeDBClusterNetInfoResult(outcome.result()));
	else
		return DescribeDBClusterNetInfoOutcome(outcome.error());
}

void PolardbClient::describeDBClusterNetInfoAsync(const DescribeDBClusterNetInfoRequest& request, const DescribeDBClusterNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterNetInfoOutcomeCallable PolardbClient::describeDBClusterNetInfoCallable(const DescribeDBClusterNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterNetInfo(request);
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

PolardbClient::DescribeDBClusterProxyOutcome PolardbClient::describeDBClusterProxy(const DescribeDBClusterProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterProxyOutcome(DescribeDBClusterProxyResult(outcome.result()));
	else
		return DescribeDBClusterProxyOutcome(outcome.error());
}

void PolardbClient::describeDBClusterProxyAsync(const DescribeDBClusterProxyRequest& request, const DescribeDBClusterProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterProxyOutcomeCallable PolardbClient::describeDBClusterProxyCallable(const DescribeDBClusterProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterProxyOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterProxy(request);
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

PolardbClient::DescribeDBClusterVersionZonalOutcome PolardbClient::describeDBClusterVersionZonal(const DescribeDBClusterVersionZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterVersionZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterVersionZonalOutcome(DescribeDBClusterVersionZonalResult(outcome.result()));
	else
		return DescribeDBClusterVersionZonalOutcome(outcome.error());
}

void PolardbClient::describeDBClusterVersionZonalAsync(const DescribeDBClusterVersionZonalRequest& request, const DescribeDBClusterVersionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterVersionZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClusterVersionZonalOutcomeCallable PolardbClient::describeDBClusterVersionZonalCallable(const DescribeDBClusterVersionZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterVersionZonalOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterVersionZonal(request);
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

PolardbClient::DescribeDBClustersZonalOutcome PolardbClient::describeDBClustersZonal(const DescribeDBClustersZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClustersZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClustersZonalOutcome(DescribeDBClustersZonalResult(outcome.result()));
	else
		return DescribeDBClustersZonalOutcome(outcome.error());
}

void PolardbClient::describeDBClustersZonalAsync(const DescribeDBClustersZonalRequest& request, const DescribeDBClustersZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClustersZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBClustersZonalOutcomeCallable PolardbClient::describeDBClustersZonalCallable(const DescribeDBClustersZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClustersZonalOutcome()>>(
			[this, request]()
			{
			return this->describeDBClustersZonal(request);
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

PolardbClient::DescribeDBInstancePerformanceOutcome PolardbClient::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) const
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

void PolardbClient::describeDBInstancePerformanceAsync(const DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstancePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBInstancePerformanceOutcomeCallable PolardbClient::describeDBInstancePerformanceCallable(const DescribeDBInstancePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstancePerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstancePerformance(request);
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

PolardbClient::DescribeDBLogFilesOutcome PolardbClient::describeDBLogFiles(const DescribeDBLogFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBLogFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBLogFilesOutcome(DescribeDBLogFilesResult(outcome.result()));
	else
		return DescribeDBLogFilesOutcome(outcome.error());
}

void PolardbClient::describeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBLogFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBLogFilesOutcomeCallable PolardbClient::describeDBLogFilesCallable(const DescribeDBLogFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBLogFilesOutcome()>>(
			[this, request]()
			{
			return this->describeDBLogFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDBMiniEngineVersionsOutcome PolardbClient::describeDBMiniEngineVersions(const DescribeDBMiniEngineVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBMiniEngineVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBMiniEngineVersionsOutcome(DescribeDBMiniEngineVersionsResult(outcome.result()));
	else
		return DescribeDBMiniEngineVersionsOutcome(outcome.error());
}

void PolardbClient::describeDBMiniEngineVersionsAsync(const DescribeDBMiniEngineVersionsRequest& request, const DescribeDBMiniEngineVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBMiniEngineVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDBMiniEngineVersionsOutcomeCallable PolardbClient::describeDBMiniEngineVersionsCallable(const DescribeDBMiniEngineVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBMiniEngineVersionsOutcome()>>(
			[this, request]()
			{
			return this->describeDBMiniEngineVersions(request);
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

PolardbClient::DescribeDatabasesZonalOutcome PolardbClient::describeDatabasesZonal(const DescribeDatabasesZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabasesZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabasesZonalOutcome(DescribeDatabasesZonalResult(outcome.result()));
	else
		return DescribeDatabasesZonalOutcome(outcome.error());
}

void PolardbClient::describeDatabasesZonalAsync(const DescribeDatabasesZonalRequest& request, const DescribeDatabasesZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabasesZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDatabasesZonalOutcomeCallable PolardbClient::describeDatabasesZonalCallable(const DescribeDatabasesZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabasesZonalOutcome()>>(
			[this, request]()
			{
			return this->describeDatabasesZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeDbClusterAttributeZonalOutcome PolardbClient::describeDbClusterAttributeZonal(const DescribeDbClusterAttributeZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDbClusterAttributeZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDbClusterAttributeZonalOutcome(DescribeDbClusterAttributeZonalResult(outcome.result()));
	else
		return DescribeDbClusterAttributeZonalOutcome(outcome.error());
}

void PolardbClient::describeDbClusterAttributeZonalAsync(const DescribeDbClusterAttributeZonalRequest& request, const DescribeDbClusterAttributeZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDbClusterAttributeZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeDbClusterAttributeZonalOutcomeCallable PolardbClient::describeDbClusterAttributeZonalCallable(const DescribeDbClusterAttributeZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDbClusterAttributeZonalOutcome()>>(
			[this, request]()
			{
			return this->describeDbClusterAttributeZonal(request);
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

PolardbClient::DescribeEncryptionDBRolePrivilegeOutcome PolardbClient::describeEncryptionDBRolePrivilege(const DescribeEncryptionDBRolePrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEncryptionDBRolePrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEncryptionDBRolePrivilegeOutcome(DescribeEncryptionDBRolePrivilegeResult(outcome.result()));
	else
		return DescribeEncryptionDBRolePrivilegeOutcome(outcome.error());
}

void PolardbClient::describeEncryptionDBRolePrivilegeAsync(const DescribeEncryptionDBRolePrivilegeRequest& request, const DescribeEncryptionDBRolePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEncryptionDBRolePrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeEncryptionDBRolePrivilegeOutcomeCallable PolardbClient::describeEncryptionDBRolePrivilegeCallable(const DescribeEncryptionDBRolePrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEncryptionDBRolePrivilegeOutcome()>>(
			[this, request]()
			{
			return this->describeEncryptionDBRolePrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeEncryptionDBSecretOutcome PolardbClient::describeEncryptionDBSecret(const DescribeEncryptionDBSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEncryptionDBSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEncryptionDBSecretOutcome(DescribeEncryptionDBSecretResult(outcome.result()));
	else
		return DescribeEncryptionDBSecretOutcome(outcome.error());
}

void PolardbClient::describeEncryptionDBSecretAsync(const DescribeEncryptionDBSecretRequest& request, const DescribeEncryptionDBSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEncryptionDBSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeEncryptionDBSecretOutcomeCallable PolardbClient::describeEncryptionDBSecretCallable(const DescribeEncryptionDBSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEncryptionDBSecretOutcome()>>(
			[this, request]()
			{
			return this->describeEncryptionDBSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeExtensionsOutcome PolardbClient::describeExtensions(const DescribeExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExtensionsOutcome(DescribeExtensionsResult(outcome.result()));
	else
		return DescribeExtensionsOutcome(outcome.error());
}

void PolardbClient::describeExtensionsAsync(const DescribeExtensionsRequest& request, const DescribeExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeExtensionsOutcomeCallable PolardbClient::describeExtensionsCallable(const DescribeExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExtensionsOutcome()>>(
			[this, request]()
			{
			return this->describeExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeFirewallRulesOutcome PolardbClient::describeFirewallRules(const DescribeFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFirewallRulesOutcome(DescribeFirewallRulesResult(outcome.result()));
	else
		return DescribeFirewallRulesOutcome(outcome.error());
}

void PolardbClient::describeFirewallRulesAsync(const DescribeFirewallRulesRequest& request, const DescribeFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeFirewallRulesOutcomeCallable PolardbClient::describeFirewallRulesCallable(const DescribeFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->describeFirewallRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeGlobalDataNetworkListOutcome PolardbClient::describeGlobalDataNetworkList(const DescribeGlobalDataNetworkListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalDataNetworkListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalDataNetworkListOutcome(DescribeGlobalDataNetworkListResult(outcome.result()));
	else
		return DescribeGlobalDataNetworkListOutcome(outcome.error());
}

void PolardbClient::describeGlobalDataNetworkListAsync(const DescribeGlobalDataNetworkListRequest& request, const DescribeGlobalDataNetworkListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalDataNetworkList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeGlobalDataNetworkListOutcomeCallable PolardbClient::describeGlobalDataNetworkListCallable(const DescribeGlobalDataNetworkListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalDataNetworkListOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalDataNetworkList(request);
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

PolardbClient::DescribeHALogsOutcome PolardbClient::describeHALogs(const DescribeHALogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHALogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHALogsOutcome(DescribeHALogsResult(outcome.result()));
	else
		return DescribeHALogsOutcome(outcome.error());
}

void PolardbClient::describeHALogsAsync(const DescribeHALogsRequest& request, const DescribeHALogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHALogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeHALogsOutcomeCallable PolardbClient::describeHALogsCallable(const DescribeHALogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHALogsOutcome()>>(
			[this, request]()
			{
			return this->describeHALogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeHistoryTasksOutcome PolardbClient::describeHistoryTasks(const DescribeHistoryTasksRequest &request) const
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

void PolardbClient::describeHistoryTasksAsync(const DescribeHistoryTasksRequest& request, const DescribeHistoryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeHistoryTasksOutcomeCallable PolardbClient::describeHistoryTasksCallable(const DescribeHistoryTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryTasksOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeHistoryTasksStatOutcome PolardbClient::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) const
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

void PolardbClient::describeHistoryTasksStatAsync(const DescribeHistoryTasksStatRequest& request, const DescribeHistoryTasksStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryTasksStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeHistoryTasksStatOutcomeCallable PolardbClient::describeHistoryTasksStatCallable(const DescribeHistoryTasksStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryTasksStatOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryTasksStat(request);
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

PolardbClient::DescribeLocalAvailableRecoveryTimeOutcome PolardbClient::describeLocalAvailableRecoveryTime(const DescribeLocalAvailableRecoveryTimeRequest &request) const
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

void PolardbClient::describeLocalAvailableRecoveryTimeAsync(const DescribeLocalAvailableRecoveryTimeRequest& request, const DescribeLocalAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLocalAvailableRecoveryTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeLocalAvailableRecoveryTimeOutcomeCallable PolardbClient::describeLocalAvailableRecoveryTimeCallable(const DescribeLocalAvailableRecoveryTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLocalAvailableRecoveryTimeOutcome()>>(
			[this, request]()
			{
			return this->describeLocalAvailableRecoveryTime(request);
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

PolardbClient::DescribeModifyParameterLogOutcome PolardbClient::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) const
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

void PolardbClient::describeModifyParameterLogAsync(const DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModifyParameterLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeModifyParameterLogOutcomeCallable PolardbClient::describeModifyParameterLogCallable(const DescribeModifyParameterLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModifyParameterLogOutcome()>>(
			[this, request]()
			{
			return this->describeModifyParameterLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeNetworkChannelOutcome PolardbClient::describeNetworkChannel(const DescribeNetworkChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkChannelOutcome(DescribeNetworkChannelResult(outcome.result()));
	else
		return DescribeNetworkChannelOutcome(outcome.error());
}

void PolardbClient::describeNetworkChannelAsync(const DescribeNetworkChannelRequest& request, const DescribeNetworkChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeNetworkChannelOutcomeCallable PolardbClient::describeNetworkChannelCallable(const DescribeNetworkChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkChannelOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkChannel(request);
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

PolardbClient::DescribeRdsVSwitchsOutcome PolardbClient::describeRdsVSwitchs(const DescribeRdsVSwitchsRequest &request) const
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

void PolardbClient::describeRdsVSwitchsAsync(const DescribeRdsVSwitchsRequest& request, const DescribeRdsVSwitchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsVSwitchs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeRdsVSwitchsOutcomeCallable PolardbClient::describeRdsVSwitchsCallable(const DescribeRdsVSwitchsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsVSwitchsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsVSwitchs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeRdsVpcsOutcome PolardbClient::describeRdsVpcs(const DescribeRdsVpcsRequest &request) const
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

void PolardbClient::describeRdsVpcsAsync(const DescribeRdsVpcsRequest& request, const DescribeRdsVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRdsVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeRdsVpcsOutcomeCallable PolardbClient::describeRdsVpcsCallable(const DescribeRdsVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRdsVpcsOutcome()>>(
			[this, request]()
			{
			return this->describeRdsVpcs(request);
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

PolardbClient::DescribeResourcePackagesOutcome PolardbClient::describeResourcePackages(const DescribeResourcePackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourcePackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourcePackagesOutcome(DescribeResourcePackagesResult(outcome.result()));
	else
		return DescribeResourcePackagesOutcome(outcome.error());
}

void PolardbClient::describeResourcePackagesAsync(const DescribeResourcePackagesRequest& request, const DescribeResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourcePackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeResourcePackagesOutcomeCallable PolardbClient::describeResourcePackagesCallable(const DescribeResourcePackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourcePackagesOutcome()>>(
			[this, request]()
			{
			return this->describeResourcePackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeSQLRateLimitingRulesOutcome PolardbClient::describeSQLRateLimitingRules(const DescribeSQLRateLimitingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLRateLimitingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLRateLimitingRulesOutcome(DescribeSQLRateLimitingRulesResult(outcome.result()));
	else
		return DescribeSQLRateLimitingRulesOutcome(outcome.error());
}

void PolardbClient::describeSQLRateLimitingRulesAsync(const DescribeSQLRateLimitingRulesRequest& request, const DescribeSQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLRateLimitingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeSQLRateLimitingRulesOutcomeCallable PolardbClient::describeSQLRateLimitingRulesCallable(const DescribeSQLRateLimitingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLRateLimitingRulesOutcome()>>(
			[this, request]()
			{
			return this->describeSQLRateLimitingRules(request);
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

PolardbClient::DescribeUpgradeReportOutcome PolardbClient::describeUpgradeReport(const DescribeUpgradeReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpgradeReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpgradeReportOutcome(DescribeUpgradeReportResult(outcome.result()));
	else
		return DescribeUpgradeReportOutcome(outcome.error());
}

void PolardbClient::describeUpgradeReportAsync(const DescribeUpgradeReportRequest& request, const DescribeUpgradeReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpgradeReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeUpgradeReportOutcomeCallable PolardbClient::describeUpgradeReportCallable(const DescribeUpgradeReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpgradeReportOutcome()>>(
			[this, request]()
			{
			return this->describeUpgradeReport(request);
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

PolardbClient::DescribeVSwitchListOutcome PolardbClient::describeVSwitchList(const DescribeVSwitchListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchListOutcome(DescribeVSwitchListResult(outcome.result()));
	else
		return DescribeVSwitchListOutcome(outcome.error());
}

void PolardbClient::describeVSwitchListAsync(const DescribeVSwitchListRequest& request, const DescribeVSwitchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitchList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeVSwitchListOutcomeCallable PolardbClient::describeVSwitchListCallable(const DescribeVSwitchListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchListOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitchList(request);
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

PolardbClient::DescribeVpcsOutcome PolardbClient::describeVpcs(const DescribeVpcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcsOutcome(DescribeVpcsResult(outcome.result()));
	else
		return DescribeVpcsOutcome(outcome.error());
}

void PolardbClient::describeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeVpcsOutcomeCallable PolardbClient::describeVpcsCallable(const DescribeVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcsOutcome()>>(
			[this, request]()
			{
			return this->describeVpcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DescribeZonesOutcome PolardbClient::describeZones(const DescribeZonesRequest &request) const
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

void PolardbClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DescribeZonesOutcomeCallable PolardbClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::DisableDBClusterOrcaOutcome PolardbClient::disableDBClusterOrca(const DisableDBClusterOrcaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDBClusterOrcaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDBClusterOrcaOutcome(DisableDBClusterOrcaResult(outcome.result()));
	else
		return DisableDBClusterOrcaOutcome(outcome.error());
}

void PolardbClient::disableDBClusterOrcaAsync(const DisableDBClusterOrcaRequest& request, const DisableDBClusterOrcaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDBClusterOrca(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::DisableDBClusterOrcaOutcomeCallable PolardbClient::disableDBClusterOrcaCallable(const DisableDBClusterOrcaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDBClusterOrcaOutcome()>>(
			[this, request]()
			{
			return this->disableDBClusterOrca(request);
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

PolardbClient::EnableDBClusterOrcaOutcome PolardbClient::enableDBClusterOrca(const EnableDBClusterOrcaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDBClusterOrcaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDBClusterOrcaOutcome(EnableDBClusterOrcaResult(outcome.result()));
	else
		return EnableDBClusterOrcaOutcome(outcome.error());
}

void PolardbClient::enableDBClusterOrcaAsync(const EnableDBClusterOrcaRequest& request, const EnableDBClusterOrcaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDBClusterOrca(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::EnableDBClusterOrcaOutcomeCallable PolardbClient::enableDBClusterOrcaCallable(const EnableDBClusterOrcaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDBClusterOrcaOutcome()>>(
			[this, request]()
			{
			return this->enableDBClusterOrca(request);
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

PolardbClient::EnableSQLRateLimitingRulesOutcome PolardbClient::enableSQLRateLimitingRules(const EnableSQLRateLimitingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSQLRateLimitingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSQLRateLimitingRulesOutcome(EnableSQLRateLimitingRulesResult(outcome.result()));
	else
		return EnableSQLRateLimitingRulesOutcome(outcome.error());
}

void PolardbClient::enableSQLRateLimitingRulesAsync(const EnableSQLRateLimitingRulesRequest& request, const EnableSQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSQLRateLimitingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::EnableSQLRateLimitingRulesOutcomeCallable PolardbClient::enableSQLRateLimitingRulesCallable(const EnableSQLRateLimitingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSQLRateLimitingRulesOutcome()>>(
			[this, request]()
			{
			return this->enableSQLRateLimitingRules(request);
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

PolardbClient::ExecuteCrossCloudOpenAPIOutcome PolardbClient::executeCrossCloudOpenAPI(const ExecuteCrossCloudOpenAPIRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteCrossCloudOpenAPIOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteCrossCloudOpenAPIOutcome(ExecuteCrossCloudOpenAPIResult(outcome.result()));
	else
		return ExecuteCrossCloudOpenAPIOutcome(outcome.error());
}

void PolardbClient::executeCrossCloudOpenAPIAsync(const ExecuteCrossCloudOpenAPIRequest& request, const ExecuteCrossCloudOpenAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeCrossCloudOpenAPI(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ExecuteCrossCloudOpenAPIOutcomeCallable PolardbClient::executeCrossCloudOpenAPICallable(const ExecuteCrossCloudOpenAPIRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteCrossCloudOpenAPIOutcome()>>(
			[this, request]()
			{
			return this->executeCrossCloudOpenAPI(request);
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

PolardbClient::FailoverDBClusterZonalOutcome PolardbClient::failoverDBClusterZonal(const FailoverDBClusterZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FailoverDBClusterZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FailoverDBClusterZonalOutcome(FailoverDBClusterZonalResult(outcome.result()));
	else
		return FailoverDBClusterZonalOutcome(outcome.error());
}

void PolardbClient::failoverDBClusterZonalAsync(const FailoverDBClusterZonalRequest& request, const FailoverDBClusterZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, failoverDBClusterZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::FailoverDBClusterZonalOutcomeCallable PolardbClient::failoverDBClusterZonalCallable(const FailoverDBClusterZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FailoverDBClusterZonalOutcome()>>(
			[this, request]()
			{
			return this->failoverDBClusterZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::GenerateUpgradeReportForSyncCloneOutcome PolardbClient::generateUpgradeReportForSyncClone(const GenerateUpgradeReportForSyncCloneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateUpgradeReportForSyncCloneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateUpgradeReportForSyncCloneOutcome(GenerateUpgradeReportForSyncCloneResult(outcome.result()));
	else
		return GenerateUpgradeReportForSyncCloneOutcome(outcome.error());
}

void PolardbClient::generateUpgradeReportForSyncCloneAsync(const GenerateUpgradeReportForSyncCloneRequest& request, const GenerateUpgradeReportForSyncCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateUpgradeReportForSyncClone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::GenerateUpgradeReportForSyncCloneOutcomeCallable PolardbClient::generateUpgradeReportForSyncCloneCallable(const GenerateUpgradeReportForSyncCloneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateUpgradeReportForSyncCloneOutcome()>>(
			[this, request]()
			{
			return this->generateUpgradeReportForSyncClone(request);
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

PolardbClient::GrantAccountPrivilegeZonalOutcome PolardbClient::grantAccountPrivilegeZonal(const GrantAccountPrivilegeZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantAccountPrivilegeZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantAccountPrivilegeZonalOutcome(GrantAccountPrivilegeZonalResult(outcome.result()));
	else
		return GrantAccountPrivilegeZonalOutcome(outcome.error());
}

void PolardbClient::grantAccountPrivilegeZonalAsync(const GrantAccountPrivilegeZonalRequest& request, const GrantAccountPrivilegeZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantAccountPrivilegeZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::GrantAccountPrivilegeZonalOutcomeCallable PolardbClient::grantAccountPrivilegeZonalCallable(const GrantAccountPrivilegeZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantAccountPrivilegeZonalOutcome()>>(
			[this, request]()
			{
			return this->grantAccountPrivilegeZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ListOrdersOutcome PolardbClient::listOrders(const ListOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrdersOutcome(ListOrdersResult(outcome.result()));
	else
		return ListOrdersOutcome(outcome.error());
}

void PolardbClient::listOrdersAsync(const ListOrdersRequest& request, const ListOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ListOrdersOutcomeCallable PolardbClient::listOrdersCallable(const ListOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrdersOutcome()>>(
			[this, request]()
			{
			return this->listOrders(request);
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

PolardbClient::ListTagResourcesForRegionOutcome PolardbClient::listTagResourcesForRegion(const ListTagResourcesForRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesForRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesForRegionOutcome(ListTagResourcesForRegionResult(outcome.result()));
	else
		return ListTagResourcesForRegionOutcome(outcome.error());
}

void PolardbClient::listTagResourcesForRegionAsync(const ListTagResourcesForRegionRequest& request, const ListTagResourcesForRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResourcesForRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ListTagResourcesForRegionOutcomeCallable PolardbClient::listTagResourcesForRegionCallable(const ListTagResourcesForRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesForRegionOutcome()>>(
			[this, request]()
			{
			return this->listTagResourcesForRegion(request);
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

PolardbClient::ModifyAIDBClusterDescriptionOutcome PolardbClient::modifyAIDBClusterDescription(const ModifyAIDBClusterDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAIDBClusterDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAIDBClusterDescriptionOutcome(ModifyAIDBClusterDescriptionResult(outcome.result()));
	else
		return ModifyAIDBClusterDescriptionOutcome(outcome.error());
}

void PolardbClient::modifyAIDBClusterDescriptionAsync(const ModifyAIDBClusterDescriptionRequest& request, const ModifyAIDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAIDBClusterDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAIDBClusterDescriptionOutcomeCallable PolardbClient::modifyAIDBClusterDescriptionCallable(const ModifyAIDBClusterDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAIDBClusterDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAIDBClusterDescription(request);
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

PolardbClient::ModifyAccountDescriptionZonalOutcome PolardbClient::modifyAccountDescriptionZonal(const ModifyAccountDescriptionZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountDescriptionZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountDescriptionZonalOutcome(ModifyAccountDescriptionZonalResult(outcome.result()));
	else
		return ModifyAccountDescriptionZonalOutcome(outcome.error());
}

void PolardbClient::modifyAccountDescriptionZonalAsync(const ModifyAccountDescriptionZonalRequest& request, const ModifyAccountDescriptionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescriptionZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAccountDescriptionZonalOutcomeCallable PolardbClient::modifyAccountDescriptionZonalCallable(const ModifyAccountDescriptionZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionZonalOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescriptionZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyAccountLockStateOutcome PolardbClient::modifyAccountLockState(const ModifyAccountLockStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountLockStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountLockStateOutcome(ModifyAccountLockStateResult(outcome.result()));
	else
		return ModifyAccountLockStateOutcome(outcome.error());
}

void PolardbClient::modifyAccountLockStateAsync(const ModifyAccountLockStateRequest& request, const ModifyAccountLockStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountLockState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAccountLockStateOutcomeCallable PolardbClient::modifyAccountLockStateCallable(const ModifyAccountLockStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountLockStateOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountLockState(request);
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

PolardbClient::ModifyAccountPasswordZonalOutcome PolardbClient::modifyAccountPasswordZonal(const ModifyAccountPasswordZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccountPasswordZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccountPasswordZonalOutcome(ModifyAccountPasswordZonalResult(outcome.result()));
	else
		return ModifyAccountPasswordZonalOutcome(outcome.error());
}

void PolardbClient::modifyAccountPasswordZonalAsync(const ModifyAccountPasswordZonalRequest& request, const ModifyAccountPasswordZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountPasswordZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyAccountPasswordZonalOutcomeCallable PolardbClient::modifyAccountPasswordZonalCallable(const ModifyAccountPasswordZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountPasswordZonalOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountPasswordZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyActiveOperationMaintainConfOutcome PolardbClient::modifyActiveOperationMaintainConf(const ModifyActiveOperationMaintainConfRequest &request) const
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

void PolardbClient::modifyActiveOperationMaintainConfAsync(const ModifyActiveOperationMaintainConfRequest& request, const ModifyActiveOperationMaintainConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyActiveOperationMaintainConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyActiveOperationMaintainConfOutcomeCallable PolardbClient::modifyActiveOperationMaintainConfCallable(const ModifyActiveOperationMaintainConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyActiveOperationMaintainConfOutcome()>>(
			[this, request]()
			{
			return this->modifyActiveOperationMaintainConf(request);
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

PolardbClient::ModifyApplicationDescriptionOutcome PolardbClient::modifyApplicationDescription(const ModifyApplicationDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApplicationDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApplicationDescriptionOutcome(ModifyApplicationDescriptionResult(outcome.result()));
	else
		return ModifyApplicationDescriptionOutcome(outcome.error());
}

void PolardbClient::modifyApplicationDescriptionAsync(const ModifyApplicationDescriptionRequest& request, const ModifyApplicationDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApplicationDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyApplicationDescriptionOutcomeCallable PolardbClient::modifyApplicationDescriptionCallable(const ModifyApplicationDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApplicationDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyApplicationDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyApplicationParameterOutcome PolardbClient::modifyApplicationParameter(const ModifyApplicationParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApplicationParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApplicationParameterOutcome(ModifyApplicationParameterResult(outcome.result()));
	else
		return ModifyApplicationParameterOutcome(outcome.error());
}

void PolardbClient::modifyApplicationParameterAsync(const ModifyApplicationParameterRequest& request, const ModifyApplicationParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApplicationParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyApplicationParameterOutcomeCallable PolardbClient::modifyApplicationParameterCallable(const ModifyApplicationParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApplicationParameterOutcome()>>(
			[this, request]()
			{
			return this->modifyApplicationParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyApplicationServerlessConfOutcome PolardbClient::modifyApplicationServerlessConf(const ModifyApplicationServerlessConfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApplicationServerlessConfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApplicationServerlessConfOutcome(ModifyApplicationServerlessConfResult(outcome.result()));
	else
		return ModifyApplicationServerlessConfOutcome(outcome.error());
}

void PolardbClient::modifyApplicationServerlessConfAsync(const ModifyApplicationServerlessConfRequest& request, const ModifyApplicationServerlessConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApplicationServerlessConf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyApplicationServerlessConfOutcomeCallable PolardbClient::modifyApplicationServerlessConfCallable(const ModifyApplicationServerlessConfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApplicationServerlessConfOutcome()>>(
			[this, request]()
			{
			return this->modifyApplicationServerlessConf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyApplicationWhitelistOutcome PolardbClient::modifyApplicationWhitelist(const ModifyApplicationWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApplicationWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApplicationWhitelistOutcome(ModifyApplicationWhitelistResult(outcome.result()));
	else
		return ModifyApplicationWhitelistOutcome(outcome.error());
}

void PolardbClient::modifyApplicationWhitelistAsync(const ModifyApplicationWhitelistRequest& request, const ModifyApplicationWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApplicationWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyApplicationWhitelistOutcomeCallable PolardbClient::modifyApplicationWhitelistCallable(const ModifyApplicationWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApplicationWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyApplicationWhitelist(request);
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

PolardbClient::ModifyCronJobPolicyServerlessOutcome PolardbClient::modifyCronJobPolicyServerless(const ModifyCronJobPolicyServerlessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCronJobPolicyServerlessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCronJobPolicyServerlessOutcome(ModifyCronJobPolicyServerlessResult(outcome.result()));
	else
		return ModifyCronJobPolicyServerlessOutcome(outcome.error());
}

void PolardbClient::modifyCronJobPolicyServerlessAsync(const ModifyCronJobPolicyServerlessRequest& request, const ModifyCronJobPolicyServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCronJobPolicyServerless(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyCronJobPolicyServerlessOutcomeCallable PolardbClient::modifyCronJobPolicyServerlessCallable(const ModifyCronJobPolicyServerlessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCronJobPolicyServerlessOutcome()>>(
			[this, request]()
			{
			return this->modifyCronJobPolicyServerless(request);
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

PolardbClient::ModifyDBClusterArchOutcome PolardbClient::modifyDBClusterArch(const ModifyDBClusterArchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterArchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterArchOutcome(ModifyDBClusterArchResult(outcome.result()));
	else
		return ModifyDBClusterArchOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterArchAsync(const ModifyDBClusterArchRequest& request, const ModifyDBClusterArchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterArch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterArchOutcomeCallable PolardbClient::modifyDBClusterArchCallable(const ModifyDBClusterArchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterArchOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterArch(request);
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

PolardbClient::ModifyDBClusterDescriptionZonalOutcome PolardbClient::modifyDBClusterDescriptionZonal(const ModifyDBClusterDescriptionZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterDescriptionZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterDescriptionZonalOutcome(ModifyDBClusterDescriptionZonalResult(outcome.result()));
	else
		return ModifyDBClusterDescriptionZonalOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterDescriptionZonalAsync(const ModifyDBClusterDescriptionZonalRequest& request, const ModifyDBClusterDescriptionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterDescriptionZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterDescriptionZonalOutcomeCallable PolardbClient::modifyDBClusterDescriptionZonalCallable(const ModifyDBClusterDescriptionZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterDescriptionZonalOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterDescriptionZonal(request);
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

PolardbClient::ModifyDBClusterEndpointZonalOutcome PolardbClient::modifyDBClusterEndpointZonal(const ModifyDBClusterEndpointZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterEndpointZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterEndpointZonalOutcome(ModifyDBClusterEndpointZonalResult(outcome.result()));
	else
		return ModifyDBClusterEndpointZonalOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterEndpointZonalAsync(const ModifyDBClusterEndpointZonalRequest& request, const ModifyDBClusterEndpointZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterEndpointZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterEndpointZonalOutcomeCallable PolardbClient::modifyDBClusterEndpointZonalCallable(const ModifyDBClusterEndpointZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterEndpointZonalOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterEndpointZonal(request);
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

PolardbClient::ModifyDBClusterMigrationEndpointOutcome PolardbClient::modifyDBClusterMigrationEndpoint(const ModifyDBClusterMigrationEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterMigrationEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterMigrationEndpointOutcome(ModifyDBClusterMigrationEndpointResult(outcome.result()));
	else
		return ModifyDBClusterMigrationEndpointOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterMigrationEndpointAsync(const ModifyDBClusterMigrationEndpointRequest& request, const ModifyDBClusterMigrationEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMigrationEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterMigrationEndpointOutcomeCallable PolardbClient::modifyDBClusterMigrationEndpointCallable(const ModifyDBClusterMigrationEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMigrationEndpointOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMigrationEndpoint(request);
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

PolardbClient::ModifyDBClusterVpcOutcome PolardbClient::modifyDBClusterVpc(const ModifyDBClusterVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBClusterVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBClusterVpcOutcome(ModifyDBClusterVpcResult(outcome.result()));
	else
		return ModifyDBClusterVpcOutcome(outcome.error());
}

void PolardbClient::modifyDBClusterVpcAsync(const ModifyDBClusterVpcRequest& request, const ModifyDBClusterVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBClusterVpcOutcomeCallable PolardbClient::modifyDBClusterVpcCallable(const ModifyDBClusterVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterVpcOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterVpc(request);
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

PolardbClient::ModifyDBDescriptionZonalOutcome PolardbClient::modifyDBDescriptionZonal(const ModifyDBDescriptionZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBDescriptionZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBDescriptionZonalOutcome(ModifyDBDescriptionZonalResult(outcome.result()));
	else
		return ModifyDBDescriptionZonalOutcome(outcome.error());
}

void PolardbClient::modifyDBDescriptionZonalAsync(const ModifyDBDescriptionZonalRequest& request, const ModifyDBDescriptionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBDescriptionZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBDescriptionZonalOutcomeCallable PolardbClient::modifyDBDescriptionZonalCallable(const ModifyDBDescriptionZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBDescriptionZonalOutcome()>>(
			[this, request]()
			{
			return this->modifyDBDescriptionZonal(request);
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

PolardbClient::ModifyDBNodeConfigOutcome PolardbClient::modifyDBNodeConfig(const ModifyDBNodeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodeConfigOutcome(ModifyDBNodeConfigResult(outcome.result()));
	else
		return ModifyDBNodeConfigOutcome(outcome.error());
}

void PolardbClient::modifyDBNodeConfigAsync(const ModifyDBNodeConfigRequest& request, const ModifyDBNodeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNodeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBNodeConfigOutcomeCallable PolardbClient::modifyDBNodeConfigCallable(const ModifyDBNodeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodeConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNodeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyDBNodeDescriptionOutcome PolardbClient::modifyDBNodeDescription(const ModifyDBNodeDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodeDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodeDescriptionOutcome(ModifyDBNodeDescriptionResult(outcome.result()));
	else
		return ModifyDBNodeDescriptionOutcome(outcome.error());
}

void PolardbClient::modifyDBNodeDescriptionAsync(const ModifyDBNodeDescriptionRequest& request, const ModifyDBNodeDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNodeDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBNodeDescriptionOutcomeCallable PolardbClient::modifyDBNodeDescriptionCallable(const ModifyDBNodeDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodeDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNodeDescription(request);
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

PolardbClient::ModifyDBNodeSccModeOutcome PolardbClient::modifyDBNodeSccMode(const ModifyDBNodeSccModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBNodeSccModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBNodeSccModeOutcome(ModifyDBNodeSccModeResult(outcome.result()));
	else
		return ModifyDBNodeSccModeOutcome(outcome.error());
}

void PolardbClient::modifyDBNodeSccModeAsync(const ModifyDBNodeSccModeRequest& request, const ModifyDBNodeSccModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBNodeSccMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyDBNodeSccModeOutcomeCallable PolardbClient::modifyDBNodeSccModeCallable(const ModifyDBNodeSccModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBNodeSccModeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBNodeSccMode(request);
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

PolardbClient::ModifyEncryptionDBRolePrivilegeOutcome PolardbClient::modifyEncryptionDBRolePrivilege(const ModifyEncryptionDBRolePrivilegeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEncryptionDBRolePrivilegeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEncryptionDBRolePrivilegeOutcome(ModifyEncryptionDBRolePrivilegeResult(outcome.result()));
	else
		return ModifyEncryptionDBRolePrivilegeOutcome(outcome.error());
}

void PolardbClient::modifyEncryptionDBRolePrivilegeAsync(const ModifyEncryptionDBRolePrivilegeRequest& request, const ModifyEncryptionDBRolePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEncryptionDBRolePrivilege(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyEncryptionDBRolePrivilegeOutcomeCallable PolardbClient::modifyEncryptionDBRolePrivilegeCallable(const ModifyEncryptionDBRolePrivilegeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEncryptionDBRolePrivilegeOutcome()>>(
			[this, request]()
			{
			return this->modifyEncryptionDBRolePrivilege(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyEncryptionDBSecretOutcome PolardbClient::modifyEncryptionDBSecret(const ModifyEncryptionDBSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEncryptionDBSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEncryptionDBSecretOutcome(ModifyEncryptionDBSecretResult(outcome.result()));
	else
		return ModifyEncryptionDBSecretOutcome(outcome.error());
}

void PolardbClient::modifyEncryptionDBSecretAsync(const ModifyEncryptionDBSecretRequest& request, const ModifyEncryptionDBSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEncryptionDBSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyEncryptionDBSecretOutcomeCallable PolardbClient::modifyEncryptionDBSecretCallable(const ModifyEncryptionDBSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEncryptionDBSecretOutcome()>>(
			[this, request]()
			{
			return this->modifyEncryptionDBSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyFirewallRulesOutcome PolardbClient::modifyFirewallRules(const ModifyFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFirewallRulesOutcome(ModifyFirewallRulesResult(outcome.result()));
	else
		return ModifyFirewallRulesOutcome(outcome.error());
}

void PolardbClient::modifyFirewallRulesAsync(const ModifyFirewallRulesRequest& request, const ModifyFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyFirewallRulesOutcomeCallable PolardbClient::modifyFirewallRulesCallable(const ModifyFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->modifyFirewallRules(request);
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

PolardbClient::ModifyResourcePackageOutcome PolardbClient::modifyResourcePackage(const ModifyResourcePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourcePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourcePackageOutcome(ModifyResourcePackageResult(outcome.result()));
	else
		return ModifyResourcePackageOutcome(outcome.error());
}

void PolardbClient::modifyResourcePackageAsync(const ModifyResourcePackageRequest& request, const ModifyResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourcePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyResourcePackageOutcomeCallable PolardbClient::modifyResourcePackageCallable(const ModifyResourcePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourcePackageOutcome()>>(
			[this, request]()
			{
			return this->modifyResourcePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifySQLRateLimitingRulesOutcome PolardbClient::modifySQLRateLimitingRules(const ModifySQLRateLimitingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySQLRateLimitingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySQLRateLimitingRulesOutcome(ModifySQLRateLimitingRulesResult(outcome.result()));
	else
		return ModifySQLRateLimitingRulesOutcome(outcome.error());
}

void PolardbClient::modifySQLRateLimitingRulesAsync(const ModifySQLRateLimitingRulesRequest& request, const ModifySQLRateLimitingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySQLRateLimitingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifySQLRateLimitingRulesOutcomeCallable PolardbClient::modifySQLRateLimitingRulesCallable(const ModifySQLRateLimitingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySQLRateLimitingRulesOutcome()>>(
			[this, request]()
			{
			return this->modifySQLRateLimitingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ModifyScheduleTaskOutcome PolardbClient::modifyScheduleTask(const ModifyScheduleTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScheduleTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScheduleTaskOutcome(ModifyScheduleTaskResult(outcome.result()));
	else
		return ModifyScheduleTaskOutcome(outcome.error());
}

void PolardbClient::modifyScheduleTaskAsync(const ModifyScheduleTaskRequest& request, const ModifyScheduleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScheduleTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ModifyScheduleTaskOutcomeCallable PolardbClient::modifyScheduleTaskCallable(const ModifyScheduleTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScheduleTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyScheduleTask(request);
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

PolardbClient::ReactivateDBClusterBackupOutcome PolardbClient::reactivateDBClusterBackup(const ReactivateDBClusterBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReactivateDBClusterBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReactivateDBClusterBackupOutcome(ReactivateDBClusterBackupResult(outcome.result()));
	else
		return ReactivateDBClusterBackupOutcome(outcome.error());
}

void PolardbClient::reactivateDBClusterBackupAsync(const ReactivateDBClusterBackupRequest& request, const ReactivateDBClusterBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reactivateDBClusterBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ReactivateDBClusterBackupOutcomeCallable PolardbClient::reactivateDBClusterBackupCallable(const ReactivateDBClusterBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReactivateDBClusterBackupOutcome()>>(
			[this, request]()
			{
			return this->reactivateDBClusterBackup(request);
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

PolardbClient::ResetAccountPasswordOutcome PolardbClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void PolardbClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ResetAccountPasswordOutcomeCallable PolardbClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PolardbClient::ResetAccountZonalOutcome PolardbClient::resetAccountZonal(const ResetAccountZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAccountZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAccountZonalOutcome(ResetAccountZonalResult(outcome.result()));
	else
		return ResetAccountZonalOutcome(outcome.error());
}

void PolardbClient::resetAccountZonalAsync(const ResetAccountZonalRequest& request, const ResetAccountZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::ResetAccountZonalOutcomeCallable PolardbClient::resetAccountZonalCallable(const ResetAccountZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountZonalOutcome()>>(
			[this, request]()
			{
			return this->resetAccountZonal(request);
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

PolardbClient::RestartDBNodeZonalOutcome PolardbClient::restartDBNodeZonal(const RestartDBNodeZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDBNodeZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDBNodeZonalOutcome(RestartDBNodeZonalResult(outcome.result()));
	else
		return RestartDBNodeZonalOutcome(outcome.error());
}

void PolardbClient::restartDBNodeZonalAsync(const RestartDBNodeZonalRequest& request, const RestartDBNodeZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDBNodeZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RestartDBNodeZonalOutcomeCallable PolardbClient::restartDBNodeZonalCallable(const RestartDBNodeZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDBNodeZonalOutcome()>>(
			[this, request]()
			{
			return this->restartDBNodeZonal(request);
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

PolardbClient::RevokeAccountPrivilegeZonalOutcome PolardbClient::revokeAccountPrivilegeZonal(const RevokeAccountPrivilegeZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeAccountPrivilegeZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeAccountPrivilegeZonalOutcome(RevokeAccountPrivilegeZonalResult(outcome.result()));
	else
		return RevokeAccountPrivilegeZonalOutcome(outcome.error());
}

void PolardbClient::revokeAccountPrivilegeZonalAsync(const RevokeAccountPrivilegeZonalRequest& request, const RevokeAccountPrivilegeZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeAccountPrivilegeZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::RevokeAccountPrivilegeZonalOutcomeCallable PolardbClient::revokeAccountPrivilegeZonalCallable(const RevokeAccountPrivilegeZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeAccountPrivilegeZonalOutcome()>>(
			[this, request]()
			{
			return this->revokeAccountPrivilegeZonal(request);
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

PolardbClient::UpdateExtensionsOutcome PolardbClient::updateExtensions(const UpdateExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateExtensionsOutcome(UpdateExtensionsResult(outcome.result()));
	else
		return UpdateExtensionsOutcome(outcome.error());
}

void PolardbClient::updateExtensionsAsync(const UpdateExtensionsRequest& request, const UpdateExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::UpdateExtensionsOutcomeCallable PolardbClient::updateExtensionsCallable(const UpdateExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateExtensionsOutcome()>>(
			[this, request]()
			{
			return this->updateExtensions(request);
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

PolardbClient::UpgradeDBClusterVersionZonalOutcome PolardbClient::upgradeDBClusterVersionZonal(const UpgradeDBClusterVersionZonalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBClusterVersionZonalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBClusterVersionZonalOutcome(UpgradeDBClusterVersionZonalResult(outcome.result()));
	else
		return UpgradeDBClusterVersionZonalOutcome(outcome.error());
}

void PolardbClient::upgradeDBClusterVersionZonalAsync(const UpgradeDBClusterVersionZonalRequest& request, const UpgradeDBClusterVersionZonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBClusterVersionZonal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PolardbClient::UpgradeDBClusterVersionZonalOutcomeCallable PolardbClient::upgradeDBClusterVersionZonalCallable(const UpgradeDBClusterVersionZonalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBClusterVersionZonalOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBClusterVersionZonal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

