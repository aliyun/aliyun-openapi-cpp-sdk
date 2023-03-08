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

#include <alibabacloud/adb/AdbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

namespace
{
	const std::string SERVICE_NAME = "adb";
}

AdbClient::AdbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ads");
}

AdbClient::AdbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ads");
}

AdbClient::AdbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ads");
}

AdbClient::~AdbClient()
{}

AdbClient::AllocateClusterPublicConnectionOutcome AdbClient::allocateClusterPublicConnection(const AllocateClusterPublicConnectionRequest &request) const
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

void AdbClient::allocateClusterPublicConnectionAsync(const AllocateClusterPublicConnectionRequest& request, const AllocateClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateClusterPublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::AllocateClusterPublicConnectionOutcomeCallable AdbClient::allocateClusterPublicConnectionCallable(const AllocateClusterPublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateClusterPublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocateClusterPublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::BindAccountOutcome AdbClient::bindAccount(const BindAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAccountOutcome(BindAccountResult(outcome.result()));
	else
		return BindAccountOutcome(outcome.error());
}

void AdbClient::bindAccountAsync(const BindAccountRequest& request, const BindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::BindAccountOutcomeCallable AdbClient::bindAccountCallable(const BindAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAccountOutcome()>>(
			[this, request]()
			{
			return this->bindAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::CheckBindRamUserOutcome AdbClient::checkBindRamUser(const CheckBindRamUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckBindRamUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckBindRamUserOutcome(CheckBindRamUserResult(outcome.result()));
	else
		return CheckBindRamUserOutcome(outcome.error());
}

void AdbClient::checkBindRamUserAsync(const CheckBindRamUserRequest& request, const CheckBindRamUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkBindRamUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::CheckBindRamUserOutcomeCallable AdbClient::checkBindRamUserCallable(const CheckBindRamUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckBindRamUserOutcome()>>(
			[this, request]()
			{
			return this->checkBindRamUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::CreateAccountOutcome AdbClient::createAccount(const CreateAccountRequest &request) const
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

void AdbClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::CreateAccountOutcomeCallable AdbClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::CreateDBClusterOutcome AdbClient::createDBCluster(const CreateDBClusterRequest &request) const
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

void AdbClient::createDBClusterAsync(const CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::CreateDBClusterOutcomeCallable AdbClient::createDBClusterCallable(const CreateDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBClusterOutcome()>>(
			[this, request]()
			{
			return this->createDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::CreateDBResourceGroupOutcome AdbClient::createDBResourceGroup(const CreateDBResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDBResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDBResourceGroupOutcome(CreateDBResourceGroupResult(outcome.result()));
	else
		return CreateDBResourceGroupOutcome(outcome.error());
}

void AdbClient::createDBResourceGroupAsync(const CreateDBResourceGroupRequest& request, const CreateDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDBResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::CreateDBResourceGroupOutcomeCallable AdbClient::createDBResourceGroupCallable(const CreateDBResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDBResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->createDBResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::CreateOssSubDirectoryOutcome AdbClient::createOssSubDirectory(const CreateOssSubDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOssSubDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOssSubDirectoryOutcome(CreateOssSubDirectoryResult(outcome.result()));
	else
		return CreateOssSubDirectoryOutcome(outcome.error());
}

void AdbClient::createOssSubDirectoryAsync(const CreateOssSubDirectoryRequest& request, const CreateOssSubDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOssSubDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::CreateOssSubDirectoryOutcomeCallable AdbClient::createOssSubDirectoryCallable(const CreateOssSubDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOssSubDirectoryOutcome()>>(
			[this, request]()
			{
			return this->createOssSubDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::CreateSparkTemplateOutcome AdbClient::createSparkTemplate(const CreateSparkTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSparkTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSparkTemplateOutcome(CreateSparkTemplateResult(outcome.result()));
	else
		return CreateSparkTemplateOutcome(outcome.error());
}

void AdbClient::createSparkTemplateAsync(const CreateSparkTemplateRequest& request, const CreateSparkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSparkTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::CreateSparkTemplateOutcomeCallable AdbClient::createSparkTemplateCallable(const CreateSparkTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSparkTemplateOutcome()>>(
			[this, request]()
			{
			return this->createSparkTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DeleteAccountOutcome AdbClient::deleteAccount(const DeleteAccountRequest &request) const
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

void AdbClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DeleteAccountOutcomeCallable AdbClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DeleteDBClusterOutcome AdbClient::deleteDBCluster(const DeleteDBClusterRequest &request) const
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

void AdbClient::deleteDBClusterAsync(const DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DeleteDBClusterOutcomeCallable AdbClient::deleteDBClusterCallable(const DeleteDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DeleteDBResourceGroupOutcome AdbClient::deleteDBResourceGroup(const DeleteDBResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDBResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDBResourceGroupOutcome(DeleteDBResourceGroupResult(outcome.result()));
	else
		return DeleteDBResourceGroupOutcome(outcome.error());
}

void AdbClient::deleteDBResourceGroupAsync(const DeleteDBResourceGroupRequest& request, const DeleteDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDBResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DeleteDBResourceGroupOutcomeCallable AdbClient::deleteDBResourceGroupCallable(const DeleteDBResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDBResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDBResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DeleteProcessInstanceOutcome AdbClient::deleteProcessInstance(const DeleteProcessInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProcessInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProcessInstanceOutcome(DeleteProcessInstanceResult(outcome.result()));
	else
		return DeleteProcessInstanceOutcome(outcome.error());
}

void AdbClient::deleteProcessInstanceAsync(const DeleteProcessInstanceRequest& request, const DeleteProcessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProcessInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DeleteProcessInstanceOutcomeCallable AdbClient::deleteProcessInstanceCallable(const DeleteProcessInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProcessInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteProcessInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DeleteSparkTemplateOutcome AdbClient::deleteSparkTemplate(const DeleteSparkTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSparkTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSparkTemplateOutcome(DeleteSparkTemplateResult(outcome.result()));
	else
		return DeleteSparkTemplateOutcome(outcome.error());
}

void AdbClient::deleteSparkTemplateAsync(const DeleteSparkTemplateRequest& request, const DeleteSparkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSparkTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DeleteSparkTemplateOutcomeCallable AdbClient::deleteSparkTemplateCallable(const DeleteSparkTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSparkTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteSparkTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DeleteSparkTemplateFileOutcome AdbClient::deleteSparkTemplateFile(const DeleteSparkTemplateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSparkTemplateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSparkTemplateFileOutcome(DeleteSparkTemplateFileResult(outcome.result()));
	else
		return DeleteSparkTemplateFileOutcome(outcome.error());
}

void AdbClient::deleteSparkTemplateFileAsync(const DeleteSparkTemplateFileRequest& request, const DeleteSparkTemplateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSparkTemplateFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DeleteSparkTemplateFileOutcomeCallable AdbClient::deleteSparkTemplateFileCallable(const DeleteSparkTemplateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSparkTemplateFileOutcome()>>(
			[this, request]()
			{
			return this->deleteSparkTemplateFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAccountsOutcome AdbClient::describeAccounts(const DescribeAccountsRequest &request) const
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

void AdbClient::describeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAccountsOutcomeCallable AdbClient::describeAccountsCallable(const DescribeAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAdbMySqlColumnsOutcome AdbClient::describeAdbMySqlColumns(const DescribeAdbMySqlColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAdbMySqlColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAdbMySqlColumnsOutcome(DescribeAdbMySqlColumnsResult(outcome.result()));
	else
		return DescribeAdbMySqlColumnsOutcome(outcome.error());
}

void AdbClient::describeAdbMySqlColumnsAsync(const DescribeAdbMySqlColumnsRequest& request, const DescribeAdbMySqlColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAdbMySqlColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAdbMySqlColumnsOutcomeCallable AdbClient::describeAdbMySqlColumnsCallable(const DescribeAdbMySqlColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAdbMySqlColumnsOutcome()>>(
			[this, request]()
			{
			return this->describeAdbMySqlColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAdbMySqlSchemasOutcome AdbClient::describeAdbMySqlSchemas(const DescribeAdbMySqlSchemasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAdbMySqlSchemasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAdbMySqlSchemasOutcome(DescribeAdbMySqlSchemasResult(outcome.result()));
	else
		return DescribeAdbMySqlSchemasOutcome(outcome.error());
}

void AdbClient::describeAdbMySqlSchemasAsync(const DescribeAdbMySqlSchemasRequest& request, const DescribeAdbMySqlSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAdbMySqlSchemas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAdbMySqlSchemasOutcomeCallable AdbClient::describeAdbMySqlSchemasCallable(const DescribeAdbMySqlSchemasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAdbMySqlSchemasOutcome()>>(
			[this, request]()
			{
			return this->describeAdbMySqlSchemas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAdbMySqlTablesOutcome AdbClient::describeAdbMySqlTables(const DescribeAdbMySqlTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAdbMySqlTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAdbMySqlTablesOutcome(DescribeAdbMySqlTablesResult(outcome.result()));
	else
		return DescribeAdbMySqlTablesOutcome(outcome.error());
}

void AdbClient::describeAdbMySqlTablesAsync(const DescribeAdbMySqlTablesRequest& request, const DescribeAdbMySqlTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAdbMySqlTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAdbMySqlTablesOutcomeCallable AdbClient::describeAdbMySqlTablesCallable(const DescribeAdbMySqlTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAdbMySqlTablesOutcome()>>(
			[this, request]()
			{
			return this->describeAdbMySqlTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeApsActionLogsOutcome AdbClient::describeApsActionLogs(const DescribeApsActionLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApsActionLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApsActionLogsOutcome(DescribeApsActionLogsResult(outcome.result()));
	else
		return DescribeApsActionLogsOutcome(outcome.error());
}

void AdbClient::describeApsActionLogsAsync(const DescribeApsActionLogsRequest& request, const DescribeApsActionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApsActionLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeApsActionLogsOutcomeCallable AdbClient::describeApsActionLogsCallable(const DescribeApsActionLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApsActionLogsOutcome()>>(
			[this, request]()
			{
			return this->describeApsActionLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeApsResourceGroupsOutcome AdbClient::describeApsResourceGroups(const DescribeApsResourceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApsResourceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApsResourceGroupsOutcome(DescribeApsResourceGroupsResult(outcome.result()));
	else
		return DescribeApsResourceGroupsOutcome(outcome.error());
}

void AdbClient::describeApsResourceGroupsAsync(const DescribeApsResourceGroupsRequest& request, const DescribeApsResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApsResourceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeApsResourceGroupsOutcomeCallable AdbClient::describeApsResourceGroupsCallable(const DescribeApsResourceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApsResourceGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeApsResourceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAuditLogConfigOutcome AdbClient::describeAuditLogConfig(const DescribeAuditLogConfigRequest &request) const
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

void AdbClient::describeAuditLogConfigAsync(const DescribeAuditLogConfigRequest& request, const DescribeAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAuditLogConfigOutcomeCallable AdbClient::describeAuditLogConfigCallable(const DescribeAuditLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditLogConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAuditLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeAuditLogRecordsOutcome AdbClient::describeAuditLogRecords(const DescribeAuditLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuditLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuditLogRecordsOutcome(DescribeAuditLogRecordsResult(outcome.result()));
	else
		return DescribeAuditLogRecordsOutcome(outcome.error());
}

void AdbClient::describeAuditLogRecordsAsync(const DescribeAuditLogRecordsRequest& request, const DescribeAuditLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuditLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeAuditLogRecordsOutcomeCallable AdbClient::describeAuditLogRecordsCallable(const DescribeAuditLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuditLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeAuditLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeBackupPolicyOutcome AdbClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
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

void AdbClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeBackupPolicyOutcomeCallable AdbClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeBackupsOutcome AdbClient::describeBackups(const DescribeBackupsRequest &request) const
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

void AdbClient::describeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeBackupsOutcomeCallable AdbClient::describeBackupsCallable(const DescribeBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
			[this, request]()
			{
			return this->describeBackups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeClusterAccessWhiteListOutcome AdbClient::describeClusterAccessWhiteList(const DescribeClusterAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterAccessWhiteListOutcome(DescribeClusterAccessWhiteListResult(outcome.result()));
	else
		return DescribeClusterAccessWhiteListOutcome(outcome.error());
}

void AdbClient::describeClusterAccessWhiteListAsync(const DescribeClusterAccessWhiteListRequest& request, const DescribeClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeClusterAccessWhiteListOutcomeCallable AdbClient::describeClusterAccessWhiteListCallable(const DescribeClusterAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->describeClusterAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeClusterNetInfoOutcome AdbClient::describeClusterNetInfo(const DescribeClusterNetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterNetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterNetInfoOutcome(DescribeClusterNetInfoResult(outcome.result()));
	else
		return DescribeClusterNetInfoOutcome(outcome.error());
}

void AdbClient::describeClusterNetInfoAsync(const DescribeClusterNetInfoRequest& request, const DescribeClusterNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterNetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeClusterNetInfoOutcomeCallable AdbClient::describeClusterNetInfoCallable(const DescribeClusterNetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterNetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeClusterNetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClusterAttributeOutcome AdbClient::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) const
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

void AdbClient::describeDBClusterAttributeAsync(const DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClusterAttributeOutcomeCallable AdbClient::describeDBClusterAttributeCallable(const DescribeDBClusterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClusterForecastOutcome AdbClient::describeDBClusterForecast(const DescribeDBClusterForecastRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterForecastOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterForecastOutcome(DescribeDBClusterForecastResult(outcome.result()));
	else
		return DescribeDBClusterForecastOutcome(outcome.error());
}

void AdbClient::describeDBClusterForecastAsync(const DescribeDBClusterForecastRequest& request, const DescribeDBClusterForecastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterForecast(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClusterForecastOutcomeCallable AdbClient::describeDBClusterForecastCallable(const DescribeDBClusterForecastRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterForecastOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterForecast(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClusterHealthStatusOutcome AdbClient::describeDBClusterHealthStatus(const DescribeDBClusterHealthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBClusterHealthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBClusterHealthStatusOutcome(DescribeDBClusterHealthStatusResult(outcome.result()));
	else
		return DescribeDBClusterHealthStatusOutcome(outcome.error());
}

void AdbClient::describeDBClusterHealthStatusAsync(const DescribeDBClusterHealthStatusRequest& request, const DescribeDBClusterHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterHealthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClusterHealthStatusOutcomeCallable AdbClient::describeDBClusterHealthStatusCallable(const DescribeDBClusterHealthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterHealthStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterHealthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClusterPerformanceOutcome AdbClient::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) const
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

void AdbClient::describeDBClusterPerformanceAsync(const DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusterPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClusterPerformanceOutcomeCallable AdbClient::describeDBClusterPerformanceCallable(const DescribeDBClusterPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClusterPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusterPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBClustersOutcome AdbClient::describeDBClusters(const DescribeDBClustersRequest &request) const
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

void AdbClient::describeDBClustersAsync(const DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBClustersOutcomeCallable AdbClient::describeDBClustersCallable(const DescribeDBClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBClustersOutcome()>>(
			[this, request]()
			{
			return this->describeDBClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDBResourceGroupOutcome AdbClient::describeDBResourceGroup(const DescribeDBResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDBResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDBResourceGroupOutcome(DescribeDBResourceGroupResult(outcome.result()));
	else
		return DescribeDBResourceGroupOutcome(outcome.error());
}

void AdbClient::describeDBResourceGroupAsync(const DescribeDBResourceGroupRequest& request, const DescribeDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDBResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDBResourceGroupOutcomeCallable AdbClient::describeDBResourceGroupCallable(const DescribeDBResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDBResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->describeDBResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDiagnosisDimensionsOutcome AdbClient::describeDiagnosisDimensions(const DescribeDiagnosisDimensionsRequest &request) const
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

void AdbClient::describeDiagnosisDimensionsAsync(const DescribeDiagnosisDimensionsRequest& request, const DescribeDiagnosisDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosisDimensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDiagnosisDimensionsOutcomeCallable AdbClient::describeDiagnosisDimensionsCallable(const DescribeDiagnosisDimensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosisDimensionsOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosisDimensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDiagnosisRecordsOutcome AdbClient::describeDiagnosisRecords(const DescribeDiagnosisRecordsRequest &request) const
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

void AdbClient::describeDiagnosisRecordsAsync(const DescribeDiagnosisRecordsRequest& request, const DescribeDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosisRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDiagnosisRecordsOutcomeCallable AdbClient::describeDiagnosisRecordsCallable(const DescribeDiagnosisRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosisRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosisRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDiagnosisSQLInfoOutcome AdbClient::describeDiagnosisSQLInfo(const DescribeDiagnosisSQLInfoRequest &request) const
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

void AdbClient::describeDiagnosisSQLInfoAsync(const DescribeDiagnosisSQLInfoRequest& request, const DescribeDiagnosisSQLInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosisSQLInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDiagnosisSQLInfoOutcomeCallable AdbClient::describeDiagnosisSQLInfoCallable(const DescribeDiagnosisSQLInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosisSQLInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosisSQLInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeDownloadRecordsOutcome AdbClient::describeDownloadRecords(const DescribeDownloadRecordsRequest &request) const
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

void AdbClient::describeDownloadRecordsAsync(const DescribeDownloadRecordsRequest& request, const DescribeDownloadRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDownloadRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeDownloadRecordsOutcomeCallable AdbClient::describeDownloadRecordsCallable(const DescribeDownloadRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDownloadRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeDownloadRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribePatternPerformanceOutcome AdbClient::describePatternPerformance(const DescribePatternPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePatternPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePatternPerformanceOutcome(DescribePatternPerformanceResult(outcome.result()));
	else
		return DescribePatternPerformanceOutcome(outcome.error());
}

void AdbClient::describePatternPerformanceAsync(const DescribePatternPerformanceRequest& request, const DescribePatternPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePatternPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribePatternPerformanceOutcomeCallable AdbClient::describePatternPerformanceCallable(const DescribePatternPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePatternPerformanceOutcome()>>(
			[this, request]()
			{
			return this->describePatternPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeRegionsOutcome AdbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void AdbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeRegionsOutcomeCallable AdbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSQLPatternAttributeOutcome AdbClient::describeSQLPatternAttribute(const DescribeSQLPatternAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLPatternAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLPatternAttributeOutcome(DescribeSQLPatternAttributeResult(outcome.result()));
	else
		return DescribeSQLPatternAttributeOutcome(outcome.error());
}

void AdbClient::describeSQLPatternAttributeAsync(const DescribeSQLPatternAttributeRequest& request, const DescribeSQLPatternAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLPatternAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSQLPatternAttributeOutcomeCallable AdbClient::describeSQLPatternAttributeCallable(const DescribeSQLPatternAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLPatternAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSQLPatternAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSQLPatternsOutcome AdbClient::describeSQLPatterns(const DescribeSQLPatternsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSQLPatternsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSQLPatternsOutcome(DescribeSQLPatternsResult(outcome.result()));
	else
		return DescribeSQLPatternsOutcome(outcome.error());
}

void AdbClient::describeSQLPatternsAsync(const DescribeSQLPatternsRequest& request, const DescribeSQLPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSQLPatterns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSQLPatternsOutcomeCallable AdbClient::describeSQLPatternsCallable(const DescribeSQLPatternsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSQLPatternsOutcome()>>(
			[this, request]()
			{
			return this->describeSQLPatterns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSparkCodeLogOutcome AdbClient::describeSparkCodeLog(const DescribeSparkCodeLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSparkCodeLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSparkCodeLogOutcome(DescribeSparkCodeLogResult(outcome.result()));
	else
		return DescribeSparkCodeLogOutcome(outcome.error());
}

void AdbClient::describeSparkCodeLogAsync(const DescribeSparkCodeLogRequest& request, const DescribeSparkCodeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSparkCodeLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSparkCodeLogOutcomeCallable AdbClient::describeSparkCodeLogCallable(const DescribeSparkCodeLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSparkCodeLogOutcome()>>(
			[this, request]()
			{
			return this->describeSparkCodeLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSparkCodeOutputOutcome AdbClient::describeSparkCodeOutput(const DescribeSparkCodeOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSparkCodeOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSparkCodeOutputOutcome(DescribeSparkCodeOutputResult(outcome.result()));
	else
		return DescribeSparkCodeOutputOutcome(outcome.error());
}

void AdbClient::describeSparkCodeOutputAsync(const DescribeSparkCodeOutputRequest& request, const DescribeSparkCodeOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSparkCodeOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSparkCodeOutputOutcomeCallable AdbClient::describeSparkCodeOutputCallable(const DescribeSparkCodeOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSparkCodeOutputOutcome()>>(
			[this, request]()
			{
			return this->describeSparkCodeOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSparkCodeWebUiOutcome AdbClient::describeSparkCodeWebUi(const DescribeSparkCodeWebUiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSparkCodeWebUiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSparkCodeWebUiOutcome(DescribeSparkCodeWebUiResult(outcome.result()));
	else
		return DescribeSparkCodeWebUiOutcome(outcome.error());
}

void AdbClient::describeSparkCodeWebUiAsync(const DescribeSparkCodeWebUiRequest& request, const DescribeSparkCodeWebUiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSparkCodeWebUi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSparkCodeWebUiOutcomeCallable AdbClient::describeSparkCodeWebUiCallable(const DescribeSparkCodeWebUiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSparkCodeWebUiOutcome()>>(
			[this, request]()
			{
			return this->describeSparkCodeWebUi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeSqlPatternOutcome AdbClient::describeSqlPattern(const DescribeSqlPatternRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSqlPatternOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSqlPatternOutcome(DescribeSqlPatternResult(outcome.result()));
	else
		return DescribeSqlPatternOutcome(outcome.error());
}

void AdbClient::describeSqlPatternAsync(const DescribeSqlPatternRequest& request, const DescribeSqlPatternAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSqlPattern(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeSqlPatternOutcomeCallable AdbClient::describeSqlPatternCallable(const DescribeSqlPatternRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSqlPatternOutcome()>>(
			[this, request]()
			{
			return this->describeSqlPattern(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DescribeTableAccessCountOutcome AdbClient::describeTableAccessCount(const DescribeTableAccessCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTableAccessCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTableAccessCountOutcome(DescribeTableAccessCountResult(outcome.result()));
	else
		return DescribeTableAccessCountOutcome(outcome.error());
}

void AdbClient::describeTableAccessCountAsync(const DescribeTableAccessCountRequest& request, const DescribeTableAccessCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTableAccessCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DescribeTableAccessCountOutcomeCallable AdbClient::describeTableAccessCountCallable(const DescribeTableAccessCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTableAccessCountOutcome()>>(
			[this, request]()
			{
			return this->describeTableAccessCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::DownloadDiagnosisRecordsOutcome AdbClient::downloadDiagnosisRecords(const DownloadDiagnosisRecordsRequest &request) const
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

void AdbClient::downloadDiagnosisRecordsAsync(const DownloadDiagnosisRecordsRequest& request, const DownloadDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadDiagnosisRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::DownloadDiagnosisRecordsOutcomeCallable AdbClient::downloadDiagnosisRecordsCallable(const DownloadDiagnosisRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadDiagnosisRecordsOutcome()>>(
			[this, request]()
			{
			return this->downloadDiagnosisRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetDatabaseObjectsOutcome AdbClient::getDatabaseObjects(const GetDatabaseObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatabaseObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatabaseObjectsOutcome(GetDatabaseObjectsResult(outcome.result()));
	else
		return GetDatabaseObjectsOutcome(outcome.error());
}

void AdbClient::getDatabaseObjectsAsync(const GetDatabaseObjectsRequest& request, const GetDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatabaseObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetDatabaseObjectsOutcomeCallable AdbClient::getDatabaseObjectsCallable(const GetDatabaseObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatabaseObjectsOutcome()>>(
			[this, request]()
			{
			return this->getDatabaseObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetLakehouseValidResourceGroupsOutcome AdbClient::getLakehouseValidResourceGroups(const GetLakehouseValidResourceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLakehouseValidResourceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLakehouseValidResourceGroupsOutcome(GetLakehouseValidResourceGroupsResult(outcome.result()));
	else
		return GetLakehouseValidResourceGroupsOutcome(outcome.error());
}

void AdbClient::getLakehouseValidResourceGroupsAsync(const GetLakehouseValidResourceGroupsRequest& request, const GetLakehouseValidResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLakehouseValidResourceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetLakehouseValidResourceGroupsOutcomeCallable AdbClient::getLakehouseValidResourceGroupsCallable(const GetLakehouseValidResourceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLakehouseValidResourceGroupsOutcome()>>(
			[this, request]()
			{
			return this->getLakehouseValidResourceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkAppAttemptLogOutcome AdbClient::getSparkAppAttemptLog(const GetSparkAppAttemptLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkAppAttemptLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkAppAttemptLogOutcome(GetSparkAppAttemptLogResult(outcome.result()));
	else
		return GetSparkAppAttemptLogOutcome(outcome.error());
}

void AdbClient::getSparkAppAttemptLogAsync(const GetSparkAppAttemptLogRequest& request, const GetSparkAppAttemptLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkAppAttemptLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkAppAttemptLogOutcomeCallable AdbClient::getSparkAppAttemptLogCallable(const GetSparkAppAttemptLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkAppAttemptLogOutcome()>>(
			[this, request]()
			{
			return this->getSparkAppAttemptLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkAppInfoOutcome AdbClient::getSparkAppInfo(const GetSparkAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkAppInfoOutcome(GetSparkAppInfoResult(outcome.result()));
	else
		return GetSparkAppInfoOutcome(outcome.error());
}

void AdbClient::getSparkAppInfoAsync(const GetSparkAppInfoRequest& request, const GetSparkAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkAppInfoOutcomeCallable AdbClient::getSparkAppInfoCallable(const GetSparkAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkAppInfoOutcome()>>(
			[this, request]()
			{
			return this->getSparkAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkAppLogOutcome AdbClient::getSparkAppLog(const GetSparkAppLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkAppLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkAppLogOutcome(GetSparkAppLogResult(outcome.result()));
	else
		return GetSparkAppLogOutcome(outcome.error());
}

void AdbClient::getSparkAppLogAsync(const GetSparkAppLogRequest& request, const GetSparkAppLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkAppLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkAppLogOutcomeCallable AdbClient::getSparkAppLogCallable(const GetSparkAppLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkAppLogOutcome()>>(
			[this, request]()
			{
			return this->getSparkAppLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkAppMetricsOutcome AdbClient::getSparkAppMetrics(const GetSparkAppMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkAppMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkAppMetricsOutcome(GetSparkAppMetricsResult(outcome.result()));
	else
		return GetSparkAppMetricsOutcome(outcome.error());
}

void AdbClient::getSparkAppMetricsAsync(const GetSparkAppMetricsRequest& request, const GetSparkAppMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkAppMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkAppMetricsOutcomeCallable AdbClient::getSparkAppMetricsCallable(const GetSparkAppMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkAppMetricsOutcome()>>(
			[this, request]()
			{
			return this->getSparkAppMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkAppStateOutcome AdbClient::getSparkAppState(const GetSparkAppStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkAppStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkAppStateOutcome(GetSparkAppStateResult(outcome.result()));
	else
		return GetSparkAppStateOutcome(outcome.error());
}

void AdbClient::getSparkAppStateAsync(const GetSparkAppStateRequest& request, const GetSparkAppStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkAppState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkAppStateOutcomeCallable AdbClient::getSparkAppStateCallable(const GetSparkAppStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkAppStateOutcome()>>(
			[this, request]()
			{
			return this->getSparkAppState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkAppWebUiAddressOutcome AdbClient::getSparkAppWebUiAddress(const GetSparkAppWebUiAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkAppWebUiAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkAppWebUiAddressOutcome(GetSparkAppWebUiAddressResult(outcome.result()));
	else
		return GetSparkAppWebUiAddressOutcome(outcome.error());
}

void AdbClient::getSparkAppWebUiAddressAsync(const GetSparkAppWebUiAddressRequest& request, const GetSparkAppWebUiAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkAppWebUiAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkAppWebUiAddressOutcomeCallable AdbClient::getSparkAppWebUiAddressCallable(const GetSparkAppWebUiAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkAppWebUiAddressOutcome()>>(
			[this, request]()
			{
			return this->getSparkAppWebUiAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkConfigLogPathOutcome AdbClient::getSparkConfigLogPath(const GetSparkConfigLogPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkConfigLogPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkConfigLogPathOutcome(GetSparkConfigLogPathResult(outcome.result()));
	else
		return GetSparkConfigLogPathOutcome(outcome.error());
}

void AdbClient::getSparkConfigLogPathAsync(const GetSparkConfigLogPathRequest& request, const GetSparkConfigLogPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkConfigLogPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkConfigLogPathOutcomeCallable AdbClient::getSparkConfigLogPathCallable(const GetSparkConfigLogPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkConfigLogPathOutcome()>>(
			[this, request]()
			{
			return this->getSparkConfigLogPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkLogAnalyzeTaskOutcome AdbClient::getSparkLogAnalyzeTask(const GetSparkLogAnalyzeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkLogAnalyzeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkLogAnalyzeTaskOutcome(GetSparkLogAnalyzeTaskResult(outcome.result()));
	else
		return GetSparkLogAnalyzeTaskOutcome(outcome.error());
}

void AdbClient::getSparkLogAnalyzeTaskAsync(const GetSparkLogAnalyzeTaskRequest& request, const GetSparkLogAnalyzeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkLogAnalyzeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkLogAnalyzeTaskOutcomeCallable AdbClient::getSparkLogAnalyzeTaskCallable(const GetSparkLogAnalyzeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkLogAnalyzeTaskOutcome()>>(
			[this, request]()
			{
			return this->getSparkLogAnalyzeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkSQLEngineStateOutcome AdbClient::getSparkSQLEngineState(const GetSparkSQLEngineStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkSQLEngineStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkSQLEngineStateOutcome(GetSparkSQLEngineStateResult(outcome.result()));
	else
		return GetSparkSQLEngineStateOutcome(outcome.error());
}

void AdbClient::getSparkSQLEngineStateAsync(const GetSparkSQLEngineStateRequest& request, const GetSparkSQLEngineStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkSQLEngineState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkSQLEngineStateOutcomeCallable AdbClient::getSparkSQLEngineStateCallable(const GetSparkSQLEngineStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkSQLEngineStateOutcome()>>(
			[this, request]()
			{
			return this->getSparkSQLEngineState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkTemplateFileContentOutcome AdbClient::getSparkTemplateFileContent(const GetSparkTemplateFileContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkTemplateFileContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkTemplateFileContentOutcome(GetSparkTemplateFileContentResult(outcome.result()));
	else
		return GetSparkTemplateFileContentOutcome(outcome.error());
}

void AdbClient::getSparkTemplateFileContentAsync(const GetSparkTemplateFileContentRequest& request, const GetSparkTemplateFileContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkTemplateFileContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkTemplateFileContentOutcomeCallable AdbClient::getSparkTemplateFileContentCallable(const GetSparkTemplateFileContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkTemplateFileContentOutcome()>>(
			[this, request]()
			{
			return this->getSparkTemplateFileContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkTemplateFolderTreeOutcome AdbClient::getSparkTemplateFolderTree(const GetSparkTemplateFolderTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkTemplateFolderTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkTemplateFolderTreeOutcome(GetSparkTemplateFolderTreeResult(outcome.result()));
	else
		return GetSparkTemplateFolderTreeOutcome(outcome.error());
}

void AdbClient::getSparkTemplateFolderTreeAsync(const GetSparkTemplateFolderTreeRequest& request, const GetSparkTemplateFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkTemplateFolderTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkTemplateFolderTreeOutcomeCallable AdbClient::getSparkTemplateFolderTreeCallable(const GetSparkTemplateFolderTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkTemplateFolderTreeOutcome()>>(
			[this, request]()
			{
			return this->getSparkTemplateFolderTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetSparkTemplateFullTreeOutcome AdbClient::getSparkTemplateFullTree(const GetSparkTemplateFullTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSparkTemplateFullTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSparkTemplateFullTreeOutcome(GetSparkTemplateFullTreeResult(outcome.result()));
	else
		return GetSparkTemplateFullTreeOutcome(outcome.error());
}

void AdbClient::getSparkTemplateFullTreeAsync(const GetSparkTemplateFullTreeRequest& request, const GetSparkTemplateFullTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSparkTemplateFullTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetSparkTemplateFullTreeOutcomeCallable AdbClient::getSparkTemplateFullTreeCallable(const GetSparkTemplateFullTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSparkTemplateFullTreeOutcome()>>(
			[this, request]()
			{
			return this->getSparkTemplateFullTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetTableOutcome AdbClient::getTable(const GetTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableOutcome(GetTableResult(outcome.result()));
	else
		return GetTableOutcome(outcome.error());
}

void AdbClient::getTableAsync(const GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetTableOutcomeCallable AdbClient::getTableCallable(const GetTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableOutcome()>>(
			[this, request]()
			{
			return this->getTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetTableColumnsOutcome AdbClient::getTableColumns(const GetTableColumnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableColumnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableColumnsOutcome(GetTableColumnsResult(outcome.result()));
	else
		return GetTableColumnsOutcome(outcome.error());
}

void AdbClient::getTableColumnsAsync(const GetTableColumnsRequest& request, const GetTableColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableColumns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetTableColumnsOutcomeCallable AdbClient::getTableColumnsCallable(const GetTableColumnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableColumnsOutcome()>>(
			[this, request]()
			{
			return this->getTableColumns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetTableDDLOutcome AdbClient::getTableDDL(const GetTableDDLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableDDLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableDDLOutcome(GetTableDDLResult(outcome.result()));
	else
		return GetTableDDLOutcome(outcome.error());
}

void AdbClient::getTableDDLAsync(const GetTableDDLRequest& request, const GetTableDDLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableDDL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetTableDDLOutcomeCallable AdbClient::getTableDDLCallable(const GetTableDDLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableDDLOutcome()>>(
			[this, request]()
			{
			return this->getTableDDL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetTableObjectsOutcome AdbClient::getTableObjects(const GetTableObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableObjectsOutcome(GetTableObjectsResult(outcome.result()));
	else
		return GetTableObjectsOutcome(outcome.error());
}

void AdbClient::getTableObjectsAsync(const GetTableObjectsRequest& request, const GetTableObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetTableObjectsOutcomeCallable AdbClient::getTableObjectsCallable(const GetTableObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableObjectsOutcome()>>(
			[this, request]()
			{
			return this->getTableObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetViewDDLOutcome AdbClient::getViewDDL(const GetViewDDLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetViewDDLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetViewDDLOutcome(GetViewDDLResult(outcome.result()));
	else
		return GetViewDDLOutcome(outcome.error());
}

void AdbClient::getViewDDLAsync(const GetViewDDLRequest& request, const GetViewDDLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getViewDDL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetViewDDLOutcomeCallable AdbClient::getViewDDLCallable(const GetViewDDLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetViewDDLOutcome()>>(
			[this, request]()
			{
			return this->getViewDDL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::GetViewObjectsOutcome AdbClient::getViewObjects(const GetViewObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetViewObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetViewObjectsOutcome(GetViewObjectsResult(outcome.result()));
	else
		return GetViewObjectsOutcome(outcome.error());
}

void AdbClient::getViewObjectsAsync(const GetViewObjectsRequest& request, const GetViewObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getViewObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::GetViewObjectsOutcomeCallable AdbClient::getViewObjectsCallable(const GetViewObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetViewObjectsOutcome()>>(
			[this, request]()
			{
			return this->getViewObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::KillSparkAppOutcome AdbClient::killSparkApp(const KillSparkAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillSparkAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillSparkAppOutcome(KillSparkAppResult(outcome.result()));
	else
		return KillSparkAppOutcome(outcome.error());
}

void AdbClient::killSparkAppAsync(const KillSparkAppRequest& request, const KillSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killSparkApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::KillSparkAppOutcomeCallable AdbClient::killSparkAppCallable(const KillSparkAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillSparkAppOutcome()>>(
			[this, request]()
			{
			return this->killSparkApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::KillSparkLogAnalyzeTaskOutcome AdbClient::killSparkLogAnalyzeTask(const KillSparkLogAnalyzeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillSparkLogAnalyzeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillSparkLogAnalyzeTaskOutcome(KillSparkLogAnalyzeTaskResult(outcome.result()));
	else
		return KillSparkLogAnalyzeTaskOutcome(outcome.error());
}

void AdbClient::killSparkLogAnalyzeTaskAsync(const KillSparkLogAnalyzeTaskRequest& request, const KillSparkLogAnalyzeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killSparkLogAnalyzeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::KillSparkLogAnalyzeTaskOutcomeCallable AdbClient::killSparkLogAnalyzeTaskCallable(const KillSparkLogAnalyzeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillSparkLogAnalyzeTaskOutcome()>>(
			[this, request]()
			{
			return this->killSparkLogAnalyzeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::KillSparkSQLEngineOutcome AdbClient::killSparkSQLEngine(const KillSparkSQLEngineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillSparkSQLEngineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillSparkSQLEngineOutcome(KillSparkSQLEngineResult(outcome.result()));
	else
		return KillSparkSQLEngineOutcome(outcome.error());
}

void AdbClient::killSparkSQLEngineAsync(const KillSparkSQLEngineRequest& request, const KillSparkSQLEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killSparkSQLEngine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::KillSparkSQLEngineOutcomeCallable AdbClient::killSparkSQLEngineCallable(const KillSparkSQLEngineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillSparkSQLEngineOutcome()>>(
			[this, request]()
			{
			return this->killSparkSQLEngine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ListSparkAppAttemptsOutcome AdbClient::listSparkAppAttempts(const ListSparkAppAttemptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSparkAppAttemptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSparkAppAttemptsOutcome(ListSparkAppAttemptsResult(outcome.result()));
	else
		return ListSparkAppAttemptsOutcome(outcome.error());
}

void AdbClient::listSparkAppAttemptsAsync(const ListSparkAppAttemptsRequest& request, const ListSparkAppAttemptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSparkAppAttempts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ListSparkAppAttemptsOutcomeCallable AdbClient::listSparkAppAttemptsCallable(const ListSparkAppAttemptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSparkAppAttemptsOutcome()>>(
			[this, request]()
			{
			return this->listSparkAppAttempts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ListSparkAppsOutcome AdbClient::listSparkApps(const ListSparkAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSparkAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSparkAppsOutcome(ListSparkAppsResult(outcome.result()));
	else
		return ListSparkAppsOutcome(outcome.error());
}

void AdbClient::listSparkAppsAsync(const ListSparkAppsRequest& request, const ListSparkAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSparkApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ListSparkAppsOutcomeCallable AdbClient::listSparkAppsCallable(const ListSparkAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSparkAppsOutcome()>>(
			[this, request]()
			{
			return this->listSparkApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ListSparkLogAnalyzeTasksOutcome AdbClient::listSparkLogAnalyzeTasks(const ListSparkLogAnalyzeTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSparkLogAnalyzeTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSparkLogAnalyzeTasksOutcome(ListSparkLogAnalyzeTasksResult(outcome.result()));
	else
		return ListSparkLogAnalyzeTasksOutcome(outcome.error());
}

void AdbClient::listSparkLogAnalyzeTasksAsync(const ListSparkLogAnalyzeTasksRequest& request, const ListSparkLogAnalyzeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSparkLogAnalyzeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ListSparkLogAnalyzeTasksOutcomeCallable AdbClient::listSparkLogAnalyzeTasksCallable(const ListSparkLogAnalyzeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSparkLogAnalyzeTasksOutcome()>>(
			[this, request]()
			{
			return this->listSparkLogAnalyzeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ListSparkTemplateFileIdsOutcome AdbClient::listSparkTemplateFileIds(const ListSparkTemplateFileIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSparkTemplateFileIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSparkTemplateFileIdsOutcome(ListSparkTemplateFileIdsResult(outcome.result()));
	else
		return ListSparkTemplateFileIdsOutcome(outcome.error());
}

void AdbClient::listSparkTemplateFileIdsAsync(const ListSparkTemplateFileIdsRequest& request, const ListSparkTemplateFileIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSparkTemplateFileIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ListSparkTemplateFileIdsOutcomeCallable AdbClient::listSparkTemplateFileIdsCallable(const ListSparkTemplateFileIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSparkTemplateFileIdsOutcome()>>(
			[this, request]()
			{
			return this->listSparkTemplateFileIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyAccountDescriptionOutcome AdbClient::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) const
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

void AdbClient::modifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccountDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyAccountDescriptionOutcomeCallable AdbClient::modifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccountDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyAccountDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyAuditLogConfigOutcome AdbClient::modifyAuditLogConfig(const ModifyAuditLogConfigRequest &request) const
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

void AdbClient::modifyAuditLogConfigAsync(const ModifyAuditLogConfigRequest& request, const ModifyAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAuditLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyAuditLogConfigOutcomeCallable AdbClient::modifyAuditLogConfigCallable(const ModifyAuditLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAuditLogConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAuditLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyBackupPolicyOutcome AdbClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
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

void AdbClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyBackupPolicyOutcomeCallable AdbClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyClusterAccessWhiteListOutcome AdbClient::modifyClusterAccessWhiteList(const ModifyClusterAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterAccessWhiteListOutcome(ModifyClusterAccessWhiteListResult(outcome.result()));
	else
		return ModifyClusterAccessWhiteListOutcome(outcome.error());
}

void AdbClient::modifyClusterAccessWhiteListAsync(const ModifyClusterAccessWhiteListRequest& request, const ModifyClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyClusterAccessWhiteListOutcomeCallable AdbClient::modifyClusterAccessWhiteListCallable(const ModifyClusterAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyClusterConnectionStringOutcome AdbClient::modifyClusterConnectionString(const ModifyClusterConnectionStringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterConnectionStringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterConnectionStringOutcome(ModifyClusterConnectionStringResult(outcome.result()));
	else
		return ModifyClusterConnectionStringOutcome(outcome.error());
}

void AdbClient::modifyClusterConnectionStringAsync(const ModifyClusterConnectionStringRequest& request, const ModifyClusterConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterConnectionString(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyClusterConnectionStringOutcomeCallable AdbClient::modifyClusterConnectionStringCallable(const ModifyClusterConnectionStringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterConnectionStringOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterConnectionString(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyDBClusterOutcome AdbClient::modifyDBCluster(const ModifyDBClusterRequest &request) const
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

void AdbClient::modifyDBClusterAsync(const ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyDBClusterOutcomeCallable AdbClient::modifyDBClusterCallable(const ModifyDBClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyDBCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyDBClusterDescriptionOutcome AdbClient::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) const
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

void AdbClient::modifyDBClusterDescriptionAsync(const ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyDBClusterDescriptionOutcomeCallable AdbClient::modifyDBClusterDescriptionCallable(const ModifyDBClusterDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyDBClusterMaintainTimeOutcome AdbClient::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) const
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

void AdbClient::modifyDBClusterMaintainTimeAsync(const ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBClusterMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyDBClusterMaintainTimeOutcomeCallable AdbClient::modifyDBClusterMaintainTimeCallable(const ModifyDBClusterMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBClusterMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyDBClusterMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ModifyDBResourceGroupOutcome AdbClient::modifyDBResourceGroup(const ModifyDBResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDBResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDBResourceGroupOutcome(ModifyDBResourceGroupResult(outcome.result()));
	else
		return ModifyDBResourceGroupOutcome(outcome.error());
}

void AdbClient::modifyDBResourceGroupAsync(const ModifyDBResourceGroupRequest& request, const ModifyDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDBResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ModifyDBResourceGroupOutcomeCallable AdbClient::modifyDBResourceGroupCallable(const ModifyDBResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDBResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyDBResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::PreloadSparkAppMetricsOutcome AdbClient::preloadSparkAppMetrics(const PreloadSparkAppMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreloadSparkAppMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreloadSparkAppMetricsOutcome(PreloadSparkAppMetricsResult(outcome.result()));
	else
		return PreloadSparkAppMetricsOutcome(outcome.error());
}

void AdbClient::preloadSparkAppMetricsAsync(const PreloadSparkAppMetricsRequest& request, const PreloadSparkAppMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, preloadSparkAppMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::PreloadSparkAppMetricsOutcomeCallable AdbClient::preloadSparkAppMetricsCallable(const PreloadSparkAppMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreloadSparkAppMetricsOutcome()>>(
			[this, request]()
			{
			return this->preloadSparkAppMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ReleaseClusterPublicConnectionOutcome AdbClient::releaseClusterPublicConnection(const ReleaseClusterPublicConnectionRequest &request) const
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

void AdbClient::releaseClusterPublicConnectionAsync(const ReleaseClusterPublicConnectionRequest& request, const ReleaseClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseClusterPublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ReleaseClusterPublicConnectionOutcomeCallable AdbClient::releaseClusterPublicConnectionCallable(const ReleaseClusterPublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseClusterPublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releaseClusterPublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::ResetAccountPasswordOutcome AdbClient::resetAccountPassword(const ResetAccountPasswordRequest &request) const
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

void AdbClient::resetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::ResetAccountPasswordOutcomeCallable AdbClient::resetAccountPasswordCallable(const ResetAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::SetSparkAppLogRootPathOutcome AdbClient::setSparkAppLogRootPath(const SetSparkAppLogRootPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSparkAppLogRootPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSparkAppLogRootPathOutcome(SetSparkAppLogRootPathResult(outcome.result()));
	else
		return SetSparkAppLogRootPathOutcome(outcome.error());
}

void AdbClient::setSparkAppLogRootPathAsync(const SetSparkAppLogRootPathRequest& request, const SetSparkAppLogRootPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSparkAppLogRootPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::SetSparkAppLogRootPathOutcomeCallable AdbClient::setSparkAppLogRootPathCallable(const SetSparkAppLogRootPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSparkAppLogRootPathOutcome()>>(
			[this, request]()
			{
			return this->setSparkAppLogRootPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::StartSparkSQLEngineOutcome AdbClient::startSparkSQLEngine(const StartSparkSQLEngineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartSparkSQLEngineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartSparkSQLEngineOutcome(StartSparkSQLEngineResult(outcome.result()));
	else
		return StartSparkSQLEngineOutcome(outcome.error());
}

void AdbClient::startSparkSQLEngineAsync(const StartSparkSQLEngineRequest& request, const StartSparkSQLEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startSparkSQLEngine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::StartSparkSQLEngineOutcomeCallable AdbClient::startSparkSQLEngineCallable(const StartSparkSQLEngineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartSparkSQLEngineOutcome()>>(
			[this, request]()
			{
			return this->startSparkSQLEngine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::SubmitSparkAppOutcome AdbClient::submitSparkApp(const SubmitSparkAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSparkAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSparkAppOutcome(SubmitSparkAppResult(outcome.result()));
	else
		return SubmitSparkAppOutcome(outcome.error());
}

void AdbClient::submitSparkAppAsync(const SubmitSparkAppRequest& request, const SubmitSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSparkApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::SubmitSparkAppOutcomeCallable AdbClient::submitSparkAppCallable(const SubmitSparkAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSparkAppOutcome()>>(
			[this, request]()
			{
			return this->submitSparkApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::SubmitSparkLogAnalyzeTaskOutcome AdbClient::submitSparkLogAnalyzeTask(const SubmitSparkLogAnalyzeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSparkLogAnalyzeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSparkLogAnalyzeTaskOutcome(SubmitSparkLogAnalyzeTaskResult(outcome.result()));
	else
		return SubmitSparkLogAnalyzeTaskOutcome(outcome.error());
}

void AdbClient::submitSparkLogAnalyzeTaskAsync(const SubmitSparkLogAnalyzeTaskRequest& request, const SubmitSparkLogAnalyzeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSparkLogAnalyzeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::SubmitSparkLogAnalyzeTaskOutcomeCallable AdbClient::submitSparkLogAnalyzeTaskCallable(const SubmitSparkLogAnalyzeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSparkLogAnalyzeTaskOutcome()>>(
			[this, request]()
			{
			return this->submitSparkLogAnalyzeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::UnbindAccountOutcome AdbClient::unbindAccount(const UnbindAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindAccountOutcome(UnbindAccountResult(outcome.result()));
	else
		return UnbindAccountOutcome(outcome.error());
}

void AdbClient::unbindAccountAsync(const UnbindAccountRequest& request, const UnbindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::UnbindAccountOutcomeCallable AdbClient::unbindAccountCallable(const UnbindAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindAccountOutcome()>>(
			[this, request]()
			{
			return this->unbindAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AdbClient::UpdateSparkTemplateFileOutcome AdbClient::updateSparkTemplateFile(const UpdateSparkTemplateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSparkTemplateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSparkTemplateFileOutcome(UpdateSparkTemplateFileResult(outcome.result()));
	else
		return UpdateSparkTemplateFileOutcome(outcome.error());
}

void AdbClient::updateSparkTemplateFileAsync(const UpdateSparkTemplateFileRequest& request, const UpdateSparkTemplateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSparkTemplateFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AdbClient::UpdateSparkTemplateFileOutcomeCallable AdbClient::updateSparkTemplateFileCallable(const UpdateSparkTemplateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSparkTemplateFileOutcome()>>(
			[this, request]()
			{
			return this->updateSparkTemplateFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

