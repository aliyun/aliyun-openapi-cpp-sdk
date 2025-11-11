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

EiamClient::AddApplicationAccountToUserOutcome EiamClient::addApplicationAccountToUser(const AddApplicationAccountToUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddApplicationAccountToUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddApplicationAccountToUserOutcome(AddApplicationAccountToUserResult(outcome.result()));
	else
		return AddApplicationAccountToUserOutcome(outcome.error());
}

void EiamClient::addApplicationAccountToUserAsync(const AddApplicationAccountToUserRequest& request, const AddApplicationAccountToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addApplicationAccountToUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::AddApplicationAccountToUserOutcomeCallable EiamClient::addApplicationAccountToUserCallable(const AddApplicationAccountToUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddApplicationAccountToUserOutcome()>>(
			[this, request]()
			{
			return this->addApplicationAccountToUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::AddCustomPrivacyPoliciesToBrandOutcome EiamClient::addCustomPrivacyPoliciesToBrand(const AddCustomPrivacyPoliciesToBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCustomPrivacyPoliciesToBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCustomPrivacyPoliciesToBrandOutcome(AddCustomPrivacyPoliciesToBrandResult(outcome.result()));
	else
		return AddCustomPrivacyPoliciesToBrandOutcome(outcome.error());
}

void EiamClient::addCustomPrivacyPoliciesToBrandAsync(const AddCustomPrivacyPoliciesToBrandRequest& request, const AddCustomPrivacyPoliciesToBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCustomPrivacyPoliciesToBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::AddCustomPrivacyPoliciesToBrandOutcomeCallable EiamClient::addCustomPrivacyPoliciesToBrandCallable(const AddCustomPrivacyPoliciesToBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCustomPrivacyPoliciesToBrandOutcome()>>(
			[this, request]()
			{
			return this->addCustomPrivacyPoliciesToBrand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

EiamClient::BindUserAuthnSourceMappingOutcome EiamClient::bindUserAuthnSourceMapping(const BindUserAuthnSourceMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindUserAuthnSourceMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindUserAuthnSourceMappingOutcome(BindUserAuthnSourceMappingResult(outcome.result()));
	else
		return BindUserAuthnSourceMappingOutcome(outcome.error());
}

void EiamClient::bindUserAuthnSourceMappingAsync(const BindUserAuthnSourceMappingRequest& request, const BindUserAuthnSourceMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindUserAuthnSourceMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::BindUserAuthnSourceMappingOutcomeCallable EiamClient::bindUserAuthnSourceMappingCallable(const BindUserAuthnSourceMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindUserAuthnSourceMappingOutcome()>>(
			[this, request]()
			{
			return this->bindUserAuthnSourceMapping(request);
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

EiamClient::CreateApplicationFederatedCredentialOutcome EiamClient::createApplicationFederatedCredential(const CreateApplicationFederatedCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationFederatedCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationFederatedCredentialOutcome(CreateApplicationFederatedCredentialResult(outcome.result()));
	else
		return CreateApplicationFederatedCredentialOutcome(outcome.error());
}

void EiamClient::createApplicationFederatedCredentialAsync(const CreateApplicationFederatedCredentialRequest& request, const CreateApplicationFederatedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationFederatedCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateApplicationFederatedCredentialOutcomeCallable EiamClient::createApplicationFederatedCredentialCallable(const CreateApplicationFederatedCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationFederatedCredentialOutcome()>>(
			[this, request]()
			{
			return this->createApplicationFederatedCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateApplicationTokenOutcome EiamClient::createApplicationToken(const CreateApplicationTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationTokenOutcome(CreateApplicationTokenResult(outcome.result()));
	else
		return CreateApplicationTokenOutcome(outcome.error());
}

void EiamClient::createApplicationTokenAsync(const CreateApplicationTokenRequest& request, const CreateApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateApplicationTokenOutcomeCallable EiamClient::createApplicationTokenCallable(const CreateApplicationTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationTokenOutcome()>>(
			[this, request]()
			{
			return this->createApplicationToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::CreateBrandOutcome EiamClient::createBrand(const CreateBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBrandOutcome(CreateBrandResult(outcome.result()));
	else
		return CreateBrandOutcome(outcome.error());
}

void EiamClient::createBrandAsync(const CreateBrandRequest& request, const CreateBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateBrandOutcomeCallable EiamClient::createBrandCallable(const CreateBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBrandOutcome()>>(
			[this, request]()
			{
			return this->createBrand(request);
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

EiamClient::CreateCustomPrivacyPolicyOutcome EiamClient::createCustomPrivacyPolicy(const CreateCustomPrivacyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomPrivacyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomPrivacyPolicyOutcome(CreateCustomPrivacyPolicyResult(outcome.result()));
	else
		return CreateCustomPrivacyPolicyOutcome(outcome.error());
}

void EiamClient::createCustomPrivacyPolicyAsync(const CreateCustomPrivacyPolicyRequest& request, const CreateCustomPrivacyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomPrivacyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateCustomPrivacyPolicyOutcomeCallable EiamClient::createCustomPrivacyPolicyCallable(const CreateCustomPrivacyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomPrivacyPolicyOutcome()>>(
			[this, request]()
			{
			return this->createCustomPrivacyPolicy(request);
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

EiamClient::CreateFederatedCredentialProviderOutcome EiamClient::createFederatedCredentialProvider(const CreateFederatedCredentialProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFederatedCredentialProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFederatedCredentialProviderOutcome(CreateFederatedCredentialProviderResult(outcome.result()));
	else
		return CreateFederatedCredentialProviderOutcome(outcome.error());
}

void EiamClient::createFederatedCredentialProviderAsync(const CreateFederatedCredentialProviderRequest& request, const CreateFederatedCredentialProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFederatedCredentialProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateFederatedCredentialProviderOutcomeCallable EiamClient::createFederatedCredentialProviderCallable(const CreateFederatedCredentialProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFederatedCredentialProviderOutcome()>>(
			[this, request]()
			{
			return this->createFederatedCredentialProvider(request);
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

EiamClient::CreateNetworkZoneOutcome EiamClient::createNetworkZone(const CreateNetworkZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkZoneOutcome(CreateNetworkZoneResult(outcome.result()));
	else
		return CreateNetworkZoneOutcome(outcome.error());
}

void EiamClient::createNetworkZoneAsync(const CreateNetworkZoneRequest& request, const CreateNetworkZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::CreateNetworkZoneOutcomeCallable EiamClient::createNetworkZoneCallable(const CreateNetworkZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkZoneOutcome()>>(
			[this, request]()
			{
			return this->createNetworkZone(request);
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

EiamClient::DeleteApplicationFederatedCredentialOutcome EiamClient::deleteApplicationFederatedCredential(const DeleteApplicationFederatedCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationFederatedCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationFederatedCredentialOutcome(DeleteApplicationFederatedCredentialResult(outcome.result()));
	else
		return DeleteApplicationFederatedCredentialOutcome(outcome.error());
}

void EiamClient::deleteApplicationFederatedCredentialAsync(const DeleteApplicationFederatedCredentialRequest& request, const DeleteApplicationFederatedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationFederatedCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteApplicationFederatedCredentialOutcomeCallable EiamClient::deleteApplicationFederatedCredentialCallable(const DeleteApplicationFederatedCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationFederatedCredentialOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationFederatedCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteApplicationTokenOutcome EiamClient::deleteApplicationToken(const DeleteApplicationTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationTokenOutcome(DeleteApplicationTokenResult(outcome.result()));
	else
		return DeleteApplicationTokenOutcome(outcome.error());
}

void EiamClient::deleteApplicationTokenAsync(const DeleteApplicationTokenRequest& request, const DeleteApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteApplicationTokenOutcomeCallable EiamClient::deleteApplicationTokenCallable(const DeleteApplicationTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationTokenOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DeleteBrandOutcome EiamClient::deleteBrand(const DeleteBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBrandOutcome(DeleteBrandResult(outcome.result()));
	else
		return DeleteBrandOutcome(outcome.error());
}

void EiamClient::deleteBrandAsync(const DeleteBrandRequest& request, const DeleteBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteBrandOutcomeCallable EiamClient::deleteBrandCallable(const DeleteBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBrandOutcome()>>(
			[this, request]()
			{
			return this->deleteBrand(request);
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

EiamClient::DeleteCustomPrivacyPolicyOutcome EiamClient::deleteCustomPrivacyPolicy(const DeleteCustomPrivacyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomPrivacyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomPrivacyPolicyOutcome(DeleteCustomPrivacyPolicyResult(outcome.result()));
	else
		return DeleteCustomPrivacyPolicyOutcome(outcome.error());
}

void EiamClient::deleteCustomPrivacyPolicyAsync(const DeleteCustomPrivacyPolicyRequest& request, const DeleteCustomPrivacyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomPrivacyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteCustomPrivacyPolicyOutcomeCallable EiamClient::deleteCustomPrivacyPolicyCallable(const DeleteCustomPrivacyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomPrivacyPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomPrivacyPolicy(request);
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

EiamClient::DeleteFederatedCredentialProviderOutcome EiamClient::deleteFederatedCredentialProvider(const DeleteFederatedCredentialProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFederatedCredentialProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFederatedCredentialProviderOutcome(DeleteFederatedCredentialProviderResult(outcome.result()));
	else
		return DeleteFederatedCredentialProviderOutcome(outcome.error());
}

void EiamClient::deleteFederatedCredentialProviderAsync(const DeleteFederatedCredentialProviderRequest& request, const DeleteFederatedCredentialProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFederatedCredentialProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteFederatedCredentialProviderOutcomeCallable EiamClient::deleteFederatedCredentialProviderCallable(const DeleteFederatedCredentialProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFederatedCredentialProviderOutcome()>>(
			[this, request]()
			{
			return this->deleteFederatedCredentialProvider(request);
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

EiamClient::DeleteNetworkZoneOutcome EiamClient::deleteNetworkZone(const DeleteNetworkZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkZoneOutcome(DeleteNetworkZoneResult(outcome.result()));
	else
		return DeleteNetworkZoneOutcome(outcome.error());
}

void EiamClient::deleteNetworkZoneAsync(const DeleteNetworkZoneRequest& request, const DeleteNetworkZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DeleteNetworkZoneOutcomeCallable EiamClient::deleteNetworkZoneCallable(const DeleteNetworkZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkZoneOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkZone(request);
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

EiamClient::DisableApplicationFederatedCredentialOutcome EiamClient::disableApplicationFederatedCredential(const DisableApplicationFederatedCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationFederatedCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationFederatedCredentialOutcome(DisableApplicationFederatedCredentialResult(outcome.result()));
	else
		return DisableApplicationFederatedCredentialOutcome(outcome.error());
}

void EiamClient::disableApplicationFederatedCredentialAsync(const DisableApplicationFederatedCredentialRequest& request, const DisableApplicationFederatedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationFederatedCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableApplicationFederatedCredentialOutcomeCallable EiamClient::disableApplicationFederatedCredentialCallable(const DisableApplicationFederatedCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationFederatedCredentialOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationFederatedCredential(request);
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

EiamClient::DisableApplicationTokenOutcome EiamClient::disableApplicationToken(const DisableApplicationTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableApplicationTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableApplicationTokenOutcome(DisableApplicationTokenResult(outcome.result()));
	else
		return DisableApplicationTokenOutcome(outcome.error());
}

void EiamClient::disableApplicationTokenAsync(const DisableApplicationTokenRequest& request, const DisableApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableApplicationToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableApplicationTokenOutcomeCallable EiamClient::disableApplicationTokenCallable(const DisableApplicationTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableApplicationTokenOutcome()>>(
			[this, request]()
			{
			return this->disableApplicationToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableBrandOutcome EiamClient::disableBrand(const DisableBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableBrandOutcome(DisableBrandResult(outcome.result()));
	else
		return DisableBrandOutcome(outcome.error());
}

void EiamClient::disableBrandAsync(const DisableBrandRequest& request, const DisableBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableBrandOutcomeCallable EiamClient::disableBrandCallable(const DisableBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableBrandOutcome()>>(
			[this, request]()
			{
			return this->disableBrand(request);
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

EiamClient::DisableCustomPrivacyPolicyOutcome EiamClient::disableCustomPrivacyPolicy(const DisableCustomPrivacyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableCustomPrivacyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableCustomPrivacyPolicyOutcome(DisableCustomPrivacyPolicyResult(outcome.result()));
	else
		return DisableCustomPrivacyPolicyOutcome(outcome.error());
}

void EiamClient::disableCustomPrivacyPolicyAsync(const DisableCustomPrivacyPolicyRequest& request, const DisableCustomPrivacyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableCustomPrivacyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableCustomPrivacyPolicyOutcomeCallable EiamClient::disableCustomPrivacyPolicyCallable(const DisableCustomPrivacyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableCustomPrivacyPolicyOutcome()>>(
			[this, request]()
			{
			return this->disableCustomPrivacyPolicy(request);
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

EiamClient::DisableFederatedCredentialProviderOutcome EiamClient::disableFederatedCredentialProvider(const DisableFederatedCredentialProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableFederatedCredentialProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableFederatedCredentialProviderOutcome(DisableFederatedCredentialProviderResult(outcome.result()));
	else
		return DisableFederatedCredentialProviderOutcome(outcome.error());
}

void EiamClient::disableFederatedCredentialProviderAsync(const DisableFederatedCredentialProviderRequest& request, const DisableFederatedCredentialProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableFederatedCredentialProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableFederatedCredentialProviderOutcomeCallable EiamClient::disableFederatedCredentialProviderCallable(const DisableFederatedCredentialProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableFederatedCredentialProviderOutcome()>>(
			[this, request]()
			{
			return this->disableFederatedCredentialProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::DisableIdentityProviderAuthnOutcome EiamClient::disableIdentityProviderAuthn(const DisableIdentityProviderAuthnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableIdentityProviderAuthnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableIdentityProviderAuthnOutcome(DisableIdentityProviderAuthnResult(outcome.result()));
	else
		return DisableIdentityProviderAuthnOutcome(outcome.error());
}

void EiamClient::disableIdentityProviderAuthnAsync(const DisableIdentityProviderAuthnRequest& request, const DisableIdentityProviderAuthnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableIdentityProviderAuthn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::DisableIdentityProviderAuthnOutcomeCallable EiamClient::disableIdentityProviderAuthnCallable(const DisableIdentityProviderAuthnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableIdentityProviderAuthnOutcome()>>(
			[this, request]()
			{
			return this->disableIdentityProviderAuthn(request);
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

EiamClient::EnableApplicationFederatedCredentialOutcome EiamClient::enableApplicationFederatedCredential(const EnableApplicationFederatedCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationFederatedCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationFederatedCredentialOutcome(EnableApplicationFederatedCredentialResult(outcome.result()));
	else
		return EnableApplicationFederatedCredentialOutcome(outcome.error());
}

void EiamClient::enableApplicationFederatedCredentialAsync(const EnableApplicationFederatedCredentialRequest& request, const EnableApplicationFederatedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationFederatedCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableApplicationFederatedCredentialOutcomeCallable EiamClient::enableApplicationFederatedCredentialCallable(const EnableApplicationFederatedCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationFederatedCredentialOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationFederatedCredential(request);
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

EiamClient::EnableApplicationTokenOutcome EiamClient::enableApplicationToken(const EnableApplicationTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableApplicationTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableApplicationTokenOutcome(EnableApplicationTokenResult(outcome.result()));
	else
		return EnableApplicationTokenOutcome(outcome.error());
}

void EiamClient::enableApplicationTokenAsync(const EnableApplicationTokenRequest& request, const EnableApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableApplicationToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableApplicationTokenOutcomeCallable EiamClient::enableApplicationTokenCallable(const EnableApplicationTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableApplicationTokenOutcome()>>(
			[this, request]()
			{
			return this->enableApplicationToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableBrandOutcome EiamClient::enableBrand(const EnableBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableBrandOutcome(EnableBrandResult(outcome.result()));
	else
		return EnableBrandOutcome(outcome.error());
}

void EiamClient::enableBrandAsync(const EnableBrandRequest& request, const EnableBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableBrandOutcomeCallable EiamClient::enableBrandCallable(const EnableBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableBrandOutcome()>>(
			[this, request]()
			{
			return this->enableBrand(request);
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

EiamClient::EnableCustomPrivacyPolicyOutcome EiamClient::enableCustomPrivacyPolicy(const EnableCustomPrivacyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableCustomPrivacyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableCustomPrivacyPolicyOutcome(EnableCustomPrivacyPolicyResult(outcome.result()));
	else
		return EnableCustomPrivacyPolicyOutcome(outcome.error());
}

void EiamClient::enableCustomPrivacyPolicyAsync(const EnableCustomPrivacyPolicyRequest& request, const EnableCustomPrivacyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableCustomPrivacyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableCustomPrivacyPolicyOutcomeCallable EiamClient::enableCustomPrivacyPolicyCallable(const EnableCustomPrivacyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableCustomPrivacyPolicyOutcome()>>(
			[this, request]()
			{
			return this->enableCustomPrivacyPolicy(request);
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

EiamClient::EnableFederatedCredentialProviderOutcome EiamClient::enableFederatedCredentialProvider(const EnableFederatedCredentialProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableFederatedCredentialProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableFederatedCredentialProviderOutcome(EnableFederatedCredentialProviderResult(outcome.result()));
	else
		return EnableFederatedCredentialProviderOutcome(outcome.error());
}

void EiamClient::enableFederatedCredentialProviderAsync(const EnableFederatedCredentialProviderRequest& request, const EnableFederatedCredentialProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableFederatedCredentialProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableFederatedCredentialProviderOutcomeCallable EiamClient::enableFederatedCredentialProviderCallable(const EnableFederatedCredentialProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableFederatedCredentialProviderOutcome()>>(
			[this, request]()
			{
			return this->enableFederatedCredentialProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::EnableIdentityProviderAuthnOutcome EiamClient::enableIdentityProviderAuthn(const EnableIdentityProviderAuthnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableIdentityProviderAuthnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableIdentityProviderAuthnOutcome(EnableIdentityProviderAuthnResult(outcome.result()));
	else
		return EnableIdentityProviderAuthnOutcome(outcome.error());
}

void EiamClient::enableIdentityProviderAuthnAsync(const EnableIdentityProviderAuthnRequest& request, const EnableIdentityProviderAuthnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableIdentityProviderAuthn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::EnableIdentityProviderAuthnOutcomeCallable EiamClient::enableIdentityProviderAuthnCallable(const EnableIdentityProviderAuthnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableIdentityProviderAuthnOutcome()>>(
			[this, request]()
			{
			return this->enableIdentityProviderAuthn(request);
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

EiamClient::GetApplicationFederatedCredentialOutcome EiamClient::getApplicationFederatedCredential(const GetApplicationFederatedCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationFederatedCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationFederatedCredentialOutcome(GetApplicationFederatedCredentialResult(outcome.result()));
	else
		return GetApplicationFederatedCredentialOutcome(outcome.error());
}

void EiamClient::getApplicationFederatedCredentialAsync(const GetApplicationFederatedCredentialRequest& request, const GetApplicationFederatedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationFederatedCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetApplicationFederatedCredentialOutcomeCallable EiamClient::getApplicationFederatedCredentialCallable(const GetApplicationFederatedCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationFederatedCredentialOutcome()>>(
			[this, request]()
			{
			return this->getApplicationFederatedCredential(request);
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

EiamClient::GetApplicationTemplateOutcome EiamClient::getApplicationTemplate(const GetApplicationTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationTemplateOutcome(GetApplicationTemplateResult(outcome.result()));
	else
		return GetApplicationTemplateOutcome(outcome.error());
}

void EiamClient::getApplicationTemplateAsync(const GetApplicationTemplateRequest& request, const GetApplicationTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplicationTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetApplicationTemplateOutcomeCallable EiamClient::getApplicationTemplateCallable(const GetApplicationTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationTemplateOutcome()>>(
			[this, request]()
			{
			return this->getApplicationTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::GetBrandOutcome EiamClient::getBrand(const GetBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBrandOutcome(GetBrandResult(outcome.result()));
	else
		return GetBrandOutcome(outcome.error());
}

void EiamClient::getBrandAsync(const GetBrandRequest& request, const GetBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetBrandOutcomeCallable EiamClient::getBrandCallable(const GetBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBrandOutcome()>>(
			[this, request]()
			{
			return this->getBrand(request);
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

EiamClient::GetCustomPrivacyPolicyOutcome EiamClient::getCustomPrivacyPolicy(const GetCustomPrivacyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomPrivacyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomPrivacyPolicyOutcome(GetCustomPrivacyPolicyResult(outcome.result()));
	else
		return GetCustomPrivacyPolicyOutcome(outcome.error());
}

void EiamClient::getCustomPrivacyPolicyAsync(const GetCustomPrivacyPolicyRequest& request, const GetCustomPrivacyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomPrivacyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetCustomPrivacyPolicyOutcomeCallable EiamClient::getCustomPrivacyPolicyCallable(const GetCustomPrivacyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomPrivacyPolicyOutcome()>>(
			[this, request]()
			{
			return this->getCustomPrivacyPolicy(request);
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

EiamClient::GetFederatedCredentialProviderOutcome EiamClient::getFederatedCredentialProvider(const GetFederatedCredentialProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFederatedCredentialProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFederatedCredentialProviderOutcome(GetFederatedCredentialProviderResult(outcome.result()));
	else
		return GetFederatedCredentialProviderOutcome(outcome.error());
}

void EiamClient::getFederatedCredentialProviderAsync(const GetFederatedCredentialProviderRequest& request, const GetFederatedCredentialProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFederatedCredentialProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetFederatedCredentialProviderOutcomeCallable EiamClient::getFederatedCredentialProviderCallable(const GetFederatedCredentialProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFederatedCredentialProviderOutcome()>>(
			[this, request]()
			{
			return this->getFederatedCredentialProvider(request);
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

EiamClient::GetLoginRedirectApplicationForBrandOutcome EiamClient::getLoginRedirectApplicationForBrand(const GetLoginRedirectApplicationForBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoginRedirectApplicationForBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoginRedirectApplicationForBrandOutcome(GetLoginRedirectApplicationForBrandResult(outcome.result()));
	else
		return GetLoginRedirectApplicationForBrandOutcome(outcome.error());
}

void EiamClient::getLoginRedirectApplicationForBrandAsync(const GetLoginRedirectApplicationForBrandRequest& request, const GetLoginRedirectApplicationForBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoginRedirectApplicationForBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetLoginRedirectApplicationForBrandOutcomeCallable EiamClient::getLoginRedirectApplicationForBrandCallable(const GetLoginRedirectApplicationForBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoginRedirectApplicationForBrandOutcome()>>(
			[this, request]()
			{
			return this->getLoginRedirectApplicationForBrand(request);
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

EiamClient::GetNetworkZoneOutcome EiamClient::getNetworkZone(const GetNetworkZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNetworkZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNetworkZoneOutcome(GetNetworkZoneResult(outcome.result()));
	else
		return GetNetworkZoneOutcome(outcome.error());
}

void EiamClient::getNetworkZoneAsync(const GetNetworkZoneRequest& request, const GetNetworkZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNetworkZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::GetNetworkZoneOutcomeCallable EiamClient::getNetworkZoneCallable(const GetNetworkZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNetworkZoneOutcome()>>(
			[this, request]()
			{
			return this->getNetworkZone(request);
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

EiamClient::ListApplicationAccountsOutcome EiamClient::listApplicationAccounts(const ListApplicationAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationAccountsOutcome(ListApplicationAccountsResult(outcome.result()));
	else
		return ListApplicationAccountsOutcome(outcome.error());
}

void EiamClient::listApplicationAccountsAsync(const ListApplicationAccountsRequest& request, const ListApplicationAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationAccountsOutcomeCallable EiamClient::listApplicationAccountsCallable(const ListApplicationAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationAccountsOutcome()>>(
			[this, request]()
			{
			return this->listApplicationAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationAccountsForUserOutcome EiamClient::listApplicationAccountsForUser(const ListApplicationAccountsForUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationAccountsForUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationAccountsForUserOutcome(ListApplicationAccountsForUserResult(outcome.result()));
	else
		return ListApplicationAccountsForUserOutcome(outcome.error());
}

void EiamClient::listApplicationAccountsForUserAsync(const ListApplicationAccountsForUserRequest& request, const ListApplicationAccountsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationAccountsForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationAccountsForUserOutcomeCallable EiamClient::listApplicationAccountsForUserCallable(const ListApplicationAccountsForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationAccountsForUserOutcome()>>(
			[this, request]()
			{
			return this->listApplicationAccountsForUser(request);
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

EiamClient::ListApplicationFederatedCredentialsOutcome EiamClient::listApplicationFederatedCredentials(const ListApplicationFederatedCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationFederatedCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationFederatedCredentialsOutcome(ListApplicationFederatedCredentialsResult(outcome.result()));
	else
		return ListApplicationFederatedCredentialsOutcome(outcome.error());
}

void EiamClient::listApplicationFederatedCredentialsAsync(const ListApplicationFederatedCredentialsRequest& request, const ListApplicationFederatedCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationFederatedCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationFederatedCredentialsOutcomeCallable EiamClient::listApplicationFederatedCredentialsCallable(const ListApplicationFederatedCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationFederatedCredentialsOutcome()>>(
			[this, request]()
			{
			return this->listApplicationFederatedCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationFederatedCredentialsForProviderOutcome EiamClient::listApplicationFederatedCredentialsForProvider(const ListApplicationFederatedCredentialsForProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationFederatedCredentialsForProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationFederatedCredentialsForProviderOutcome(ListApplicationFederatedCredentialsForProviderResult(outcome.result()));
	else
		return ListApplicationFederatedCredentialsForProviderOutcome(outcome.error());
}

void EiamClient::listApplicationFederatedCredentialsForProviderAsync(const ListApplicationFederatedCredentialsForProviderRequest& request, const ListApplicationFederatedCredentialsForProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationFederatedCredentialsForProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationFederatedCredentialsForProviderOutcomeCallable EiamClient::listApplicationFederatedCredentialsForProviderCallable(const ListApplicationFederatedCredentialsForProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationFederatedCredentialsForProviderOutcome()>>(
			[this, request]()
			{
			return this->listApplicationFederatedCredentialsForProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationSupportedProvisionProtocolTypesOutcome EiamClient::listApplicationSupportedProvisionProtocolTypes(const ListApplicationSupportedProvisionProtocolTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationSupportedProvisionProtocolTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationSupportedProvisionProtocolTypesOutcome(ListApplicationSupportedProvisionProtocolTypesResult(outcome.result()));
	else
		return ListApplicationSupportedProvisionProtocolTypesOutcome(outcome.error());
}

void EiamClient::listApplicationSupportedProvisionProtocolTypesAsync(const ListApplicationSupportedProvisionProtocolTypesRequest& request, const ListApplicationSupportedProvisionProtocolTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationSupportedProvisionProtocolTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationSupportedProvisionProtocolTypesOutcomeCallable EiamClient::listApplicationSupportedProvisionProtocolTypesCallable(const ListApplicationSupportedProvisionProtocolTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationSupportedProvisionProtocolTypesOutcome()>>(
			[this, request]()
			{
			return this->listApplicationSupportedProvisionProtocolTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationTokensOutcome EiamClient::listApplicationTokens(const ListApplicationTokensRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationTokensOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationTokensOutcome(ListApplicationTokensResult(outcome.result()));
	else
		return ListApplicationTokensOutcome(outcome.error());
}

void EiamClient::listApplicationTokensAsync(const ListApplicationTokensRequest& request, const ListApplicationTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationTokens(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationTokensOutcomeCallable EiamClient::listApplicationTokensCallable(const ListApplicationTokensRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationTokensOutcome()>>(
			[this, request]()
			{
			return this->listApplicationTokens(request);
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

EiamClient::ListApplicationsForGroupOutcome EiamClient::listApplicationsForGroup(const ListApplicationsForGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsForGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsForGroupOutcome(ListApplicationsForGroupResult(outcome.result()));
	else
		return ListApplicationsForGroupOutcome(outcome.error());
}

void EiamClient::listApplicationsForGroupAsync(const ListApplicationsForGroupRequest& request, const ListApplicationsForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationsForGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationsForGroupOutcomeCallable EiamClient::listApplicationsForGroupCallable(const ListApplicationsForGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsForGroupOutcome()>>(
			[this, request]()
			{
			return this->listApplicationsForGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationsForNetworkAccessEndpointOutcome EiamClient::listApplicationsForNetworkAccessEndpoint(const ListApplicationsForNetworkAccessEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsForNetworkAccessEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsForNetworkAccessEndpointOutcome(ListApplicationsForNetworkAccessEndpointResult(outcome.result()));
	else
		return ListApplicationsForNetworkAccessEndpointOutcome(outcome.error());
}

void EiamClient::listApplicationsForNetworkAccessEndpointAsync(const ListApplicationsForNetworkAccessEndpointRequest& request, const ListApplicationsForNetworkAccessEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationsForNetworkAccessEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationsForNetworkAccessEndpointOutcomeCallable EiamClient::listApplicationsForNetworkAccessEndpointCallable(const ListApplicationsForNetworkAccessEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsForNetworkAccessEndpointOutcome()>>(
			[this, request]()
			{
			return this->listApplicationsForNetworkAccessEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListApplicationsForNetworkZoneOutcome EiamClient::listApplicationsForNetworkZone(const ListApplicationsForNetworkZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsForNetworkZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsForNetworkZoneOutcome(ListApplicationsForNetworkZoneResult(outcome.result()));
	else
		return ListApplicationsForNetworkZoneOutcome(outcome.error());
}

void EiamClient::listApplicationsForNetworkZoneAsync(const ListApplicationsForNetworkZoneRequest& request, const ListApplicationsForNetworkZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationsForNetworkZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListApplicationsForNetworkZoneOutcomeCallable EiamClient::listApplicationsForNetworkZoneCallable(const ListApplicationsForNetworkZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsForNetworkZoneOutcome()>>(
			[this, request]()
			{
			return this->listApplicationsForNetworkZone(request);
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

EiamClient::ListBrandsOutcome EiamClient::listBrands(const ListBrandsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBrandsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBrandsOutcome(ListBrandsResult(outcome.result()));
	else
		return ListBrandsOutcome(outcome.error());
}

void EiamClient::listBrandsAsync(const ListBrandsRequest& request, const ListBrandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBrands(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListBrandsOutcomeCallable EiamClient::listBrandsCallable(const ListBrandsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBrandsOutcome()>>(
			[this, request]()
			{
			return this->listBrands(request);
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

EiamClient::ListConditionalAccessPoliciesForApplicationOutcome EiamClient::listConditionalAccessPoliciesForApplication(const ListConditionalAccessPoliciesForApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConditionalAccessPoliciesForApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConditionalAccessPoliciesForApplicationOutcome(ListConditionalAccessPoliciesForApplicationResult(outcome.result()));
	else
		return ListConditionalAccessPoliciesForApplicationOutcome(outcome.error());
}

void EiamClient::listConditionalAccessPoliciesForApplicationAsync(const ListConditionalAccessPoliciesForApplicationRequest& request, const ListConditionalAccessPoliciesForApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConditionalAccessPoliciesForApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListConditionalAccessPoliciesForApplicationOutcomeCallable EiamClient::listConditionalAccessPoliciesForApplicationCallable(const ListConditionalAccessPoliciesForApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConditionalAccessPoliciesForApplicationOutcome()>>(
			[this, request]()
			{
			return this->listConditionalAccessPoliciesForApplication(request);
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

EiamClient::ListConditionalAccessPoliciesForUserOutcome EiamClient::listConditionalAccessPoliciesForUser(const ListConditionalAccessPoliciesForUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConditionalAccessPoliciesForUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConditionalAccessPoliciesForUserOutcome(ListConditionalAccessPoliciesForUserResult(outcome.result()));
	else
		return ListConditionalAccessPoliciesForUserOutcome(outcome.error());
}

void EiamClient::listConditionalAccessPoliciesForUserAsync(const ListConditionalAccessPoliciesForUserRequest& request, const ListConditionalAccessPoliciesForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConditionalAccessPoliciesForUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListConditionalAccessPoliciesForUserOutcomeCallable EiamClient::listConditionalAccessPoliciesForUserCallable(const ListConditionalAccessPoliciesForUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConditionalAccessPoliciesForUserOutcome()>>(
			[this, request]()
			{
			return this->listConditionalAccessPoliciesForUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListCustomPrivacyPoliciesOutcome EiamClient::listCustomPrivacyPolicies(const ListCustomPrivacyPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomPrivacyPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomPrivacyPoliciesOutcome(ListCustomPrivacyPoliciesResult(outcome.result()));
	else
		return ListCustomPrivacyPoliciesOutcome(outcome.error());
}

void EiamClient::listCustomPrivacyPoliciesAsync(const ListCustomPrivacyPoliciesRequest& request, const ListCustomPrivacyPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomPrivacyPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListCustomPrivacyPoliciesOutcomeCallable EiamClient::listCustomPrivacyPoliciesCallable(const ListCustomPrivacyPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomPrivacyPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listCustomPrivacyPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::ListCustomPrivacyPoliciesForBrandOutcome EiamClient::listCustomPrivacyPoliciesForBrand(const ListCustomPrivacyPoliciesForBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomPrivacyPoliciesForBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomPrivacyPoliciesForBrandOutcome(ListCustomPrivacyPoliciesForBrandResult(outcome.result()));
	else
		return ListCustomPrivacyPoliciesForBrandOutcome(outcome.error());
}

void EiamClient::listCustomPrivacyPoliciesForBrandAsync(const ListCustomPrivacyPoliciesForBrandRequest& request, const ListCustomPrivacyPoliciesForBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomPrivacyPoliciesForBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListCustomPrivacyPoliciesForBrandOutcomeCallable EiamClient::listCustomPrivacyPoliciesForBrandCallable(const ListCustomPrivacyPoliciesForBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomPrivacyPoliciesForBrandOutcome()>>(
			[this, request]()
			{
			return this->listCustomPrivacyPoliciesForBrand(request);
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

EiamClient::ListFederatedCredentialProvidersOutcome EiamClient::listFederatedCredentialProviders(const ListFederatedCredentialProvidersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFederatedCredentialProvidersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFederatedCredentialProvidersOutcome(ListFederatedCredentialProvidersResult(outcome.result()));
	else
		return ListFederatedCredentialProvidersOutcome(outcome.error());
}

void EiamClient::listFederatedCredentialProvidersAsync(const ListFederatedCredentialProvidersRequest& request, const ListFederatedCredentialProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFederatedCredentialProviders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListFederatedCredentialProvidersOutcomeCallable EiamClient::listFederatedCredentialProvidersCallable(const ListFederatedCredentialProvidersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFederatedCredentialProvidersOutcome()>>(
			[this, request]()
			{
			return this->listFederatedCredentialProviders(request);
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

EiamClient::ListIdentityProvidersForNetworkAccessEndpointOutcome EiamClient::listIdentityProvidersForNetworkAccessEndpoint(const ListIdentityProvidersForNetworkAccessEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIdentityProvidersForNetworkAccessEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIdentityProvidersForNetworkAccessEndpointOutcome(ListIdentityProvidersForNetworkAccessEndpointResult(outcome.result()));
	else
		return ListIdentityProvidersForNetworkAccessEndpointOutcome(outcome.error());
}

void EiamClient::listIdentityProvidersForNetworkAccessEndpointAsync(const ListIdentityProvidersForNetworkAccessEndpointRequest& request, const ListIdentityProvidersForNetworkAccessEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIdentityProvidersForNetworkAccessEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListIdentityProvidersForNetworkAccessEndpointOutcomeCallable EiamClient::listIdentityProvidersForNetworkAccessEndpointCallable(const ListIdentityProvidersForNetworkAccessEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIdentityProvidersForNetworkAccessEndpointOutcome()>>(
			[this, request]()
			{
			return this->listIdentityProvidersForNetworkAccessEndpoint(request);
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

EiamClient::ListNetworkZonesOutcome EiamClient::listNetworkZones(const ListNetworkZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNetworkZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNetworkZonesOutcome(ListNetworkZonesResult(outcome.result()));
	else
		return ListNetworkZonesOutcome(outcome.error());
}

void EiamClient::listNetworkZonesAsync(const ListNetworkZonesRequest& request, const ListNetworkZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNetworkZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListNetworkZonesOutcomeCallable EiamClient::listNetworkZonesCallable(const ListNetworkZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNetworkZonesOutcome()>>(
			[this, request]()
			{
			return this->listNetworkZones(request);
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

EiamClient::ListUserAuthnSourceMappingsOutcome EiamClient::listUserAuthnSourceMappings(const ListUserAuthnSourceMappingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserAuthnSourceMappingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserAuthnSourceMappingsOutcome(ListUserAuthnSourceMappingsResult(outcome.result()));
	else
		return ListUserAuthnSourceMappingsOutcome(outcome.error());
}

void EiamClient::listUserAuthnSourceMappingsAsync(const ListUserAuthnSourceMappingsRequest& request, const ListUserAuthnSourceMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserAuthnSourceMappings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ListUserAuthnSourceMappingsOutcomeCallable EiamClient::listUserAuthnSourceMappingsCallable(const ListUserAuthnSourceMappingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserAuthnSourceMappingsOutcome()>>(
			[this, request]()
			{
			return this->listUserAuthnSourceMappings(request);
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

EiamClient::ObtainApplicationTokenOutcome EiamClient::obtainApplicationToken(const ObtainApplicationTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ObtainApplicationTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ObtainApplicationTokenOutcome(ObtainApplicationTokenResult(outcome.result()));
	else
		return ObtainApplicationTokenOutcome(outcome.error());
}

void EiamClient::obtainApplicationTokenAsync(const ObtainApplicationTokenRequest& request, const ObtainApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, obtainApplicationToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::ObtainApplicationTokenOutcomeCallable EiamClient::obtainApplicationTokenCallable(const ObtainApplicationTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ObtainApplicationTokenOutcome()>>(
			[this, request]()
			{
			return this->obtainApplicationToken(request);
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

EiamClient::RemoveApplicationAccountFromUserOutcome EiamClient::removeApplicationAccountFromUser(const RemoveApplicationAccountFromUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveApplicationAccountFromUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveApplicationAccountFromUserOutcome(RemoveApplicationAccountFromUserResult(outcome.result()));
	else
		return RemoveApplicationAccountFromUserOutcome(outcome.error());
}

void EiamClient::removeApplicationAccountFromUserAsync(const RemoveApplicationAccountFromUserRequest& request, const RemoveApplicationAccountFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeApplicationAccountFromUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::RemoveApplicationAccountFromUserOutcomeCallable EiamClient::removeApplicationAccountFromUserCallable(const RemoveApplicationAccountFromUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveApplicationAccountFromUserOutcome()>>(
			[this, request]()
			{
			return this->removeApplicationAccountFromUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::RemoveCustomPrivacyPoliciesFromBrandOutcome EiamClient::removeCustomPrivacyPoliciesFromBrand(const RemoveCustomPrivacyPoliciesFromBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveCustomPrivacyPoliciesFromBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveCustomPrivacyPoliciesFromBrandOutcome(RemoveCustomPrivacyPoliciesFromBrandResult(outcome.result()));
	else
		return RemoveCustomPrivacyPoliciesFromBrandOutcome(outcome.error());
}

void EiamClient::removeCustomPrivacyPoliciesFromBrandAsync(const RemoveCustomPrivacyPoliciesFromBrandRequest& request, const RemoveCustomPrivacyPoliciesFromBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeCustomPrivacyPoliciesFromBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::RemoveCustomPrivacyPoliciesFromBrandOutcomeCallable EiamClient::removeCustomPrivacyPoliciesFromBrandCallable(const RemoveCustomPrivacyPoliciesFromBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveCustomPrivacyPoliciesFromBrandOutcome()>>(
			[this, request]()
			{
			return this->removeCustomPrivacyPoliciesFromBrand(request);
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

EiamClient::SetLoginRedirectApplicationForBrandOutcome EiamClient::setLoginRedirectApplicationForBrand(const SetLoginRedirectApplicationForBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLoginRedirectApplicationForBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLoginRedirectApplicationForBrandOutcome(SetLoginRedirectApplicationForBrandResult(outcome.result()));
	else
		return SetLoginRedirectApplicationForBrandOutcome(outcome.error());
}

void EiamClient::setLoginRedirectApplicationForBrandAsync(const SetLoginRedirectApplicationForBrandRequest& request, const SetLoginRedirectApplicationForBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLoginRedirectApplicationForBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::SetLoginRedirectApplicationForBrandOutcomeCallable EiamClient::setLoginRedirectApplicationForBrandCallable(const SetLoginRedirectApplicationForBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLoginRedirectApplicationForBrandOutcome()>>(
			[this, request]()
			{
			return this->setLoginRedirectApplicationForBrand(request);
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

EiamClient::UnbindUserAuthnSourceMappingOutcome EiamClient::unbindUserAuthnSourceMapping(const UnbindUserAuthnSourceMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindUserAuthnSourceMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindUserAuthnSourceMappingOutcome(UnbindUserAuthnSourceMappingResult(outcome.result()));
	else
		return UnbindUserAuthnSourceMappingOutcome(outcome.error());
}

void EiamClient::unbindUserAuthnSourceMappingAsync(const UnbindUserAuthnSourceMappingRequest& request, const UnbindUserAuthnSourceMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindUserAuthnSourceMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UnbindUserAuthnSourceMappingOutcomeCallable EiamClient::unbindUserAuthnSourceMappingCallable(const UnbindUserAuthnSourceMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindUserAuthnSourceMappingOutcome()>>(
			[this, request]()
			{
			return this->unbindUserAuthnSourceMapping(request);
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

EiamClient::UpdateApplicationClientSecretExpirationTimeOutcome EiamClient::updateApplicationClientSecretExpirationTime(const UpdateApplicationClientSecretExpirationTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationClientSecretExpirationTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationClientSecretExpirationTimeOutcome(UpdateApplicationClientSecretExpirationTimeResult(outcome.result()));
	else
		return UpdateApplicationClientSecretExpirationTimeOutcome(outcome.error());
}

void EiamClient::updateApplicationClientSecretExpirationTimeAsync(const UpdateApplicationClientSecretExpirationTimeRequest& request, const UpdateApplicationClientSecretExpirationTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationClientSecretExpirationTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateApplicationClientSecretExpirationTimeOutcomeCallable EiamClient::updateApplicationClientSecretExpirationTimeCallable(const UpdateApplicationClientSecretExpirationTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationClientSecretExpirationTimeOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationClientSecretExpirationTime(request);
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

EiamClient::UpdateApplicationFederatedCredentialOutcome EiamClient::updateApplicationFederatedCredential(const UpdateApplicationFederatedCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationFederatedCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationFederatedCredentialOutcome(UpdateApplicationFederatedCredentialResult(outcome.result()));
	else
		return UpdateApplicationFederatedCredentialOutcome(outcome.error());
}

void EiamClient::updateApplicationFederatedCredentialAsync(const UpdateApplicationFederatedCredentialRequest& request, const UpdateApplicationFederatedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationFederatedCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateApplicationFederatedCredentialOutcomeCallable EiamClient::updateApplicationFederatedCredentialCallable(const UpdateApplicationFederatedCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationFederatedCredentialOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationFederatedCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateApplicationFederatedCredentialDescriptionOutcome EiamClient::updateApplicationFederatedCredentialDescription(const UpdateApplicationFederatedCredentialDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationFederatedCredentialDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationFederatedCredentialDescriptionOutcome(UpdateApplicationFederatedCredentialDescriptionResult(outcome.result()));
	else
		return UpdateApplicationFederatedCredentialDescriptionOutcome(outcome.error());
}

void EiamClient::updateApplicationFederatedCredentialDescriptionAsync(const UpdateApplicationFederatedCredentialDescriptionRequest& request, const UpdateApplicationFederatedCredentialDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationFederatedCredentialDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateApplicationFederatedCredentialDescriptionOutcomeCallable EiamClient::updateApplicationFederatedCredentialDescriptionCallable(const UpdateApplicationFederatedCredentialDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationFederatedCredentialDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationFederatedCredentialDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateApplicationInfoOutcome EiamClient::updateApplicationInfo(const UpdateApplicationInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationInfoOutcome(UpdateApplicationInfoResult(outcome.result()));
	else
		return UpdateApplicationInfoOutcome(outcome.error());
}

void EiamClient::updateApplicationInfoAsync(const UpdateApplicationInfoRequest& request, const UpdateApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateApplicationInfoOutcomeCallable EiamClient::updateApplicationInfoCallable(const UpdateApplicationInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationInfoOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateApplicationTokenExpirationTimeOutcome EiamClient::updateApplicationTokenExpirationTime(const UpdateApplicationTokenExpirationTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationTokenExpirationTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationTokenExpirationTimeOutcome(UpdateApplicationTokenExpirationTimeResult(outcome.result()));
	else
		return UpdateApplicationTokenExpirationTimeOutcome(outcome.error());
}

void EiamClient::updateApplicationTokenExpirationTimeAsync(const UpdateApplicationTokenExpirationTimeRequest& request, const UpdateApplicationTokenExpirationTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationTokenExpirationTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateApplicationTokenExpirationTimeOutcomeCallable EiamClient::updateApplicationTokenExpirationTimeCallable(const UpdateApplicationTokenExpirationTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationTokenExpirationTimeOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationTokenExpirationTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateBrandOutcome EiamClient::updateBrand(const UpdateBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBrandOutcome(UpdateBrandResult(outcome.result()));
	else
		return UpdateBrandOutcome(outcome.error());
}

void EiamClient::updateBrandAsync(const UpdateBrandRequest& request, const UpdateBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateBrandOutcomeCallable EiamClient::updateBrandCallable(const UpdateBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBrandOutcome()>>(
			[this, request]()
			{
			return this->updateBrand(request);
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

EiamClient::UpdateCustomPrivacyPolicyOutcome EiamClient::updateCustomPrivacyPolicy(const UpdateCustomPrivacyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomPrivacyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomPrivacyPolicyOutcome(UpdateCustomPrivacyPolicyResult(outcome.result()));
	else
		return UpdateCustomPrivacyPolicyOutcome(outcome.error());
}

void EiamClient::updateCustomPrivacyPolicyAsync(const UpdateCustomPrivacyPolicyRequest& request, const UpdateCustomPrivacyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomPrivacyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateCustomPrivacyPolicyOutcomeCallable EiamClient::updateCustomPrivacyPolicyCallable(const UpdateCustomPrivacyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomPrivacyPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateCustomPrivacyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateDomainBrandOutcome EiamClient::updateDomainBrand(const UpdateDomainBrandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainBrandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainBrandOutcome(UpdateDomainBrandResult(outcome.result()));
	else
		return UpdateDomainBrandOutcome(outcome.error());
}

void EiamClient::updateDomainBrandAsync(const UpdateDomainBrandRequest& request, const UpdateDomainBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainBrand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateDomainBrandOutcomeCallable EiamClient::updateDomainBrandCallable(const UpdateDomainBrandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainBrandOutcome()>>(
			[this, request]()
			{
			return this->updateDomainBrand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateDomainIcpNumberOutcome EiamClient::updateDomainIcpNumber(const UpdateDomainIcpNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainIcpNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainIcpNumberOutcome(UpdateDomainIcpNumberResult(outcome.result()));
	else
		return UpdateDomainIcpNumberOutcome(outcome.error());
}

void EiamClient::updateDomainIcpNumberAsync(const UpdateDomainIcpNumberRequest& request, const UpdateDomainIcpNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainIcpNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateDomainIcpNumberOutcomeCallable EiamClient::updateDomainIcpNumberCallable(const UpdateDomainIcpNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainIcpNumberOutcome()>>(
			[this, request]()
			{
			return this->updateDomainIcpNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateFederatedCredentialProviderOutcome EiamClient::updateFederatedCredentialProvider(const UpdateFederatedCredentialProviderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFederatedCredentialProviderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFederatedCredentialProviderOutcome(UpdateFederatedCredentialProviderResult(outcome.result()));
	else
		return UpdateFederatedCredentialProviderOutcome(outcome.error());
}

void EiamClient::updateFederatedCredentialProviderAsync(const UpdateFederatedCredentialProviderRequest& request, const UpdateFederatedCredentialProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFederatedCredentialProvider(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateFederatedCredentialProviderOutcomeCallable EiamClient::updateFederatedCredentialProviderCallable(const UpdateFederatedCredentialProviderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFederatedCredentialProviderOutcome()>>(
			[this, request]()
			{
			return this->updateFederatedCredentialProvider(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateFederatedCredentialProviderDescriptionOutcome EiamClient::updateFederatedCredentialProviderDescription(const UpdateFederatedCredentialProviderDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFederatedCredentialProviderDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFederatedCredentialProviderDescriptionOutcome(UpdateFederatedCredentialProviderDescriptionResult(outcome.result()));
	else
		return UpdateFederatedCredentialProviderDescriptionOutcome(outcome.error());
}

void EiamClient::updateFederatedCredentialProviderDescriptionAsync(const UpdateFederatedCredentialProviderDescriptionRequest& request, const UpdateFederatedCredentialProviderDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFederatedCredentialProviderDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateFederatedCredentialProviderDescriptionOutcomeCallable EiamClient::updateFederatedCredentialProviderDescriptionCallable(const UpdateFederatedCredentialProviderDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFederatedCredentialProviderDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateFederatedCredentialProviderDescription(request);
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

EiamClient::UpdateNetworkZoneOutcome EiamClient::updateNetworkZone(const UpdateNetworkZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNetworkZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNetworkZoneOutcome(UpdateNetworkZoneResult(outcome.result()));
	else
		return UpdateNetworkZoneOutcome(outcome.error());
}

void EiamClient::updateNetworkZoneAsync(const UpdateNetworkZoneRequest& request, const UpdateNetworkZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNetworkZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateNetworkZoneOutcomeCallable EiamClient::updateNetworkZoneCallable(const UpdateNetworkZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNetworkZoneOutcome()>>(
			[this, request]()
			{
			return this->updateNetworkZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EiamClient::UpdateNetworkZoneDescriptionOutcome EiamClient::updateNetworkZoneDescription(const UpdateNetworkZoneDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNetworkZoneDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNetworkZoneDescriptionOutcome(UpdateNetworkZoneDescriptionResult(outcome.result()));
	else
		return UpdateNetworkZoneDescriptionOutcome(outcome.error());
}

void EiamClient::updateNetworkZoneDescriptionAsync(const UpdateNetworkZoneDescriptionRequest& request, const UpdateNetworkZoneDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNetworkZoneDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EiamClient::UpdateNetworkZoneDescriptionOutcomeCallable EiamClient::updateNetworkZoneDescriptionCallable(const UpdateNetworkZoneDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNetworkZoneDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateNetworkZoneDescription(request);
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

