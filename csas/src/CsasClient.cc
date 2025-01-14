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

#include <alibabacloud/csas/CsasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

namespace
{
	const std::string SERVICE_NAME = "csas";
}

CsasClient::CsasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CsasClient::CsasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CsasClient::CsasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CsasClient::~CsasClient()
{}

CsasClient::AttachApplication2ConnectorOutcome CsasClient::attachApplication2Connector(const AttachApplication2ConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachApplication2ConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachApplication2ConnectorOutcome(AttachApplication2ConnectorResult(outcome.result()));
	else
		return AttachApplication2ConnectorOutcome(outcome.error());
}

void CsasClient::attachApplication2ConnectorAsync(const AttachApplication2ConnectorRequest& request, const AttachApplication2ConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachApplication2Connector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::AttachApplication2ConnectorOutcomeCallable CsasClient::attachApplication2ConnectorCallable(const AttachApplication2ConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachApplication2ConnectorOutcome()>>(
			[this, request]()
			{
			return this->attachApplication2Connector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::AttachPolicy2ApprovalProcessOutcome CsasClient::attachPolicy2ApprovalProcess(const AttachPolicy2ApprovalProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachPolicy2ApprovalProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachPolicy2ApprovalProcessOutcome(AttachPolicy2ApprovalProcessResult(outcome.result()));
	else
		return AttachPolicy2ApprovalProcessOutcome(outcome.error());
}

void CsasClient::attachPolicy2ApprovalProcessAsync(const AttachPolicy2ApprovalProcessRequest& request, const AttachPolicy2ApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachPolicy2ApprovalProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::AttachPolicy2ApprovalProcessOutcomeCallable CsasClient::attachPolicy2ApprovalProcessCallable(const AttachPolicy2ApprovalProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachPolicy2ApprovalProcessOutcome()>>(
			[this, request]()
			{
			return this->attachPolicy2ApprovalProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateApprovalProcessOutcome CsasClient::createApprovalProcess(const CreateApprovalProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApprovalProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApprovalProcessOutcome(CreateApprovalProcessResult(outcome.result()));
	else
		return CreateApprovalProcessOutcome(outcome.error());
}

void CsasClient::createApprovalProcessAsync(const CreateApprovalProcessRequest& request, const CreateApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApprovalProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateApprovalProcessOutcomeCallable CsasClient::createApprovalProcessCallable(const CreateApprovalProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApprovalProcessOutcome()>>(
			[this, request]()
			{
			return this->createApprovalProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateClientUserOutcome CsasClient::createClientUser(const CreateClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClientUserOutcome(CreateClientUserResult(outcome.result()));
	else
		return CreateClientUserOutcome(outcome.error());
}

void CsasClient::createClientUserAsync(const CreateClientUserRequest& request, const CreateClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateClientUserOutcomeCallable CsasClient::createClientUserCallable(const CreateClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClientUserOutcome()>>(
			[this, request]()
			{
			return this->createClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateDynamicRouteOutcome CsasClient::createDynamicRoute(const CreateDynamicRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDynamicRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDynamicRouteOutcome(CreateDynamicRouteResult(outcome.result()));
	else
		return CreateDynamicRouteOutcome(outcome.error());
}

void CsasClient::createDynamicRouteAsync(const CreateDynamicRouteRequest& request, const CreateDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDynamicRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateDynamicRouteOutcomeCallable CsasClient::createDynamicRouteCallable(const CreateDynamicRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDynamicRouteOutcome()>>(
			[this, request]()
			{
			return this->createDynamicRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateIdpDepartmentOutcome CsasClient::createIdpDepartment(const CreateIdpDepartmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIdpDepartmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIdpDepartmentOutcome(CreateIdpDepartmentResult(outcome.result()));
	else
		return CreateIdpDepartmentOutcome(outcome.error());
}

void CsasClient::createIdpDepartmentAsync(const CreateIdpDepartmentRequest& request, const CreateIdpDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIdpDepartment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateIdpDepartmentOutcomeCallable CsasClient::createIdpDepartmentCallable(const CreateIdpDepartmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIdpDepartmentOutcome()>>(
			[this, request]()
			{
			return this->createIdpDepartment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreatePrivateAccessApplicationOutcome CsasClient::createPrivateAccessApplication(const CreatePrivateAccessApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePrivateAccessApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePrivateAccessApplicationOutcome(CreatePrivateAccessApplicationResult(outcome.result()));
	else
		return CreatePrivateAccessApplicationOutcome(outcome.error());
}

void CsasClient::createPrivateAccessApplicationAsync(const CreatePrivateAccessApplicationRequest& request, const CreatePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrivateAccessApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreatePrivateAccessApplicationOutcomeCallable CsasClient::createPrivateAccessApplicationCallable(const CreatePrivateAccessApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePrivateAccessApplicationOutcome()>>(
			[this, request]()
			{
			return this->createPrivateAccessApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreatePrivateAccessPolicyOutcome CsasClient::createPrivateAccessPolicy(const CreatePrivateAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePrivateAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePrivateAccessPolicyOutcome(CreatePrivateAccessPolicyResult(outcome.result()));
	else
		return CreatePrivateAccessPolicyOutcome(outcome.error());
}

void CsasClient::createPrivateAccessPolicyAsync(const CreatePrivateAccessPolicyRequest& request, const CreatePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrivateAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreatePrivateAccessPolicyOutcomeCallable CsasClient::createPrivateAccessPolicyCallable(const CreatePrivateAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePrivateAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->createPrivateAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreatePrivateAccessTagOutcome CsasClient::createPrivateAccessTag(const CreatePrivateAccessTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePrivateAccessTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePrivateAccessTagOutcome(CreatePrivateAccessTagResult(outcome.result()));
	else
		return CreatePrivateAccessTagOutcome(outcome.error());
}

void CsasClient::createPrivateAccessTagAsync(const CreatePrivateAccessTagRequest& request, const CreatePrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrivateAccessTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreatePrivateAccessTagOutcomeCallable CsasClient::createPrivateAccessTagCallable(const CreatePrivateAccessTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePrivateAccessTagOutcome()>>(
			[this, request]()
			{
			return this->createPrivateAccessTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateRegistrationPolicyOutcome CsasClient::createRegistrationPolicy(const CreateRegistrationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRegistrationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRegistrationPolicyOutcome(CreateRegistrationPolicyResult(outcome.result()));
	else
		return CreateRegistrationPolicyOutcome(outcome.error());
}

void CsasClient::createRegistrationPolicyAsync(const CreateRegistrationPolicyRequest& request, const CreateRegistrationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRegistrationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateRegistrationPolicyOutcomeCallable CsasClient::createRegistrationPolicyCallable(const CreateRegistrationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRegistrationPolicyOutcome()>>(
			[this, request]()
			{
			return this->createRegistrationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateUserGroupOutcome CsasClient::createUserGroup(const CreateUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserGroupOutcome(CreateUserGroupResult(outcome.result()));
	else
		return CreateUserGroupOutcome(outcome.error());
}

void CsasClient::createUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateUserGroupOutcomeCallable CsasClient::createUserGroupCallable(const CreateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->createUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateWmBaseImageOutcome CsasClient::createWmBaseImage(const CreateWmBaseImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWmBaseImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWmBaseImageOutcome(CreateWmBaseImageResult(outcome.result()));
	else
		return CreateWmBaseImageOutcome(outcome.error());
}

void CsasClient::createWmBaseImageAsync(const CreateWmBaseImageRequest& request, const CreateWmBaseImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWmBaseImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateWmBaseImageOutcomeCallable CsasClient::createWmBaseImageCallable(const CreateWmBaseImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWmBaseImageOutcome()>>(
			[this, request]()
			{
			return this->createWmBaseImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateWmEmbedTaskOutcome CsasClient::createWmEmbedTask(const CreateWmEmbedTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWmEmbedTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWmEmbedTaskOutcome(CreateWmEmbedTaskResult(outcome.result()));
	else
		return CreateWmEmbedTaskOutcome(outcome.error());
}

void CsasClient::createWmEmbedTaskAsync(const CreateWmEmbedTaskRequest& request, const CreateWmEmbedTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWmEmbedTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateWmEmbedTaskOutcomeCallable CsasClient::createWmEmbedTaskCallable(const CreateWmEmbedTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWmEmbedTaskOutcome()>>(
			[this, request]()
			{
			return this->createWmEmbedTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateWmExtractTaskOutcome CsasClient::createWmExtractTask(const CreateWmExtractTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWmExtractTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWmExtractTaskOutcome(CreateWmExtractTaskResult(outcome.result()));
	else
		return CreateWmExtractTaskOutcome(outcome.error());
}

void CsasClient::createWmExtractTaskAsync(const CreateWmExtractTaskRequest& request, const CreateWmExtractTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWmExtractTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateWmExtractTaskOutcomeCallable CsasClient::createWmExtractTaskCallable(const CreateWmExtractTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWmExtractTaskOutcome()>>(
			[this, request]()
			{
			return this->createWmExtractTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::CreateWmInfoMappingOutcome CsasClient::createWmInfoMapping(const CreateWmInfoMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWmInfoMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWmInfoMappingOutcome(CreateWmInfoMappingResult(outcome.result()));
	else
		return CreateWmInfoMappingOutcome(outcome.error());
}

void CsasClient::createWmInfoMappingAsync(const CreateWmInfoMappingRequest& request, const CreateWmInfoMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWmInfoMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::CreateWmInfoMappingOutcomeCallable CsasClient::createWmInfoMappingCallable(const CreateWmInfoMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWmInfoMappingOutcome()>>(
			[this, request]()
			{
			return this->createWmInfoMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeleteApprovalProcessesOutcome CsasClient::deleteApprovalProcesses(const DeleteApprovalProcessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApprovalProcessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApprovalProcessesOutcome(DeleteApprovalProcessesResult(outcome.result()));
	else
		return DeleteApprovalProcessesOutcome(outcome.error());
}

void CsasClient::deleteApprovalProcessesAsync(const DeleteApprovalProcessesRequest& request, const DeleteApprovalProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApprovalProcesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeleteApprovalProcessesOutcomeCallable CsasClient::deleteApprovalProcessesCallable(const DeleteApprovalProcessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApprovalProcessesOutcome()>>(
			[this, request]()
			{
			return this->deleteApprovalProcesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeleteClientUserOutcome CsasClient::deleteClientUser(const DeleteClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClientUserOutcome(DeleteClientUserResult(outcome.result()));
	else
		return DeleteClientUserOutcome(outcome.error());
}

void CsasClient::deleteClientUserAsync(const DeleteClientUserRequest& request, const DeleteClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeleteClientUserOutcomeCallable CsasClient::deleteClientUserCallable(const DeleteClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClientUserOutcome()>>(
			[this, request]()
			{
			return this->deleteClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeleteDynamicRouteOutcome CsasClient::deleteDynamicRoute(const DeleteDynamicRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDynamicRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDynamicRouteOutcome(DeleteDynamicRouteResult(outcome.result()));
	else
		return DeleteDynamicRouteOutcome(outcome.error());
}

void CsasClient::deleteDynamicRouteAsync(const DeleteDynamicRouteRequest& request, const DeleteDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDynamicRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeleteDynamicRouteOutcomeCallable CsasClient::deleteDynamicRouteCallable(const DeleteDynamicRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDynamicRouteOutcome()>>(
			[this, request]()
			{
			return this->deleteDynamicRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeleteIdpDepartmentOutcome CsasClient::deleteIdpDepartment(const DeleteIdpDepartmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIdpDepartmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIdpDepartmentOutcome(DeleteIdpDepartmentResult(outcome.result()));
	else
		return DeleteIdpDepartmentOutcome(outcome.error());
}

void CsasClient::deleteIdpDepartmentAsync(const DeleteIdpDepartmentRequest& request, const DeleteIdpDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIdpDepartment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeleteIdpDepartmentOutcomeCallable CsasClient::deleteIdpDepartmentCallable(const DeleteIdpDepartmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIdpDepartmentOutcome()>>(
			[this, request]()
			{
			return this->deleteIdpDepartment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeletePrivateAccessApplicationOutcome CsasClient::deletePrivateAccessApplication(const DeletePrivateAccessApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrivateAccessApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrivateAccessApplicationOutcome(DeletePrivateAccessApplicationResult(outcome.result()));
	else
		return DeletePrivateAccessApplicationOutcome(outcome.error());
}

void CsasClient::deletePrivateAccessApplicationAsync(const DeletePrivateAccessApplicationRequest& request, const DeletePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrivateAccessApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeletePrivateAccessApplicationOutcomeCallable CsasClient::deletePrivateAccessApplicationCallable(const DeletePrivateAccessApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrivateAccessApplicationOutcome()>>(
			[this, request]()
			{
			return this->deletePrivateAccessApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeletePrivateAccessPolicyOutcome CsasClient::deletePrivateAccessPolicy(const DeletePrivateAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrivateAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrivateAccessPolicyOutcome(DeletePrivateAccessPolicyResult(outcome.result()));
	else
		return DeletePrivateAccessPolicyOutcome(outcome.error());
}

void CsasClient::deletePrivateAccessPolicyAsync(const DeletePrivateAccessPolicyRequest& request, const DeletePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrivateAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeletePrivateAccessPolicyOutcomeCallable CsasClient::deletePrivateAccessPolicyCallable(const DeletePrivateAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrivateAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->deletePrivateAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeletePrivateAccessTagOutcome CsasClient::deletePrivateAccessTag(const DeletePrivateAccessTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrivateAccessTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrivateAccessTagOutcome(DeletePrivateAccessTagResult(outcome.result()));
	else
		return DeletePrivateAccessTagOutcome(outcome.error());
}

void CsasClient::deletePrivateAccessTagAsync(const DeletePrivateAccessTagRequest& request, const DeletePrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrivateAccessTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeletePrivateAccessTagOutcomeCallable CsasClient::deletePrivateAccessTagCallable(const DeletePrivateAccessTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrivateAccessTagOutcome()>>(
			[this, request]()
			{
			return this->deletePrivateAccessTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeleteRegistrationPoliciesOutcome CsasClient::deleteRegistrationPolicies(const DeleteRegistrationPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRegistrationPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRegistrationPoliciesOutcome(DeleteRegistrationPoliciesResult(outcome.result()));
	else
		return DeleteRegistrationPoliciesOutcome(outcome.error());
}

void CsasClient::deleteRegistrationPoliciesAsync(const DeleteRegistrationPoliciesRequest& request, const DeleteRegistrationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRegistrationPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeleteRegistrationPoliciesOutcomeCallable CsasClient::deleteRegistrationPoliciesCallable(const DeleteRegistrationPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRegistrationPoliciesOutcome()>>(
			[this, request]()
			{
			return this->deleteRegistrationPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeleteUserDevicesOutcome CsasClient::deleteUserDevices(const DeleteUserDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserDevicesOutcome(DeleteUserDevicesResult(outcome.result()));
	else
		return DeleteUserDevicesOutcome(outcome.error());
}

void CsasClient::deleteUserDevicesAsync(const DeleteUserDevicesRequest& request, const DeleteUserDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeleteUserDevicesOutcomeCallable CsasClient::deleteUserDevicesCallable(const DeleteUserDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserDevicesOutcome()>>(
			[this, request]()
			{
			return this->deleteUserDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DeleteUserGroupOutcome CsasClient::deleteUserGroup(const DeleteUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserGroupOutcome(DeleteUserGroupResult(outcome.result()));
	else
		return DeleteUserGroupOutcome(outcome.error());
}

void CsasClient::deleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DeleteUserGroupOutcomeCallable CsasClient::deleteUserGroupCallable(const DeleteUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DetachApplication2ConnectorOutcome CsasClient::detachApplication2Connector(const DetachApplication2ConnectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachApplication2ConnectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachApplication2ConnectorOutcome(DetachApplication2ConnectorResult(outcome.result()));
	else
		return DetachApplication2ConnectorOutcome(outcome.error());
}

void CsasClient::detachApplication2ConnectorAsync(const DetachApplication2ConnectorRequest& request, const DetachApplication2ConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachApplication2Connector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DetachApplication2ConnectorOutcomeCallable CsasClient::detachApplication2ConnectorCallable(const DetachApplication2ConnectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachApplication2ConnectorOutcome()>>(
			[this, request]()
			{
			return this->detachApplication2Connector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::DetachPolicy2ApprovalProcessOutcome CsasClient::detachPolicy2ApprovalProcess(const DetachPolicy2ApprovalProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachPolicy2ApprovalProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachPolicy2ApprovalProcessOutcome(DetachPolicy2ApprovalProcessResult(outcome.result()));
	else
		return DetachPolicy2ApprovalProcessOutcome(outcome.error());
}

void CsasClient::detachPolicy2ApprovalProcessAsync(const DetachPolicy2ApprovalProcessRequest& request, const DetachPolicy2ApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachPolicy2ApprovalProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::DetachPolicy2ApprovalProcessOutcomeCallable CsasClient::detachPolicy2ApprovalProcessCallable(const DetachPolicy2ApprovalProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachPolicy2ApprovalProcessOutcome()>>(
			[this, request]()
			{
			return this->detachPolicy2ApprovalProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ExportUserDevicesOutcome CsasClient::exportUserDevices(const ExportUserDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportUserDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportUserDevicesOutcome(ExportUserDevicesResult(outcome.result()));
	else
		return ExportUserDevicesOutcome(outcome.error());
}

void CsasClient::exportUserDevicesAsync(const ExportUserDevicesRequest& request, const ExportUserDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportUserDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ExportUserDevicesOutcomeCallable CsasClient::exportUserDevicesCallable(const ExportUserDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportUserDevicesOutcome()>>(
			[this, request]()
			{
			return this->exportUserDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetActiveIdpConfigOutcome CsasClient::getActiveIdpConfig(const GetActiveIdpConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetActiveIdpConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetActiveIdpConfigOutcome(GetActiveIdpConfigResult(outcome.result()));
	else
		return GetActiveIdpConfigOutcome(outcome.error());
}

void CsasClient::getActiveIdpConfigAsync(const GetActiveIdpConfigRequest& request, const GetActiveIdpConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getActiveIdpConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetActiveIdpConfigOutcomeCallable CsasClient::getActiveIdpConfigCallable(const GetActiveIdpConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetActiveIdpConfigOutcome()>>(
			[this, request]()
			{
			return this->getActiveIdpConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetApprovalOutcome CsasClient::getApproval(const GetApprovalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApprovalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApprovalOutcome(GetApprovalResult(outcome.result()));
	else
		return GetApprovalOutcome(outcome.error());
}

void CsasClient::getApprovalAsync(const GetApprovalRequest& request, const GetApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApproval(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetApprovalOutcomeCallable CsasClient::getApprovalCallable(const GetApprovalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApprovalOutcome()>>(
			[this, request]()
			{
			return this->getApproval(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetApprovalProcessOutcome CsasClient::getApprovalProcess(const GetApprovalProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApprovalProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApprovalProcessOutcome(GetApprovalProcessResult(outcome.result()));
	else
		return GetApprovalProcessOutcome(outcome.error());
}

void CsasClient::getApprovalProcessAsync(const GetApprovalProcessRequest& request, const GetApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApprovalProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetApprovalProcessOutcomeCallable CsasClient::getApprovalProcessCallable(const GetApprovalProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApprovalProcessOutcome()>>(
			[this, request]()
			{
			return this->getApprovalProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetApprovalSchemaOutcome CsasClient::getApprovalSchema(const GetApprovalSchemaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApprovalSchemaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApprovalSchemaOutcome(GetApprovalSchemaResult(outcome.result()));
	else
		return GetApprovalSchemaOutcome(outcome.error());
}

void CsasClient::getApprovalSchemaAsync(const GetApprovalSchemaRequest& request, const GetApprovalSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApprovalSchema(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetApprovalSchemaOutcomeCallable CsasClient::getApprovalSchemaCallable(const GetApprovalSchemaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApprovalSchemaOutcome()>>(
			[this, request]()
			{
			return this->getApprovalSchema(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetBootAndAntiUninstallPolicyOutcome CsasClient::getBootAndAntiUninstallPolicy(const GetBootAndAntiUninstallPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBootAndAntiUninstallPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBootAndAntiUninstallPolicyOutcome(GetBootAndAntiUninstallPolicyResult(outcome.result()));
	else
		return GetBootAndAntiUninstallPolicyOutcome(outcome.error());
}

void CsasClient::getBootAndAntiUninstallPolicyAsync(const GetBootAndAntiUninstallPolicyRequest& request, const GetBootAndAntiUninstallPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBootAndAntiUninstallPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetBootAndAntiUninstallPolicyOutcomeCallable CsasClient::getBootAndAntiUninstallPolicyCallable(const GetBootAndAntiUninstallPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBootAndAntiUninstallPolicyOutcome()>>(
			[this, request]()
			{
			return this->getBootAndAntiUninstallPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetClientUserOutcome CsasClient::getClientUser(const GetClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClientUserOutcome(GetClientUserResult(outcome.result()));
	else
		return GetClientUserOutcome(outcome.error());
}

void CsasClient::getClientUserAsync(const GetClientUserRequest& request, const GetClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetClientUserOutcomeCallable CsasClient::getClientUserCallable(const GetClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClientUserOutcome()>>(
			[this, request]()
			{
			return this->getClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetDynamicRouteOutcome CsasClient::getDynamicRoute(const GetDynamicRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDynamicRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDynamicRouteOutcome(GetDynamicRouteResult(outcome.result()));
	else
		return GetDynamicRouteOutcome(outcome.error());
}

void CsasClient::getDynamicRouteAsync(const GetDynamicRouteRequest& request, const GetDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDynamicRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetDynamicRouteOutcomeCallable CsasClient::getDynamicRouteCallable(const GetDynamicRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDynamicRouteOutcome()>>(
			[this, request]()
			{
			return this->getDynamicRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetIdpConfigOutcome CsasClient::getIdpConfig(const GetIdpConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIdpConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIdpConfigOutcome(GetIdpConfigResult(outcome.result()));
	else
		return GetIdpConfigOutcome(outcome.error());
}

void CsasClient::getIdpConfigAsync(const GetIdpConfigRequest& request, const GetIdpConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIdpConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetIdpConfigOutcomeCallable CsasClient::getIdpConfigCallable(const GetIdpConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIdpConfigOutcome()>>(
			[this, request]()
			{
			return this->getIdpConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetPrivateAccessApplicationOutcome CsasClient::getPrivateAccessApplication(const GetPrivateAccessApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrivateAccessApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrivateAccessApplicationOutcome(GetPrivateAccessApplicationResult(outcome.result()));
	else
		return GetPrivateAccessApplicationOutcome(outcome.error());
}

void CsasClient::getPrivateAccessApplicationAsync(const GetPrivateAccessApplicationRequest& request, const GetPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrivateAccessApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetPrivateAccessApplicationOutcomeCallable CsasClient::getPrivateAccessApplicationCallable(const GetPrivateAccessApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrivateAccessApplicationOutcome()>>(
			[this, request]()
			{
			return this->getPrivateAccessApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetPrivateAccessPolicyOutcome CsasClient::getPrivateAccessPolicy(const GetPrivateAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrivateAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrivateAccessPolicyOutcome(GetPrivateAccessPolicyResult(outcome.result()));
	else
		return GetPrivateAccessPolicyOutcome(outcome.error());
}

void CsasClient::getPrivateAccessPolicyAsync(const GetPrivateAccessPolicyRequest& request, const GetPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrivateAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetPrivateAccessPolicyOutcomeCallable CsasClient::getPrivateAccessPolicyCallable(const GetPrivateAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrivateAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->getPrivateAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetRegistrationPolicyOutcome CsasClient::getRegistrationPolicy(const GetRegistrationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRegistrationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRegistrationPolicyOutcome(GetRegistrationPolicyResult(outcome.result()));
	else
		return GetRegistrationPolicyOutcome(outcome.error());
}

void CsasClient::getRegistrationPolicyAsync(const GetRegistrationPolicyRequest& request, const GetRegistrationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRegistrationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetRegistrationPolicyOutcomeCallable CsasClient::getRegistrationPolicyCallable(const GetRegistrationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRegistrationPolicyOutcome()>>(
			[this, request]()
			{
			return this->getRegistrationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetUserDeviceOutcome CsasClient::getUserDevice(const GetUserDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserDeviceOutcome(GetUserDeviceResult(outcome.result()));
	else
		return GetUserDeviceOutcome(outcome.error());
}

void CsasClient::getUserDeviceAsync(const GetUserDeviceRequest& request, const GetUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetUserDeviceOutcomeCallable CsasClient::getUserDeviceCallable(const GetUserDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserDeviceOutcome()>>(
			[this, request]()
			{
			return this->getUserDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetUserGroupOutcome CsasClient::getUserGroup(const GetUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserGroupOutcome(GetUserGroupResult(outcome.result()));
	else
		return GetUserGroupOutcome(outcome.error());
}

void CsasClient::getUserGroupAsync(const GetUserGroupRequest& request, const GetUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetUserGroupOutcomeCallable CsasClient::getUserGroupCallable(const GetUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserGroupOutcome()>>(
			[this, request]()
			{
			return this->getUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetWmEmbedTaskOutcome CsasClient::getWmEmbedTask(const GetWmEmbedTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWmEmbedTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWmEmbedTaskOutcome(GetWmEmbedTaskResult(outcome.result()));
	else
		return GetWmEmbedTaskOutcome(outcome.error());
}

void CsasClient::getWmEmbedTaskAsync(const GetWmEmbedTaskRequest& request, const GetWmEmbedTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWmEmbedTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetWmEmbedTaskOutcomeCallable CsasClient::getWmEmbedTaskCallable(const GetWmEmbedTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWmEmbedTaskOutcome()>>(
			[this, request]()
			{
			return this->getWmEmbedTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::GetWmExtractTaskOutcome CsasClient::getWmExtractTask(const GetWmExtractTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWmExtractTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWmExtractTaskOutcome(GetWmExtractTaskResult(outcome.result()));
	else
		return GetWmExtractTaskOutcome(outcome.error());
}

void CsasClient::getWmExtractTaskAsync(const GetWmExtractTaskRequest& request, const GetWmExtractTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWmExtractTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::GetWmExtractTaskOutcomeCallable CsasClient::getWmExtractTaskCallable(const GetWmExtractTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWmExtractTaskOutcome()>>(
			[this, request]()
			{
			return this->getWmExtractTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListApplicationsForPrivateAccessPolicyOutcome CsasClient::listApplicationsForPrivateAccessPolicy(const ListApplicationsForPrivateAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsForPrivateAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsForPrivateAccessPolicyOutcome(ListApplicationsForPrivateAccessPolicyResult(outcome.result()));
	else
		return ListApplicationsForPrivateAccessPolicyOutcome(outcome.error());
}

void CsasClient::listApplicationsForPrivateAccessPolicyAsync(const ListApplicationsForPrivateAccessPolicyRequest& request, const ListApplicationsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationsForPrivateAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListApplicationsForPrivateAccessPolicyOutcomeCallable CsasClient::listApplicationsForPrivateAccessPolicyCallable(const ListApplicationsForPrivateAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsForPrivateAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->listApplicationsForPrivateAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListApplicationsForPrivateAccessTagOutcome CsasClient::listApplicationsForPrivateAccessTag(const ListApplicationsForPrivateAccessTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsForPrivateAccessTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsForPrivateAccessTagOutcome(ListApplicationsForPrivateAccessTagResult(outcome.result()));
	else
		return ListApplicationsForPrivateAccessTagOutcome(outcome.error());
}

void CsasClient::listApplicationsForPrivateAccessTagAsync(const ListApplicationsForPrivateAccessTagRequest& request, const ListApplicationsForPrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationsForPrivateAccessTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListApplicationsForPrivateAccessTagOutcomeCallable CsasClient::listApplicationsForPrivateAccessTagCallable(const ListApplicationsForPrivateAccessTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsForPrivateAccessTagOutcome()>>(
			[this, request]()
			{
			return this->listApplicationsForPrivateAccessTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListApprovalProcessesOutcome CsasClient::listApprovalProcesses(const ListApprovalProcessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApprovalProcessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApprovalProcessesOutcome(ListApprovalProcessesResult(outcome.result()));
	else
		return ListApprovalProcessesOutcome(outcome.error());
}

void CsasClient::listApprovalProcessesAsync(const ListApprovalProcessesRequest& request, const ListApprovalProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApprovalProcesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListApprovalProcessesOutcomeCallable CsasClient::listApprovalProcessesCallable(const ListApprovalProcessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApprovalProcessesOutcome()>>(
			[this, request]()
			{
			return this->listApprovalProcesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListApprovalProcessesForApprovalSchemasOutcome CsasClient::listApprovalProcessesForApprovalSchemas(const ListApprovalProcessesForApprovalSchemasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApprovalProcessesForApprovalSchemasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApprovalProcessesForApprovalSchemasOutcome(ListApprovalProcessesForApprovalSchemasResult(outcome.result()));
	else
		return ListApprovalProcessesForApprovalSchemasOutcome(outcome.error());
}

void CsasClient::listApprovalProcessesForApprovalSchemasAsync(const ListApprovalProcessesForApprovalSchemasRequest& request, const ListApprovalProcessesForApprovalSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApprovalProcessesForApprovalSchemas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListApprovalProcessesForApprovalSchemasOutcomeCallable CsasClient::listApprovalProcessesForApprovalSchemasCallable(const ListApprovalProcessesForApprovalSchemasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApprovalProcessesForApprovalSchemasOutcome()>>(
			[this, request]()
			{
			return this->listApprovalProcessesForApprovalSchemas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListApprovalSchemasOutcome CsasClient::listApprovalSchemas(const ListApprovalSchemasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApprovalSchemasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApprovalSchemasOutcome(ListApprovalSchemasResult(outcome.result()));
	else
		return ListApprovalSchemasOutcome(outcome.error());
}

void CsasClient::listApprovalSchemasAsync(const ListApprovalSchemasRequest& request, const ListApprovalSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApprovalSchemas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListApprovalSchemasOutcomeCallable CsasClient::listApprovalSchemasCallable(const ListApprovalSchemasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApprovalSchemasOutcome()>>(
			[this, request]()
			{
			return this->listApprovalSchemas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListApprovalSchemasForApprovalProcessesOutcome CsasClient::listApprovalSchemasForApprovalProcesses(const ListApprovalSchemasForApprovalProcessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApprovalSchemasForApprovalProcessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApprovalSchemasForApprovalProcessesOutcome(ListApprovalSchemasForApprovalProcessesResult(outcome.result()));
	else
		return ListApprovalSchemasForApprovalProcessesOutcome(outcome.error());
}

void CsasClient::listApprovalSchemasForApprovalProcessesAsync(const ListApprovalSchemasForApprovalProcessesRequest& request, const ListApprovalSchemasForApprovalProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApprovalSchemasForApprovalProcesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListApprovalSchemasForApprovalProcessesOutcomeCallable CsasClient::listApprovalSchemasForApprovalProcessesCallable(const ListApprovalSchemasForApprovalProcessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApprovalSchemasForApprovalProcessesOutcome()>>(
			[this, request]()
			{
			return this->listApprovalSchemasForApprovalProcesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListApprovalsOutcome CsasClient::listApprovals(const ListApprovalsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApprovalsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApprovalsOutcome(ListApprovalsResult(outcome.result()));
	else
		return ListApprovalsOutcome(outcome.error());
}

void CsasClient::listApprovalsAsync(const ListApprovalsRequest& request, const ListApprovalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApprovals(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListApprovalsOutcomeCallable CsasClient::listApprovalsCallable(const ListApprovalsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApprovalsOutcome()>>(
			[this, request]()
			{
			return this->listApprovals(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListClientUsersOutcome CsasClient::listClientUsers(const ListClientUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClientUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClientUsersOutcome(ListClientUsersResult(outcome.result()));
	else
		return ListClientUsersOutcome(outcome.error());
}

void CsasClient::listClientUsersAsync(const ListClientUsersRequest& request, const ListClientUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClientUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListClientUsersOutcomeCallable CsasClient::listClientUsersCallable(const ListClientUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClientUsersOutcome()>>(
			[this, request]()
			{
			return this->listClientUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListConnectorsOutcome CsasClient::listConnectors(const ListConnectorsRequest &request) const
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

void CsasClient::listConnectorsAsync(const ListConnectorsRequest& request, const ListConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConnectors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListConnectorsOutcomeCallable CsasClient::listConnectorsCallable(const ListConnectorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConnectorsOutcome()>>(
			[this, request]()
			{
			return this->listConnectors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListDynamicRouteRegionsOutcome CsasClient::listDynamicRouteRegions(const ListDynamicRouteRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDynamicRouteRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDynamicRouteRegionsOutcome(ListDynamicRouteRegionsResult(outcome.result()));
	else
		return ListDynamicRouteRegionsOutcome(outcome.error());
}

void CsasClient::listDynamicRouteRegionsAsync(const ListDynamicRouteRegionsRequest& request, const ListDynamicRouteRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDynamicRouteRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListDynamicRouteRegionsOutcomeCallable CsasClient::listDynamicRouteRegionsCallable(const ListDynamicRouteRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDynamicRouteRegionsOutcome()>>(
			[this, request]()
			{
			return this->listDynamicRouteRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListDynamicRoutesOutcome CsasClient::listDynamicRoutes(const ListDynamicRoutesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDynamicRoutesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDynamicRoutesOutcome(ListDynamicRoutesResult(outcome.result()));
	else
		return ListDynamicRoutesOutcome(outcome.error());
}

void CsasClient::listDynamicRoutesAsync(const ListDynamicRoutesRequest& request, const ListDynamicRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDynamicRoutes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListDynamicRoutesOutcomeCallable CsasClient::listDynamicRoutesCallable(const ListDynamicRoutesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDynamicRoutesOutcome()>>(
			[this, request]()
			{
			return this->listDynamicRoutes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListExcessiveDeviceRegistrationApplicationsOutcome CsasClient::listExcessiveDeviceRegistrationApplications(const ListExcessiveDeviceRegistrationApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExcessiveDeviceRegistrationApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExcessiveDeviceRegistrationApplicationsOutcome(ListExcessiveDeviceRegistrationApplicationsResult(outcome.result()));
	else
		return ListExcessiveDeviceRegistrationApplicationsOutcome(outcome.error());
}

void CsasClient::listExcessiveDeviceRegistrationApplicationsAsync(const ListExcessiveDeviceRegistrationApplicationsRequest& request, const ListExcessiveDeviceRegistrationApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExcessiveDeviceRegistrationApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListExcessiveDeviceRegistrationApplicationsOutcomeCallable CsasClient::listExcessiveDeviceRegistrationApplicationsCallable(const ListExcessiveDeviceRegistrationApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExcessiveDeviceRegistrationApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listExcessiveDeviceRegistrationApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListIdpConfigsOutcome CsasClient::listIdpConfigs(const ListIdpConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIdpConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIdpConfigsOutcome(ListIdpConfigsResult(outcome.result()));
	else
		return ListIdpConfigsOutcome(outcome.error());
}

void CsasClient::listIdpConfigsAsync(const ListIdpConfigsRequest& request, const ListIdpConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIdpConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListIdpConfigsOutcomeCallable CsasClient::listIdpConfigsCallable(const ListIdpConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIdpConfigsOutcome()>>(
			[this, request]()
			{
			return this->listIdpConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListIdpDepartmentsOutcome CsasClient::listIdpDepartments(const ListIdpDepartmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIdpDepartmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIdpDepartmentsOutcome(ListIdpDepartmentsResult(outcome.result()));
	else
		return ListIdpDepartmentsOutcome(outcome.error());
}

void CsasClient::listIdpDepartmentsAsync(const ListIdpDepartmentsRequest& request, const ListIdpDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIdpDepartments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListIdpDepartmentsOutcomeCallable CsasClient::listIdpDepartmentsCallable(const ListIdpDepartmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIdpDepartmentsOutcome()>>(
			[this, request]()
			{
			return this->listIdpDepartments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListNacUserCertOutcome CsasClient::listNacUserCert(const ListNacUserCertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNacUserCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNacUserCertOutcome(ListNacUserCertResult(outcome.result()));
	else
		return ListNacUserCertOutcome(outcome.error());
}

void CsasClient::listNacUserCertAsync(const ListNacUserCertRequest& request, const ListNacUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNacUserCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListNacUserCertOutcomeCallable CsasClient::listNacUserCertCallable(const ListNacUserCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNacUserCertOutcome()>>(
			[this, request]()
			{
			return this->listNacUserCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPolicesForPrivateAccessApplicationOutcome CsasClient::listPolicesForPrivateAccessApplication(const ListPolicesForPrivateAccessApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPolicesForPrivateAccessApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPolicesForPrivateAccessApplicationOutcome(ListPolicesForPrivateAccessApplicationResult(outcome.result()));
	else
		return ListPolicesForPrivateAccessApplicationOutcome(outcome.error());
}

void CsasClient::listPolicesForPrivateAccessApplicationAsync(const ListPolicesForPrivateAccessApplicationRequest& request, const ListPolicesForPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicesForPrivateAccessApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPolicesForPrivateAccessApplicationOutcomeCallable CsasClient::listPolicesForPrivateAccessApplicationCallable(const ListPolicesForPrivateAccessApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPolicesForPrivateAccessApplicationOutcome()>>(
			[this, request]()
			{
			return this->listPolicesForPrivateAccessApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPolicesForPrivateAccessTagOutcome CsasClient::listPolicesForPrivateAccessTag(const ListPolicesForPrivateAccessTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPolicesForPrivateAccessTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPolicesForPrivateAccessTagOutcome(ListPolicesForPrivateAccessTagResult(outcome.result()));
	else
		return ListPolicesForPrivateAccessTagOutcome(outcome.error());
}

void CsasClient::listPolicesForPrivateAccessTagAsync(const ListPolicesForPrivateAccessTagRequest& request, const ListPolicesForPrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicesForPrivateAccessTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPolicesForPrivateAccessTagOutcomeCallable CsasClient::listPolicesForPrivateAccessTagCallable(const ListPolicesForPrivateAccessTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPolicesForPrivateAccessTagOutcome()>>(
			[this, request]()
			{
			return this->listPolicesForPrivateAccessTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPolicesForUserGroupOutcome CsasClient::listPolicesForUserGroup(const ListPolicesForUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPolicesForUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPolicesForUserGroupOutcome(ListPolicesForUserGroupResult(outcome.result()));
	else
		return ListPolicesForUserGroupOutcome(outcome.error());
}

void CsasClient::listPolicesForUserGroupAsync(const ListPolicesForUserGroupRequest& request, const ListPolicesForUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicesForUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPolicesForUserGroupOutcomeCallable CsasClient::listPolicesForUserGroupCallable(const ListPolicesForUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPolicesForUserGroupOutcome()>>(
			[this, request]()
			{
			return this->listPolicesForUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPopTrafficStatisticsOutcome CsasClient::listPopTrafficStatistics(const ListPopTrafficStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPopTrafficStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPopTrafficStatisticsOutcome(ListPopTrafficStatisticsResult(outcome.result()));
	else
		return ListPopTrafficStatisticsOutcome(outcome.error());
}

void CsasClient::listPopTrafficStatisticsAsync(const ListPopTrafficStatisticsRequest& request, const ListPopTrafficStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPopTrafficStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPopTrafficStatisticsOutcomeCallable CsasClient::listPopTrafficStatisticsCallable(const ListPopTrafficStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPopTrafficStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listPopTrafficStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPrivateAccessApplicationsOutcome CsasClient::listPrivateAccessApplications(const ListPrivateAccessApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivateAccessApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivateAccessApplicationsOutcome(ListPrivateAccessApplicationsResult(outcome.result()));
	else
		return ListPrivateAccessApplicationsOutcome(outcome.error());
}

void CsasClient::listPrivateAccessApplicationsAsync(const ListPrivateAccessApplicationsRequest& request, const ListPrivateAccessApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivateAccessApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPrivateAccessApplicationsOutcomeCallable CsasClient::listPrivateAccessApplicationsCallable(const ListPrivateAccessApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivateAccessApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listPrivateAccessApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPrivateAccessApplicationsForDynamicRouteOutcome CsasClient::listPrivateAccessApplicationsForDynamicRoute(const ListPrivateAccessApplicationsForDynamicRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivateAccessApplicationsForDynamicRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivateAccessApplicationsForDynamicRouteOutcome(ListPrivateAccessApplicationsForDynamicRouteResult(outcome.result()));
	else
		return ListPrivateAccessApplicationsForDynamicRouteOutcome(outcome.error());
}

void CsasClient::listPrivateAccessApplicationsForDynamicRouteAsync(const ListPrivateAccessApplicationsForDynamicRouteRequest& request, const ListPrivateAccessApplicationsForDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivateAccessApplicationsForDynamicRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPrivateAccessApplicationsForDynamicRouteOutcomeCallable CsasClient::listPrivateAccessApplicationsForDynamicRouteCallable(const ListPrivateAccessApplicationsForDynamicRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivateAccessApplicationsForDynamicRouteOutcome()>>(
			[this, request]()
			{
			return this->listPrivateAccessApplicationsForDynamicRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPrivateAccessPolicesOutcome CsasClient::listPrivateAccessPolices(const ListPrivateAccessPolicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivateAccessPolicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivateAccessPolicesOutcome(ListPrivateAccessPolicesResult(outcome.result()));
	else
		return ListPrivateAccessPolicesOutcome(outcome.error());
}

void CsasClient::listPrivateAccessPolicesAsync(const ListPrivateAccessPolicesRequest& request, const ListPrivateAccessPolicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivateAccessPolices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPrivateAccessPolicesOutcomeCallable CsasClient::listPrivateAccessPolicesCallable(const ListPrivateAccessPolicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivateAccessPolicesOutcome()>>(
			[this, request]()
			{
			return this->listPrivateAccessPolices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPrivateAccessTagsOutcome CsasClient::listPrivateAccessTags(const ListPrivateAccessTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivateAccessTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivateAccessTagsOutcome(ListPrivateAccessTagsResult(outcome.result()));
	else
		return ListPrivateAccessTagsOutcome(outcome.error());
}

void CsasClient::listPrivateAccessTagsAsync(const ListPrivateAccessTagsRequest& request, const ListPrivateAccessTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivateAccessTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPrivateAccessTagsOutcomeCallable CsasClient::listPrivateAccessTagsCallable(const ListPrivateAccessTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivateAccessTagsOutcome()>>(
			[this, request]()
			{
			return this->listPrivateAccessTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListPrivateAccessTagsForDynamicRouteOutcome CsasClient::listPrivateAccessTagsForDynamicRoute(const ListPrivateAccessTagsForDynamicRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivateAccessTagsForDynamicRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivateAccessTagsForDynamicRouteOutcome(ListPrivateAccessTagsForDynamicRouteResult(outcome.result()));
	else
		return ListPrivateAccessTagsForDynamicRouteOutcome(outcome.error());
}

void CsasClient::listPrivateAccessTagsForDynamicRouteAsync(const ListPrivateAccessTagsForDynamicRouteRequest& request, const ListPrivateAccessTagsForDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivateAccessTagsForDynamicRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListPrivateAccessTagsForDynamicRouteOutcomeCallable CsasClient::listPrivateAccessTagsForDynamicRouteCallable(const ListPrivateAccessTagsForDynamicRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivateAccessTagsForDynamicRouteOutcome()>>(
			[this, request]()
			{
			return this->listPrivateAccessTagsForDynamicRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListRegistrationPoliciesOutcome CsasClient::listRegistrationPolicies(const ListRegistrationPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegistrationPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegistrationPoliciesOutcome(ListRegistrationPoliciesResult(outcome.result()));
	else
		return ListRegistrationPoliciesOutcome(outcome.error());
}

void CsasClient::listRegistrationPoliciesAsync(const ListRegistrationPoliciesRequest& request, const ListRegistrationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegistrationPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListRegistrationPoliciesOutcomeCallable CsasClient::listRegistrationPoliciesCallable(const ListRegistrationPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegistrationPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listRegistrationPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListRegistrationPoliciesForUserGroupOutcome CsasClient::listRegistrationPoliciesForUserGroup(const ListRegistrationPoliciesForUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegistrationPoliciesForUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegistrationPoliciesForUserGroupOutcome(ListRegistrationPoliciesForUserGroupResult(outcome.result()));
	else
		return ListRegistrationPoliciesForUserGroupOutcome(outcome.error());
}

void CsasClient::listRegistrationPoliciesForUserGroupAsync(const ListRegistrationPoliciesForUserGroupRequest& request, const ListRegistrationPoliciesForUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegistrationPoliciesForUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListRegistrationPoliciesForUserGroupOutcomeCallable CsasClient::listRegistrationPoliciesForUserGroupCallable(const ListRegistrationPoliciesForUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegistrationPoliciesForUserGroupOutcome()>>(
			[this, request]()
			{
			return this->listRegistrationPoliciesForUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListSoftwareForUserDeviceOutcome CsasClient::listSoftwareForUserDevice(const ListSoftwareForUserDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSoftwareForUserDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSoftwareForUserDeviceOutcome(ListSoftwareForUserDeviceResult(outcome.result()));
	else
		return ListSoftwareForUserDeviceOutcome(outcome.error());
}

void CsasClient::listSoftwareForUserDeviceAsync(const ListSoftwareForUserDeviceRequest& request, const ListSoftwareForUserDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSoftwareForUserDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListSoftwareForUserDeviceOutcomeCallable CsasClient::listSoftwareForUserDeviceCallable(const ListSoftwareForUserDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSoftwareForUserDeviceOutcome()>>(
			[this, request]()
			{
			return this->listSoftwareForUserDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListTagsForPrivateAccessApplicationOutcome CsasClient::listTagsForPrivateAccessApplication(const ListTagsForPrivateAccessApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagsForPrivateAccessApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagsForPrivateAccessApplicationOutcome(ListTagsForPrivateAccessApplicationResult(outcome.result()));
	else
		return ListTagsForPrivateAccessApplicationOutcome(outcome.error());
}

void CsasClient::listTagsForPrivateAccessApplicationAsync(const ListTagsForPrivateAccessApplicationRequest& request, const ListTagsForPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagsForPrivateAccessApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListTagsForPrivateAccessApplicationOutcomeCallable CsasClient::listTagsForPrivateAccessApplicationCallable(const ListTagsForPrivateAccessApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsForPrivateAccessApplicationOutcome()>>(
			[this, request]()
			{
			return this->listTagsForPrivateAccessApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListTagsForPrivateAccessPolicyOutcome CsasClient::listTagsForPrivateAccessPolicy(const ListTagsForPrivateAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagsForPrivateAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagsForPrivateAccessPolicyOutcome(ListTagsForPrivateAccessPolicyResult(outcome.result()));
	else
		return ListTagsForPrivateAccessPolicyOutcome(outcome.error());
}

void CsasClient::listTagsForPrivateAccessPolicyAsync(const ListTagsForPrivateAccessPolicyRequest& request, const ListTagsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagsForPrivateAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListTagsForPrivateAccessPolicyOutcomeCallable CsasClient::listTagsForPrivateAccessPolicyCallable(const ListTagsForPrivateAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsForPrivateAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->listTagsForPrivateAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListUninstallApplicationsOutcome CsasClient::listUninstallApplications(const ListUninstallApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUninstallApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUninstallApplicationsOutcome(ListUninstallApplicationsResult(outcome.result()));
	else
		return ListUninstallApplicationsOutcome(outcome.error());
}

void CsasClient::listUninstallApplicationsAsync(const ListUninstallApplicationsRequest& request, const ListUninstallApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUninstallApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListUninstallApplicationsOutcomeCallable CsasClient::listUninstallApplicationsCallable(const ListUninstallApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUninstallApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listUninstallApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListUserApplicationsOutcome CsasClient::listUserApplications(const ListUserApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserApplicationsOutcome(ListUserApplicationsResult(outcome.result()));
	else
		return ListUserApplicationsOutcome(outcome.error());
}

void CsasClient::listUserApplicationsAsync(const ListUserApplicationsRequest& request, const ListUserApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListUserApplicationsOutcomeCallable CsasClient::listUserApplicationsCallable(const ListUserApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listUserApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListUserDevicesOutcome CsasClient::listUserDevices(const ListUserDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserDevicesOutcome(ListUserDevicesResult(outcome.result()));
	else
		return ListUserDevicesOutcome(outcome.error());
}

void CsasClient::listUserDevicesAsync(const ListUserDevicesRequest& request, const ListUserDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListUserDevicesOutcomeCallable CsasClient::listUserDevicesCallable(const ListUserDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserDevicesOutcome()>>(
			[this, request]()
			{
			return this->listUserDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListUserGroupsOutcome CsasClient::listUserGroups(const ListUserGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserGroupsOutcome(ListUserGroupsResult(outcome.result()));
	else
		return ListUserGroupsOutcome(outcome.error());
}

void CsasClient::listUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListUserGroupsOutcomeCallable CsasClient::listUserGroupsCallable(const ListUserGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserGroupsOutcome()>>(
			[this, request]()
			{
			return this->listUserGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListUserGroupsForPrivateAccessPolicyOutcome CsasClient::listUserGroupsForPrivateAccessPolicy(const ListUserGroupsForPrivateAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserGroupsForPrivateAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserGroupsForPrivateAccessPolicyOutcome(ListUserGroupsForPrivateAccessPolicyResult(outcome.result()));
	else
		return ListUserGroupsForPrivateAccessPolicyOutcome(outcome.error());
}

void CsasClient::listUserGroupsForPrivateAccessPolicyAsync(const ListUserGroupsForPrivateAccessPolicyRequest& request, const ListUserGroupsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserGroupsForPrivateAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListUserGroupsForPrivateAccessPolicyOutcomeCallable CsasClient::listUserGroupsForPrivateAccessPolicyCallable(const ListUserGroupsForPrivateAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserGroupsForPrivateAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->listUserGroupsForPrivateAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListUserGroupsForRegistrationPolicyOutcome CsasClient::listUserGroupsForRegistrationPolicy(const ListUserGroupsForRegistrationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserGroupsForRegistrationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserGroupsForRegistrationPolicyOutcome(ListUserGroupsForRegistrationPolicyResult(outcome.result()));
	else
		return ListUserGroupsForRegistrationPolicyOutcome(outcome.error());
}

void CsasClient::listUserGroupsForRegistrationPolicyAsync(const ListUserGroupsForRegistrationPolicyRequest& request, const ListUserGroupsForRegistrationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserGroupsForRegistrationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListUserGroupsForRegistrationPolicyOutcomeCallable CsasClient::listUserGroupsForRegistrationPolicyCallable(const ListUserGroupsForRegistrationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserGroupsForRegistrationPolicyOutcome()>>(
			[this, request]()
			{
			return this->listUserGroupsForRegistrationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListUserPrivateAccessPoliciesOutcome CsasClient::listUserPrivateAccessPolicies(const ListUserPrivateAccessPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserPrivateAccessPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserPrivateAccessPoliciesOutcome(ListUserPrivateAccessPoliciesResult(outcome.result()));
	else
		return ListUserPrivateAccessPoliciesOutcome(outcome.error());
}

void CsasClient::listUserPrivateAccessPoliciesAsync(const ListUserPrivateAccessPoliciesRequest& request, const ListUserPrivateAccessPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserPrivateAccessPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListUserPrivateAccessPoliciesOutcomeCallable CsasClient::listUserPrivateAccessPoliciesCallable(const ListUserPrivateAccessPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserPrivateAccessPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listUserPrivateAccessPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::ListUsersOutcome CsasClient::listUsers(const ListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOutcome(ListUsersResult(outcome.result()));
	else
		return ListUsersOutcome(outcome.error());
}

void CsasClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::ListUsersOutcomeCallable CsasClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::LookupWmInfoMappingOutcome CsasClient::lookupWmInfoMapping(const LookupWmInfoMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LookupWmInfoMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LookupWmInfoMappingOutcome(LookupWmInfoMappingResult(outcome.result()));
	else
		return LookupWmInfoMappingOutcome(outcome.error());
}

void CsasClient::lookupWmInfoMappingAsync(const LookupWmInfoMappingRequest& request, const LookupWmInfoMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lookupWmInfoMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::LookupWmInfoMappingOutcomeCallable CsasClient::lookupWmInfoMappingCallable(const LookupWmInfoMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LookupWmInfoMappingOutcome()>>(
			[this, request]()
			{
			return this->lookupWmInfoMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::RevokeUserSessionOutcome CsasClient::revokeUserSession(const RevokeUserSessionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeUserSessionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeUserSessionOutcome(RevokeUserSessionResult(outcome.result()));
	else
		return RevokeUserSessionOutcome(outcome.error());
}

void CsasClient::revokeUserSessionAsync(const RevokeUserSessionRequest& request, const RevokeUserSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeUserSession(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::RevokeUserSessionOutcomeCallable CsasClient::revokeUserSessionCallable(const RevokeUserSessionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeUserSessionOutcome()>>(
			[this, request]()
			{
			return this->revokeUserSession(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateApprovalProcessOutcome CsasClient::updateApprovalProcess(const UpdateApprovalProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApprovalProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApprovalProcessOutcome(UpdateApprovalProcessResult(outcome.result()));
	else
		return UpdateApprovalProcessOutcome(outcome.error());
}

void CsasClient::updateApprovalProcessAsync(const UpdateApprovalProcessRequest& request, const UpdateApprovalProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApprovalProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateApprovalProcessOutcomeCallable CsasClient::updateApprovalProcessCallable(const UpdateApprovalProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApprovalProcessOutcome()>>(
			[this, request]()
			{
			return this->updateApprovalProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateApprovalStatusOutcome CsasClient::updateApprovalStatus(const UpdateApprovalStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApprovalStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApprovalStatusOutcome(UpdateApprovalStatusResult(outcome.result()));
	else
		return UpdateApprovalStatusOutcome(outcome.error());
}

void CsasClient::updateApprovalStatusAsync(const UpdateApprovalStatusRequest& request, const UpdateApprovalStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApprovalStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateApprovalStatusOutcomeCallable CsasClient::updateApprovalStatusCallable(const UpdateApprovalStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApprovalStatusOutcome()>>(
			[this, request]()
			{
			return this->updateApprovalStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateBootAndAntiUninstallPolicyOutcome CsasClient::updateBootAndAntiUninstallPolicy(const UpdateBootAndAntiUninstallPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBootAndAntiUninstallPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBootAndAntiUninstallPolicyOutcome(UpdateBootAndAntiUninstallPolicyResult(outcome.result()));
	else
		return UpdateBootAndAntiUninstallPolicyOutcome(outcome.error());
}

void CsasClient::updateBootAndAntiUninstallPolicyAsync(const UpdateBootAndAntiUninstallPolicyRequest& request, const UpdateBootAndAntiUninstallPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBootAndAntiUninstallPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateBootAndAntiUninstallPolicyOutcomeCallable CsasClient::updateBootAndAntiUninstallPolicyCallable(const UpdateBootAndAntiUninstallPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBootAndAntiUninstallPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateBootAndAntiUninstallPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateClientUserOutcome CsasClient::updateClientUser(const UpdateClientUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClientUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClientUserOutcome(UpdateClientUserResult(outcome.result()));
	else
		return UpdateClientUserOutcome(outcome.error());
}

void CsasClient::updateClientUserAsync(const UpdateClientUserRequest& request, const UpdateClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateClientUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateClientUserOutcomeCallable CsasClient::updateClientUserCallable(const UpdateClientUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClientUserOutcome()>>(
			[this, request]()
			{
			return this->updateClientUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateClientUserPasswordOutcome CsasClient::updateClientUserPassword(const UpdateClientUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClientUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClientUserPasswordOutcome(UpdateClientUserPasswordResult(outcome.result()));
	else
		return UpdateClientUserPasswordOutcome(outcome.error());
}

void CsasClient::updateClientUserPasswordAsync(const UpdateClientUserPasswordRequest& request, const UpdateClientUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateClientUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateClientUserPasswordOutcomeCallable CsasClient::updateClientUserPasswordCallable(const UpdateClientUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClientUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->updateClientUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateClientUserStatusOutcome CsasClient::updateClientUserStatus(const UpdateClientUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClientUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClientUserStatusOutcome(UpdateClientUserStatusResult(outcome.result()));
	else
		return UpdateClientUserStatusOutcome(outcome.error());
}

void CsasClient::updateClientUserStatusAsync(const UpdateClientUserStatusRequest& request, const UpdateClientUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateClientUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateClientUserStatusOutcomeCallable CsasClient::updateClientUserStatusCallable(const UpdateClientUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClientUserStatusOutcome()>>(
			[this, request]()
			{
			return this->updateClientUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateDynamicRouteOutcome CsasClient::updateDynamicRoute(const UpdateDynamicRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDynamicRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDynamicRouteOutcome(UpdateDynamicRouteResult(outcome.result()));
	else
		return UpdateDynamicRouteOutcome(outcome.error());
}

void CsasClient::updateDynamicRouteAsync(const UpdateDynamicRouteRequest& request, const UpdateDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDynamicRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateDynamicRouteOutcomeCallable CsasClient::updateDynamicRouteCallable(const UpdateDynamicRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDynamicRouteOutcome()>>(
			[this, request]()
			{
			return this->updateDynamicRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome CsasClient::updateExcessiveDeviceRegistrationApplicationsStatus(const UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome(UpdateExcessiveDeviceRegistrationApplicationsStatusResult(outcome.result()));
	else
		return UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome(outcome.error());
}

void CsasClient::updateExcessiveDeviceRegistrationApplicationsStatusAsync(const UpdateExcessiveDeviceRegistrationApplicationsStatusRequest& request, const UpdateExcessiveDeviceRegistrationApplicationsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateExcessiveDeviceRegistrationApplicationsStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateExcessiveDeviceRegistrationApplicationsStatusOutcomeCallable CsasClient::updateExcessiveDeviceRegistrationApplicationsStatusCallable(const UpdateExcessiveDeviceRegistrationApplicationsStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateExcessiveDeviceRegistrationApplicationsStatusOutcome()>>(
			[this, request]()
			{
			return this->updateExcessiveDeviceRegistrationApplicationsStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateIdpDepartmentOutcome CsasClient::updateIdpDepartment(const UpdateIdpDepartmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIdpDepartmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIdpDepartmentOutcome(UpdateIdpDepartmentResult(outcome.result()));
	else
		return UpdateIdpDepartmentOutcome(outcome.error());
}

void CsasClient::updateIdpDepartmentAsync(const UpdateIdpDepartmentRequest& request, const UpdateIdpDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIdpDepartment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateIdpDepartmentOutcomeCallable CsasClient::updateIdpDepartmentCallable(const UpdateIdpDepartmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIdpDepartmentOutcome()>>(
			[this, request]()
			{
			return this->updateIdpDepartment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateNacUserCertStatusOutcome CsasClient::updateNacUserCertStatus(const UpdateNacUserCertStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNacUserCertStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNacUserCertStatusOutcome(UpdateNacUserCertStatusResult(outcome.result()));
	else
		return UpdateNacUserCertStatusOutcome(outcome.error());
}

void CsasClient::updateNacUserCertStatusAsync(const UpdateNacUserCertStatusRequest& request, const UpdateNacUserCertStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNacUserCertStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateNacUserCertStatusOutcomeCallable CsasClient::updateNacUserCertStatusCallable(const UpdateNacUserCertStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNacUserCertStatusOutcome()>>(
			[this, request]()
			{
			return this->updateNacUserCertStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdatePrivateAccessApplicationOutcome CsasClient::updatePrivateAccessApplication(const UpdatePrivateAccessApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrivateAccessApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrivateAccessApplicationOutcome(UpdatePrivateAccessApplicationResult(outcome.result()));
	else
		return UpdatePrivateAccessApplicationOutcome(outcome.error());
}

void CsasClient::updatePrivateAccessApplicationAsync(const UpdatePrivateAccessApplicationRequest& request, const UpdatePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrivateAccessApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdatePrivateAccessApplicationOutcomeCallable CsasClient::updatePrivateAccessApplicationCallable(const UpdatePrivateAccessApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrivateAccessApplicationOutcome()>>(
			[this, request]()
			{
			return this->updatePrivateAccessApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdatePrivateAccessPolicyOutcome CsasClient::updatePrivateAccessPolicy(const UpdatePrivateAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrivateAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrivateAccessPolicyOutcome(UpdatePrivateAccessPolicyResult(outcome.result()));
	else
		return UpdatePrivateAccessPolicyOutcome(outcome.error());
}

void CsasClient::updatePrivateAccessPolicyAsync(const UpdatePrivateAccessPolicyRequest& request, const UpdatePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrivateAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdatePrivateAccessPolicyOutcomeCallable CsasClient::updatePrivateAccessPolicyCallable(const UpdatePrivateAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrivateAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->updatePrivateAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateRegistrationPolicyOutcome CsasClient::updateRegistrationPolicy(const UpdateRegistrationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRegistrationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRegistrationPolicyOutcome(UpdateRegistrationPolicyResult(outcome.result()));
	else
		return UpdateRegistrationPolicyOutcome(outcome.error());
}

void CsasClient::updateRegistrationPolicyAsync(const UpdateRegistrationPolicyRequest& request, const UpdateRegistrationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRegistrationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateRegistrationPolicyOutcomeCallable CsasClient::updateRegistrationPolicyCallable(const UpdateRegistrationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRegistrationPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateRegistrationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateUninstallApplicationsStatusOutcome CsasClient::updateUninstallApplicationsStatus(const UpdateUninstallApplicationsStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUninstallApplicationsStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUninstallApplicationsStatusOutcome(UpdateUninstallApplicationsStatusResult(outcome.result()));
	else
		return UpdateUninstallApplicationsStatusOutcome(outcome.error());
}

void CsasClient::updateUninstallApplicationsStatusAsync(const UpdateUninstallApplicationsStatusRequest& request, const UpdateUninstallApplicationsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUninstallApplicationsStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateUninstallApplicationsStatusOutcomeCallable CsasClient::updateUninstallApplicationsStatusCallable(const UpdateUninstallApplicationsStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUninstallApplicationsStatusOutcome()>>(
			[this, request]()
			{
			return this->updateUninstallApplicationsStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateUserDevicesSharingStatusOutcome CsasClient::updateUserDevicesSharingStatus(const UpdateUserDevicesSharingStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserDevicesSharingStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserDevicesSharingStatusOutcome(UpdateUserDevicesSharingStatusResult(outcome.result()));
	else
		return UpdateUserDevicesSharingStatusOutcome(outcome.error());
}

void CsasClient::updateUserDevicesSharingStatusAsync(const UpdateUserDevicesSharingStatusRequest& request, const UpdateUserDevicesSharingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserDevicesSharingStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateUserDevicesSharingStatusOutcomeCallable CsasClient::updateUserDevicesSharingStatusCallable(const UpdateUserDevicesSharingStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserDevicesSharingStatusOutcome()>>(
			[this, request]()
			{
			return this->updateUserDevicesSharingStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateUserDevicesStatusOutcome CsasClient::updateUserDevicesStatus(const UpdateUserDevicesStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserDevicesStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserDevicesStatusOutcome(UpdateUserDevicesStatusResult(outcome.result()));
	else
		return UpdateUserDevicesStatusOutcome(outcome.error());
}

void CsasClient::updateUserDevicesStatusAsync(const UpdateUserDevicesStatusRequest& request, const UpdateUserDevicesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserDevicesStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateUserDevicesStatusOutcomeCallable CsasClient::updateUserDevicesStatusCallable(const UpdateUserDevicesStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserDevicesStatusOutcome()>>(
			[this, request]()
			{
			return this->updateUserDevicesStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateUserGroupOutcome CsasClient::updateUserGroup(const UpdateUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserGroupOutcome(UpdateUserGroupResult(outcome.result()));
	else
		return UpdateUserGroupOutcome(outcome.error());
}

void CsasClient::updateUserGroupAsync(const UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateUserGroupOutcomeCallable CsasClient::updateUserGroupCallable(const UpdateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->updateUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CsasClient::UpdateUsersStatusOutcome CsasClient::updateUsersStatus(const UpdateUsersStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUsersStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUsersStatusOutcome(UpdateUsersStatusResult(outcome.result()));
	else
		return UpdateUsersStatusOutcome(outcome.error());
}

void CsasClient::updateUsersStatusAsync(const UpdateUsersStatusRequest& request, const UpdateUsersStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUsersStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CsasClient::UpdateUsersStatusOutcomeCallable CsasClient::updateUsersStatusCallable(const UpdateUsersStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUsersStatusOutcome()>>(
			[this, request]()
			{
			return this->updateUsersStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

