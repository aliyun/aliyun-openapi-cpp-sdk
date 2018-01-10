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

RdsClient::RdsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "rds");
}

RdsClient::RdsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "rds");
}

RdsClient::RdsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "rds");
}

RdsClient::~RdsClient()
{}

CoreClient::EndpointOutcome RdsClient::endpoint()const
{
	if(!configuration().endpoint().empty())
		return CoreClient::EndpointOutcome(configuration().endpoint());

	auto endpoint = endpointProvider_->getEndpoint();
	
	if (endpoint.empty())
		return CoreClient::EndpointOutcome(Error("InvalidEndpoint",""));
	else
		return CoreClient::EndpointOutcome(endpoint);
}

RdsClient::CreateMigrateTaskOutcome RdsClient::createMigrateTask(const CreateMigrateTaskRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CheckRecoveryConditionsOutcome RdsClient::checkRecoveryConditions(const CheckRecoveryConditionsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::LoginDBInstancefromCloudDBAOutcome RdsClient::loginDBInstancefromCloudDBA(const LoginDBInstancefromCloudDBARequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return LoginDBInstancefromCloudDBAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LoginDBInstancefromCloudDBAOutcome(LoginDBInstancefromCloudDBAResult(outcome.result()));
	else
		return LoginDBInstancefromCloudDBAOutcome(outcome.error());
}

void RdsClient::loginDBInstancefromCloudDBAAsync(const LoginDBInstancefromCloudDBARequest& request, const LoginDBInstancefromCloudDBAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, loginDBInstancefromCloudDBA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::LoginDBInstancefromCloudDBAOutcomeCallable RdsClient::loginDBInstancefromCloudDBACallable(const LoginDBInstancefromCloudDBARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LoginDBInstancefromCloudDBAOutcome()>>(
			[this, request]()
			{
			return this->loginDBInstancefromCloudDBA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteBackupOutcome RdsClient::deleteBackup(const DeleteBackupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDatabasesOutcome RdsClient::describeDatabases(const DescribeDatabasesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstancesByExpireTimeOutcome RdsClient::describeDBInstancesByExpireTime(const DescribeDBInstancesByExpireTimeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::SwitchDBInstanceNetTypeOutcome RdsClient::switchDBInstanceNetType(const SwitchDBInstanceNetTypeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceMonitorOutcome RdsClient::describeDBInstanceMonitor(const DescribeDBInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateReadOnlyDBInstanceOutcome RdsClient::createReadOnlyDBInstance(const CreateReadOnlyDBInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceHAConfigOutcome RdsClient::describeDBInstanceHAConfig(const DescribeDBInstanceHAConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyAccountDescriptionOutcome RdsClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeOssDownloadsOutcome RdsClient::describeOssDownloads(const DescribeOssDownloadsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyParameterOutcome RdsClient::modifyParameter(const ModifyParameterRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ReleaseReplicaOutcome RdsClient::releaseReplica(const ReleaseReplicaRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseReplicaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseReplicaOutcome(ReleaseReplicaResult(outcome.result()));
	else
		return ReleaseReplicaOutcome(outcome.error());
}

void RdsClient::releaseReplicaAsync(const ReleaseReplicaRequest& request, const ReleaseReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseReplica(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ReleaseReplicaOutcomeCallable RdsClient::releaseReplicaCallable(const ReleaseReplicaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseReplicaOutcome()>>(
			[this, request]()
			{
			return this->releaseReplica(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBInstanceEngineVersionOutcome RdsClient::upgradeDBInstanceEngineVersion(const UpgradeDBInstanceEngineVersionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyDBInstanceConnectionStringOutcome RdsClient::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::StopSyncingOutcome RdsClient::stopSyncing(const StopSyncingRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return StopSyncingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopSyncingOutcome(StopSyncingResult(outcome.result()));
	else
		return StopSyncingOutcome(outcome.error());
}

void RdsClient::stopSyncingAsync(const StopSyncingRequest& request, const StopSyncingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopSyncing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StopSyncingOutcomeCallable RdsClient::stopSyncingCallable(const StopSyncingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopSyncingOutcome()>>(
			[this, request]()
			{
			return this->stopSyncing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckAccountNameAvailableOutcome RdsClient::checkAccountNameAvailable(const CheckAccountNameAvailableRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::RestartDBInstanceOutcome RdsClient::restartDBInstance(const RestartDBInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ImportDataForSQLServerOutcome RdsClient::importDataForSQLServer(const ImportDataForSQLServerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ImportDataForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportDataForSQLServerOutcome(ImportDataForSQLServerResult(outcome.result()));
	else
		return ImportDataForSQLServerOutcome(outcome.error());
}

void RdsClient::importDataForSQLServerAsync(const ImportDataForSQLServerRequest& request, const ImportDataForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importDataForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ImportDataForSQLServerOutcomeCallable RdsClient::importDataForSQLServerCallable(const ImportDataForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportDataForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->importDataForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeLogicDBInstanceTopologyOutcome RdsClient::describeLogicDBInstanceTopology(const DescribeLogicDBInstanceTopologyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogicDBInstanceTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogicDBInstanceTopologyOutcome(DescribeLogicDBInstanceTopologyResult(outcome.result()));
	else
		return DescribeLogicDBInstanceTopologyOutcome(outcome.error());
}

void RdsClient::describeLogicDBInstanceTopologyAsync(const DescribeLogicDBInstanceTopologyRequest& request, const DescribeLogicDBInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogicDBInstanceTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeLogicDBInstanceTopologyOutcomeCallable RdsClient::describeLogicDBInstanceTopologyCallable(const DescribeLogicDBInstanceTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogicDBInstanceTopologyOutcome()>>(
			[this, request]()
			{
			return this->describeLogicDBInstanceTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CheckResourceOutcome RdsClient::checkResource(const CheckResourceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CheckResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckResourceOutcome(CheckResourceResult(outcome.result()));
	else
		return CheckResourceOutcome(outcome.error());
}

void RdsClient::checkResourceAsync(const CheckResourceRequest& request, const CheckResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CheckResourceOutcomeCallable RdsClient::checkResourceCallable(const CheckResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckResourceOutcome()>>(
			[this, request]()
			{
			return this->checkResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeTagsOutcome RdsClient::describeTags(const DescribeTagsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::StartDBInstanceDiagnoseOutcome RdsClient::startDBInstanceDiagnose(const StartDBInstanceDiagnoseRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return StartDBInstanceDiagnoseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDBInstanceDiagnoseOutcome(StartDBInstanceDiagnoseResult(outcome.result()));
	else
		return StartDBInstanceDiagnoseOutcome(outcome.error());
}

void RdsClient::startDBInstanceDiagnoseAsync(const StartDBInstanceDiagnoseRequest& request, const StartDBInstanceDiagnoseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDBInstanceDiagnose(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StartDBInstanceDiagnoseOutcomeCallable RdsClient::startDBInstanceDiagnoseCallable(const StartDBInstanceDiagnoseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDBInstanceDiagnoseOutcome()>>(
			[this, request]()
			{
			return this->startDBInstanceDiagnose(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeCharacterSetNameOutcome RdsClient::describeCharacterSetName(const DescribeCharacterSetNameRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ImportDataFromDatabaseOutcome RdsClient::importDataFromDatabase(const ImportDataFromDatabaseRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ImportDataFromDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportDataFromDatabaseOutcome(ImportDataFromDatabaseResult(outcome.result()));
	else
		return ImportDataFromDatabaseOutcome(outcome.error());
}

void RdsClient::importDataFromDatabaseAsync(const ImportDataFromDatabaseRequest& request, const ImportDataFromDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importDataFromDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ImportDataFromDatabaseOutcomeCallable RdsClient::importDataFromDatabaseCallable(const ImportDataFromDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportDataFromDatabaseOutcome()>>(
			[this, request]()
			{
			return this->importDataFromDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeMigrateTasksOutcome RdsClient::describeMigrateTasks(const DescribeMigrateTasksRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyDBInstanceNetworkExpireTimeOutcome RdsClient::modifyDBInstanceNetworkExpireTime(const ModifyDBInstanceNetworkExpireTimeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateAccountOutcome RdsClient::createAccount(const CreateAccountRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeModifyParameterLogOutcome RdsClient::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeOperatorPermissionOutcome RdsClient::describeOperatorPermission(const DescribeOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOperatorPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOperatorPermissionOutcome(DescribeOperatorPermissionResult(outcome.result()));
	else
		return DescribeOperatorPermissionOutcome(outcome.error());
}

void RdsClient::describeOperatorPermissionAsync(const DescribeOperatorPermissionRequest& request, const DescribeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOperatorPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOperatorPermissionOutcomeCallable RdsClient::describeOperatorPermissionCallable(const DescribeOperatorPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOperatorPermissionOutcome()>>(
			[this, request]()
			{
			return this->describeOperatorPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeOptimizeAdviceOnMissIndexOutcome RdsClient::describeOptimizeAdviceOnMissIndex(const DescribeOptimizeAdviceOnMissIndexRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOptimizeAdviceOnMissIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOptimizeAdviceOnMissIndexOutcome(DescribeOptimizeAdviceOnMissIndexResult(outcome.result()));
	else
		return DescribeOptimizeAdviceOnMissIndexOutcome(outcome.error());
}

void RdsClient::describeOptimizeAdviceOnMissIndexAsync(const DescribeOptimizeAdviceOnMissIndexRequest& request, const DescribeOptimizeAdviceOnMissIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOptimizeAdviceOnMissIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOptimizeAdviceOnMissIndexOutcomeCallable RdsClient::describeOptimizeAdviceOnMissIndexCallable(const DescribeOptimizeAdviceOnMissIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOptimizeAdviceOnMissIndexOutcome()>>(
			[this, request]()
			{
			return this->describeOptimizeAdviceOnMissIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDampPoliciesByCidOutcome RdsClient::describeDampPoliciesByCid(const DescribeDampPoliciesByCidRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDampPoliciesByCidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDampPoliciesByCidOutcome(DescribeDampPoliciesByCidResult(outcome.result()));
	else
		return DescribeDampPoliciesByCidOutcome(outcome.error());
}

void RdsClient::describeDampPoliciesByCidAsync(const DescribeDampPoliciesByCidRequest& request, const DescribeDampPoliciesByCidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDampPoliciesByCid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDampPoliciesByCidOutcomeCallable RdsClient::describeDampPoliciesByCidCallable(const DescribeDampPoliciesByCidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDampPoliciesByCidOutcome()>>(
			[this, request]()
			{
			return this->describeDampPoliciesByCid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBDescriptionOutcome RdsClient::modifyDBDescription(const ModifyDBDescriptionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ImportDatabaseBetweenInstancesOutcome RdsClient::importDatabaseBetweenInstances(const ImportDatabaseBetweenInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::RenewInstanceOutcome RdsClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CheckDBNameAvailableOutcome RdsClient::checkDBNameAvailable(const CheckDBNameAvailableRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyDBInstanceMonitorOutcome RdsClient::modifyDBInstanceMonitor(const ModifyDBInstanceMonitorRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeSQLLogFilesOutcome RdsClient::describeSQLLogFiles(const DescribeSQLLogFilesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CancelImportOutcome RdsClient::cancelImport(const CancelImportRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeReplicaInitializeProgressOutcome RdsClient::describeReplicaInitializeProgress(const DescribeReplicaInitializeProgressRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicaInitializeProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicaInitializeProgressOutcome(DescribeReplicaInitializeProgressResult(outcome.result()));
	else
		return DescribeReplicaInitializeProgressOutcome(outcome.error());
}

void RdsClient::describeReplicaInitializeProgressAsync(const DescribeReplicaInitializeProgressRequest& request, const DescribeReplicaInitializeProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicaInitializeProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeReplicaInitializeProgressOutcomeCallable RdsClient::describeReplicaInitializeProgressCallable(const DescribeReplicaInitializeProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicaInitializeProgressOutcome()>>(
			[this, request]()
			{
			return this->describeReplicaInitializeProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyBackupPolicyOutcome RdsClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyReplicaDescriptionOutcome RdsClient::modifyReplicaDescription(const ModifyReplicaDescriptionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicaDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicaDescriptionOutcome(ModifyReplicaDescriptionResult(outcome.result()));
	else
		return ModifyReplicaDescriptionOutcome(outcome.error());
}

void RdsClient::modifyReplicaDescriptionAsync(const ModifyReplicaDescriptionRequest& request, const ModifyReplicaDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicaDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyReplicaDescriptionOutcomeCallable RdsClient::modifyReplicaDescriptionCallable(const ModifyReplicaDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicaDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicaDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::UpgradeDBInstanceNetWorkInfoOutcome RdsClient::upgradeDBInstanceNetWorkInfo(const UpgradeDBInstanceNetWorkInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceNetWorkInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceNetWorkInfoOutcome(UpgradeDBInstanceNetWorkInfoResult(outcome.result()));
	else
		return UpgradeDBInstanceNetWorkInfoOutcome(outcome.error());
}

void RdsClient::upgradeDBInstanceNetWorkInfoAsync(const UpgradeDBInstanceNetWorkInfoRequest& request, const UpgradeDBInstanceNetWorkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceNetWorkInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBInstanceNetWorkInfoOutcomeCallable RdsClient::upgradeDBInstanceNetWorkInfoCallable(const UpgradeDBInstanceNetWorkInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceNetWorkInfoOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceNetWorkInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AddTagsToResourceOutcome RdsClient::addTagsToResource(const AddTagsToResourceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeBinlogFilesOutcome RdsClient::describeBinlogFiles(const DescribeBinlogFilesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeBackupsForSecurityOutcome RdsClient::describeBackupsForSecurity(const DescribeBackupsForSecurityRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupsForSecurityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupsForSecurityOutcome(DescribeBackupsForSecurityResult(outcome.result()));
	else
		return DescribeBackupsForSecurityOutcome(outcome.error());
}

void RdsClient::describeBackupsForSecurityAsync(const DescribeBackupsForSecurityRequest& request, const DescribeBackupsForSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupsForSecurity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupsForSecurityOutcomeCallable RdsClient::describeBackupsForSecurityCallable(const DescribeBackupsForSecurityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsForSecurityOutcome()>>(
			[this, request]()
			{
			return this->describeBackupsForSecurity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDiagnosticReportOutcome RdsClient::createDiagnosticReport(const CreateDiagnosticReportRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeSQLLogReportListOutcome RdsClient::describeSQLLogReportList(const DescribeSQLLogReportListRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeResourceDiagnosisOutcome RdsClient::describeResourceDiagnosis(const DescribeResourceDiagnosisRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceDiagnosisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceDiagnosisOutcome(DescribeResourceDiagnosisResult(outcome.result()));
	else
		return DescribeResourceDiagnosisOutcome(outcome.error());
}

void RdsClient::describeResourceDiagnosisAsync(const DescribeResourceDiagnosisRequest& request, const DescribeResourceDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceDiagnosis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeResourceDiagnosisOutcomeCallable RdsClient::describeResourceDiagnosisCallable(const DescribeResourceDiagnosisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceDiagnosisOutcome()>>(
			[this, request]()
			{
			return this->describeResourceDiagnosis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CloneDBInstanceOutcome RdsClient::cloneDBInstance(const CloneDBInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeTasksOutcome RdsClient::describeTasks(const DescribeTasksRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateUploadPathForSQLServerOutcome RdsClient::createUploadPathForSQLServer(const CreateUploadPathForSQLServerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadPathForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadPathForSQLServerOutcome(CreateUploadPathForSQLServerResult(outcome.result()));
	else
		return CreateUploadPathForSQLServerOutcome(outcome.error());
}

void RdsClient::createUploadPathForSQLServerAsync(const CreateUploadPathForSQLServerRequest& request, const CreateUploadPathForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadPathForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateUploadPathForSQLServerOutcomeCallable RdsClient::createUploadPathForSQLServerCallable(const CreateUploadPathForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadPathForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->createUploadPathForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRenewalPriceOutcome RdsClient::describeRenewalPrice(const DescribeRenewalPriceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::AllocateInstancePublicConnectionOutcome RdsClient::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeOptimizeAdviceOnStorageOutcome RdsClient::describeOptimizeAdviceOnStorage(const DescribeOptimizeAdviceOnStorageRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOptimizeAdviceOnStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOptimizeAdviceOnStorageOutcome(DescribeOptimizeAdviceOnStorageResult(outcome.result()));
	else
		return DescribeOptimizeAdviceOnStorageOutcome(outcome.error());
}

void RdsClient::describeOptimizeAdviceOnStorageAsync(const DescribeOptimizeAdviceOnStorageRequest& request, const DescribeOptimizeAdviceOnStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOptimizeAdviceOnStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOptimizeAdviceOnStorageOutcomeCallable RdsClient::describeOptimizeAdviceOnStorageCallable(const DescribeOptimizeAdviceOnStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOptimizeAdviceOnStorageOutcome()>>(
			[this, request]()
			{
			return this->describeOptimizeAdviceOnStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceAutoRenewAttributeOutcome RdsClient::describeInstanceAutoRenewAttribute(const DescribeInstanceAutoRenewAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAutoRenewAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAutoRenewAttributeOutcome(DescribeInstanceAutoRenewAttributeResult(outcome.result()));
	else
		return DescribeInstanceAutoRenewAttributeOutcome(outcome.error());
}

void RdsClient::describeInstanceAutoRenewAttributeAsync(const DescribeInstanceAutoRenewAttributeRequest& request, const DescribeInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAutoRenewAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceAutoRenewAttributeOutcomeCallable RdsClient::describeInstanceAutoRenewAttributeCallable(const DescribeInstanceAutoRenewAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAutoRenewAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAutoRenewAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceAttributeOutcome RdsClient::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceUserOutcome RdsClient::describeDBInstanceUser(const DescribeDBInstanceUserRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceUserOutcome(DescribeDBInstanceUserResult(outcome.result()));
	else
		return DescribeDBInstanceUserOutcome(outcome.error());
}

void RdsClient::describeDBInstanceUserAsync(const DescribeDBInstanceUserRequest& request, const DescribeDBInstanceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceUserOutcomeCallable RdsClient::describeDBInstanceUserCallable(const DescribeDBInstanceUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceUserOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateTempDBInstanceOutcome RdsClient::createTempDBInstance(const CreateTempDBInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeImportsForSQLServerOutcome RdsClient::describeImportsForSQLServer(const DescribeImportsForSQLServerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImportsForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImportsForSQLServerOutcome(DescribeImportsForSQLServerResult(outcome.result()));
	else
		return DescribeImportsForSQLServerOutcome(outcome.error());
}

void RdsClient::describeImportsForSQLServerAsync(const DescribeImportsForSQLServerRequest& request, const DescribeImportsForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImportsForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeImportsForSQLServerOutcomeCallable RdsClient::describeImportsForSQLServerCallable(const DescribeImportsForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImportsForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->describeImportsForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLCollectorPolicyOutcome RdsClient::describeSQLCollectorPolicy(const DescribeSQLCollectorPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyInstanceAutoRenewalAttributeOutcome RdsClient::modifyInstanceAutoRenewalAttribute(const ModifyInstanceAutoRenewalAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifySQLCollectorPolicyOutcome RdsClient::modifySQLCollectorPolicy(const ModifySQLCollectorPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeBackupsOutcome RdsClient::describeBackups(const DescribeBackupsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateDatabaseOutcome RdsClient::createDatabase(const CreateDatabaseRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DeleteDBInstanceOutcome RdsClient::deleteDBInstance(const DeleteDBInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeRealtimeDiagnosesOutcome RdsClient::describeRealtimeDiagnoses(const DescribeRealtimeDiagnosesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRealtimeDiagnosesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRealtimeDiagnosesOutcome(DescribeRealtimeDiagnosesResult(outcome.result()));
	else
		return DescribeRealtimeDiagnosesOutcome(outcome.error());
}

void RdsClient::describeRealtimeDiagnosesAsync(const DescribeRealtimeDiagnosesRequest& request, const DescribeRealtimeDiagnosesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRealtimeDiagnoses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeRealtimeDiagnosesOutcomeCallable RdsClient::describeRealtimeDiagnosesCallable(const DescribeRealtimeDiagnosesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRealtimeDiagnosesOutcome()>>(
			[this, request]()
			{
			return this->describeRealtimeDiagnoses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLInjectionInfosOutcome RdsClient::describeSQLInjectionInfos(const DescribeSQLInjectionInfosRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLInjectionInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLInjectionInfosOutcome(DescribeSQLInjectionInfosResult(outcome.result()));
	else
		return DescribeSQLInjectionInfosOutcome(outcome.error());
}

void RdsClient::describeSQLInjectionInfosAsync(const DescribeSQLInjectionInfosRequest& request, const DescribeSQLInjectionInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLInjectionInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLInjectionInfosOutcomeCallable RdsClient::describeSQLInjectionInfosCallable(const DescribeSQLInjectionInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLInjectionInfosOutcome()>>(
			[this, request]()
			{
			return this->describeSQLInjectionInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeInstanceAutoRenewalAttributeOutcome RdsClient::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::AddBuDBInstanceRelationOutcome RdsClient::addBuDBInstanceRelation(const AddBuDBInstanceRelationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddBuDBInstanceRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBuDBInstanceRelationOutcome(AddBuDBInstanceRelationResult(outcome.result()));
	else
		return AddBuDBInstanceRelationOutcome(outcome.error());
}

void RdsClient::addBuDBInstanceRelationAsync(const AddBuDBInstanceRelationRequest& request, const AddBuDBInstanceRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBuDBInstanceRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AddBuDBInstanceRelationOutcomeCallable RdsClient::addBuDBInstanceRelationCallable(const AddBuDBInstanceRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBuDBInstanceRelationOutcome()>>(
			[this, request]()
			{
			return this->addBuDBInstanceRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RestoreDBInstanceOutcome RdsClient::restoreDBInstance(const RestoreDBInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreDBInstanceOutcome(RestoreDBInstanceResult(outcome.result()));
	else
		return RestoreDBInstanceOutcome(outcome.error());
}

void RdsClient::restoreDBInstanceAsync(const RestoreDBInstanceRequest& request, const RestoreDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RestoreDBInstanceOutcomeCallable RdsClient::restoreDBInstanceCallable(const RestoreDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->restoreDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RevokeOperatorPermissionOutcome RdsClient::revokeOperatorPermission(const RevokeOperatorPermissionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyDBInstanceSpecOutcome RdsClient::modifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDiagnosticReportListOutcome RdsClient::describeDiagnosticReportList(const DescribeDiagnosticReportListRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceECSSGRelationOutcome RdsClient::describeDBInstanceECSSGRelation(const DescribeDBInstanceECSSGRelationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceECSSGRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceECSSGRelationOutcome(DescribeDBInstanceECSSGRelationResult(outcome.result()));
	else
		return DescribeDBInstanceECSSGRelationOutcome(outcome.error());
}

void RdsClient::describeDBInstanceECSSGRelationAsync(const DescribeDBInstanceECSSGRelationRequest& request, const DescribeDBInstanceECSSGRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceECSSGRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceECSSGRelationOutcomeCallable RdsClient::describeDBInstanceECSSGRelationCallable(const DescribeDBInstanceECSSGRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceECSSGRelationOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceECSSGRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RemoveTagsFromResourceOutcome RdsClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeSQLLogRecordsOutcome RdsClient::describeSQLLogRecords(const DescribeSQLLogRecordsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifySecurityIpsOutcome RdsClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeMigrateTasksForSQLServerOutcome RdsClient::describeMigrateTasksForSQLServer(const DescribeMigrateTasksForSQLServerRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyReplicaModeOutcome RdsClient::modifyReplicaMode(const ModifyReplicaModeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicaModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicaModeOutcome(ModifyReplicaModeResult(outcome.result()));
	else
		return ModifyReplicaModeOutcome(outcome.error());
}

void RdsClient::modifyReplicaModeAsync(const ModifyReplicaModeRequest& request, const ModifyReplicaModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicaMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyReplicaModeOutcomeCallable RdsClient::modifyReplicaModeCallable(const ModifyReplicaModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicaModeOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicaMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DeleteDampPolicyOutcome RdsClient::deleteDampPolicy(const DeleteDampPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDampPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDampPolicyOutcome(DeleteDampPolicyResult(outcome.result()));
	else
		return DeleteDampPolicyOutcome(outcome.error());
}

void RdsClient::deleteDampPolicyAsync(const DeleteDampPolicyRequest& request, const DeleteDampPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDampPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DeleteDampPolicyOutcomeCallable RdsClient::deleteDampPolicyCallable(const DeleteDampPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDampPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteDampPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::GrantAccountPrivilegeOutcome RdsClient::grantAccountPrivilege(const GrantAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpoint();
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
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyPostpaidDBInstanceSpecOutcome RdsClient::modifyPostpaidDBInstanceSpec(const ModifyPostpaidDBInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPostpaidDBInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPostpaidDBInstanceSpecOutcome(ModifyPostpaidDBInstanceSpecResult(outcome.result()));
	else
		return ModifyPostpaidDBInstanceSpecOutcome(outcome.error());
}

void RdsClient::modifyPostpaidDBInstanceSpecAsync(const ModifyPostpaidDBInstanceSpecRequest& request, const ModifyPostpaidDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPostpaidDBInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyPostpaidDBInstanceSpecOutcomeCallable RdsClient::modifyPostpaidDBInstanceSpecCallable(const ModifyPostpaidDBInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPostpaidDBInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyPostpaidDBInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreatePolicyWithSpecifiedPolicyOutcome RdsClient::createPolicyWithSpecifiedPolicy(const CreatePolicyWithSpecifiedPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePolicyWithSpecifiedPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePolicyWithSpecifiedPolicyOutcome(CreatePolicyWithSpecifiedPolicyResult(outcome.result()));
	else
		return CreatePolicyWithSpecifiedPolicyOutcome(outcome.error());
}

void RdsClient::createPolicyWithSpecifiedPolicyAsync(const CreatePolicyWithSpecifiedPolicyRequest& request, const CreatePolicyWithSpecifiedPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolicyWithSpecifiedPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreatePolicyWithSpecifiedPolicyOutcomeCallable RdsClient::createPolicyWithSpecifiedPolicyCallable(const CreatePolicyWithSpecifiedPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolicyWithSpecifiedPolicyOutcome()>>(
			[this, request]()
			{
			return this->createPolicyWithSpecifiedPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceTDEOutcome RdsClient::modifyDBInstanceTDE(const ModifyDBInstanceTDERequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstancePerformanceOutcome RdsClient::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeOptimizeAdviceOnBigTableOutcome RdsClient::describeOptimizeAdviceOnBigTable(const DescribeOptimizeAdviceOnBigTableRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOptimizeAdviceOnBigTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOptimizeAdviceOnBigTableOutcome(DescribeOptimizeAdviceOnBigTableResult(outcome.result()));
	else
		return DescribeOptimizeAdviceOnBigTableOutcome(outcome.error());
}

void RdsClient::describeOptimizeAdviceOnBigTableAsync(const DescribeOptimizeAdviceOnBigTableRequest& request, const DescribeOptimizeAdviceOnBigTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOptimizeAdviceOnBigTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOptimizeAdviceOnBigTableOutcomeCallable RdsClient::describeOptimizeAdviceOnBigTableCallable(const DescribeOptimizeAdviceOnBigTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOptimizeAdviceOnBigTableOutcome()>>(
			[this, request]()
			{
			return this->describeOptimizeAdviceOnBigTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeVpcZoneNosOutcome RdsClient::describeVpcZoneNos(const DescribeVpcZoneNosRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcZoneNosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcZoneNosOutcome(DescribeVpcZoneNosResult(outcome.result()));
	else
		return DescribeVpcZoneNosOutcome(outcome.error());
}

void RdsClient::describeVpcZoneNosAsync(const DescribeVpcZoneNosRequest& request, const DescribeVpcZoneNosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcZoneNos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeVpcZoneNosOutcomeCallable RdsClient::describeVpcZoneNosCallable(const DescribeVpcZoneNosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcZoneNosOutcome()>>(
			[this, request]()
			{
			return this->describeVpcZoneNos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDampPolicyByCommentOutcome RdsClient::describeDampPolicyByComment(const DescribeDampPolicyByCommentRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDampPolicyByCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDampPolicyByCommentOutcome(DescribeDampPolicyByCommentResult(outcome.result()));
	else
		return DescribeDampPolicyByCommentOutcome(outcome.error());
}

void RdsClient::describeDampPolicyByCommentAsync(const DescribeDampPolicyByCommentRequest& request, const DescribeDampPolicyByCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDampPolicyByComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDampPolicyByCommentOutcomeCallable RdsClient::describeDampPolicyByCommentCallable(const DescribeDampPolicyByCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDampPolicyByCommentOutcome()>>(
			[this, request]()
			{
			return this->describeDampPolicyByComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceExtendAttributeOutcome RdsClient::describeDBInstanceExtendAttribute(const DescribeDBInstanceExtendAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceExtendAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceExtendAttributeOutcome(DescribeDBInstanceExtendAttributeResult(outcome.result()));
	else
		return DescribeDBInstanceExtendAttributeOutcome(outcome.error());
}

void RdsClient::describeDBInstanceExtendAttributeAsync(const DescribeDBInstanceExtendAttributeRequest& request, const DescribeDBInstanceExtendAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceExtendAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceExtendAttributeOutcomeCallable RdsClient::describeDBInstanceExtendAttributeCallable(const DescribeDBInstanceExtendAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceExtendAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceExtendAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesOutcome RdsClient::describeDBInstances(const DescribeDBInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribePreCheckResultsOutcome RdsClient::describePreCheckResults(const DescribePreCheckResultsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePreCheckResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePreCheckResultsOutcome(DescribePreCheckResultsResult(outcome.result()));
	else
		return DescribePreCheckResultsOutcome(outcome.error());
}

void RdsClient::describePreCheckResultsAsync(const DescribePreCheckResultsRequest& request, const DescribePreCheckResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePreCheckResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribePreCheckResultsOutcomeCallable RdsClient::describePreCheckResultsCallable(const DescribePreCheckResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePreCheckResultsOutcome()>>(
			[this, request]()
			{
			return this->describePreCheckResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::StartArchiveSQLLogOutcome RdsClient::startArchiveSQLLog(const StartArchiveSQLLogRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return StartArchiveSQLLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartArchiveSQLLogOutcome(StartArchiveSQLLogResult(outcome.result()));
	else
		return StartArchiveSQLLogOutcome(outcome.error());
}

void RdsClient::startArchiveSQLLogAsync(const StartArchiveSQLLogRequest& request, const StartArchiveSQLLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startArchiveSQLLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::StartArchiveSQLLogOutcomeCallable RdsClient::startArchiveSQLLogCallable(const StartArchiveSQLLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartArchiveSQLLogOutcome()>>(
			[this, request]()
			{
			return this->startArchiveSQLLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CreateDBInstanceReplicaOutcome RdsClient::createDBInstanceReplica(const CreateDBInstanceReplicaRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBInstanceReplicaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBInstanceReplicaOutcome(CreateDBInstanceReplicaResult(outcome.result()));
	else
		return CreateDBInstanceReplicaOutcome(outcome.error());
}

void RdsClient::createDBInstanceReplicaAsync(const CreateDBInstanceReplicaRequest& request, const CreateDBInstanceReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBInstanceReplica(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDBInstanceReplicaOutcomeCallable RdsClient::createDBInstanceReplicaCallable(const CreateDBInstanceReplicaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBInstanceReplicaOutcome()>>(
			[this, request]()
			{
			return this->createDBInstanceReplica(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDampPolicyOutcome RdsClient::modifyDampPolicy(const ModifyDampPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDampPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDampPolicyOutcome(ModifyDampPolicyResult(outcome.result()));
	else
		return ModifyDampPolicyOutcome(outcome.error());
}

void RdsClient::modifyDampPolicyAsync(const ModifyDampPolicyRequest& request, const ModifyDampPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDampPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDampPolicyOutcomeCallable RdsClient::modifyDampPolicyCallable(const ModifyDampPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDampPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyDampPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::AllocateInstancePrivateConnectionOutcome RdsClient::allocateInstancePrivateConnection(const AllocateInstancePrivateConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateInstancePrivateConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateInstancePrivateConnectionOutcome(AllocateInstancePrivateConnectionResult(outcome.result()));
	else
		return AllocateInstancePrivateConnectionOutcome(outcome.error());
}

void RdsClient::allocateInstancePrivateConnectionAsync(const AllocateInstancePrivateConnectionRequest& request, const AllocateInstancePrivateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstancePrivateConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AllocateInstancePrivateConnectionOutcomeCallable RdsClient::allocateInstancePrivateConnectionCallable(const AllocateInstancePrivateConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstancePrivateConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateInstancePrivateConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::RevokeAccountPrivilegeOutcome RdsClient::revokeAccountPrivilege(const RevokeAccountPrivilegeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DegradeDBInstanceSpecOutcome RdsClient::degradeDBInstanceSpec(const DegradeDBInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DegradeDBInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DegradeDBInstanceSpecOutcome(DegradeDBInstanceSpecResult(outcome.result()));
	else
		return DegradeDBInstanceSpecOutcome(outcome.error());
}

void RdsClient::degradeDBInstanceSpecAsync(const DegradeDBInstanceSpecRequest& request, const DegradeDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, degradeDBInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DegradeDBInstanceSpecOutcomeCallable RdsClient::degradeDBInstanceSpecCallable(const DegradeDBInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DegradeDBInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->degradeDBInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescibeImportsFromDatabaseOutcome RdsClient::descibeImportsFromDatabase(const DescibeImportsFromDatabaseRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeParameterTemplatesOutcome RdsClient::describeParameterTemplates(const DescribeParameterTemplatesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDatabaseLockDiagnosisOutcome RdsClient::describeDatabaseLockDiagnosis(const DescribeDatabaseLockDiagnosisRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseLockDiagnosisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseLockDiagnosisOutcome(DescribeDatabaseLockDiagnosisResult(outcome.result()));
	else
		return DescribeDatabaseLockDiagnosisOutcome(outcome.error());
}

void RdsClient::describeDatabaseLockDiagnosisAsync(const DescribeDatabaseLockDiagnosisRequest& request, const DescribeDatabaseLockDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseLockDiagnosis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDatabaseLockDiagnosisOutcomeCallable RdsClient::describeDatabaseLockDiagnosisCallable(const DescribeDatabaseLockDiagnosisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseLockDiagnosisOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseLockDiagnosis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeOptimizeAdviceOnExcessIndexOutcome RdsClient::describeOptimizeAdviceOnExcessIndex(const DescribeOptimizeAdviceOnExcessIndexRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOptimizeAdviceOnExcessIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOptimizeAdviceOnExcessIndexOutcome(DescribeOptimizeAdviceOnExcessIndexResult(outcome.result()));
	else
		return DescribeOptimizeAdviceOnExcessIndexOutcome(outcome.error());
}

void RdsClient::describeOptimizeAdviceOnExcessIndexAsync(const DescribeOptimizeAdviceOnExcessIndexRequest& request, const DescribeOptimizeAdviceOnExcessIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOptimizeAdviceOnExcessIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOptimizeAdviceOnExcessIndexOutcomeCallable RdsClient::describeOptimizeAdviceOnExcessIndexCallable(const DescribeOptimizeAdviceOnExcessIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOptimizeAdviceOnExcessIndexOutcome()>>(
			[this, request]()
			{
			return this->describeOptimizeAdviceOnExcessIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::CopyDatabaseOutcome RdsClient::copyDatabase(const CopyDatabaseRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateDBInstanceOutcome RdsClient::createDBInstance(const CreateDBInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceTDEOutcome RdsClient::describeDBInstanceTDE(const DescribeDBInstanceTDERequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyDBInstanceSSLOutcome RdsClient::modifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeSQLLogReportsOutcome RdsClient::describeSQLLogReports(const DescribeSQLLogReportsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeSQLDiagnosisListOutcome RdsClient::describeSQLDiagnosisList(const DescribeSQLDiagnosisListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLDiagnosisListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLDiagnosisListOutcome(DescribeSQLDiagnosisListResult(outcome.result()));
	else
		return DescribeSQLDiagnosisListOutcome(outcome.error());
}

void RdsClient::describeSQLDiagnosisListAsync(const DescribeSQLDiagnosisListRequest& request, const DescribeSQLDiagnosisListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLDiagnosisList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLDiagnosisListOutcomeCallable RdsClient::describeSQLDiagnosisListCallable(const DescribeSQLDiagnosisListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLDiagnosisListOutcome()>>(
			[this, request]()
			{
			return this->describeSQLDiagnosisList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceConnectionModeOutcome RdsClient::modifyDBInstanceConnectionMode(const ModifyDBInstanceConnectionModeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceNetInfoOutcome RdsClient::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::AllocateReadWriteSplittingConnectionOutcome RdsClient::allocateReadWriteSplittingConnection(const AllocateReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ReleaseInstancePublicConnectionOutcome RdsClient::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CalculateDBInstanceWeightOutcome RdsClient::calculateDBInstanceWeight(const CalculateDBInstanceWeightRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyReplicaRelationOutcome RdsClient::modifyReplicaRelation(const ModifyReplicaRelationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyReplicaRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyReplicaRelationOutcome(ModifyReplicaRelationResult(outcome.result()));
	else
		return ModifyReplicaRelationOutcome(outcome.error());
}

void RdsClient::modifyReplicaRelationAsync(const ModifyReplicaRelationRequest& request, const ModifyReplicaRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyReplicaRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyReplicaRelationOutcomeCallable RdsClient::modifyReplicaRelationCallable(const ModifyReplicaRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyReplicaRelationOutcome()>>(
			[this, request]()
			{
			return this->modifyReplicaRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceNetworkTypeOutcome RdsClient::modifyDBInstanceNetworkType(const ModifyDBInstanceNetworkTypeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeAbnormalDBInstancesOutcome RdsClient::describeAbnormalDBInstances(const DescribeAbnormalDBInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAbnormalDBInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAbnormalDBInstancesOutcome(DescribeAbnormalDBInstancesResult(outcome.result()));
	else
		return DescribeAbnormalDBInstancesOutcome(outcome.error());
}

void RdsClient::describeAbnormalDBInstancesAsync(const DescribeAbnormalDBInstancesRequest& request, const DescribeAbnormalDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAbnormalDBInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAbnormalDBInstancesOutcomeCallable RdsClient::describeAbnormalDBInstancesCallable(const DescribeAbnormalDBInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAbnormalDBInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeAbnormalDBInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstanceNetworkOutcome RdsClient::describeDBInstanceNetwork(const DescribeDBInstanceNetworkRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceNetworkOutcome(DescribeDBInstanceNetworkResult(outcome.result()));
	else
		return DescribeDBInstanceNetworkOutcome(outcome.error());
}

void RdsClient::describeDBInstanceNetworkAsync(const DescribeDBInstanceNetworkRequest& request, const DescribeDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceNetworkOutcomeCallable RdsClient::describeDBInstanceNetworkCallable(const DescribeDBInstanceNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetworkOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSlowLogsOutcome RdsClient::describeSlowLogs(const DescribeSlowLogsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateBackupOutcome RdsClient::createBackup(const CreateBackupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateSQLDiagnosisOutcome RdsClient::createSQLDiagnosis(const CreateSQLDiagnosisRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSQLDiagnosisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSQLDiagnosisOutcome(CreateSQLDiagnosisResult(outcome.result()));
	else
		return CreateSQLDiagnosisOutcome(outcome.error());
}

void RdsClient::createSQLDiagnosisAsync(const CreateSQLDiagnosisRequest& request, const CreateSQLDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSQLDiagnosis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateSQLDiagnosisOutcomeCallable RdsClient::createSQLDiagnosisCallable(const CreateSQLDiagnosisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSQLDiagnosisOutcome()>>(
			[this, request]()
			{
			return this->createSQLDiagnosis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeReplicaUsageOutcome RdsClient::describeReplicaUsage(const DescribeReplicaUsageRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicaUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicaUsageOutcome(DescribeReplicaUsageResult(outcome.result()));
	else
		return DescribeReplicaUsageOutcome(outcome.error());
}

void RdsClient::describeReplicaUsageAsync(const DescribeReplicaUsageRequest& request, const DescribeReplicaUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicaUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeReplicaUsageOutcomeCallable RdsClient::describeReplicaUsageCallable(const DescribeReplicaUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicaUsageOutcome()>>(
			[this, request]()
			{
			return this->describeReplicaUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyReadWriteSplittingConnectionOutcome RdsClient::modifyReadWriteSplittingConnection(const ModifyReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceNetworkDetailOutcome RdsClient::describeDBInstanceNetworkDetail(const DescribeDBInstanceNetworkDetailRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBInstanceNetworkDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBInstanceNetworkDetailOutcome(DescribeDBInstanceNetworkDetailResult(outcome.result()));
	else
		return DescribeDBInstanceNetworkDetailOutcome(outcome.error());
}

void RdsClient::describeDBInstanceNetworkDetailAsync(const DescribeDBInstanceNetworkDetailRequest& request, const DescribeDBInstanceNetworkDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBInstanceNetworkDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDBInstanceNetworkDetailOutcomeCallable RdsClient::describeDBInstanceNetworkDetailCallable(const DescribeDBInstanceNetworkDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBInstanceNetworkDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDBInstanceNetworkDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceDescriptionOutcome RdsClient::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyDBInstanceMaintainTimeOutcome RdsClient::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeReplicaPerformanceOutcome RdsClient::describeReplicaPerformance(const DescribeReplicaPerformanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeReplicaPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeReplicaPerformanceOutcome(DescribeReplicaPerformanceResult(outcome.result()));
	else
		return DescribeReplicaPerformanceOutcome(outcome.error());
}

void RdsClient::describeReplicaPerformanceAsync(const DescribeReplicaPerformanceRequest& request, const DescribeReplicaPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeReplicaPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeReplicaPerformanceOutcomeCallable RdsClient::describeReplicaPerformanceCallable(const DescribeReplicaPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeReplicaPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeReplicaPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLDiagnosisOutcome RdsClient::describeSQLDiagnosis(const DescribeSQLDiagnosisRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLDiagnosisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLDiagnosisOutcome(DescribeSQLDiagnosisResult(outcome.result()));
	else
		return DescribeSQLDiagnosisOutcome(outcome.error());
}

void RdsClient::describeSQLDiagnosisAsync(const DescribeSQLDiagnosisRequest& request, const DescribeSQLDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLDiagnosis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeSQLDiagnosisOutcomeCallable RdsClient::describeSQLDiagnosisCallable(const DescribeSQLDiagnosisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLDiagnosisOutcome()>>(
			[this, request]()
			{
			return this->describeSQLDiagnosis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDampPolicyByPolicyNameOutcome RdsClient::describeDampPolicyByPolicyName(const DescribeDampPolicyByPolicyNameRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDampPolicyByPolicyNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDampPolicyByPolicyNameOutcome(DescribeDampPolicyByPolicyNameResult(outcome.result()));
	else
		return DescribeDampPolicyByPolicyNameOutcome(outcome.error());
}

void RdsClient::describeDampPolicyByPolicyNameAsync(const DescribeDampPolicyByPolicyNameRequest& request, const DescribeDampPolicyByPolicyNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDampPolicyByPolicyName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeDampPolicyByPolicyNameOutcomeCallable RdsClient::describeDampPolicyByPolicyNameCallable(const DescribeDampPolicyByPolicyNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDampPolicyByPolicyNameOutcome()>>(
			[this, request]()
			{
			return this->describeDampPolicyByPolicyName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyResourceGroupOutcome RdsClient::modifyResourceGroup(const ModifyResourceGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeOssDownloadsForSQLServerOutcome RdsClient::describeOssDownloadsForSQLServer(const DescribeOssDownloadsForSQLServerRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::RequestServiceOfCloudDBAOutcome RdsClient::requestServiceOfCloudDBA(const RequestServiceOfCloudDBARequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RequestServiceOfCloudDBAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RequestServiceOfCloudDBAOutcome(RequestServiceOfCloudDBAResult(outcome.result()));
	else
		return RequestServiceOfCloudDBAOutcome(outcome.error());
}

void RdsClient::requestServiceOfCloudDBAAsync(const RequestServiceOfCloudDBARequest& request, const RequestServiceOfCloudDBAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, requestServiceOfCloudDBA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RequestServiceOfCloudDBAOutcomeCallable RdsClient::requestServiceOfCloudDBACallable(const RequestServiceOfCloudDBARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RequestServiceOfCloudDBAOutcome()>>(
			[this, request]()
			{
			return this->requestServiceOfCloudDBA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResetAccountOutcome RdsClient::resetAccount(const ResetAccountRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeResourceUsageOutcome RdsClient::describeResourceUsage(const DescribeResourceUsageRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::PreCheckBeforeImportDataOutcome RdsClient::preCheckBeforeImportData(const PreCheckBeforeImportDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return PreCheckBeforeImportDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreCheckBeforeImportDataOutcome(PreCheckBeforeImportDataResult(outcome.result()));
	else
		return PreCheckBeforeImportDataOutcome(outcome.error());
}

void RdsClient::preCheckBeforeImportDataAsync(const PreCheckBeforeImportDataRequest& request, const PreCheckBeforeImportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, preCheckBeforeImportData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::PreCheckBeforeImportDataOutcomeCallable RdsClient::preCheckBeforeImportDataCallable(const PreCheckBeforeImportDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreCheckBeforeImportDataOutcome()>>(
			[this, request]()
			{
			return this->preCheckBeforeImportData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::PurgeDBInstanceLogOutcome RdsClient::purgeDBInstanceLog(const PurgeDBInstanceLogRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeTaskInfoOutcome RdsClient::describeTaskInfo(const DescribeTaskInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTaskInfoOutcome(DescribeTaskInfoResult(outcome.result()));
	else
		return DescribeTaskInfoOutcome(outcome.error());
}

void RdsClient::describeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeTaskInfoOutcomeCallable RdsClient::describeTaskInfoCallable(const DescribeTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->describeTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeRegionsOutcome RdsClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::MigrateToOtherZoneOutcome RdsClient::migrateToOtherZone(const MigrateToOtherZoneRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DeleteAccountOutcome RdsClient::deleteAccount(const DeleteAccountRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeOptimizeAdviceOnMissPKOutcome RdsClient::describeOptimizeAdviceOnMissPK(const DescribeOptimizeAdviceOnMissPKRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOptimizeAdviceOnMissPKOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOptimizeAdviceOnMissPKOutcome(DescribeOptimizeAdviceOnMissPKResult(outcome.result()));
	else
		return DescribeOptimizeAdviceOnMissPKOutcome(outcome.error());
}

void RdsClient::describeOptimizeAdviceOnMissPKAsync(const DescribeOptimizeAdviceOnMissPKRequest& request, const DescribeOptimizeAdviceOnMissPKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOptimizeAdviceOnMissPK(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeOptimizeAdviceOnMissPKOutcomeCallable RdsClient::describeOptimizeAdviceOnMissPKCallable(const DescribeOptimizeAdviceOnMissPKRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOptimizeAdviceOnMissPKOutcome()>>(
			[this, request]()
			{
			return this->describeOptimizeAdviceOnMissPK(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSlowLogRecordsOutcome RdsClient::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ReleaseReadWriteSplittingConnectionOutcome RdsClient::releaseReadWriteSplittingConnection(const ReleaseReadWriteSplittingConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::UpgradeDBInstanceNetworkOutcome RdsClient::upgradeDBInstanceNetwork(const UpgradeDBInstanceNetworkRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeDBInstanceNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeDBInstanceNetworkOutcome(UpgradeDBInstanceNetworkResult(outcome.result()));
	else
		return UpgradeDBInstanceNetworkOutcome(outcome.error());
}

void RdsClient::upgradeDBInstanceNetworkAsync(const UpgradeDBInstanceNetworkRequest& request, const UpgradeDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeDBInstanceNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::UpgradeDBInstanceNetworkOutcomeCallable RdsClient::upgradeDBInstanceNetworkCallable(const UpgradeDBInstanceNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceNetworkOutcome()>>(
			[this, request]()
			{
			return this->upgradeDBInstanceNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeFilesForSQLServerOutcome RdsClient::describeFilesForSQLServer(const DescribeFilesForSQLServerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFilesForSQLServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFilesForSQLServerOutcome(DescribeFilesForSQLServerResult(outcome.result()));
	else
		return DescribeFilesForSQLServerOutcome(outcome.error());
}

void RdsClient::describeFilesForSQLServerAsync(const DescribeFilesForSQLServerRequest& request, const DescribeFilesForSQLServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFilesForSQLServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeFilesForSQLServerOutcomeCallable RdsClient::describeFilesForSQLServerCallable(const DescribeFilesForSQLServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFilesForSQLServerOutcome()>>(
			[this, request]()
			{
			return this->describeFilesForSQLServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ModifyDBInstanceECSSGRelationOutcome RdsClient::modifyDBInstanceECSSGRelation(const ModifyDBInstanceECSSGRelationRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBInstanceECSSGRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBInstanceECSSGRelationOutcome(ModifyDBInstanceECSSGRelationResult(outcome.result()));
	else
		return ModifyDBInstanceECSSGRelationOutcome(outcome.error());
}

void RdsClient::modifyDBInstanceECSSGRelationAsync(const ModifyDBInstanceECSSGRelationRequest& request, const ModifyDBInstanceECSSGRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBInstanceECSSGRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyDBInstanceECSSGRelationOutcomeCallable RdsClient::modifyDBInstanceECSSGRelationCallable(const ModifyDBInstanceECSSGRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBInstanceECSSGRelationOutcome()>>(
			[this, request]()
			{
			return this->modifyDBInstanceECSSGRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeErrorLogsOutcome RdsClient::describeErrorLogs(const DescribeErrorLogsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyDBInstanceHAConfigOutcome RdsClient::modifyDBInstanceHAConfig(const ModifyDBInstanceHAConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstancesAsCsvOutcome RdsClient::describeDBInstancesAsCsv(const DescribeDBInstancesAsCsvRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ResetAccountPasswordOutcome RdsClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeAccountsOutcome RdsClient::describeAccounts(const DescribeAccountsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribePriceOutcome RdsClient::describePrice(const DescribePriceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceByTagsOutcome RdsClient::describeDBInstanceByTags(const DescribeDBInstanceByTagsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceSSLOutcome RdsClient::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateDampPolicyOutcome RdsClient::createDampPolicy(const CreateDampPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDampPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDampPolicyOutcome(CreateDampPolicyResult(outcome.result()));
	else
		return CreateDampPolicyOutcome(outcome.error());
}

void RdsClient::createDampPolicyAsync(const CreateDampPolicyRequest& request, const CreateDampPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDampPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::CreateDampPolicyOutcomeCallable RdsClient::createDampPolicyCallable(const CreateDampPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDampPolicyOutcome()>>(
			[this, request]()
			{
			return this->createDampPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeDBInstancesByPerformanceOutcome RdsClient::describeDBInstancesByPerformance(const DescribeDBInstancesByPerformanceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::RenewDBInstanceOutcome RdsClient::renewDBInstance(const RenewDBInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RenewDBInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewDBInstanceOutcome(RenewDBInstanceResult(outcome.result()));
	else
		return RenewDBInstanceOutcome(outcome.error());
}

void RdsClient::renewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewDBInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RenewDBInstanceOutcomeCallable RdsClient::renewDBInstanceCallable(const RenewDBInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewDBInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewDBInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeSQLReportsOutcome RdsClient::describeSQLReports(const DescribeSQLReportsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::QueryPriceForBuyOutcome RdsClient::queryPriceForBuy(const QueryPriceForBuyRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPriceForBuyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPriceForBuyOutcome(QueryPriceForBuyResult(outcome.result()));
	else
		return QueryPriceForBuyOutcome(outcome.error());
}

void RdsClient::queryPriceForBuyAsync(const QueryPriceForBuyRequest& request, const QueryPriceForBuyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPriceForBuy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::QueryPriceForBuyOutcomeCallable RdsClient::queryPriceForBuyCallable(const QueryPriceForBuyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPriceForBuyOutcome()>>(
			[this, request]()
			{
			return this->queryPriceForBuy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupTasksOutcome RdsClient::describeBackupTasks(const DescribeBackupTasksRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DeleteDatabaseOutcome RdsClient::deleteDatabase(const DeleteDatabaseRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::ModifyGuardDomainModeOutcome RdsClient::modifyGuardDomainMode(const ModifyGuardDomainModeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGuardDomainModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGuardDomainModeOutcome(ModifyGuardDomainModeResult(outcome.result()));
	else
		return ModifyGuardDomainModeOutcome(outcome.error());
}

void RdsClient::modifyGuardDomainModeAsync(const ModifyGuardDomainModeRequest& request, const ModifyGuardDomainModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGuardDomainMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyGuardDomainModeOutcomeCallable RdsClient::modifyGuardDomainModeCallable(const ModifyGuardDomainModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGuardDomainModeOutcome()>>(
			[this, request]()
			{
			return this->modifyGuardDomainMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::DescribeBackupPolicyOutcome RdsClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::CreateMigrateTaskForSQLServerOutcome RdsClient::createMigrateTaskForSQLServer(const CreateMigrateTaskForSQLServerRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeDBInstanceIPArrayListOutcome RdsClient::describeDBInstanceIPArrayList(const DescribeDBInstanceIPArrayListRequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::SwitchDBInstanceHAOutcome RdsClient::switchDBInstanceHA(const SwitchDBInstanceHARequest &request) const
{
	auto endpointOutcome = endpoint();
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

RdsClient::DescribeBackupSetsForSecurityOutcome RdsClient::describeBackupSetsForSecurity(const DescribeBackupSetsForSecurityRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupSetsForSecurityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupSetsForSecurityOutcome(DescribeBackupSetsForSecurityResult(outcome.result()));
	else
		return DescribeBackupSetsForSecurityOutcome(outcome.error());
}

void RdsClient::describeBackupSetsForSecurityAsync(const DescribeBackupSetsForSecurityRequest& request, const DescribeBackupSetsForSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupSetsForSecurity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeBackupSetsForSecurityOutcomeCallable RdsClient::describeBackupSetsForSecurityCallable(const DescribeBackupSetsForSecurityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupSetsForSecurityOutcome()>>(
			[this, request]()
			{
			return this->describeBackupSetsForSecurity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ResetAccountForPGOutcome RdsClient::resetAccountForPG(const ResetAccountForPGRequest &request) const
{
	auto endpointOutcome = endpoint();
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

