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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Rds");
}

RdsClient::RdsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Rds");
}

RdsClient::RdsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Rds");
}

RdsClient::~RdsClient()
{}

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

RdsClient::MigrateToOtherRegionOutcome RdsClient::migrateToOtherRegion(const MigrateToOtherRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateToOtherRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateToOtherRegionOutcome(MigrateToOtherRegionResult(outcome.result()));
	else
		return MigrateToOtherRegionOutcome(outcome.error());
}

void RdsClient::migrateToOtherRegionAsync(const MigrateToOtherRegionRequest& request, const MigrateToOtherRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateToOtherRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::MigrateToOtherRegionOutcomeCallable RdsClient::migrateToOtherRegionCallable(const MigrateToOtherRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateToOtherRegionOutcome()>>(
			[this, request]()
			{
			return this->migrateToOtherRegion(request);
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

RdsClient::DescribeTemplatesListOutcome RdsClient::describeTemplatesList(const DescribeTemplatesListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplatesListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplatesListOutcome(DescribeTemplatesListResult(outcome.result()));
	else
		return DescribeTemplatesListOutcome(outcome.error());
}

void RdsClient::describeTemplatesListAsync(const DescribeTemplatesListRequest& request, const DescribeTemplatesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplatesList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeTemplatesListOutcomeCallable RdsClient::describeTemplatesListCallable(const DescribeTemplatesListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplatesListOutcome()>>(
			[this, request]()
			{
			return this->describeTemplatesList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::ImportDataForSQLServerOutcome RdsClient::importDataForSQLServer(const ImportDataForSQLServerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
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

RdsClient::CheckResourceOutcome RdsClient::checkResource(const CheckResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
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

RdsClient::ModifyReplicaDescriptionOutcome RdsClient::modifyReplicaDescription(const ModifyReplicaDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
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

RdsClient::AllocateInstanceVpcNetworkTypeOutcome RdsClient::allocateInstanceVpcNetworkType(const AllocateInstanceVpcNetworkTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateInstanceVpcNetworkTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateInstanceVpcNetworkTypeOutcome(AllocateInstanceVpcNetworkTypeResult(outcome.result()));
	else
		return AllocateInstanceVpcNetworkTypeOutcome(outcome.error());
}

void RdsClient::allocateInstanceVpcNetworkTypeAsync(const AllocateInstanceVpcNetworkTypeRequest& request, const AllocateInstanceVpcNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateInstanceVpcNetworkType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::AllocateInstanceVpcNetworkTypeOutcomeCallable RdsClient::allocateInstanceVpcNetworkTypeCallable(const AllocateInstanceVpcNetworkTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateInstanceVpcNetworkTypeOutcome()>>(
			[this, request]()
			{
			return this->allocateInstanceVpcNetworkType(request);
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

RdsClient::RestoreDBInstanceOutcome RdsClient::restoreDBInstance(const RestoreDBInstanceRequest &request) const
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

RdsClient::RequestServiceOfCloudDBExpertOutcome RdsClient::requestServiceOfCloudDBExpert(const RequestServiceOfCloudDBExpertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RequestServiceOfCloudDBExpertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RequestServiceOfCloudDBExpertOutcome(RequestServiceOfCloudDBExpertResult(outcome.result()));
	else
		return RequestServiceOfCloudDBExpertOutcome(outcome.error());
}

void RdsClient::requestServiceOfCloudDBExpertAsync(const RequestServiceOfCloudDBExpertRequest& request, const RequestServiceOfCloudDBExpertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, requestServiceOfCloudDBExpert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::RequestServiceOfCloudDBExpertOutcomeCallable RdsClient::requestServiceOfCloudDBExpertCallable(const RequestServiceOfCloudDBExpertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RequestServiceOfCloudDBExpertOutcome()>>(
			[this, request]()
			{
			return this->requestServiceOfCloudDBExpert(request);
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

RdsClient::CreateDBInstanceReplicaOutcome RdsClient::createDBInstanceReplica(const CreateDBInstanceReplicaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
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

RdsClient::AllocateInstancePrivateConnectionOutcome RdsClient::allocateInstancePrivateConnection(const AllocateInstancePrivateConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
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

RdsClient::DescribeInstanceVpcMigrateInfoOutcome RdsClient::describeInstanceVpcMigrateInfo(const DescribeInstanceVpcMigrateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceVpcMigrateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceVpcMigrateInfoOutcome(DescribeInstanceVpcMigrateInfoResult(outcome.result()));
	else
		return DescribeInstanceVpcMigrateInfoOutcome(outcome.error());
}

void RdsClient::describeInstanceVpcMigrateInfoAsync(const DescribeInstanceVpcMigrateInfoRequest& request, const DescribeInstanceVpcMigrateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceVpcMigrateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeInstanceVpcMigrateInfoOutcomeCallable RdsClient::describeInstanceVpcMigrateInfoCallable(const DescribeInstanceVpcMigrateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceVpcMigrateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceVpcMigrateInfo(request);
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

RdsClient::DescribeCloudDbExpertServiceOutcome RdsClient::describeCloudDbExpertService(const DescribeCloudDbExpertServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudDbExpertServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudDbExpertServiceOutcome(DescribeCloudDbExpertServiceResult(outcome.result()));
	else
		return DescribeCloudDbExpertServiceOutcome(outcome.error());
}

void RdsClient::describeCloudDbExpertServiceAsync(const DescribeCloudDbExpertServiceRequest& request, const DescribeCloudDbExpertServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudDbExpertService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeCloudDbExpertServiceOutcomeCallable RdsClient::describeCloudDbExpertServiceCallable(const DescribeCloudDbExpertServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudDbExpertServiceOutcome()>>(
			[this, request]()
			{
			return this->describeCloudDbExpertService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RdsClient::EvaluateSupportByokShowOutcome RdsClient::evaluateSupportByokShow(const EvaluateSupportByokShowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EvaluateSupportByokShowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EvaluateSupportByokShowOutcome(EvaluateSupportByokShowResult(outcome.result()));
	else
		return EvaluateSupportByokShowOutcome(outcome.error());
}

void RdsClient::evaluateSupportByokShowAsync(const EvaluateSupportByokShowRequest& request, const EvaluateSupportByokShowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, evaluateSupportByokShow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::EvaluateSupportByokShowOutcomeCallable RdsClient::evaluateSupportByokShowCallable(const EvaluateSupportByokShowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EvaluateSupportByokShowOutcome()>>(
			[this, request]()
			{
			return this->evaluateSupportByokShow(request);
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

RdsClient::DescribeProxyFunctionSupportOutcome RdsClient::describeProxyFunctionSupport(const DescribeProxyFunctionSupportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProxyFunctionSupportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProxyFunctionSupportOutcome(DescribeProxyFunctionSupportResult(outcome.result()));
	else
		return DescribeProxyFunctionSupportOutcome(outcome.error());
}

void RdsClient::describeProxyFunctionSupportAsync(const DescribeProxyFunctionSupportRequest& request, const DescribeProxyFunctionSupportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProxyFunctionSupport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeProxyFunctionSupportOutcomeCallable RdsClient::describeProxyFunctionSupportCallable(const DescribeProxyFunctionSupportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProxyFunctionSupportOutcome()>>(
			[this, request]()
			{
			return this->describeProxyFunctionSupport(request);
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

RdsClient::DescribeTaskInfoOutcome RdsClient::describeTaskInfo(const DescribeTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
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

RdsClient::ModifyMySQLDBInstanceDelayOutcome RdsClient::modifyMySQLDBInstanceDelay(const ModifyMySQLDBInstanceDelayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMySQLDBInstanceDelayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMySQLDBInstanceDelayOutcome(ModifyMySQLDBInstanceDelayResult(outcome.result()));
	else
		return ModifyMySQLDBInstanceDelayOutcome(outcome.error());
}

void RdsClient::modifyMySQLDBInstanceDelayAsync(const ModifyMySQLDBInstanceDelayRequest& request, const ModifyMySQLDBInstanceDelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMySQLDBInstanceDelay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::ModifyMySQLDBInstanceDelayOutcomeCallable RdsClient::modifyMySQLDBInstanceDelayCallable(const ModifyMySQLDBInstanceDelayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMySQLDBInstanceDelayOutcome()>>(
			[this, request]()
			{
			return this->modifyMySQLDBInstanceDelay(request);
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

RdsClient::DescribeAvailableInstanceClassOutcome RdsClient::describeAvailableInstanceClass(const DescribeAvailableInstanceClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableInstanceClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableInstanceClassOutcome(DescribeAvailableInstanceClassResult(outcome.result()));
	else
		return DescribeAvailableInstanceClassOutcome(outcome.error());
}

void RdsClient::describeAvailableInstanceClassAsync(const DescribeAvailableInstanceClassRequest& request, const DescribeAvailableInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableInstanceClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeAvailableInstanceClassOutcomeCallable RdsClient::describeAvailableInstanceClassCallable(const DescribeAvailableInstanceClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableInstanceClassOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableInstanceClass(request);
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

RdsClient::DescribeMetaListOutcome RdsClient::describeMetaList(const DescribeMetaListRequest &request) const
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

void RdsClient::describeMetaListAsync(const DescribeMetaListRequest& request, const DescribeMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RdsClient::DescribeMetaListOutcomeCallable RdsClient::describeMetaListCallable(const DescribeMetaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetaListOutcome()>>(
			[this, request]()
			{
			return this->describeMetaList(request);
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

