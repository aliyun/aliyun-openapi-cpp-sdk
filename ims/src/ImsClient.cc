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

#include <alibabacloud/ims/ImsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

namespace
{
	const std::string SERVICE_NAME = "Ims";
}

ImsClient::ImsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ims");
}

ImsClient::ImsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ims");
}

ImsClient::ImsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ims");
}

ImsClient::~ImsClient()
{}

ImsClient::AddClientIdToOIDCProviderOutcome ImsClient::addClientIdToOIDCProvider(const AddClientIdToOIDCProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddClientIdToOIDCProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddClientIdToOIDCProviderOutcome(AddClientIdToOIDCProviderResult(outcome.result()));
	else
		return AddClientIdToOIDCProviderOutcome(outcome.error());
}

void ImsClient::addClientIdToOIDCProviderAsync(const AddClientIdToOIDCProviderRequest& request, const AddClientIdToOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addClientIdToOIDCProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::AddClientIdToOIDCProviderOutcomeCallable ImsClient::addClientIdToOIDCProviderCallable(const AddClientIdToOIDCProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddClientIdToOIDCProviderOutcome()>>(
			[this, request]()
			{
			return this->addClientIdToOIDCProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::AddFingerprintToOIDCProviderOutcome ImsClient::addFingerprintToOIDCProvider(const AddFingerprintToOIDCProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFingerprintToOIDCProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFingerprintToOIDCProviderOutcome(AddFingerprintToOIDCProviderResult(outcome.result()));
	else
		return AddFingerprintToOIDCProviderOutcome(outcome.error());
}

void ImsClient::addFingerprintToOIDCProviderAsync(const AddFingerprintToOIDCProviderRequest& request, const AddFingerprintToOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFingerprintToOIDCProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::AddFingerprintToOIDCProviderOutcomeCallable ImsClient::addFingerprintToOIDCProviderCallable(const AddFingerprintToOIDCProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFingerprintToOIDCProviderOutcome()>>(
			[this, request]()
			{
			return this->addFingerprintToOIDCProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::AddUserToGroupOutcome ImsClient::addUserToGroup(const AddUserToGroupRequest &request) const
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

void ImsClient::addUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserToGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::AddUserToGroupOutcomeCallable ImsClient::addUserToGroupCallable(const AddUserToGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserToGroupOutcome()>>(
			[this, request]()
			{
			return this->addUserToGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::BindMFADeviceOutcome ImsClient::bindMFADevice(const BindMFADeviceRequest &request) const
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

void ImsClient::bindMFADeviceAsync(const BindMFADeviceRequest& request, const BindMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::BindMFADeviceOutcomeCallable ImsClient::bindMFADeviceCallable(const BindMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->bindMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ChangePasswordOutcome ImsClient::changePassword(const ChangePasswordRequest &request) const
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

void ImsClient::changePasswordAsync(const ChangePasswordRequest& request, const ChangePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changePassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ChangePasswordOutcomeCallable ImsClient::changePasswordCallable(const ChangePasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangePasswordOutcome()>>(
			[this, request]()
			{
			return this->changePassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateAccessKeyOutcome ImsClient::createAccessKey(const CreateAccessKeyRequest &request) const
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

void ImsClient::createAccessKeyAsync(const CreateAccessKeyRequest& request, const CreateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccessKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateAccessKeyOutcomeCallable ImsClient::createAccessKeyCallable(const CreateAccessKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccessKeyOutcome()>>(
			[this, request]()
			{
			return this->createAccessKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateAppSecretOutcome ImsClient::createAppSecret(const CreateAppSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppSecretOutcome(CreateAppSecretResult(outcome.result()));
	else
		return CreateAppSecretOutcome(outcome.error());
}

void ImsClient::createAppSecretAsync(const CreateAppSecretRequest& request, const CreateAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateAppSecretOutcomeCallable ImsClient::createAppSecretCallable(const CreateAppSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppSecretOutcome()>>(
			[this, request]()
			{
			return this->createAppSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateApplicationOutcome ImsClient::createApplication(const CreateApplicationRequest &request) const
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

void ImsClient::createApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateApplicationOutcomeCallable ImsClient::createApplicationCallable(const CreateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
			[this, request]()
			{
			return this->createApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateGroupOutcome ImsClient::createGroup(const CreateGroupRequest &request) const
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

void ImsClient::createGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateGroupOutcomeCallable ImsClient::createGroupCallable(const CreateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupOutcome()>>(
			[this, request]()
			{
			return this->createGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateLoginProfileOutcome ImsClient::createLoginProfile(const CreateLoginProfileRequest &request) const
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

void ImsClient::createLoginProfileAsync(const CreateLoginProfileRequest& request, const CreateLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoginProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateLoginProfileOutcomeCallable ImsClient::createLoginProfileCallable(const CreateLoginProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoginProfileOutcome()>>(
			[this, request]()
			{
			return this->createLoginProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateOIDCProviderOutcome ImsClient::createOIDCProvider(const CreateOIDCProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOIDCProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOIDCProviderOutcome(CreateOIDCProviderResult(outcome.result()));
	else
		return CreateOIDCProviderOutcome(outcome.error());
}

void ImsClient::createOIDCProviderAsync(const CreateOIDCProviderRequest& request, const CreateOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOIDCProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateOIDCProviderOutcomeCallable ImsClient::createOIDCProviderCallable(const CreateOIDCProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOIDCProviderOutcome()>>(
			[this, request]()
			{
			return this->createOIDCProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateSAMLProviderOutcome ImsClient::createSAMLProvider(const CreateSAMLProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSAMLProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSAMLProviderOutcome(CreateSAMLProviderResult(outcome.result()));
	else
		return CreateSAMLProviderOutcome(outcome.error());
}

void ImsClient::createSAMLProviderAsync(const CreateSAMLProviderRequest& request, const CreateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSAMLProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateSAMLProviderOutcomeCallable ImsClient::createSAMLProviderCallable(const CreateSAMLProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSAMLProviderOutcome()>>(
			[this, request]()
			{
			return this->createSAMLProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateUserOutcome ImsClient::createUser(const CreateUserRequest &request) const
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

void ImsClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateUserOutcomeCallable ImsClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::CreateVirtualMFADeviceOutcome ImsClient::createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request) const
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

void ImsClient::createVirtualMFADeviceAsync(const CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVirtualMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::CreateVirtualMFADeviceOutcomeCallable ImsClient::createVirtualMFADeviceCallable(const CreateVirtualMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVirtualMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->createVirtualMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteAccessKeyOutcome ImsClient::deleteAccessKey(const DeleteAccessKeyRequest &request) const
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

void ImsClient::deleteAccessKeyAsync(const DeleteAccessKeyRequest& request, const DeleteAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteAccessKeyOutcomeCallable ImsClient::deleteAccessKeyCallable(const DeleteAccessKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessKeyOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteAppSecretOutcome ImsClient::deleteAppSecret(const DeleteAppSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppSecretOutcome(DeleteAppSecretResult(outcome.result()));
	else
		return DeleteAppSecretOutcome(outcome.error());
}

void ImsClient::deleteAppSecretAsync(const DeleteAppSecretRequest& request, const DeleteAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteAppSecretOutcomeCallable ImsClient::deleteAppSecretCallable(const DeleteAppSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppSecretOutcome()>>(
			[this, request]()
			{
			return this->deleteAppSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteApplicationOutcome ImsClient::deleteApplication(const DeleteApplicationRequest &request) const
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

void ImsClient::deleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteApplicationOutcomeCallable ImsClient::deleteApplicationCallable(const DeleteApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
			[this, request]()
			{
			return this->deleteApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteGroupOutcome ImsClient::deleteGroup(const DeleteGroupRequest &request) const
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

void ImsClient::deleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteGroupOutcomeCallable ImsClient::deleteGroupCallable(const DeleteGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteLoginProfileOutcome ImsClient::deleteLoginProfile(const DeleteLoginProfileRequest &request) const
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

void ImsClient::deleteLoginProfileAsync(const DeleteLoginProfileRequest& request, const DeleteLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoginProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteLoginProfileOutcomeCallable ImsClient::deleteLoginProfileCallable(const DeleteLoginProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoginProfileOutcome()>>(
			[this, request]()
			{
			return this->deleteLoginProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteOIDCProviderOutcome ImsClient::deleteOIDCProvider(const DeleteOIDCProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOIDCProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOIDCProviderOutcome(DeleteOIDCProviderResult(outcome.result()));
	else
		return DeleteOIDCProviderOutcome(outcome.error());
}

void ImsClient::deleteOIDCProviderAsync(const DeleteOIDCProviderRequest& request, const DeleteOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOIDCProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteOIDCProviderOutcomeCallable ImsClient::deleteOIDCProviderCallable(const DeleteOIDCProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOIDCProviderOutcome()>>(
			[this, request]()
			{
			return this->deleteOIDCProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteSAMLProviderOutcome ImsClient::deleteSAMLProvider(const DeleteSAMLProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSAMLProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSAMLProviderOutcome(DeleteSAMLProviderResult(outcome.result()));
	else
		return DeleteSAMLProviderOutcome(outcome.error());
}

void ImsClient::deleteSAMLProviderAsync(const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSAMLProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteSAMLProviderOutcomeCallable ImsClient::deleteSAMLProviderCallable(const DeleteSAMLProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSAMLProviderOutcome()>>(
			[this, request]()
			{
			return this->deleteSAMLProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteUserOutcome ImsClient::deleteUser(const DeleteUserRequest &request) const
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

void ImsClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteUserOutcomeCallable ImsClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DeleteVirtualMFADeviceOutcome ImsClient::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request) const
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

void ImsClient::deleteVirtualMFADeviceAsync(const DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVirtualMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DeleteVirtualMFADeviceOutcomeCallable ImsClient::deleteVirtualMFADeviceCallable(const DeleteVirtualMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVirtualMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteVirtualMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::DisableVirtualMFAOutcome ImsClient::disableVirtualMFA(const DisableVirtualMFARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableVirtualMFAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableVirtualMFAOutcome(DisableVirtualMFAResult(outcome.result()));
	else
		return DisableVirtualMFAOutcome(outcome.error());
}

void ImsClient::disableVirtualMFAAsync(const DisableVirtualMFARequest& request, const DisableVirtualMFAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableVirtualMFA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::DisableVirtualMFAOutcomeCallable ImsClient::disableVirtualMFACallable(const DisableVirtualMFARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableVirtualMFAOutcome()>>(
			[this, request]()
			{
			return this->disableVirtualMFA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GenerateCredentialReportOutcome ImsClient::generateCredentialReport(const GenerateCredentialReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateCredentialReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateCredentialReportOutcome(GenerateCredentialReportResult(outcome.result()));
	else
		return GenerateCredentialReportOutcome(outcome.error());
}

void ImsClient::generateCredentialReportAsync(const GenerateCredentialReportRequest& request, const GenerateCredentialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateCredentialReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GenerateCredentialReportOutcomeCallable ImsClient::generateCredentialReportCallable(const GenerateCredentialReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateCredentialReportOutcome()>>(
			[this, request]()
			{
			return this->generateCredentialReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetAccessKeyLastUsedOutcome ImsClient::getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request) const
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

void ImsClient::getAccessKeyLastUsedAsync(const GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccessKeyLastUsed(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetAccessKeyLastUsedOutcomeCallable ImsClient::getAccessKeyLastUsedCallable(const GetAccessKeyLastUsedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccessKeyLastUsedOutcome()>>(
			[this, request]()
			{
			return this->getAccessKeyLastUsed(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetAccountMFAInfoOutcome ImsClient::getAccountMFAInfo(const GetAccountMFAInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountMFAInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountMFAInfoOutcome(GetAccountMFAInfoResult(outcome.result()));
	else
		return GetAccountMFAInfoOutcome(outcome.error());
}

void ImsClient::getAccountMFAInfoAsync(const GetAccountMFAInfoRequest& request, const GetAccountMFAInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountMFAInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetAccountMFAInfoOutcomeCallable ImsClient::getAccountMFAInfoCallable(const GetAccountMFAInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountMFAInfoOutcome()>>(
			[this, request]()
			{
			return this->getAccountMFAInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetAccountSecurityPracticeReportOutcome ImsClient::getAccountSecurityPracticeReport(const GetAccountSecurityPracticeReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountSecurityPracticeReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountSecurityPracticeReportOutcome(GetAccountSecurityPracticeReportResult(outcome.result()));
	else
		return GetAccountSecurityPracticeReportOutcome(outcome.error());
}

void ImsClient::getAccountSecurityPracticeReportAsync(const GetAccountSecurityPracticeReportRequest& request, const GetAccountSecurityPracticeReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountSecurityPracticeReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetAccountSecurityPracticeReportOutcomeCallable ImsClient::getAccountSecurityPracticeReportCallable(const GetAccountSecurityPracticeReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountSecurityPracticeReportOutcome()>>(
			[this, request]()
			{
			return this->getAccountSecurityPracticeReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetAccountSummaryOutcome ImsClient::getAccountSummary(const GetAccountSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountSummaryOutcome(GetAccountSummaryResult(outcome.result()));
	else
		return GetAccountSummaryOutcome(outcome.error());
}

void ImsClient::getAccountSummaryAsync(const GetAccountSummaryRequest& request, const GetAccountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetAccountSummaryOutcomeCallable ImsClient::getAccountSummaryCallable(const GetAccountSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountSummaryOutcome()>>(
			[this, request]()
			{
			return this->getAccountSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetAppSecretOutcome ImsClient::getAppSecret(const GetAppSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppSecretOutcome(GetAppSecretResult(outcome.result()));
	else
		return GetAppSecretOutcome(outcome.error());
}

void ImsClient::getAppSecretAsync(const GetAppSecretRequest& request, const GetAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetAppSecretOutcomeCallable ImsClient::getAppSecretCallable(const GetAppSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppSecretOutcome()>>(
			[this, request]()
			{
			return this->getAppSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetApplicationOutcome ImsClient::getApplication(const GetApplicationRequest &request) const
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

void ImsClient::getApplicationAsync(const GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetApplicationOutcomeCallable ImsClient::getApplicationCallable(const GetApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationOutcome()>>(
			[this, request]()
			{
			return this->getApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetCredentialReportOutcome ImsClient::getCredentialReport(const GetCredentialReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCredentialReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCredentialReportOutcome(GetCredentialReportResult(outcome.result()));
	else
		return GetCredentialReportOutcome(outcome.error());
}

void ImsClient::getCredentialReportAsync(const GetCredentialReportRequest& request, const GetCredentialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCredentialReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetCredentialReportOutcomeCallable ImsClient::getCredentialReportCallable(const GetCredentialReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCredentialReportOutcome()>>(
			[this, request]()
			{
			return this->getCredentialReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetDefaultDomainOutcome ImsClient::getDefaultDomain(const GetDefaultDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDefaultDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDefaultDomainOutcome(GetDefaultDomainResult(outcome.result()));
	else
		return GetDefaultDomainOutcome(outcome.error());
}

void ImsClient::getDefaultDomainAsync(const GetDefaultDomainRequest& request, const GetDefaultDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDefaultDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetDefaultDomainOutcomeCallable ImsClient::getDefaultDomainCallable(const GetDefaultDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDefaultDomainOutcome()>>(
			[this, request]()
			{
			return this->getDefaultDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetGroupOutcome ImsClient::getGroup(const GetGroupRequest &request) const
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

void ImsClient::getGroupAsync(const GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetGroupOutcomeCallable ImsClient::getGroupCallable(const GetGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupOutcome()>>(
			[this, request]()
			{
			return this->getGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetLoginProfileOutcome ImsClient::getLoginProfile(const GetLoginProfileRequest &request) const
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

void ImsClient::getLoginProfileAsync(const GetLoginProfileRequest& request, const GetLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoginProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetLoginProfileOutcomeCallable ImsClient::getLoginProfileCallable(const GetLoginProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoginProfileOutcome()>>(
			[this, request]()
			{
			return this->getLoginProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetOIDCProviderOutcome ImsClient::getOIDCProvider(const GetOIDCProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOIDCProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOIDCProviderOutcome(GetOIDCProviderResult(outcome.result()));
	else
		return GetOIDCProviderOutcome(outcome.error());
}

void ImsClient::getOIDCProviderAsync(const GetOIDCProviderRequest& request, const GetOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOIDCProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetOIDCProviderOutcomeCallable ImsClient::getOIDCProviderCallable(const GetOIDCProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOIDCProviderOutcome()>>(
			[this, request]()
			{
			return this->getOIDCProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetPasswordPolicyOutcome ImsClient::getPasswordPolicy(const GetPasswordPolicyRequest &request) const
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

void ImsClient::getPasswordPolicyAsync(const GetPasswordPolicyRequest& request, const GetPasswordPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPasswordPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetPasswordPolicyOutcomeCallable ImsClient::getPasswordPolicyCallable(const GetPasswordPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPasswordPolicyOutcome()>>(
			[this, request]()
			{
			return this->getPasswordPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetSAMLProviderOutcome ImsClient::getSAMLProvider(const GetSAMLProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSAMLProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSAMLProviderOutcome(GetSAMLProviderResult(outcome.result()));
	else
		return GetSAMLProviderOutcome(outcome.error());
}

void ImsClient::getSAMLProviderAsync(const GetSAMLProviderRequest& request, const GetSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSAMLProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetSAMLProviderOutcomeCallable ImsClient::getSAMLProviderCallable(const GetSAMLProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSAMLProviderOutcome()>>(
			[this, request]()
			{
			return this->getSAMLProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetSecurityPreferenceOutcome ImsClient::getSecurityPreference(const GetSecurityPreferenceRequest &request) const
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

void ImsClient::getSecurityPreferenceAsync(const GetSecurityPreferenceRequest& request, const GetSecurityPreferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecurityPreference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetSecurityPreferenceOutcomeCallable ImsClient::getSecurityPreferenceCallable(const GetSecurityPreferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecurityPreferenceOutcome()>>(
			[this, request]()
			{
			return this->getSecurityPreference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetUserOutcome ImsClient::getUser(const GetUserRequest &request) const
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

void ImsClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetUserOutcomeCallable ImsClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetUserMFAInfoOutcome ImsClient::getUserMFAInfo(const GetUserMFAInfoRequest &request) const
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

void ImsClient::getUserMFAInfoAsync(const GetUserMFAInfoRequest& request, const GetUserMFAInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserMFAInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetUserMFAInfoOutcomeCallable ImsClient::getUserMFAInfoCallable(const GetUserMFAInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserMFAInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserMFAInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetUserSsoSettingsOutcome ImsClient::getUserSsoSettings(const GetUserSsoSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserSsoSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserSsoSettingsOutcome(GetUserSsoSettingsResult(outcome.result()));
	else
		return GetUserSsoSettingsOutcome(outcome.error());
}

void ImsClient::getUserSsoSettingsAsync(const GetUserSsoSettingsRequest& request, const GetUserSsoSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserSsoSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetUserSsoSettingsOutcomeCallable ImsClient::getUserSsoSettingsCallable(const GetUserSsoSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserSsoSettingsOutcome()>>(
			[this, request]()
			{
			return this->getUserSsoSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::GetVerificationInfoOutcome ImsClient::getVerificationInfo(const GetVerificationInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVerificationInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVerificationInfoOutcome(GetVerificationInfoResult(outcome.result()));
	else
		return GetVerificationInfoOutcome(outcome.error());
}

void ImsClient::getVerificationInfoAsync(const GetVerificationInfoRequest& request, const GetVerificationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVerificationInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::GetVerificationInfoOutcomeCallable ImsClient::getVerificationInfoCallable(const GetVerificationInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVerificationInfoOutcome()>>(
			[this, request]()
			{
			return this->getVerificationInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListAccessKeysOutcome ImsClient::listAccessKeys(const ListAccessKeysRequest &request) const
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

void ImsClient::listAccessKeysAsync(const ListAccessKeysRequest& request, const ListAccessKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccessKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListAccessKeysOutcomeCallable ImsClient::listAccessKeysCallable(const ListAccessKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccessKeysOutcome()>>(
			[this, request]()
			{
			return this->listAccessKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListAppSecretIdsOutcome ImsClient::listAppSecretIds(const ListAppSecretIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppSecretIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppSecretIdsOutcome(ListAppSecretIdsResult(outcome.result()));
	else
		return ListAppSecretIdsOutcome(outcome.error());
}

void ImsClient::listAppSecretIdsAsync(const ListAppSecretIdsRequest& request, const ListAppSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppSecretIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListAppSecretIdsOutcomeCallable ImsClient::listAppSecretIdsCallable(const ListAppSecretIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppSecretIdsOutcome()>>(
			[this, request]()
			{
			return this->listAppSecretIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListApplicationsOutcome ImsClient::listApplications(const ListApplicationsRequest &request) const
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

void ImsClient::listApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListApplicationsOutcomeCallable ImsClient::listApplicationsCallable(const ListApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListGroupsOutcome ImsClient::listGroups(const ListGroupsRequest &request) const
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

void ImsClient::listGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListGroupsOutcomeCallable ImsClient::listGroupsCallable(const ListGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
			[this, request]()
			{
			return this->listGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListGroupsForUserOutcome ImsClient::listGroupsForUser(const ListGroupsForUserRequest &request) const
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

void ImsClient::listGroupsForUserAsync(const ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupsForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListGroupsForUserOutcomeCallable ImsClient::listGroupsForUserCallable(const ListGroupsForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsForUserOutcome()>>(
			[this, request]()
			{
			return this->listGroupsForUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListOIDCProvidersOutcome ImsClient::listOIDCProviders(const ListOIDCProvidersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOIDCProvidersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOIDCProvidersOutcome(ListOIDCProvidersResult(outcome.result()));
	else
		return ListOIDCProvidersOutcome(outcome.error());
}

void ImsClient::listOIDCProvidersAsync(const ListOIDCProvidersRequest& request, const ListOIDCProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOIDCProviders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListOIDCProvidersOutcomeCallable ImsClient::listOIDCProvidersCallable(const ListOIDCProvidersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOIDCProvidersOutcome()>>(
			[this, request]()
			{
			return this->listOIDCProviders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListPredefinedScopesOutcome ImsClient::listPredefinedScopes(const ListPredefinedScopesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPredefinedScopesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPredefinedScopesOutcome(ListPredefinedScopesResult(outcome.result()));
	else
		return ListPredefinedScopesOutcome(outcome.error());
}

void ImsClient::listPredefinedScopesAsync(const ListPredefinedScopesRequest& request, const ListPredefinedScopesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPredefinedScopes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListPredefinedScopesOutcomeCallable ImsClient::listPredefinedScopesCallable(const ListPredefinedScopesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPredefinedScopesOutcome()>>(
			[this, request]()
			{
			return this->listPredefinedScopes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListSAMLProvidersOutcome ImsClient::listSAMLProviders(const ListSAMLProvidersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSAMLProvidersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSAMLProvidersOutcome(ListSAMLProvidersResult(outcome.result()));
	else
		return ListSAMLProvidersOutcome(outcome.error());
}

void ImsClient::listSAMLProvidersAsync(const ListSAMLProvidersRequest& request, const ListSAMLProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSAMLProviders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListSAMLProvidersOutcomeCallable ImsClient::listSAMLProvidersCallable(const ListSAMLProvidersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSAMLProvidersOutcome()>>(
			[this, request]()
			{
			return this->listSAMLProviders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListTagResourcesOutcome ImsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void ImsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListTagResourcesOutcomeCallable ImsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListUserBasicInfosOutcome ImsClient::listUserBasicInfos(const ListUserBasicInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserBasicInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserBasicInfosOutcome(ListUserBasicInfosResult(outcome.result()));
	else
		return ListUserBasicInfosOutcome(outcome.error());
}

void ImsClient::listUserBasicInfosAsync(const ListUserBasicInfosRequest& request, const ListUserBasicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserBasicInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListUserBasicInfosOutcomeCallable ImsClient::listUserBasicInfosCallable(const ListUserBasicInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserBasicInfosOutcome()>>(
			[this, request]()
			{
			return this->listUserBasicInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListUsersOutcome ImsClient::listUsers(const ListUsersRequest &request) const
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

void ImsClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListUsersOutcomeCallable ImsClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListUsersForGroupOutcome ImsClient::listUsersForGroup(const ListUsersForGroupRequest &request) const
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

void ImsClient::listUsersForGroupAsync(const ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsersForGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListUsersForGroupOutcomeCallable ImsClient::listUsersForGroupCallable(const ListUsersForGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersForGroupOutcome()>>(
			[this, request]()
			{
			return this->listUsersForGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::ListVirtualMFADevicesOutcome ImsClient::listVirtualMFADevices(const ListVirtualMFADevicesRequest &request) const
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

void ImsClient::listVirtualMFADevicesAsync(const ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVirtualMFADevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::ListVirtualMFADevicesOutcomeCallable ImsClient::listVirtualMFADevicesCallable(const ListVirtualMFADevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVirtualMFADevicesOutcome()>>(
			[this, request]()
			{
			return this->listVirtualMFADevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::RemoveClientIdFromOIDCProviderOutcome ImsClient::removeClientIdFromOIDCProvider(const RemoveClientIdFromOIDCProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveClientIdFromOIDCProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveClientIdFromOIDCProviderOutcome(RemoveClientIdFromOIDCProviderResult(outcome.result()));
	else
		return RemoveClientIdFromOIDCProviderOutcome(outcome.error());
}

void ImsClient::removeClientIdFromOIDCProviderAsync(const RemoveClientIdFromOIDCProviderRequest& request, const RemoveClientIdFromOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeClientIdFromOIDCProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::RemoveClientIdFromOIDCProviderOutcomeCallable ImsClient::removeClientIdFromOIDCProviderCallable(const RemoveClientIdFromOIDCProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveClientIdFromOIDCProviderOutcome()>>(
			[this, request]()
			{
			return this->removeClientIdFromOIDCProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::RemoveFingerprintFromOIDCProviderOutcome ImsClient::removeFingerprintFromOIDCProvider(const RemoveFingerprintFromOIDCProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveFingerprintFromOIDCProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveFingerprintFromOIDCProviderOutcome(RemoveFingerprintFromOIDCProviderResult(outcome.result()));
	else
		return RemoveFingerprintFromOIDCProviderOutcome(outcome.error());
}

void ImsClient::removeFingerprintFromOIDCProviderAsync(const RemoveFingerprintFromOIDCProviderRequest& request, const RemoveFingerprintFromOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeFingerprintFromOIDCProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::RemoveFingerprintFromOIDCProviderOutcomeCallable ImsClient::removeFingerprintFromOIDCProviderCallable(const RemoveFingerprintFromOIDCProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveFingerprintFromOIDCProviderOutcome()>>(
			[this, request]()
			{
			return this->removeFingerprintFromOIDCProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::RemoveUserFromGroupOutcome ImsClient::removeUserFromGroup(const RemoveUserFromGroupRequest &request) const
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

void ImsClient::removeUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUserFromGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::RemoveUserFromGroupOutcomeCallable ImsClient::removeUserFromGroupCallable(const RemoveUserFromGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUserFromGroupOutcome()>>(
			[this, request]()
			{
			return this->removeUserFromGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::SetDefaultDomainOutcome ImsClient::setDefaultDomain(const SetDefaultDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDefaultDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDefaultDomainOutcome(SetDefaultDomainResult(outcome.result()));
	else
		return SetDefaultDomainOutcome(outcome.error());
}

void ImsClient::setDefaultDomainAsync(const SetDefaultDomainRequest& request, const SetDefaultDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::SetDefaultDomainOutcomeCallable ImsClient::setDefaultDomainCallable(const SetDefaultDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultDomainOutcome()>>(
			[this, request]()
			{
			return this->setDefaultDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::SetPasswordPolicyOutcome ImsClient::setPasswordPolicy(const SetPasswordPolicyRequest &request) const
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

void ImsClient::setPasswordPolicyAsync(const SetPasswordPolicyRequest& request, const SetPasswordPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPasswordPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::SetPasswordPolicyOutcomeCallable ImsClient::setPasswordPolicyCallable(const SetPasswordPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPasswordPolicyOutcome()>>(
			[this, request]()
			{
			return this->setPasswordPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::SetSecurityPreferenceOutcome ImsClient::setSecurityPreference(const SetSecurityPreferenceRequest &request) const
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

void ImsClient::setSecurityPreferenceAsync(const SetSecurityPreferenceRequest& request, const SetSecurityPreferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSecurityPreference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::SetSecurityPreferenceOutcomeCallable ImsClient::setSecurityPreferenceCallable(const SetSecurityPreferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSecurityPreferenceOutcome()>>(
			[this, request]()
			{
			return this->setSecurityPreference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::SetUserSsoSettingsOutcome ImsClient::setUserSsoSettings(const SetUserSsoSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserSsoSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserSsoSettingsOutcome(SetUserSsoSettingsResult(outcome.result()));
	else
		return SetUserSsoSettingsOutcome(outcome.error());
}

void ImsClient::setUserSsoSettingsAsync(const SetUserSsoSettingsRequest& request, const SetUserSsoSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserSsoSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::SetUserSsoSettingsOutcomeCallable ImsClient::setUserSsoSettingsCallable(const SetUserSsoSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserSsoSettingsOutcome()>>(
			[this, request]()
			{
			return this->setUserSsoSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::TagResourcesOutcome ImsClient::tagResources(const TagResourcesRequest &request) const
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

void ImsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::TagResourcesOutcomeCallable ImsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UnbindMFADeviceOutcome ImsClient::unbindMFADevice(const UnbindMFADeviceRequest &request) const
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

void ImsClient::unbindMFADeviceAsync(const UnbindMFADeviceRequest& request, const UnbindMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindMFADevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UnbindMFADeviceOutcomeCallable ImsClient::unbindMFADeviceCallable(const UnbindMFADeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindMFADeviceOutcome()>>(
			[this, request]()
			{
			return this->unbindMFADevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UntagResourcesOutcome ImsClient::untagResources(const UntagResourcesRequest &request) const
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

void ImsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UntagResourcesOutcomeCallable ImsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UpdateAccessKeyOutcome ImsClient::updateAccessKey(const UpdateAccessKeyRequest &request) const
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

void ImsClient::updateAccessKeyAsync(const UpdateAccessKeyRequest& request, const UpdateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccessKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UpdateAccessKeyOutcomeCallable ImsClient::updateAccessKeyCallable(const UpdateAccessKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAccessKeyOutcome()>>(
			[this, request]()
			{
			return this->updateAccessKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UpdateApplicationOutcome ImsClient::updateApplication(const UpdateApplicationRequest &request) const
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

void ImsClient::updateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UpdateApplicationOutcomeCallable ImsClient::updateApplicationCallable(const UpdateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationOutcome()>>(
			[this, request]()
			{
			return this->updateApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UpdateGroupOutcome ImsClient::updateGroup(const UpdateGroupRequest &request) const
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

void ImsClient::updateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UpdateGroupOutcomeCallable ImsClient::updateGroupCallable(const UpdateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupOutcome()>>(
			[this, request]()
			{
			return this->updateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UpdateLoginProfileOutcome ImsClient::updateLoginProfile(const UpdateLoginProfileRequest &request) const
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

void ImsClient::updateLoginProfileAsync(const UpdateLoginProfileRequest& request, const UpdateLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoginProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UpdateLoginProfileOutcomeCallable ImsClient::updateLoginProfileCallable(const UpdateLoginProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoginProfileOutcome()>>(
			[this, request]()
			{
			return this->updateLoginProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UpdateOIDCProviderOutcome ImsClient::updateOIDCProvider(const UpdateOIDCProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOIDCProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOIDCProviderOutcome(UpdateOIDCProviderResult(outcome.result()));
	else
		return UpdateOIDCProviderOutcome(outcome.error());
}

void ImsClient::updateOIDCProviderAsync(const UpdateOIDCProviderRequest& request, const UpdateOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOIDCProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UpdateOIDCProviderOutcomeCallable ImsClient::updateOIDCProviderCallable(const UpdateOIDCProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOIDCProviderOutcome()>>(
			[this, request]()
			{
			return this->updateOIDCProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UpdateSAMLProviderOutcome ImsClient::updateSAMLProvider(const UpdateSAMLProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSAMLProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSAMLProviderOutcome(UpdateSAMLProviderResult(outcome.result()));
	else
		return UpdateSAMLProviderOutcome(outcome.error());
}

void ImsClient::updateSAMLProviderAsync(const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSAMLProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UpdateSAMLProviderOutcomeCallable ImsClient::updateSAMLProviderCallable(const UpdateSAMLProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSAMLProviderOutcome()>>(
			[this, request]()
			{
			return this->updateSAMLProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImsClient::UpdateUserOutcome ImsClient::updateUser(const UpdateUserRequest &request) const
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

void ImsClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImsClient::UpdateUserOutcomeCallable ImsClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

