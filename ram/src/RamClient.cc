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

#include <alibabacloud/ram/RamClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

namespace
{
	const std::string SERVICE_NAME = "Ram";
}

RamClient::RamClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ram");
}

RamClient::RamClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ram");
}

RamClient::RamClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ram");
}

RamClient::~RamClient()
{}

RamClient::AddUserToGroupOutcome RamClient::addUserToGroup(const AddUserToGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserToGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserToGroupOutcome(AddUserToGroupResult(outcome.result()));
	else
		return AddUserToGroupOutcome(outcome.error());
}

void RamClient::addUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserToGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::AddUserToGroupOutcomeCallable RamClient::addUserToGroupCallable(const AddUserToGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserToGroupOutcome()>>(
			[this, request]()
			{
			return this->addUserToGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::AttachPolicyToGroupOutcome RamClient::attachPolicyToGroup(const AttachPolicyToGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachPolicyToGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachPolicyToGroupOutcome(AttachPolicyToGroupResult(outcome.result()));
	else
		return AttachPolicyToGroupOutcome(outcome.error());
}

void RamClient::attachPolicyToGroupAsync(const AttachPolicyToGroupRequest& request, const AttachPolicyToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachPolicyToGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::AttachPolicyToGroupOutcomeCallable RamClient::attachPolicyToGroupCallable(const AttachPolicyToGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachPolicyToGroupOutcome()>>(
			[this, request]()
			{
			return this->attachPolicyToGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::AttachPolicyToRoleOutcome RamClient::attachPolicyToRole(const AttachPolicyToRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachPolicyToRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachPolicyToRoleOutcome(AttachPolicyToRoleResult(outcome.result()));
	else
		return AttachPolicyToRoleOutcome(outcome.error());
}

void RamClient::attachPolicyToRoleAsync(const AttachPolicyToRoleRequest& request, const AttachPolicyToRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachPolicyToRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::AttachPolicyToRoleOutcomeCallable RamClient::attachPolicyToRoleCallable(const AttachPolicyToRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachPolicyToRoleOutcome()>>(
			[this, request]()
			{
			return this->attachPolicyToRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::AttachPolicyToUserOutcome RamClient::attachPolicyToUser(const AttachPolicyToUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachPolicyToUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachPolicyToUserOutcome(AttachPolicyToUserResult(outcome.result()));
	else
		return AttachPolicyToUserOutcome(outcome.error());
}

void RamClient::attachPolicyToUserAsync(const AttachPolicyToUserRequest& request, const AttachPolicyToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachPolicyToUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::AttachPolicyToUserOutcomeCallable RamClient::attachPolicyToUserCallable(const AttachPolicyToUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachPolicyToUserOutcome()>>(
			[this, request]()
			{
			return this->attachPolicyToUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::BindMFADeviceOutcome RamClient::bindMFADevice(const BindMFADeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindMFADeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindMFADeviceOutcome(BindMFADeviceResult(outcome.result()));
	else
		return BindMFADeviceOutcome(outcome.error());
}

void RamClient::bindMFADeviceAsync(const BindMFADeviceRequest& request, const BindMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::BindMFADeviceOutcomeCallable RamClient::bindMFADeviceCallable(const BindMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->bindMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ChangePasswordOutcome RamClient::changePassword(const ChangePasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangePasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangePasswordOutcome(ChangePasswordResult(outcome.result()));
	else
		return ChangePasswordOutcome(outcome.error());
}

void RamClient::changePasswordAsync(const ChangePasswordRequest& request, const ChangePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changePassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ChangePasswordOutcomeCallable RamClient::changePasswordCallable(const ChangePasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangePasswordOutcome()>>(
			[this, request]()
			{
			return this->changePassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ClearAccountAliasOutcome RamClient::clearAccountAlias(const ClearAccountAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearAccountAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearAccountAliasOutcome(ClearAccountAliasResult(outcome.result()));
	else
		return ClearAccountAliasOutcome(outcome.error());
}

void RamClient::clearAccountAliasAsync(const ClearAccountAliasRequest& request, const ClearAccountAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearAccountAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ClearAccountAliasOutcomeCallable RamClient::clearAccountAliasCallable(const ClearAccountAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearAccountAliasOutcome()>>(
			[this, request]()
			{
			return this->clearAccountAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::CreateAccessKeyOutcome RamClient::createAccessKey(const CreateAccessKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccessKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccessKeyOutcome(CreateAccessKeyResult(outcome.result()));
	else
		return CreateAccessKeyOutcome(outcome.error());
}

void RamClient::createAccessKeyAsync(const CreateAccessKeyRequest& request, const CreateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccessKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::CreateAccessKeyOutcomeCallable RamClient::createAccessKeyCallable(const CreateAccessKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccessKeyOutcome()>>(
			[this, request]()
			{
			return this->createAccessKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::CreateGroupOutcome RamClient::createGroup(const CreateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupOutcome(CreateGroupResult(outcome.result()));
	else
		return CreateGroupOutcome(outcome.error());
}

void RamClient::createGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::CreateGroupOutcomeCallable RamClient::createGroupCallable(const CreateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupOutcome()>>(
			[this, request]()
			{
			return this->createGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::CreateLoginProfileOutcome RamClient::createLoginProfile(const CreateLoginProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoginProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoginProfileOutcome(CreateLoginProfileResult(outcome.result()));
	else
		return CreateLoginProfileOutcome(outcome.error());
}

void RamClient::createLoginProfileAsync(const CreateLoginProfileRequest& request, const CreateLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoginProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::CreateLoginProfileOutcomeCallable RamClient::createLoginProfileCallable(const CreateLoginProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoginProfileOutcome()>>(
			[this, request]()
			{
			return this->createLoginProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::CreatePolicyOutcome RamClient::createPolicy(const CreatePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePolicyOutcome(CreatePolicyResult(outcome.result()));
	else
		return CreatePolicyOutcome(outcome.error());
}

void RamClient::createPolicyAsync(const CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::CreatePolicyOutcomeCallable RamClient::createPolicyCallable(const CreatePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolicyOutcome()>>(
			[this, request]()
			{
			return this->createPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::CreatePolicyVersionOutcome RamClient::createPolicyVersion(const CreatePolicyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePolicyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePolicyVersionOutcome(CreatePolicyVersionResult(outcome.result()));
	else
		return CreatePolicyVersionOutcome(outcome.error());
}

void RamClient::createPolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::CreatePolicyVersionOutcomeCallable RamClient::createPolicyVersionCallable(const CreatePolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->createPolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::CreateRoleOutcome RamClient::createRole(const CreateRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRoleOutcome(CreateRoleResult(outcome.result()));
	else
		return CreateRoleOutcome(outcome.error());
}

void RamClient::createRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::CreateRoleOutcomeCallable RamClient::createRoleCallable(const CreateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRoleOutcome()>>(
			[this, request]()
			{
			return this->createRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::CreateUserOutcome RamClient::createUser(const CreateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserOutcome(CreateUserResult(outcome.result()));
	else
		return CreateUserOutcome(outcome.error());
}

void RamClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::CreateUserOutcomeCallable RamClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::CreateVirtualMFADeviceOutcome RamClient::createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVirtualMFADeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVirtualMFADeviceOutcome(CreateVirtualMFADeviceResult(outcome.result()));
	else
		return CreateVirtualMFADeviceOutcome(outcome.error());
}

void RamClient::createVirtualMFADeviceAsync(const CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVirtualMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::CreateVirtualMFADeviceOutcomeCallable RamClient::createVirtualMFADeviceCallable(const CreateVirtualMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVirtualMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->createVirtualMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DecodeDiagnosticMessageOutcome RamClient::decodeDiagnosticMessage(const DecodeDiagnosticMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecodeDiagnosticMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecodeDiagnosticMessageOutcome(DecodeDiagnosticMessageResult(outcome.result()));
	else
		return DecodeDiagnosticMessageOutcome(outcome.error());
}

void RamClient::decodeDiagnosticMessageAsync(const DecodeDiagnosticMessageRequest& request, const DecodeDiagnosticMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decodeDiagnosticMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DecodeDiagnosticMessageOutcomeCallable RamClient::decodeDiagnosticMessageCallable(const DecodeDiagnosticMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecodeDiagnosticMessageOutcome()>>(
			[this, request]()
			{
			return this->decodeDiagnosticMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DeleteAccessKeyOutcome RamClient::deleteAccessKey(const DeleteAccessKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessKeyOutcome(DeleteAccessKeyResult(outcome.result()));
	else
		return DeleteAccessKeyOutcome(outcome.error());
}

void RamClient::deleteAccessKeyAsync(const DeleteAccessKeyRequest& request, const DeleteAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DeleteAccessKeyOutcomeCallable RamClient::deleteAccessKeyCallable(const DeleteAccessKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessKeyOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DeleteGroupOutcome RamClient::deleteGroup(const DeleteGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupOutcome(DeleteGroupResult(outcome.result()));
	else
		return DeleteGroupOutcome(outcome.error());
}

void RamClient::deleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DeleteGroupOutcomeCallable RamClient::deleteGroupCallable(const DeleteGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DeleteLoginProfileOutcome RamClient::deleteLoginProfile(const DeleteLoginProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoginProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoginProfileOutcome(DeleteLoginProfileResult(outcome.result()));
	else
		return DeleteLoginProfileOutcome(outcome.error());
}

void RamClient::deleteLoginProfileAsync(const DeleteLoginProfileRequest& request, const DeleteLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoginProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DeleteLoginProfileOutcomeCallable RamClient::deleteLoginProfileCallable(const DeleteLoginProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoginProfileOutcome()>>(
			[this, request]()
			{
			return this->deleteLoginProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DeletePolicyOutcome RamClient::deletePolicy(const DeletePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePolicyOutcome(DeletePolicyResult(outcome.result()));
	else
		return DeletePolicyOutcome(outcome.error());
}

void RamClient::deletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DeletePolicyOutcomeCallable RamClient::deletePolicyCallable(const DeletePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePolicyOutcome()>>(
			[this, request]()
			{
			return this->deletePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DeletePolicyVersionOutcome RamClient::deletePolicyVersion(const DeletePolicyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePolicyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePolicyVersionOutcome(DeletePolicyVersionResult(outcome.result()));
	else
		return DeletePolicyVersionOutcome(outcome.error());
}

void RamClient::deletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DeletePolicyVersionOutcomeCallable RamClient::deletePolicyVersionCallable(const DeletePolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->deletePolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DeleteRoleOutcome RamClient::deleteRole(const DeleteRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRoleOutcome(DeleteRoleResult(outcome.result()));
	else
		return DeleteRoleOutcome(outcome.error());
}

void RamClient::deleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DeleteRoleOutcomeCallable RamClient::deleteRoleCallable(const DeleteRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRoleOutcome()>>(
			[this, request]()
			{
			return this->deleteRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DeleteUserOutcome RamClient::deleteUser(const DeleteUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserOutcome(DeleteUserResult(outcome.result()));
	else
		return DeleteUserOutcome(outcome.error());
}

void RamClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DeleteUserOutcomeCallable RamClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DeleteVirtualMFADeviceOutcome RamClient::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVirtualMFADeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVirtualMFADeviceOutcome(DeleteVirtualMFADeviceResult(outcome.result()));
	else
		return DeleteVirtualMFADeviceOutcome(outcome.error());
}

void RamClient::deleteVirtualMFADeviceAsync(const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVirtualMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DeleteVirtualMFADeviceOutcomeCallable RamClient::deleteVirtualMFADeviceCallable(const DeleteVirtualMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVirtualMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteVirtualMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DetachPolicyFromGroupOutcome RamClient::detachPolicyFromGroup(const DetachPolicyFromGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachPolicyFromGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachPolicyFromGroupOutcome(DetachPolicyFromGroupResult(outcome.result()));
	else
		return DetachPolicyFromGroupOutcome(outcome.error());
}

void RamClient::detachPolicyFromGroupAsync(const DetachPolicyFromGroupRequest& request, const DetachPolicyFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachPolicyFromGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DetachPolicyFromGroupOutcomeCallable RamClient::detachPolicyFromGroupCallable(const DetachPolicyFromGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachPolicyFromGroupOutcome()>>(
			[this, request]()
			{
			return this->detachPolicyFromGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DetachPolicyFromRoleOutcome RamClient::detachPolicyFromRole(const DetachPolicyFromRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachPolicyFromRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachPolicyFromRoleOutcome(DetachPolicyFromRoleResult(outcome.result()));
	else
		return DetachPolicyFromRoleOutcome(outcome.error());
}

void RamClient::detachPolicyFromRoleAsync(const DetachPolicyFromRoleRequest& request, const DetachPolicyFromRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachPolicyFromRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DetachPolicyFromRoleOutcomeCallable RamClient::detachPolicyFromRoleCallable(const DetachPolicyFromRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachPolicyFromRoleOutcome()>>(
			[this, request]()
			{
			return this->detachPolicyFromRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::DetachPolicyFromUserOutcome RamClient::detachPolicyFromUser(const DetachPolicyFromUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachPolicyFromUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachPolicyFromUserOutcome(DetachPolicyFromUserResult(outcome.result()));
	else
		return DetachPolicyFromUserOutcome(outcome.error());
}

void RamClient::detachPolicyFromUserAsync(const DetachPolicyFromUserRequest& request, const DetachPolicyFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachPolicyFromUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::DetachPolicyFromUserOutcomeCallable RamClient::detachPolicyFromUserCallable(const DetachPolicyFromUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachPolicyFromUserOutcome()>>(
			[this, request]()
			{
			return this->detachPolicyFromUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetAccessKeyLastUsedOutcome RamClient::getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccessKeyLastUsedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccessKeyLastUsedOutcome(GetAccessKeyLastUsedResult(outcome.result()));
	else
		return GetAccessKeyLastUsedOutcome(outcome.error());
}

void RamClient::getAccessKeyLastUsedAsync(const GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccessKeyLastUsed(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetAccessKeyLastUsedOutcomeCallable RamClient::getAccessKeyLastUsedCallable(const GetAccessKeyLastUsedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccessKeyLastUsedOutcome()>>(
			[this, request]()
			{
			return this->getAccessKeyLastUsed(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetAccountAliasOutcome RamClient::getAccountAlias(const GetAccountAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountAliasOutcome(GetAccountAliasResult(outcome.result()));
	else
		return GetAccountAliasOutcome(outcome.error());
}

void RamClient::getAccountAliasAsync(const GetAccountAliasRequest& request, const GetAccountAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetAccountAliasOutcomeCallable RamClient::getAccountAliasCallable(const GetAccountAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountAliasOutcome()>>(
			[this, request]()
			{
			return this->getAccountAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetGroupOutcome RamClient::getGroup(const GetGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupOutcome(GetGroupResult(outcome.result()));
	else
		return GetGroupOutcome(outcome.error());
}

void RamClient::getGroupAsync(const GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetGroupOutcomeCallable RamClient::getGroupCallable(const GetGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupOutcome()>>(
			[this, request]()
			{
			return this->getGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetLoginProfileOutcome RamClient::getLoginProfile(const GetLoginProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoginProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoginProfileOutcome(GetLoginProfileResult(outcome.result()));
	else
		return GetLoginProfileOutcome(outcome.error());
}

void RamClient::getLoginProfileAsync(const GetLoginProfileRequest& request, const GetLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoginProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetLoginProfileOutcomeCallable RamClient::getLoginProfileCallable(const GetLoginProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoginProfileOutcome()>>(
			[this, request]()
			{
			return this->getLoginProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetPasswordPolicyOutcome RamClient::getPasswordPolicy(const GetPasswordPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPasswordPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPasswordPolicyOutcome(GetPasswordPolicyResult(outcome.result()));
	else
		return GetPasswordPolicyOutcome(outcome.error());
}

void RamClient::getPasswordPolicyAsync(const GetPasswordPolicyRequest& request, const GetPasswordPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPasswordPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetPasswordPolicyOutcomeCallable RamClient::getPasswordPolicyCallable(const GetPasswordPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPasswordPolicyOutcome()>>(
			[this, request]()
			{
			return this->getPasswordPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetPolicyOutcome RamClient::getPolicy(const GetPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPolicyOutcome(GetPolicyResult(outcome.result()));
	else
		return GetPolicyOutcome(outcome.error());
}

void RamClient::getPolicyAsync(const GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetPolicyOutcomeCallable RamClient::getPolicyCallable(const GetPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolicyOutcome()>>(
			[this, request]()
			{
			return this->getPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetPolicyVersionOutcome RamClient::getPolicyVersion(const GetPolicyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPolicyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPolicyVersionOutcome(GetPolicyVersionResult(outcome.result()));
	else
		return GetPolicyVersionOutcome(outcome.error());
}

void RamClient::getPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetPolicyVersionOutcomeCallable RamClient::getPolicyVersionCallable(const GetPolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->getPolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetRoleOutcome RamClient::getRole(const GetRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRoleOutcome(GetRoleResult(outcome.result()));
	else
		return GetRoleOutcome(outcome.error());
}

void RamClient::getRoleAsync(const GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetRoleOutcomeCallable RamClient::getRoleCallable(const GetRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRoleOutcome()>>(
			[this, request]()
			{
			return this->getRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetSecurityPreferenceOutcome RamClient::getSecurityPreference(const GetSecurityPreferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecurityPreferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecurityPreferenceOutcome(GetSecurityPreferenceResult(outcome.result()));
	else
		return GetSecurityPreferenceOutcome(outcome.error());
}

void RamClient::getSecurityPreferenceAsync(const GetSecurityPreferenceRequest& request, const GetSecurityPreferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecurityPreference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetSecurityPreferenceOutcomeCallable RamClient::getSecurityPreferenceCallable(const GetSecurityPreferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecurityPreferenceOutcome()>>(
			[this, request]()
			{
			return this->getSecurityPreference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetUserOutcome RamClient::getUser(const GetUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutcome(GetUserResult(outcome.result()));
	else
		return GetUserOutcome(outcome.error());
}

void RamClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetUserOutcomeCallable RamClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::GetUserMFAInfoOutcome RamClient::getUserMFAInfo(const GetUserMFAInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserMFAInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserMFAInfoOutcome(GetUserMFAInfoResult(outcome.result()));
	else
		return GetUserMFAInfoOutcome(outcome.error());
}

void RamClient::getUserMFAInfoAsync(const GetUserMFAInfoRequest& request, const GetUserMFAInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserMFAInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::GetUserMFAInfoOutcomeCallable RamClient::getUserMFAInfoCallable(const GetUserMFAInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserMFAInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserMFAInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListAccessKeysOutcome RamClient::listAccessKeys(const ListAccessKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccessKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccessKeysOutcome(ListAccessKeysResult(outcome.result()));
	else
		return ListAccessKeysOutcome(outcome.error());
}

void RamClient::listAccessKeysAsync(const ListAccessKeysRequest& request, const ListAccessKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccessKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListAccessKeysOutcomeCallable RamClient::listAccessKeysCallable(const ListAccessKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccessKeysOutcome()>>(
			[this, request]()
			{
			return this->listAccessKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListEntitiesForPolicyOutcome RamClient::listEntitiesForPolicy(const ListEntitiesForPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEntitiesForPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEntitiesForPolicyOutcome(ListEntitiesForPolicyResult(outcome.result()));
	else
		return ListEntitiesForPolicyOutcome(outcome.error());
}

void RamClient::listEntitiesForPolicyAsync(const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEntitiesForPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListEntitiesForPolicyOutcomeCallable RamClient::listEntitiesForPolicyCallable(const ListEntitiesForPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEntitiesForPolicyOutcome()>>(
			[this, request]()
			{
			return this->listEntitiesForPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListGroupsOutcome RamClient::listGroups(const ListGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupsOutcome(ListGroupsResult(outcome.result()));
	else
		return ListGroupsOutcome(outcome.error());
}

void RamClient::listGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListGroupsOutcomeCallable RamClient::listGroupsCallable(const ListGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
			[this, request]()
			{
			return this->listGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListGroupsForUserOutcome RamClient::listGroupsForUser(const ListGroupsForUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupsForUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupsForUserOutcome(ListGroupsForUserResult(outcome.result()));
	else
		return ListGroupsForUserOutcome(outcome.error());
}

void RamClient::listGroupsForUserAsync(const ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupsForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListGroupsForUserOutcomeCallable RamClient::listGroupsForUserCallable(const ListGroupsForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsForUserOutcome()>>(
			[this, request]()
			{
			return this->listGroupsForUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListPoliciesOutcome RamClient::listPolicies(const ListPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPoliciesOutcome(ListPoliciesResult(outcome.result()));
	else
		return ListPoliciesOutcome(outcome.error());
}

void RamClient::listPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListPoliciesOutcomeCallable RamClient::listPoliciesCallable(const ListPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListPoliciesForGroupOutcome RamClient::listPoliciesForGroup(const ListPoliciesForGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPoliciesForGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPoliciesForGroupOutcome(ListPoliciesForGroupResult(outcome.result()));
	else
		return ListPoliciesForGroupOutcome(outcome.error());
}

void RamClient::listPoliciesForGroupAsync(const ListPoliciesForGroupRequest& request, const ListPoliciesForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPoliciesForGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListPoliciesForGroupOutcomeCallable RamClient::listPoliciesForGroupCallable(const ListPoliciesForGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPoliciesForGroupOutcome()>>(
			[this, request]()
			{
			return this->listPoliciesForGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListPoliciesForRoleOutcome RamClient::listPoliciesForRole(const ListPoliciesForRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPoliciesForRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPoliciesForRoleOutcome(ListPoliciesForRoleResult(outcome.result()));
	else
		return ListPoliciesForRoleOutcome(outcome.error());
}

void RamClient::listPoliciesForRoleAsync(const ListPoliciesForRoleRequest& request, const ListPoliciesForRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPoliciesForRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListPoliciesForRoleOutcomeCallable RamClient::listPoliciesForRoleCallable(const ListPoliciesForRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPoliciesForRoleOutcome()>>(
			[this, request]()
			{
			return this->listPoliciesForRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListPoliciesForUserOutcome RamClient::listPoliciesForUser(const ListPoliciesForUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPoliciesForUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPoliciesForUserOutcome(ListPoliciesForUserResult(outcome.result()));
	else
		return ListPoliciesForUserOutcome(outcome.error());
}

void RamClient::listPoliciesForUserAsync(const ListPoliciesForUserRequest& request, const ListPoliciesForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPoliciesForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListPoliciesForUserOutcomeCallable RamClient::listPoliciesForUserCallable(const ListPoliciesForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPoliciesForUserOutcome()>>(
			[this, request]()
			{
			return this->listPoliciesForUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListPolicyVersionsOutcome RamClient::listPolicyVersions(const ListPolicyVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPolicyVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPolicyVersionsOutcome(ListPolicyVersionsResult(outcome.result()));
	else
		return ListPolicyVersionsOutcome(outcome.error());
}

void RamClient::listPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicyVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListPolicyVersionsOutcomeCallable RamClient::listPolicyVersionsCallable(const ListPolicyVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPolicyVersionsOutcome()>>(
			[this, request]()
			{
			return this->listPolicyVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListRolesOutcome RamClient::listRoles(const ListRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRolesOutcome(ListRolesResult(outcome.result()));
	else
		return ListRolesOutcome(outcome.error());
}

void RamClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListRolesOutcomeCallable RamClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListTagResourcesOutcome RamClient::listTagResources(const ListTagResourcesRequest &request) const
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

void RamClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListTagResourcesOutcomeCallable RamClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListUsersOutcome RamClient::listUsers(const ListUsersRequest &request) const
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

void RamClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListUsersOutcomeCallable RamClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListUsersForGroupOutcome RamClient::listUsersForGroup(const ListUsersForGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersForGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersForGroupOutcome(ListUsersForGroupResult(outcome.result()));
	else
		return ListUsersForGroupOutcome(outcome.error());
}

void RamClient::listUsersForGroupAsync(const ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsersForGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListUsersForGroupOutcomeCallable RamClient::listUsersForGroupCallable(const ListUsersForGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersForGroupOutcome()>>(
			[this, request]()
			{
			return this->listUsersForGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::ListVirtualMFADevicesOutcome RamClient::listVirtualMFADevices(const ListVirtualMFADevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVirtualMFADevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVirtualMFADevicesOutcome(ListVirtualMFADevicesResult(outcome.result()));
	else
		return ListVirtualMFADevicesOutcome(outcome.error());
}

void RamClient::listVirtualMFADevicesAsync(const ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVirtualMFADevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::ListVirtualMFADevicesOutcomeCallable RamClient::listVirtualMFADevicesCallable(const ListVirtualMFADevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVirtualMFADevicesOutcome()>>(
			[this, request]()
			{
			return this->listVirtualMFADevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::RemoveUserFromGroupOutcome RamClient::removeUserFromGroup(const RemoveUserFromGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUserFromGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUserFromGroupOutcome(RemoveUserFromGroupResult(outcome.result()));
	else
		return RemoveUserFromGroupOutcome(outcome.error());
}

void RamClient::removeUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUserFromGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::RemoveUserFromGroupOutcomeCallable RamClient::removeUserFromGroupCallable(const RemoveUserFromGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUserFromGroupOutcome()>>(
			[this, request]()
			{
			return this->removeUserFromGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::SetAccountAliasOutcome RamClient::setAccountAlias(const SetAccountAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAccountAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAccountAliasOutcome(SetAccountAliasResult(outcome.result()));
	else
		return SetAccountAliasOutcome(outcome.error());
}

void RamClient::setAccountAliasAsync(const SetAccountAliasRequest& request, const SetAccountAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAccountAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::SetAccountAliasOutcomeCallable RamClient::setAccountAliasCallable(const SetAccountAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAccountAliasOutcome()>>(
			[this, request]()
			{
			return this->setAccountAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::SetDefaultPolicyVersionOutcome RamClient::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDefaultPolicyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDefaultPolicyVersionOutcome(SetDefaultPolicyVersionResult(outcome.result()));
	else
		return SetDefaultPolicyVersionOutcome(outcome.error());
}

void RamClient::setDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultPolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::SetDefaultPolicyVersionOutcomeCallable RamClient::setDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultPolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->setDefaultPolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::SetPasswordPolicyOutcome RamClient::setPasswordPolicy(const SetPasswordPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPasswordPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPasswordPolicyOutcome(SetPasswordPolicyResult(outcome.result()));
	else
		return SetPasswordPolicyOutcome(outcome.error());
}

void RamClient::setPasswordPolicyAsync(const SetPasswordPolicyRequest& request, const SetPasswordPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPasswordPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::SetPasswordPolicyOutcomeCallable RamClient::setPasswordPolicyCallable(const SetPasswordPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPasswordPolicyOutcome()>>(
			[this, request]()
			{
			return this->setPasswordPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::SetSecurityPreferenceOutcome RamClient::setSecurityPreference(const SetSecurityPreferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSecurityPreferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSecurityPreferenceOutcome(SetSecurityPreferenceResult(outcome.result()));
	else
		return SetSecurityPreferenceOutcome(outcome.error());
}

void RamClient::setSecurityPreferenceAsync(const SetSecurityPreferenceRequest& request, const SetSecurityPreferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSecurityPreference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::SetSecurityPreferenceOutcomeCallable RamClient::setSecurityPreferenceCallable(const SetSecurityPreferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSecurityPreferenceOutcome()>>(
			[this, request]()
			{
			return this->setSecurityPreference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::TagResourcesOutcome RamClient::tagResources(const TagResourcesRequest &request) const
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

void RamClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::TagResourcesOutcomeCallable RamClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::UnbindMFADeviceOutcome RamClient::unbindMFADevice(const UnbindMFADeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindMFADeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindMFADeviceOutcome(UnbindMFADeviceResult(outcome.result()));
	else
		return UnbindMFADeviceOutcome(outcome.error());
}

void RamClient::unbindMFADeviceAsync(const UnbindMFADeviceRequest& request, const UnbindMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::UnbindMFADeviceOutcomeCallable RamClient::unbindMFADeviceCallable(const UnbindMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->unbindMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::UntagResourcesOutcome RamClient::untagResources(const UntagResourcesRequest &request) const
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

void RamClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::UntagResourcesOutcomeCallable RamClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::UpdateAccessKeyOutcome RamClient::updateAccessKey(const UpdateAccessKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAccessKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAccessKeyOutcome(UpdateAccessKeyResult(outcome.result()));
	else
		return UpdateAccessKeyOutcome(outcome.error());
}

void RamClient::updateAccessKeyAsync(const UpdateAccessKeyRequest& request, const UpdateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccessKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::UpdateAccessKeyOutcomeCallable RamClient::updateAccessKeyCallable(const UpdateAccessKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAccessKeyOutcome()>>(
			[this, request]()
			{
			return this->updateAccessKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::UpdateGroupOutcome RamClient::updateGroup(const UpdateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGroupOutcome(UpdateGroupResult(outcome.result()));
	else
		return UpdateGroupOutcome(outcome.error());
}

void RamClient::updateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::UpdateGroupOutcomeCallable RamClient::updateGroupCallable(const UpdateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupOutcome()>>(
			[this, request]()
			{
			return this->updateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::UpdateLoginProfileOutcome RamClient::updateLoginProfile(const UpdateLoginProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoginProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoginProfileOutcome(UpdateLoginProfileResult(outcome.result()));
	else
		return UpdateLoginProfileOutcome(outcome.error());
}

void RamClient::updateLoginProfileAsync(const UpdateLoginProfileRequest& request, const UpdateLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoginProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::UpdateLoginProfileOutcomeCallable RamClient::updateLoginProfileCallable(const UpdateLoginProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoginProfileOutcome()>>(
			[this, request]()
			{
			return this->updateLoginProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::UpdatePolicyDescriptionOutcome RamClient::updatePolicyDescription(const UpdatePolicyDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePolicyDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePolicyDescriptionOutcome(UpdatePolicyDescriptionResult(outcome.result()));
	else
		return UpdatePolicyDescriptionOutcome(outcome.error());
}

void RamClient::updatePolicyDescriptionAsync(const UpdatePolicyDescriptionRequest& request, const UpdatePolicyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePolicyDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::UpdatePolicyDescriptionOutcomeCallable RamClient::updatePolicyDescriptionCallable(const UpdatePolicyDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePolicyDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updatePolicyDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::UpdateRoleOutcome RamClient::updateRole(const UpdateRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRoleOutcome(UpdateRoleResult(outcome.result()));
	else
		return UpdateRoleOutcome(outcome.error());
}

void RamClient::updateRoleAsync(const UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::UpdateRoleOutcomeCallable RamClient::updateRoleCallable(const UpdateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRoleOutcome()>>(
			[this, request]()
			{
			return this->updateRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RamClient::UpdateUserOutcome RamClient::updateUser(const UpdateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserOutcome(UpdateUserResult(outcome.result()));
	else
		return UpdateUserOutcome(outcome.error());
}

void RamClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RamClient::UpdateUserOutcomeCallable RamClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

