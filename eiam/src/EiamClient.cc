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

#include <alibabacloud/eiam/EiamClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

namespace
{
	const std::string SERVICE_NAME = "Eiam";
}

EiamClient::EiamClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eiam");
}

EiamClient::EiamClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eiam");
}

EiamClient::EiamClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eiam");
}

EiamClient::~EiamClient()
{}

EiamClient::AddUserToOrganizationalUnitsOutcome EiamClient::addUserToOrganizationalUnits(const AddUserToOrganizationalUnitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserToOrganizationalUnitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserToOrganizationalUnitsOutcome(AddUserToOrganizationalUnitsResult(outcome.result()));
	else
		return AddUserToOrganizationalUnitsOutcome(outcome.error());
}

void EiamClient::addUserToOrganizationalUnitsAsync(const AddUserToOrganizationalUnitsRequest& request, const AddUserToOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserToOrganizationalUnits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::AddUserToOrganizationalUnitsOutcomeCallable EiamClient::addUserToOrganizationalUnitsCallable(const AddUserToOrganizationalUnitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserToOrganizationalUnitsOutcome()>>(
			[this, request]()
			{
			return this->addUserToOrganizationalUnits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::AddUsersToGroupOutcome EiamClient::addUsersToGroup(const AddUsersToGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUsersToGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUsersToGroupOutcome(AddUsersToGroupResult(outcome.result()));
	else
		return AddUsersToGroupOutcome(outcome.error());
}

void EiamClient::addUsersToGroupAsync(const AddUsersToGroupRequest& request, const AddUsersToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUsersToGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::AddUsersToGroupOutcomeCallable EiamClient::addUsersToGroupCallable(const AddUsersToGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUsersToGroupOutcome()>>(
			[this, request]()
			{
			return this->addUsersToGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::AuthorizeApplicationToGroupsOutcome EiamClient::authorizeApplicationToGroups(const AuthorizeApplicationToGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeApplicationToGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeApplicationToGroupsOutcome(AuthorizeApplicationToGroupsResult(outcome.result()));
	else
		return AuthorizeApplicationToGroupsOutcome(outcome.error());
}

void EiamClient::authorizeApplicationToGroupsAsync(const AuthorizeApplicationToGroupsRequest& request, const AuthorizeApplicationToGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeApplicationToGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::AuthorizeApplicationToGroupsOutcomeCallable EiamClient::authorizeApplicationToGroupsCallable(const AuthorizeApplicationToGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeApplicationToGroupsOutcome()>>(
			[this, request]()
			{
			return this->authorizeApplicationToGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::AuthorizeApplicationToOrganizationalUnitsOutcome EiamClient::authorizeApplicationToOrganizationalUnits(const AuthorizeApplicationToOrganizationalUnitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeApplicationToOrganizationalUnitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeApplicationToOrganizationalUnitsOutcome(AuthorizeApplicationToOrganizationalUnitsResult(outcome.result()));
	else
		return AuthorizeApplicationToOrganizationalUnitsOutcome(outcome.error());
}

void EiamClient::authorizeApplicationToOrganizationalUnitsAsync(const AuthorizeApplicationToOrganizationalUnitsRequest& request, const AuthorizeApplicationToOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeApplicationToOrganizationalUnits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::AuthorizeApplicationToOrganizationalUnitsOutcomeCallable EiamClient::authorizeApplicationToOrganizationalUnitsCallable(const AuthorizeApplicationToOrganizationalUnitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeApplicationToOrganizationalUnitsOutcome()>>(
			[this, request]()
			{
			return this->authorizeApplicationToOrganizationalUnits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::AuthorizeApplicationToUsersOutcome EiamClient::authorizeApplicationToUsers(const AuthorizeApplicationToUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeApplicationToUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeApplicationToUsersOutcome(AuthorizeApplicationToUsersResult(outcome.result()));
	else
		return AuthorizeApplicationToUsersOutcome(outcome.error());
}

void EiamClient::authorizeApplicationToUsersAsync(const AuthorizeApplicationToUsersRequest& request, const AuthorizeApplicationToUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeApplicationToUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::AuthorizeApplicationToUsersOutcomeCallable EiamClient::authorizeApplicationToUsersCallable(const AuthorizeApplicationToUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeApplicationToUsersOutcome()>>(
			[this, request]()
			{
			return this->authorizeApplicationToUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateApplicationOutcome EiamClient::createApplication(const CreateApplicationRequest &request) const
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

void EiamClient::createApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateApplicationOutcomeCallable EiamClient::createApplicationCallable(const CreateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
			[this, request]()
			{
			return this->createApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateApplicationClientSecretOutcome EiamClient::createApplicationClientSecret(const CreateApplicationClientSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationClientSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationClientSecretOutcome(CreateApplicationClientSecretResult(outcome.result()));
	else
		return CreateApplicationClientSecretOutcome(outcome.error());
}

void EiamClient::createApplicationClientSecretAsync(const CreateApplicationClientSecretRequest& request, const CreateApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationClientSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateApplicationClientSecretOutcomeCallable EiamClient::createApplicationClientSecretCallable(const CreateApplicationClientSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationClientSecretOutcome()>>(
			[this, request]()
			{
			return this->createApplicationClientSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateConditionalAccessPolicyOutcome EiamClient::createConditionalAccessPolicy(const CreateConditionalAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConditionalAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConditionalAccessPolicyOutcome(CreateConditionalAccessPolicyResult(outcome.result()));
	else
		return CreateConditionalAccessPolicyOutcome(outcome.error());
}

void EiamClient::createConditionalAccessPolicyAsync(const CreateConditionalAccessPolicyRequest& request, const CreateConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConditionalAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateConditionalAccessPolicyOutcomeCallable EiamClient::createConditionalAccessPolicyCallable(const CreateConditionalAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConditionalAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->createConditionalAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateDomainOutcome EiamClient::createDomain(const CreateDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDomainOutcome(CreateDomainResult(outcome.result()));
	else
		return CreateDomainOutcome(outcome.error());
}

void EiamClient::createDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateDomainOutcomeCallable EiamClient::createDomainCallable(const CreateDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDomainOutcome()>>(
			[this, request]()
			{
			return this->createDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateDomainProxyTokenOutcome EiamClient::createDomainProxyToken(const CreateDomainProxyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDomainProxyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDomainProxyTokenOutcome(CreateDomainProxyTokenResult(outcome.result()));
	else
		return CreateDomainProxyTokenOutcome(outcome.error());
}

void EiamClient::createDomainProxyTokenAsync(const CreateDomainProxyTokenRequest& request, const CreateDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDomainProxyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateDomainProxyTokenOutcomeCallable EiamClient::createDomainProxyTokenCallable(const CreateDomainProxyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDomainProxyTokenOutcome()>>(
			[this, request]()
			{
			return this->createDomainProxyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateGroupOutcome EiamClient::createGroup(const CreateGroupRequest &request) const
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

void EiamClient::createGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateGroupOutcomeCallable EiamClient::createGroupCallable(const CreateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupOutcome()>>(
			[this, request]()
			{
			return this->createGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateIdentityProviderOutcome EiamClient::createIdentityProvider(const CreateIdentityProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIdentityProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIdentityProviderOutcome(CreateIdentityProviderResult(outcome.result()));
	else
		return CreateIdentityProviderOutcome(outcome.error());
}

void EiamClient::createIdentityProviderAsync(const CreateIdentityProviderRequest& request, const CreateIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIdentityProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateIdentityProviderOutcomeCallable EiamClient::createIdentityProviderCallable(const CreateIdentityProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIdentityProviderOutcome()>>(
			[this, request]()
			{
			return this->createIdentityProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateInstanceOutcome EiamClient::createInstance(const CreateInstanceRequest &request) const
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

void EiamClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateInstanceOutcomeCallable EiamClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateNetworkAccessEndpointOutcome EiamClient::createNetworkAccessEndpoint(const CreateNetworkAccessEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkAccessEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkAccessEndpointOutcome(CreateNetworkAccessEndpointResult(outcome.result()));
	else
		return CreateNetworkAccessEndpointOutcome(outcome.error());
}

void EiamClient::createNetworkAccessEndpointAsync(const CreateNetworkAccessEndpointRequest& request, const CreateNetworkAccessEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkAccessEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateNetworkAccessEndpointOutcomeCallable EiamClient::createNetworkAccessEndpointCallable(const CreateNetworkAccessEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkAccessEndpointOutcome()>>(
			[this, request]()
			{
			return this->createNetworkAccessEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateOrganizationalUnitOutcome EiamClient::createOrganizationalUnit(const CreateOrganizationalUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrganizationalUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrganizationalUnitOutcome(CreateOrganizationalUnitResult(outcome.result()));
	else
		return CreateOrganizationalUnitOutcome(outcome.error());
}

void EiamClient::createOrganizationalUnitAsync(const CreateOrganizationalUnitRequest& request, const CreateOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrganizationalUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateOrganizationalUnitOutcomeCallable EiamClient::createOrganizationalUnitCallable(const CreateOrganizationalUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrganizationalUnitOutcome()>>(
			[this, request]()
			{
			return this->createOrganizationalUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateUserOutcome EiamClient::createUser(const CreateUserRequest &request) const
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

void EiamClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateUserOutcomeCallable EiamClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteApplicationOutcome EiamClient::deleteApplication(const DeleteApplicationRequest &request) const
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

void EiamClient::deleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteApplicationOutcomeCallable EiamClient::deleteApplicationCallable(const DeleteApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
			[this, request]()
			{
			return this->deleteApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteApplicationClientSecretOutcome EiamClient::deleteApplicationClientSecret(const DeleteApplicationClientSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationClientSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationClientSecretOutcome(DeleteApplicationClientSecretResult(outcome.result()));
	else
		return DeleteApplicationClientSecretOutcome(outcome.error());
}

void EiamClient::deleteApplicationClientSecretAsync(const DeleteApplicationClientSecretRequest& request, const DeleteApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationClientSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteApplicationClientSecretOutcomeCallable EiamClient::deleteApplicationClientSecretCallable(const DeleteApplicationClientSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationClientSecretOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationClientSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteConditionalAccessPolicyOutcome EiamClient::deleteConditionalAccessPolicy(const DeleteConditionalAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConditionalAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConditionalAccessPolicyOutcome(DeleteConditionalAccessPolicyResult(outcome.result()));
	else
		return DeleteConditionalAccessPolicyOutcome(outcome.error());
}

void EiamClient::deleteConditionalAccessPolicyAsync(const DeleteConditionalAccessPolicyRequest& request, const DeleteConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConditionalAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteConditionalAccessPolicyOutcomeCallable EiamClient::deleteConditionalAccessPolicyCallable(const DeleteConditionalAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConditionalAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteConditionalAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteDomainOutcome EiamClient::deleteDomain(const DeleteDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainOutcome(DeleteDomainResult(outcome.result()));
	else
		return DeleteDomainOutcome(outcome.error());
}

void EiamClient::deleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteDomainOutcomeCallable EiamClient::deleteDomainCallable(const DeleteDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteDomainProxyTokenOutcome EiamClient::deleteDomainProxyToken(const DeleteDomainProxyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainProxyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainProxyTokenOutcome(DeleteDomainProxyTokenResult(outcome.result()));
	else
		return DeleteDomainProxyTokenOutcome(outcome.error());
}

void EiamClient::deleteDomainProxyTokenAsync(const DeleteDomainProxyTokenRequest& request, const DeleteDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomainProxyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteDomainProxyTokenOutcomeCallable EiamClient::deleteDomainProxyTokenCallable(const DeleteDomainProxyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainProxyTokenOutcome()>>(
			[this, request]()
			{
			return this->deleteDomainProxyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteGroupOutcome EiamClient::deleteGroup(const DeleteGroupRequest &request) const
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

void EiamClient::deleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteGroupOutcomeCallable EiamClient::deleteGroupCallable(const DeleteGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteIdentityProviderOutcome EiamClient::deleteIdentityProvider(const DeleteIdentityProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIdentityProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIdentityProviderOutcome(DeleteIdentityProviderResult(outcome.result()));
	else
		return DeleteIdentityProviderOutcome(outcome.error());
}

void EiamClient::deleteIdentityProviderAsync(const DeleteIdentityProviderRequest& request, const DeleteIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIdentityProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteIdentityProviderOutcomeCallable EiamClient::deleteIdentityProviderCallable(const DeleteIdentityProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIdentityProviderOutcome()>>(
			[this, request]()
			{
			return this->deleteIdentityProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteInstanceOutcome EiamClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void EiamClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteInstanceOutcomeCallable EiamClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteNetworkAccessEndpointOutcome EiamClient::deleteNetworkAccessEndpoint(const DeleteNetworkAccessEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkAccessEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkAccessEndpointOutcome(DeleteNetworkAccessEndpointResult(outcome.result()));
	else
		return DeleteNetworkAccessEndpointOutcome(outcome.error());
}

void EiamClient::deleteNetworkAccessEndpointAsync(const DeleteNetworkAccessEndpointRequest& request, const DeleteNetworkAccessEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkAccessEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteNetworkAccessEndpointOutcomeCallable EiamClient::deleteNetworkAccessEndpointCallable(const DeleteNetworkAccessEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkAccessEndpointOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkAccessEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteOrganizationalUnitOutcome EiamClient::deleteOrganizationalUnit(const DeleteOrganizationalUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOrganizationalUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOrganizationalUnitOutcome(DeleteOrganizationalUnitResult(outcome.result()));
	else
		return DeleteOrganizationalUnitOutcome(outcome.error());
}

void EiamClient::deleteOrganizationalUnitAsync(const DeleteOrganizationalUnitRequest& request, const DeleteOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOrganizationalUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteOrganizationalUnitOutcomeCallable EiamClient::deleteOrganizationalUnitCallable(const DeleteOrganizationalUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOrganizationalUnitOutcome()>>(
			[this, request]()
			{
			return this->deleteOrganizationalUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteOrganizationalUnitChildrenOutcome EiamClient::deleteOrganizationalUnitChildren(const DeleteOrganizationalUnitChildrenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOrganizationalUnitChildrenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOrganizationalUnitChildrenOutcome(DeleteOrganizationalUnitChildrenResult(outcome.result()));
	else
		return DeleteOrganizationalUnitChildrenOutcome(outcome.error());
}

void EiamClient::deleteOrganizationalUnitChildrenAsync(const DeleteOrganizationalUnitChildrenRequest& request, const DeleteOrganizationalUnitChildrenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOrganizationalUnitChildren(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteOrganizationalUnitChildrenOutcomeCallable EiamClient::deleteOrganizationalUnitChildrenCallable(const DeleteOrganizationalUnitChildrenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOrganizationalUnitChildrenOutcome()>>(
			[this, request]()
			{
			return this->deleteOrganizationalUnitChildren(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteUserOutcome EiamClient::deleteUser(const DeleteUserRequest &request) const
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

void EiamClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteUserOutcomeCallable EiamClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableApplicationOutcome EiamClient::disableApplication(const DisableApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationOutcome(DisableApplicationResult(outcome.result()));
	else
		return DisableApplicationOutcome(outcome.error());
}

void EiamClient::disableApplicationAsync(const DisableApplicationRequest& request, const DisableApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableApplicationOutcomeCallable EiamClient::disableApplicationCallable(const DisableApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationOutcome()>>(
			[this, request]()
			{
			return this->disableApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableApplicationApiInvokeOutcome EiamClient::disableApplicationApiInvoke(const DisableApplicationApiInvokeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationApiInvokeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationApiInvokeOutcome(DisableApplicationApiInvokeResult(outcome.result()));
	else
		return DisableApplicationApiInvokeOutcome(outcome.error());
}

void EiamClient::disableApplicationApiInvokeAsync(const DisableApplicationApiInvokeRequest& request, const DisableApplicationApiInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationApiInvoke(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableApplicationApiInvokeOutcomeCallable EiamClient::disableApplicationApiInvokeCallable(const DisableApplicationApiInvokeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationApiInvokeOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationApiInvoke(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableApplicationClientSecretOutcome EiamClient::disableApplicationClientSecret(const DisableApplicationClientSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationClientSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationClientSecretOutcome(DisableApplicationClientSecretResult(outcome.result()));
	else
		return DisableApplicationClientSecretOutcome(outcome.error());
}

void EiamClient::disableApplicationClientSecretAsync(const DisableApplicationClientSecretRequest& request, const DisableApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationClientSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableApplicationClientSecretOutcomeCallable EiamClient::disableApplicationClientSecretCallable(const DisableApplicationClientSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationClientSecretOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationClientSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableApplicationProvisioningOutcome EiamClient::disableApplicationProvisioning(const DisableApplicationProvisioningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationProvisioningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationProvisioningOutcome(DisableApplicationProvisioningResult(outcome.result()));
	else
		return DisableApplicationProvisioningOutcome(outcome.error());
}

void EiamClient::disableApplicationProvisioningAsync(const DisableApplicationProvisioningRequest& request, const DisableApplicationProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationProvisioning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableApplicationProvisioningOutcomeCallable EiamClient::disableApplicationProvisioningCallable(const DisableApplicationProvisioningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationProvisioningOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationProvisioning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableApplicationSsoOutcome EiamClient::disableApplicationSso(const DisableApplicationSsoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationSsoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationSsoOutcome(DisableApplicationSsoResult(outcome.result()));
	else
		return DisableApplicationSsoOutcome(outcome.error());
}

void EiamClient::disableApplicationSsoAsync(const DisableApplicationSsoRequest& request, const DisableApplicationSsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationSso(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableApplicationSsoOutcomeCallable EiamClient::disableApplicationSsoCallable(const DisableApplicationSsoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationSsoOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationSso(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableConditionalAccessPolicyOutcome EiamClient::disableConditionalAccessPolicy(const DisableConditionalAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableConditionalAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableConditionalAccessPolicyOutcome(DisableConditionalAccessPolicyResult(outcome.result()));
	else
		return DisableConditionalAccessPolicyOutcome(outcome.error());
}

void EiamClient::disableConditionalAccessPolicyAsync(const DisableConditionalAccessPolicyRequest& request, const DisableConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableConditionalAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableConditionalAccessPolicyOutcomeCallable EiamClient::disableConditionalAccessPolicyCallable(const DisableConditionalAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableConditionalAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->disableConditionalAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableDomainProxyTokenOutcome EiamClient::disableDomainProxyToken(const DisableDomainProxyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDomainProxyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDomainProxyTokenOutcome(DisableDomainProxyTokenResult(outcome.result()));
	else
		return DisableDomainProxyTokenOutcome(outcome.error());
}

void EiamClient::disableDomainProxyTokenAsync(const DisableDomainProxyTokenRequest& request, const DisableDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDomainProxyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableDomainProxyTokenOutcomeCallable EiamClient::disableDomainProxyTokenCallable(const DisableDomainProxyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDomainProxyTokenOutcome()>>(
			[this, request]()
			{
			return this->disableDomainProxyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableIdentityProviderUdPullOutcome EiamClient::disableIdentityProviderUdPull(const DisableIdentityProviderUdPullRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableIdentityProviderUdPullOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableIdentityProviderUdPullOutcome(DisableIdentityProviderUdPullResult(outcome.result()));
	else
		return DisableIdentityProviderUdPullOutcome(outcome.error());
}

void EiamClient::disableIdentityProviderUdPullAsync(const DisableIdentityProviderUdPullRequest& request, const DisableIdentityProviderUdPullAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableIdentityProviderUdPull(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableIdentityProviderUdPullOutcomeCallable EiamClient::disableIdentityProviderUdPullCallable(const DisableIdentityProviderUdPullRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableIdentityProviderUdPullOutcome()>>(
			[this, request]()
			{
			return this->disableIdentityProviderUdPull(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableInitDomainAutoRedirectOutcome EiamClient::disableInitDomainAutoRedirect(const DisableInitDomainAutoRedirectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableInitDomainAutoRedirectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableInitDomainAutoRedirectOutcome(DisableInitDomainAutoRedirectResult(outcome.result()));
	else
		return DisableInitDomainAutoRedirectOutcome(outcome.error());
}

void EiamClient::disableInitDomainAutoRedirectAsync(const DisableInitDomainAutoRedirectRequest& request, const DisableInitDomainAutoRedirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableInitDomainAutoRedirect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableInitDomainAutoRedirectOutcomeCallable EiamClient::disableInitDomainAutoRedirectCallable(const DisableInitDomainAutoRedirectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableInitDomainAutoRedirectOutcome()>>(
			[this, request]()
			{
			return this->disableInitDomainAutoRedirect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableUserOutcome EiamClient::disableUser(const DisableUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableUserOutcome(DisableUserResult(outcome.result()));
	else
		return DisableUserOutcome(outcome.error());
}

void EiamClient::disableUserAsync(const DisableUserRequest& request, const DisableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableUserOutcomeCallable EiamClient::disableUserCallable(const DisableUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableUserOutcome()>>(
			[this, request]()
			{
			return this->disableUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableApplicationOutcome EiamClient::enableApplication(const EnableApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationOutcome(EnableApplicationResult(outcome.result()));
	else
		return EnableApplicationOutcome(outcome.error());
}

void EiamClient::enableApplicationAsync(const EnableApplicationRequest& request, const EnableApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableApplicationOutcomeCallable EiamClient::enableApplicationCallable(const EnableApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationOutcome()>>(
			[this, request]()
			{
			return this->enableApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableApplicationApiInvokeOutcome EiamClient::enableApplicationApiInvoke(const EnableApplicationApiInvokeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationApiInvokeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationApiInvokeOutcome(EnableApplicationApiInvokeResult(outcome.result()));
	else
		return EnableApplicationApiInvokeOutcome(outcome.error());
}

void EiamClient::enableApplicationApiInvokeAsync(const EnableApplicationApiInvokeRequest& request, const EnableApplicationApiInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationApiInvoke(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableApplicationApiInvokeOutcomeCallable EiamClient::enableApplicationApiInvokeCallable(const EnableApplicationApiInvokeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationApiInvokeOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationApiInvoke(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableApplicationClientSecretOutcome EiamClient::enableApplicationClientSecret(const EnableApplicationClientSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationClientSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationClientSecretOutcome(EnableApplicationClientSecretResult(outcome.result()));
	else
		return EnableApplicationClientSecretOutcome(outcome.error());
}

void EiamClient::enableApplicationClientSecretAsync(const EnableApplicationClientSecretRequest& request, const EnableApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationClientSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableApplicationClientSecretOutcomeCallable EiamClient::enableApplicationClientSecretCallable(const EnableApplicationClientSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationClientSecretOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationClientSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableApplicationProvisioningOutcome EiamClient::enableApplicationProvisioning(const EnableApplicationProvisioningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationProvisioningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationProvisioningOutcome(EnableApplicationProvisioningResult(outcome.result()));
	else
		return EnableApplicationProvisioningOutcome(outcome.error());
}

void EiamClient::enableApplicationProvisioningAsync(const EnableApplicationProvisioningRequest& request, const EnableApplicationProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationProvisioning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableApplicationProvisioningOutcomeCallable EiamClient::enableApplicationProvisioningCallable(const EnableApplicationProvisioningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationProvisioningOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationProvisioning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableApplicationSsoOutcome EiamClient::enableApplicationSso(const EnableApplicationSsoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationSsoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationSsoOutcome(EnableApplicationSsoResult(outcome.result()));
	else
		return EnableApplicationSsoOutcome(outcome.error());
}

void EiamClient::enableApplicationSsoAsync(const EnableApplicationSsoRequest& request, const EnableApplicationSsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationSso(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableApplicationSsoOutcomeCallable EiamClient::enableApplicationSsoCallable(const EnableApplicationSsoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationSsoOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationSso(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableConditionalAccessPolicyOutcome EiamClient::enableConditionalAccessPolicy(const EnableConditionalAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableConditionalAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableConditionalAccessPolicyOutcome(EnableConditionalAccessPolicyResult(outcome.result()));
	else
		return EnableConditionalAccessPolicyOutcome(outcome.error());
}

void EiamClient::enableConditionalAccessPolicyAsync(const EnableConditionalAccessPolicyRequest& request, const EnableConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableConditionalAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableConditionalAccessPolicyOutcomeCallable EiamClient::enableConditionalAccessPolicyCallable(const EnableConditionalAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableConditionalAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->enableConditionalAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableDomainProxyTokenOutcome EiamClient::enableDomainProxyToken(const EnableDomainProxyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDomainProxyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDomainProxyTokenOutcome(EnableDomainProxyTokenResult(outcome.result()));
	else
		return EnableDomainProxyTokenOutcome(outcome.error());
}

void EiamClient::enableDomainProxyTokenAsync(const EnableDomainProxyTokenRequest& request, const EnableDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDomainProxyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableDomainProxyTokenOutcomeCallable EiamClient::enableDomainProxyTokenCallable(const EnableDomainProxyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDomainProxyTokenOutcome()>>(
			[this, request]()
			{
			return this->enableDomainProxyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableIdentityProviderUdPullOutcome EiamClient::enableIdentityProviderUdPull(const EnableIdentityProviderUdPullRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableIdentityProviderUdPullOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableIdentityProviderUdPullOutcome(EnableIdentityProviderUdPullResult(outcome.result()));
	else
		return EnableIdentityProviderUdPullOutcome(outcome.error());
}

void EiamClient::enableIdentityProviderUdPullAsync(const EnableIdentityProviderUdPullRequest& request, const EnableIdentityProviderUdPullAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableIdentityProviderUdPull(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableIdentityProviderUdPullOutcomeCallable EiamClient::enableIdentityProviderUdPullCallable(const EnableIdentityProviderUdPullRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableIdentityProviderUdPullOutcome()>>(
			[this, request]()
			{
			return this->enableIdentityProviderUdPull(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableInitDomainAutoRedirectOutcome EiamClient::enableInitDomainAutoRedirect(const EnableInitDomainAutoRedirectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableInitDomainAutoRedirectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableInitDomainAutoRedirectOutcome(EnableInitDomainAutoRedirectResult(outcome.result()));
	else
		return EnableInitDomainAutoRedirectOutcome(outcome.error());
}

void EiamClient::enableInitDomainAutoRedirectAsync(const EnableInitDomainAutoRedirectRequest& request, const EnableInitDomainAutoRedirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableInitDomainAutoRedirect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableInitDomainAutoRedirectOutcomeCallable EiamClient::enableInitDomainAutoRedirectCallable(const EnableInitDomainAutoRedirectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableInitDomainAutoRedirectOutcome()>>(
			[this, request]()
			{
			return this->enableInitDomainAutoRedirect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableUserOutcome EiamClient::enableUser(const EnableUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableUserOutcome(EnableUserResult(outcome.result()));
	else
		return EnableUserOutcome(outcome.error());
}

void EiamClient::enableUserAsync(const EnableUserRequest& request, const EnableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableUserOutcomeCallable EiamClient::enableUserCallable(const EnableUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableUserOutcome()>>(
			[this, request]()
			{
			return this->enableUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetApplicationOutcome EiamClient::getApplication(const GetApplicationRequest &request) const
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

void EiamClient::getApplicationAsync(const GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetApplicationOutcomeCallable EiamClient::getApplicationCallable(const GetApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationOutcome()>>(
			[this, request]()
			{
			return this->getApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetApplicationGrantScopeOutcome EiamClient::getApplicationGrantScope(const GetApplicationGrantScopeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationGrantScopeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationGrantScopeOutcome(GetApplicationGrantScopeResult(outcome.result()));
	else
		return GetApplicationGrantScopeOutcome(outcome.error());
}

void EiamClient::getApplicationGrantScopeAsync(const GetApplicationGrantScopeRequest& request, const GetApplicationGrantScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationGrantScope(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetApplicationGrantScopeOutcomeCallable EiamClient::getApplicationGrantScopeCallable(const GetApplicationGrantScopeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationGrantScopeOutcome()>>(
			[this, request]()
			{
			return this->getApplicationGrantScope(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetApplicationProvisioningConfigOutcome EiamClient::getApplicationProvisioningConfig(const GetApplicationProvisioningConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationProvisioningConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationProvisioningConfigOutcome(GetApplicationProvisioningConfigResult(outcome.result()));
	else
		return GetApplicationProvisioningConfigOutcome(outcome.error());
}

void EiamClient::getApplicationProvisioningConfigAsync(const GetApplicationProvisioningConfigRequest& request, const GetApplicationProvisioningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationProvisioningConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetApplicationProvisioningConfigOutcomeCallable EiamClient::getApplicationProvisioningConfigCallable(const GetApplicationProvisioningConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationProvisioningConfigOutcome()>>(
			[this, request]()
			{
			return this->getApplicationProvisioningConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetApplicationProvisioningScopeOutcome EiamClient::getApplicationProvisioningScope(const GetApplicationProvisioningScopeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationProvisioningScopeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationProvisioningScopeOutcome(GetApplicationProvisioningScopeResult(outcome.result()));
	else
		return GetApplicationProvisioningScopeOutcome(outcome.error());
}

void EiamClient::getApplicationProvisioningScopeAsync(const GetApplicationProvisioningScopeRequest& request, const GetApplicationProvisioningScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationProvisioningScope(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetApplicationProvisioningScopeOutcomeCallable EiamClient::getApplicationProvisioningScopeCallable(const GetApplicationProvisioningScopeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationProvisioningScopeOutcome()>>(
			[this, request]()
			{
			return this->getApplicationProvisioningScope(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetApplicationSsoConfigOutcome EiamClient::getApplicationSsoConfig(const GetApplicationSsoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationSsoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationSsoConfigOutcome(GetApplicationSsoConfigResult(outcome.result()));
	else
		return GetApplicationSsoConfigOutcome(outcome.error());
}

void EiamClient::getApplicationSsoConfigAsync(const GetApplicationSsoConfigRequest& request, const GetApplicationSsoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationSsoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetApplicationSsoConfigOutcomeCallable EiamClient::getApplicationSsoConfigCallable(const GetApplicationSsoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationSsoConfigOutcome()>>(
			[this, request]()
			{
			return this->getApplicationSsoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetConditionalAccessPolicyOutcome EiamClient::getConditionalAccessPolicy(const GetConditionalAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConditionalAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConditionalAccessPolicyOutcome(GetConditionalAccessPolicyResult(outcome.result()));
	else
		return GetConditionalAccessPolicyOutcome(outcome.error());
}

void EiamClient::getConditionalAccessPolicyAsync(const GetConditionalAccessPolicyRequest& request, const GetConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConditionalAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetConditionalAccessPolicyOutcomeCallable EiamClient::getConditionalAccessPolicyCallable(const GetConditionalAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConditionalAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->getConditionalAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetDomainOutcome EiamClient::getDomain(const GetDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDomainOutcome(GetDomainResult(outcome.result()));
	else
		return GetDomainOutcome(outcome.error());
}

void EiamClient::getDomainAsync(const GetDomainRequest& request, const GetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetDomainOutcomeCallable EiamClient::getDomainCallable(const GetDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDomainOutcome()>>(
			[this, request]()
			{
			return this->getDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetDomainDnsChallengeOutcome EiamClient::getDomainDnsChallenge(const GetDomainDnsChallengeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDomainDnsChallengeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDomainDnsChallengeOutcome(GetDomainDnsChallengeResult(outcome.result()));
	else
		return GetDomainDnsChallengeOutcome(outcome.error());
}

void EiamClient::getDomainDnsChallengeAsync(const GetDomainDnsChallengeRequest& request, const GetDomainDnsChallengeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDomainDnsChallenge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetDomainDnsChallengeOutcomeCallable EiamClient::getDomainDnsChallengeCallable(const GetDomainDnsChallengeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDomainDnsChallengeOutcome()>>(
			[this, request]()
			{
			return this->getDomainDnsChallenge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetForgetPasswordConfigurationOutcome EiamClient::getForgetPasswordConfiguration(const GetForgetPasswordConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetForgetPasswordConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetForgetPasswordConfigurationOutcome(GetForgetPasswordConfigurationResult(outcome.result()));
	else
		return GetForgetPasswordConfigurationOutcome(outcome.error());
}

void EiamClient::getForgetPasswordConfigurationAsync(const GetForgetPasswordConfigurationRequest& request, const GetForgetPasswordConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getForgetPasswordConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetForgetPasswordConfigurationOutcomeCallable EiamClient::getForgetPasswordConfigurationCallable(const GetForgetPasswordConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetForgetPasswordConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getForgetPasswordConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetGroupOutcome EiamClient::getGroup(const GetGroupRequest &request) const
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

void EiamClient::getGroupAsync(const GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetGroupOutcomeCallable EiamClient::getGroupCallable(const GetGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupOutcome()>>(
			[this, request]()
			{
			return this->getGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetIdentityProviderOutcome EiamClient::getIdentityProvider(const GetIdentityProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIdentityProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIdentityProviderOutcome(GetIdentityProviderResult(outcome.result()));
	else
		return GetIdentityProviderOutcome(outcome.error());
}

void EiamClient::getIdentityProviderAsync(const GetIdentityProviderRequest& request, const GetIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIdentityProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetIdentityProviderOutcomeCallable EiamClient::getIdentityProviderCallable(const GetIdentityProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIdentityProviderOutcome()>>(
			[this, request]()
			{
			return this->getIdentityProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetIdentityProviderUdPullConfigurationOutcome EiamClient::getIdentityProviderUdPullConfiguration(const GetIdentityProviderUdPullConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIdentityProviderUdPullConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIdentityProviderUdPullConfigurationOutcome(GetIdentityProviderUdPullConfigurationResult(outcome.result()));
	else
		return GetIdentityProviderUdPullConfigurationOutcome(outcome.error());
}

void EiamClient::getIdentityProviderUdPullConfigurationAsync(const GetIdentityProviderUdPullConfigurationRequest& request, const GetIdentityProviderUdPullConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIdentityProviderUdPullConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetIdentityProviderUdPullConfigurationOutcomeCallable EiamClient::getIdentityProviderUdPullConfigurationCallable(const GetIdentityProviderUdPullConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIdentityProviderUdPullConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getIdentityProviderUdPullConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetInstanceOutcome EiamClient::getInstance(const GetInstanceRequest &request) const
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

void EiamClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetInstanceOutcomeCallable EiamClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetInstanceLicenseOutcome EiamClient::getInstanceLicense(const GetInstanceLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceLicenseOutcome(GetInstanceLicenseResult(outcome.result()));
	else
		return GetInstanceLicenseOutcome(outcome.error());
}

void EiamClient::getInstanceLicenseAsync(const GetInstanceLicenseRequest& request, const GetInstanceLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetInstanceLicenseOutcomeCallable EiamClient::getInstanceLicenseCallable(const GetInstanceLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceLicenseOutcome()>>(
			[this, request]()
			{
			return this->getInstanceLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetNetworkAccessEndpointOutcome EiamClient::getNetworkAccessEndpoint(const GetNetworkAccessEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNetworkAccessEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNetworkAccessEndpointOutcome(GetNetworkAccessEndpointResult(outcome.result()));
	else
		return GetNetworkAccessEndpointOutcome(outcome.error());
}

void EiamClient::getNetworkAccessEndpointAsync(const GetNetworkAccessEndpointRequest& request, const GetNetworkAccessEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNetworkAccessEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetNetworkAccessEndpointOutcomeCallable EiamClient::getNetworkAccessEndpointCallable(const GetNetworkAccessEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNetworkAccessEndpointOutcome()>>(
			[this, request]()
			{
			return this->getNetworkAccessEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetOrganizationalUnitOutcome EiamClient::getOrganizationalUnit(const GetOrganizationalUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrganizationalUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrganizationalUnitOutcome(GetOrganizationalUnitResult(outcome.result()));
	else
		return GetOrganizationalUnitOutcome(outcome.error());
}

void EiamClient::getOrganizationalUnitAsync(const GetOrganizationalUnitRequest& request, const GetOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrganizationalUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetOrganizationalUnitOutcomeCallable EiamClient::getOrganizationalUnitCallable(const GetOrganizationalUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrganizationalUnitOutcome()>>(
			[this, request]()
			{
			return this->getOrganizationalUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetPasswordComplexityConfigurationOutcome EiamClient::getPasswordComplexityConfiguration(const GetPasswordComplexityConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPasswordComplexityConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPasswordComplexityConfigurationOutcome(GetPasswordComplexityConfigurationResult(outcome.result()));
	else
		return GetPasswordComplexityConfigurationOutcome(outcome.error());
}

void EiamClient::getPasswordComplexityConfigurationAsync(const GetPasswordComplexityConfigurationRequest& request, const GetPasswordComplexityConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPasswordComplexityConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetPasswordComplexityConfigurationOutcomeCallable EiamClient::getPasswordComplexityConfigurationCallable(const GetPasswordComplexityConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPasswordComplexityConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getPasswordComplexityConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetPasswordExpirationConfigurationOutcome EiamClient::getPasswordExpirationConfiguration(const GetPasswordExpirationConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPasswordExpirationConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPasswordExpirationConfigurationOutcome(GetPasswordExpirationConfigurationResult(outcome.result()));
	else
		return GetPasswordExpirationConfigurationOutcome(outcome.error());
}

void EiamClient::getPasswordExpirationConfigurationAsync(const GetPasswordExpirationConfigurationRequest& request, const GetPasswordExpirationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPasswordExpirationConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetPasswordExpirationConfigurationOutcomeCallable EiamClient::getPasswordExpirationConfigurationCallable(const GetPasswordExpirationConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPasswordExpirationConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getPasswordExpirationConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetPasswordHistoryConfigurationOutcome EiamClient::getPasswordHistoryConfiguration(const GetPasswordHistoryConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPasswordHistoryConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPasswordHistoryConfigurationOutcome(GetPasswordHistoryConfigurationResult(outcome.result()));
	else
		return GetPasswordHistoryConfigurationOutcome(outcome.error());
}

void EiamClient::getPasswordHistoryConfigurationAsync(const GetPasswordHistoryConfigurationRequest& request, const GetPasswordHistoryConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPasswordHistoryConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetPasswordHistoryConfigurationOutcomeCallable EiamClient::getPasswordHistoryConfigurationCallable(const GetPasswordHistoryConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPasswordHistoryConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getPasswordHistoryConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetPasswordInitializationConfigurationOutcome EiamClient::getPasswordInitializationConfiguration(const GetPasswordInitializationConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPasswordInitializationConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPasswordInitializationConfigurationOutcome(GetPasswordInitializationConfigurationResult(outcome.result()));
	else
		return GetPasswordInitializationConfigurationOutcome(outcome.error());
}

void EiamClient::getPasswordInitializationConfigurationAsync(const GetPasswordInitializationConfigurationRequest& request, const GetPasswordInitializationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPasswordInitializationConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetPasswordInitializationConfigurationOutcomeCallable EiamClient::getPasswordInitializationConfigurationCallable(const GetPasswordInitializationConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPasswordInitializationConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getPasswordInitializationConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetRootOrganizationalUnitOutcome EiamClient::getRootOrganizationalUnit(const GetRootOrganizationalUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRootOrganizationalUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRootOrganizationalUnitOutcome(GetRootOrganizationalUnitResult(outcome.result()));
	else
		return GetRootOrganizationalUnitOutcome(outcome.error());
}

void EiamClient::getRootOrganizationalUnitAsync(const GetRootOrganizationalUnitRequest& request, const GetRootOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRootOrganizationalUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetRootOrganizationalUnitOutcomeCallable EiamClient::getRootOrganizationalUnitCallable(const GetRootOrganizationalUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRootOrganizationalUnitOutcome()>>(
			[this, request]()
			{
			return this->getRootOrganizationalUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetSynchronizationJobOutcome EiamClient::getSynchronizationJob(const GetSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSynchronizationJobOutcome(GetSynchronizationJobResult(outcome.result()));
	else
		return GetSynchronizationJobOutcome(outcome.error());
}

void EiamClient::getSynchronizationJobAsync(const GetSynchronizationJobRequest& request, const GetSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetSynchronizationJobOutcomeCallable EiamClient::getSynchronizationJobCallable(const GetSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->getSynchronizationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetUserOutcome EiamClient::getUser(const GetUserRequest &request) const
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

void EiamClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetUserOutcomeCallable EiamClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationClientSecretsOutcome EiamClient::listApplicationClientSecrets(const ListApplicationClientSecretsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationClientSecretsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationClientSecretsOutcome(ListApplicationClientSecretsResult(outcome.result()));
	else
		return ListApplicationClientSecretsOutcome(outcome.error());
}

void EiamClient::listApplicationClientSecretsAsync(const ListApplicationClientSecretsRequest& request, const ListApplicationClientSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationClientSecrets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationClientSecretsOutcomeCallable EiamClient::listApplicationClientSecretsCallable(const ListApplicationClientSecretsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationClientSecretsOutcome()>>(
			[this, request]()
			{
			return this->listApplicationClientSecrets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationsOutcome EiamClient::listApplications(const ListApplicationsRequest &request) const
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

void EiamClient::listApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationsOutcomeCallable EiamClient::listApplicationsCallable(const ListApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationsForOrganizationalUnitOutcome EiamClient::listApplicationsForOrganizationalUnit(const ListApplicationsForOrganizationalUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsForOrganizationalUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsForOrganizationalUnitOutcome(ListApplicationsForOrganizationalUnitResult(outcome.result()));
	else
		return ListApplicationsForOrganizationalUnitOutcome(outcome.error());
}

void EiamClient::listApplicationsForOrganizationalUnitAsync(const ListApplicationsForOrganizationalUnitRequest& request, const ListApplicationsForOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationsForOrganizationalUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationsForOrganizationalUnitOutcomeCallable EiamClient::listApplicationsForOrganizationalUnitCallable(const ListApplicationsForOrganizationalUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsForOrganizationalUnitOutcome()>>(
			[this, request]()
			{
			return this->listApplicationsForOrganizationalUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationsForUserOutcome EiamClient::listApplicationsForUser(const ListApplicationsForUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsForUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsForUserOutcome(ListApplicationsForUserResult(outcome.result()));
	else
		return ListApplicationsForUserOutcome(outcome.error());
}

void EiamClient::listApplicationsForUserAsync(const ListApplicationsForUserRequest& request, const ListApplicationsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationsForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationsForUserOutcomeCallable EiamClient::listApplicationsForUserCallable(const ListApplicationsForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsForUserOutcome()>>(
			[this, request]()
			{
			return this->listApplicationsForUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListConditionalAccessPoliciesOutcome EiamClient::listConditionalAccessPolicies(const ListConditionalAccessPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConditionalAccessPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConditionalAccessPoliciesOutcome(ListConditionalAccessPoliciesResult(outcome.result()));
	else
		return ListConditionalAccessPoliciesOutcome(outcome.error());
}

void EiamClient::listConditionalAccessPoliciesAsync(const ListConditionalAccessPoliciesRequest& request, const ListConditionalAccessPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConditionalAccessPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListConditionalAccessPoliciesOutcomeCallable EiamClient::listConditionalAccessPoliciesCallable(const ListConditionalAccessPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConditionalAccessPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listConditionalAccessPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListConditionalAccessPoliciesForNetworkZoneOutcome EiamClient::listConditionalAccessPoliciesForNetworkZone(const ListConditionalAccessPoliciesForNetworkZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConditionalAccessPoliciesForNetworkZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConditionalAccessPoliciesForNetworkZoneOutcome(ListConditionalAccessPoliciesForNetworkZoneResult(outcome.result()));
	else
		return ListConditionalAccessPoliciesForNetworkZoneOutcome(outcome.error());
}

void EiamClient::listConditionalAccessPoliciesForNetworkZoneAsync(const ListConditionalAccessPoliciesForNetworkZoneRequest& request, const ListConditionalAccessPoliciesForNetworkZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConditionalAccessPoliciesForNetworkZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListConditionalAccessPoliciesForNetworkZoneOutcomeCallable EiamClient::listConditionalAccessPoliciesForNetworkZoneCallable(const ListConditionalAccessPoliciesForNetworkZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConditionalAccessPoliciesForNetworkZoneOutcome()>>(
			[this, request]()
			{
			return this->listConditionalAccessPoliciesForNetworkZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListDomainProxyTokensOutcome EiamClient::listDomainProxyTokens(const ListDomainProxyTokensRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDomainProxyTokensOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDomainProxyTokensOutcome(ListDomainProxyTokensResult(outcome.result()));
	else
		return ListDomainProxyTokensOutcome(outcome.error());
}

void EiamClient::listDomainProxyTokensAsync(const ListDomainProxyTokensRequest& request, const ListDomainProxyTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDomainProxyTokens(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListDomainProxyTokensOutcomeCallable EiamClient::listDomainProxyTokensCallable(const ListDomainProxyTokensRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDomainProxyTokensOutcome()>>(
			[this, request]()
			{
			return this->listDomainProxyTokens(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListDomainsOutcome EiamClient::listDomains(const ListDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDomainsOutcome(ListDomainsResult(outcome.result()));
	else
		return ListDomainsOutcome(outcome.error());
}

void EiamClient::listDomainsAsync(const ListDomainsRequest& request, const ListDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListDomainsOutcomeCallable EiamClient::listDomainsCallable(const ListDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDomainsOutcome()>>(
			[this, request]()
			{
			return this->listDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListEiamInstancesOutcome EiamClient::listEiamInstances(const ListEiamInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEiamInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEiamInstancesOutcome(ListEiamInstancesResult(outcome.result()));
	else
		return ListEiamInstancesOutcome(outcome.error());
}

void EiamClient::listEiamInstancesAsync(const ListEiamInstancesRequest& request, const ListEiamInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEiamInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListEiamInstancesOutcomeCallable EiamClient::listEiamInstancesCallable(const ListEiamInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEiamInstancesOutcome()>>(
			[this, request]()
			{
			return this->listEiamInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListEiamRegionsOutcome EiamClient::listEiamRegions(const ListEiamRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEiamRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEiamRegionsOutcome(ListEiamRegionsResult(outcome.result()));
	else
		return ListEiamRegionsOutcome(outcome.error());
}

void EiamClient::listEiamRegionsAsync(const ListEiamRegionsRequest& request, const ListEiamRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEiamRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListEiamRegionsOutcomeCallable EiamClient::listEiamRegionsCallable(const ListEiamRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEiamRegionsOutcome()>>(
			[this, request]()
			{
			return this->listEiamRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListGroupsOutcome EiamClient::listGroups(const ListGroupsRequest &request) const
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

void EiamClient::listGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListGroupsOutcomeCallable EiamClient::listGroupsCallable(const ListGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
			[this, request]()
			{
			return this->listGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListGroupsForApplicationOutcome EiamClient::listGroupsForApplication(const ListGroupsForApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupsForApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupsForApplicationOutcome(ListGroupsForApplicationResult(outcome.result()));
	else
		return ListGroupsForApplicationOutcome(outcome.error());
}

void EiamClient::listGroupsForApplicationAsync(const ListGroupsForApplicationRequest& request, const ListGroupsForApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupsForApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListGroupsForApplicationOutcomeCallable EiamClient::listGroupsForApplicationCallable(const ListGroupsForApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsForApplicationOutcome()>>(
			[this, request]()
			{
			return this->listGroupsForApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListGroupsForUserOutcome EiamClient::listGroupsForUser(const ListGroupsForUserRequest &request) const
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

void EiamClient::listGroupsForUserAsync(const ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupsForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListGroupsForUserOutcomeCallable EiamClient::listGroupsForUserCallable(const ListGroupsForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsForUserOutcome()>>(
			[this, request]()
			{
			return this->listGroupsForUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListIdentityProvidersOutcome EiamClient::listIdentityProviders(const ListIdentityProvidersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIdentityProvidersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIdentityProvidersOutcome(ListIdentityProvidersResult(outcome.result()));
	else
		return ListIdentityProvidersOutcome(outcome.error());
}

void EiamClient::listIdentityProvidersAsync(const ListIdentityProvidersRequest& request, const ListIdentityProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIdentityProviders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListIdentityProvidersOutcomeCallable EiamClient::listIdentityProvidersCallable(const ListIdentityProvidersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIdentityProvidersOutcome()>>(
			[this, request]()
			{
			return this->listIdentityProviders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListInstancesOutcome EiamClient::listInstances(const ListInstancesRequest &request) const
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

void EiamClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListInstancesOutcomeCallable EiamClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListNetworkAccessEndpointAvailableRegionsOutcome EiamClient::listNetworkAccessEndpointAvailableRegions(const ListNetworkAccessEndpointAvailableRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNetworkAccessEndpointAvailableRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNetworkAccessEndpointAvailableRegionsOutcome(ListNetworkAccessEndpointAvailableRegionsResult(outcome.result()));
	else
		return ListNetworkAccessEndpointAvailableRegionsOutcome(outcome.error());
}

void EiamClient::listNetworkAccessEndpointAvailableRegionsAsync(const ListNetworkAccessEndpointAvailableRegionsRequest& request, const ListNetworkAccessEndpointAvailableRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNetworkAccessEndpointAvailableRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListNetworkAccessEndpointAvailableRegionsOutcomeCallable EiamClient::listNetworkAccessEndpointAvailableRegionsCallable(const ListNetworkAccessEndpointAvailableRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNetworkAccessEndpointAvailableRegionsOutcome()>>(
			[this, request]()
			{
			return this->listNetworkAccessEndpointAvailableRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListNetworkAccessEndpointAvailableZonesOutcome EiamClient::listNetworkAccessEndpointAvailableZones(const ListNetworkAccessEndpointAvailableZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNetworkAccessEndpointAvailableZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNetworkAccessEndpointAvailableZonesOutcome(ListNetworkAccessEndpointAvailableZonesResult(outcome.result()));
	else
		return ListNetworkAccessEndpointAvailableZonesOutcome(outcome.error());
}

void EiamClient::listNetworkAccessEndpointAvailableZonesAsync(const ListNetworkAccessEndpointAvailableZonesRequest& request, const ListNetworkAccessEndpointAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNetworkAccessEndpointAvailableZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListNetworkAccessEndpointAvailableZonesOutcomeCallable EiamClient::listNetworkAccessEndpointAvailableZonesCallable(const ListNetworkAccessEndpointAvailableZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNetworkAccessEndpointAvailableZonesOutcome()>>(
			[this, request]()
			{
			return this->listNetworkAccessEndpointAvailableZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListNetworkAccessEndpointsOutcome EiamClient::listNetworkAccessEndpoints(const ListNetworkAccessEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNetworkAccessEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNetworkAccessEndpointsOutcome(ListNetworkAccessEndpointsResult(outcome.result()));
	else
		return ListNetworkAccessEndpointsOutcome(outcome.error());
}

void EiamClient::listNetworkAccessEndpointsAsync(const ListNetworkAccessEndpointsRequest& request, const ListNetworkAccessEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNetworkAccessEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListNetworkAccessEndpointsOutcomeCallable EiamClient::listNetworkAccessEndpointsCallable(const ListNetworkAccessEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNetworkAccessEndpointsOutcome()>>(
			[this, request]()
			{
			return this->listNetworkAccessEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListNetworkAccessPathsOutcome EiamClient::listNetworkAccessPaths(const ListNetworkAccessPathsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNetworkAccessPathsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNetworkAccessPathsOutcome(ListNetworkAccessPathsResult(outcome.result()));
	else
		return ListNetworkAccessPathsOutcome(outcome.error());
}

void EiamClient::listNetworkAccessPathsAsync(const ListNetworkAccessPathsRequest& request, const ListNetworkAccessPathsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNetworkAccessPaths(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListNetworkAccessPathsOutcomeCallable EiamClient::listNetworkAccessPathsCallable(const ListNetworkAccessPathsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNetworkAccessPathsOutcome()>>(
			[this, request]()
			{
			return this->listNetworkAccessPaths(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListOrganizationalUnitParentsOutcome EiamClient::listOrganizationalUnitParents(const ListOrganizationalUnitParentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrganizationalUnitParentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrganizationalUnitParentsOutcome(ListOrganizationalUnitParentsResult(outcome.result()));
	else
		return ListOrganizationalUnitParentsOutcome(outcome.error());
}

void EiamClient::listOrganizationalUnitParentsAsync(const ListOrganizationalUnitParentsRequest& request, const ListOrganizationalUnitParentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizationalUnitParents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListOrganizationalUnitParentsOutcomeCallable EiamClient::listOrganizationalUnitParentsCallable(const ListOrganizationalUnitParentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationalUnitParentsOutcome()>>(
			[this, request]()
			{
			return this->listOrganizationalUnitParents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListOrganizationalUnitsOutcome EiamClient::listOrganizationalUnits(const ListOrganizationalUnitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrganizationalUnitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrganizationalUnitsOutcome(ListOrganizationalUnitsResult(outcome.result()));
	else
		return ListOrganizationalUnitsOutcome(outcome.error());
}

void EiamClient::listOrganizationalUnitsAsync(const ListOrganizationalUnitsRequest& request, const ListOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizationalUnits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListOrganizationalUnitsOutcomeCallable EiamClient::listOrganizationalUnitsCallable(const ListOrganizationalUnitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationalUnitsOutcome()>>(
			[this, request]()
			{
			return this->listOrganizationalUnits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListOrganizationalUnitsForApplicationOutcome EiamClient::listOrganizationalUnitsForApplication(const ListOrganizationalUnitsForApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrganizationalUnitsForApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrganizationalUnitsForApplicationOutcome(ListOrganizationalUnitsForApplicationResult(outcome.result()));
	else
		return ListOrganizationalUnitsForApplicationOutcome(outcome.error());
}

void EiamClient::listOrganizationalUnitsForApplicationAsync(const ListOrganizationalUnitsForApplicationRequest& request, const ListOrganizationalUnitsForApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizationalUnitsForApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListOrganizationalUnitsForApplicationOutcomeCallable EiamClient::listOrganizationalUnitsForApplicationCallable(const ListOrganizationalUnitsForApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationalUnitsForApplicationOutcome()>>(
			[this, request]()
			{
			return this->listOrganizationalUnitsForApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListRegionsOutcome EiamClient::listRegions(const ListRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegionsOutcome(ListRegionsResult(outcome.result()));
	else
		return ListRegionsOutcome(outcome.error());
}

void EiamClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListRegionsOutcomeCallable EiamClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListSynchronizationJobsOutcome EiamClient::listSynchronizationJobs(const ListSynchronizationJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSynchronizationJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSynchronizationJobsOutcome(ListSynchronizationJobsResult(outcome.result()));
	else
		return ListSynchronizationJobsOutcome(outcome.error());
}

void EiamClient::listSynchronizationJobsAsync(const ListSynchronizationJobsRequest& request, const ListSynchronizationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSynchronizationJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListSynchronizationJobsOutcomeCallable EiamClient::listSynchronizationJobsCallable(const ListSynchronizationJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSynchronizationJobsOutcome()>>(
			[this, request]()
			{
			return this->listSynchronizationJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListUsersOutcome EiamClient::listUsers(const ListUsersRequest &request) const
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

void EiamClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListUsersOutcomeCallable EiamClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListUsersForApplicationOutcome EiamClient::listUsersForApplication(const ListUsersForApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersForApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersForApplicationOutcome(ListUsersForApplicationResult(outcome.result()));
	else
		return ListUsersForApplicationOutcome(outcome.error());
}

void EiamClient::listUsersForApplicationAsync(const ListUsersForApplicationRequest& request, const ListUsersForApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsersForApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListUsersForApplicationOutcomeCallable EiamClient::listUsersForApplicationCallable(const ListUsersForApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersForApplicationOutcome()>>(
			[this, request]()
			{
			return this->listUsersForApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListUsersForGroupOutcome EiamClient::listUsersForGroup(const ListUsersForGroupRequest &request) const
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

void EiamClient::listUsersForGroupAsync(const ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsersForGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListUsersForGroupOutcomeCallable EiamClient::listUsersForGroupCallable(const ListUsersForGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersForGroupOutcome()>>(
			[this, request]()
			{
			return this->listUsersForGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ObtainApplicationClientSecretOutcome EiamClient::obtainApplicationClientSecret(const ObtainApplicationClientSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ObtainApplicationClientSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ObtainApplicationClientSecretOutcome(ObtainApplicationClientSecretResult(outcome.result()));
	else
		return ObtainApplicationClientSecretOutcome(outcome.error());
}

void EiamClient::obtainApplicationClientSecretAsync(const ObtainApplicationClientSecretRequest& request, const ObtainApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, obtainApplicationClientSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ObtainApplicationClientSecretOutcomeCallable EiamClient::obtainApplicationClientSecretCallable(const ObtainApplicationClientSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ObtainApplicationClientSecretOutcome()>>(
			[this, request]()
			{
			return this->obtainApplicationClientSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ObtainDomainProxyTokenOutcome EiamClient::obtainDomainProxyToken(const ObtainDomainProxyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ObtainDomainProxyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ObtainDomainProxyTokenOutcome(ObtainDomainProxyTokenResult(outcome.result()));
	else
		return ObtainDomainProxyTokenOutcome(outcome.error());
}

void EiamClient::obtainDomainProxyTokenAsync(const ObtainDomainProxyTokenRequest& request, const ObtainDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, obtainDomainProxyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ObtainDomainProxyTokenOutcomeCallable EiamClient::obtainDomainProxyTokenCallable(const ObtainDomainProxyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ObtainDomainProxyTokenOutcome()>>(
			[this, request]()
			{
			return this->obtainDomainProxyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::RemoveUserFromOrganizationalUnitsOutcome EiamClient::removeUserFromOrganizationalUnits(const RemoveUserFromOrganizationalUnitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUserFromOrganizationalUnitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUserFromOrganizationalUnitsOutcome(RemoveUserFromOrganizationalUnitsResult(outcome.result()));
	else
		return RemoveUserFromOrganizationalUnitsOutcome(outcome.error());
}

void EiamClient::removeUserFromOrganizationalUnitsAsync(const RemoveUserFromOrganizationalUnitsRequest& request, const RemoveUserFromOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUserFromOrganizationalUnits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::RemoveUserFromOrganizationalUnitsOutcomeCallable EiamClient::removeUserFromOrganizationalUnitsCallable(const RemoveUserFromOrganizationalUnitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUserFromOrganizationalUnitsOutcome()>>(
			[this, request]()
			{
			return this->removeUserFromOrganizationalUnits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::RemoveUsersFromGroupOutcome EiamClient::removeUsersFromGroup(const RemoveUsersFromGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUsersFromGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUsersFromGroupOutcome(RemoveUsersFromGroupResult(outcome.result()));
	else
		return RemoveUsersFromGroupOutcome(outcome.error());
}

void EiamClient::removeUsersFromGroupAsync(const RemoveUsersFromGroupRequest& request, const RemoveUsersFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUsersFromGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::RemoveUsersFromGroupOutcomeCallable EiamClient::removeUsersFromGroupCallable(const RemoveUsersFromGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUsersFromGroupOutcome()>>(
			[this, request]()
			{
			return this->removeUsersFromGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::RevokeApplicationFromGroupsOutcome EiamClient::revokeApplicationFromGroups(const RevokeApplicationFromGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeApplicationFromGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeApplicationFromGroupsOutcome(RevokeApplicationFromGroupsResult(outcome.result()));
	else
		return RevokeApplicationFromGroupsOutcome(outcome.error());
}

void EiamClient::revokeApplicationFromGroupsAsync(const RevokeApplicationFromGroupsRequest& request, const RevokeApplicationFromGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeApplicationFromGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::RevokeApplicationFromGroupsOutcomeCallable EiamClient::revokeApplicationFromGroupsCallable(const RevokeApplicationFromGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeApplicationFromGroupsOutcome()>>(
			[this, request]()
			{
			return this->revokeApplicationFromGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::RevokeApplicationFromOrganizationalUnitsOutcome EiamClient::revokeApplicationFromOrganizationalUnits(const RevokeApplicationFromOrganizationalUnitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeApplicationFromOrganizationalUnitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeApplicationFromOrganizationalUnitsOutcome(RevokeApplicationFromOrganizationalUnitsResult(outcome.result()));
	else
		return RevokeApplicationFromOrganizationalUnitsOutcome(outcome.error());
}

void EiamClient::revokeApplicationFromOrganizationalUnitsAsync(const RevokeApplicationFromOrganizationalUnitsRequest& request, const RevokeApplicationFromOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeApplicationFromOrganizationalUnits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::RevokeApplicationFromOrganizationalUnitsOutcomeCallable EiamClient::revokeApplicationFromOrganizationalUnitsCallable(const RevokeApplicationFromOrganizationalUnitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeApplicationFromOrganizationalUnitsOutcome()>>(
			[this, request]()
			{
			return this->revokeApplicationFromOrganizationalUnits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::RevokeApplicationFromUsersOutcome EiamClient::revokeApplicationFromUsers(const RevokeApplicationFromUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeApplicationFromUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeApplicationFromUsersOutcome(RevokeApplicationFromUsersResult(outcome.result()));
	else
		return RevokeApplicationFromUsersOutcome(outcome.error());
}

void EiamClient::revokeApplicationFromUsersAsync(const RevokeApplicationFromUsersRequest& request, const RevokeApplicationFromUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeApplicationFromUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::RevokeApplicationFromUsersOutcomeCallable EiamClient::revokeApplicationFromUsersCallable(const RevokeApplicationFromUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeApplicationFromUsersOutcome()>>(
			[this, request]()
			{
			return this->revokeApplicationFromUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::RunSynchronizationJobOutcome EiamClient::runSynchronizationJob(const RunSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunSynchronizationJobOutcome(RunSynchronizationJobResult(outcome.result()));
	else
		return RunSynchronizationJobOutcome(outcome.error());
}

void EiamClient::runSynchronizationJobAsync(const RunSynchronizationJobRequest& request, const RunSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::RunSynchronizationJobOutcomeCallable EiamClient::runSynchronizationJobCallable(const RunSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->runSynchronizationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetApplicationGrantScopeOutcome EiamClient::setApplicationGrantScope(const SetApplicationGrantScopeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetApplicationGrantScopeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetApplicationGrantScopeOutcome(SetApplicationGrantScopeResult(outcome.result()));
	else
		return SetApplicationGrantScopeOutcome(outcome.error());
}

void EiamClient::setApplicationGrantScopeAsync(const SetApplicationGrantScopeRequest& request, const SetApplicationGrantScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setApplicationGrantScope(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetApplicationGrantScopeOutcomeCallable EiamClient::setApplicationGrantScopeCallable(const SetApplicationGrantScopeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetApplicationGrantScopeOutcome()>>(
			[this, request]()
			{
			return this->setApplicationGrantScope(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetApplicationProvisioningConfigOutcome EiamClient::setApplicationProvisioningConfig(const SetApplicationProvisioningConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetApplicationProvisioningConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetApplicationProvisioningConfigOutcome(SetApplicationProvisioningConfigResult(outcome.result()));
	else
		return SetApplicationProvisioningConfigOutcome(outcome.error());
}

void EiamClient::setApplicationProvisioningConfigAsync(const SetApplicationProvisioningConfigRequest& request, const SetApplicationProvisioningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setApplicationProvisioningConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetApplicationProvisioningConfigOutcomeCallable EiamClient::setApplicationProvisioningConfigCallable(const SetApplicationProvisioningConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetApplicationProvisioningConfigOutcome()>>(
			[this, request]()
			{
			return this->setApplicationProvisioningConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetApplicationProvisioningScopeOutcome EiamClient::setApplicationProvisioningScope(const SetApplicationProvisioningScopeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetApplicationProvisioningScopeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetApplicationProvisioningScopeOutcome(SetApplicationProvisioningScopeResult(outcome.result()));
	else
		return SetApplicationProvisioningScopeOutcome(outcome.error());
}

void EiamClient::setApplicationProvisioningScopeAsync(const SetApplicationProvisioningScopeRequest& request, const SetApplicationProvisioningScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setApplicationProvisioningScope(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetApplicationProvisioningScopeOutcomeCallable EiamClient::setApplicationProvisioningScopeCallable(const SetApplicationProvisioningScopeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetApplicationProvisioningScopeOutcome()>>(
			[this, request]()
			{
			return this->setApplicationProvisioningScope(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetApplicationSsoConfigOutcome EiamClient::setApplicationSsoConfig(const SetApplicationSsoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetApplicationSsoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetApplicationSsoConfigOutcome(SetApplicationSsoConfigResult(outcome.result()));
	else
		return SetApplicationSsoConfigOutcome(outcome.error());
}

void EiamClient::setApplicationSsoConfigAsync(const SetApplicationSsoConfigRequest& request, const SetApplicationSsoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setApplicationSsoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetApplicationSsoConfigOutcomeCallable EiamClient::setApplicationSsoConfigCallable(const SetApplicationSsoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetApplicationSsoConfigOutcome()>>(
			[this, request]()
			{
			return this->setApplicationSsoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetDefaultDomainOutcome EiamClient::setDefaultDomain(const SetDefaultDomainRequest &request) const
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

void EiamClient::setDefaultDomainAsync(const SetDefaultDomainRequest& request, const SetDefaultDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetDefaultDomainOutcomeCallable EiamClient::setDefaultDomainCallable(const SetDefaultDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultDomainOutcome()>>(
			[this, request]()
			{
			return this->setDefaultDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetForgetPasswordConfigurationOutcome EiamClient::setForgetPasswordConfiguration(const SetForgetPasswordConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetForgetPasswordConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetForgetPasswordConfigurationOutcome(SetForgetPasswordConfigurationResult(outcome.result()));
	else
		return SetForgetPasswordConfigurationOutcome(outcome.error());
}

void EiamClient::setForgetPasswordConfigurationAsync(const SetForgetPasswordConfigurationRequest& request, const SetForgetPasswordConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setForgetPasswordConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetForgetPasswordConfigurationOutcomeCallable EiamClient::setForgetPasswordConfigurationCallable(const SetForgetPasswordConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetForgetPasswordConfigurationOutcome()>>(
			[this, request]()
			{
			return this->setForgetPasswordConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetIdentityProviderUdPullConfigurationOutcome EiamClient::setIdentityProviderUdPullConfiguration(const SetIdentityProviderUdPullConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetIdentityProviderUdPullConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIdentityProviderUdPullConfigurationOutcome(SetIdentityProviderUdPullConfigurationResult(outcome.result()));
	else
		return SetIdentityProviderUdPullConfigurationOutcome(outcome.error());
}

void EiamClient::setIdentityProviderUdPullConfigurationAsync(const SetIdentityProviderUdPullConfigurationRequest& request, const SetIdentityProviderUdPullConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIdentityProviderUdPullConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetIdentityProviderUdPullConfigurationOutcomeCallable EiamClient::setIdentityProviderUdPullConfigurationCallable(const SetIdentityProviderUdPullConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIdentityProviderUdPullConfigurationOutcome()>>(
			[this, request]()
			{
			return this->setIdentityProviderUdPullConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetPasswordComplexityConfigurationOutcome EiamClient::setPasswordComplexityConfiguration(const SetPasswordComplexityConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPasswordComplexityConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPasswordComplexityConfigurationOutcome(SetPasswordComplexityConfigurationResult(outcome.result()));
	else
		return SetPasswordComplexityConfigurationOutcome(outcome.error());
}

void EiamClient::setPasswordComplexityConfigurationAsync(const SetPasswordComplexityConfigurationRequest& request, const SetPasswordComplexityConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPasswordComplexityConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetPasswordComplexityConfigurationOutcomeCallable EiamClient::setPasswordComplexityConfigurationCallable(const SetPasswordComplexityConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPasswordComplexityConfigurationOutcome()>>(
			[this, request]()
			{
			return this->setPasswordComplexityConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetPasswordExpirationConfigurationOutcome EiamClient::setPasswordExpirationConfiguration(const SetPasswordExpirationConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPasswordExpirationConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPasswordExpirationConfigurationOutcome(SetPasswordExpirationConfigurationResult(outcome.result()));
	else
		return SetPasswordExpirationConfigurationOutcome(outcome.error());
}

void EiamClient::setPasswordExpirationConfigurationAsync(const SetPasswordExpirationConfigurationRequest& request, const SetPasswordExpirationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPasswordExpirationConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetPasswordExpirationConfigurationOutcomeCallable EiamClient::setPasswordExpirationConfigurationCallable(const SetPasswordExpirationConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPasswordExpirationConfigurationOutcome()>>(
			[this, request]()
			{
			return this->setPasswordExpirationConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetPasswordHistoryConfigurationOutcome EiamClient::setPasswordHistoryConfiguration(const SetPasswordHistoryConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPasswordHistoryConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPasswordHistoryConfigurationOutcome(SetPasswordHistoryConfigurationResult(outcome.result()));
	else
		return SetPasswordHistoryConfigurationOutcome(outcome.error());
}

void EiamClient::setPasswordHistoryConfigurationAsync(const SetPasswordHistoryConfigurationRequest& request, const SetPasswordHistoryConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPasswordHistoryConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetPasswordHistoryConfigurationOutcomeCallable EiamClient::setPasswordHistoryConfigurationCallable(const SetPasswordHistoryConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPasswordHistoryConfigurationOutcome()>>(
			[this, request]()
			{
			return this->setPasswordHistoryConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetPasswordInitializationConfigurationOutcome EiamClient::setPasswordInitializationConfiguration(const SetPasswordInitializationConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPasswordInitializationConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPasswordInitializationConfigurationOutcome(SetPasswordInitializationConfigurationResult(outcome.result()));
	else
		return SetPasswordInitializationConfigurationOutcome(outcome.error());
}

void EiamClient::setPasswordInitializationConfigurationAsync(const SetPasswordInitializationConfigurationRequest& request, const SetPasswordInitializationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPasswordInitializationConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetPasswordInitializationConfigurationOutcomeCallable EiamClient::setPasswordInitializationConfigurationCallable(const SetPasswordInitializationConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPasswordInitializationConfigurationOutcome()>>(
			[this, request]()
			{
			return this->setPasswordInitializationConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::SetUserPrimaryOrganizationalUnitOutcome EiamClient::setUserPrimaryOrganizationalUnit(const SetUserPrimaryOrganizationalUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserPrimaryOrganizationalUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserPrimaryOrganizationalUnitOutcome(SetUserPrimaryOrganizationalUnitResult(outcome.result()));
	else
		return SetUserPrimaryOrganizationalUnitOutcome(outcome.error());
}

void EiamClient::setUserPrimaryOrganizationalUnitAsync(const SetUserPrimaryOrganizationalUnitRequest& request, const SetUserPrimaryOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserPrimaryOrganizationalUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetUserPrimaryOrganizationalUnitOutcomeCallable EiamClient::setUserPrimaryOrganizationalUnitCallable(const SetUserPrimaryOrganizationalUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserPrimaryOrganizationalUnitOutcome()>>(
			[this, request]()
			{
			return this->setUserPrimaryOrganizationalUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UnlockUserOutcome EiamClient::unlockUser(const UnlockUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockUserOutcome(UnlockUserResult(outcome.result()));
	else
		return UnlockUserOutcome(outcome.error());
}

void EiamClient::unlockUserAsync(const UnlockUserRequest& request, const UnlockUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UnlockUserOutcomeCallable EiamClient::unlockUserCallable(const UnlockUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockUserOutcome()>>(
			[this, request]()
			{
			return this->unlockUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateApplicationAuthorizationTypeOutcome EiamClient::updateApplicationAuthorizationType(const UpdateApplicationAuthorizationTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationAuthorizationTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationAuthorizationTypeOutcome(UpdateApplicationAuthorizationTypeResult(outcome.result()));
	else
		return UpdateApplicationAuthorizationTypeOutcome(outcome.error());
}

void EiamClient::updateApplicationAuthorizationTypeAsync(const UpdateApplicationAuthorizationTypeRequest& request, const UpdateApplicationAuthorizationTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationAuthorizationType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateApplicationAuthorizationTypeOutcomeCallable EiamClient::updateApplicationAuthorizationTypeCallable(const UpdateApplicationAuthorizationTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationAuthorizationTypeOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationAuthorizationType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateApplicationDescriptionOutcome EiamClient::updateApplicationDescription(const UpdateApplicationDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationDescriptionOutcome(UpdateApplicationDescriptionResult(outcome.result()));
	else
		return UpdateApplicationDescriptionOutcome(outcome.error());
}

void EiamClient::updateApplicationDescriptionAsync(const UpdateApplicationDescriptionRequest& request, const UpdateApplicationDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateApplicationDescriptionOutcomeCallable EiamClient::updateApplicationDescriptionCallable(const UpdateApplicationDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateConditionalAccessPolicyOutcome EiamClient::updateConditionalAccessPolicy(const UpdateConditionalAccessPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConditionalAccessPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConditionalAccessPolicyOutcome(UpdateConditionalAccessPolicyResult(outcome.result()));
	else
		return UpdateConditionalAccessPolicyOutcome(outcome.error());
}

void EiamClient::updateConditionalAccessPolicyAsync(const UpdateConditionalAccessPolicyRequest& request, const UpdateConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConditionalAccessPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateConditionalAccessPolicyOutcomeCallable EiamClient::updateConditionalAccessPolicyCallable(const UpdateConditionalAccessPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConditionalAccessPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateConditionalAccessPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateConditionalAccessPolicyDescriptionOutcome EiamClient::updateConditionalAccessPolicyDescription(const UpdateConditionalAccessPolicyDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConditionalAccessPolicyDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConditionalAccessPolicyDescriptionOutcome(UpdateConditionalAccessPolicyDescriptionResult(outcome.result()));
	else
		return UpdateConditionalAccessPolicyDescriptionOutcome(outcome.error());
}

void EiamClient::updateConditionalAccessPolicyDescriptionAsync(const UpdateConditionalAccessPolicyDescriptionRequest& request, const UpdateConditionalAccessPolicyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConditionalAccessPolicyDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateConditionalAccessPolicyDescriptionOutcomeCallable EiamClient::updateConditionalAccessPolicyDescriptionCallable(const UpdateConditionalAccessPolicyDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConditionalAccessPolicyDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateConditionalAccessPolicyDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateGroupOutcome EiamClient::updateGroup(const UpdateGroupRequest &request) const
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

void EiamClient::updateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateGroupOutcomeCallable EiamClient::updateGroupCallable(const UpdateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupOutcome()>>(
			[this, request]()
			{
			return this->updateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateGroupDescriptionOutcome EiamClient::updateGroupDescription(const UpdateGroupDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGroupDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGroupDescriptionOutcome(UpdateGroupDescriptionResult(outcome.result()));
	else
		return UpdateGroupDescriptionOutcome(outcome.error());
}

void EiamClient::updateGroupDescriptionAsync(const UpdateGroupDescriptionRequest& request, const UpdateGroupDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroupDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateGroupDescriptionOutcomeCallable EiamClient::updateGroupDescriptionCallable(const UpdateGroupDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateGroupDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateIdentityProviderOutcome EiamClient::updateIdentityProvider(const UpdateIdentityProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIdentityProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIdentityProviderOutcome(UpdateIdentityProviderResult(outcome.result()));
	else
		return UpdateIdentityProviderOutcome(outcome.error());
}

void EiamClient::updateIdentityProviderAsync(const UpdateIdentityProviderRequest& request, const UpdateIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIdentityProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateIdentityProviderOutcomeCallable EiamClient::updateIdentityProviderCallable(const UpdateIdentityProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIdentityProviderOutcome()>>(
			[this, request]()
			{
			return this->updateIdentityProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateInstanceDescriptionOutcome EiamClient::updateInstanceDescription(const UpdateInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceDescriptionOutcome(UpdateInstanceDescriptionResult(outcome.result()));
	else
		return UpdateInstanceDescriptionOutcome(outcome.error());
}

void EiamClient::updateInstanceDescriptionAsync(const UpdateInstanceDescriptionRequest& request, const UpdateInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateInstanceDescriptionOutcomeCallable EiamClient::updateInstanceDescriptionCallable(const UpdateInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateNetworkAccessEndpointNameOutcome EiamClient::updateNetworkAccessEndpointName(const UpdateNetworkAccessEndpointNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNetworkAccessEndpointNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNetworkAccessEndpointNameOutcome(UpdateNetworkAccessEndpointNameResult(outcome.result()));
	else
		return UpdateNetworkAccessEndpointNameOutcome(outcome.error());
}

void EiamClient::updateNetworkAccessEndpointNameAsync(const UpdateNetworkAccessEndpointNameRequest& request, const UpdateNetworkAccessEndpointNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNetworkAccessEndpointName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateNetworkAccessEndpointNameOutcomeCallable EiamClient::updateNetworkAccessEndpointNameCallable(const UpdateNetworkAccessEndpointNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNetworkAccessEndpointNameOutcome()>>(
			[this, request]()
			{
			return this->updateNetworkAccessEndpointName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateOrganizationalUnitOutcome EiamClient::updateOrganizationalUnit(const UpdateOrganizationalUnitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOrganizationalUnitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOrganizationalUnitOutcome(UpdateOrganizationalUnitResult(outcome.result()));
	else
		return UpdateOrganizationalUnitOutcome(outcome.error());
}

void EiamClient::updateOrganizationalUnitAsync(const UpdateOrganizationalUnitRequest& request, const UpdateOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOrganizationalUnit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateOrganizationalUnitOutcomeCallable EiamClient::updateOrganizationalUnitCallable(const UpdateOrganizationalUnitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOrganizationalUnitOutcome()>>(
			[this, request]()
			{
			return this->updateOrganizationalUnit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateOrganizationalUnitDescriptionOutcome EiamClient::updateOrganizationalUnitDescription(const UpdateOrganizationalUnitDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOrganizationalUnitDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOrganizationalUnitDescriptionOutcome(UpdateOrganizationalUnitDescriptionResult(outcome.result()));
	else
		return UpdateOrganizationalUnitDescriptionOutcome(outcome.error());
}

void EiamClient::updateOrganizationalUnitDescriptionAsync(const UpdateOrganizationalUnitDescriptionRequest& request, const UpdateOrganizationalUnitDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOrganizationalUnitDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateOrganizationalUnitDescriptionOutcomeCallable EiamClient::updateOrganizationalUnitDescriptionCallable(const UpdateOrganizationalUnitDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOrganizationalUnitDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateOrganizationalUnitDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateOrganizationalUnitParentIdOutcome EiamClient::updateOrganizationalUnitParentId(const UpdateOrganizationalUnitParentIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOrganizationalUnitParentIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOrganizationalUnitParentIdOutcome(UpdateOrganizationalUnitParentIdResult(outcome.result()));
	else
		return UpdateOrganizationalUnitParentIdOutcome(outcome.error());
}

void EiamClient::updateOrganizationalUnitParentIdAsync(const UpdateOrganizationalUnitParentIdRequest& request, const UpdateOrganizationalUnitParentIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOrganizationalUnitParentId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateOrganizationalUnitParentIdOutcomeCallable EiamClient::updateOrganizationalUnitParentIdCallable(const UpdateOrganizationalUnitParentIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOrganizationalUnitParentIdOutcome()>>(
			[this, request]()
			{
			return this->updateOrganizationalUnitParentId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateUserOutcome EiamClient::updateUser(const UpdateUserRequest &request) const
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

void EiamClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateUserOutcomeCallable EiamClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateUserDescriptionOutcome EiamClient::updateUserDescription(const UpdateUserDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserDescriptionOutcome(UpdateUserDescriptionResult(outcome.result()));
	else
		return UpdateUserDescriptionOutcome(outcome.error());
}

void EiamClient::updateUserDescriptionAsync(const UpdateUserDescriptionRequest& request, const UpdateUserDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateUserDescriptionOutcomeCallable EiamClient::updateUserDescriptionCallable(const UpdateUserDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateUserDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateUserPasswordOutcome EiamClient::updateUserPassword(const UpdateUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserPasswordOutcome(UpdateUserPasswordResult(outcome.result()));
	else
		return UpdateUserPasswordOutcome(outcome.error());
}

void EiamClient::updateUserPasswordAsync(const UpdateUserPasswordRequest& request, const UpdateUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateUserPasswordOutcomeCallable EiamClient::updateUserPasswordCallable(const UpdateUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->updateUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

