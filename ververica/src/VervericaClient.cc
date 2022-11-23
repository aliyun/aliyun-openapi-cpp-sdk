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

#include <alibabacloud/ververica/VervericaClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ververica;
using namespace AlibabaCloud::Ververica::Model;

namespace
{
	const std::string SERVICE_NAME = "ververica";
}

VervericaClient::VervericaClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VervericaClient::VervericaClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VervericaClient::VervericaClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VervericaClient::~VervericaClient()
{}

VervericaClient::CreateConnectorOutcome VervericaClient::createConnector(const CreateConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConnectorOutcome(CreateConnectorResult(outcome.result()));
	else
		return CreateConnectorOutcome(outcome.error());
}

void VervericaClient::createConnectorAsync(const CreateConnectorRequest& request, const CreateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::CreateConnectorOutcomeCallable VervericaClient::createConnectorCallable(const CreateConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConnectorOutcome()>>(
			[this, request]()
			{
			return this->createConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::CreateDeploymentOutcome VervericaClient::createDeployment(const CreateDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeploymentOutcome(CreateDeploymentResult(outcome.result()));
	else
		return CreateDeploymentOutcome(outcome.error());
}

void VervericaClient::createDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::CreateDeploymentOutcomeCallable VervericaClient::createDeploymentCallable(const CreateDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeploymentOutcome()>>(
			[this, request]()
			{
			return this->createDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::CreateFormatOutcome VervericaClient::createFormat(const CreateFormatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFormatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFormatOutcome(CreateFormatResult(outcome.result()));
	else
		return CreateFormatOutcome(outcome.error());
}

void VervericaClient::createFormatAsync(const CreateFormatRequest& request, const CreateFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFormat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::CreateFormatOutcomeCallable VervericaClient::createFormatCallable(const CreateFormatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFormatOutcome()>>(
			[this, request]()
			{
			return this->createFormat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::CreateMemberOutcome VervericaClient::createMember(const CreateMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMemberOutcome(CreateMemberResult(outcome.result()));
	else
		return CreateMemberOutcome(outcome.error());
}

void VervericaClient::createMemberAsync(const CreateMemberRequest& request, const CreateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::CreateMemberOutcomeCallable VervericaClient::createMemberCallable(const CreateMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMemberOutcome()>>(
			[this, request]()
			{
			return this->createMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::CreateSavepointOutcome VervericaClient::createSavepoint(const CreateSavepointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSavepointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSavepointOutcome(CreateSavepointResult(outcome.result()));
	else
		return CreateSavepointOutcome(outcome.error());
}

void VervericaClient::createSavepointAsync(const CreateSavepointRequest& request, const CreateSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSavepoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::CreateSavepointOutcomeCallable VervericaClient::createSavepointCallable(const CreateSavepointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSavepointOutcome()>>(
			[this, request]()
			{
			return this->createSavepoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::CreateSecretValueOutcome VervericaClient::createSecretValue(const CreateSecretValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecretValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecretValueOutcome(CreateSecretValueResult(outcome.result()));
	else
		return CreateSecretValueOutcome(outcome.error());
}

void VervericaClient::createSecretValueAsync(const CreateSecretValueRequest& request, const CreateSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecretValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::CreateSecretValueOutcomeCallable VervericaClient::createSecretValueCallable(const CreateSecretValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecretValueOutcome()>>(
			[this, request]()
			{
			return this->createSecretValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::CreateUdfArtifactOutcome VervericaClient::createUdfArtifact(const CreateUdfArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUdfArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUdfArtifactOutcome(CreateUdfArtifactResult(outcome.result()));
	else
		return CreateUdfArtifactOutcome(outcome.error());
}

void VervericaClient::createUdfArtifactAsync(const CreateUdfArtifactRequest& request, const CreateUdfArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUdfArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::CreateUdfArtifactOutcomeCallable VervericaClient::createUdfArtifactCallable(const CreateUdfArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUdfArtifactOutcome()>>(
			[this, request]()
			{
			return this->createUdfArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::DatabaseExistsOutcome VervericaClient::databaseExists(const DatabaseExistsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DatabaseExistsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DatabaseExistsOutcome(DatabaseExistsResult(outcome.result()));
	else
		return DatabaseExistsOutcome(outcome.error());
}

void VervericaClient::databaseExistsAsync(const DatabaseExistsRequest& request, const DatabaseExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, databaseExists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::DatabaseExistsOutcomeCallable VervericaClient::databaseExistsCallable(const DatabaseExistsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DatabaseExistsOutcome()>>(
			[this, request]()
			{
			return this->databaseExists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::DeleteArtifactOutcome VervericaClient::deleteArtifact(const DeleteArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteArtifactOutcome(DeleteArtifactResult(outcome.result()));
	else
		return DeleteArtifactOutcome(outcome.error());
}

void VervericaClient::deleteArtifactAsync(const DeleteArtifactRequest& request, const DeleteArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::DeleteArtifactOutcomeCallable VervericaClient::deleteArtifactCallable(const DeleteArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteArtifactOutcome()>>(
			[this, request]()
			{
			return this->deleteArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::DeleteConnectorOutcome VervericaClient::deleteConnector(const DeleteConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConnectorOutcome(DeleteConnectorResult(outcome.result()));
	else
		return DeleteConnectorOutcome(outcome.error());
}

void VervericaClient::deleteConnectorAsync(const DeleteConnectorRequest& request, const DeleteConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::DeleteConnectorOutcomeCallable VervericaClient::deleteConnectorCallable(const DeleteConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConnectorOutcome()>>(
			[this, request]()
			{
			return this->deleteConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::DeleteDeploymentOutcome VervericaClient::deleteDeployment(const DeleteDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeploymentOutcome(DeleteDeploymentResult(outcome.result()));
	else
		return DeleteDeploymentOutcome(outcome.error());
}

void VervericaClient::deleteDeploymentAsync(const DeleteDeploymentRequest& request, const DeleteDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::DeleteDeploymentOutcomeCallable VervericaClient::deleteDeploymentCallable(const DeleteDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeploymentOutcome()>>(
			[this, request]()
			{
			return this->deleteDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::DeleteFormatOutcome VervericaClient::deleteFormat(const DeleteFormatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFormatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFormatOutcome(DeleteFormatResult(outcome.result()));
	else
		return DeleteFormatOutcome(outcome.error());
}

void VervericaClient::deleteFormatAsync(const DeleteFormatRequest& request, const DeleteFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFormat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::DeleteFormatOutcomeCallable VervericaClient::deleteFormatCallable(const DeleteFormatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFormatOutcome()>>(
			[this, request]()
			{
			return this->deleteFormat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::DeleteMemberOutcome VervericaClient::deleteMember(const DeleteMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMemberOutcome(DeleteMemberResult(outcome.result()));
	else
		return DeleteMemberOutcome(outcome.error());
}

void VervericaClient::deleteMemberAsync(const DeleteMemberRequest& request, const DeleteMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::DeleteMemberOutcomeCallable VervericaClient::deleteMemberCallable(const DeleteMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::DeleteSecretValueOutcome VervericaClient::deleteSecretValue(const DeleteSecretValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecretValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecretValueOutcome(DeleteSecretValueResult(outcome.result()));
	else
		return DeleteSecretValueOutcome(outcome.error());
}

void VervericaClient::deleteSecretValueAsync(const DeleteSecretValueRequest& request, const DeleteSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecretValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::DeleteSecretValueOutcomeCallable VervericaClient::deleteSecretValueCallable(const DeleteSecretValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecretValueOutcome()>>(
			[this, request]()
			{
			return this->deleteSecretValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::DeleteUdfArtifactOutcome VervericaClient::deleteUdfArtifact(const DeleteUdfArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUdfArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUdfArtifactOutcome(DeleteUdfArtifactResult(outcome.result()));
	else
		return DeleteUdfArtifactOutcome(outcome.error());
}

void VervericaClient::deleteUdfArtifactAsync(const DeleteUdfArtifactRequest& request, const DeleteUdfArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUdfArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::DeleteUdfArtifactOutcomeCallable VervericaClient::deleteUdfArtifactCallable(const DeleteUdfArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUdfArtifactOutcome()>>(
			[this, request]()
			{
			return this->deleteUdfArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ExecuteSqlScriptOutcome VervericaClient::executeSqlScript(const ExecuteSqlScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteSqlScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteSqlScriptOutcome(ExecuteSqlScriptResult(outcome.result()));
	else
		return ExecuteSqlScriptOutcome(outcome.error());
}

void VervericaClient::executeSqlScriptAsync(const ExecuteSqlScriptRequest& request, const ExecuteSqlScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeSqlScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ExecuteSqlScriptOutcomeCallable VervericaClient::executeSqlScriptCallable(const ExecuteSqlScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteSqlScriptOutcome()>>(
			[this, request]()
			{
			return this->executeSqlScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ExecuteSqlscriptsStatementsOutcome VervericaClient::executeSqlscriptsStatements(const ExecuteSqlscriptsStatementsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteSqlscriptsStatementsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteSqlscriptsStatementsOutcome(ExecuteSqlscriptsStatementsResult(outcome.result()));
	else
		return ExecuteSqlscriptsStatementsOutcome(outcome.error());
}

void VervericaClient::executeSqlscriptsStatementsAsync(const ExecuteSqlscriptsStatementsRequest& request, const ExecuteSqlscriptsStatementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeSqlscriptsStatements(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ExecuteSqlscriptsStatementsOutcomeCallable VervericaClient::executeSqlscriptsStatementsCallable(const ExecuteSqlscriptsStatementsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteSqlscriptsStatementsOutcome()>>(
			[this, request]()
			{
			return this->executeSqlscriptsStatements(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ForcefullyCreateLockOutcome VervericaClient::forcefullyCreateLock(const ForcefullyCreateLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ForcefullyCreateLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ForcefullyCreateLockOutcome(ForcefullyCreateLockResult(outcome.result()));
	else
		return ForcefullyCreateLockOutcome(outcome.error());
}

void VervericaClient::forcefullyCreateLockAsync(const ForcefullyCreateLockRequest& request, const ForcefullyCreateLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, forcefullyCreateLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ForcefullyCreateLockOutcomeCallable VervericaClient::forcefullyCreateLockCallable(const ForcefullyCreateLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ForcefullyCreateLockOutcome()>>(
			[this, request]()
			{
			return this->forcefullyCreateLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::FunctionExistsOutcome VervericaClient::functionExists(const FunctionExistsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FunctionExistsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FunctionExistsOutcome(FunctionExistsResult(outcome.result()));
	else
		return FunctionExistsOutcome(outcome.error());
}

void VervericaClient::functionExistsAsync(const FunctionExistsRequest& request, const FunctionExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, functionExists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::FunctionExistsOutcomeCallable VervericaClient::functionExistsCallable(const FunctionExistsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FunctionExistsOutcome()>>(
			[this, request]()
			{
			return this->functionExists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GenerateResourcePlanOutcome VervericaClient::generateResourcePlan(const GenerateResourcePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateResourcePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateResourcePlanOutcome(GenerateResourcePlanResult(outcome.result()));
	else
		return GenerateResourcePlanOutcome(outcome.error());
}

void VervericaClient::generateResourcePlanAsync(const GenerateResourcePlanRequest& request, const GenerateResourcePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateResourcePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GenerateResourcePlanOutcomeCallable VervericaClient::generateResourcePlanCallable(const GenerateResourcePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateResourcePlanOutcome()>>(
			[this, request]()
			{
			return this->generateResourcePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetArtifactMetadataOutcome VervericaClient::getArtifactMetadata(const GetArtifactMetadataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetArtifactMetadataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetArtifactMetadataOutcome(GetArtifactMetadataResult(outcome.result()));
	else
		return GetArtifactMetadataOutcome(outcome.error());
}

void VervericaClient::getArtifactMetadataAsync(const GetArtifactMetadataRequest& request, const GetArtifactMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getArtifactMetadata(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetArtifactMetadataOutcomeCallable VervericaClient::getArtifactMetadataCallable(const GetArtifactMetadataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetArtifactMetadataOutcome()>>(
			[this, request]()
			{
			return this->getArtifactMetadata(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetCatalogOutcome VervericaClient::getCatalog(const GetCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCatalogOutcome(GetCatalogResult(outcome.result()));
	else
		return GetCatalogOutcome(outcome.error());
}

void VervericaClient::getCatalogAsync(const GetCatalogRequest& request, const GetCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetCatalogOutcomeCallable VervericaClient::getCatalogCallable(const GetCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCatalogOutcome()>>(
			[this, request]()
			{
			return this->getCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetDatabaseOutcome VervericaClient::getDatabase(const GetDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatabaseOutcome(GetDatabaseResult(outcome.result()));
	else
		return GetDatabaseOutcome(outcome.error());
}

void VervericaClient::getDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetDatabaseOutcomeCallable VervericaClient::getDatabaseCallable(const GetDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetDefaultDatabaseOutcome VervericaClient::getDefaultDatabase(const GetDefaultDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDefaultDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDefaultDatabaseOutcome(GetDefaultDatabaseResult(outcome.result()));
	else
		return GetDefaultDatabaseOutcome(outcome.error());
}

void VervericaClient::getDefaultDatabaseAsync(const GetDefaultDatabaseRequest& request, const GetDefaultDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDefaultDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetDefaultDatabaseOutcomeCallable VervericaClient::getDefaultDatabaseCallable(const GetDefaultDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDefaultDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getDefaultDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetDeploymentOutcome VervericaClient::getDeployment(const GetDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeploymentOutcome(GetDeploymentResult(outcome.result()));
	else
		return GetDeploymentOutcome(outcome.error());
}

void VervericaClient::getDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetDeploymentOutcomeCallable VervericaClient::getDeploymentCallable(const GetDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeploymentOutcome()>>(
			[this, request]()
			{
			return this->getDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetDeploymentDefaultsOutcome VervericaClient::getDeploymentDefaults(const GetDeploymentDefaultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeploymentDefaultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeploymentDefaultsOutcome(GetDeploymentDefaultsResult(outcome.result()));
	else
		return GetDeploymentDefaultsOutcome(outcome.error());
}

void VervericaClient::getDeploymentDefaultsAsync(const GetDeploymentDefaultsRequest& request, const GetDeploymentDefaultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeploymentDefaults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetDeploymentDefaultsOutcomeCallable VervericaClient::getDeploymentDefaultsCallable(const GetDeploymentDefaultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeploymentDefaultsOutcome()>>(
			[this, request]()
			{
			return this->getDeploymentDefaults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetFunctionOutcome VervericaClient::getFunction(const GetFunctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFunctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFunctionOutcome(GetFunctionResult(outcome.result()));
	else
		return GetFunctionOutcome(outcome.error());
}

void VervericaClient::getFunctionAsync(const GetFunctionRequest& request, const GetFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFunction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetFunctionOutcomeCallable VervericaClient::getFunctionCallable(const GetFunctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFunctionOutcome()>>(
			[this, request]()
			{
			return this->getFunction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetGlobalDeploymentDefaultsOutcome VervericaClient::getGlobalDeploymentDefaults(const GetGlobalDeploymentDefaultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGlobalDeploymentDefaultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGlobalDeploymentDefaultsOutcome(GetGlobalDeploymentDefaultsResult(outcome.result()));
	else
		return GetGlobalDeploymentDefaultsOutcome(outcome.error());
}

void VervericaClient::getGlobalDeploymentDefaultsAsync(const GetGlobalDeploymentDefaultsRequest& request, const GetGlobalDeploymentDefaultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGlobalDeploymentDefaults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetGlobalDeploymentDefaultsOutcomeCallable VervericaClient::getGlobalDeploymentDefaultsCallable(const GetGlobalDeploymentDefaultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGlobalDeploymentDefaultsOutcome()>>(
			[this, request]()
			{
			return this->getGlobalDeploymentDefaults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetResourcePlanOutcome VervericaClient::getResourcePlan(const GetResourcePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourcePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourcePlanOutcome(GetResourcePlanResult(outcome.result()));
	else
		return GetResourcePlanOutcome(outcome.error());
}

void VervericaClient::getResourcePlanAsync(const GetResourcePlanRequest& request, const GetResourcePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourcePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetResourcePlanOutcomeCallable VervericaClient::getResourcePlanCallable(const GetResourcePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourcePlanOutcome()>>(
			[this, request]()
			{
			return this->getResourcePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetTableOutcome VervericaClient::getTable(const GetTableRequest &request) const
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

void VervericaClient::getTableAsync(const GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetTableOutcomeCallable VervericaClient::getTableCallable(const GetTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableOutcome()>>(
			[this, request]()
			{
			return this->getTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::GetUdfArtifactOutcome VervericaClient::getUdfArtifact(const GetUdfArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUdfArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUdfArtifactOutcome(GetUdfArtifactResult(outcome.result()));
	else
		return GetUdfArtifactOutcome(outcome.error());
}

void VervericaClient::getUdfArtifactAsync(const GetUdfArtifactRequest& request, const GetUdfArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUdfArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::GetUdfArtifactOutcomeCallable VervericaClient::getUdfArtifactCallable(const GetUdfArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUdfArtifactOutcome()>>(
			[this, request]()
			{
			return this->getUdfArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListArtifactsOutcome VervericaClient::listArtifacts(const ListArtifactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListArtifactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListArtifactsOutcome(ListArtifactsResult(outcome.result()));
	else
		return ListArtifactsOutcome(outcome.error());
}

void VervericaClient::listArtifactsAsync(const ListArtifactsRequest& request, const ListArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listArtifacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListArtifactsOutcomeCallable VervericaClient::listArtifactsCallable(const ListArtifactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListArtifactsOutcome()>>(
			[this, request]()
			{
			return this->listArtifacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListCatalogsOutcome VervericaClient::listCatalogs(const ListCatalogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCatalogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCatalogsOutcome(ListCatalogsResult(outcome.result()));
	else
		return ListCatalogsOutcome(outcome.error());
}

void VervericaClient::listCatalogsAsync(const ListCatalogsRequest& request, const ListCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCatalogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListCatalogsOutcomeCallable VervericaClient::listCatalogsCallable(const ListCatalogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCatalogsOutcome()>>(
			[this, request]()
			{
			return this->listCatalogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListConnectorsOutcome VervericaClient::listConnectors(const ListConnectorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConnectorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConnectorsOutcome(ListConnectorsResult(outcome.result()));
	else
		return ListConnectorsOutcome(outcome.error());
}

void VervericaClient::listConnectorsAsync(const ListConnectorsRequest& request, const ListConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConnectors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListConnectorsOutcomeCallable VervericaClient::listConnectorsCallable(const ListConnectorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConnectorsOutcome()>>(
			[this, request]()
			{
			return this->listConnectors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListDatabasesOutcome VervericaClient::listDatabases(const ListDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatabasesOutcome(ListDatabasesResult(outcome.result()));
	else
		return ListDatabasesOutcome(outcome.error());
}

void VervericaClient::listDatabasesAsync(const ListDatabasesRequest& request, const ListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListDatabasesOutcomeCallable VervericaClient::listDatabasesCallable(const ListDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatabasesOutcome()>>(
			[this, request]()
			{
			return this->listDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListDeploymentTargetsOutcome VervericaClient::listDeploymentTargets(const ListDeploymentTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeploymentTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeploymentTargetsOutcome(ListDeploymentTargetsResult(outcome.result()));
	else
		return ListDeploymentTargetsOutcome(outcome.error());
}

void VervericaClient::listDeploymentTargetsAsync(const ListDeploymentTargetsRequest& request, const ListDeploymentTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeploymentTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListDeploymentTargetsOutcomeCallable VervericaClient::listDeploymentTargetsCallable(const ListDeploymentTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeploymentTargetsOutcome()>>(
			[this, request]()
			{
			return this->listDeploymentTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListDeploymentsOutcome VervericaClient::listDeployments(const ListDeploymentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeploymentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeploymentsOutcome(ListDeploymentsResult(outcome.result()));
	else
		return ListDeploymentsOutcome(outcome.error());
}

void VervericaClient::listDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeployments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListDeploymentsOutcomeCallable VervericaClient::listDeploymentsCallable(const ListDeploymentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeploymentsOutcome()>>(
			[this, request]()
			{
			return this->listDeployments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListFlinkVersionsOutcome VervericaClient::listFlinkVersions(const ListFlinkVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlinkVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlinkVersionsOutcome(ListFlinkVersionsResult(outcome.result()));
	else
		return ListFlinkVersionsOutcome(outcome.error());
}

void VervericaClient::listFlinkVersionsAsync(const ListFlinkVersionsRequest& request, const ListFlinkVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlinkVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListFlinkVersionsOutcomeCallable VervericaClient::listFlinkVersionsCallable(const ListFlinkVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlinkVersionsOutcome()>>(
			[this, request]()
			{
			return this->listFlinkVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListFormatsOutcome VervericaClient::listFormats(const ListFormatsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFormatsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFormatsOutcome(ListFormatsResult(outcome.result()));
	else
		return ListFormatsOutcome(outcome.error());
}

void VervericaClient::listFormatsAsync(const ListFormatsRequest& request, const ListFormatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFormats(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListFormatsOutcomeCallable VervericaClient::listFormatsCallable(const ListFormatsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFormatsOutcome()>>(
			[this, request]()
			{
			return this->listFormats(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListFunctionsOutcome VervericaClient::listFunctions(const ListFunctionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFunctionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFunctionsOutcome(ListFunctionsResult(outcome.result()));
	else
		return ListFunctionsOutcome(outcome.error());
}

void VervericaClient::listFunctionsAsync(const ListFunctionsRequest& request, const ListFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFunctions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListFunctionsOutcomeCallable VervericaClient::listFunctionsCallable(const ListFunctionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFunctionsOutcome()>>(
			[this, request]()
			{
			return this->listFunctions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListJobsOutcome VervericaClient::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void VervericaClient::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListJobsOutcomeCallable VervericaClient::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListNamespacesOutcome VervericaClient::listNamespaces(const ListNamespacesRequest &request) const
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

void VervericaClient::listNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListNamespacesOutcomeCallable VervericaClient::listNamespacesCallable(const ListNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNamespacesOutcome()>>(
			[this, request]()
			{
			return this->listNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListSavepointsOutcome VervericaClient::listSavepoints(const ListSavepointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSavepointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSavepointsOutcome(ListSavepointsResult(outcome.result()));
	else
		return ListSavepointsOutcome(outcome.error());
}

void VervericaClient::listSavepointsAsync(const ListSavepointsRequest& request, const ListSavepointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSavepoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListSavepointsOutcomeCallable VervericaClient::listSavepointsCallable(const ListSavepointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSavepointsOutcome()>>(
			[this, request]()
			{
			return this->listSavepoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListSecretValuesOutcome VervericaClient::listSecretValues(const ListSecretValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecretValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecretValuesOutcome(ListSecretValuesResult(outcome.result()));
	else
		return ListSecretValuesOutcome(outcome.error());
}

void VervericaClient::listSecretValuesAsync(const ListSecretValuesRequest& request, const ListSecretValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecretValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListSecretValuesOutcomeCallable VervericaClient::listSecretValuesCallable(const ListSecretValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecretValuesOutcome()>>(
			[this, request]()
			{
			return this->listSecretValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListSessionClustersOutcome VervericaClient::listSessionClusters(const ListSessionClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSessionClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSessionClustersOutcome(ListSessionClustersResult(outcome.result()));
	else
		return ListSessionClustersOutcome(outcome.error());
}

void VervericaClient::listSessionClustersAsync(const ListSessionClustersRequest& request, const ListSessionClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSessionClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListSessionClustersOutcomeCallable VervericaClient::listSessionClustersCallable(const ListSessionClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSessionClustersOutcome()>>(
			[this, request]()
			{
			return this->listSessionClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ListTablesOutcome VervericaClient::listTables(const ListTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTablesOutcome(ListTablesResult(outcome.result()));
	else
		return ListTablesOutcome(outcome.error());
}

void VervericaClient::listTablesAsync(const ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ListTablesOutcomeCallable VervericaClient::listTablesCallable(const ListTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTablesOutcome()>>(
			[this, request]()
			{
			return this->listTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ParseConnectorOutcome VervericaClient::parseConnector(const ParseConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ParseConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ParseConnectorOutcome(ParseConnectorResult(outcome.result()));
	else
		return ParseConnectorOutcome(outcome.error());
}

void VervericaClient::parseConnectorAsync(const ParseConnectorRequest& request, const ParseConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, parseConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ParseConnectorOutcomeCallable VervericaClient::parseConnectorCallable(const ParseConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ParseConnectorOutcome()>>(
			[this, request]()
			{
			return this->parseConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ParseFormatOutcome VervericaClient::parseFormat(const ParseFormatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ParseFormatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ParseFormatOutcome(ParseFormatResult(outcome.result()));
	else
		return ParseFormatOutcome(outcome.error());
}

void VervericaClient::parseFormatAsync(const ParseFormatRequest& request, const ParseFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, parseFormat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ParseFormatOutcomeCallable VervericaClient::parseFormatCallable(const ParseFormatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ParseFormatOutcome()>>(
			[this, request]()
			{
			return this->parseFormat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ReplaceDeploymentOutcome VervericaClient::replaceDeployment(const ReplaceDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceDeploymentOutcome(ReplaceDeploymentResult(outcome.result()));
	else
		return ReplaceDeploymentOutcome(outcome.error());
}

void VervericaClient::replaceDeploymentAsync(const ReplaceDeploymentRequest& request, const ReplaceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ReplaceDeploymentOutcomeCallable VervericaClient::replaceDeploymentCallable(const ReplaceDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceDeploymentOutcome()>>(
			[this, request]()
			{
			return this->replaceDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::SetDeploymentResourceModeOutcome VervericaClient::setDeploymentResourceMode(const SetDeploymentResourceModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDeploymentResourceModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDeploymentResourceModeOutcome(SetDeploymentResourceModeResult(outcome.result()));
	else
		return SetDeploymentResourceModeOutcome(outcome.error());
}

void VervericaClient::setDeploymentResourceModeAsync(const SetDeploymentResourceModeRequest& request, const SetDeploymentResourceModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDeploymentResourceMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::SetDeploymentResourceModeOutcomeCallable VervericaClient::setDeploymentResourceModeCallable(const SetDeploymentResourceModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDeploymentResourceModeOutcome()>>(
			[this, request]()
			{
			return this->setDeploymentResourceMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::TableExistsOutcome VervericaClient::tableExists(const TableExistsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TableExistsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TableExistsOutcome(TableExistsResult(outcome.result()));
	else
		return TableExistsOutcome(outcome.error());
}

void VervericaClient::tableExistsAsync(const TableExistsRequest& request, const TableExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tableExists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::TableExistsOutcomeCallable VervericaClient::tableExistsCallable(const TableExistsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TableExistsOutcome()>>(
			[this, request]()
			{
			return this->tableExists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::UpdateConnectorOutcome VervericaClient::updateConnector(const UpdateConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConnectorOutcome(UpdateConnectorResult(outcome.result()));
	else
		return UpdateConnectorOutcome(outcome.error());
}

void VervericaClient::updateConnectorAsync(const UpdateConnectorRequest& request, const UpdateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConnector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::UpdateConnectorOutcomeCallable VervericaClient::updateConnectorCallable(const UpdateConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConnectorOutcome()>>(
			[this, request]()
			{
			return this->updateConnector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::UpdateDeploymentOutcome VervericaClient::updateDeployment(const UpdateDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDeploymentOutcome(UpdateDeploymentResult(outcome.result()));
	else
		return UpdateDeploymentOutcome(outcome.error());
}

void VervericaClient::updateDeploymentAsync(const UpdateDeploymentRequest& request, const UpdateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::UpdateDeploymentOutcomeCallable VervericaClient::updateDeploymentCallable(const UpdateDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDeploymentOutcome()>>(
			[this, request]()
			{
			return this->updateDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::UpdateDeploymentDesiredStateOutcome VervericaClient::updateDeploymentDesiredState(const UpdateDeploymentDesiredStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDeploymentDesiredStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDeploymentDesiredStateOutcome(UpdateDeploymentDesiredStateResult(outcome.result()));
	else
		return UpdateDeploymentDesiredStateOutcome(outcome.error());
}

void VervericaClient::updateDeploymentDesiredStateAsync(const UpdateDeploymentDesiredStateRequest& request, const UpdateDeploymentDesiredStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDeploymentDesiredState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::UpdateDeploymentDesiredStateOutcomeCallable VervericaClient::updateDeploymentDesiredStateCallable(const UpdateDeploymentDesiredStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDeploymentDesiredStateOutcome()>>(
			[this, request]()
			{
			return this->updateDeploymentDesiredState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::UpdateFormatOutcome VervericaClient::updateFormat(const UpdateFormatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFormatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFormatOutcome(UpdateFormatResult(outcome.result()));
	else
		return UpdateFormatOutcome(outcome.error());
}

void VervericaClient::updateFormatAsync(const UpdateFormatRequest& request, const UpdateFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFormat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::UpdateFormatOutcomeCallable VervericaClient::updateFormatCallable(const UpdateFormatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFormatOutcome()>>(
			[this, request]()
			{
			return this->updateFormat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::UpdateMemberOutcome VervericaClient::updateMember(const UpdateMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMemberOutcome(UpdateMemberResult(outcome.result()));
	else
		return UpdateMemberOutcome(outcome.error());
}

void VervericaClient::updateMemberAsync(const UpdateMemberRequest& request, const UpdateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::UpdateMemberOutcomeCallable VervericaClient::updateMemberCallable(const UpdateMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMemberOutcome()>>(
			[this, request]()
			{
			return this->updateMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::UpdateUdfArtifactOutcome VervericaClient::updateUdfArtifact(const UpdateUdfArtifactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUdfArtifactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUdfArtifactOutcome(UpdateUdfArtifactResult(outcome.result()));
	else
		return UpdateUdfArtifactOutcome(outcome.error());
}

void VervericaClient::updateUdfArtifactAsync(const UpdateUdfArtifactRequest& request, const UpdateUdfArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUdfArtifact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::UpdateUdfArtifactOutcomeCallable VervericaClient::updateUdfArtifactCallable(const UpdateUdfArtifactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUdfArtifactOutcome()>>(
			[this, request]()
			{
			return this->updateUdfArtifact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VervericaClient::ValidateSqlScriptOutcome VervericaClient::validateSqlScript(const ValidateSqlScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateSqlScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateSqlScriptOutcome(ValidateSqlScriptResult(outcome.result()));
	else
		return ValidateSqlScriptOutcome(outcome.error());
}

void VervericaClient::validateSqlScriptAsync(const ValidateSqlScriptRequest& request, const ValidateSqlScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateSqlScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VervericaClient::ValidateSqlScriptOutcomeCallable VervericaClient::validateSqlScriptCallable(const ValidateSqlScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateSqlScriptOutcome()>>(
			[this, request]()
			{
			return this->validateSqlScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

