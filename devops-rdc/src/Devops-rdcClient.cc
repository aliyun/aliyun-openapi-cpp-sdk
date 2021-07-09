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

#include <alibabacloud/devops-rdc/Devops_rdcClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

namespace
{
	const std::string SERVICE_NAME = "devops-rdc";
}

Devops_rdcClient::Devops_rdcClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Devops_rdcClient::Devops_rdcClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Devops_rdcClient::Devops_rdcClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Devops_rdcClient::~Devops_rdcClient()
{}

Devops_rdcClient::AddCodeupSourceToPipelineOutcome Devops_rdcClient::addCodeupSourceToPipeline(const AddCodeupSourceToPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCodeupSourceToPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCodeupSourceToPipelineOutcome(AddCodeupSourceToPipelineResult(outcome.result()));
	else
		return AddCodeupSourceToPipelineOutcome(outcome.error());
}

void Devops_rdcClient::addCodeupSourceToPipelineAsync(const AddCodeupSourceToPipelineRequest& request, const AddCodeupSourceToPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCodeupSourceToPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::AddCodeupSourceToPipelineOutcomeCallable Devops_rdcClient::addCodeupSourceToPipelineCallable(const AddCodeupSourceToPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCodeupSourceToPipelineOutcome()>>(
			[this, request]()
			{
			return this->addCodeupSourceToPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::BatchInsertMembersOutcome Devops_rdcClient::batchInsertMembers(const BatchInsertMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchInsertMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchInsertMembersOutcome(BatchInsertMembersResult(outcome.result()));
	else
		return BatchInsertMembersOutcome(outcome.error());
}

void Devops_rdcClient::batchInsertMembersAsync(const BatchInsertMembersRequest& request, const BatchInsertMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchInsertMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::BatchInsertMembersOutcomeCallable Devops_rdcClient::batchInsertMembersCallable(const BatchInsertMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchInsertMembersOutcome()>>(
			[this, request]()
			{
			return this->batchInsertMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CancelPipelineOutcome Devops_rdcClient::cancelPipeline(const CancelPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPipelineOutcome(CancelPipelineResult(outcome.result()));
	else
		return CancelPipelineOutcome(outcome.error());
}

void Devops_rdcClient::cancelPipelineAsync(const CancelPipelineRequest& request, const CancelPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CancelPipelineOutcomeCallable Devops_rdcClient::cancelPipelineCallable(const CancelPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPipelineOutcome()>>(
			[this, request]()
			{
			return this->cancelPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CheckAliyunAccountExistsOutcome Devops_rdcClient::checkAliyunAccountExists(const CheckAliyunAccountExistsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAliyunAccountExistsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAliyunAccountExistsOutcome(CheckAliyunAccountExistsResult(outcome.result()));
	else
		return CheckAliyunAccountExistsOutcome(outcome.error());
}

void Devops_rdcClient::checkAliyunAccountExistsAsync(const CheckAliyunAccountExistsRequest& request, const CheckAliyunAccountExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAliyunAccountExists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CheckAliyunAccountExistsOutcomeCallable Devops_rdcClient::checkAliyunAccountExistsCallable(const CheckAliyunAccountExistsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAliyunAccountExistsOutcome()>>(
			[this, request]()
			{
			return this->checkAliyunAccountExists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateCommonGroupOutcome Devops_rdcClient::createCommonGroup(const CreateCommonGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommonGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommonGroupOutcome(CreateCommonGroupResult(outcome.result()));
	else
		return CreateCommonGroupOutcome(outcome.error());
}

void Devops_rdcClient::createCommonGroupAsync(const CreateCommonGroupRequest& request, const CreateCommonGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCommonGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateCommonGroupOutcomeCallable Devops_rdcClient::createCommonGroupCallable(const CreateCommonGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommonGroupOutcome()>>(
			[this, request]()
			{
			return this->createCommonGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateCredentialOutcome Devops_rdcClient::createCredential(const CreateCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCredentialOutcome(CreateCredentialResult(outcome.result()));
	else
		return CreateCredentialOutcome(outcome.error());
}

void Devops_rdcClient::createCredentialAsync(const CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateCredentialOutcomeCallable Devops_rdcClient::createCredentialCallable(const CreateCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCredentialOutcome()>>(
			[this, request]()
			{
			return this->createCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateDevopsOrganizationOutcome Devops_rdcClient::createDevopsOrganization(const CreateDevopsOrganizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDevopsOrganizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDevopsOrganizationOutcome(CreateDevopsOrganizationResult(outcome.result()));
	else
		return CreateDevopsOrganizationOutcome(outcome.error());
}

void Devops_rdcClient::createDevopsOrganizationAsync(const CreateDevopsOrganizationRequest& request, const CreateDevopsOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDevopsOrganization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateDevopsOrganizationOutcomeCallable Devops_rdcClient::createDevopsOrganizationCallable(const CreateDevopsOrganizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDevopsOrganizationOutcome()>>(
			[this, request]()
			{
			return this->createDevopsOrganization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateDevopsProjectOutcome Devops_rdcClient::createDevopsProject(const CreateDevopsProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDevopsProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDevopsProjectOutcome(CreateDevopsProjectResult(outcome.result()));
	else
		return CreateDevopsProjectOutcome(outcome.error());
}

void Devops_rdcClient::createDevopsProjectAsync(const CreateDevopsProjectRequest& request, const CreateDevopsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDevopsProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateDevopsProjectOutcomeCallable Devops_rdcClient::createDevopsProjectCallable(const CreateDevopsProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDevopsProjectOutcome()>>(
			[this, request]()
			{
			return this->createDevopsProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateDevopsProjectSprintOutcome Devops_rdcClient::createDevopsProjectSprint(const CreateDevopsProjectSprintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDevopsProjectSprintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDevopsProjectSprintOutcome(CreateDevopsProjectSprintResult(outcome.result()));
	else
		return CreateDevopsProjectSprintOutcome(outcome.error());
}

void Devops_rdcClient::createDevopsProjectSprintAsync(const CreateDevopsProjectSprintRequest& request, const CreateDevopsProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDevopsProjectSprint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateDevopsProjectSprintOutcomeCallable Devops_rdcClient::createDevopsProjectSprintCallable(const CreateDevopsProjectSprintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDevopsProjectSprintOutcome()>>(
			[this, request]()
			{
			return this->createDevopsProjectSprint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateDevopsProjectTaskOutcome Devops_rdcClient::createDevopsProjectTask(const CreateDevopsProjectTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDevopsProjectTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDevopsProjectTaskOutcome(CreateDevopsProjectTaskResult(outcome.result()));
	else
		return CreateDevopsProjectTaskOutcome(outcome.error());
}

void Devops_rdcClient::createDevopsProjectTaskAsync(const CreateDevopsProjectTaskRequest& request, const CreateDevopsProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDevopsProjectTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateDevopsProjectTaskOutcomeCallable Devops_rdcClient::createDevopsProjectTaskCallable(const CreateDevopsProjectTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDevopsProjectTaskOutcome()>>(
			[this, request]()
			{
			return this->createDevopsProjectTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreatePipelineOutcome Devops_rdcClient::createPipeline(const CreatePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePipelineOutcome(CreatePipelineResult(outcome.result()));
	else
		return CreatePipelineOutcome(outcome.error());
}

void Devops_rdcClient::createPipelineAsync(const CreatePipelineRequest& request, const CreatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreatePipelineOutcomeCallable Devops_rdcClient::createPipelineCallable(const CreatePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePipelineOutcome()>>(
			[this, request]()
			{
			return this->createPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreatePipelineFromTemplateOutcome Devops_rdcClient::createPipelineFromTemplate(const CreatePipelineFromTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePipelineFromTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePipelineFromTemplateOutcome(CreatePipelineFromTemplateResult(outcome.result()));
	else
		return CreatePipelineFromTemplateOutcome(outcome.error());
}

void Devops_rdcClient::createPipelineFromTemplateAsync(const CreatePipelineFromTemplateRequest& request, const CreatePipelineFromTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPipelineFromTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreatePipelineFromTemplateOutcomeCallable Devops_rdcClient::createPipelineFromTemplateCallable(const CreatePipelineFromTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePipelineFromTemplateOutcome()>>(
			[this, request]()
			{
			return this->createPipelineFromTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::CreateServiceConnectionOutcome Devops_rdcClient::createServiceConnection(const CreateServiceConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceConnectionOutcome(CreateServiceConnectionResult(outcome.result()));
	else
		return CreateServiceConnectionOutcome(outcome.error());
}

void Devops_rdcClient::createServiceConnectionAsync(const CreateServiceConnectionRequest& request, const CreateServiceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::CreateServiceConnectionOutcomeCallable Devops_rdcClient::createServiceConnectionCallable(const CreateServiceConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceConnectionOutcome()>>(
			[this, request]()
			{
			return this->createServiceConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::DeleteCommonGroupOutcome Devops_rdcClient::deleteCommonGroup(const DeleteCommonGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCommonGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCommonGroupOutcome(DeleteCommonGroupResult(outcome.result()));
	else
		return DeleteCommonGroupOutcome(outcome.error());
}

void Devops_rdcClient::deleteCommonGroupAsync(const DeleteCommonGroupRequest& request, const DeleteCommonGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCommonGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::DeleteCommonGroupOutcomeCallable Devops_rdcClient::deleteCommonGroupCallable(const DeleteCommonGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCommonGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteCommonGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::DeleteDevopsOrganizationOutcome Devops_rdcClient::deleteDevopsOrganization(const DeleteDevopsOrganizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevopsOrganizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevopsOrganizationOutcome(DeleteDevopsOrganizationResult(outcome.result()));
	else
		return DeleteDevopsOrganizationOutcome(outcome.error());
}

void Devops_rdcClient::deleteDevopsOrganizationAsync(const DeleteDevopsOrganizationRequest& request, const DeleteDevopsOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevopsOrganization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::DeleteDevopsOrganizationOutcomeCallable Devops_rdcClient::deleteDevopsOrganizationCallable(const DeleteDevopsOrganizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevopsOrganizationOutcome()>>(
			[this, request]()
			{
			return this->deleteDevopsOrganization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::DeleteDevopsOrganizationMembersOutcome Devops_rdcClient::deleteDevopsOrganizationMembers(const DeleteDevopsOrganizationMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevopsOrganizationMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevopsOrganizationMembersOutcome(DeleteDevopsOrganizationMembersResult(outcome.result()));
	else
		return DeleteDevopsOrganizationMembersOutcome(outcome.error());
}

void Devops_rdcClient::deleteDevopsOrganizationMembersAsync(const DeleteDevopsOrganizationMembersRequest& request, const DeleteDevopsOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevopsOrganizationMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::DeleteDevopsOrganizationMembersOutcomeCallable Devops_rdcClient::deleteDevopsOrganizationMembersCallable(const DeleteDevopsOrganizationMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevopsOrganizationMembersOutcome()>>(
			[this, request]()
			{
			return this->deleteDevopsOrganizationMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::DeleteDevopsProjectOutcome Devops_rdcClient::deleteDevopsProject(const DeleteDevopsProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevopsProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevopsProjectOutcome(DeleteDevopsProjectResult(outcome.result()));
	else
		return DeleteDevopsProjectOutcome(outcome.error());
}

void Devops_rdcClient::deleteDevopsProjectAsync(const DeleteDevopsProjectRequest& request, const DeleteDevopsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevopsProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::DeleteDevopsProjectOutcomeCallable Devops_rdcClient::deleteDevopsProjectCallable(const DeleteDevopsProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevopsProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteDevopsProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::DeleteDevopsProjectMembersOutcome Devops_rdcClient::deleteDevopsProjectMembers(const DeleteDevopsProjectMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevopsProjectMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevopsProjectMembersOutcome(DeleteDevopsProjectMembersResult(outcome.result()));
	else
		return DeleteDevopsProjectMembersOutcome(outcome.error());
}

void Devops_rdcClient::deleteDevopsProjectMembersAsync(const DeleteDevopsProjectMembersRequest& request, const DeleteDevopsProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevopsProjectMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::DeleteDevopsProjectMembersOutcomeCallable Devops_rdcClient::deleteDevopsProjectMembersCallable(const DeleteDevopsProjectMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevopsProjectMembersOutcome()>>(
			[this, request]()
			{
			return this->deleteDevopsProjectMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::DeleteDevopsProjectSprintOutcome Devops_rdcClient::deleteDevopsProjectSprint(const DeleteDevopsProjectSprintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevopsProjectSprintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevopsProjectSprintOutcome(DeleteDevopsProjectSprintResult(outcome.result()));
	else
		return DeleteDevopsProjectSprintOutcome(outcome.error());
}

void Devops_rdcClient::deleteDevopsProjectSprintAsync(const DeleteDevopsProjectSprintRequest& request, const DeleteDevopsProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevopsProjectSprint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::DeleteDevopsProjectSprintOutcomeCallable Devops_rdcClient::deleteDevopsProjectSprintCallable(const DeleteDevopsProjectSprintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevopsProjectSprintOutcome()>>(
			[this, request]()
			{
			return this->deleteDevopsProjectSprint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::DeleteDevopsProjectTaskOutcome Devops_rdcClient::deleteDevopsProjectTask(const DeleteDevopsProjectTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevopsProjectTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevopsProjectTaskOutcome(DeleteDevopsProjectTaskResult(outcome.result()));
	else
		return DeleteDevopsProjectTaskOutcome(outcome.error());
}

void Devops_rdcClient::deleteDevopsProjectTaskAsync(const DeleteDevopsProjectTaskRequest& request, const DeleteDevopsProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevopsProjectTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::DeleteDevopsProjectTaskOutcomeCallable Devops_rdcClient::deleteDevopsProjectTaskCallable(const DeleteDevopsProjectTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevopsProjectTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteDevopsProjectTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::DeletePipelineMemberOutcome Devops_rdcClient::deletePipelineMember(const DeletePipelineMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePipelineMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePipelineMemberOutcome(DeletePipelineMemberResult(outcome.result()));
	else
		return DeletePipelineMemberOutcome(outcome.error());
}

void Devops_rdcClient::deletePipelineMemberAsync(const DeletePipelineMemberRequest& request, const DeletePipelineMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePipelineMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::DeletePipelineMemberOutcomeCallable Devops_rdcClient::deletePipelineMemberCallable(const DeletePipelineMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePipelineMemberOutcome()>>(
			[this, request]()
			{
			return this->deletePipelineMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ExecutePipelineOutcome Devops_rdcClient::executePipeline(const ExecutePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecutePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecutePipelineOutcome(ExecutePipelineResult(outcome.result()));
	else
		return ExecutePipelineOutcome(outcome.error());
}

void Devops_rdcClient::executePipelineAsync(const ExecutePipelineRequest& request, const ExecutePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ExecutePipelineOutcomeCallable Devops_rdcClient::executePipelineCallable(const ExecutePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecutePipelineOutcome()>>(
			[this, request]()
			{
			return this->executePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetDevopsOrganizationMembersOutcome Devops_rdcClient::getDevopsOrganizationMembers(const GetDevopsOrganizationMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDevopsOrganizationMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDevopsOrganizationMembersOutcome(GetDevopsOrganizationMembersResult(outcome.result()));
	else
		return GetDevopsOrganizationMembersOutcome(outcome.error());
}

void Devops_rdcClient::getDevopsOrganizationMembersAsync(const GetDevopsOrganizationMembersRequest& request, const GetDevopsOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDevopsOrganizationMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetDevopsOrganizationMembersOutcomeCallable Devops_rdcClient::getDevopsOrganizationMembersCallable(const GetDevopsOrganizationMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDevopsOrganizationMembersOutcome()>>(
			[this, request]()
			{
			return this->getDevopsOrganizationMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetDevopsProjectInfoOutcome Devops_rdcClient::getDevopsProjectInfo(const GetDevopsProjectInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDevopsProjectInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDevopsProjectInfoOutcome(GetDevopsProjectInfoResult(outcome.result()));
	else
		return GetDevopsProjectInfoOutcome(outcome.error());
}

void Devops_rdcClient::getDevopsProjectInfoAsync(const GetDevopsProjectInfoRequest& request, const GetDevopsProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDevopsProjectInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetDevopsProjectInfoOutcomeCallable Devops_rdcClient::getDevopsProjectInfoCallable(const GetDevopsProjectInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDevopsProjectInfoOutcome()>>(
			[this, request]()
			{
			return this->getDevopsProjectInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetDevopsProjectMembersOutcome Devops_rdcClient::getDevopsProjectMembers(const GetDevopsProjectMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDevopsProjectMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDevopsProjectMembersOutcome(GetDevopsProjectMembersResult(outcome.result()));
	else
		return GetDevopsProjectMembersOutcome(outcome.error());
}

void Devops_rdcClient::getDevopsProjectMembersAsync(const GetDevopsProjectMembersRequest& request, const GetDevopsProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDevopsProjectMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetDevopsProjectMembersOutcomeCallable Devops_rdcClient::getDevopsProjectMembersCallable(const GetDevopsProjectMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDevopsProjectMembersOutcome()>>(
			[this, request]()
			{
			return this->getDevopsProjectMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetDevopsProjectSprintInfoOutcome Devops_rdcClient::getDevopsProjectSprintInfo(const GetDevopsProjectSprintInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDevopsProjectSprintInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDevopsProjectSprintInfoOutcome(GetDevopsProjectSprintInfoResult(outcome.result()));
	else
		return GetDevopsProjectSprintInfoOutcome(outcome.error());
}

void Devops_rdcClient::getDevopsProjectSprintInfoAsync(const GetDevopsProjectSprintInfoRequest& request, const GetDevopsProjectSprintInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDevopsProjectSprintInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetDevopsProjectSprintInfoOutcomeCallable Devops_rdcClient::getDevopsProjectSprintInfoCallable(const GetDevopsProjectSprintInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDevopsProjectSprintInfoOutcome()>>(
			[this, request]()
			{
			return this->getDevopsProjectSprintInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetDevopsProjectTaskInfoOutcome Devops_rdcClient::getDevopsProjectTaskInfo(const GetDevopsProjectTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDevopsProjectTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDevopsProjectTaskInfoOutcome(GetDevopsProjectTaskInfoResult(outcome.result()));
	else
		return GetDevopsProjectTaskInfoOutcome(outcome.error());
}

void Devops_rdcClient::getDevopsProjectTaskInfoAsync(const GetDevopsProjectTaskInfoRequest& request, const GetDevopsProjectTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDevopsProjectTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetDevopsProjectTaskInfoOutcomeCallable Devops_rdcClient::getDevopsProjectTaskInfoCallable(const GetDevopsProjectTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDevopsProjectTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->getDevopsProjectTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetLastWorkspaceOutcome Devops_rdcClient::getLastWorkspace(const GetLastWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLastWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLastWorkspaceOutcome(GetLastWorkspaceResult(outcome.result()));
	else
		return GetLastWorkspaceOutcome(outcome.error());
}

void Devops_rdcClient::getLastWorkspaceAsync(const GetLastWorkspaceRequest& request, const GetLastWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLastWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetLastWorkspaceOutcomeCallable Devops_rdcClient::getLastWorkspaceCallable(const GetLastWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLastWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->getLastWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstHistoryOutcome Devops_rdcClient::getPipelineInstHistory(const GetPipelineInstHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstHistoryOutcome(GetPipelineInstHistoryResult(outcome.result()));
	else
		return GetPipelineInstHistoryOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstHistoryAsync(const GetPipelineInstHistoryRequest& request, const GetPipelineInstHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstHistoryOutcomeCallable Devops_rdcClient::getPipelineInstHistoryCallable(const GetPipelineInstHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstHistoryOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstanceBuildNumberStatusOutcome Devops_rdcClient::getPipelineInstanceBuildNumberStatus(const GetPipelineInstanceBuildNumberStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstanceBuildNumberStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstanceBuildNumberStatusOutcome(GetPipelineInstanceBuildNumberStatusResult(outcome.result()));
	else
		return GetPipelineInstanceBuildNumberStatusOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstanceBuildNumberStatusAsync(const GetPipelineInstanceBuildNumberStatusRequest& request, const GetPipelineInstanceBuildNumberStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstanceBuildNumberStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstanceBuildNumberStatusOutcomeCallable Devops_rdcClient::getPipelineInstanceBuildNumberStatusCallable(const GetPipelineInstanceBuildNumberStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstanceBuildNumberStatusOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstanceBuildNumberStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstanceGroupStatusOutcome Devops_rdcClient::getPipelineInstanceGroupStatus(const GetPipelineInstanceGroupStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstanceGroupStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstanceGroupStatusOutcome(GetPipelineInstanceGroupStatusResult(outcome.result()));
	else
		return GetPipelineInstanceGroupStatusOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstanceGroupStatusAsync(const GetPipelineInstanceGroupStatusRequest& request, const GetPipelineInstanceGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstanceGroupStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstanceGroupStatusOutcomeCallable Devops_rdcClient::getPipelineInstanceGroupStatusCallable(const GetPipelineInstanceGroupStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstanceGroupStatusOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstanceGroupStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstanceInfoOutcome Devops_rdcClient::getPipelineInstanceInfo(const GetPipelineInstanceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstanceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstanceInfoOutcome(GetPipelineInstanceInfoResult(outcome.result()));
	else
		return GetPipelineInstanceInfoOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstanceInfoAsync(const GetPipelineInstanceInfoRequest& request, const GetPipelineInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstanceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstanceInfoOutcomeCallable Devops_rdcClient::getPipelineInstanceInfoCallable(const GetPipelineInstanceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstanceInfoOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstanceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineInstanceStatusOutcome Devops_rdcClient::getPipelineInstanceStatus(const GetPipelineInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineInstanceStatusOutcome(GetPipelineInstanceStatusResult(outcome.result()));
	else
		return GetPipelineInstanceStatusOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineInstanceStatusAsync(const GetPipelineInstanceStatusRequest& request, const GetPipelineInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineInstanceStatusOutcomeCallable Devops_rdcClient::getPipelineInstanceStatusCallable(const GetPipelineInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->getPipelineInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineLogOutcome Devops_rdcClient::getPipelineLog(const GetPipelineLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineLogOutcome(GetPipelineLogResult(outcome.result()));
	else
		return GetPipelineLogOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineLogAsync(const GetPipelineLogRequest& request, const GetPipelineLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineLogOutcomeCallable Devops_rdcClient::getPipelineLogCallable(const GetPipelineLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineLogOutcome()>>(
			[this, request]()
			{
			return this->getPipelineLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipelineStepLogOutcome Devops_rdcClient::getPipelineStepLog(const GetPipelineStepLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineStepLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineStepLogOutcome(GetPipelineStepLogResult(outcome.result()));
	else
		return GetPipelineStepLogOutcome(outcome.error());
}

void Devops_rdcClient::getPipelineStepLogAsync(const GetPipelineStepLogRequest& request, const GetPipelineStepLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineStepLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipelineStepLogOutcomeCallable Devops_rdcClient::getPipelineStepLogCallable(const GetPipelineStepLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineStepLogOutcome()>>(
			[this, request]()
			{
			return this->getPipelineStepLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetPipleineLatestInstanceStatusOutcome Devops_rdcClient::getPipleineLatestInstanceStatus(const GetPipleineLatestInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipleineLatestInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipleineLatestInstanceStatusOutcome(GetPipleineLatestInstanceStatusResult(outcome.result()));
	else
		return GetPipleineLatestInstanceStatusOutcome(outcome.error());
}

void Devops_rdcClient::getPipleineLatestInstanceStatusAsync(const GetPipleineLatestInstanceStatusRequest& request, const GetPipleineLatestInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipleineLatestInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetPipleineLatestInstanceStatusOutcomeCallable Devops_rdcClient::getPipleineLatestInstanceStatusCallable(const GetPipleineLatestInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipleineLatestInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->getPipleineLatestInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetProjectOptionOutcome Devops_rdcClient::getProjectOption(const GetProjectOptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectOptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectOptionOutcome(GetProjectOptionResult(outcome.result()));
	else
		return GetProjectOptionOutcome(outcome.error());
}

void Devops_rdcClient::getProjectOptionAsync(const GetProjectOptionRequest& request, const GetProjectOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectOption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetProjectOptionOutcomeCallable Devops_rdcClient::getProjectOptionCallable(const GetProjectOptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectOptionOutcome()>>(
			[this, request]()
			{
			return this->getProjectOption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetTaskDetailActivityOutcome Devops_rdcClient::getTaskDetailActivity(const GetTaskDetailActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskDetailActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskDetailActivityOutcome(GetTaskDetailActivityResult(outcome.result()));
	else
		return GetTaskDetailActivityOutcome(outcome.error());
}

void Devops_rdcClient::getTaskDetailActivityAsync(const GetTaskDetailActivityRequest& request, const GetTaskDetailActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskDetailActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetTaskDetailActivityOutcomeCallable Devops_rdcClient::getTaskDetailActivityCallable(const GetTaskDetailActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskDetailActivityOutcome()>>(
			[this, request]()
			{
			return this->getTaskDetailActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetTaskDetailBaseOutcome Devops_rdcClient::getTaskDetailBase(const GetTaskDetailBaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskDetailBaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskDetailBaseOutcome(GetTaskDetailBaseResult(outcome.result()));
	else
		return GetTaskDetailBaseOutcome(outcome.error());
}

void Devops_rdcClient::getTaskDetailBaseAsync(const GetTaskDetailBaseRequest& request, const GetTaskDetailBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskDetailBase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetTaskDetailBaseOutcomeCallable Devops_rdcClient::getTaskDetailBaseCallable(const GetTaskDetailBaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskDetailBaseOutcome()>>(
			[this, request]()
			{
			return this->getTaskDetailBase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetTaskListFilterOutcome Devops_rdcClient::getTaskListFilter(const GetTaskListFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskListFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskListFilterOutcome(GetTaskListFilterResult(outcome.result()));
	else
		return GetTaskListFilterOutcome(outcome.error());
}

void Devops_rdcClient::getTaskListFilterAsync(const GetTaskListFilterRequest& request, const GetTaskListFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskListFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetTaskListFilterOutcomeCallable Devops_rdcClient::getTaskListFilterCallable(const GetTaskListFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskListFilterOutcome()>>(
			[this, request]()
			{
			return this->getTaskListFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetUserByAliyunUidOutcome Devops_rdcClient::getUserByAliyunUid(const GetUserByAliyunUidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserByAliyunUidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserByAliyunUidOutcome(GetUserByAliyunUidResult(outcome.result()));
	else
		return GetUserByAliyunUidOutcome(outcome.error());
}

void Devops_rdcClient::getUserByAliyunUidAsync(const GetUserByAliyunUidRequest& request, const GetUserByAliyunUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserByAliyunUid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetUserByAliyunUidOutcomeCallable Devops_rdcClient::getUserByAliyunUidCallable(const GetUserByAliyunUidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserByAliyunUidOutcome()>>(
			[this, request]()
			{
			return this->getUserByAliyunUid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::GetUserNameOutcome Devops_rdcClient::getUserName(const GetUserNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserNameOutcome(GetUserNameResult(outcome.result()));
	else
		return GetUserNameOutcome(outcome.error());
}

void Devops_rdcClient::getUserNameAsync(const GetUserNameRequest& request, const GetUserNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::GetUserNameOutcomeCallable Devops_rdcClient::getUserNameCallable(const GetUserNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserNameOutcome()>>(
			[this, request]()
			{
			return this->getUserName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::InsertDevopsUserOutcome Devops_rdcClient::insertDevopsUser(const InsertDevopsUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertDevopsUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertDevopsUserOutcome(InsertDevopsUserResult(outcome.result()));
	else
		return InsertDevopsUserOutcome(outcome.error());
}

void Devops_rdcClient::insertDevopsUserAsync(const InsertDevopsUserRequest& request, const InsertDevopsUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertDevopsUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::InsertDevopsUserOutcomeCallable Devops_rdcClient::insertDevopsUserCallable(const InsertDevopsUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertDevopsUserOutcome()>>(
			[this, request]()
			{
			return this->insertDevopsUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::InsertPipelineMemberOutcome Devops_rdcClient::insertPipelineMember(const InsertPipelineMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertPipelineMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertPipelineMemberOutcome(InsertPipelineMemberResult(outcome.result()));
	else
		return InsertPipelineMemberOutcome(outcome.error());
}

void Devops_rdcClient::insertPipelineMemberAsync(const InsertPipelineMemberRequest& request, const InsertPipelineMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertPipelineMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::InsertPipelineMemberOutcomeCallable Devops_rdcClient::insertPipelineMemberCallable(const InsertPipelineMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertPipelineMemberOutcome()>>(
			[this, request]()
			{
			return this->insertPipelineMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::InsertProjectMembersOutcome Devops_rdcClient::insertProjectMembers(const InsertProjectMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertProjectMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertProjectMembersOutcome(InsertProjectMembersResult(outcome.result()));
	else
		return InsertProjectMembersOutcome(outcome.error());
}

void Devops_rdcClient::insertProjectMembersAsync(const InsertProjectMembersRequest& request, const InsertProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertProjectMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::InsertProjectMembersOutcomeCallable Devops_rdcClient::insertProjectMembersCallable(const InsertProjectMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertProjectMembersOutcome()>>(
			[this, request]()
			{
			return this->insertProjectMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListCommonGroupOutcome Devops_rdcClient::listCommonGroup(const ListCommonGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCommonGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCommonGroupOutcome(ListCommonGroupResult(outcome.result()));
	else
		return ListCommonGroupOutcome(outcome.error());
}

void Devops_rdcClient::listCommonGroupAsync(const ListCommonGroupRequest& request, const ListCommonGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCommonGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListCommonGroupOutcomeCallable Devops_rdcClient::listCommonGroupCallable(const ListCommonGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCommonGroupOutcome()>>(
			[this, request]()
			{
			return this->listCommonGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListCredentialsOutcome Devops_rdcClient::listCredentials(const ListCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCredentialsOutcome(ListCredentialsResult(outcome.result()));
	else
		return ListCredentialsOutcome(outcome.error());
}

void Devops_rdcClient::listCredentialsAsync(const ListCredentialsRequest& request, const ListCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListCredentialsOutcomeCallable Devops_rdcClient::listCredentialsCallable(const ListCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCredentialsOutcome()>>(
			[this, request]()
			{
			return this->listCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListDevopsProjectSprintsOutcome Devops_rdcClient::listDevopsProjectSprints(const ListDevopsProjectSprintsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevopsProjectSprintsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevopsProjectSprintsOutcome(ListDevopsProjectSprintsResult(outcome.result()));
	else
		return ListDevopsProjectSprintsOutcome(outcome.error());
}

void Devops_rdcClient::listDevopsProjectSprintsAsync(const ListDevopsProjectSprintsRequest& request, const ListDevopsProjectSprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevopsProjectSprints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListDevopsProjectSprintsOutcomeCallable Devops_rdcClient::listDevopsProjectSprintsCallable(const ListDevopsProjectSprintsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevopsProjectSprintsOutcome()>>(
			[this, request]()
			{
			return this->listDevopsProjectSprints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListDevopsProjectTaskFlowOutcome Devops_rdcClient::listDevopsProjectTaskFlow(const ListDevopsProjectTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevopsProjectTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevopsProjectTaskFlowOutcome(ListDevopsProjectTaskFlowResult(outcome.result()));
	else
		return ListDevopsProjectTaskFlowOutcome(outcome.error());
}

void Devops_rdcClient::listDevopsProjectTaskFlowAsync(const ListDevopsProjectTaskFlowRequest& request, const ListDevopsProjectTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevopsProjectTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListDevopsProjectTaskFlowOutcomeCallable Devops_rdcClient::listDevopsProjectTaskFlowCallable(const ListDevopsProjectTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevopsProjectTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->listDevopsProjectTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListDevopsProjectTaskFlowStatusOutcome Devops_rdcClient::listDevopsProjectTaskFlowStatus(const ListDevopsProjectTaskFlowStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevopsProjectTaskFlowStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevopsProjectTaskFlowStatusOutcome(ListDevopsProjectTaskFlowStatusResult(outcome.result()));
	else
		return ListDevopsProjectTaskFlowStatusOutcome(outcome.error());
}

void Devops_rdcClient::listDevopsProjectTaskFlowStatusAsync(const ListDevopsProjectTaskFlowStatusRequest& request, const ListDevopsProjectTaskFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevopsProjectTaskFlowStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListDevopsProjectTaskFlowStatusOutcomeCallable Devops_rdcClient::listDevopsProjectTaskFlowStatusCallable(const ListDevopsProjectTaskFlowStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevopsProjectTaskFlowStatusOutcome()>>(
			[this, request]()
			{
			return this->listDevopsProjectTaskFlowStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListDevopsProjectTaskListOutcome Devops_rdcClient::listDevopsProjectTaskList(const ListDevopsProjectTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevopsProjectTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevopsProjectTaskListOutcome(ListDevopsProjectTaskListResult(outcome.result()));
	else
		return ListDevopsProjectTaskListOutcome(outcome.error());
}

void Devops_rdcClient::listDevopsProjectTaskListAsync(const ListDevopsProjectTaskListRequest& request, const ListDevopsProjectTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevopsProjectTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListDevopsProjectTaskListOutcomeCallable Devops_rdcClient::listDevopsProjectTaskListCallable(const ListDevopsProjectTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevopsProjectTaskListOutcome()>>(
			[this, request]()
			{
			return this->listDevopsProjectTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListDevopsProjectTasksOutcome Devops_rdcClient::listDevopsProjectTasks(const ListDevopsProjectTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevopsProjectTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevopsProjectTasksOutcome(ListDevopsProjectTasksResult(outcome.result()));
	else
		return ListDevopsProjectTasksOutcome(outcome.error());
}

void Devops_rdcClient::listDevopsProjectTasksAsync(const ListDevopsProjectTasksRequest& request, const ListDevopsProjectTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevopsProjectTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListDevopsProjectTasksOutcomeCallable Devops_rdcClient::listDevopsProjectTasksCallable(const ListDevopsProjectTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevopsProjectTasksOutcome()>>(
			[this, request]()
			{
			return this->listDevopsProjectTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListDevopsProjectsOutcome Devops_rdcClient::listDevopsProjects(const ListDevopsProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevopsProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevopsProjectsOutcome(ListDevopsProjectsResult(outcome.result()));
	else
		return ListDevopsProjectsOutcome(outcome.error());
}

void Devops_rdcClient::listDevopsProjectsAsync(const ListDevopsProjectsRequest& request, const ListDevopsProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevopsProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListDevopsProjectsOutcomeCallable Devops_rdcClient::listDevopsProjectsCallable(const ListDevopsProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevopsProjectsOutcome()>>(
			[this, request]()
			{
			return this->listDevopsProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListDevopsScenarioFieldConfigOutcome Devops_rdcClient::listDevopsScenarioFieldConfig(const ListDevopsScenarioFieldConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevopsScenarioFieldConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevopsScenarioFieldConfigOutcome(ListDevopsScenarioFieldConfigResult(outcome.result()));
	else
		return ListDevopsScenarioFieldConfigOutcome(outcome.error());
}

void Devops_rdcClient::listDevopsScenarioFieldConfigAsync(const ListDevopsScenarioFieldConfigRequest& request, const ListDevopsScenarioFieldConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevopsScenarioFieldConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListDevopsScenarioFieldConfigOutcomeCallable Devops_rdcClient::listDevopsScenarioFieldConfigCallable(const ListDevopsScenarioFieldConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevopsScenarioFieldConfigOutcome()>>(
			[this, request]()
			{
			return this->listDevopsScenarioFieldConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListPipelineTemplatesOutcome Devops_rdcClient::listPipelineTemplates(const ListPipelineTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineTemplatesOutcome(ListPipelineTemplatesResult(outcome.result()));
	else
		return ListPipelineTemplatesOutcome(outcome.error());
}

void Devops_rdcClient::listPipelineTemplatesAsync(const ListPipelineTemplatesRequest& request, const ListPipelineTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelineTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListPipelineTemplatesOutcomeCallable Devops_rdcClient::listPipelineTemplatesCallable(const ListPipelineTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listPipelineTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListPipelinesOutcome Devops_rdcClient::listPipelines(const ListPipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelinesOutcome(ListPipelinesResult(outcome.result()));
	else
		return ListPipelinesOutcome(outcome.error());
}

void Devops_rdcClient::listPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListPipelinesOutcomeCallable Devops_rdcClient::listPipelinesCallable(const ListPipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelinesOutcome()>>(
			[this, request]()
			{
			return this->listPipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListProjectCustomFieldsOutcome Devops_rdcClient::listProjectCustomFields(const ListProjectCustomFieldsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectCustomFieldsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectCustomFieldsOutcome(ListProjectCustomFieldsResult(outcome.result()));
	else
		return ListProjectCustomFieldsOutcome(outcome.error());
}

void Devops_rdcClient::listProjectCustomFieldsAsync(const ListProjectCustomFieldsRequest& request, const ListProjectCustomFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectCustomFields(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListProjectCustomFieldsOutcomeCallable Devops_rdcClient::listProjectCustomFieldsCallable(const ListProjectCustomFieldsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectCustomFieldsOutcome()>>(
			[this, request]()
			{
			return this->listProjectCustomFields(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListServiceConnectionsOutcome Devops_rdcClient::listServiceConnections(const ListServiceConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceConnectionsOutcome(ListServiceConnectionsResult(outcome.result()));
	else
		return ListServiceConnectionsOutcome(outcome.error());
}

void Devops_rdcClient::listServiceConnectionsAsync(const ListServiceConnectionsRequest& request, const ListServiceConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListServiceConnectionsOutcomeCallable Devops_rdcClient::listServiceConnectionsCallable(const ListServiceConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceConnectionsOutcome()>>(
			[this, request]()
			{
			return this->listServiceConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListSmartGroupOutcome Devops_rdcClient::listSmartGroup(const ListSmartGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSmartGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSmartGroupOutcome(ListSmartGroupResult(outcome.result()));
	else
		return ListSmartGroupOutcome(outcome.error());
}

void Devops_rdcClient::listSmartGroupAsync(const ListSmartGroupRequest& request, const ListSmartGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSmartGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListSmartGroupOutcomeCallable Devops_rdcClient::listSmartGroupCallable(const ListSmartGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSmartGroupOutcome()>>(
			[this, request]()
			{
			return this->listSmartGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::ListUserOrganizationOutcome Devops_rdcClient::listUserOrganization(const ListUserOrganizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserOrganizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserOrganizationOutcome(ListUserOrganizationResult(outcome.result()));
	else
		return ListUserOrganizationOutcome(outcome.error());
}

void Devops_rdcClient::listUserOrganizationAsync(const ListUserOrganizationRequest& request, const ListUserOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserOrganization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::ListUserOrganizationOutcomeCallable Devops_rdcClient::listUserOrganizationCallable(const ListUserOrganizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserOrganizationOutcome()>>(
			[this, request]()
			{
			return this->listUserOrganization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::TransferPipelineOwnerOutcome Devops_rdcClient::transferPipelineOwner(const TransferPipelineOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferPipelineOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferPipelineOwnerOutcome(TransferPipelineOwnerResult(outcome.result()));
	else
		return TransferPipelineOwnerOutcome(outcome.error());
}

void Devops_rdcClient::transferPipelineOwnerAsync(const TransferPipelineOwnerRequest& request, const TransferPipelineOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferPipelineOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::TransferPipelineOwnerOutcomeCallable Devops_rdcClient::transferPipelineOwnerCallable(const TransferPipelineOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferPipelineOwnerOutcome()>>(
			[this, request]()
			{
			return this->transferPipelineOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::UpdateCommonGroupOutcome Devops_rdcClient::updateCommonGroup(const UpdateCommonGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCommonGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCommonGroupOutcome(UpdateCommonGroupResult(outcome.result()));
	else
		return UpdateCommonGroupOutcome(outcome.error());
}

void Devops_rdcClient::updateCommonGroupAsync(const UpdateCommonGroupRequest& request, const UpdateCommonGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCommonGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::UpdateCommonGroupOutcomeCallable Devops_rdcClient::updateCommonGroupCallable(const UpdateCommonGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCommonGroupOutcome()>>(
			[this, request]()
			{
			return this->updateCommonGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::UpdateDevopsProjectOutcome Devops_rdcClient::updateDevopsProject(const UpdateDevopsProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDevopsProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDevopsProjectOutcome(UpdateDevopsProjectResult(outcome.result()));
	else
		return UpdateDevopsProjectOutcome(outcome.error());
}

void Devops_rdcClient::updateDevopsProjectAsync(const UpdateDevopsProjectRequest& request, const UpdateDevopsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDevopsProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::UpdateDevopsProjectOutcomeCallable Devops_rdcClient::updateDevopsProjectCallable(const UpdateDevopsProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDevopsProjectOutcome()>>(
			[this, request]()
			{
			return this->updateDevopsProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::UpdateDevopsProjectSprintOutcome Devops_rdcClient::updateDevopsProjectSprint(const UpdateDevopsProjectSprintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDevopsProjectSprintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDevopsProjectSprintOutcome(UpdateDevopsProjectSprintResult(outcome.result()));
	else
		return UpdateDevopsProjectSprintOutcome(outcome.error());
}

void Devops_rdcClient::updateDevopsProjectSprintAsync(const UpdateDevopsProjectSprintRequest& request, const UpdateDevopsProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDevopsProjectSprint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::UpdateDevopsProjectSprintOutcomeCallable Devops_rdcClient::updateDevopsProjectSprintCallable(const UpdateDevopsProjectSprintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDevopsProjectSprintOutcome()>>(
			[this, request]()
			{
			return this->updateDevopsProjectSprint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::UpdateDevopsProjectTaskOutcome Devops_rdcClient::updateDevopsProjectTask(const UpdateDevopsProjectTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDevopsProjectTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDevopsProjectTaskOutcome(UpdateDevopsProjectTaskResult(outcome.result()));
	else
		return UpdateDevopsProjectTaskOutcome(outcome.error());
}

void Devops_rdcClient::updateDevopsProjectTaskAsync(const UpdateDevopsProjectTaskRequest& request, const UpdateDevopsProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDevopsProjectTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::UpdateDevopsProjectTaskOutcomeCallable Devops_rdcClient::updateDevopsProjectTaskCallable(const UpdateDevopsProjectTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDevopsProjectTaskOutcome()>>(
			[this, request]()
			{
			return this->updateDevopsProjectTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::UpdatePipelineEnvVarsOutcome Devops_rdcClient::updatePipelineEnvVars(const UpdatePipelineEnvVarsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePipelineEnvVarsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePipelineEnvVarsOutcome(UpdatePipelineEnvVarsResult(outcome.result()));
	else
		return UpdatePipelineEnvVarsOutcome(outcome.error());
}

void Devops_rdcClient::updatePipelineEnvVarsAsync(const UpdatePipelineEnvVarsRequest& request, const UpdatePipelineEnvVarsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipelineEnvVars(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::UpdatePipelineEnvVarsOutcomeCallable Devops_rdcClient::updatePipelineEnvVarsCallable(const UpdatePipelineEnvVarsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelineEnvVarsOutcome()>>(
			[this, request]()
			{
			return this->updatePipelineEnvVars(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::UpdatePipelineMemberOutcome Devops_rdcClient::updatePipelineMember(const UpdatePipelineMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePipelineMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePipelineMemberOutcome(UpdatePipelineMemberResult(outcome.result()));
	else
		return UpdatePipelineMemberOutcome(outcome.error());
}

void Devops_rdcClient::updatePipelineMemberAsync(const UpdatePipelineMemberRequest& request, const UpdatePipelineMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipelineMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::UpdatePipelineMemberOutcomeCallable Devops_rdcClient::updatePipelineMemberCallable(const UpdatePipelineMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelineMemberOutcome()>>(
			[this, request]()
			{
			return this->updatePipelineMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Devops_rdcClient::UpdateTaskDetailOutcome Devops_rdcClient::updateTaskDetail(const UpdateTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskDetailOutcome(UpdateTaskDetailResult(outcome.result()));
	else
		return UpdateTaskDetailOutcome(outcome.error());
}

void Devops_rdcClient::updateTaskDetailAsync(const UpdateTaskDetailRequest& request, const UpdateTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Devops_rdcClient::UpdateTaskDetailOutcomeCallable Devops_rdcClient::updateTaskDetailCallable(const UpdateTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->updateTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

