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

#include <alibabacloud/oceanbasepro/OceanBaseProClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

namespace
{
	const std::string SERVICE_NAME = "OceanBasePro";
}

OceanBaseProClient::OceanBaseProClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "oceanbase");
}

OceanBaseProClient::OceanBaseProClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "oceanbase");
}

OceanBaseProClient::OceanBaseProClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "oceanbase");
}

OceanBaseProClient::~OceanBaseProClient()
{}

OceanBaseProClient::BatchKillProcessListOutcome OceanBaseProClient::batchKillProcessList(const BatchKillProcessListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchKillProcessListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchKillProcessListOutcome(BatchKillProcessListResult(outcome.result()));
	else
		return BatchKillProcessListOutcome(outcome.error());
}

void OceanBaseProClient::batchKillProcessListAsync(const BatchKillProcessListRequest& request, const BatchKillProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchKillProcessList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::BatchKillProcessListOutcomeCallable OceanBaseProClient::batchKillProcessListCallable(const BatchKillProcessListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchKillProcessListOutcome()>>(
			[this, request]()
			{
			return this->batchKillProcessList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::BatchKillSessionListOutcome OceanBaseProClient::batchKillSessionList(const BatchKillSessionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchKillSessionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchKillSessionListOutcome(BatchKillSessionListResult(outcome.result()));
	else
		return BatchKillSessionListOutcome(outcome.error());
}

void OceanBaseProClient::batchKillSessionListAsync(const BatchKillSessionListRequest& request, const BatchKillSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchKillSessionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::BatchKillSessionListOutcomeCallable OceanBaseProClient::batchKillSessionListCallable(const BatchKillSessionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchKillSessionListOutcome()>>(
			[this, request]()
			{
			return this->batchKillSessionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CancelProjectModifyRecordOutcome OceanBaseProClient::cancelProjectModifyRecord(const CancelProjectModifyRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelProjectModifyRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelProjectModifyRecordOutcome(CancelProjectModifyRecordResult(outcome.result()));
	else
		return CancelProjectModifyRecordOutcome(outcome.error());
}

void OceanBaseProClient::cancelProjectModifyRecordAsync(const CancelProjectModifyRecordRequest& request, const CancelProjectModifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelProjectModifyRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CancelProjectModifyRecordOutcomeCallable OceanBaseProClient::cancelProjectModifyRecordCallable(const CancelProjectModifyRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelProjectModifyRecordOutcome()>>(
			[this, request]()
			{
			return this->cancelProjectModifyRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateBackupSetDownloadLinkOutcome OceanBaseProClient::createBackupSetDownloadLink(const CreateBackupSetDownloadLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupSetDownloadLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupSetDownloadLinkOutcome(CreateBackupSetDownloadLinkResult(outcome.result()));
	else
		return CreateBackupSetDownloadLinkOutcome(outcome.error());
}

void OceanBaseProClient::createBackupSetDownloadLinkAsync(const CreateBackupSetDownloadLinkRequest& request, const CreateBackupSetDownloadLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupSetDownloadLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateBackupSetDownloadLinkOutcomeCallable OceanBaseProClient::createBackupSetDownloadLinkCallable(const CreateBackupSetDownloadLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupSetDownloadLinkOutcome()>>(
			[this, request]()
			{
			return this->createBackupSetDownloadLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateDatabaseOutcome OceanBaseProClient::createDatabase(const CreateDatabaseRequest &request) const
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

void OceanBaseProClient::createDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateDatabaseOutcomeCallable OceanBaseProClient::createDatabaseCallable(const CreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateInstanceOutcome OceanBaseProClient::createInstance(const CreateInstanceRequest &request) const
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

void OceanBaseProClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateInstanceOutcomeCallable OceanBaseProClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateLabelOutcome OceanBaseProClient::createLabel(const CreateLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLabelOutcome(CreateLabelResult(outcome.result()));
	else
		return CreateLabelOutcome(outcome.error());
}

void OceanBaseProClient::createLabelAsync(const CreateLabelRequest& request, const CreateLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateLabelOutcomeCallable OceanBaseProClient::createLabelCallable(const CreateLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLabelOutcome()>>(
			[this, request]()
			{
			return this->createLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateMySqlDataSourceOutcome OceanBaseProClient::createMySqlDataSource(const CreateMySqlDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMySqlDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMySqlDataSourceOutcome(CreateMySqlDataSourceResult(outcome.result()));
	else
		return CreateMySqlDataSourceOutcome(outcome.error());
}

void OceanBaseProClient::createMySqlDataSourceAsync(const CreateMySqlDataSourceRequest& request, const CreateMySqlDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMySqlDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateMySqlDataSourceOutcomeCallable OceanBaseProClient::createMySqlDataSourceCallable(const CreateMySqlDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMySqlDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createMySqlDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateOasOutlineTaskOutcome OceanBaseProClient::createOasOutlineTask(const CreateOasOutlineTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOasOutlineTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOasOutlineTaskOutcome(CreateOasOutlineTaskResult(outcome.result()));
	else
		return CreateOasOutlineTaskOutcome(outcome.error());
}

void OceanBaseProClient::createOasOutlineTaskAsync(const CreateOasOutlineTaskRequest& request, const CreateOasOutlineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOasOutlineTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateOasOutlineTaskOutcomeCallable OceanBaseProClient::createOasOutlineTaskCallable(const CreateOasOutlineTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOasOutlineTaskOutcome()>>(
			[this, request]()
			{
			return this->createOasOutlineTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateOceanBaseDataSourceOutcome OceanBaseProClient::createOceanBaseDataSource(const CreateOceanBaseDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOceanBaseDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOceanBaseDataSourceOutcome(CreateOceanBaseDataSourceResult(outcome.result()));
	else
		return CreateOceanBaseDataSourceOutcome(outcome.error());
}

void OceanBaseProClient::createOceanBaseDataSourceAsync(const CreateOceanBaseDataSourceRequest& request, const CreateOceanBaseDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOceanBaseDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateOceanBaseDataSourceOutcomeCallable OceanBaseProClient::createOceanBaseDataSourceCallable(const CreateOceanBaseDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOceanBaseDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createOceanBaseDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateOmsMysqlDataSourceOutcome OceanBaseProClient::createOmsMysqlDataSource(const CreateOmsMysqlDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOmsMysqlDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOmsMysqlDataSourceOutcome(CreateOmsMysqlDataSourceResult(outcome.result()));
	else
		return CreateOmsMysqlDataSourceOutcome(outcome.error());
}

void OceanBaseProClient::createOmsMysqlDataSourceAsync(const CreateOmsMysqlDataSourceRequest& request, const CreateOmsMysqlDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOmsMysqlDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateOmsMysqlDataSourceOutcomeCallable OceanBaseProClient::createOmsMysqlDataSourceCallable(const CreateOmsMysqlDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOmsMysqlDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createOmsMysqlDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateProjectOutcome OceanBaseProClient::createProject(const CreateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectOutcome(CreateProjectResult(outcome.result()));
	else
		return CreateProjectOutcome(outcome.error());
}

void OceanBaseProClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateProjectOutcomeCallable OceanBaseProClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateProjectModifyRecordsOutcome OceanBaseProClient::createProjectModifyRecords(const CreateProjectModifyRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectModifyRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectModifyRecordsOutcome(CreateProjectModifyRecordsResult(outcome.result()));
	else
		return CreateProjectModifyRecordsOutcome(outcome.error());
}

void OceanBaseProClient::createProjectModifyRecordsAsync(const CreateProjectModifyRecordsRequest& request, const CreateProjectModifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProjectModifyRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateProjectModifyRecordsOutcomeCallable OceanBaseProClient::createProjectModifyRecordsCallable(const CreateProjectModifyRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectModifyRecordsOutcome()>>(
			[this, request]()
			{
			return this->createProjectModifyRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateRdsPostgreSQLDataSourceOutcome OceanBaseProClient::createRdsPostgreSQLDataSource(const CreateRdsPostgreSQLDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRdsPostgreSQLDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRdsPostgreSQLDataSourceOutcome(CreateRdsPostgreSQLDataSourceResult(outcome.result()));
	else
		return CreateRdsPostgreSQLDataSourceOutcome(outcome.error());
}

void OceanBaseProClient::createRdsPostgreSQLDataSourceAsync(const CreateRdsPostgreSQLDataSourceRequest& request, const CreateRdsPostgreSQLDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRdsPostgreSQLDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateRdsPostgreSQLDataSourceOutcomeCallable OceanBaseProClient::createRdsPostgreSQLDataSourceCallable(const CreateRdsPostgreSQLDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRdsPostgreSQLDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createRdsPostgreSQLDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateSecurityIpGroupOutcome OceanBaseProClient::createSecurityIpGroup(const CreateSecurityIpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecurityIpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecurityIpGroupOutcome(CreateSecurityIpGroupResult(outcome.result()));
	else
		return CreateSecurityIpGroupOutcome(outcome.error());
}

void OceanBaseProClient::createSecurityIpGroupAsync(const CreateSecurityIpGroupRequest& request, const CreateSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecurityIpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateSecurityIpGroupOutcomeCallable OceanBaseProClient::createSecurityIpGroupCallable(const CreateSecurityIpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecurityIpGroupOutcome()>>(
			[this, request]()
			{
			return this->createSecurityIpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateTagOutcome OceanBaseProClient::createTag(const CreateTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTagOutcome(CreateTagResult(outcome.result()));
	else
		return CreateTagOutcome(outcome.error());
}

void OceanBaseProClient::createTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateTagOutcomeCallable OceanBaseProClient::createTagCallable(const CreateTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagOutcome()>>(
			[this, request]()
			{
			return this->createTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateTagValueOutcome OceanBaseProClient::createTagValue(const CreateTagValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTagValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTagValueOutcome(CreateTagValueResult(outcome.result()));
	else
		return CreateTagValueOutcome(outcome.error());
}

void OceanBaseProClient::createTagValueAsync(const CreateTagValueRequest& request, const CreateTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTagValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateTagValueOutcomeCallable OceanBaseProClient::createTagValueCallable(const CreateTagValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagValueOutcome()>>(
			[this, request]()
			{
			return this->createTagValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateTenantOutcome OceanBaseProClient::createTenant(const CreateTenantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTenantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTenantOutcome(CreateTenantResult(outcome.result()));
	else
		return CreateTenantOutcome(outcome.error());
}

void OceanBaseProClient::createTenantAsync(const CreateTenantRequest& request, const CreateTenantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTenant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateTenantOutcomeCallable OceanBaseProClient::createTenantCallable(const CreateTenantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTenantOutcome()>>(
			[this, request]()
			{
			return this->createTenant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateTenantReadOnlyConnectionOutcome OceanBaseProClient::createTenantReadOnlyConnection(const CreateTenantReadOnlyConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTenantReadOnlyConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTenantReadOnlyConnectionOutcome(CreateTenantReadOnlyConnectionResult(outcome.result()));
	else
		return CreateTenantReadOnlyConnectionOutcome(outcome.error());
}

void OceanBaseProClient::createTenantReadOnlyConnectionAsync(const CreateTenantReadOnlyConnectionRequest& request, const CreateTenantReadOnlyConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTenantReadOnlyConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateTenantReadOnlyConnectionOutcomeCallable OceanBaseProClient::createTenantReadOnlyConnectionCallable(const CreateTenantReadOnlyConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTenantReadOnlyConnectionOutcome()>>(
			[this, request]()
			{
			return this->createTenantReadOnlyConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateTenantSecurityIpGroupOutcome OceanBaseProClient::createTenantSecurityIpGroup(const CreateTenantSecurityIpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTenantSecurityIpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTenantSecurityIpGroupOutcome(CreateTenantSecurityIpGroupResult(outcome.result()));
	else
		return CreateTenantSecurityIpGroupOutcome(outcome.error());
}

void OceanBaseProClient::createTenantSecurityIpGroupAsync(const CreateTenantSecurityIpGroupRequest& request, const CreateTenantSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTenantSecurityIpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateTenantSecurityIpGroupOutcomeCallable OceanBaseProClient::createTenantSecurityIpGroupCallable(const CreateTenantSecurityIpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTenantSecurityIpGroupOutcome()>>(
			[this, request]()
			{
			return this->createTenantSecurityIpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::CreateTenantUserOutcome OceanBaseProClient::createTenantUser(const CreateTenantUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTenantUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTenantUserOutcome(CreateTenantUserResult(outcome.result()));
	else
		return CreateTenantUserOutcome(outcome.error());
}

void OceanBaseProClient::createTenantUserAsync(const CreateTenantUserRequest& request, const CreateTenantUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTenantUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::CreateTenantUserOutcomeCallable OceanBaseProClient::createTenantUserCallable(const CreateTenantUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTenantUserOutcome()>>(
			[this, request]()
			{
			return this->createTenantUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteDataSourceOutcome OceanBaseProClient::deleteDataSource(const DeleteDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSourceOutcome(DeleteDataSourceResult(outcome.result()));
	else
		return DeleteDataSourceOutcome(outcome.error());
}

void OceanBaseProClient::deleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteDataSourceOutcomeCallable OceanBaseProClient::deleteDataSourceCallable(const DeleteDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteDatabasesOutcome OceanBaseProClient::deleteDatabases(const DeleteDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatabasesOutcome(DeleteDatabasesResult(outcome.result()));
	else
		return DeleteDatabasesOutcome(outcome.error());
}

void OceanBaseProClient::deleteDatabasesAsync(const DeleteDatabasesRequest& request, const DeleteDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteDatabasesOutcomeCallable OceanBaseProClient::deleteDatabasesCallable(const DeleteDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatabasesOutcome()>>(
			[this, request]()
			{
			return this->deleteDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteInstancesOutcome OceanBaseProClient::deleteInstances(const DeleteInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstancesOutcome(DeleteInstancesResult(outcome.result()));
	else
		return DeleteInstancesOutcome(outcome.error());
}

void OceanBaseProClient::deleteInstancesAsync(const DeleteInstancesRequest& request, const DeleteInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteInstancesOutcomeCallable OceanBaseProClient::deleteInstancesCallable(const DeleteInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstancesOutcome()>>(
			[this, request]()
			{
			return this->deleteInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteProjectOutcome OceanBaseProClient::deleteProject(const DeleteProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectOutcome(DeleteProjectResult(outcome.result()));
	else
		return DeleteProjectOutcome(outcome.error());
}

void OceanBaseProClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteProjectOutcomeCallable OceanBaseProClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteSecurityIpGroupOutcome OceanBaseProClient::deleteSecurityIpGroup(const DeleteSecurityIpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecurityIpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecurityIpGroupOutcome(DeleteSecurityIpGroupResult(outcome.result()));
	else
		return DeleteSecurityIpGroupOutcome(outcome.error());
}

void OceanBaseProClient::deleteSecurityIpGroupAsync(const DeleteSecurityIpGroupRequest& request, const DeleteSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecurityIpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteSecurityIpGroupOutcomeCallable OceanBaseProClient::deleteSecurityIpGroupCallable(const DeleteSecurityIpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecurityIpGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSecurityIpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteTagOutcome OceanBaseProClient::deleteTag(const DeleteTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagOutcome(DeleteTagResult(outcome.result()));
	else
		return DeleteTagOutcome(outcome.error());
}

void OceanBaseProClient::deleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteTagOutcomeCallable OceanBaseProClient::deleteTagCallable(const DeleteTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagOutcome()>>(
			[this, request]()
			{
			return this->deleteTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteTagValueOutcome OceanBaseProClient::deleteTagValue(const DeleteTagValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagValueOutcome(DeleteTagValueResult(outcome.result()));
	else
		return DeleteTagValueOutcome(outcome.error());
}

void OceanBaseProClient::deleteTagValueAsync(const DeleteTagValueRequest& request, const DeleteTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTagValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteTagValueOutcomeCallable OceanBaseProClient::deleteTagValueCallable(const DeleteTagValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagValueOutcome()>>(
			[this, request]()
			{
			return this->deleteTagValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteTenantSecurityIpGroupOutcome OceanBaseProClient::deleteTenantSecurityIpGroup(const DeleteTenantSecurityIpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTenantSecurityIpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTenantSecurityIpGroupOutcome(DeleteTenantSecurityIpGroupResult(outcome.result()));
	else
		return DeleteTenantSecurityIpGroupOutcome(outcome.error());
}

void OceanBaseProClient::deleteTenantSecurityIpGroupAsync(const DeleteTenantSecurityIpGroupRequest& request, const DeleteTenantSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTenantSecurityIpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteTenantSecurityIpGroupOutcomeCallable OceanBaseProClient::deleteTenantSecurityIpGroupCallable(const DeleteTenantSecurityIpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTenantSecurityIpGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteTenantSecurityIpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteTenantUsersOutcome OceanBaseProClient::deleteTenantUsers(const DeleteTenantUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTenantUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTenantUsersOutcome(DeleteTenantUsersResult(outcome.result()));
	else
		return DeleteTenantUsersOutcome(outcome.error());
}

void OceanBaseProClient::deleteTenantUsersAsync(const DeleteTenantUsersRequest& request, const DeleteTenantUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTenantUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteTenantUsersOutcomeCallable OceanBaseProClient::deleteTenantUsersCallable(const DeleteTenantUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTenantUsersOutcome()>>(
			[this, request]()
			{
			return this->deleteTenantUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DeleteTenantsOutcome OceanBaseProClient::deleteTenants(const DeleteTenantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTenantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTenantsOutcome(DeleteTenantsResult(outcome.result()));
	else
		return DeleteTenantsOutcome(outcome.error());
}

void OceanBaseProClient::deleteTenantsAsync(const DeleteTenantsRequest& request, const DeleteTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTenants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DeleteTenantsOutcomeCallable OceanBaseProClient::deleteTenantsCallable(const DeleteTenantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTenantsOutcome()>>(
			[this, request]()
			{
			return this->deleteTenants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeAnomalySQLListOutcome OceanBaseProClient::describeAnomalySQLList(const DescribeAnomalySQLListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnomalySQLListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnomalySQLListOutcome(DescribeAnomalySQLListResult(outcome.result()));
	else
		return DescribeAnomalySQLListOutcome(outcome.error());
}

void OceanBaseProClient::describeAnomalySQLListAsync(const DescribeAnomalySQLListRequest& request, const DescribeAnomalySQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnomalySQLList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeAnomalySQLListOutcomeCallable OceanBaseProClient::describeAnomalySQLListCallable(const DescribeAnomalySQLListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnomalySQLListOutcome()>>(
			[this, request]()
			{
			return this->describeAnomalySQLList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeAvailableCpuResourceOutcome OceanBaseProClient::describeAvailableCpuResource(const DescribeAvailableCpuResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableCpuResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableCpuResourceOutcome(DescribeAvailableCpuResourceResult(outcome.result()));
	else
		return DescribeAvailableCpuResourceOutcome(outcome.error());
}

void OceanBaseProClient::describeAvailableCpuResourceAsync(const DescribeAvailableCpuResourceRequest& request, const DescribeAvailableCpuResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableCpuResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeAvailableCpuResourceOutcomeCallable OceanBaseProClient::describeAvailableCpuResourceCallable(const DescribeAvailableCpuResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableCpuResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableCpuResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeAvailableMemResourceOutcome OceanBaseProClient::describeAvailableMemResource(const DescribeAvailableMemResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableMemResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableMemResourceOutcome(DescribeAvailableMemResourceResult(outcome.result()));
	else
		return DescribeAvailableMemResourceOutcome(outcome.error());
}

void OceanBaseProClient::describeAvailableMemResourceAsync(const DescribeAvailableMemResourceRequest& request, const DescribeAvailableMemResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableMemResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeAvailableMemResourceOutcomeCallable OceanBaseProClient::describeAvailableMemResourceCallable(const DescribeAvailableMemResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableMemResourceOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableMemResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeAvailableSpecOutcome OceanBaseProClient::describeAvailableSpec(const DescribeAvailableSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableSpecOutcome(DescribeAvailableSpecResult(outcome.result()));
	else
		return DescribeAvailableSpecOutcome(outcome.error());
}

void OceanBaseProClient::describeAvailableSpecAsync(const DescribeAvailableSpecRequest& request, const DescribeAvailableSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeAvailableSpecOutcomeCallable OceanBaseProClient::describeAvailableSpecCallable(const DescribeAvailableSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableSpecOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeAvailableZoneOutcome OceanBaseProClient::describeAvailableZone(const DescribeAvailableZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAvailableZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAvailableZoneOutcome(DescribeAvailableZoneResult(outcome.result()));
	else
		return DescribeAvailableZoneOutcome(outcome.error());
}

void OceanBaseProClient::describeAvailableZoneAsync(const DescribeAvailableZoneRequest& request, const DescribeAvailableZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAvailableZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeAvailableZoneOutcomeCallable OceanBaseProClient::describeAvailableZoneCallable(const DescribeAvailableZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAvailableZoneOutcome()>>(
			[this, request]()
			{
			return this->describeAvailableZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeBackupEncryptedStringOutcome OceanBaseProClient::describeBackupEncryptedString(const DescribeBackupEncryptedStringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupEncryptedStringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupEncryptedStringOutcome(DescribeBackupEncryptedStringResult(outcome.result()));
	else
		return DescribeBackupEncryptedStringOutcome(outcome.error());
}

void OceanBaseProClient::describeBackupEncryptedStringAsync(const DescribeBackupEncryptedStringRequest& request, const DescribeBackupEncryptedStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupEncryptedString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeBackupEncryptedStringOutcomeCallable OceanBaseProClient::describeBackupEncryptedStringCallable(const DescribeBackupEncryptedStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupEncryptedStringOutcome()>>(
			[this, request]()
			{
			return this->describeBackupEncryptedString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeBackupSetDownloadLinkOutcome OceanBaseProClient::describeBackupSetDownloadLink(const DescribeBackupSetDownloadLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupSetDownloadLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupSetDownloadLinkOutcome(DescribeBackupSetDownloadLinkResult(outcome.result()));
	else
		return DescribeBackupSetDownloadLinkOutcome(outcome.error());
}

void OceanBaseProClient::describeBackupSetDownloadLinkAsync(const DescribeBackupSetDownloadLinkRequest& request, const DescribeBackupSetDownloadLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupSetDownloadLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeBackupSetDownloadLinkOutcomeCallable OceanBaseProClient::describeBackupSetDownloadLinkCallable(const DescribeBackupSetDownloadLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupSetDownloadLinkOutcome()>>(
			[this, request]()
			{
			return this->describeBackupSetDownloadLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeCharsetOutcome OceanBaseProClient::describeCharset(const DescribeCharsetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCharsetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCharsetOutcome(DescribeCharsetResult(outcome.result()));
	else
		return DescribeCharsetOutcome(outcome.error());
}

void OceanBaseProClient::describeCharsetAsync(const DescribeCharsetRequest& request, const DescribeCharsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCharset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeCharsetOutcomeCallable OceanBaseProClient::describeCharsetCallable(const DescribeCharsetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCharsetOutcome()>>(
			[this, request]()
			{
			return this->describeCharset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeDataBackupSetOutcome OceanBaseProClient::describeDataBackupSet(const DescribeDataBackupSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataBackupSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataBackupSetOutcome(DescribeDataBackupSetResult(outcome.result()));
	else
		return DescribeDataBackupSetOutcome(outcome.error());
}

void OceanBaseProClient::describeDataBackupSetAsync(const DescribeDataBackupSetRequest& request, const DescribeDataBackupSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataBackupSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeDataBackupSetOutcomeCallable OceanBaseProClient::describeDataBackupSetCallable(const DescribeDataBackupSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataBackupSetOutcome()>>(
			[this, request]()
			{
			return this->describeDataBackupSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeDatabasesOutcome OceanBaseProClient::describeDatabases(const DescribeDatabasesRequest &request) const
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

void OceanBaseProClient::describeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeDatabasesOutcomeCallable OceanBaseProClient::describeDatabasesCallable(const DescribeDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
			[this, request]()
			{
			return this->describeDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceOutcome OceanBaseProClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void OceanBaseProClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceOutcomeCallable OceanBaseProClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceAvailableZonesOutcome OceanBaseProClient::describeInstanceAvailableZones(const DescribeInstanceAvailableZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAvailableZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAvailableZonesOutcome(DescribeInstanceAvailableZonesResult(outcome.result()));
	else
		return DescribeInstanceAvailableZonesOutcome(outcome.error());
}

void OceanBaseProClient::describeInstanceAvailableZonesAsync(const DescribeInstanceAvailableZonesRequest& request, const DescribeInstanceAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAvailableZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceAvailableZonesOutcomeCallable OceanBaseProClient::describeInstanceAvailableZonesCallable(const DescribeInstanceAvailableZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAvailableZonesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAvailableZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceCreatableZoneOutcome OceanBaseProClient::describeInstanceCreatableZone(const DescribeInstanceCreatableZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceCreatableZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceCreatableZoneOutcome(DescribeInstanceCreatableZoneResult(outcome.result()));
	else
		return DescribeInstanceCreatableZoneOutcome(outcome.error());
}

void OceanBaseProClient::describeInstanceCreatableZoneAsync(const DescribeInstanceCreatableZoneRequest& request, const DescribeInstanceCreatableZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceCreatableZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceCreatableZoneOutcomeCallable OceanBaseProClient::describeInstanceCreatableZoneCallable(const DescribeInstanceCreatableZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceCreatableZoneOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceCreatableZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceSSLOutcome OceanBaseProClient::describeInstanceSSL(const DescribeInstanceSSLRequest &request) const
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

void OceanBaseProClient::describeInstanceSSLAsync(const DescribeInstanceSSLRequest& request, const DescribeInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceSSLOutcomeCallable OceanBaseProClient::describeInstanceSSLCallable(const DescribeInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceSecurityConfigsOutcome OceanBaseProClient::describeInstanceSecurityConfigs(const DescribeInstanceSecurityConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSecurityConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSecurityConfigsOutcome(DescribeInstanceSecurityConfigsResult(outcome.result()));
	else
		return DescribeInstanceSecurityConfigsOutcome(outcome.error());
}

void OceanBaseProClient::describeInstanceSecurityConfigsAsync(const DescribeInstanceSecurityConfigsRequest& request, const DescribeInstanceSecurityConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSecurityConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceSecurityConfigsOutcomeCallable OceanBaseProClient::describeInstanceSecurityConfigsCallable(const DescribeInstanceSecurityConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSecurityConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSecurityConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceSummaryOutcome OceanBaseProClient::describeInstanceSummary(const DescribeInstanceSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSummaryOutcome(DescribeInstanceSummaryResult(outcome.result()));
	else
		return DescribeInstanceSummaryOutcome(outcome.error());
}

void OceanBaseProClient::describeInstanceSummaryAsync(const DescribeInstanceSummaryRequest& request, const DescribeInstanceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceSummaryOutcomeCallable OceanBaseProClient::describeInstanceSummaryCallable(const DescribeInstanceSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceTagsOutcome OceanBaseProClient::describeInstanceTags(const DescribeInstanceTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTagsOutcome(DescribeInstanceTagsResult(outcome.result()));
	else
		return DescribeInstanceTagsOutcome(outcome.error());
}

void OceanBaseProClient::describeInstanceTagsAsync(const DescribeInstanceTagsRequest& request, const DescribeInstanceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceTagsOutcomeCallable OceanBaseProClient::describeInstanceTagsCallable(const DescribeInstanceTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTagsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceTenantModesOutcome OceanBaseProClient::describeInstanceTenantModes(const DescribeInstanceTenantModesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTenantModesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTenantModesOutcome(DescribeInstanceTenantModesResult(outcome.result()));
	else
		return DescribeInstanceTenantModesOutcome(outcome.error());
}

void OceanBaseProClient::describeInstanceTenantModesAsync(const DescribeInstanceTenantModesRequest& request, const DescribeInstanceTenantModesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTenantModes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceTenantModesOutcomeCallable OceanBaseProClient::describeInstanceTenantModesCallable(const DescribeInstanceTenantModesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTenantModesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTenantModes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstanceTopologyOutcome OceanBaseProClient::describeInstanceTopology(const DescribeInstanceTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTopologyOutcome(DescribeInstanceTopologyResult(outcome.result()));
	else
		return DescribeInstanceTopologyOutcome(outcome.error());
}

void OceanBaseProClient::describeInstanceTopologyAsync(const DescribeInstanceTopologyRequest& request, const DescribeInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstanceTopologyOutcomeCallable OceanBaseProClient::describeInstanceTopologyCallable(const DescribeInstanceTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTopologyOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeInstancesOutcome OceanBaseProClient::describeInstances(const DescribeInstancesRequest &request) const
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

void OceanBaseProClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeInstancesOutcomeCallable OceanBaseProClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeMetricsDataOutcome OceanBaseProClient::describeMetricsData(const DescribeMetricsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetricsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetricsDataOutcome(DescribeMetricsDataResult(outcome.result()));
	else
		return DescribeMetricsDataOutcome(outcome.error());
}

void OceanBaseProClient::describeMetricsDataAsync(const DescribeMetricsDataRequest& request, const DescribeMetricsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetricsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeMetricsDataOutcomeCallable OceanBaseProClient::describeMetricsDataCallable(const DescribeMetricsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetricsDataOutcome()>>(
			[this, request]()
			{
			return this->describeMetricsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeNodeMetricsOutcome OceanBaseProClient::describeNodeMetrics(const DescribeNodeMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNodeMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNodeMetricsOutcome(DescribeNodeMetricsResult(outcome.result()));
	else
		return DescribeNodeMetricsOutcome(outcome.error());
}

void OceanBaseProClient::describeNodeMetricsAsync(const DescribeNodeMetricsRequest& request, const DescribeNodeMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNodeMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeNodeMetricsOutcomeCallable OceanBaseProClient::describeNodeMetricsCallable(const DescribeNodeMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNodeMetricsOutcome()>>(
			[this, request]()
			{
			return this->describeNodeMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeOasAnomalySQLListOutcome OceanBaseProClient::describeOasAnomalySQLList(const DescribeOasAnomalySQLListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOasAnomalySQLListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOasAnomalySQLListOutcome(DescribeOasAnomalySQLListResult(outcome.result()));
	else
		return DescribeOasAnomalySQLListOutcome(outcome.error());
}

void OceanBaseProClient::describeOasAnomalySQLListAsync(const DescribeOasAnomalySQLListRequest& request, const DescribeOasAnomalySQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOasAnomalySQLList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeOasAnomalySQLListOutcomeCallable OceanBaseProClient::describeOasAnomalySQLListCallable(const DescribeOasAnomalySQLListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOasAnomalySQLListOutcome()>>(
			[this, request]()
			{
			return this->describeOasAnomalySQLList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeOasSQLDetailsOutcome OceanBaseProClient::describeOasSQLDetails(const DescribeOasSQLDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOasSQLDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOasSQLDetailsOutcome(DescribeOasSQLDetailsResult(outcome.result()));
	else
		return DescribeOasSQLDetailsOutcome(outcome.error());
}

void OceanBaseProClient::describeOasSQLDetailsAsync(const DescribeOasSQLDetailsRequest& request, const DescribeOasSQLDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOasSQLDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeOasSQLDetailsOutcomeCallable OceanBaseProClient::describeOasSQLDetailsCallable(const DescribeOasSQLDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOasSQLDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeOasSQLDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeOasSQLHistoryListOutcome OceanBaseProClient::describeOasSQLHistoryList(const DescribeOasSQLHistoryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOasSQLHistoryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOasSQLHistoryListOutcome(DescribeOasSQLHistoryListResult(outcome.result()));
	else
		return DescribeOasSQLHistoryListOutcome(outcome.error());
}

void OceanBaseProClient::describeOasSQLHistoryListAsync(const DescribeOasSQLHistoryListRequest& request, const DescribeOasSQLHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOasSQLHistoryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeOasSQLHistoryListOutcomeCallable OceanBaseProClient::describeOasSQLHistoryListCallable(const DescribeOasSQLHistoryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOasSQLHistoryListOutcome()>>(
			[this, request]()
			{
			return this->describeOasSQLHistoryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeOasSQLPlansOutcome OceanBaseProClient::describeOasSQLPlans(const DescribeOasSQLPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOasSQLPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOasSQLPlansOutcome(DescribeOasSQLPlansResult(outcome.result()));
	else
		return DescribeOasSQLPlansOutcome(outcome.error());
}

void OceanBaseProClient::describeOasSQLPlansAsync(const DescribeOasSQLPlansRequest& request, const DescribeOasSQLPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOasSQLPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeOasSQLPlansOutcomeCallable OceanBaseProClient::describeOasSQLPlansCallable(const DescribeOasSQLPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOasSQLPlansOutcome()>>(
			[this, request]()
			{
			return this->describeOasSQLPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeOasSlowSQLListOutcome OceanBaseProClient::describeOasSlowSQLList(const DescribeOasSlowSQLListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOasSlowSQLListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOasSlowSQLListOutcome(DescribeOasSlowSQLListResult(outcome.result()));
	else
		return DescribeOasSlowSQLListOutcome(outcome.error());
}

void OceanBaseProClient::describeOasSlowSQLListAsync(const DescribeOasSlowSQLListRequest& request, const DescribeOasSlowSQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOasSlowSQLList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeOasSlowSQLListOutcomeCallable OceanBaseProClient::describeOasSlowSQLListCallable(const DescribeOasSlowSQLListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOasSlowSQLListOutcome()>>(
			[this, request]()
			{
			return this->describeOasSlowSQLList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeOasTopSQLListOutcome OceanBaseProClient::describeOasTopSQLList(const DescribeOasTopSQLListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOasTopSQLListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOasTopSQLListOutcome(DescribeOasTopSQLListResult(outcome.result()));
	else
		return DescribeOasTopSQLListOutcome(outcome.error());
}

void OceanBaseProClient::describeOasTopSQLListAsync(const DescribeOasTopSQLListRequest& request, const DescribeOasTopSQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOasTopSQLList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeOasTopSQLListOutcomeCallable OceanBaseProClient::describeOasTopSQLListCallable(const DescribeOasTopSQLListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOasTopSQLListOutcome()>>(
			[this, request]()
			{
			return this->describeOasTopSQLList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeOutlineBindingOutcome OceanBaseProClient::describeOutlineBinding(const DescribeOutlineBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOutlineBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOutlineBindingOutcome(DescribeOutlineBindingResult(outcome.result()));
	else
		return DescribeOutlineBindingOutcome(outcome.error());
}

void OceanBaseProClient::describeOutlineBindingAsync(const DescribeOutlineBindingRequest& request, const DescribeOutlineBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOutlineBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeOutlineBindingOutcomeCallable OceanBaseProClient::describeOutlineBindingCallable(const DescribeOutlineBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOutlineBindingOutcome()>>(
			[this, request]()
			{
			return this->describeOutlineBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeParametersOutcome OceanBaseProClient::describeParameters(const DescribeParametersRequest &request) const
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

void OceanBaseProClient::describeParametersAsync(const DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeParametersOutcomeCallable OceanBaseProClient::describeParametersCallable(const DescribeParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersOutcome()>>(
			[this, request]()
			{
			return this->describeParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeParametersHistoryOutcome OceanBaseProClient::describeParametersHistory(const DescribeParametersHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParametersHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParametersHistoryOutcome(DescribeParametersHistoryResult(outcome.result()));
	else
		return DescribeParametersHistoryOutcome(outcome.error());
}

void OceanBaseProClient::describeParametersHistoryAsync(const DescribeParametersHistoryRequest& request, const DescribeParametersHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParametersHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeParametersHistoryOutcomeCallable OceanBaseProClient::describeParametersHistoryCallable(const DescribeParametersHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParametersHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeParametersHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeProcessStatsCompositionOutcome OceanBaseProClient::describeProcessStatsComposition(const DescribeProcessStatsCompositionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProcessStatsCompositionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProcessStatsCompositionOutcome(DescribeProcessStatsCompositionResult(outcome.result()));
	else
		return DescribeProcessStatsCompositionOutcome(outcome.error());
}

void OceanBaseProClient::describeProcessStatsCompositionAsync(const DescribeProcessStatsCompositionRequest& request, const DescribeProcessStatsCompositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProcessStatsComposition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeProcessStatsCompositionOutcomeCallable OceanBaseProClient::describeProcessStatsCompositionCallable(const DescribeProcessStatsCompositionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProcessStatsCompositionOutcome()>>(
			[this, request]()
			{
			return this->describeProcessStatsComposition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeProjectOutcome OceanBaseProClient::describeProject(const DescribeProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectOutcome(DescribeProjectResult(outcome.result()));
	else
		return DescribeProjectOutcome(outcome.error());
}

void OceanBaseProClient::describeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeProjectOutcomeCallable OceanBaseProClient::describeProjectCallable(const DescribeProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectOutcome()>>(
			[this, request]()
			{
			return this->describeProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeProjectComponentsOutcome OceanBaseProClient::describeProjectComponents(const DescribeProjectComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectComponentsOutcome(DescribeProjectComponentsResult(outcome.result()));
	else
		return DescribeProjectComponentsOutcome(outcome.error());
}

void OceanBaseProClient::describeProjectComponentsAsync(const DescribeProjectComponentsRequest& request, const DescribeProjectComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeProjectComponentsOutcomeCallable OceanBaseProClient::describeProjectComponentsCallable(const DescribeProjectComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectComponentsOutcome()>>(
			[this, request]()
			{
			return this->describeProjectComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeProjectProgressOutcome OceanBaseProClient::describeProjectProgress(const DescribeProjectProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectProgressOutcome(DescribeProjectProgressResult(outcome.result()));
	else
		return DescribeProjectProgressOutcome(outcome.error());
}

void OceanBaseProClient::describeProjectProgressAsync(const DescribeProjectProgressRequest& request, const DescribeProjectProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeProjectProgressOutcomeCallable OceanBaseProClient::describeProjectProgressCallable(const DescribeProjectProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectProgressOutcome()>>(
			[this, request]()
			{
			return this->describeProjectProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeProjectStepMetricOutcome OceanBaseProClient::describeProjectStepMetric(const DescribeProjectStepMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectStepMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectStepMetricOutcome(DescribeProjectStepMetricResult(outcome.result()));
	else
		return DescribeProjectStepMetricOutcome(outcome.error());
}

void OceanBaseProClient::describeProjectStepMetricAsync(const DescribeProjectStepMetricRequest& request, const DescribeProjectStepMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectStepMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeProjectStepMetricOutcomeCallable OceanBaseProClient::describeProjectStepMetricCallable(const DescribeProjectStepMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectStepMetricOutcome()>>(
			[this, request]()
			{
			return this->describeProjectStepMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeProjectStepsOutcome OceanBaseProClient::describeProjectSteps(const DescribeProjectStepsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectStepsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectStepsOutcome(DescribeProjectStepsResult(outcome.result()));
	else
		return DescribeProjectStepsOutcome(outcome.error());
}

void OceanBaseProClient::describeProjectStepsAsync(const DescribeProjectStepsRequest& request, const DescribeProjectStepsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectSteps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeProjectStepsOutcomeCallable OceanBaseProClient::describeProjectStepsCallable(const DescribeProjectStepsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectStepsOutcome()>>(
			[this, request]()
			{
			return this->describeProjectSteps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeProxyServiceOutcome OceanBaseProClient::describeProxyService(const DescribeProxyServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProxyServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProxyServiceOutcome(DescribeProxyServiceResult(outcome.result()));
	else
		return DescribeProxyServiceOutcome(outcome.error());
}

void OceanBaseProClient::describeProxyServiceAsync(const DescribeProxyServiceRequest& request, const DescribeProxyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProxyService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeProxyServiceOutcomeCallable OceanBaseProClient::describeProxyServiceCallable(const DescribeProxyServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProxyServiceOutcome()>>(
			[this, request]()
			{
			return this->describeProxyService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeRecommendIndexOutcome OceanBaseProClient::describeRecommendIndex(const DescribeRecommendIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecommendIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecommendIndexOutcome(DescribeRecommendIndexResult(outcome.result()));
	else
		return DescribeRecommendIndexOutcome(outcome.error());
}

void OceanBaseProClient::describeRecommendIndexAsync(const DescribeRecommendIndexRequest& request, const DescribeRecommendIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecommendIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeRecommendIndexOutcomeCallable OceanBaseProClient::describeRecommendIndexCallable(const DescribeRecommendIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecommendIndexOutcome()>>(
			[this, request]()
			{
			return this->describeRecommendIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeRestorableTenantsOutcome OceanBaseProClient::describeRestorableTenants(const DescribeRestorableTenantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestorableTenantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestorableTenantsOutcome(DescribeRestorableTenantsResult(outcome.result()));
	else
		return DescribeRestorableTenantsOutcome(outcome.error());
}

void OceanBaseProClient::describeRestorableTenantsAsync(const DescribeRestorableTenantsRequest& request, const DescribeRestorableTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestorableTenants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeRestorableTenantsOutcomeCallable OceanBaseProClient::describeRestorableTenantsCallable(const DescribeRestorableTenantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestorableTenantsOutcome()>>(
			[this, request]()
			{
			return this->describeRestorableTenants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSQLDetailsOutcome OceanBaseProClient::describeSQLDetails(const DescribeSQLDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLDetailsOutcome(DescribeSQLDetailsResult(outcome.result()));
	else
		return DescribeSQLDetailsOutcome(outcome.error());
}

void OceanBaseProClient::describeSQLDetailsAsync(const DescribeSQLDetailsRequest& request, const DescribeSQLDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSQLDetailsOutcomeCallable OceanBaseProClient::describeSQLDetailsCallable(const DescribeSQLDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeSQLDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSQLHistoryListOutcome OceanBaseProClient::describeSQLHistoryList(const DescribeSQLHistoryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLHistoryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLHistoryListOutcome(DescribeSQLHistoryListResult(outcome.result()));
	else
		return DescribeSQLHistoryListOutcome(outcome.error());
}

void OceanBaseProClient::describeSQLHistoryListAsync(const DescribeSQLHistoryListRequest& request, const DescribeSQLHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLHistoryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSQLHistoryListOutcomeCallable OceanBaseProClient::describeSQLHistoryListCallable(const DescribeSQLHistoryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLHistoryListOutcome()>>(
			[this, request]()
			{
			return this->describeSQLHistoryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSQLPlansOutcome OceanBaseProClient::describeSQLPlans(const DescribeSQLPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLPlansOutcome(DescribeSQLPlansResult(outcome.result()));
	else
		return DescribeSQLPlansOutcome(outcome.error());
}

void OceanBaseProClient::describeSQLPlansAsync(const DescribeSQLPlansRequest& request, const DescribeSQLPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSQLPlansOutcomeCallable OceanBaseProClient::describeSQLPlansCallable(const DescribeSQLPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLPlansOutcome()>>(
			[this, request]()
			{
			return this->describeSQLPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSQLSamplesOutcome OceanBaseProClient::describeSQLSamples(const DescribeSQLSamplesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLSamplesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLSamplesOutcome(DescribeSQLSamplesResult(outcome.result()));
	else
		return DescribeSQLSamplesOutcome(outcome.error());
}

void OceanBaseProClient::describeSQLSamplesAsync(const DescribeSQLSamplesRequest& request, const DescribeSQLSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLSamples(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSQLSamplesOutcomeCallable OceanBaseProClient::describeSQLSamplesCallable(const DescribeSQLSamplesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLSamplesOutcome()>>(
			[this, request]()
			{
			return this->describeSQLSamples(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSQLTuningAdvicesOutcome OceanBaseProClient::describeSQLTuningAdvices(const DescribeSQLTuningAdvicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLTuningAdvicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLTuningAdvicesOutcome(DescribeSQLTuningAdvicesResult(outcome.result()));
	else
		return DescribeSQLTuningAdvicesOutcome(outcome.error());
}

void OceanBaseProClient::describeSQLTuningAdvicesAsync(const DescribeSQLTuningAdvicesRequest& request, const DescribeSQLTuningAdvicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLTuningAdvices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSQLTuningAdvicesOutcomeCallable OceanBaseProClient::describeSQLTuningAdvicesCallable(const DescribeSQLTuningAdvicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLTuningAdvicesOutcome()>>(
			[this, request]()
			{
			return this->describeSQLTuningAdvices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSampleSqlRawTextsOutcome OceanBaseProClient::describeSampleSqlRawTexts(const DescribeSampleSqlRawTextsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSampleSqlRawTextsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSampleSqlRawTextsOutcome(DescribeSampleSqlRawTextsResult(outcome.result()));
	else
		return DescribeSampleSqlRawTextsOutcome(outcome.error());
}

void OceanBaseProClient::describeSampleSqlRawTextsAsync(const DescribeSampleSqlRawTextsRequest& request, const DescribeSampleSqlRawTextsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSampleSqlRawTexts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSampleSqlRawTextsOutcomeCallable OceanBaseProClient::describeSampleSqlRawTextsCallable(const DescribeSampleSqlRawTextsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSampleSqlRawTextsOutcome()>>(
			[this, request]()
			{
			return this->describeSampleSqlRawTexts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSecurityIpGroupsOutcome OceanBaseProClient::describeSecurityIpGroups(const DescribeSecurityIpGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityIpGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityIpGroupsOutcome(DescribeSecurityIpGroupsResult(outcome.result()));
	else
		return DescribeSecurityIpGroupsOutcome(outcome.error());
}

void OceanBaseProClient::describeSecurityIpGroupsAsync(const DescribeSecurityIpGroupsRequest& request, const DescribeSecurityIpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityIpGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSecurityIpGroupsOutcomeCallable OceanBaseProClient::describeSecurityIpGroupsCallable(const DescribeSecurityIpGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityIpGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityIpGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSessionListOutcome OceanBaseProClient::describeSessionList(const DescribeSessionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSessionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSessionListOutcome(DescribeSessionListResult(outcome.result()));
	else
		return DescribeSessionListOutcome(outcome.error());
}

void OceanBaseProClient::describeSessionListAsync(const DescribeSessionListRequest& request, const DescribeSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSessionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSessionListOutcomeCallable OceanBaseProClient::describeSessionListCallable(const DescribeSessionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSessionListOutcome()>>(
			[this, request]()
			{
			return this->describeSessionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSlowSQLHistoryListOutcome OceanBaseProClient::describeSlowSQLHistoryList(const DescribeSlowSQLHistoryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowSQLHistoryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowSQLHistoryListOutcome(DescribeSlowSQLHistoryListResult(outcome.result()));
	else
		return DescribeSlowSQLHistoryListOutcome(outcome.error());
}

void OceanBaseProClient::describeSlowSQLHistoryListAsync(const DescribeSlowSQLHistoryListRequest& request, const DescribeSlowSQLHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowSQLHistoryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSlowSQLHistoryListOutcomeCallable OceanBaseProClient::describeSlowSQLHistoryListCallable(const DescribeSlowSQLHistoryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowSQLHistoryListOutcome()>>(
			[this, request]()
			{
			return this->describeSlowSQLHistoryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSlowSQLListOutcome OceanBaseProClient::describeSlowSQLList(const DescribeSlowSQLListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowSQLListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowSQLListOutcome(DescribeSlowSQLListResult(outcome.result()));
	else
		return DescribeSlowSQLListOutcome(outcome.error());
}

void OceanBaseProClient::describeSlowSQLListAsync(const DescribeSlowSQLListRequest& request, const DescribeSlowSQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowSQLList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSlowSQLListOutcomeCallable OceanBaseProClient::describeSlowSQLListCallable(const DescribeSlowSQLListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowSQLListOutcome()>>(
			[this, request]()
			{
			return this->describeSlowSQLList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeSqlAuditStatOutcome OceanBaseProClient::describeSqlAuditStat(const DescribeSqlAuditStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSqlAuditStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSqlAuditStatOutcome(DescribeSqlAuditStatResult(outcome.result()));
	else
		return DescribeSqlAuditStatOutcome(outcome.error());
}

void OceanBaseProClient::describeSqlAuditStatAsync(const DescribeSqlAuditStatRequest& request, const DescribeSqlAuditStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSqlAuditStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeSqlAuditStatOutcomeCallable OceanBaseProClient::describeSqlAuditStatCallable(const DescribeSqlAuditStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSqlAuditStatOutcome()>>(
			[this, request]()
			{
			return this->describeSqlAuditStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeStandbyCreateModeOutcome OceanBaseProClient::describeStandbyCreateMode(const DescribeStandbyCreateModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStandbyCreateModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStandbyCreateModeOutcome(DescribeStandbyCreateModeResult(outcome.result()));
	else
		return DescribeStandbyCreateModeOutcome(outcome.error());
}

void OceanBaseProClient::describeStandbyCreateModeAsync(const DescribeStandbyCreateModeRequest& request, const DescribeStandbyCreateModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStandbyCreateMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeStandbyCreateModeOutcomeCallable OceanBaseProClient::describeStandbyCreateModeCallable(const DescribeStandbyCreateModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStandbyCreateModeOutcome()>>(
			[this, request]()
			{
			return this->describeStandbyCreateMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTagValuesOutcome OceanBaseProClient::describeTagValues(const DescribeTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagValuesOutcome(DescribeTagValuesResult(outcome.result()));
	else
		return DescribeTagValuesOutcome(outcome.error());
}

void OceanBaseProClient::describeTagValuesAsync(const DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTagValuesOutcomeCallable OceanBaseProClient::describeTagValuesCallable(const DescribeTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagValuesOutcome()>>(
			[this, request]()
			{
			return this->describeTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantOutcome OceanBaseProClient::describeTenant(const DescribeTenantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantOutcome(DescribeTenantResult(outcome.result()));
	else
		return DescribeTenantOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantAsync(const DescribeTenantRequest& request, const DescribeTenantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantOutcomeCallable OceanBaseProClient::describeTenantCallable(const DescribeTenantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantOutcome()>>(
			[this, request]()
			{
			return this->describeTenant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantEncryptionOutcome OceanBaseProClient::describeTenantEncryption(const DescribeTenantEncryptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantEncryptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantEncryptionOutcome(DescribeTenantEncryptionResult(outcome.result()));
	else
		return DescribeTenantEncryptionOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantEncryptionAsync(const DescribeTenantEncryptionRequest& request, const DescribeTenantEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantEncryption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantEncryptionOutcomeCallable OceanBaseProClient::describeTenantEncryptionCallable(const DescribeTenantEncryptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantEncryptionOutcome()>>(
			[this, request]()
			{
			return this->describeTenantEncryption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantMetricsOutcome OceanBaseProClient::describeTenantMetrics(const DescribeTenantMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantMetricsOutcome(DescribeTenantMetricsResult(outcome.result()));
	else
		return DescribeTenantMetricsOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantMetricsAsync(const DescribeTenantMetricsRequest& request, const DescribeTenantMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantMetricsOutcomeCallable OceanBaseProClient::describeTenantMetricsCallable(const DescribeTenantMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantMetricsOutcome()>>(
			[this, request]()
			{
			return this->describeTenantMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantReadableScnOutcome OceanBaseProClient::describeTenantReadableScn(const DescribeTenantReadableScnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantReadableScnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantReadableScnOutcome(DescribeTenantReadableScnResult(outcome.result()));
	else
		return DescribeTenantReadableScnOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantReadableScnAsync(const DescribeTenantReadableScnRequest& request, const DescribeTenantReadableScnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantReadableScn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantReadableScnOutcomeCallable OceanBaseProClient::describeTenantReadableScnCallable(const DescribeTenantReadableScnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantReadableScnOutcome()>>(
			[this, request]()
			{
			return this->describeTenantReadableScn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantSecurityConfigsOutcome OceanBaseProClient::describeTenantSecurityConfigs(const DescribeTenantSecurityConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantSecurityConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantSecurityConfigsOutcome(DescribeTenantSecurityConfigsResult(outcome.result()));
	else
		return DescribeTenantSecurityConfigsOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantSecurityConfigsAsync(const DescribeTenantSecurityConfigsRequest& request, const DescribeTenantSecurityConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantSecurityConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantSecurityConfigsOutcomeCallable OceanBaseProClient::describeTenantSecurityConfigsCallable(const DescribeTenantSecurityConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantSecurityConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeTenantSecurityConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantSecurityIpGroupsOutcome OceanBaseProClient::describeTenantSecurityIpGroups(const DescribeTenantSecurityIpGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantSecurityIpGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantSecurityIpGroupsOutcome(DescribeTenantSecurityIpGroupsResult(outcome.result()));
	else
		return DescribeTenantSecurityIpGroupsOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantSecurityIpGroupsAsync(const DescribeTenantSecurityIpGroupsRequest& request, const DescribeTenantSecurityIpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantSecurityIpGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantSecurityIpGroupsOutcomeCallable OceanBaseProClient::describeTenantSecurityIpGroupsCallable(const DescribeTenantSecurityIpGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantSecurityIpGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeTenantSecurityIpGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantTagsOutcome OceanBaseProClient::describeTenantTags(const DescribeTenantTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantTagsOutcome(DescribeTenantTagsResult(outcome.result()));
	else
		return DescribeTenantTagsOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantTagsAsync(const DescribeTenantTagsRequest& request, const DescribeTenantTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantTagsOutcomeCallable OceanBaseProClient::describeTenantTagsCallable(const DescribeTenantTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTenantTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantUserRolesOutcome OceanBaseProClient::describeTenantUserRoles(const DescribeTenantUserRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantUserRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantUserRolesOutcome(DescribeTenantUserRolesResult(outcome.result()));
	else
		return DescribeTenantUserRolesOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantUserRolesAsync(const DescribeTenantUserRolesRequest& request, const DescribeTenantUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantUserRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantUserRolesOutcomeCallable OceanBaseProClient::describeTenantUserRolesCallable(const DescribeTenantUserRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantUserRolesOutcome()>>(
			[this, request]()
			{
			return this->describeTenantUserRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantUsersOutcome OceanBaseProClient::describeTenantUsers(const DescribeTenantUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantUsersOutcome(DescribeTenantUsersResult(outcome.result()));
	else
		return DescribeTenantUsersOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantUsersAsync(const DescribeTenantUsersRequest& request, const DescribeTenantUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantUsersOutcomeCallable OceanBaseProClient::describeTenantUsersCallable(const DescribeTenantUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantUsersOutcome()>>(
			[this, request]()
			{
			return this->describeTenantUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantZonesReadOutcome OceanBaseProClient::describeTenantZonesRead(const DescribeTenantZonesReadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantZonesReadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantZonesReadOutcome(DescribeTenantZonesReadResult(outcome.result()));
	else
		return DescribeTenantZonesReadOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantZonesReadAsync(const DescribeTenantZonesReadRequest& request, const DescribeTenantZonesReadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantZonesRead(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantZonesReadOutcomeCallable OceanBaseProClient::describeTenantZonesReadCallable(const DescribeTenantZonesReadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantZonesReadOutcome()>>(
			[this, request]()
			{
			return this->describeTenantZonesRead(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTenantsOutcome OceanBaseProClient::describeTenants(const DescribeTenantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantsOutcome(DescribeTenantsResult(outcome.result()));
	else
		return DescribeTenantsOutcome(outcome.error());
}

void OceanBaseProClient::describeTenantsAsync(const DescribeTenantsRequest& request, const DescribeTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTenantsOutcomeCallable OceanBaseProClient::describeTenantsCallable(const DescribeTenantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantsOutcome()>>(
			[this, request]()
			{
			return this->describeTenants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTimeZonesOutcome OceanBaseProClient::describeTimeZones(const DescribeTimeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTimeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTimeZonesOutcome(DescribeTimeZonesResult(outcome.result()));
	else
		return DescribeTimeZonesOutcome(outcome.error());
}

void OceanBaseProClient::describeTimeZonesAsync(const DescribeTimeZonesRequest& request, const DescribeTimeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTimeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTimeZonesOutcomeCallable OceanBaseProClient::describeTimeZonesCallable(const DescribeTimeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTimeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeTimeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeTopSQLListOutcome OceanBaseProClient::describeTopSQLList(const DescribeTopSQLListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTopSQLListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTopSQLListOutcome(DescribeTopSQLListResult(outcome.result()));
	else
		return DescribeTopSQLListOutcome(outcome.error());
}

void OceanBaseProClient::describeTopSQLListAsync(const DescribeTopSQLListRequest& request, const DescribeTopSQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTopSQLList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeTopSQLListOutcomeCallable OceanBaseProClient::describeTopSQLListCallable(const DescribeTopSQLListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTopSQLListOutcome()>>(
			[this, request]()
			{
			return this->describeTopSQLList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::DescribeZonesOutcome OceanBaseProClient::describeZones(const DescribeZonesRequest &request) const
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

void OceanBaseProClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::DescribeZonesOutcomeCallable OceanBaseProClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::GetUploadOssUrlOutcome OceanBaseProClient::getUploadOssUrl(const GetUploadOssUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUploadOssUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUploadOssUrlOutcome(GetUploadOssUrlResult(outcome.result()));
	else
		return GetUploadOssUrlOutcome(outcome.error());
}

void OceanBaseProClient::getUploadOssUrlAsync(const GetUploadOssUrlRequest& request, const GetUploadOssUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUploadOssUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::GetUploadOssUrlOutcomeCallable OceanBaseProClient::getUploadOssUrlCallable(const GetUploadOssUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUploadOssUrlOutcome()>>(
			[this, request]()
			{
			return this->getUploadOssUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::KillProcessListOutcome OceanBaseProClient::killProcessList(const KillProcessListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillProcessListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillProcessListOutcome(KillProcessListResult(outcome.result()));
	else
		return KillProcessListOutcome(outcome.error());
}

void OceanBaseProClient::killProcessListAsync(const KillProcessListRequest& request, const KillProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killProcessList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::KillProcessListOutcomeCallable OceanBaseProClient::killProcessListCallable(const KillProcessListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillProcessListOutcome()>>(
			[this, request]()
			{
			return this->killProcessList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ListAllLabelsOutcome OceanBaseProClient::listAllLabels(const ListAllLabelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllLabelsOutcome(ListAllLabelsResult(outcome.result()));
	else
		return ListAllLabelsOutcome(outcome.error());
}

void OceanBaseProClient::listAllLabelsAsync(const ListAllLabelsRequest& request, const ListAllLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ListAllLabelsOutcomeCallable OceanBaseProClient::listAllLabelsCallable(const ListAllLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllLabelsOutcome()>>(
			[this, request]()
			{
			return this->listAllLabels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ListDataSourceOutcome OceanBaseProClient::listDataSource(const ListDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceOutcome(ListDataSourceResult(outcome.result()));
	else
		return ListDataSourceOutcome(outcome.error());
}

void OceanBaseProClient::listDataSourceAsync(const ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ListDataSourceOutcomeCallable OceanBaseProClient::listDataSourceCallable(const ListDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceOutcome()>>(
			[this, request]()
			{
			return this->listDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ListProjectFullVerifyResultOutcome OceanBaseProClient::listProjectFullVerifyResult(const ListProjectFullVerifyResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectFullVerifyResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectFullVerifyResultOutcome(ListProjectFullVerifyResultResult(outcome.result()));
	else
		return ListProjectFullVerifyResultOutcome(outcome.error());
}

void OceanBaseProClient::listProjectFullVerifyResultAsync(const ListProjectFullVerifyResultRequest& request, const ListProjectFullVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectFullVerifyResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ListProjectFullVerifyResultOutcomeCallable OceanBaseProClient::listProjectFullVerifyResultCallable(const ListProjectFullVerifyResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectFullVerifyResultOutcome()>>(
			[this, request]()
			{
			return this->listProjectFullVerifyResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ListProjectModifyRecordsOutcome OceanBaseProClient::listProjectModifyRecords(const ListProjectModifyRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectModifyRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectModifyRecordsOutcome(ListProjectModifyRecordsResult(outcome.result()));
	else
		return ListProjectModifyRecordsOutcome(outcome.error());
}

void OceanBaseProClient::listProjectModifyRecordsAsync(const ListProjectModifyRecordsRequest& request, const ListProjectModifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectModifyRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ListProjectModifyRecordsOutcomeCallable OceanBaseProClient::listProjectModifyRecordsCallable(const ListProjectModifyRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectModifyRecordsOutcome()>>(
			[this, request]()
			{
			return this->listProjectModifyRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ListProjectsOutcome OceanBaseProClient::listProjects(const ListProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectsOutcome(ListProjectsResult(outcome.result()));
	else
		return ListProjectsOutcome(outcome.error());
}

void OceanBaseProClient::listProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ListProjectsOutcomeCallable OceanBaseProClient::listProjectsCallable(const ListProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectsOutcome()>>(
			[this, request]()
			{
			return this->listProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ListWorkerInstancesOutcome OceanBaseProClient::listWorkerInstances(const ListWorkerInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkerInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkerInstancesOutcome(ListWorkerInstancesResult(outcome.result()));
	else
		return ListWorkerInstancesOutcome(outcome.error());
}

void OceanBaseProClient::listWorkerInstancesAsync(const ListWorkerInstancesRequest& request, const ListWorkerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkerInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ListWorkerInstancesOutcomeCallable OceanBaseProClient::listWorkerInstancesCallable(const ListWorkerInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkerInstancesOutcome()>>(
			[this, request]()
			{
			return this->listWorkerInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyDatabaseDescriptionOutcome OceanBaseProClient::modifyDatabaseDescription(const ModifyDatabaseDescriptionRequest &request) const
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

void OceanBaseProClient::modifyDatabaseDescriptionAsync(const ModifyDatabaseDescriptionRequest& request, const ModifyDatabaseDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyDatabaseDescriptionOutcomeCallable OceanBaseProClient::modifyDatabaseDescriptionCallable(const ModifyDatabaseDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyDatabaseUserRolesOutcome OceanBaseProClient::modifyDatabaseUserRoles(const ModifyDatabaseUserRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseUserRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseUserRolesOutcome(ModifyDatabaseUserRolesResult(outcome.result()));
	else
		return ModifyDatabaseUserRolesOutcome(outcome.error());
}

void OceanBaseProClient::modifyDatabaseUserRolesAsync(const ModifyDatabaseUserRolesRequest& request, const ModifyDatabaseUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseUserRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyDatabaseUserRolesOutcomeCallable OceanBaseProClient::modifyDatabaseUserRolesCallable(const ModifyDatabaseUserRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseUserRolesOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseUserRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyInstanceNameOutcome OceanBaseProClient::modifyInstanceName(const ModifyInstanceNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceNameOutcome(ModifyInstanceNameResult(outcome.result()));
	else
		return ModifyInstanceNameOutcome(outcome.error());
}

void OceanBaseProClient::modifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyInstanceNameOutcomeCallable OceanBaseProClient::modifyInstanceNameCallable(const ModifyInstanceNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceNameOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyInstanceNodeNumOutcome OceanBaseProClient::modifyInstanceNodeNum(const ModifyInstanceNodeNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceNodeNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceNodeNumOutcome(ModifyInstanceNodeNumResult(outcome.result()));
	else
		return ModifyInstanceNodeNumOutcome(outcome.error());
}

void OceanBaseProClient::modifyInstanceNodeNumAsync(const ModifyInstanceNodeNumRequest& request, const ModifyInstanceNodeNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceNodeNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyInstanceNodeNumOutcomeCallable OceanBaseProClient::modifyInstanceNodeNumCallable(const ModifyInstanceNodeNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceNodeNumOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceNodeNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyInstanceSSLOutcome OceanBaseProClient::modifyInstanceSSL(const ModifyInstanceSSLRequest &request) const
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

void OceanBaseProClient::modifyInstanceSSLAsync(const ModifyInstanceSSLRequest& request, const ModifyInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSSL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyInstanceSSLOutcomeCallable OceanBaseProClient::modifyInstanceSSLCallable(const ModifyInstanceSSLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSSLOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSSL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyInstanceSpecOutcome OceanBaseProClient::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) const
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

void OceanBaseProClient::modifyInstanceSpecAsync(const ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyInstanceSpecOutcomeCallable OceanBaseProClient::modifyInstanceSpecCallable(const ModifyInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyInstanceTagsOutcome OceanBaseProClient::modifyInstanceTags(const ModifyInstanceTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceTagsOutcome(ModifyInstanceTagsResult(outcome.result()));
	else
		return ModifyInstanceTagsOutcome(outcome.error());
}

void OceanBaseProClient::modifyInstanceTagsAsync(const ModifyInstanceTagsRequest& request, const ModifyInstanceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyInstanceTagsOutcomeCallable OceanBaseProClient::modifyInstanceTagsCallable(const ModifyInstanceTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceTagsOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyInstanceTemporaryCapacityOutcome OceanBaseProClient::modifyInstanceTemporaryCapacity(const ModifyInstanceTemporaryCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceTemporaryCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceTemporaryCapacityOutcome(ModifyInstanceTemporaryCapacityResult(outcome.result()));
	else
		return ModifyInstanceTemporaryCapacityOutcome(outcome.error());
}

void OceanBaseProClient::modifyInstanceTemporaryCapacityAsync(const ModifyInstanceTemporaryCapacityRequest& request, const ModifyInstanceTemporaryCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceTemporaryCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyInstanceTemporaryCapacityOutcomeCallable OceanBaseProClient::modifyInstanceTemporaryCapacityCallable(const ModifyInstanceTemporaryCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceTemporaryCapacityOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceTemporaryCapacity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyParametersOutcome OceanBaseProClient::modifyParameters(const ModifyParametersRequest &request) const
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

void OceanBaseProClient::modifyParametersAsync(const ModifyParametersRequest& request, const ModifyParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyParametersOutcomeCallable OceanBaseProClient::modifyParametersCallable(const ModifyParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParametersOutcome()>>(
			[this, request]()
			{
			return this->modifyParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifySecurityIpsOutcome OceanBaseProClient::modifySecurityIps(const ModifySecurityIpsRequest &request) const
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

void OceanBaseProClient::modifySecurityIpsAsync(const ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifySecurityIpsOutcomeCallable OceanBaseProClient::modifySecurityIpsCallable(const ModifySecurityIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityIpsOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTagNameOutcome OceanBaseProClient::modifyTagName(const ModifyTagNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTagNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTagNameOutcome(ModifyTagNameResult(outcome.result()));
	else
		return ModifyTagNameOutcome(outcome.error());
}

void OceanBaseProClient::modifyTagNameAsync(const ModifyTagNameRequest& request, const ModifyTagNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTagName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTagNameOutcomeCallable OceanBaseProClient::modifyTagNameCallable(const ModifyTagNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTagNameOutcome()>>(
			[this, request]()
			{
			return this->modifyTagName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTagValueNameOutcome OceanBaseProClient::modifyTagValueName(const ModifyTagValueNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTagValueNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTagValueNameOutcome(ModifyTagValueNameResult(outcome.result()));
	else
		return ModifyTagValueNameOutcome(outcome.error());
}

void OceanBaseProClient::modifyTagValueNameAsync(const ModifyTagValueNameRequest& request, const ModifyTagValueNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTagValueName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTagValueNameOutcomeCallable OceanBaseProClient::modifyTagValueNameCallable(const ModifyTagValueNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTagValueNameOutcome()>>(
			[this, request]()
			{
			return this->modifyTagValueName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantEncryptionOutcome OceanBaseProClient::modifyTenantEncryption(const ModifyTenantEncryptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantEncryptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantEncryptionOutcome(ModifyTenantEncryptionResult(outcome.result()));
	else
		return ModifyTenantEncryptionOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantEncryptionAsync(const ModifyTenantEncryptionRequest& request, const ModifyTenantEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantEncryption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantEncryptionOutcomeCallable OceanBaseProClient::modifyTenantEncryptionCallable(const ModifyTenantEncryptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantEncryptionOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantEncryption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantPrimaryZoneOutcome OceanBaseProClient::modifyTenantPrimaryZone(const ModifyTenantPrimaryZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantPrimaryZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantPrimaryZoneOutcome(ModifyTenantPrimaryZoneResult(outcome.result()));
	else
		return ModifyTenantPrimaryZoneOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantPrimaryZoneAsync(const ModifyTenantPrimaryZoneRequest& request, const ModifyTenantPrimaryZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantPrimaryZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantPrimaryZoneOutcomeCallable OceanBaseProClient::modifyTenantPrimaryZoneCallable(const ModifyTenantPrimaryZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantPrimaryZoneOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantPrimaryZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantResourceOutcome OceanBaseProClient::modifyTenantResource(const ModifyTenantResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantResourceOutcome(ModifyTenantResourceResult(outcome.result()));
	else
		return ModifyTenantResourceOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantResourceAsync(const ModifyTenantResourceRequest& request, const ModifyTenantResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantResourceOutcomeCallable OceanBaseProClient::modifyTenantResourceCallable(const ModifyTenantResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantResourceOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantSecurityIpGroupOutcome OceanBaseProClient::modifyTenantSecurityIpGroup(const ModifyTenantSecurityIpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantSecurityIpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantSecurityIpGroupOutcome(ModifyTenantSecurityIpGroupResult(outcome.result()));
	else
		return ModifyTenantSecurityIpGroupOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantSecurityIpGroupAsync(const ModifyTenantSecurityIpGroupRequest& request, const ModifyTenantSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantSecurityIpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantSecurityIpGroupOutcomeCallable OceanBaseProClient::modifyTenantSecurityIpGroupCallable(const ModifyTenantSecurityIpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantSecurityIpGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantSecurityIpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantTagsOutcome OceanBaseProClient::modifyTenantTags(const ModifyTenantTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantTagsOutcome(ModifyTenantTagsResult(outcome.result()));
	else
		return ModifyTenantTagsOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantTagsAsync(const ModifyTenantTagsRequest& request, const ModifyTenantTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantTagsOutcomeCallable OceanBaseProClient::modifyTenantTagsCallable(const ModifyTenantTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantTagsOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantUserDescriptionOutcome OceanBaseProClient::modifyTenantUserDescription(const ModifyTenantUserDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantUserDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantUserDescriptionOutcome(ModifyTenantUserDescriptionResult(outcome.result()));
	else
		return ModifyTenantUserDescriptionOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantUserDescriptionAsync(const ModifyTenantUserDescriptionRequest& request, const ModifyTenantUserDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantUserDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantUserDescriptionOutcomeCallable OceanBaseProClient::modifyTenantUserDescriptionCallable(const ModifyTenantUserDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantUserDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantUserDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantUserPasswordOutcome OceanBaseProClient::modifyTenantUserPassword(const ModifyTenantUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantUserPasswordOutcome(ModifyTenantUserPasswordResult(outcome.result()));
	else
		return ModifyTenantUserPasswordOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantUserPasswordAsync(const ModifyTenantUserPasswordRequest& request, const ModifyTenantUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantUserPasswordOutcomeCallable OceanBaseProClient::modifyTenantUserPasswordCallable(const ModifyTenantUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantUserRolesOutcome OceanBaseProClient::modifyTenantUserRoles(const ModifyTenantUserRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantUserRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantUserRolesOutcome(ModifyTenantUserRolesResult(outcome.result()));
	else
		return ModifyTenantUserRolesOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantUserRolesAsync(const ModifyTenantUserRolesRequest& request, const ModifyTenantUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantUserRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantUserRolesOutcomeCallable OceanBaseProClient::modifyTenantUserRolesCallable(const ModifyTenantUserRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantUserRolesOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantUserRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ModifyTenantUserStatusOutcome OceanBaseProClient::modifyTenantUserStatus(const ModifyTenantUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTenantUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTenantUserStatusOutcome(ModifyTenantUserStatusResult(outcome.result()));
	else
		return ModifyTenantUserStatusOutcome(outcome.error());
}

void OceanBaseProClient::modifyTenantUserStatusAsync(const ModifyTenantUserStatusRequest& request, const ModifyTenantUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTenantUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ModifyTenantUserStatusOutcomeCallable OceanBaseProClient::modifyTenantUserStatusCallable(const ModifyTenantUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTenantUserStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyTenantUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ReleaseProjectOutcome OceanBaseProClient::releaseProject(const ReleaseProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseProjectOutcome(ReleaseProjectResult(outcome.result()));
	else
		return ReleaseProjectOutcome(outcome.error());
}

void OceanBaseProClient::releaseProjectAsync(const ReleaseProjectRequest& request, const ReleaseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ReleaseProjectOutcomeCallable OceanBaseProClient::releaseProjectCallable(const ReleaseProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseProjectOutcome()>>(
			[this, request]()
			{
			return this->releaseProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ReleaseWorkerInstanceOutcome OceanBaseProClient::releaseWorkerInstance(const ReleaseWorkerInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseWorkerInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseWorkerInstanceOutcome(ReleaseWorkerInstanceResult(outcome.result()));
	else
		return ReleaseWorkerInstanceOutcome(outcome.error());
}

void OceanBaseProClient::releaseWorkerInstanceAsync(const ReleaseWorkerInstanceRequest& request, const ReleaseWorkerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseWorkerInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ReleaseWorkerInstanceOutcomeCallable OceanBaseProClient::releaseWorkerInstanceCallable(const ReleaseWorkerInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseWorkerInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseWorkerInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::RemoveStandbyInstanceOutcome OceanBaseProClient::removeStandbyInstance(const RemoveStandbyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveStandbyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveStandbyInstanceOutcome(RemoveStandbyInstanceResult(outcome.result()));
	else
		return RemoveStandbyInstanceOutcome(outcome.error());
}

void OceanBaseProClient::removeStandbyInstanceAsync(const RemoveStandbyInstanceRequest& request, const RemoveStandbyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeStandbyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::RemoveStandbyInstanceOutcomeCallable OceanBaseProClient::removeStandbyInstanceCallable(const RemoveStandbyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveStandbyInstanceOutcome()>>(
			[this, request]()
			{
			return this->removeStandbyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::ResumeProjectOutcome OceanBaseProClient::resumeProject(const ResumeProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeProjectOutcome(ResumeProjectResult(outcome.result()));
	else
		return ResumeProjectOutcome(outcome.error());
}

void OceanBaseProClient::resumeProjectAsync(const ResumeProjectRequest& request, const ResumeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::ResumeProjectOutcomeCallable OceanBaseProClient::resumeProjectCallable(const ResumeProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeProjectOutcome()>>(
			[this, request]()
			{
			return this->resumeProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::RetryProjectModifyRecordsOutcome OceanBaseProClient::retryProjectModifyRecords(const RetryProjectModifyRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryProjectModifyRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryProjectModifyRecordsOutcome(RetryProjectModifyRecordsResult(outcome.result()));
	else
		return RetryProjectModifyRecordsOutcome(outcome.error());
}

void OceanBaseProClient::retryProjectModifyRecordsAsync(const RetryProjectModifyRecordsRequest& request, const RetryProjectModifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryProjectModifyRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::RetryProjectModifyRecordsOutcomeCallable OceanBaseProClient::retryProjectModifyRecordsCallable(const RetryProjectModifyRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryProjectModifyRecordsOutcome()>>(
			[this, request]()
			{
			return this->retryProjectModifyRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::StartProjectOutcome OceanBaseProClient::startProject(const StartProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartProjectOutcome(StartProjectResult(outcome.result()));
	else
		return StartProjectOutcome(outcome.error());
}

void OceanBaseProClient::startProjectAsync(const StartProjectRequest& request, const StartProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::StartProjectOutcomeCallable OceanBaseProClient::startProjectCallable(const StartProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartProjectOutcome()>>(
			[this, request]()
			{
			return this->startProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::StartProjectsByLabelOutcome OceanBaseProClient::startProjectsByLabel(const StartProjectsByLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartProjectsByLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartProjectsByLabelOutcome(StartProjectsByLabelResult(outcome.result()));
	else
		return StartProjectsByLabelOutcome(outcome.error());
}

void OceanBaseProClient::startProjectsByLabelAsync(const StartProjectsByLabelRequest& request, const StartProjectsByLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startProjectsByLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::StartProjectsByLabelOutcomeCallable OceanBaseProClient::startProjectsByLabelCallable(const StartProjectsByLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartProjectsByLabelOutcome()>>(
			[this, request]()
			{
			return this->startProjectsByLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::StopProjectOutcome OceanBaseProClient::stopProject(const StopProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopProjectOutcome(StopProjectResult(outcome.result()));
	else
		return StopProjectOutcome(outcome.error());
}

void OceanBaseProClient::stopProjectAsync(const StopProjectRequest& request, const StopProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::StopProjectOutcomeCallable OceanBaseProClient::stopProjectCallable(const StopProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopProjectOutcome()>>(
			[this, request]()
			{
			return this->stopProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::StopProjectModifyRecordsOutcome OceanBaseProClient::stopProjectModifyRecords(const StopProjectModifyRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopProjectModifyRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopProjectModifyRecordsOutcome(StopProjectModifyRecordsResult(outcome.result()));
	else
		return StopProjectModifyRecordsOutcome(outcome.error());
}

void OceanBaseProClient::stopProjectModifyRecordsAsync(const StopProjectModifyRecordsRequest& request, const StopProjectModifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopProjectModifyRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::StopProjectModifyRecordsOutcomeCallable OceanBaseProClient::stopProjectModifyRecordsCallable(const StopProjectModifyRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopProjectModifyRecordsOutcome()>>(
			[this, request]()
			{
			return this->stopProjectModifyRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::StopProjectsByLabelOutcome OceanBaseProClient::stopProjectsByLabel(const StopProjectsByLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopProjectsByLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopProjectsByLabelOutcome(StopProjectsByLabelResult(outcome.result()));
	else
		return StopProjectsByLabelOutcome(outcome.error());
}

void OceanBaseProClient::stopProjectsByLabelAsync(const StopProjectsByLabelRequest& request, const StopProjectsByLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopProjectsByLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::StopProjectsByLabelOutcomeCallable OceanBaseProClient::stopProjectsByLabelCallable(const StopProjectsByLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopProjectsByLabelOutcome()>>(
			[this, request]()
			{
			return this->stopProjectsByLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::SwitchoverInstanceOutcome OceanBaseProClient::switchoverInstance(const SwitchoverInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchoverInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchoverInstanceOutcome(SwitchoverInstanceResult(outcome.result()));
	else
		return SwitchoverInstanceOutcome(outcome.error());
}

void OceanBaseProClient::switchoverInstanceAsync(const SwitchoverInstanceRequest& request, const SwitchoverInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchoverInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::SwitchoverInstanceOutcomeCallable OceanBaseProClient::switchoverInstanceCallable(const SwitchoverInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchoverInstanceOutcome()>>(
			[this, request]()
			{
			return this->switchoverInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OceanBaseProClient::UpdateProjectConfigOutcome OceanBaseProClient::updateProjectConfig(const UpdateProjectConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectConfigOutcome(UpdateProjectConfigResult(outcome.result()));
	else
		return UpdateProjectConfigOutcome(outcome.error());
}

void OceanBaseProClient::updateProjectConfigAsync(const UpdateProjectConfigRequest& request, const UpdateProjectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OceanBaseProClient::UpdateProjectConfigOutcomeCallable OceanBaseProClient::updateProjectConfigCallable(const UpdateProjectConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectConfigOutcome()>>(
			[this, request]()
			{
			return this->updateProjectConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

