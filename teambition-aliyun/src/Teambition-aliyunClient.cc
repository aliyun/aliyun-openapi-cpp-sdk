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

#include <alibabacloud/teambition-aliyun/Teambition_aliyunClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

namespace
{
	const std::string SERVICE_NAME = "teambition-aliyun";
}

Teambition_aliyunClient::Teambition_aliyunClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Teambition_aliyunClient::Teambition_aliyunClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Teambition_aliyunClient::Teambition_aliyunClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Teambition_aliyunClient::~Teambition_aliyunClient()
{}

Teambition_aliyunClient::AddProjectMembersOutcome Teambition_aliyunClient::addProjectMembers(const AddProjectMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddProjectMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddProjectMembersOutcome(AddProjectMembersResult(outcome.result()));
	else
		return AddProjectMembersOutcome(outcome.error());
}

void Teambition_aliyunClient::addProjectMembersAsync(const AddProjectMembersRequest& request, const AddProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addProjectMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::AddProjectMembersOutcomeCallable Teambition_aliyunClient::addProjectMembersCallable(const AddProjectMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddProjectMembersOutcome()>>(
			[this, request]()
			{
			return this->addProjectMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::ApplySmallMicroOutcome Teambition_aliyunClient::applySmallMicro(const ApplySmallMicroRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplySmallMicroOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplySmallMicroOutcome(ApplySmallMicroResult(outcome.result()));
	else
		return ApplySmallMicroOutcome(outcome.error());
}

void Teambition_aliyunClient::applySmallMicroAsync(const ApplySmallMicroRequest& request, const ApplySmallMicroAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applySmallMicro(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::ApplySmallMicroOutcomeCallable Teambition_aliyunClient::applySmallMicroCallable(const ApplySmallMicroRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplySmallMicroOutcome()>>(
			[this, request]()
			{
			return this->applySmallMicro(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::BactchInsertMembersOutcome Teambition_aliyunClient::bactchInsertMembers(const BactchInsertMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BactchInsertMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BactchInsertMembersOutcome(BactchInsertMembersResult(outcome.result()));
	else
		return BactchInsertMembersOutcome(outcome.error());
}

void Teambition_aliyunClient::bactchInsertMembersAsync(const BactchInsertMembersRequest& request, const BactchInsertMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bactchInsertMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::BactchInsertMembersOutcomeCallable Teambition_aliyunClient::bactchInsertMembersCallable(const BactchInsertMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BactchInsertMembersOutcome()>>(
			[this, request]()
			{
			return this->bactchInsertMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::CheckAliyunUserExistsOutcome Teambition_aliyunClient::checkAliyunUserExists(const CheckAliyunUserExistsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAliyunUserExistsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAliyunUserExistsOutcome(CheckAliyunUserExistsResult(outcome.result()));
	else
		return CheckAliyunUserExistsOutcome(outcome.error());
}

void Teambition_aliyunClient::checkAliyunUserExistsAsync(const CheckAliyunUserExistsRequest& request, const CheckAliyunUserExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAliyunUserExists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::CheckAliyunUserExistsOutcomeCallable Teambition_aliyunClient::checkAliyunUserExistsCallable(const CheckAliyunUserExistsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAliyunUserExistsOutcome()>>(
			[this, request]()
			{
			return this->checkAliyunUserExists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::CreateDevopsOrgOutcome Teambition_aliyunClient::createDevopsOrg(const CreateDevopsOrgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDevopsOrgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDevopsOrgOutcome(CreateDevopsOrgResult(outcome.result()));
	else
		return CreateDevopsOrgOutcome(outcome.error());
}

void Teambition_aliyunClient::createDevopsOrgAsync(const CreateDevopsOrgRequest& request, const CreateDevopsOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDevopsOrg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::CreateDevopsOrgOutcomeCallable Teambition_aliyunClient::createDevopsOrgCallable(const CreateDevopsOrgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDevopsOrgOutcome()>>(
			[this, request]()
			{
			return this->createDevopsOrg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::CreateProjectOutcome Teambition_aliyunClient::createProject(const CreateProjectRequest &request) const
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

void Teambition_aliyunClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::CreateProjectOutcomeCallable Teambition_aliyunClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::CreateProjectSprintOutcome Teambition_aliyunClient::createProjectSprint(const CreateProjectSprintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectSprintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectSprintOutcome(CreateProjectSprintResult(outcome.result()));
	else
		return CreateProjectSprintOutcome(outcome.error());
}

void Teambition_aliyunClient::createProjectSprintAsync(const CreateProjectSprintRequest& request, const CreateProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProjectSprint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::CreateProjectSprintOutcomeCallable Teambition_aliyunClient::createProjectSprintCallable(const CreateProjectSprintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectSprintOutcome()>>(
			[this, request]()
			{
			return this->createProjectSprint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::CreateProjectTaskOutcome Teambition_aliyunClient::createProjectTask(const CreateProjectTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectTaskOutcome(CreateProjectTaskResult(outcome.result()));
	else
		return CreateProjectTaskOutcome(outcome.error());
}

void Teambition_aliyunClient::createProjectTaskAsync(const CreateProjectTaskRequest& request, const CreateProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProjectTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::CreateProjectTaskOutcomeCallable Teambition_aliyunClient::createProjectTaskCallable(const CreateProjectTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectTaskOutcome()>>(
			[this, request]()
			{
			return this->createProjectTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::DeleteMembersForOrgOutcome Teambition_aliyunClient::deleteMembersForOrg(const DeleteMembersForOrgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMembersForOrgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMembersForOrgOutcome(DeleteMembersForOrgResult(outcome.result()));
	else
		return DeleteMembersForOrgOutcome(outcome.error());
}

void Teambition_aliyunClient::deleteMembersForOrgAsync(const DeleteMembersForOrgRequest& request, const DeleteMembersForOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMembersForOrg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::DeleteMembersForOrgOutcomeCallable Teambition_aliyunClient::deleteMembersForOrgCallable(const DeleteMembersForOrgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMembersForOrgOutcome()>>(
			[this, request]()
			{
			return this->deleteMembersForOrg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::DeleteProjectOutcome Teambition_aliyunClient::deleteProject(const DeleteProjectRequest &request) const
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

void Teambition_aliyunClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::DeleteProjectOutcomeCallable Teambition_aliyunClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::DeleteProjectMembersOutcome Teambition_aliyunClient::deleteProjectMembers(const DeleteProjectMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectMembersOutcome(DeleteProjectMembersResult(outcome.result()));
	else
		return DeleteProjectMembersOutcome(outcome.error());
}

void Teambition_aliyunClient::deleteProjectMembersAsync(const DeleteProjectMembersRequest& request, const DeleteProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProjectMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::DeleteProjectMembersOutcomeCallable Teambition_aliyunClient::deleteProjectMembersCallable(const DeleteProjectMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectMembersOutcome()>>(
			[this, request]()
			{
			return this->deleteProjectMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::DeleteProjectSprintOutcome Teambition_aliyunClient::deleteProjectSprint(const DeleteProjectSprintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectSprintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectSprintOutcome(DeleteProjectSprintResult(outcome.result()));
	else
		return DeleteProjectSprintOutcome(outcome.error());
}

void Teambition_aliyunClient::deleteProjectSprintAsync(const DeleteProjectSprintRequest& request, const DeleteProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProjectSprint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::DeleteProjectSprintOutcomeCallable Teambition_aliyunClient::deleteProjectSprintCallable(const DeleteProjectSprintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectSprintOutcome()>>(
			[this, request]()
			{
			return this->deleteProjectSprint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::DeleteProjectTaskOutcome Teambition_aliyunClient::deleteProjectTask(const DeleteProjectTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectTaskOutcome(DeleteProjectTaskResult(outcome.result()));
	else
		return DeleteProjectTaskOutcome(outcome.error());
}

void Teambition_aliyunClient::deleteProjectTaskAsync(const DeleteProjectTaskRequest& request, const DeleteProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProjectTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::DeleteProjectTaskOutcomeCallable Teambition_aliyunClient::deleteProjectTaskCallable(const DeleteProjectTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteProjectTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::GetOrganizationMembersOutcome Teambition_aliyunClient::getOrganizationMembers(const GetOrganizationMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrganizationMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrganizationMembersOutcome(GetOrganizationMembersResult(outcome.result()));
	else
		return GetOrganizationMembersOutcome(outcome.error());
}

void Teambition_aliyunClient::getOrganizationMembersAsync(const GetOrganizationMembersRequest& request, const GetOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrganizationMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::GetOrganizationMembersOutcomeCallable Teambition_aliyunClient::getOrganizationMembersCallable(const GetOrganizationMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrganizationMembersOutcome()>>(
			[this, request]()
			{
			return this->getOrganizationMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::GetProjectInfoOutcome Teambition_aliyunClient::getProjectInfo(const GetProjectInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectInfoOutcome(GetProjectInfoResult(outcome.result()));
	else
		return GetProjectInfoOutcome(outcome.error());
}

void Teambition_aliyunClient::getProjectInfoAsync(const GetProjectInfoRequest& request, const GetProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::GetProjectInfoOutcomeCallable Teambition_aliyunClient::getProjectInfoCallable(const GetProjectInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectInfoOutcome()>>(
			[this, request]()
			{
			return this->getProjectInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::GetProjectMembersOutcome Teambition_aliyunClient::getProjectMembers(const GetProjectMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectMembersOutcome(GetProjectMembersResult(outcome.result()));
	else
		return GetProjectMembersOutcome(outcome.error());
}

void Teambition_aliyunClient::getProjectMembersAsync(const GetProjectMembersRequest& request, const GetProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::GetProjectMembersOutcomeCallable Teambition_aliyunClient::getProjectMembersCallable(const GetProjectMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectMembersOutcome()>>(
			[this, request]()
			{
			return this->getProjectMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::GetProjectSprintInfoOutcome Teambition_aliyunClient::getProjectSprintInfo(const GetProjectSprintInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectSprintInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectSprintInfoOutcome(GetProjectSprintInfoResult(outcome.result()));
	else
		return GetProjectSprintInfoOutcome(outcome.error());
}

void Teambition_aliyunClient::getProjectSprintInfoAsync(const GetProjectSprintInfoRequest& request, const GetProjectSprintInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectSprintInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::GetProjectSprintInfoOutcomeCallable Teambition_aliyunClient::getProjectSprintInfoCallable(const GetProjectSprintInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectSprintInfoOutcome()>>(
			[this, request]()
			{
			return this->getProjectSprintInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::GetProjectTaskInfoOutcome Teambition_aliyunClient::getProjectTaskInfo(const GetProjectTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectTaskInfoOutcome(GetProjectTaskInfoResult(outcome.result()));
	else
		return GetProjectTaskInfoOutcome(outcome.error());
}

void Teambition_aliyunClient::getProjectTaskInfoAsync(const GetProjectTaskInfoRequest& request, const GetProjectTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::GetProjectTaskInfoOutcomeCallable Teambition_aliyunClient::getProjectTaskInfoCallable(const GetProjectTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->getProjectTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::GetUserByUidOutcome Teambition_aliyunClient::getUserByUid(const GetUserByUidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserByUidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserByUidOutcome(GetUserByUidResult(outcome.result()));
	else
		return GetUserByUidOutcome(outcome.error());
}

void Teambition_aliyunClient::getUserByUidAsync(const GetUserByUidRequest& request, const GetUserByUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserByUid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::GetUserByUidOutcomeCallable Teambition_aliyunClient::getUserByUidCallable(const GetUserByUidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserByUidOutcome()>>(
			[this, request]()
			{
			return this->getUserByUid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::InsertDevopsMemberOutcome Teambition_aliyunClient::insertDevopsMember(const InsertDevopsMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertDevopsMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertDevopsMemberOutcome(InsertDevopsMemberResult(outcome.result()));
	else
		return InsertDevopsMemberOutcome(outcome.error());
}

void Teambition_aliyunClient::insertDevopsMemberAsync(const InsertDevopsMemberRequest& request, const InsertDevopsMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertDevopsMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::InsertDevopsMemberOutcomeCallable Teambition_aliyunClient::insertDevopsMemberCallable(const InsertDevopsMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertDevopsMemberOutcome()>>(
			[this, request]()
			{
			return this->insertDevopsMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::ListProjectSprintsOutcome Teambition_aliyunClient::listProjectSprints(const ListProjectSprintsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectSprintsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectSprintsOutcome(ListProjectSprintsResult(outcome.result()));
	else
		return ListProjectSprintsOutcome(outcome.error());
}

void Teambition_aliyunClient::listProjectSprintsAsync(const ListProjectSprintsRequest& request, const ListProjectSprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectSprints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::ListProjectSprintsOutcomeCallable Teambition_aliyunClient::listProjectSprintsCallable(const ListProjectSprintsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectSprintsOutcome()>>(
			[this, request]()
			{
			return this->listProjectSprints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::ListProjectTaskFlowOutcome Teambition_aliyunClient::listProjectTaskFlow(const ListProjectTaskFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectTaskFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectTaskFlowOutcome(ListProjectTaskFlowResult(outcome.result()));
	else
		return ListProjectTaskFlowOutcome(outcome.error());
}

void Teambition_aliyunClient::listProjectTaskFlowAsync(const ListProjectTaskFlowRequest& request, const ListProjectTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectTaskFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::ListProjectTaskFlowOutcomeCallable Teambition_aliyunClient::listProjectTaskFlowCallable(const ListProjectTaskFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectTaskFlowOutcome()>>(
			[this, request]()
			{
			return this->listProjectTaskFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::ListProjectTaskFlowStatusOutcome Teambition_aliyunClient::listProjectTaskFlowStatus(const ListProjectTaskFlowStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectTaskFlowStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectTaskFlowStatusOutcome(ListProjectTaskFlowStatusResult(outcome.result()));
	else
		return ListProjectTaskFlowStatusOutcome(outcome.error());
}

void Teambition_aliyunClient::listProjectTaskFlowStatusAsync(const ListProjectTaskFlowStatusRequest& request, const ListProjectTaskFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectTaskFlowStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::ListProjectTaskFlowStatusOutcomeCallable Teambition_aliyunClient::listProjectTaskFlowStatusCallable(const ListProjectTaskFlowStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectTaskFlowStatusOutcome()>>(
			[this, request]()
			{
			return this->listProjectTaskFlowStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::ListProjectTasksOutcome Teambition_aliyunClient::listProjectTasks(const ListProjectTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectTasksOutcome(ListProjectTasksResult(outcome.result()));
	else
		return ListProjectTasksOutcome(outcome.error());
}

void Teambition_aliyunClient::listProjectTasksAsync(const ListProjectTasksRequest& request, const ListProjectTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::ListProjectTasksOutcomeCallable Teambition_aliyunClient::listProjectTasksCallable(const ListProjectTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectTasksOutcome()>>(
			[this, request]()
			{
			return this->listProjectTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::ListScenarioFieldConfigOutcome Teambition_aliyunClient::listScenarioFieldConfig(const ListScenarioFieldConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenarioFieldConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenarioFieldConfigOutcome(ListScenarioFieldConfigResult(outcome.result()));
	else
		return ListScenarioFieldConfigOutcome(outcome.error());
}

void Teambition_aliyunClient::listScenarioFieldConfigAsync(const ListScenarioFieldConfigRequest& request, const ListScenarioFieldConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenarioFieldConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::ListScenarioFieldConfigOutcomeCallable Teambition_aliyunClient::listScenarioFieldConfigCallable(const ListScenarioFieldConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenarioFieldConfigOutcome()>>(
			[this, request]()
			{
			return this->listScenarioFieldConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::UpdateProjectOutcome Teambition_aliyunClient::updateProject(const UpdateProjectRequest &request) const
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

void Teambition_aliyunClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::UpdateProjectOutcomeCallable Teambition_aliyunClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::UpdateProjectSprintOutcome Teambition_aliyunClient::updateProjectSprint(const UpdateProjectSprintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectSprintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectSprintOutcome(UpdateProjectSprintResult(outcome.result()));
	else
		return UpdateProjectSprintOutcome(outcome.error());
}

void Teambition_aliyunClient::updateProjectSprintAsync(const UpdateProjectSprintRequest& request, const UpdateProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectSprint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::UpdateProjectSprintOutcomeCallable Teambition_aliyunClient::updateProjectSprintCallable(const UpdateProjectSprintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectSprintOutcome()>>(
			[this, request]()
			{
			return this->updateProjectSprint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Teambition_aliyunClient::UpdateProjectTaskOutcome Teambition_aliyunClient::updateProjectTask(const UpdateProjectTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectTaskOutcome(UpdateProjectTaskResult(outcome.result()));
	else
		return UpdateProjectTaskOutcome(outcome.error());
}

void Teambition_aliyunClient::updateProjectTaskAsync(const UpdateProjectTaskRequest& request, const UpdateProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Teambition_aliyunClient::UpdateProjectTaskOutcomeCallable Teambition_aliyunClient::updateProjectTaskCallable(const UpdateProjectTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectTaskOutcome()>>(
			[this, request]()
			{
			return this->updateProjectTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

