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

#include <alibabacloud/oos/OosClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

namespace
{
	const std::string SERVICE_NAME = "oos";
}

OosClient::OosClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "oos");
}

OosClient::OosClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "oos");
}

OosClient::OosClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "oos");
}

OosClient::~OosClient()
{}

OosClient::CancelExecutionOutcome OosClient::cancelExecution(const CancelExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelExecutionOutcome(CancelExecutionResult(outcome.result()));
	else
		return CancelExecutionOutcome(outcome.error());
}

void OosClient::cancelExecutionAsync(const CancelExecutionRequest& request, const CancelExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CancelExecutionOutcomeCallable OosClient::cancelExecutionCallable(const CancelExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelExecutionOutcome()>>(
			[this, request]()
			{
			return this->cancelExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ChangeResourceGroupOutcome OosClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
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

void OosClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ChangeResourceGroupOutcomeCallable OosClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ContinueDeployApplicationGroupOutcome OosClient::continueDeployApplicationGroup(const ContinueDeployApplicationGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinueDeployApplicationGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinueDeployApplicationGroupOutcome(ContinueDeployApplicationGroupResult(outcome.result()));
	else
		return ContinueDeployApplicationGroupOutcome(outcome.error());
}

void OosClient::continueDeployApplicationGroupAsync(const ContinueDeployApplicationGroupRequest& request, const ContinueDeployApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continueDeployApplicationGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ContinueDeployApplicationGroupOutcomeCallable OosClient::continueDeployApplicationGroupCallable(const ContinueDeployApplicationGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinueDeployApplicationGroupOutcome()>>(
			[this, request]()
			{
			return this->continueDeployApplicationGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::CreateApplicationOutcome OosClient::createApplication(const CreateApplicationRequest &request) const
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

void OosClient::createApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CreateApplicationOutcomeCallable OosClient::createApplicationCallable(const CreateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
			[this, request]()
			{
			return this->createApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::CreateApplicationGroupOutcome OosClient::createApplicationGroup(const CreateApplicationGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationGroupOutcome(CreateApplicationGroupResult(outcome.result()));
	else
		return CreateApplicationGroupOutcome(outcome.error());
}

void OosClient::createApplicationGroupAsync(const CreateApplicationGroupRequest& request, const CreateApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CreateApplicationGroupOutcomeCallable OosClient::createApplicationGroupCallable(const CreateApplicationGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationGroupOutcome()>>(
			[this, request]()
			{
			return this->createApplicationGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::CreateOpsItemOutcome OosClient::createOpsItem(const CreateOpsItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOpsItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOpsItemOutcome(CreateOpsItemResult(outcome.result()));
	else
		return CreateOpsItemOutcome(outcome.error());
}

void OosClient::createOpsItemAsync(const CreateOpsItemRequest& request, const CreateOpsItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOpsItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CreateOpsItemOutcomeCallable OosClient::createOpsItemCallable(const CreateOpsItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOpsItemOutcome()>>(
			[this, request]()
			{
			return this->createOpsItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::CreateParameterOutcome OosClient::createParameter(const CreateParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateParameterOutcome(CreateParameterResult(outcome.result()));
	else
		return CreateParameterOutcome(outcome.error());
}

void OosClient::createParameterAsync(const CreateParameterRequest& request, const CreateParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CreateParameterOutcomeCallable OosClient::createParameterCallable(const CreateParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParameterOutcome()>>(
			[this, request]()
			{
			return this->createParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::CreatePatchBaselineOutcome OosClient::createPatchBaseline(const CreatePatchBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePatchBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePatchBaselineOutcome(CreatePatchBaselineResult(outcome.result()));
	else
		return CreatePatchBaselineOutcome(outcome.error());
}

void OosClient::createPatchBaselineAsync(const CreatePatchBaselineRequest& request, const CreatePatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPatchBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CreatePatchBaselineOutcomeCallable OosClient::createPatchBaselineCallable(const CreatePatchBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePatchBaselineOutcome()>>(
			[this, request]()
			{
			return this->createPatchBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::CreateSecretParameterOutcome OosClient::createSecretParameter(const CreateSecretParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecretParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecretParameterOutcome(CreateSecretParameterResult(outcome.result()));
	else
		return CreateSecretParameterOutcome(outcome.error());
}

void OosClient::createSecretParameterAsync(const CreateSecretParameterRequest& request, const CreateSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecretParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CreateSecretParameterOutcomeCallable OosClient::createSecretParameterCallable(const CreateSecretParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecretParameterOutcome()>>(
			[this, request]()
			{
			return this->createSecretParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::CreateStateConfigurationOutcome OosClient::createStateConfiguration(const CreateStateConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStateConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStateConfigurationOutcome(CreateStateConfigurationResult(outcome.result()));
	else
		return CreateStateConfigurationOutcome(outcome.error());
}

void OosClient::createStateConfigurationAsync(const CreateStateConfigurationRequest& request, const CreateStateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStateConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CreateStateConfigurationOutcomeCallable OosClient::createStateConfigurationCallable(const CreateStateConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStateConfigurationOutcome()>>(
			[this, request]()
			{
			return this->createStateConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::CreateTemplateOutcome OosClient::createTemplate(const CreateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTemplateOutcome(CreateTemplateResult(outcome.result()));
	else
		return CreateTemplateOutcome(outcome.error());
}

void OosClient::createTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::CreateTemplateOutcomeCallable OosClient::createTemplateCallable(const CreateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTemplateOutcome()>>(
			[this, request]()
			{
			return this->createTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeleteApplicationOutcome OosClient::deleteApplication(const DeleteApplicationRequest &request) const
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

void OosClient::deleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeleteApplicationOutcomeCallable OosClient::deleteApplicationCallable(const DeleteApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
			[this, request]()
			{
			return this->deleteApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeleteApplicationGroupOutcome OosClient::deleteApplicationGroup(const DeleteApplicationGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationGroupOutcome(DeleteApplicationGroupResult(outcome.result()));
	else
		return DeleteApplicationGroupOutcome(outcome.error());
}

void OosClient::deleteApplicationGroupAsync(const DeleteApplicationGroupRequest& request, const DeleteApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeleteApplicationGroupOutcomeCallable OosClient::deleteApplicationGroupCallable(const DeleteApplicationGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeleteExecutionsOutcome OosClient::deleteExecutions(const DeleteExecutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExecutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExecutionsOutcome(DeleteExecutionsResult(outcome.result()));
	else
		return DeleteExecutionsOutcome(outcome.error());
}

void OosClient::deleteExecutionsAsync(const DeleteExecutionsRequest& request, const DeleteExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExecutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeleteExecutionsOutcomeCallable OosClient::deleteExecutionsCallable(const DeleteExecutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExecutionsOutcome()>>(
			[this, request]()
			{
			return this->deleteExecutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeleteParameterOutcome OosClient::deleteParameter(const DeleteParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteParameterOutcome(DeleteParameterResult(outcome.result()));
	else
		return DeleteParameterOutcome(outcome.error());
}

void OosClient::deleteParameterAsync(const DeleteParameterRequest& request, const DeleteParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeleteParameterOutcomeCallable OosClient::deleteParameterCallable(const DeleteParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteParameterOutcome()>>(
			[this, request]()
			{
			return this->deleteParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeletePatchBaselineOutcome OosClient::deletePatchBaseline(const DeletePatchBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePatchBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePatchBaselineOutcome(DeletePatchBaselineResult(outcome.result()));
	else
		return DeletePatchBaselineOutcome(outcome.error());
}

void OosClient::deletePatchBaselineAsync(const DeletePatchBaselineRequest& request, const DeletePatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePatchBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeletePatchBaselineOutcomeCallable OosClient::deletePatchBaselineCallable(const DeletePatchBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePatchBaselineOutcome()>>(
			[this, request]()
			{
			return this->deletePatchBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeleteSecretParameterOutcome OosClient::deleteSecretParameter(const DeleteSecretParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecretParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecretParameterOutcome(DeleteSecretParameterResult(outcome.result()));
	else
		return DeleteSecretParameterOutcome(outcome.error());
}

void OosClient::deleteSecretParameterAsync(const DeleteSecretParameterRequest& request, const DeleteSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecretParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeleteSecretParameterOutcomeCallable OosClient::deleteSecretParameterCallable(const DeleteSecretParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecretParameterOutcome()>>(
			[this, request]()
			{
			return this->deleteSecretParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeleteStateConfigurationsOutcome OosClient::deleteStateConfigurations(const DeleteStateConfigurationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStateConfigurationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStateConfigurationsOutcome(DeleteStateConfigurationsResult(outcome.result()));
	else
		return DeleteStateConfigurationsOutcome(outcome.error());
}

void OosClient::deleteStateConfigurationsAsync(const DeleteStateConfigurationsRequest& request, const DeleteStateConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStateConfigurations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeleteStateConfigurationsOutcomeCallable OosClient::deleteStateConfigurationsCallable(const DeleteStateConfigurationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStateConfigurationsOutcome()>>(
			[this, request]()
			{
			return this->deleteStateConfigurations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeleteTemplateOutcome OosClient::deleteTemplate(const DeleteTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTemplateOutcome(DeleteTemplateResult(outcome.result()));
	else
		return DeleteTemplateOutcome(outcome.error());
}

void OosClient::deleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeleteTemplateOutcomeCallable OosClient::deleteTemplateCallable(const DeleteTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeleteTemplatesOutcome OosClient::deleteTemplates(const DeleteTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTemplatesOutcome(DeleteTemplatesResult(outcome.result()));
	else
		return DeleteTemplatesOutcome(outcome.error());
}

void OosClient::deleteTemplatesAsync(const DeleteTemplatesRequest& request, const DeleteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeleteTemplatesOutcomeCallable OosClient::deleteTemplatesCallable(const DeleteTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTemplatesOutcome()>>(
			[this, request]()
			{
			return this->deleteTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DeployApplicationGroupOutcome OosClient::deployApplicationGroup(const DeployApplicationGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployApplicationGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployApplicationGroupOutcome(DeployApplicationGroupResult(outcome.result()));
	else
		return DeployApplicationGroupOutcome(outcome.error());
}

void OosClient::deployApplicationGroupAsync(const DeployApplicationGroupRequest& request, const DeployApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployApplicationGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DeployApplicationGroupOutcomeCallable OosClient::deployApplicationGroupCallable(const DeployApplicationGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployApplicationGroupOutcome()>>(
			[this, request]()
			{
			return this->deployApplicationGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::DescribeRegionsOutcome OosClient::describeRegions(const DescribeRegionsRequest &request) const
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

void OosClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::DescribeRegionsOutcomeCallable OosClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GenerateExecutionPolicyOutcome OosClient::generateExecutionPolicy(const GenerateExecutionPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateExecutionPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateExecutionPolicyOutcome(GenerateExecutionPolicyResult(outcome.result()));
	else
		return GenerateExecutionPolicyOutcome(outcome.error());
}

void OosClient::generateExecutionPolicyAsync(const GenerateExecutionPolicyRequest& request, const GenerateExecutionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateExecutionPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GenerateExecutionPolicyOutcomeCallable OosClient::generateExecutionPolicyCallable(const GenerateExecutionPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateExecutionPolicyOutcome()>>(
			[this, request]()
			{
			return this->generateExecutionPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetApplicationOutcome OosClient::getApplication(const GetApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationOutcome(GetApplicationResult(outcome.result()));
	else
		return GetApplicationOutcome(outcome.error());
}

void OosClient::getApplicationAsync(const GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetApplicationOutcomeCallable OosClient::getApplicationCallable(const GetApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationOutcome()>>(
			[this, request]()
			{
			return this->getApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetApplicationGroupOutcome OosClient::getApplicationGroup(const GetApplicationGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationGroupOutcome(GetApplicationGroupResult(outcome.result()));
	else
		return GetApplicationGroupOutcome(outcome.error());
}

void OosClient::getApplicationGroupAsync(const GetApplicationGroupRequest& request, const GetApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetApplicationGroupOutcomeCallable OosClient::getApplicationGroupCallable(const GetApplicationGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationGroupOutcome()>>(
			[this, request]()
			{
			return this->getApplicationGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetExecutionTemplateOutcome OosClient::getExecutionTemplate(const GetExecutionTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetExecutionTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetExecutionTemplateOutcome(GetExecutionTemplateResult(outcome.result()));
	else
		return GetExecutionTemplateOutcome(outcome.error());
}

void OosClient::getExecutionTemplateAsync(const GetExecutionTemplateRequest& request, const GetExecutionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getExecutionTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetExecutionTemplateOutcomeCallable OosClient::getExecutionTemplateCallable(const GetExecutionTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetExecutionTemplateOutcome()>>(
			[this, request]()
			{
			return this->getExecutionTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetInventorySchemaOutcome OosClient::getInventorySchema(const GetInventorySchemaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInventorySchemaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInventorySchemaOutcome(GetInventorySchemaResult(outcome.result()));
	else
		return GetInventorySchemaOutcome(outcome.error());
}

void OosClient::getInventorySchemaAsync(const GetInventorySchemaRequest& request, const GetInventorySchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInventorySchema(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetInventorySchemaOutcomeCallable OosClient::getInventorySchemaCallable(const GetInventorySchemaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInventorySchemaOutcome()>>(
			[this, request]()
			{
			return this->getInventorySchema(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetOpsItemOutcome OosClient::getOpsItem(const GetOpsItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpsItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpsItemOutcome(GetOpsItemResult(outcome.result()));
	else
		return GetOpsItemOutcome(outcome.error());
}

void OosClient::getOpsItemAsync(const GetOpsItemRequest& request, const GetOpsItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpsItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetOpsItemOutcomeCallable OosClient::getOpsItemCallable(const GetOpsItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpsItemOutcome()>>(
			[this, request]()
			{
			return this->getOpsItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetParameterOutcome OosClient::getParameter(const GetParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetParameterOutcome(GetParameterResult(outcome.result()));
	else
		return GetParameterOutcome(outcome.error());
}

void OosClient::getParameterAsync(const GetParameterRequest& request, const GetParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetParameterOutcomeCallable OosClient::getParameterCallable(const GetParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetParameterOutcome()>>(
			[this, request]()
			{
			return this->getParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetParametersOutcome OosClient::getParameters(const GetParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetParametersOutcome(GetParametersResult(outcome.result()));
	else
		return GetParametersOutcome(outcome.error());
}

void OosClient::getParametersAsync(const GetParametersRequest& request, const GetParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetParametersOutcomeCallable OosClient::getParametersCallable(const GetParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetParametersOutcome()>>(
			[this, request]()
			{
			return this->getParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetParametersByPathOutcome OosClient::getParametersByPath(const GetParametersByPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetParametersByPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetParametersByPathOutcome(GetParametersByPathResult(outcome.result()));
	else
		return GetParametersByPathOutcome(outcome.error());
}

void OosClient::getParametersByPathAsync(const GetParametersByPathRequest& request, const GetParametersByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getParametersByPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetParametersByPathOutcomeCallable OosClient::getParametersByPathCallable(const GetParametersByPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetParametersByPathOutcome()>>(
			[this, request]()
			{
			return this->getParametersByPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetPatchBaselineOutcome OosClient::getPatchBaseline(const GetPatchBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPatchBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPatchBaselineOutcome(GetPatchBaselineResult(outcome.result()));
	else
		return GetPatchBaselineOutcome(outcome.error());
}

void OosClient::getPatchBaselineAsync(const GetPatchBaselineRequest& request, const GetPatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPatchBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetPatchBaselineOutcomeCallable OosClient::getPatchBaselineCallable(const GetPatchBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPatchBaselineOutcome()>>(
			[this, request]()
			{
			return this->getPatchBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetSecretParameterOutcome OosClient::getSecretParameter(const GetSecretParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecretParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecretParameterOutcome(GetSecretParameterResult(outcome.result()));
	else
		return GetSecretParameterOutcome(outcome.error());
}

void OosClient::getSecretParameterAsync(const GetSecretParameterRequest& request, const GetSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecretParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetSecretParameterOutcomeCallable OosClient::getSecretParameterCallable(const GetSecretParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecretParameterOutcome()>>(
			[this, request]()
			{
			return this->getSecretParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetSecretParametersOutcome OosClient::getSecretParameters(const GetSecretParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecretParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecretParametersOutcome(GetSecretParametersResult(outcome.result()));
	else
		return GetSecretParametersOutcome(outcome.error());
}

void OosClient::getSecretParametersAsync(const GetSecretParametersRequest& request, const GetSecretParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecretParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetSecretParametersOutcomeCallable OosClient::getSecretParametersCallable(const GetSecretParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecretParametersOutcome()>>(
			[this, request]()
			{
			return this->getSecretParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetSecretParametersByPathOutcome OosClient::getSecretParametersByPath(const GetSecretParametersByPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecretParametersByPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecretParametersByPathOutcome(GetSecretParametersByPathResult(outcome.result()));
	else
		return GetSecretParametersByPathOutcome(outcome.error());
}

void OosClient::getSecretParametersByPathAsync(const GetSecretParametersByPathRequest& request, const GetSecretParametersByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecretParametersByPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetSecretParametersByPathOutcomeCallable OosClient::getSecretParametersByPathCallable(const GetSecretParametersByPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecretParametersByPathOutcome()>>(
			[this, request]()
			{
			return this->getSecretParametersByPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetServiceSettingsOutcome OosClient::getServiceSettings(const GetServiceSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceSettingsOutcome(GetServiceSettingsResult(outcome.result()));
	else
		return GetServiceSettingsOutcome(outcome.error());
}

void OosClient::getServiceSettingsAsync(const GetServiceSettingsRequest& request, const GetServiceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetServiceSettingsOutcomeCallable OosClient::getServiceSettingsCallable(const GetServiceSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceSettingsOutcome()>>(
			[this, request]()
			{
			return this->getServiceSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::GetTemplateOutcome OosClient::getTemplate(const GetTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTemplateOutcome(GetTemplateResult(outcome.result()));
	else
		return GetTemplateOutcome(outcome.error());
}

void OosClient::getTemplateAsync(const GetTemplateRequest& request, const GetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::GetTemplateOutcomeCallable OosClient::getTemplateCallable(const GetTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTemplateOutcome()>>(
			[this, request]()
			{
			return this->getTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListActionsOutcome OosClient::listActions(const ListActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListActionsOutcome(ListActionsResult(outcome.result()));
	else
		return ListActionsOutcome(outcome.error());
}

void OosClient::listActionsAsync(const ListActionsRequest& request, const ListActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListActionsOutcomeCallable OosClient::listActionsCallable(const ListActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListActionsOutcome()>>(
			[this, request]()
			{
			return this->listActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListApplicationGroupsOutcome OosClient::listApplicationGroups(const ListApplicationGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationGroupsOutcome(ListApplicationGroupsResult(outcome.result()));
	else
		return ListApplicationGroupsOutcome(outcome.error());
}

void OosClient::listApplicationGroupsAsync(const ListApplicationGroupsRequest& request, const ListApplicationGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListApplicationGroupsOutcomeCallable OosClient::listApplicationGroupsCallable(const ListApplicationGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationGroupsOutcome()>>(
			[this, request]()
			{
			return this->listApplicationGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListApplicationsOutcome OosClient::listApplications(const ListApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsOutcome(ListApplicationsResult(outcome.result()));
	else
		return ListApplicationsOutcome(outcome.error());
}

void OosClient::listApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListApplicationsOutcomeCallable OosClient::listApplicationsCallable(const ListApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListExecutionLogsOutcome OosClient::listExecutionLogs(const ListExecutionLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionLogsOutcome(ListExecutionLogsResult(outcome.result()));
	else
		return ListExecutionLogsOutcome(outcome.error());
}

void OosClient::listExecutionLogsAsync(const ListExecutionLogsRequest& request, const ListExecutionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutionLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListExecutionLogsOutcomeCallable OosClient::listExecutionLogsCallable(const ListExecutionLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionLogsOutcome()>>(
			[this, request]()
			{
			return this->listExecutionLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListExecutionRiskyTasksOutcome OosClient::listExecutionRiskyTasks(const ListExecutionRiskyTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionRiskyTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionRiskyTasksOutcome(ListExecutionRiskyTasksResult(outcome.result()));
	else
		return ListExecutionRiskyTasksOutcome(outcome.error());
}

void OosClient::listExecutionRiskyTasksAsync(const ListExecutionRiskyTasksRequest& request, const ListExecutionRiskyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutionRiskyTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListExecutionRiskyTasksOutcomeCallable OosClient::listExecutionRiskyTasksCallable(const ListExecutionRiskyTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionRiskyTasksOutcome()>>(
			[this, request]()
			{
			return this->listExecutionRiskyTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListExecutionsOutcome OosClient::listExecutions(const ListExecutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionsOutcome(ListExecutionsResult(outcome.result()));
	else
		return ListExecutionsOutcome(outcome.error());
}

void OosClient::listExecutionsAsync(const ListExecutionsRequest& request, const ListExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListExecutionsOutcomeCallable OosClient::listExecutionsCallable(const ListExecutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionsOutcome()>>(
			[this, request]()
			{
			return this->listExecutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListInstancePatchStatesOutcome OosClient::listInstancePatchStates(const ListInstancePatchStatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancePatchStatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancePatchStatesOutcome(ListInstancePatchStatesResult(outcome.result()));
	else
		return ListInstancePatchStatesOutcome(outcome.error());
}

void OosClient::listInstancePatchStatesAsync(const ListInstancePatchStatesRequest& request, const ListInstancePatchStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancePatchStates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListInstancePatchStatesOutcomeCallable OosClient::listInstancePatchStatesCallable(const ListInstancePatchStatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancePatchStatesOutcome()>>(
			[this, request]()
			{
			return this->listInstancePatchStates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListInstancePatchesOutcome OosClient::listInstancePatches(const ListInstancePatchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancePatchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancePatchesOutcome(ListInstancePatchesResult(outcome.result()));
	else
		return ListInstancePatchesOutcome(outcome.error());
}

void OosClient::listInstancePatchesAsync(const ListInstancePatchesRequest& request, const ListInstancePatchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancePatches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListInstancePatchesOutcomeCallable OosClient::listInstancePatchesCallable(const ListInstancePatchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancePatchesOutcome()>>(
			[this, request]()
			{
			return this->listInstancePatches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListInventoryEntriesOutcome OosClient::listInventoryEntries(const ListInventoryEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInventoryEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInventoryEntriesOutcome(ListInventoryEntriesResult(outcome.result()));
	else
		return ListInventoryEntriesOutcome(outcome.error());
}

void OosClient::listInventoryEntriesAsync(const ListInventoryEntriesRequest& request, const ListInventoryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInventoryEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListInventoryEntriesOutcomeCallable OosClient::listInventoryEntriesCallable(const ListInventoryEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInventoryEntriesOutcome()>>(
			[this, request]()
			{
			return this->listInventoryEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListOpsItemsOutcome OosClient::listOpsItems(const ListOpsItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOpsItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOpsItemsOutcome(ListOpsItemsResult(outcome.result()));
	else
		return ListOpsItemsOutcome(outcome.error());
}

void OosClient::listOpsItemsAsync(const ListOpsItemsRequest& request, const ListOpsItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOpsItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListOpsItemsOutcomeCallable OosClient::listOpsItemsCallable(const ListOpsItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOpsItemsOutcome()>>(
			[this, request]()
			{
			return this->listOpsItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListParameterVersionsOutcome OosClient::listParameterVersions(const ListParameterVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListParameterVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListParameterVersionsOutcome(ListParameterVersionsResult(outcome.result()));
	else
		return ListParameterVersionsOutcome(outcome.error());
}

void OosClient::listParameterVersionsAsync(const ListParameterVersionsRequest& request, const ListParameterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listParameterVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListParameterVersionsOutcomeCallable OosClient::listParameterVersionsCallable(const ListParameterVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListParameterVersionsOutcome()>>(
			[this, request]()
			{
			return this->listParameterVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListParametersOutcome OosClient::listParameters(const ListParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListParametersOutcome(ListParametersResult(outcome.result()));
	else
		return ListParametersOutcome(outcome.error());
}

void OosClient::listParametersAsync(const ListParametersRequest& request, const ListParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListParametersOutcomeCallable OosClient::listParametersCallable(const ListParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListParametersOutcome()>>(
			[this, request]()
			{
			return this->listParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListPatchBaselinesOutcome OosClient::listPatchBaselines(const ListPatchBaselinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPatchBaselinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPatchBaselinesOutcome(ListPatchBaselinesResult(outcome.result()));
	else
		return ListPatchBaselinesOutcome(outcome.error());
}

void OosClient::listPatchBaselinesAsync(const ListPatchBaselinesRequest& request, const ListPatchBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPatchBaselines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListPatchBaselinesOutcomeCallable OosClient::listPatchBaselinesCallable(const ListPatchBaselinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPatchBaselinesOutcome()>>(
			[this, request]()
			{
			return this->listPatchBaselines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListResourceExecutionStatusOutcome OosClient::listResourceExecutionStatus(const ListResourceExecutionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceExecutionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceExecutionStatusOutcome(ListResourceExecutionStatusResult(outcome.result()));
	else
		return ListResourceExecutionStatusOutcome(outcome.error());
}

void OosClient::listResourceExecutionStatusAsync(const ListResourceExecutionStatusRequest& request, const ListResourceExecutionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceExecutionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListResourceExecutionStatusOutcomeCallable OosClient::listResourceExecutionStatusCallable(const ListResourceExecutionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceExecutionStatusOutcome()>>(
			[this, request]()
			{
			return this->listResourceExecutionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListSecretParameterVersionsOutcome OosClient::listSecretParameterVersions(const ListSecretParameterVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecretParameterVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecretParameterVersionsOutcome(ListSecretParameterVersionsResult(outcome.result()));
	else
		return ListSecretParameterVersionsOutcome(outcome.error());
}

void OosClient::listSecretParameterVersionsAsync(const ListSecretParameterVersionsRequest& request, const ListSecretParameterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecretParameterVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListSecretParameterVersionsOutcomeCallable OosClient::listSecretParameterVersionsCallable(const ListSecretParameterVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecretParameterVersionsOutcome()>>(
			[this, request]()
			{
			return this->listSecretParameterVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListSecretParametersOutcome OosClient::listSecretParameters(const ListSecretParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecretParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecretParametersOutcome(ListSecretParametersResult(outcome.result()));
	else
		return ListSecretParametersOutcome(outcome.error());
}

void OosClient::listSecretParametersAsync(const ListSecretParametersRequest& request, const ListSecretParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecretParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListSecretParametersOutcomeCallable OosClient::listSecretParametersCallable(const ListSecretParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecretParametersOutcome()>>(
			[this, request]()
			{
			return this->listSecretParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListStateConfigurationsOutcome OosClient::listStateConfigurations(const ListStateConfigurationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStateConfigurationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStateConfigurationsOutcome(ListStateConfigurationsResult(outcome.result()));
	else
		return ListStateConfigurationsOutcome(outcome.error());
}

void OosClient::listStateConfigurationsAsync(const ListStateConfigurationsRequest& request, const ListStateConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStateConfigurations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListStateConfigurationsOutcomeCallable OosClient::listStateConfigurationsCallable(const ListStateConfigurationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStateConfigurationsOutcome()>>(
			[this, request]()
			{
			return this->listStateConfigurations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListTagKeysOutcome OosClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void OosClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListTagKeysOutcomeCallable OosClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListTagResourcesOutcome OosClient::listTagResources(const ListTagResourcesRequest &request) const
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

void OosClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListTagResourcesOutcomeCallable OosClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListTagValuesOutcome OosClient::listTagValues(const ListTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagValuesOutcome(ListTagValuesResult(outcome.result()));
	else
		return ListTagValuesOutcome(outcome.error());
}

void OosClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListTagValuesOutcomeCallable OosClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListTaskExecutionsOutcome OosClient::listTaskExecutions(const ListTaskExecutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskExecutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskExecutionsOutcome(ListTaskExecutionsResult(outcome.result()));
	else
		return ListTaskExecutionsOutcome(outcome.error());
}

void OosClient::listTaskExecutionsAsync(const ListTaskExecutionsRequest& request, const ListTaskExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskExecutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListTaskExecutionsOutcomeCallable OosClient::listTaskExecutionsCallable(const ListTaskExecutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskExecutionsOutcome()>>(
			[this, request]()
			{
			return this->listTaskExecutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListTemplateVersionsOutcome OosClient::listTemplateVersions(const ListTemplateVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTemplateVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTemplateVersionsOutcome(ListTemplateVersionsResult(outcome.result()));
	else
		return ListTemplateVersionsOutcome(outcome.error());
}

void OosClient::listTemplateVersionsAsync(const ListTemplateVersionsRequest& request, const ListTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTemplateVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListTemplateVersionsOutcomeCallable OosClient::listTemplateVersionsCallable(const ListTemplateVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTemplateVersionsOutcome()>>(
			[this, request]()
			{
			return this->listTemplateVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ListTemplatesOutcome OosClient::listTemplates(const ListTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTemplatesOutcome(ListTemplatesResult(outcome.result()));
	else
		return ListTemplatesOutcome(outcome.error());
}

void OosClient::listTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ListTemplatesOutcomeCallable OosClient::listTemplatesCallable(const ListTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::NotifyExecutionOutcome OosClient::notifyExecution(const NotifyExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NotifyExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NotifyExecutionOutcome(NotifyExecutionResult(outcome.result()));
	else
		return NotifyExecutionOutcome(outcome.error());
}

void OosClient::notifyExecutionAsync(const NotifyExecutionRequest& request, const NotifyExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, notifyExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::NotifyExecutionOutcomeCallable OosClient::notifyExecutionCallable(const NotifyExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NotifyExecutionOutcome()>>(
			[this, request]()
			{
			return this->notifyExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::RegisterDefaultPatchBaselineOutcome OosClient::registerDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterDefaultPatchBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterDefaultPatchBaselineOutcome(RegisterDefaultPatchBaselineResult(outcome.result()));
	else
		return RegisterDefaultPatchBaselineOutcome(outcome.error());
}

void OosClient::registerDefaultPatchBaselineAsync(const RegisterDefaultPatchBaselineRequest& request, const RegisterDefaultPatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerDefaultPatchBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::RegisterDefaultPatchBaselineOutcomeCallable OosClient::registerDefaultPatchBaselineCallable(const RegisterDefaultPatchBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterDefaultPatchBaselineOutcome()>>(
			[this, request]()
			{
			return this->registerDefaultPatchBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::SearchInventoryOutcome OosClient::searchInventory(const SearchInventoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchInventoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchInventoryOutcome(SearchInventoryResult(outcome.result()));
	else
		return SearchInventoryOutcome(outcome.error());
}

void OosClient::searchInventoryAsync(const SearchInventoryRequest& request, const SearchInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchInventory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::SearchInventoryOutcomeCallable OosClient::searchInventoryCallable(const SearchInventoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchInventoryOutcome()>>(
			[this, request]()
			{
			return this->searchInventory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::SetServiceSettingsOutcome OosClient::setServiceSettings(const SetServiceSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetServiceSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetServiceSettingsOutcome(SetServiceSettingsResult(outcome.result()));
	else
		return SetServiceSettingsOutcome(outcome.error());
}

void OosClient::setServiceSettingsAsync(const SetServiceSettingsRequest& request, const SetServiceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setServiceSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::SetServiceSettingsOutcomeCallable OosClient::setServiceSettingsCallable(const SetServiceSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetServiceSettingsOutcome()>>(
			[this, request]()
			{
			return this->setServiceSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::StartExecutionOutcome OosClient::startExecution(const StartExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartExecutionOutcome(StartExecutionResult(outcome.result()));
	else
		return StartExecutionOutcome(outcome.error());
}

void OosClient::startExecutionAsync(const StartExecutionRequest& request, const StartExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::StartExecutionOutcomeCallable OosClient::startExecutionCallable(const StartExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartExecutionOutcome()>>(
			[this, request]()
			{
			return this->startExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::TagResourcesOutcome OosClient::tagResources(const TagResourcesRequest &request) const
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

void OosClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::TagResourcesOutcomeCallable OosClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::TriggerExecutionOutcome OosClient::triggerExecution(const TriggerExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerExecutionOutcome(TriggerExecutionResult(outcome.result()));
	else
		return TriggerExecutionOutcome(outcome.error());
}

void OosClient::triggerExecutionAsync(const TriggerExecutionRequest& request, const TriggerExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::TriggerExecutionOutcomeCallable OosClient::triggerExecutionCallable(const TriggerExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerExecutionOutcome()>>(
			[this, request]()
			{
			return this->triggerExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UntagResourcesOutcome OosClient::untagResources(const UntagResourcesRequest &request) const
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

void OosClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UntagResourcesOutcomeCallable OosClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdateApplicationOutcome OosClient::updateApplication(const UpdateApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationOutcome(UpdateApplicationResult(outcome.result()));
	else
		return UpdateApplicationOutcome(outcome.error());
}

void OosClient::updateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdateApplicationOutcomeCallable OosClient::updateApplicationCallable(const UpdateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationOutcome()>>(
			[this, request]()
			{
			return this->updateApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdateApplicationGroupOutcome OosClient::updateApplicationGroup(const UpdateApplicationGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationGroupOutcome(UpdateApplicationGroupResult(outcome.result()));
	else
		return UpdateApplicationGroupOutcome(outcome.error());
}

void OosClient::updateApplicationGroupAsync(const UpdateApplicationGroupRequest& request, const UpdateApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdateApplicationGroupOutcomeCallable OosClient::updateApplicationGroupCallable(const UpdateApplicationGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationGroupOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdateExecutionOutcome OosClient::updateExecution(const UpdateExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateExecutionOutcome(UpdateExecutionResult(outcome.result()));
	else
		return UpdateExecutionOutcome(outcome.error());
}

void OosClient::updateExecutionAsync(const UpdateExecutionRequest& request, const UpdateExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdateExecutionOutcomeCallable OosClient::updateExecutionCallable(const UpdateExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateExecutionOutcome()>>(
			[this, request]()
			{
			return this->updateExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdateOpsItemOutcome OosClient::updateOpsItem(const UpdateOpsItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOpsItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOpsItemOutcome(UpdateOpsItemResult(outcome.result()));
	else
		return UpdateOpsItemOutcome(outcome.error());
}

void OosClient::updateOpsItemAsync(const UpdateOpsItemRequest& request, const UpdateOpsItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOpsItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdateOpsItemOutcomeCallable OosClient::updateOpsItemCallable(const UpdateOpsItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOpsItemOutcome()>>(
			[this, request]()
			{
			return this->updateOpsItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdateParameterOutcome OosClient::updateParameter(const UpdateParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateParameterOutcome(UpdateParameterResult(outcome.result()));
	else
		return UpdateParameterOutcome(outcome.error());
}

void OosClient::updateParameterAsync(const UpdateParameterRequest& request, const UpdateParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdateParameterOutcomeCallable OosClient::updateParameterCallable(const UpdateParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateParameterOutcome()>>(
			[this, request]()
			{
			return this->updateParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdatePatchBaselineOutcome OosClient::updatePatchBaseline(const UpdatePatchBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePatchBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePatchBaselineOutcome(UpdatePatchBaselineResult(outcome.result()));
	else
		return UpdatePatchBaselineOutcome(outcome.error());
}

void OosClient::updatePatchBaselineAsync(const UpdatePatchBaselineRequest& request, const UpdatePatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePatchBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdatePatchBaselineOutcomeCallable OosClient::updatePatchBaselineCallable(const UpdatePatchBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePatchBaselineOutcome()>>(
			[this, request]()
			{
			return this->updatePatchBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdateSecretParameterOutcome OosClient::updateSecretParameter(const UpdateSecretParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecretParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecretParameterOutcome(UpdateSecretParameterResult(outcome.result()));
	else
		return UpdateSecretParameterOutcome(outcome.error());
}

void OosClient::updateSecretParameterAsync(const UpdateSecretParameterRequest& request, const UpdateSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecretParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdateSecretParameterOutcomeCallable OosClient::updateSecretParameterCallable(const UpdateSecretParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecretParameterOutcome()>>(
			[this, request]()
			{
			return this->updateSecretParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdateStateConfigurationOutcome OosClient::updateStateConfiguration(const UpdateStateConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStateConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStateConfigurationOutcome(UpdateStateConfigurationResult(outcome.result()));
	else
		return UpdateStateConfigurationOutcome(outcome.error());
}

void OosClient::updateStateConfigurationAsync(const UpdateStateConfigurationRequest& request, const UpdateStateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStateConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdateStateConfigurationOutcomeCallable OosClient::updateStateConfigurationCallable(const UpdateStateConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStateConfigurationOutcome()>>(
			[this, request]()
			{
			return this->updateStateConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::UpdateTemplateOutcome OosClient::updateTemplate(const UpdateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTemplateOutcome(UpdateTemplateResult(outcome.result()));
	else
		return UpdateTemplateOutcome(outcome.error());
}

void OosClient::updateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::UpdateTemplateOutcomeCallable OosClient::updateTemplateCallable(const UpdateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OosClient::ValidateTemplateContentOutcome OosClient::validateTemplateContent(const ValidateTemplateContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateTemplateContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateTemplateContentOutcome(ValidateTemplateContentResult(outcome.result()));
	else
		return ValidateTemplateContentOutcome(outcome.error());
}

void OosClient::validateTemplateContentAsync(const ValidateTemplateContentRequest& request, const ValidateTemplateContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateTemplateContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OosClient::ValidateTemplateContentOutcomeCallable OosClient::validateTemplateContentCallable(const ValidateTemplateContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateTemplateContentOutcome()>>(
			[this, request]()
			{
			return this->validateTemplateContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

