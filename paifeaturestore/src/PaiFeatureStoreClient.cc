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

#include <alibabacloud/paifeaturestore/PaiFeatureStoreClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

namespace
{
	const std::string SERVICE_NAME = "PaiFeatureStore";
}

PaiFeatureStoreClient::PaiFeatureStoreClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PaiFeatureStoreClient::PaiFeatureStoreClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PaiFeatureStoreClient::PaiFeatureStoreClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PaiFeatureStoreClient::~PaiFeatureStoreClient()
{}

PaiFeatureStoreClient::CheckInstanceDatasourceOutcome PaiFeatureStoreClient::checkInstanceDatasource(const CheckInstanceDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckInstanceDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckInstanceDatasourceOutcome(CheckInstanceDatasourceResult(outcome.result()));
	else
		return CheckInstanceDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::checkInstanceDatasourceAsync(const CheckInstanceDatasourceRequest& request, const CheckInstanceDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkInstanceDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CheckInstanceDatasourceOutcomeCallable PaiFeatureStoreClient::checkInstanceDatasourceCallable(const CheckInstanceDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckInstanceDatasourceOutcome()>>(
			[this, request]()
			{
			return this->checkInstanceDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CheckModelFeatureFGFeatureOutcome PaiFeatureStoreClient::checkModelFeatureFGFeature(const CheckModelFeatureFGFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckModelFeatureFGFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckModelFeatureFGFeatureOutcome(CheckModelFeatureFGFeatureResult(outcome.result()));
	else
		return CheckModelFeatureFGFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::checkModelFeatureFGFeatureAsync(const CheckModelFeatureFGFeatureRequest& request, const CheckModelFeatureFGFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkModelFeatureFGFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CheckModelFeatureFGFeatureOutcomeCallable PaiFeatureStoreClient::checkModelFeatureFGFeatureCallable(const CheckModelFeatureFGFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckModelFeatureFGFeatureOutcome()>>(
			[this, request]()
			{
			return this->checkModelFeatureFGFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateDatasourceOutcome PaiFeatureStoreClient::createDatasource(const CreateDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatasourceOutcome(CreateDatasourceResult(outcome.result()));
	else
		return CreateDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::createDatasourceAsync(const CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateDatasourceOutcomeCallable PaiFeatureStoreClient::createDatasourceCallable(const CreateDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasourceOutcome()>>(
			[this, request]()
			{
			return this->createDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateFeatureEntityOutcome PaiFeatureStoreClient::createFeatureEntity(const CreateFeatureEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFeatureEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFeatureEntityOutcome(CreateFeatureEntityResult(outcome.result()));
	else
		return CreateFeatureEntityOutcome(outcome.error());
}

void PaiFeatureStoreClient::createFeatureEntityAsync(const CreateFeatureEntityRequest& request, const CreateFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFeatureEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateFeatureEntityOutcomeCallable PaiFeatureStoreClient::createFeatureEntityCallable(const CreateFeatureEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFeatureEntityOutcome()>>(
			[this, request]()
			{
			return this->createFeatureEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateFeatureViewOutcome PaiFeatureStoreClient::createFeatureView(const CreateFeatureViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFeatureViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFeatureViewOutcome(CreateFeatureViewResult(outcome.result()));
	else
		return CreateFeatureViewOutcome(outcome.error());
}

void PaiFeatureStoreClient::createFeatureViewAsync(const CreateFeatureViewRequest& request, const CreateFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFeatureView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateFeatureViewOutcomeCallable PaiFeatureStoreClient::createFeatureViewCallable(const CreateFeatureViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFeatureViewOutcome()>>(
			[this, request]()
			{
			return this->createFeatureView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateInstanceOutcome PaiFeatureStoreClient::createInstance(const CreateInstanceRequest &request) const
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

void PaiFeatureStoreClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateInstanceOutcomeCallable PaiFeatureStoreClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateLLMConfigOutcome PaiFeatureStoreClient::createLLMConfig(const CreateLLMConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLLMConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLLMConfigOutcome(CreateLLMConfigResult(outcome.result()));
	else
		return CreateLLMConfigOutcome(outcome.error());
}

void PaiFeatureStoreClient::createLLMConfigAsync(const CreateLLMConfigRequest& request, const CreateLLMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLLMConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateLLMConfigOutcomeCallable PaiFeatureStoreClient::createLLMConfigCallable(const CreateLLMConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLLMConfigOutcome()>>(
			[this, request]()
			{
			return this->createLLMConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateLabelTableOutcome PaiFeatureStoreClient::createLabelTable(const CreateLabelTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLabelTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLabelTableOutcome(CreateLabelTableResult(outcome.result()));
	else
		return CreateLabelTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::createLabelTableAsync(const CreateLabelTableRequest& request, const CreateLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLabelTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateLabelTableOutcomeCallable PaiFeatureStoreClient::createLabelTableCallable(const CreateLabelTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLabelTableOutcome()>>(
			[this, request]()
			{
			return this->createLabelTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateModelFeatureOutcome PaiFeatureStoreClient::createModelFeature(const CreateModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateModelFeatureOutcome(CreateModelFeatureResult(outcome.result()));
	else
		return CreateModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::createModelFeatureAsync(const CreateModelFeatureRequest& request, const CreateModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateModelFeatureOutcomeCallable PaiFeatureStoreClient::createModelFeatureCallable(const CreateModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->createModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateProjectOutcome PaiFeatureStoreClient::createProject(const CreateProjectRequest &request) const
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

void PaiFeatureStoreClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateProjectOutcomeCallable PaiFeatureStoreClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::CreateServiceIdentityRoleOutcome PaiFeatureStoreClient::createServiceIdentityRole(const CreateServiceIdentityRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceIdentityRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceIdentityRoleOutcome(CreateServiceIdentityRoleResult(outcome.result()));
	else
		return CreateServiceIdentityRoleOutcome(outcome.error());
}

void PaiFeatureStoreClient::createServiceIdentityRoleAsync(const CreateServiceIdentityRoleRequest& request, const CreateServiceIdentityRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceIdentityRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::CreateServiceIdentityRoleOutcomeCallable PaiFeatureStoreClient::createServiceIdentityRoleCallable(const CreateServiceIdentityRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceIdentityRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceIdentityRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteDatasourceOutcome PaiFeatureStoreClient::deleteDatasource(const DeleteDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatasourceOutcome(DeleteDatasourceResult(outcome.result()));
	else
		return DeleteDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteDatasourceAsync(const DeleteDatasourceRequest& request, const DeleteDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteDatasourceOutcomeCallable PaiFeatureStoreClient::deleteDatasourceCallable(const DeleteDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatasourceOutcome()>>(
			[this, request]()
			{
			return this->deleteDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteFeatureEntityOutcome PaiFeatureStoreClient::deleteFeatureEntity(const DeleteFeatureEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFeatureEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFeatureEntityOutcome(DeleteFeatureEntityResult(outcome.result()));
	else
		return DeleteFeatureEntityOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteFeatureEntityAsync(const DeleteFeatureEntityRequest& request, const DeleteFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFeatureEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteFeatureEntityOutcomeCallable PaiFeatureStoreClient::deleteFeatureEntityCallable(const DeleteFeatureEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFeatureEntityOutcome()>>(
			[this, request]()
			{
			return this->deleteFeatureEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteFeatureViewOutcome PaiFeatureStoreClient::deleteFeatureView(const DeleteFeatureViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFeatureViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFeatureViewOutcome(DeleteFeatureViewResult(outcome.result()));
	else
		return DeleteFeatureViewOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteFeatureViewAsync(const DeleteFeatureViewRequest& request, const DeleteFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFeatureView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteFeatureViewOutcomeCallable PaiFeatureStoreClient::deleteFeatureViewCallable(const DeleteFeatureViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFeatureViewOutcome()>>(
			[this, request]()
			{
			return this->deleteFeatureView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteLLMConfigOutcome PaiFeatureStoreClient::deleteLLMConfig(const DeleteLLMConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLLMConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLLMConfigOutcome(DeleteLLMConfigResult(outcome.result()));
	else
		return DeleteLLMConfigOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteLLMConfigAsync(const DeleteLLMConfigRequest& request, const DeleteLLMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLLMConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteLLMConfigOutcomeCallable PaiFeatureStoreClient::deleteLLMConfigCallable(const DeleteLLMConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLLMConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLLMConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteLabelTableOutcome PaiFeatureStoreClient::deleteLabelTable(const DeleteLabelTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLabelTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLabelTableOutcome(DeleteLabelTableResult(outcome.result()));
	else
		return DeleteLabelTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteLabelTableAsync(const DeleteLabelTableRequest& request, const DeleteLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLabelTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteLabelTableOutcomeCallable PaiFeatureStoreClient::deleteLabelTableCallable(const DeleteLabelTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLabelTableOutcome()>>(
			[this, request]()
			{
			return this->deleteLabelTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteModelFeatureOutcome PaiFeatureStoreClient::deleteModelFeature(const DeleteModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteModelFeatureOutcome(DeleteModelFeatureResult(outcome.result()));
	else
		return DeleteModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::deleteModelFeatureAsync(const DeleteModelFeatureRequest& request, const DeleteModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteModelFeatureOutcomeCallable PaiFeatureStoreClient::deleteModelFeatureCallable(const DeleteModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->deleteModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::DeleteProjectOutcome PaiFeatureStoreClient::deleteProject(const DeleteProjectRequest &request) const
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

void PaiFeatureStoreClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::DeleteProjectOutcomeCallable PaiFeatureStoreClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ExportModelFeatureTrainingSetTableOutcome PaiFeatureStoreClient::exportModelFeatureTrainingSetTable(const ExportModelFeatureTrainingSetTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportModelFeatureTrainingSetTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportModelFeatureTrainingSetTableOutcome(ExportModelFeatureTrainingSetTableResult(outcome.result()));
	else
		return ExportModelFeatureTrainingSetTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::exportModelFeatureTrainingSetTableAsync(const ExportModelFeatureTrainingSetTableRequest& request, const ExportModelFeatureTrainingSetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportModelFeatureTrainingSetTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ExportModelFeatureTrainingSetTableOutcomeCallable PaiFeatureStoreClient::exportModelFeatureTrainingSetTableCallable(const ExportModelFeatureTrainingSetTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportModelFeatureTrainingSetTableOutcome()>>(
			[this, request]()
			{
			return this->exportModelFeatureTrainingSetTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetDatasourceOutcome PaiFeatureStoreClient::getDatasource(const GetDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatasourceOutcome(GetDatasourceResult(outcome.result()));
	else
		return GetDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::getDatasourceAsync(const GetDatasourceRequest& request, const GetDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetDatasourceOutcomeCallable PaiFeatureStoreClient::getDatasourceCallable(const GetDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatasourceOutcome()>>(
			[this, request]()
			{
			return this->getDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetDatasourceTableOutcome PaiFeatureStoreClient::getDatasourceTable(const GetDatasourceTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatasourceTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatasourceTableOutcome(GetDatasourceTableResult(outcome.result()));
	else
		return GetDatasourceTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::getDatasourceTableAsync(const GetDatasourceTableRequest& request, const GetDatasourceTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatasourceTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetDatasourceTableOutcomeCallable PaiFeatureStoreClient::getDatasourceTableCallable(const GetDatasourceTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatasourceTableOutcome()>>(
			[this, request]()
			{
			return this->getDatasourceTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetFeatureEntityOutcome PaiFeatureStoreClient::getFeatureEntity(const GetFeatureEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFeatureEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFeatureEntityOutcome(GetFeatureEntityResult(outcome.result()));
	else
		return GetFeatureEntityOutcome(outcome.error());
}

void PaiFeatureStoreClient::getFeatureEntityAsync(const GetFeatureEntityRequest& request, const GetFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFeatureEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetFeatureEntityOutcomeCallable PaiFeatureStoreClient::getFeatureEntityCallable(const GetFeatureEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFeatureEntityOutcome()>>(
			[this, request]()
			{
			return this->getFeatureEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetFeatureViewOutcome PaiFeatureStoreClient::getFeatureView(const GetFeatureViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFeatureViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFeatureViewOutcome(GetFeatureViewResult(outcome.result()));
	else
		return GetFeatureViewOutcome(outcome.error());
}

void PaiFeatureStoreClient::getFeatureViewAsync(const GetFeatureViewRequest& request, const GetFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFeatureView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetFeatureViewOutcomeCallable PaiFeatureStoreClient::getFeatureViewCallable(const GetFeatureViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFeatureViewOutcome()>>(
			[this, request]()
			{
			return this->getFeatureView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetInstanceOutcome PaiFeatureStoreClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void PaiFeatureStoreClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetInstanceOutcomeCallable PaiFeatureStoreClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetLLMConfigOutcome PaiFeatureStoreClient::getLLMConfig(const GetLLMConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLLMConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLLMConfigOutcome(GetLLMConfigResult(outcome.result()));
	else
		return GetLLMConfigOutcome(outcome.error());
}

void PaiFeatureStoreClient::getLLMConfigAsync(const GetLLMConfigRequest& request, const GetLLMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLLMConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetLLMConfigOutcomeCallable PaiFeatureStoreClient::getLLMConfigCallable(const GetLLMConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLLMConfigOutcome()>>(
			[this, request]()
			{
			return this->getLLMConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetLabelTableOutcome PaiFeatureStoreClient::getLabelTable(const GetLabelTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLabelTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLabelTableOutcome(GetLabelTableResult(outcome.result()));
	else
		return GetLabelTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::getLabelTableAsync(const GetLabelTableRequest& request, const GetLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLabelTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetLabelTableOutcomeCallable PaiFeatureStoreClient::getLabelTableCallable(const GetLabelTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLabelTableOutcome()>>(
			[this, request]()
			{
			return this->getLabelTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetModelFeatureOutcome PaiFeatureStoreClient::getModelFeature(const GetModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelFeatureOutcome(GetModelFeatureResult(outcome.result()));
	else
		return GetModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::getModelFeatureAsync(const GetModelFeatureRequest& request, const GetModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetModelFeatureOutcomeCallable PaiFeatureStoreClient::getModelFeatureCallable(const GetModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->getModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetModelFeatureFGFeatureOutcome PaiFeatureStoreClient::getModelFeatureFGFeature(const GetModelFeatureFGFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelFeatureFGFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelFeatureFGFeatureOutcome(GetModelFeatureFGFeatureResult(outcome.result()));
	else
		return GetModelFeatureFGFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::getModelFeatureFGFeatureAsync(const GetModelFeatureFGFeatureRequest& request, const GetModelFeatureFGFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelFeatureFGFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetModelFeatureFGFeatureOutcomeCallable PaiFeatureStoreClient::getModelFeatureFGFeatureCallable(const GetModelFeatureFGFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelFeatureFGFeatureOutcome()>>(
			[this, request]()
			{
			return this->getModelFeatureFGFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetModelFeatureFGInfoOutcome PaiFeatureStoreClient::getModelFeatureFGInfo(const GetModelFeatureFGInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelFeatureFGInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelFeatureFGInfoOutcome(GetModelFeatureFGInfoResult(outcome.result()));
	else
		return GetModelFeatureFGInfoOutcome(outcome.error());
}

void PaiFeatureStoreClient::getModelFeatureFGInfoAsync(const GetModelFeatureFGInfoRequest& request, const GetModelFeatureFGInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelFeatureFGInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetModelFeatureFGInfoOutcomeCallable PaiFeatureStoreClient::getModelFeatureFGInfoCallable(const GetModelFeatureFGInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelFeatureFGInfoOutcome()>>(
			[this, request]()
			{
			return this->getModelFeatureFGInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetProjectOutcome PaiFeatureStoreClient::getProject(const GetProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectOutcome(GetProjectResult(outcome.result()));
	else
		return GetProjectOutcome(outcome.error());
}

void PaiFeatureStoreClient::getProjectAsync(const GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetProjectOutcomeCallable PaiFeatureStoreClient::getProjectCallable(const GetProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectOutcome()>>(
			[this, request]()
			{
			return this->getProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetProjectFeatureEntityOutcome PaiFeatureStoreClient::getProjectFeatureEntity(const GetProjectFeatureEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectFeatureEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectFeatureEntityOutcome(GetProjectFeatureEntityResult(outcome.result()));
	else
		return GetProjectFeatureEntityOutcome(outcome.error());
}

void PaiFeatureStoreClient::getProjectFeatureEntityAsync(const GetProjectFeatureEntityRequest& request, const GetProjectFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectFeatureEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetProjectFeatureEntityOutcomeCallable PaiFeatureStoreClient::getProjectFeatureEntityCallable(const GetProjectFeatureEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectFeatureEntityOutcome()>>(
			[this, request]()
			{
			return this->getProjectFeatureEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetServiceIdentityRoleOutcome PaiFeatureStoreClient::getServiceIdentityRole(const GetServiceIdentityRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceIdentityRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceIdentityRoleOutcome(GetServiceIdentityRoleResult(outcome.result()));
	else
		return GetServiceIdentityRoleOutcome(outcome.error());
}

void PaiFeatureStoreClient::getServiceIdentityRoleAsync(const GetServiceIdentityRoleRequest& request, const GetServiceIdentityRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceIdentityRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetServiceIdentityRoleOutcomeCallable PaiFeatureStoreClient::getServiceIdentityRoleCallable(const GetServiceIdentityRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceIdentityRoleOutcome()>>(
			[this, request]()
			{
			return this->getServiceIdentityRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::GetTaskOutcome PaiFeatureStoreClient::getTask(const GetTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskOutcome(GetTaskResult(outcome.result()));
	else
		return GetTaskOutcome(outcome.error());
}

void PaiFeatureStoreClient::getTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::GetTaskOutcomeCallable PaiFeatureStoreClient::getTaskCallable(const GetTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskOutcome()>>(
			[this, request]()
			{
			return this->getTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListDatasourceFeatureViewsOutcome PaiFeatureStoreClient::listDatasourceFeatureViews(const ListDatasourceFeatureViewsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasourceFeatureViewsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasourceFeatureViewsOutcome(ListDatasourceFeatureViewsResult(outcome.result()));
	else
		return ListDatasourceFeatureViewsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listDatasourceFeatureViewsAsync(const ListDatasourceFeatureViewsRequest& request, const ListDatasourceFeatureViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasourceFeatureViews(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListDatasourceFeatureViewsOutcomeCallable PaiFeatureStoreClient::listDatasourceFeatureViewsCallable(const ListDatasourceFeatureViewsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasourceFeatureViewsOutcome()>>(
			[this, request]()
			{
			return this->listDatasourceFeatureViews(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListDatasourceTablesOutcome PaiFeatureStoreClient::listDatasourceTables(const ListDatasourceTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasourceTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasourceTablesOutcome(ListDatasourceTablesResult(outcome.result()));
	else
		return ListDatasourceTablesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listDatasourceTablesAsync(const ListDatasourceTablesRequest& request, const ListDatasourceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasourceTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListDatasourceTablesOutcomeCallable PaiFeatureStoreClient::listDatasourceTablesCallable(const ListDatasourceTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasourceTablesOutcome()>>(
			[this, request]()
			{
			return this->listDatasourceTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListDatasourcesOutcome PaiFeatureStoreClient::listDatasources(const ListDatasourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasourcesOutcome(ListDatasourcesResult(outcome.result()));
	else
		return ListDatasourcesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listDatasourcesAsync(const ListDatasourcesRequest& request, const ListDatasourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListDatasourcesOutcomeCallable PaiFeatureStoreClient::listDatasourcesCallable(const ListDatasourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasourcesOutcome()>>(
			[this, request]()
			{
			return this->listDatasources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureEntitiesOutcome PaiFeatureStoreClient::listFeatureEntities(const ListFeatureEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureEntitiesOutcome(ListFeatureEntitiesResult(outcome.result()));
	else
		return ListFeatureEntitiesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureEntitiesAsync(const ListFeatureEntitiesRequest& request, const ListFeatureEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureEntitiesOutcomeCallable PaiFeatureStoreClient::listFeatureEntitiesCallable(const ListFeatureEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureEntitiesOutcome()>>(
			[this, request]()
			{
			return this->listFeatureEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureViewFieldRelationshipsOutcome PaiFeatureStoreClient::listFeatureViewFieldRelationships(const ListFeatureViewFieldRelationshipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureViewFieldRelationshipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureViewFieldRelationshipsOutcome(ListFeatureViewFieldRelationshipsResult(outcome.result()));
	else
		return ListFeatureViewFieldRelationshipsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureViewFieldRelationshipsAsync(const ListFeatureViewFieldRelationshipsRequest& request, const ListFeatureViewFieldRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureViewFieldRelationships(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureViewFieldRelationshipsOutcomeCallable PaiFeatureStoreClient::listFeatureViewFieldRelationshipsCallable(const ListFeatureViewFieldRelationshipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureViewFieldRelationshipsOutcome()>>(
			[this, request]()
			{
			return this->listFeatureViewFieldRelationships(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureViewOnlineFeaturesOutcome PaiFeatureStoreClient::listFeatureViewOnlineFeatures(const ListFeatureViewOnlineFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureViewOnlineFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureViewOnlineFeaturesOutcome(ListFeatureViewOnlineFeaturesResult(outcome.result()));
	else
		return ListFeatureViewOnlineFeaturesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureViewOnlineFeaturesAsync(const ListFeatureViewOnlineFeaturesRequest& request, const ListFeatureViewOnlineFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureViewOnlineFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureViewOnlineFeaturesOutcomeCallable PaiFeatureStoreClient::listFeatureViewOnlineFeaturesCallable(const ListFeatureViewOnlineFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureViewOnlineFeaturesOutcome()>>(
			[this, request]()
			{
			return this->listFeatureViewOnlineFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureViewRelationshipsOutcome PaiFeatureStoreClient::listFeatureViewRelationships(const ListFeatureViewRelationshipsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureViewRelationshipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureViewRelationshipsOutcome(ListFeatureViewRelationshipsResult(outcome.result()));
	else
		return ListFeatureViewRelationshipsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureViewRelationshipsAsync(const ListFeatureViewRelationshipsRequest& request, const ListFeatureViewRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureViewRelationships(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureViewRelationshipsOutcomeCallable PaiFeatureStoreClient::listFeatureViewRelationshipsCallable(const ListFeatureViewRelationshipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureViewRelationshipsOutcome()>>(
			[this, request]()
			{
			return this->listFeatureViewRelationships(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListFeatureViewsOutcome PaiFeatureStoreClient::listFeatureViews(const ListFeatureViewsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFeatureViewsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFeatureViewsOutcome(ListFeatureViewsResult(outcome.result()));
	else
		return ListFeatureViewsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listFeatureViewsAsync(const ListFeatureViewsRequest& request, const ListFeatureViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFeatureViews(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListFeatureViewsOutcomeCallable PaiFeatureStoreClient::listFeatureViewsCallable(const ListFeatureViewsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFeatureViewsOutcome()>>(
			[this, request]()
			{
			return this->listFeatureViews(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListInstancesOutcome PaiFeatureStoreClient::listInstances(const ListInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOutcome(ListInstancesResult(outcome.result()));
	else
		return ListInstancesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListInstancesOutcomeCallable PaiFeatureStoreClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListLLMConfigsOutcome PaiFeatureStoreClient::listLLMConfigs(const ListLLMConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLLMConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLLMConfigsOutcome(ListLLMConfigsResult(outcome.result()));
	else
		return ListLLMConfigsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listLLMConfigsAsync(const ListLLMConfigsRequest& request, const ListLLMConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLLMConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListLLMConfigsOutcomeCallable PaiFeatureStoreClient::listLLMConfigsCallable(const ListLLMConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLLMConfigsOutcome()>>(
			[this, request]()
			{
			return this->listLLMConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListLabelTablesOutcome PaiFeatureStoreClient::listLabelTables(const ListLabelTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLabelTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLabelTablesOutcome(ListLabelTablesResult(outcome.result()));
	else
		return ListLabelTablesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listLabelTablesAsync(const ListLabelTablesRequest& request, const ListLabelTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLabelTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListLabelTablesOutcomeCallable PaiFeatureStoreClient::listLabelTablesCallable(const ListLabelTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLabelTablesOutcome()>>(
			[this, request]()
			{
			return this->listLabelTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListModelFeatureAvailableFeaturesOutcome PaiFeatureStoreClient::listModelFeatureAvailableFeatures(const ListModelFeatureAvailableFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListModelFeatureAvailableFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListModelFeatureAvailableFeaturesOutcome(ListModelFeatureAvailableFeaturesResult(outcome.result()));
	else
		return ListModelFeatureAvailableFeaturesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listModelFeatureAvailableFeaturesAsync(const ListModelFeatureAvailableFeaturesRequest& request, const ListModelFeatureAvailableFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listModelFeatureAvailableFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListModelFeatureAvailableFeaturesOutcomeCallable PaiFeatureStoreClient::listModelFeatureAvailableFeaturesCallable(const ListModelFeatureAvailableFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListModelFeatureAvailableFeaturesOutcome()>>(
			[this, request]()
			{
			return this->listModelFeatureAvailableFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListModelFeaturesOutcome PaiFeatureStoreClient::listModelFeatures(const ListModelFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListModelFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListModelFeaturesOutcome(ListModelFeaturesResult(outcome.result()));
	else
		return ListModelFeaturesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listModelFeaturesAsync(const ListModelFeaturesRequest& request, const ListModelFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listModelFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListModelFeaturesOutcomeCallable PaiFeatureStoreClient::listModelFeaturesCallable(const ListModelFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListModelFeaturesOutcome()>>(
			[this, request]()
			{
			return this->listModelFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListProjectFeatureViewsOutcome PaiFeatureStoreClient::listProjectFeatureViews(const ListProjectFeatureViewsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectFeatureViewsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectFeatureViewsOutcome(ListProjectFeatureViewsResult(outcome.result()));
	else
		return ListProjectFeatureViewsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listProjectFeatureViewsAsync(const ListProjectFeatureViewsRequest& request, const ListProjectFeatureViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectFeatureViews(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListProjectFeatureViewsOutcomeCallable PaiFeatureStoreClient::listProjectFeatureViewsCallable(const ListProjectFeatureViewsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectFeatureViewsOutcome()>>(
			[this, request]()
			{
			return this->listProjectFeatureViews(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListProjectFeaturesOutcome PaiFeatureStoreClient::listProjectFeatures(const ListProjectFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectFeaturesOutcome(ListProjectFeaturesResult(outcome.result()));
	else
		return ListProjectFeaturesOutcome(outcome.error());
}

void PaiFeatureStoreClient::listProjectFeaturesAsync(const ListProjectFeaturesRequest& request, const ListProjectFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListProjectFeaturesOutcomeCallable PaiFeatureStoreClient::listProjectFeaturesCallable(const ListProjectFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectFeaturesOutcome()>>(
			[this, request]()
			{
			return this->listProjectFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListProjectsOutcome PaiFeatureStoreClient::listProjects(const ListProjectsRequest &request) const
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

void PaiFeatureStoreClient::listProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListProjectsOutcomeCallable PaiFeatureStoreClient::listProjectsCallable(const ListProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectsOutcome()>>(
			[this, request]()
			{
			return this->listProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListTaskLogsOutcome PaiFeatureStoreClient::listTaskLogs(const ListTaskLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskLogsOutcome(ListTaskLogsResult(outcome.result()));
	else
		return ListTaskLogsOutcome(outcome.error());
}

void PaiFeatureStoreClient::listTaskLogsAsync(const ListTaskLogsRequest& request, const ListTaskLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListTaskLogsOutcomeCallable PaiFeatureStoreClient::listTaskLogsCallable(const ListTaskLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskLogsOutcome()>>(
			[this, request]()
			{
			return this->listTaskLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::ListTasksOutcome PaiFeatureStoreClient::listTasks(const ListTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTasksOutcome(ListTasksResult(outcome.result()));
	else
		return ListTasksOutcome(outcome.error());
}

void PaiFeatureStoreClient::listTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::ListTasksOutcomeCallable PaiFeatureStoreClient::listTasksCallable(const ListTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
			[this, request]()
			{
			return this->listTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::PublishFeatureViewTableOutcome PaiFeatureStoreClient::publishFeatureViewTable(const PublishFeatureViewTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishFeatureViewTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishFeatureViewTableOutcome(PublishFeatureViewTableResult(outcome.result()));
	else
		return PublishFeatureViewTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::publishFeatureViewTableAsync(const PublishFeatureViewTableRequest& request, const PublishFeatureViewTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishFeatureViewTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::PublishFeatureViewTableOutcomeCallable PaiFeatureStoreClient::publishFeatureViewTableCallable(const PublishFeatureViewTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishFeatureViewTableOutcome()>>(
			[this, request]()
			{
			return this->publishFeatureViewTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::StopTaskOutcome PaiFeatureStoreClient::stopTask(const StopTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTaskOutcome(StopTaskResult(outcome.result()));
	else
		return StopTaskOutcome(outcome.error());
}

void PaiFeatureStoreClient::stopTaskAsync(const StopTaskRequest& request, const StopTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::StopTaskOutcomeCallable PaiFeatureStoreClient::stopTaskCallable(const StopTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTaskOutcome()>>(
			[this, request]()
			{
			return this->stopTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateDatasourceOutcome PaiFeatureStoreClient::updateDatasource(const UpdateDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDatasourceOutcome(UpdateDatasourceResult(outcome.result()));
	else
		return UpdateDatasourceOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateDatasourceAsync(const UpdateDatasourceRequest& request, const UpdateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateDatasourceOutcomeCallable PaiFeatureStoreClient::updateDatasourceCallable(const UpdateDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDatasourceOutcome()>>(
			[this, request]()
			{
			return this->updateDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateLLMConfigOutcome PaiFeatureStoreClient::updateLLMConfig(const UpdateLLMConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLLMConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLLMConfigOutcome(UpdateLLMConfigResult(outcome.result()));
	else
		return UpdateLLMConfigOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateLLMConfigAsync(const UpdateLLMConfigRequest& request, const UpdateLLMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLLMConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateLLMConfigOutcomeCallable PaiFeatureStoreClient::updateLLMConfigCallable(const UpdateLLMConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLLMConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLLMConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateLabelTableOutcome PaiFeatureStoreClient::updateLabelTable(const UpdateLabelTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLabelTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLabelTableOutcome(UpdateLabelTableResult(outcome.result()));
	else
		return UpdateLabelTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateLabelTableAsync(const UpdateLabelTableRequest& request, const UpdateLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLabelTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateLabelTableOutcomeCallable PaiFeatureStoreClient::updateLabelTableCallable(const UpdateLabelTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLabelTableOutcome()>>(
			[this, request]()
			{
			return this->updateLabelTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateModelFeatureOutcome PaiFeatureStoreClient::updateModelFeature(const UpdateModelFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateModelFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateModelFeatureOutcome(UpdateModelFeatureResult(outcome.result()));
	else
		return UpdateModelFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateModelFeatureAsync(const UpdateModelFeatureRequest& request, const UpdateModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateModelFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateModelFeatureOutcomeCallable PaiFeatureStoreClient::updateModelFeatureCallable(const UpdateModelFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateModelFeatureOutcome()>>(
			[this, request]()
			{
			return this->updateModelFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateModelFeatureFGFeatureOutcome PaiFeatureStoreClient::updateModelFeatureFGFeature(const UpdateModelFeatureFGFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateModelFeatureFGFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateModelFeatureFGFeatureOutcome(UpdateModelFeatureFGFeatureResult(outcome.result()));
	else
		return UpdateModelFeatureFGFeatureOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateModelFeatureFGFeatureAsync(const UpdateModelFeatureFGFeatureRequest& request, const UpdateModelFeatureFGFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateModelFeatureFGFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateModelFeatureFGFeatureOutcomeCallable PaiFeatureStoreClient::updateModelFeatureFGFeatureCallable(const UpdateModelFeatureFGFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateModelFeatureFGFeatureOutcome()>>(
			[this, request]()
			{
			return this->updateModelFeatureFGFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::UpdateProjectOutcome PaiFeatureStoreClient::updateProject(const UpdateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectOutcome(UpdateProjectResult(outcome.result()));
	else
		return UpdateProjectOutcome(outcome.error());
}

void PaiFeatureStoreClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::UpdateProjectOutcomeCallable PaiFeatureStoreClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PaiFeatureStoreClient::WriteFeatureViewTableOutcome PaiFeatureStoreClient::writeFeatureViewTable(const WriteFeatureViewTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WriteFeatureViewTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WriteFeatureViewTableOutcome(WriteFeatureViewTableResult(outcome.result()));
	else
		return WriteFeatureViewTableOutcome(outcome.error());
}

void PaiFeatureStoreClient::writeFeatureViewTableAsync(const WriteFeatureViewTableRequest& request, const WriteFeatureViewTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, writeFeatureViewTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PaiFeatureStoreClient::WriteFeatureViewTableOutcomeCallable PaiFeatureStoreClient::writeFeatureViewTableCallable(const WriteFeatureViewTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WriteFeatureViewTableOutcome()>>(
			[this, request]()
			{
			return this->writeFeatureViewTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

