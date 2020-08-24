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

