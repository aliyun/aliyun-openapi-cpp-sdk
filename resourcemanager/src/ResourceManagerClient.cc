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

#include <alibabacloud/resourcemanager/ResourceManagerClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

namespace
{
	const std::string SERVICE_NAME = "ResourceManager";
}

ResourceManagerClient::ResourceManagerClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "resourcemanager");
}

ResourceManagerClient::ResourceManagerClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "resourcemanager");
}

ResourceManagerClient::ResourceManagerClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "resourcemanager");
}

ResourceManagerClient::~ResourceManagerClient()
{}

ResourceManagerClient::AcceptHandshakeOutcome ResourceManagerClient::acceptHandshake(const AcceptHandshakeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptHandshakeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptHandshakeOutcome(AcceptHandshakeResult(outcome.result()));
	else
		return AcceptHandshakeOutcome(outcome.error());
}

void ResourceManagerClient::acceptHandshakeAsync(const AcceptHandshakeRequest& request, const AcceptHandshakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptHandshake(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::AcceptHandshakeOutcomeCallable ResourceManagerClient::acceptHandshakeCallable(const AcceptHandshakeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptHandshakeOutcome()>>(
			[this, request]()
			{
			return this->acceptHandshake(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::AttachControlPolicyOutcome ResourceManagerClient::attachControlPolicy(const AttachControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachControlPolicyOutcome(AttachControlPolicyResult(outcome.result()));
	else
		return AttachControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::attachControlPolicyAsync(const AttachControlPolicyRequest& request, const AttachControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::AttachControlPolicyOutcomeCallable ResourceManagerClient::attachControlPolicyCallable(const AttachControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->attachControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::AttachPolicyOutcome ResourceManagerClient::attachPolicy(const AttachPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachPolicyOutcome(AttachPolicyResult(outcome.result()));
	else
		return AttachPolicyOutcome(outcome.error());
}

void ResourceManagerClient::attachPolicyAsync(const AttachPolicyRequest& request, const AttachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::AttachPolicyOutcomeCallable ResourceManagerClient::attachPolicyCallable(const AttachPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachPolicyOutcome()>>(
			[this, request]()
			{
			return this->attachPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::BindSecureMobilePhoneOutcome ResourceManagerClient::bindSecureMobilePhone(const BindSecureMobilePhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindSecureMobilePhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindSecureMobilePhoneOutcome(BindSecureMobilePhoneResult(outcome.result()));
	else
		return BindSecureMobilePhoneOutcome(outcome.error());
}

void ResourceManagerClient::bindSecureMobilePhoneAsync(const BindSecureMobilePhoneRequest& request, const BindSecureMobilePhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindSecureMobilePhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::BindSecureMobilePhoneOutcomeCallable ResourceManagerClient::bindSecureMobilePhoneCallable(const BindSecureMobilePhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindSecureMobilePhoneOutcome()>>(
			[this, request]()
			{
			return this->bindSecureMobilePhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CancelChangeAccountEmailOutcome ResourceManagerClient::cancelChangeAccountEmail(const CancelChangeAccountEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelChangeAccountEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelChangeAccountEmailOutcome(CancelChangeAccountEmailResult(outcome.result()));
	else
		return CancelChangeAccountEmailOutcome(outcome.error());
}

void ResourceManagerClient::cancelChangeAccountEmailAsync(const CancelChangeAccountEmailRequest& request, const CancelChangeAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelChangeAccountEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CancelChangeAccountEmailOutcomeCallable ResourceManagerClient::cancelChangeAccountEmailCallable(const CancelChangeAccountEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelChangeAccountEmailOutcome()>>(
			[this, request]()
			{
			return this->cancelChangeAccountEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CancelCreateCloudAccountOutcome ResourceManagerClient::cancelCreateCloudAccount(const CancelCreateCloudAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCreateCloudAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCreateCloudAccountOutcome(CancelCreateCloudAccountResult(outcome.result()));
	else
		return CancelCreateCloudAccountOutcome(outcome.error());
}

void ResourceManagerClient::cancelCreateCloudAccountAsync(const CancelCreateCloudAccountRequest& request, const CancelCreateCloudAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCreateCloudAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CancelCreateCloudAccountOutcomeCallable ResourceManagerClient::cancelCreateCloudAccountCallable(const CancelCreateCloudAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCreateCloudAccountOutcome()>>(
			[this, request]()
			{
			return this->cancelCreateCloudAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CancelHandshakeOutcome ResourceManagerClient::cancelHandshake(const CancelHandshakeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelHandshakeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelHandshakeOutcome(CancelHandshakeResult(outcome.result()));
	else
		return CancelHandshakeOutcome(outcome.error());
}

void ResourceManagerClient::cancelHandshakeAsync(const CancelHandshakeRequest& request, const CancelHandshakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelHandshake(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CancelHandshakeOutcomeCallable ResourceManagerClient::cancelHandshakeCallable(const CancelHandshakeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelHandshakeOutcome()>>(
			[this, request]()
			{
			return this->cancelHandshake(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CancelPromoteResourceAccountOutcome ResourceManagerClient::cancelPromoteResourceAccount(const CancelPromoteResourceAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPromoteResourceAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPromoteResourceAccountOutcome(CancelPromoteResourceAccountResult(outcome.result()));
	else
		return CancelPromoteResourceAccountOutcome(outcome.error());
}

void ResourceManagerClient::cancelPromoteResourceAccountAsync(const CancelPromoteResourceAccountRequest& request, const CancelPromoteResourceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPromoteResourceAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CancelPromoteResourceAccountOutcomeCallable ResourceManagerClient::cancelPromoteResourceAccountCallable(const CancelPromoteResourceAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPromoteResourceAccountOutcome()>>(
			[this, request]()
			{
			return this->cancelPromoteResourceAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ChangeAccountEmailOutcome ResourceManagerClient::changeAccountEmail(const ChangeAccountEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeAccountEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeAccountEmailOutcome(ChangeAccountEmailResult(outcome.result()));
	else
		return ChangeAccountEmailOutcome(outcome.error());
}

void ResourceManagerClient::changeAccountEmailAsync(const ChangeAccountEmailRequest& request, const ChangeAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeAccountEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ChangeAccountEmailOutcomeCallable ResourceManagerClient::changeAccountEmailCallable(const ChangeAccountEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeAccountEmailOutcome()>>(
			[this, request]()
			{
			return this->changeAccountEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CheckAccountDeleteOutcome ResourceManagerClient::checkAccountDelete(const CheckAccountDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckAccountDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckAccountDeleteOutcome(CheckAccountDeleteResult(outcome.result()));
	else
		return CheckAccountDeleteOutcome(outcome.error());
}

void ResourceManagerClient::checkAccountDeleteAsync(const CheckAccountDeleteRequest& request, const CheckAccountDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkAccountDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CheckAccountDeleteOutcomeCallable ResourceManagerClient::checkAccountDeleteCallable(const CheckAccountDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckAccountDeleteOutcome()>>(
			[this, request]()
			{
			return this->checkAccountDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreateAutoGroupingRuleOutcome ResourceManagerClient::createAutoGroupingRule(const CreateAutoGroupingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAutoGroupingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAutoGroupingRuleOutcome(CreateAutoGroupingRuleResult(outcome.result()));
	else
		return CreateAutoGroupingRuleOutcome(outcome.error());
}

void ResourceManagerClient::createAutoGroupingRuleAsync(const CreateAutoGroupingRuleRequest& request, const CreateAutoGroupingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAutoGroupingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreateAutoGroupingRuleOutcomeCallable ResourceManagerClient::createAutoGroupingRuleCallable(const CreateAutoGroupingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAutoGroupingRuleOutcome()>>(
			[this, request]()
			{
			return this->createAutoGroupingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreateCloudAccountOutcome ResourceManagerClient::createCloudAccount(const CreateCloudAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCloudAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCloudAccountOutcome(CreateCloudAccountResult(outcome.result()));
	else
		return CreateCloudAccountOutcome(outcome.error());
}

void ResourceManagerClient::createCloudAccountAsync(const CreateCloudAccountRequest& request, const CreateCloudAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCloudAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreateCloudAccountOutcomeCallable ResourceManagerClient::createCloudAccountCallable(const CreateCloudAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCloudAccountOutcome()>>(
			[this, request]()
			{
			return this->createCloudAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreateControlPolicyOutcome ResourceManagerClient::createControlPolicy(const CreateControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateControlPolicyOutcome(CreateControlPolicyResult(outcome.result()));
	else
		return CreateControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::createControlPolicyAsync(const CreateControlPolicyRequest& request, const CreateControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreateControlPolicyOutcomeCallable ResourceManagerClient::createControlPolicyCallable(const CreateControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->createControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreateFolderOutcome ResourceManagerClient::createFolder(const CreateFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFolderOutcome(CreateFolderResult(outcome.result()));
	else
		return CreateFolderOutcome(outcome.error());
}

void ResourceManagerClient::createFolderAsync(const CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreateFolderOutcomeCallable ResourceManagerClient::createFolderCallable(const CreateFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFolderOutcome()>>(
			[this, request]()
			{
			return this->createFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreatePolicyOutcome ResourceManagerClient::createPolicy(const CreatePolicyRequest &request) const
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

void ResourceManagerClient::createPolicyAsync(const CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreatePolicyOutcomeCallable ResourceManagerClient::createPolicyCallable(const CreatePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolicyOutcome()>>(
			[this, request]()
			{
			return this->createPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreatePolicyVersionOutcome ResourceManagerClient::createPolicyVersion(const CreatePolicyVersionRequest &request) const
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

void ResourceManagerClient::createPolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreatePolicyVersionOutcomeCallable ResourceManagerClient::createPolicyVersionCallable(const CreatePolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->createPolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreateResourceAccountOutcome ResourceManagerClient::createResourceAccount(const CreateResourceAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceAccountOutcome(CreateResourceAccountResult(outcome.result()));
	else
		return CreateResourceAccountOutcome(outcome.error());
}

void ResourceManagerClient::createResourceAccountAsync(const CreateResourceAccountRequest& request, const CreateResourceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreateResourceAccountOutcomeCallable ResourceManagerClient::createResourceAccountCallable(const CreateResourceAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceAccountOutcome()>>(
			[this, request]()
			{
			return this->createResourceAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreateResourceGroupOutcome ResourceManagerClient::createResourceGroup(const CreateResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceGroupOutcome(CreateResourceGroupResult(outcome.result()));
	else
		return CreateResourceGroupOutcome(outcome.error());
}

void ResourceManagerClient::createResourceGroupAsync(const CreateResourceGroupRequest& request, const CreateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreateResourceGroupOutcomeCallable ResourceManagerClient::createResourceGroupCallable(const CreateResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->createResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreateRoleOutcome ResourceManagerClient::createRole(const CreateRoleRequest &request) const
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

void ResourceManagerClient::createRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreateRoleOutcomeCallable ResourceManagerClient::createRoleCallable(const CreateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRoleOutcome()>>(
			[this, request]()
			{
			return this->createRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::CreateServiceLinkedRoleOutcome ResourceManagerClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(CreateServiceLinkedRoleResult(outcome.result()));
	else
		return CreateServiceLinkedRoleOutcome(outcome.error());
}

void ResourceManagerClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::CreateServiceLinkedRoleOutcomeCallable ResourceManagerClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeclineHandshakeOutcome ResourceManagerClient::declineHandshake(const DeclineHandshakeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeclineHandshakeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeclineHandshakeOutcome(DeclineHandshakeResult(outcome.result()));
	else
		return DeclineHandshakeOutcome(outcome.error());
}

void ResourceManagerClient::declineHandshakeAsync(const DeclineHandshakeRequest& request, const DeclineHandshakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, declineHandshake(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeclineHandshakeOutcomeCallable ResourceManagerClient::declineHandshakeCallable(const DeclineHandshakeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeclineHandshakeOutcome()>>(
			[this, request]()
			{
			return this->declineHandshake(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeleteAccountOutcome ResourceManagerClient::deleteAccount(const DeleteAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountOutcome(DeleteAccountResult(outcome.result()));
	else
		return DeleteAccountOutcome(outcome.error());
}

void ResourceManagerClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeleteAccountOutcomeCallable ResourceManagerClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeleteAutoGroupingRuleOutcome ResourceManagerClient::deleteAutoGroupingRule(const DeleteAutoGroupingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoGroupingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoGroupingRuleOutcome(DeleteAutoGroupingRuleResult(outcome.result()));
	else
		return DeleteAutoGroupingRuleOutcome(outcome.error());
}

void ResourceManagerClient::deleteAutoGroupingRuleAsync(const DeleteAutoGroupingRuleRequest& request, const DeleteAutoGroupingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoGroupingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeleteAutoGroupingRuleOutcomeCallable ResourceManagerClient::deleteAutoGroupingRuleCallable(const DeleteAutoGroupingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoGroupingRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoGroupingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeleteControlPolicyOutcome ResourceManagerClient::deleteControlPolicy(const DeleteControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteControlPolicyOutcome(DeleteControlPolicyResult(outcome.result()));
	else
		return DeleteControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::deleteControlPolicyAsync(const DeleteControlPolicyRequest& request, const DeleteControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeleteControlPolicyOutcomeCallable ResourceManagerClient::deleteControlPolicyCallable(const DeleteControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeleteFolderOutcome ResourceManagerClient::deleteFolder(const DeleteFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFolderOutcome(DeleteFolderResult(outcome.result()));
	else
		return DeleteFolderOutcome(outcome.error());
}

void ResourceManagerClient::deleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeleteFolderOutcomeCallable ResourceManagerClient::deleteFolderCallable(const DeleteFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFolderOutcome()>>(
			[this, request]()
			{
			return this->deleteFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeletePolicyOutcome ResourceManagerClient::deletePolicy(const DeletePolicyRequest &request) const
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

void ResourceManagerClient::deletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeletePolicyOutcomeCallable ResourceManagerClient::deletePolicyCallable(const DeletePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePolicyOutcome()>>(
			[this, request]()
			{
			return this->deletePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeletePolicyVersionOutcome ResourceManagerClient::deletePolicyVersion(const DeletePolicyVersionRequest &request) const
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

void ResourceManagerClient::deletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeletePolicyVersionOutcomeCallable ResourceManagerClient::deletePolicyVersionCallable(const DeletePolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->deletePolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeleteResourceGroupOutcome ResourceManagerClient::deleteResourceGroup(const DeleteResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceGroupOutcome(DeleteResourceGroupResult(outcome.result()));
	else
		return DeleteResourceGroupOutcome(outcome.error());
}

void ResourceManagerClient::deleteResourceGroupAsync(const DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeleteResourceGroupOutcomeCallable ResourceManagerClient::deleteResourceGroupCallable(const DeleteResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeleteRoleOutcome ResourceManagerClient::deleteRole(const DeleteRoleRequest &request) const
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

void ResourceManagerClient::deleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeleteRoleOutcomeCallable ResourceManagerClient::deleteRoleCallable(const DeleteRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRoleOutcome()>>(
			[this, request]()
			{
			return this->deleteRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeleteServiceLinkedRoleOutcome ResourceManagerClient::deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceLinkedRoleOutcome(DeleteServiceLinkedRoleResult(outcome.result()));
	else
		return DeleteServiceLinkedRoleOutcome(outcome.error());
}

void ResourceManagerClient::deleteServiceLinkedRoleAsync(const DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeleteServiceLinkedRoleOutcomeCallable ResourceManagerClient::deleteServiceLinkedRoleCallable(const DeleteServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DeregisterDelegatedAdministratorOutcome ResourceManagerClient::deregisterDelegatedAdministrator(const DeregisterDelegatedAdministratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeregisterDelegatedAdministratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeregisterDelegatedAdministratorOutcome(DeregisterDelegatedAdministratorResult(outcome.result()));
	else
		return DeregisterDelegatedAdministratorOutcome(outcome.error());
}

void ResourceManagerClient::deregisterDelegatedAdministratorAsync(const DeregisterDelegatedAdministratorRequest& request, const DeregisterDelegatedAdministratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deregisterDelegatedAdministrator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DeregisterDelegatedAdministratorOutcomeCallable ResourceManagerClient::deregisterDelegatedAdministratorCallable(const DeregisterDelegatedAdministratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeregisterDelegatedAdministratorOutcome()>>(
			[this, request]()
			{
			return this->deregisterDelegatedAdministrator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DestroyResourceDirectoryOutcome ResourceManagerClient::destroyResourceDirectory(const DestroyResourceDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DestroyResourceDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DestroyResourceDirectoryOutcome(DestroyResourceDirectoryResult(outcome.result()));
	else
		return DestroyResourceDirectoryOutcome(outcome.error());
}

void ResourceManagerClient::destroyResourceDirectoryAsync(const DestroyResourceDirectoryRequest& request, const DestroyResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, destroyResourceDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DestroyResourceDirectoryOutcomeCallable ResourceManagerClient::destroyResourceDirectoryCallable(const DestroyResourceDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DestroyResourceDirectoryOutcome()>>(
			[this, request]()
			{
			return this->destroyResourceDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DetachControlPolicyOutcome ResourceManagerClient::detachControlPolicy(const DetachControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachControlPolicyOutcome(DetachControlPolicyResult(outcome.result()));
	else
		return DetachControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::detachControlPolicyAsync(const DetachControlPolicyRequest& request, const DetachControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DetachControlPolicyOutcomeCallable ResourceManagerClient::detachControlPolicyCallable(const DetachControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->detachControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DetachPolicyOutcome ResourceManagerClient::detachPolicy(const DetachPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachPolicyOutcome(DetachPolicyResult(outcome.result()));
	else
		return DetachPolicyOutcome(outcome.error());
}

void ResourceManagerClient::detachPolicyAsync(const DetachPolicyRequest& request, const DetachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DetachPolicyOutcomeCallable ResourceManagerClient::detachPolicyCallable(const DetachPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachPolicyOutcome()>>(
			[this, request]()
			{
			return this->detachPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DisableAssociatedTransferOutcome ResourceManagerClient::disableAssociatedTransfer(const DisableAssociatedTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableAssociatedTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableAssociatedTransferOutcome(DisableAssociatedTransferResult(outcome.result()));
	else
		return DisableAssociatedTransferOutcome(outcome.error());
}

void ResourceManagerClient::disableAssociatedTransferAsync(const DisableAssociatedTransferRequest& request, const DisableAssociatedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableAssociatedTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DisableAssociatedTransferOutcomeCallable ResourceManagerClient::disableAssociatedTransferCallable(const DisableAssociatedTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableAssociatedTransferOutcome()>>(
			[this, request]()
			{
			return this->disableAssociatedTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DisableAutoGroupingOutcome ResourceManagerClient::disableAutoGrouping(const DisableAutoGroupingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableAutoGroupingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableAutoGroupingOutcome(DisableAutoGroupingResult(outcome.result()));
	else
		return DisableAutoGroupingOutcome(outcome.error());
}

void ResourceManagerClient::disableAutoGroupingAsync(const DisableAutoGroupingRequest& request, const DisableAutoGroupingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableAutoGrouping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DisableAutoGroupingOutcomeCallable ResourceManagerClient::disableAutoGroupingCallable(const DisableAutoGroupingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableAutoGroupingOutcome()>>(
			[this, request]()
			{
			return this->disableAutoGrouping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::DisableControlPolicyOutcome ResourceManagerClient::disableControlPolicy(const DisableControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableControlPolicyOutcome(DisableControlPolicyResult(outcome.result()));
	else
		return DisableControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::disableControlPolicyAsync(const DisableControlPolicyRequest& request, const DisableControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::DisableControlPolicyOutcomeCallable ResourceManagerClient::disableControlPolicyCallable(const DisableControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->disableControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::EnableAssociatedTransferOutcome ResourceManagerClient::enableAssociatedTransfer(const EnableAssociatedTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAssociatedTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAssociatedTransferOutcome(EnableAssociatedTransferResult(outcome.result()));
	else
		return EnableAssociatedTransferOutcome(outcome.error());
}

void ResourceManagerClient::enableAssociatedTransferAsync(const EnableAssociatedTransferRequest& request, const EnableAssociatedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAssociatedTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::EnableAssociatedTransferOutcomeCallable ResourceManagerClient::enableAssociatedTransferCallable(const EnableAssociatedTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAssociatedTransferOutcome()>>(
			[this, request]()
			{
			return this->enableAssociatedTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::EnableAutoGroupingOutcome ResourceManagerClient::enableAutoGrouping(const EnableAutoGroupingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAutoGroupingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAutoGroupingOutcome(EnableAutoGroupingResult(outcome.result()));
	else
		return EnableAutoGroupingOutcome(outcome.error());
}

void ResourceManagerClient::enableAutoGroupingAsync(const EnableAutoGroupingRequest& request, const EnableAutoGroupingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAutoGrouping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::EnableAutoGroupingOutcomeCallable ResourceManagerClient::enableAutoGroupingCallable(const EnableAutoGroupingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAutoGroupingOutcome()>>(
			[this, request]()
			{
			return this->enableAutoGrouping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::EnableControlPolicyOutcome ResourceManagerClient::enableControlPolicy(const EnableControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableControlPolicyOutcome(EnableControlPolicyResult(outcome.result()));
	else
		return EnableControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::enableControlPolicyAsync(const EnableControlPolicyRequest& request, const EnableControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::EnableControlPolicyOutcomeCallable ResourceManagerClient::enableControlPolicyCallable(const EnableControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->enableControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::EnableResourceDirectoryOutcome ResourceManagerClient::enableResourceDirectory(const EnableResourceDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableResourceDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableResourceDirectoryOutcome(EnableResourceDirectoryResult(outcome.result()));
	else
		return EnableResourceDirectoryOutcome(outcome.error());
}

void ResourceManagerClient::enableResourceDirectoryAsync(const EnableResourceDirectoryRequest& request, const EnableResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableResourceDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::EnableResourceDirectoryOutcomeCallable ResourceManagerClient::enableResourceDirectoryCallable(const EnableResourceDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableResourceDirectoryOutcome()>>(
			[this, request]()
			{
			return this->enableResourceDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetAccountOutcome ResourceManagerClient::getAccount(const GetAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountOutcome(GetAccountResult(outcome.result()));
	else
		return GetAccountOutcome(outcome.error());
}

void ResourceManagerClient::getAccountAsync(const GetAccountRequest& request, const GetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetAccountOutcomeCallable ResourceManagerClient::getAccountCallable(const GetAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountOutcome()>>(
			[this, request]()
			{
			return this->getAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetAccountDeletionCheckResultOutcome ResourceManagerClient::getAccountDeletionCheckResult(const GetAccountDeletionCheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountDeletionCheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountDeletionCheckResultOutcome(GetAccountDeletionCheckResultResult(outcome.result()));
	else
		return GetAccountDeletionCheckResultOutcome(outcome.error());
}

void ResourceManagerClient::getAccountDeletionCheckResultAsync(const GetAccountDeletionCheckResultRequest& request, const GetAccountDeletionCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountDeletionCheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetAccountDeletionCheckResultOutcomeCallable ResourceManagerClient::getAccountDeletionCheckResultCallable(const GetAccountDeletionCheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountDeletionCheckResultOutcome()>>(
			[this, request]()
			{
			return this->getAccountDeletionCheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetAccountDeletionStatusOutcome ResourceManagerClient::getAccountDeletionStatus(const GetAccountDeletionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountDeletionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountDeletionStatusOutcome(GetAccountDeletionStatusResult(outcome.result()));
	else
		return GetAccountDeletionStatusOutcome(outcome.error());
}

void ResourceManagerClient::getAccountDeletionStatusAsync(const GetAccountDeletionStatusRequest& request, const GetAccountDeletionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountDeletionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetAccountDeletionStatusOutcomeCallable ResourceManagerClient::getAccountDeletionStatusCallable(const GetAccountDeletionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountDeletionStatusOutcome()>>(
			[this, request]()
			{
			return this->getAccountDeletionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetAutoGroupingRuleOutcome ResourceManagerClient::getAutoGroupingRule(const GetAutoGroupingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAutoGroupingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAutoGroupingRuleOutcome(GetAutoGroupingRuleResult(outcome.result()));
	else
		return GetAutoGroupingRuleOutcome(outcome.error());
}

void ResourceManagerClient::getAutoGroupingRuleAsync(const GetAutoGroupingRuleRequest& request, const GetAutoGroupingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAutoGroupingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetAutoGroupingRuleOutcomeCallable ResourceManagerClient::getAutoGroupingRuleCallable(const GetAutoGroupingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAutoGroupingRuleOutcome()>>(
			[this, request]()
			{
			return this->getAutoGroupingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetAutoGroupingStatusOutcome ResourceManagerClient::getAutoGroupingStatus(const GetAutoGroupingStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAutoGroupingStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAutoGroupingStatusOutcome(GetAutoGroupingStatusResult(outcome.result()));
	else
		return GetAutoGroupingStatusOutcome(outcome.error());
}

void ResourceManagerClient::getAutoGroupingStatusAsync(const GetAutoGroupingStatusRequest& request, const GetAutoGroupingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAutoGroupingStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetAutoGroupingStatusOutcomeCallable ResourceManagerClient::getAutoGroupingStatusCallable(const GetAutoGroupingStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAutoGroupingStatusOutcome()>>(
			[this, request]()
			{
			return this->getAutoGroupingStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetControlPolicyOutcome ResourceManagerClient::getControlPolicy(const GetControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetControlPolicyOutcome(GetControlPolicyResult(outcome.result()));
	else
		return GetControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::getControlPolicyAsync(const GetControlPolicyRequest& request, const GetControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetControlPolicyOutcomeCallable ResourceManagerClient::getControlPolicyCallable(const GetControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->getControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetControlPolicyEnablementStatusOutcome ResourceManagerClient::getControlPolicyEnablementStatus(const GetControlPolicyEnablementStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetControlPolicyEnablementStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetControlPolicyEnablementStatusOutcome(GetControlPolicyEnablementStatusResult(outcome.result()));
	else
		return GetControlPolicyEnablementStatusOutcome(outcome.error());
}

void ResourceManagerClient::getControlPolicyEnablementStatusAsync(const GetControlPolicyEnablementStatusRequest& request, const GetControlPolicyEnablementStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getControlPolicyEnablementStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetControlPolicyEnablementStatusOutcomeCallable ResourceManagerClient::getControlPolicyEnablementStatusCallable(const GetControlPolicyEnablementStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetControlPolicyEnablementStatusOutcome()>>(
			[this, request]()
			{
			return this->getControlPolicyEnablementStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetFolderOutcome ResourceManagerClient::getFolder(const GetFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFolderOutcome(GetFolderResult(outcome.result()));
	else
		return GetFolderOutcome(outcome.error());
}

void ResourceManagerClient::getFolderAsync(const GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetFolderOutcomeCallable ResourceManagerClient::getFolderCallable(const GetFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFolderOutcome()>>(
			[this, request]()
			{
			return this->getFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetHandshakeOutcome ResourceManagerClient::getHandshake(const GetHandshakeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHandshakeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHandshakeOutcome(GetHandshakeResult(outcome.result()));
	else
		return GetHandshakeOutcome(outcome.error());
}

void ResourceManagerClient::getHandshakeAsync(const GetHandshakeRequest& request, const GetHandshakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHandshake(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetHandshakeOutcomeCallable ResourceManagerClient::getHandshakeCallable(const GetHandshakeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHandshakeOutcome()>>(
			[this, request]()
			{
			return this->getHandshake(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetPayerForAccountOutcome ResourceManagerClient::getPayerForAccount(const GetPayerForAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPayerForAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPayerForAccountOutcome(GetPayerForAccountResult(outcome.result()));
	else
		return GetPayerForAccountOutcome(outcome.error());
}

void ResourceManagerClient::getPayerForAccountAsync(const GetPayerForAccountRequest& request, const GetPayerForAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPayerForAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetPayerForAccountOutcomeCallable ResourceManagerClient::getPayerForAccountCallable(const GetPayerForAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPayerForAccountOutcome()>>(
			[this, request]()
			{
			return this->getPayerForAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetPolicyOutcome ResourceManagerClient::getPolicy(const GetPolicyRequest &request) const
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

void ResourceManagerClient::getPolicyAsync(const GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetPolicyOutcomeCallable ResourceManagerClient::getPolicyCallable(const GetPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolicyOutcome()>>(
			[this, request]()
			{
			return this->getPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetPolicyVersionOutcome ResourceManagerClient::getPolicyVersion(const GetPolicyVersionRequest &request) const
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

void ResourceManagerClient::getPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetPolicyVersionOutcomeCallable ResourceManagerClient::getPolicyVersionCallable(const GetPolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->getPolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetResourceDirectoryOutcome ResourceManagerClient::getResourceDirectory(const GetResourceDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceDirectoryOutcome(GetResourceDirectoryResult(outcome.result()));
	else
		return GetResourceDirectoryOutcome(outcome.error());
}

void ResourceManagerClient::getResourceDirectoryAsync(const GetResourceDirectoryRequest& request, const GetResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetResourceDirectoryOutcomeCallable ResourceManagerClient::getResourceDirectoryCallable(const GetResourceDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceDirectoryOutcome()>>(
			[this, request]()
			{
			return this->getResourceDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetResourceGroupOutcome ResourceManagerClient::getResourceGroup(const GetResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceGroupOutcome(GetResourceGroupResult(outcome.result()));
	else
		return GetResourceGroupOutcome(outcome.error());
}

void ResourceManagerClient::getResourceGroupAsync(const GetResourceGroupRequest& request, const GetResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetResourceGroupOutcomeCallable ResourceManagerClient::getResourceGroupCallable(const GetResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->getResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetRoleOutcome ResourceManagerClient::getRole(const GetRoleRequest &request) const
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

void ResourceManagerClient::getRoleAsync(const GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetRoleOutcomeCallable ResourceManagerClient::getRoleCallable(const GetRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRoleOutcome()>>(
			[this, request]()
			{
			return this->getRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::GetServiceLinkedRoleDeletionStatusOutcome ResourceManagerClient::getServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceLinkedRoleDeletionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceLinkedRoleDeletionStatusOutcome(GetServiceLinkedRoleDeletionStatusResult(outcome.result()));
	else
		return GetServiceLinkedRoleDeletionStatusOutcome(outcome.error());
}

void ResourceManagerClient::getServiceLinkedRoleDeletionStatusAsync(const GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceLinkedRoleDeletionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::GetServiceLinkedRoleDeletionStatusOutcomeCallable ResourceManagerClient::getServiceLinkedRoleDeletionStatusCallable(const GetServiceLinkedRoleDeletionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceLinkedRoleDeletionStatusOutcome()>>(
			[this, request]()
			{
			return this->getServiceLinkedRoleDeletionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::InitResourceDirectoryOutcome ResourceManagerClient::initResourceDirectory(const InitResourceDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitResourceDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitResourceDirectoryOutcome(InitResourceDirectoryResult(outcome.result()));
	else
		return InitResourceDirectoryOutcome(outcome.error());
}

void ResourceManagerClient::initResourceDirectoryAsync(const InitResourceDirectoryRequest& request, const InitResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initResourceDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::InitResourceDirectoryOutcomeCallable ResourceManagerClient::initResourceDirectoryCallable(const InitResourceDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitResourceDirectoryOutcome()>>(
			[this, request]()
			{
			return this->initResourceDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::InviteAccountToResourceDirectoryOutcome ResourceManagerClient::inviteAccountToResourceDirectory(const InviteAccountToResourceDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InviteAccountToResourceDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InviteAccountToResourceDirectoryOutcome(InviteAccountToResourceDirectoryResult(outcome.result()));
	else
		return InviteAccountToResourceDirectoryOutcome(outcome.error());
}

void ResourceManagerClient::inviteAccountToResourceDirectoryAsync(const InviteAccountToResourceDirectoryRequest& request, const InviteAccountToResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, inviteAccountToResourceDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::InviteAccountToResourceDirectoryOutcomeCallable ResourceManagerClient::inviteAccountToResourceDirectoryCallable(const InviteAccountToResourceDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InviteAccountToResourceDirectoryOutcome()>>(
			[this, request]()
			{
			return this->inviteAccountToResourceDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListAccountsOutcome ResourceManagerClient::listAccounts(const ListAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccountsOutcome(ListAccountsResult(outcome.result()));
	else
		return ListAccountsOutcome(outcome.error());
}

void ResourceManagerClient::listAccountsAsync(const ListAccountsRequest& request, const ListAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListAccountsOutcomeCallable ResourceManagerClient::listAccountsCallable(const ListAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccountsOutcome()>>(
			[this, request]()
			{
			return this->listAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListAccountsForParentOutcome ResourceManagerClient::listAccountsForParent(const ListAccountsForParentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccountsForParentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccountsForParentOutcome(ListAccountsForParentResult(outcome.result()));
	else
		return ListAccountsForParentOutcome(outcome.error());
}

void ResourceManagerClient::listAccountsForParentAsync(const ListAccountsForParentRequest& request, const ListAccountsForParentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccountsForParent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListAccountsForParentOutcomeCallable ResourceManagerClient::listAccountsForParentCallable(const ListAccountsForParentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccountsForParentOutcome()>>(
			[this, request]()
			{
			return this->listAccountsForParent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListAncestorsOutcome ResourceManagerClient::listAncestors(const ListAncestorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAncestorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAncestorsOutcome(ListAncestorsResult(outcome.result()));
	else
		return ListAncestorsOutcome(outcome.error());
}

void ResourceManagerClient::listAncestorsAsync(const ListAncestorsRequest& request, const ListAncestorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAncestors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListAncestorsOutcomeCallable ResourceManagerClient::listAncestorsCallable(const ListAncestorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAncestorsOutcome()>>(
			[this, request]()
			{
			return this->listAncestors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListAssociatedTransferSettingOutcome ResourceManagerClient::listAssociatedTransferSetting(const ListAssociatedTransferSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAssociatedTransferSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAssociatedTransferSettingOutcome(ListAssociatedTransferSettingResult(outcome.result()));
	else
		return ListAssociatedTransferSettingOutcome(outcome.error());
}

void ResourceManagerClient::listAssociatedTransferSettingAsync(const ListAssociatedTransferSettingRequest& request, const ListAssociatedTransferSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAssociatedTransferSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListAssociatedTransferSettingOutcomeCallable ResourceManagerClient::listAssociatedTransferSettingCallable(const ListAssociatedTransferSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAssociatedTransferSettingOutcome()>>(
			[this, request]()
			{
			return this->listAssociatedTransferSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListAutoGroupingRulesOutcome ResourceManagerClient::listAutoGroupingRules(const ListAutoGroupingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAutoGroupingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAutoGroupingRulesOutcome(ListAutoGroupingRulesResult(outcome.result()));
	else
		return ListAutoGroupingRulesOutcome(outcome.error());
}

void ResourceManagerClient::listAutoGroupingRulesAsync(const ListAutoGroupingRulesRequest& request, const ListAutoGroupingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAutoGroupingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListAutoGroupingRulesOutcomeCallable ResourceManagerClient::listAutoGroupingRulesCallable(const ListAutoGroupingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAutoGroupingRulesOutcome()>>(
			[this, request]()
			{
			return this->listAutoGroupingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListControlPoliciesOutcome ResourceManagerClient::listControlPolicies(const ListControlPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListControlPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListControlPoliciesOutcome(ListControlPoliciesResult(outcome.result()));
	else
		return ListControlPoliciesOutcome(outcome.error());
}

void ResourceManagerClient::listControlPoliciesAsync(const ListControlPoliciesRequest& request, const ListControlPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listControlPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListControlPoliciesOutcomeCallable ResourceManagerClient::listControlPoliciesCallable(const ListControlPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListControlPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listControlPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListControlPolicyAttachmentsForTargetOutcome ResourceManagerClient::listControlPolicyAttachmentsForTarget(const ListControlPolicyAttachmentsForTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListControlPolicyAttachmentsForTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListControlPolicyAttachmentsForTargetOutcome(ListControlPolicyAttachmentsForTargetResult(outcome.result()));
	else
		return ListControlPolicyAttachmentsForTargetOutcome(outcome.error());
}

void ResourceManagerClient::listControlPolicyAttachmentsForTargetAsync(const ListControlPolicyAttachmentsForTargetRequest& request, const ListControlPolicyAttachmentsForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listControlPolicyAttachmentsForTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListControlPolicyAttachmentsForTargetOutcomeCallable ResourceManagerClient::listControlPolicyAttachmentsForTargetCallable(const ListControlPolicyAttachmentsForTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListControlPolicyAttachmentsForTargetOutcome()>>(
			[this, request]()
			{
			return this->listControlPolicyAttachmentsForTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListDelegatedAdministratorsOutcome ResourceManagerClient::listDelegatedAdministrators(const ListDelegatedAdministratorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDelegatedAdministratorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDelegatedAdministratorsOutcome(ListDelegatedAdministratorsResult(outcome.result()));
	else
		return ListDelegatedAdministratorsOutcome(outcome.error());
}

void ResourceManagerClient::listDelegatedAdministratorsAsync(const ListDelegatedAdministratorsRequest& request, const ListDelegatedAdministratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDelegatedAdministrators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListDelegatedAdministratorsOutcomeCallable ResourceManagerClient::listDelegatedAdministratorsCallable(const ListDelegatedAdministratorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDelegatedAdministratorsOutcome()>>(
			[this, request]()
			{
			return this->listDelegatedAdministrators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListDelegatedServicesForAccountOutcome ResourceManagerClient::listDelegatedServicesForAccount(const ListDelegatedServicesForAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDelegatedServicesForAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDelegatedServicesForAccountOutcome(ListDelegatedServicesForAccountResult(outcome.result()));
	else
		return ListDelegatedServicesForAccountOutcome(outcome.error());
}

void ResourceManagerClient::listDelegatedServicesForAccountAsync(const ListDelegatedServicesForAccountRequest& request, const ListDelegatedServicesForAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDelegatedServicesForAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListDelegatedServicesForAccountOutcomeCallable ResourceManagerClient::listDelegatedServicesForAccountCallable(const ListDelegatedServicesForAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDelegatedServicesForAccountOutcome()>>(
			[this, request]()
			{
			return this->listDelegatedServicesForAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListFoldersForParentOutcome ResourceManagerClient::listFoldersForParent(const ListFoldersForParentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFoldersForParentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFoldersForParentOutcome(ListFoldersForParentResult(outcome.result()));
	else
		return ListFoldersForParentOutcome(outcome.error());
}

void ResourceManagerClient::listFoldersForParentAsync(const ListFoldersForParentRequest& request, const ListFoldersForParentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFoldersForParent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListFoldersForParentOutcomeCallable ResourceManagerClient::listFoldersForParentCallable(const ListFoldersForParentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFoldersForParentOutcome()>>(
			[this, request]()
			{
			return this->listFoldersForParent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListHandshakesForAccountOutcome ResourceManagerClient::listHandshakesForAccount(const ListHandshakesForAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHandshakesForAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHandshakesForAccountOutcome(ListHandshakesForAccountResult(outcome.result()));
	else
		return ListHandshakesForAccountOutcome(outcome.error());
}

void ResourceManagerClient::listHandshakesForAccountAsync(const ListHandshakesForAccountRequest& request, const ListHandshakesForAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHandshakesForAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListHandshakesForAccountOutcomeCallable ResourceManagerClient::listHandshakesForAccountCallable(const ListHandshakesForAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHandshakesForAccountOutcome()>>(
			[this, request]()
			{
			return this->listHandshakesForAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListHandshakesForResourceDirectoryOutcome ResourceManagerClient::listHandshakesForResourceDirectory(const ListHandshakesForResourceDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHandshakesForResourceDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHandshakesForResourceDirectoryOutcome(ListHandshakesForResourceDirectoryResult(outcome.result()));
	else
		return ListHandshakesForResourceDirectoryOutcome(outcome.error());
}

void ResourceManagerClient::listHandshakesForResourceDirectoryAsync(const ListHandshakesForResourceDirectoryRequest& request, const ListHandshakesForResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHandshakesForResourceDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListHandshakesForResourceDirectoryOutcomeCallable ResourceManagerClient::listHandshakesForResourceDirectoryCallable(const ListHandshakesForResourceDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHandshakesForResourceDirectoryOutcome()>>(
			[this, request]()
			{
			return this->listHandshakesForResourceDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListPoliciesOutcome ResourceManagerClient::listPolicies(const ListPoliciesRequest &request) const
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

void ResourceManagerClient::listPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListPoliciesOutcomeCallable ResourceManagerClient::listPoliciesCallable(const ListPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListPolicyAttachmentsOutcome ResourceManagerClient::listPolicyAttachments(const ListPolicyAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPolicyAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPolicyAttachmentsOutcome(ListPolicyAttachmentsResult(outcome.result()));
	else
		return ListPolicyAttachmentsOutcome(outcome.error());
}

void ResourceManagerClient::listPolicyAttachmentsAsync(const ListPolicyAttachmentsRequest& request, const ListPolicyAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicyAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListPolicyAttachmentsOutcomeCallable ResourceManagerClient::listPolicyAttachmentsCallable(const ListPolicyAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPolicyAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->listPolicyAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListPolicyVersionsOutcome ResourceManagerClient::listPolicyVersions(const ListPolicyVersionsRequest &request) const
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

void ResourceManagerClient::listPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicyVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListPolicyVersionsOutcomeCallable ResourceManagerClient::listPolicyVersionsCallable(const ListPolicyVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPolicyVersionsOutcome()>>(
			[this, request]()
			{
			return this->listPolicyVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListResourceGroupsOutcome ResourceManagerClient::listResourceGroups(const ListResourceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceGroupsOutcome(ListResourceGroupsResult(outcome.result()));
	else
		return ListResourceGroupsOutcome(outcome.error());
}

void ResourceManagerClient::listResourceGroupsAsync(const ListResourceGroupsRequest& request, const ListResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListResourceGroupsOutcomeCallable ResourceManagerClient::listResourceGroupsCallable(const ListResourceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listResourceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListResourcesOutcome ResourceManagerClient::listResources(const ListResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourcesOutcome(ListResourcesResult(outcome.result()));
	else
		return ListResourcesOutcome(outcome.error());
}

void ResourceManagerClient::listResourcesAsync(const ListResourcesRequest& request, const ListResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListResourcesOutcomeCallable ResourceManagerClient::listResourcesCallable(const ListResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourcesOutcome()>>(
			[this, request]()
			{
			return this->listResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListRolesOutcome ResourceManagerClient::listRoles(const ListRolesRequest &request) const
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

void ResourceManagerClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListRolesOutcomeCallable ResourceManagerClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListTagKeysOutcome ResourceManagerClient::listTagKeys(const ListTagKeysRequest &request) const
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

void ResourceManagerClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListTagKeysOutcomeCallable ResourceManagerClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListTagResourcesOutcome ResourceManagerClient::listTagResources(const ListTagResourcesRequest &request) const
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

void ResourceManagerClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListTagResourcesOutcomeCallable ResourceManagerClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListTagValuesOutcome ResourceManagerClient::listTagValues(const ListTagValuesRequest &request) const
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

void ResourceManagerClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListTagValuesOutcomeCallable ResourceManagerClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListTargetAttachmentsForControlPolicyOutcome ResourceManagerClient::listTargetAttachmentsForControlPolicy(const ListTargetAttachmentsForControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTargetAttachmentsForControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTargetAttachmentsForControlPolicyOutcome(ListTargetAttachmentsForControlPolicyResult(outcome.result()));
	else
		return ListTargetAttachmentsForControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::listTargetAttachmentsForControlPolicyAsync(const ListTargetAttachmentsForControlPolicyRequest& request, const ListTargetAttachmentsForControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTargetAttachmentsForControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListTargetAttachmentsForControlPolicyOutcomeCallable ResourceManagerClient::listTargetAttachmentsForControlPolicyCallable(const ListTargetAttachmentsForControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTargetAttachmentsForControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->listTargetAttachmentsForControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ListTrustedServiceStatusOutcome ResourceManagerClient::listTrustedServiceStatus(const ListTrustedServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTrustedServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTrustedServiceStatusOutcome(ListTrustedServiceStatusResult(outcome.result()));
	else
		return ListTrustedServiceStatusOutcome(outcome.error());
}

void ResourceManagerClient::listTrustedServiceStatusAsync(const ListTrustedServiceStatusRequest& request, const ListTrustedServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTrustedServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ListTrustedServiceStatusOutcomeCallable ResourceManagerClient::listTrustedServiceStatusCallable(const ListTrustedServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTrustedServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->listTrustedServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::MoveAccountOutcome ResourceManagerClient::moveAccount(const MoveAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveAccountOutcome(MoveAccountResult(outcome.result()));
	else
		return MoveAccountOutcome(outcome.error());
}

void ResourceManagerClient::moveAccountAsync(const MoveAccountRequest& request, const MoveAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::MoveAccountOutcomeCallable ResourceManagerClient::moveAccountCallable(const MoveAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveAccountOutcome()>>(
			[this, request]()
			{
			return this->moveAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::MoveResourcesOutcome ResourceManagerClient::moveResources(const MoveResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveResourcesOutcome(MoveResourcesResult(outcome.result()));
	else
		return MoveResourcesOutcome(outcome.error());
}

void ResourceManagerClient::moveResourcesAsync(const MoveResourcesRequest& request, const MoveResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::MoveResourcesOutcomeCallable ResourceManagerClient::moveResourcesCallable(const MoveResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourcesOutcome()>>(
			[this, request]()
			{
			return this->moveResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::PromoteResourceAccountOutcome ResourceManagerClient::promoteResourceAccount(const PromoteResourceAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PromoteResourceAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PromoteResourceAccountOutcome(PromoteResourceAccountResult(outcome.result()));
	else
		return PromoteResourceAccountOutcome(outcome.error());
}

void ResourceManagerClient::promoteResourceAccountAsync(const PromoteResourceAccountRequest& request, const PromoteResourceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, promoteResourceAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::PromoteResourceAccountOutcomeCallable ResourceManagerClient::promoteResourceAccountCallable(const PromoteResourceAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PromoteResourceAccountOutcome()>>(
			[this, request]()
			{
			return this->promoteResourceAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::RegisterDelegatedAdministratorOutcome ResourceManagerClient::registerDelegatedAdministrator(const RegisterDelegatedAdministratorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterDelegatedAdministratorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterDelegatedAdministratorOutcome(RegisterDelegatedAdministratorResult(outcome.result()));
	else
		return RegisterDelegatedAdministratorOutcome(outcome.error());
}

void ResourceManagerClient::registerDelegatedAdministratorAsync(const RegisterDelegatedAdministratorRequest& request, const RegisterDelegatedAdministratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerDelegatedAdministrator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::RegisterDelegatedAdministratorOutcomeCallable ResourceManagerClient::registerDelegatedAdministratorCallable(const RegisterDelegatedAdministratorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterDelegatedAdministratorOutcome()>>(
			[this, request]()
			{
			return this->registerDelegatedAdministrator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::RemoveCloudAccountOutcome ResourceManagerClient::removeCloudAccount(const RemoveCloudAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveCloudAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveCloudAccountOutcome(RemoveCloudAccountResult(outcome.result()));
	else
		return RemoveCloudAccountOutcome(outcome.error());
}

void ResourceManagerClient::removeCloudAccountAsync(const RemoveCloudAccountRequest& request, const RemoveCloudAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeCloudAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::RemoveCloudAccountOutcomeCallable ResourceManagerClient::removeCloudAccountCallable(const RemoveCloudAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveCloudAccountOutcome()>>(
			[this, request]()
			{
			return this->removeCloudAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ResendCreateCloudAccountEmailOutcome ResourceManagerClient::resendCreateCloudAccountEmail(const ResendCreateCloudAccountEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResendCreateCloudAccountEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResendCreateCloudAccountEmailOutcome(ResendCreateCloudAccountEmailResult(outcome.result()));
	else
		return ResendCreateCloudAccountEmailOutcome(outcome.error());
}

void ResourceManagerClient::resendCreateCloudAccountEmailAsync(const ResendCreateCloudAccountEmailRequest& request, const ResendCreateCloudAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resendCreateCloudAccountEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ResendCreateCloudAccountEmailOutcomeCallable ResourceManagerClient::resendCreateCloudAccountEmailCallable(const ResendCreateCloudAccountEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResendCreateCloudAccountEmailOutcome()>>(
			[this, request]()
			{
			return this->resendCreateCloudAccountEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::ResendPromoteResourceAccountEmailOutcome ResourceManagerClient::resendPromoteResourceAccountEmail(const ResendPromoteResourceAccountEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResendPromoteResourceAccountEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResendPromoteResourceAccountEmailOutcome(ResendPromoteResourceAccountEmailResult(outcome.result()));
	else
		return ResendPromoteResourceAccountEmailOutcome(outcome.error());
}

void ResourceManagerClient::resendPromoteResourceAccountEmailAsync(const ResendPromoteResourceAccountEmailRequest& request, const ResendPromoteResourceAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resendPromoteResourceAccountEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::ResendPromoteResourceAccountEmailOutcomeCallable ResourceManagerClient::resendPromoteResourceAccountEmailCallable(const ResendPromoteResourceAccountEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResendPromoteResourceAccountEmailOutcome()>>(
			[this, request]()
			{
			return this->resendPromoteResourceAccountEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::RetryChangeAccountEmailOutcome ResourceManagerClient::retryChangeAccountEmail(const RetryChangeAccountEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryChangeAccountEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryChangeAccountEmailOutcome(RetryChangeAccountEmailResult(outcome.result()));
	else
		return RetryChangeAccountEmailOutcome(outcome.error());
}

void ResourceManagerClient::retryChangeAccountEmailAsync(const RetryChangeAccountEmailRequest& request, const RetryChangeAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryChangeAccountEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::RetryChangeAccountEmailOutcomeCallable ResourceManagerClient::retryChangeAccountEmailCallable(const RetryChangeAccountEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryChangeAccountEmailOutcome()>>(
			[this, request]()
			{
			return this->retryChangeAccountEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::SendVerificationCodeForBindSecureMobilePhoneOutcome ResourceManagerClient::sendVerificationCodeForBindSecureMobilePhone(const SendVerificationCodeForBindSecureMobilePhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendVerificationCodeForBindSecureMobilePhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendVerificationCodeForBindSecureMobilePhoneOutcome(SendVerificationCodeForBindSecureMobilePhoneResult(outcome.result()));
	else
		return SendVerificationCodeForBindSecureMobilePhoneOutcome(outcome.error());
}

void ResourceManagerClient::sendVerificationCodeForBindSecureMobilePhoneAsync(const SendVerificationCodeForBindSecureMobilePhoneRequest& request, const SendVerificationCodeForBindSecureMobilePhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendVerificationCodeForBindSecureMobilePhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::SendVerificationCodeForBindSecureMobilePhoneOutcomeCallable ResourceManagerClient::sendVerificationCodeForBindSecureMobilePhoneCallable(const SendVerificationCodeForBindSecureMobilePhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendVerificationCodeForBindSecureMobilePhoneOutcome()>>(
			[this, request]()
			{
			return this->sendVerificationCodeForBindSecureMobilePhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::SendVerificationCodeForEnableRDOutcome ResourceManagerClient::sendVerificationCodeForEnableRD(const SendVerificationCodeForEnableRDRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendVerificationCodeForEnableRDOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendVerificationCodeForEnableRDOutcome(SendVerificationCodeForEnableRDResult(outcome.result()));
	else
		return SendVerificationCodeForEnableRDOutcome(outcome.error());
}

void ResourceManagerClient::sendVerificationCodeForEnableRDAsync(const SendVerificationCodeForEnableRDRequest& request, const SendVerificationCodeForEnableRDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendVerificationCodeForEnableRD(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::SendVerificationCodeForEnableRDOutcomeCallable ResourceManagerClient::sendVerificationCodeForEnableRDCallable(const SendVerificationCodeForEnableRDRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendVerificationCodeForEnableRDOutcome()>>(
			[this, request]()
			{
			return this->sendVerificationCodeForEnableRD(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::SetDefaultPolicyVersionOutcome ResourceManagerClient::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request) const
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

void ResourceManagerClient::setDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultPolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::SetDefaultPolicyVersionOutcomeCallable ResourceManagerClient::setDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultPolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->setDefaultPolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::SetMemberDeletionPermissionOutcome ResourceManagerClient::setMemberDeletionPermission(const SetMemberDeletionPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetMemberDeletionPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetMemberDeletionPermissionOutcome(SetMemberDeletionPermissionResult(outcome.result()));
	else
		return SetMemberDeletionPermissionOutcome(outcome.error());
}

void ResourceManagerClient::setMemberDeletionPermissionAsync(const SetMemberDeletionPermissionRequest& request, const SetMemberDeletionPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setMemberDeletionPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::SetMemberDeletionPermissionOutcomeCallable ResourceManagerClient::setMemberDeletionPermissionCallable(const SetMemberDeletionPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetMemberDeletionPermissionOutcome()>>(
			[this, request]()
			{
			return this->setMemberDeletionPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::TagResourcesOutcome ResourceManagerClient::tagResources(const TagResourcesRequest &request) const
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

void ResourceManagerClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::TagResourcesOutcomeCallable ResourceManagerClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UntagResourcesOutcome ResourceManagerClient::untagResources(const UntagResourcesRequest &request) const
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

void ResourceManagerClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UntagResourcesOutcomeCallable ResourceManagerClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UpdateAccountOutcome ResourceManagerClient::updateAccount(const UpdateAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAccountOutcome(UpdateAccountResult(outcome.result()));
	else
		return UpdateAccountOutcome(outcome.error());
}

void ResourceManagerClient::updateAccountAsync(const UpdateAccountRequest& request, const UpdateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UpdateAccountOutcomeCallable ResourceManagerClient::updateAccountCallable(const UpdateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAccountOutcome()>>(
			[this, request]()
			{
			return this->updateAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UpdateAssociatedTransferSettingOutcome ResourceManagerClient::updateAssociatedTransferSetting(const UpdateAssociatedTransferSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAssociatedTransferSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAssociatedTransferSettingOutcome(UpdateAssociatedTransferSettingResult(outcome.result()));
	else
		return UpdateAssociatedTransferSettingOutcome(outcome.error());
}

void ResourceManagerClient::updateAssociatedTransferSettingAsync(const UpdateAssociatedTransferSettingRequest& request, const UpdateAssociatedTransferSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAssociatedTransferSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UpdateAssociatedTransferSettingOutcomeCallable ResourceManagerClient::updateAssociatedTransferSettingCallable(const UpdateAssociatedTransferSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAssociatedTransferSettingOutcome()>>(
			[this, request]()
			{
			return this->updateAssociatedTransferSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UpdateAutoGroupingConfigOutcome ResourceManagerClient::updateAutoGroupingConfig(const UpdateAutoGroupingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAutoGroupingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAutoGroupingConfigOutcome(UpdateAutoGroupingConfigResult(outcome.result()));
	else
		return UpdateAutoGroupingConfigOutcome(outcome.error());
}

void ResourceManagerClient::updateAutoGroupingConfigAsync(const UpdateAutoGroupingConfigRequest& request, const UpdateAutoGroupingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAutoGroupingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UpdateAutoGroupingConfigOutcomeCallable ResourceManagerClient::updateAutoGroupingConfigCallable(const UpdateAutoGroupingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAutoGroupingConfigOutcome()>>(
			[this, request]()
			{
			return this->updateAutoGroupingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UpdateAutoGroupingRuleOutcome ResourceManagerClient::updateAutoGroupingRule(const UpdateAutoGroupingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAutoGroupingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAutoGroupingRuleOutcome(UpdateAutoGroupingRuleResult(outcome.result()));
	else
		return UpdateAutoGroupingRuleOutcome(outcome.error());
}

void ResourceManagerClient::updateAutoGroupingRuleAsync(const UpdateAutoGroupingRuleRequest& request, const UpdateAutoGroupingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAutoGroupingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UpdateAutoGroupingRuleOutcomeCallable ResourceManagerClient::updateAutoGroupingRuleCallable(const UpdateAutoGroupingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAutoGroupingRuleOutcome()>>(
			[this, request]()
			{
			return this->updateAutoGroupingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UpdateControlPolicyOutcome ResourceManagerClient::updateControlPolicy(const UpdateControlPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateControlPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateControlPolicyOutcome(UpdateControlPolicyResult(outcome.result()));
	else
		return UpdateControlPolicyOutcome(outcome.error());
}

void ResourceManagerClient::updateControlPolicyAsync(const UpdateControlPolicyRequest& request, const UpdateControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateControlPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UpdateControlPolicyOutcomeCallable ResourceManagerClient::updateControlPolicyCallable(const UpdateControlPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateControlPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateControlPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UpdateFolderOutcome ResourceManagerClient::updateFolder(const UpdateFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFolderOutcome(UpdateFolderResult(outcome.result()));
	else
		return UpdateFolderOutcome(outcome.error());
}

void ResourceManagerClient::updateFolderAsync(const UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UpdateFolderOutcomeCallable ResourceManagerClient::updateFolderCallable(const UpdateFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFolderOutcome()>>(
			[this, request]()
			{
			return this->updateFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UpdateResourceGroupOutcome ResourceManagerClient::updateResourceGroup(const UpdateResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateResourceGroupOutcome(UpdateResourceGroupResult(outcome.result()));
	else
		return UpdateResourceGroupOutcome(outcome.error());
}

void ResourceManagerClient::updateResourceGroupAsync(const UpdateResourceGroupRequest& request, const UpdateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UpdateResourceGroupOutcomeCallable ResourceManagerClient::updateResourceGroupCallable(const UpdateResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->updateResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceManagerClient::UpdateRoleOutcome ResourceManagerClient::updateRole(const UpdateRoleRequest &request) const
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

void ResourceManagerClient::updateRoleAsync(const UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceManagerClient::UpdateRoleOutcomeCallable ResourceManagerClient::updateRoleCallable(const UpdateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRoleOutcome()>>(
			[this, request]()
			{
			return this->updateRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

