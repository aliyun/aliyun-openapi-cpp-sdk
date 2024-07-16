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

#include <alibabacloud/swas-open/SWAS_OPENClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

namespace
{
	const std::string SERVICE_NAME = "SWAS-OPEN";
}

SWAS_OPENClient::SWAS_OPENClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SWAS-OPEN");
}

SWAS_OPENClient::SWAS_OPENClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SWAS-OPEN");
}

SWAS_OPENClient::SWAS_OPENClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SWAS-OPEN");
}

SWAS_OPENClient::~SWAS_OPENClient()
{}

SWAS_OPENClient::AddCustomImageShareAccountOutcome SWAS_OPENClient::addCustomImageShareAccount(const AddCustomImageShareAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCustomImageShareAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCustomImageShareAccountOutcome(AddCustomImageShareAccountResult(outcome.result()));
	else
		return AddCustomImageShareAccountOutcome(outcome.error());
}

void SWAS_OPENClient::addCustomImageShareAccountAsync(const AddCustomImageShareAccountRequest& request, const AddCustomImageShareAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCustomImageShareAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::AddCustomImageShareAccountOutcomeCallable SWAS_OPENClient::addCustomImageShareAccountCallable(const AddCustomImageShareAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCustomImageShareAccountOutcome()>>(
			[this, request]()
			{
			return this->addCustomImageShareAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::AllocatePublicConnectionOutcome SWAS_OPENClient::allocatePublicConnection(const AllocatePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllocatePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocatePublicConnectionOutcome(AllocatePublicConnectionResult(outcome.result()));
	else
		return AllocatePublicConnectionOutcome(outcome.error());
}

void SWAS_OPENClient::allocatePublicConnectionAsync(const AllocatePublicConnectionRequest& request, const AllocatePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocatePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::AllocatePublicConnectionOutcomeCallable SWAS_OPENClient::allocatePublicConnectionCallable(const AllocatePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocatePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->allocatePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ApplyFirewallTemplateOutcome SWAS_OPENClient::applyFirewallTemplate(const ApplyFirewallTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyFirewallTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyFirewallTemplateOutcome(ApplyFirewallTemplateResult(outcome.result()));
	else
		return ApplyFirewallTemplateOutcome(outcome.error());
}

void SWAS_OPENClient::applyFirewallTemplateAsync(const ApplyFirewallTemplateRequest& request, const ApplyFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyFirewallTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ApplyFirewallTemplateOutcomeCallable SWAS_OPENClient::applyFirewallTemplateCallable(const ApplyFirewallTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyFirewallTemplateOutcome()>>(
			[this, request]()
			{
			return this->applyFirewallTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::AttachKeyPairOutcome SWAS_OPENClient::attachKeyPair(const AttachKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachKeyPairOutcome(AttachKeyPairResult(outcome.result()));
	else
		return AttachKeyPairOutcome(outcome.error());
}

void SWAS_OPENClient::attachKeyPairAsync(const AttachKeyPairRequest& request, const AttachKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::AttachKeyPairOutcomeCallable SWAS_OPENClient::attachKeyPairCallable(const AttachKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachKeyPairOutcome()>>(
			[this, request]()
			{
			return this->attachKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateCommandOutcome SWAS_OPENClient::createCommand(const CreateCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommandOutcome(CreateCommandResult(outcome.result()));
	else
		return CreateCommandOutcome(outcome.error());
}

void SWAS_OPENClient::createCommandAsync(const CreateCommandRequest& request, const CreateCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateCommandOutcomeCallable SWAS_OPENClient::createCommandCallable(const CreateCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommandOutcome()>>(
			[this, request]()
			{
			return this->createCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateCustomImageOutcome SWAS_OPENClient::createCustomImage(const CreateCustomImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomImageOutcome(CreateCustomImageResult(outcome.result()));
	else
		return CreateCustomImageOutcome(outcome.error());
}

void SWAS_OPENClient::createCustomImageAsync(const CreateCustomImageRequest& request, const CreateCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateCustomImageOutcomeCallable SWAS_OPENClient::createCustomImageCallable(const CreateCustomImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomImageOutcome()>>(
			[this, request]()
			{
			return this->createCustomImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateFirewallRuleOutcome SWAS_OPENClient::createFirewallRule(const CreateFirewallRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFirewallRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFirewallRuleOutcome(CreateFirewallRuleResult(outcome.result()));
	else
		return CreateFirewallRuleOutcome(outcome.error());
}

void SWAS_OPENClient::createFirewallRuleAsync(const CreateFirewallRuleRequest& request, const CreateFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFirewallRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateFirewallRuleOutcomeCallable SWAS_OPENClient::createFirewallRuleCallable(const CreateFirewallRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFirewallRuleOutcome()>>(
			[this, request]()
			{
			return this->createFirewallRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateFirewallRulesOutcome SWAS_OPENClient::createFirewallRules(const CreateFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFirewallRulesOutcome(CreateFirewallRulesResult(outcome.result()));
	else
		return CreateFirewallRulesOutcome(outcome.error());
}

void SWAS_OPENClient::createFirewallRulesAsync(const CreateFirewallRulesRequest& request, const CreateFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateFirewallRulesOutcomeCallable SWAS_OPENClient::createFirewallRulesCallable(const CreateFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->createFirewallRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateFirewallTemplateOutcome SWAS_OPENClient::createFirewallTemplate(const CreateFirewallTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFirewallTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFirewallTemplateOutcome(CreateFirewallTemplateResult(outcome.result()));
	else
		return CreateFirewallTemplateOutcome(outcome.error());
}

void SWAS_OPENClient::createFirewallTemplateAsync(const CreateFirewallTemplateRequest& request, const CreateFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFirewallTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateFirewallTemplateOutcomeCallable SWAS_OPENClient::createFirewallTemplateCallable(const CreateFirewallTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFirewallTemplateOutcome()>>(
			[this, request]()
			{
			return this->createFirewallTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateFirewallTemplateRulesOutcome SWAS_OPENClient::createFirewallTemplateRules(const CreateFirewallTemplateRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFirewallTemplateRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFirewallTemplateRulesOutcome(CreateFirewallTemplateRulesResult(outcome.result()));
	else
		return CreateFirewallTemplateRulesOutcome(outcome.error());
}

void SWAS_OPENClient::createFirewallTemplateRulesAsync(const CreateFirewallTemplateRulesRequest& request, const CreateFirewallTemplateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFirewallTemplateRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateFirewallTemplateRulesOutcomeCallable SWAS_OPENClient::createFirewallTemplateRulesCallable(const CreateFirewallTemplateRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFirewallTemplateRulesOutcome()>>(
			[this, request]()
			{
			return this->createFirewallTemplateRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateInstanceKeyPairOutcome SWAS_OPENClient::createInstanceKeyPair(const CreateInstanceKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceKeyPairOutcome(CreateInstanceKeyPairResult(outcome.result()));
	else
		return CreateInstanceKeyPairOutcome(outcome.error());
}

void SWAS_OPENClient::createInstanceKeyPairAsync(const CreateInstanceKeyPairRequest& request, const CreateInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstanceKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateInstanceKeyPairOutcomeCallable SWAS_OPENClient::createInstanceKeyPairCallable(const CreateInstanceKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceKeyPairOutcome()>>(
			[this, request]()
			{
			return this->createInstanceKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateInstancesOutcome SWAS_OPENClient::createInstances(const CreateInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstancesOutcome(CreateInstancesResult(outcome.result()));
	else
		return CreateInstancesOutcome(outcome.error());
}

void SWAS_OPENClient::createInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateInstancesOutcomeCallable SWAS_OPENClient::createInstancesCallable(const CreateInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstancesOutcome()>>(
			[this, request]()
			{
			return this->createInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateKeyPairOutcome SWAS_OPENClient::createKeyPair(const CreateKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeyPairOutcome(CreateKeyPairResult(outcome.result()));
	else
		return CreateKeyPairOutcome(outcome.error());
}

void SWAS_OPENClient::createKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateKeyPairOutcomeCallable SWAS_OPENClient::createKeyPairCallable(const CreateKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeyPairOutcome()>>(
			[this, request]()
			{
			return this->createKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::CreateSnapshotOutcome SWAS_OPENClient::createSnapshot(const CreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnapshotOutcome(CreateSnapshotResult(outcome.result()));
	else
		return CreateSnapshotOutcome(outcome.error());
}

void SWAS_OPENClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::CreateSnapshotOutcomeCallable SWAS_OPENClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteCommandOutcome SWAS_OPENClient::deleteCommand(const DeleteCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCommandOutcome(DeleteCommandResult(outcome.result()));
	else
		return DeleteCommandOutcome(outcome.error());
}

void SWAS_OPENClient::deleteCommandAsync(const DeleteCommandRequest& request, const DeleteCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteCommandOutcomeCallable SWAS_OPENClient::deleteCommandCallable(const DeleteCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCommandOutcome()>>(
			[this, request]()
			{
			return this->deleteCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteCustomImageOutcome SWAS_OPENClient::deleteCustomImage(const DeleteCustomImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomImageOutcome(DeleteCustomImageResult(outcome.result()));
	else
		return DeleteCustomImageOutcome(outcome.error());
}

void SWAS_OPENClient::deleteCustomImageAsync(const DeleteCustomImageRequest& request, const DeleteCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteCustomImageOutcomeCallable SWAS_OPENClient::deleteCustomImageCallable(const DeleteCustomImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomImageOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteCustomImagesOutcome SWAS_OPENClient::deleteCustomImages(const DeleteCustomImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomImagesOutcome(DeleteCustomImagesResult(outcome.result()));
	else
		return DeleteCustomImagesOutcome(outcome.error());
}

void SWAS_OPENClient::deleteCustomImagesAsync(const DeleteCustomImagesRequest& request, const DeleteCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteCustomImagesOutcomeCallable SWAS_OPENClient::deleteCustomImagesCallable(const DeleteCustomImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomImagesOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteFirewallRuleOutcome SWAS_OPENClient::deleteFirewallRule(const DeleteFirewallRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFirewallRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFirewallRuleOutcome(DeleteFirewallRuleResult(outcome.result()));
	else
		return DeleteFirewallRuleOutcome(outcome.error());
}

void SWAS_OPENClient::deleteFirewallRuleAsync(const DeleteFirewallRuleRequest& request, const DeleteFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFirewallRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteFirewallRuleOutcomeCallable SWAS_OPENClient::deleteFirewallRuleCallable(const DeleteFirewallRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFirewallRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteFirewallRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteFirewallRulesOutcome SWAS_OPENClient::deleteFirewallRules(const DeleteFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFirewallRulesOutcome(DeleteFirewallRulesResult(outcome.result()));
	else
		return DeleteFirewallRulesOutcome(outcome.error());
}

void SWAS_OPENClient::deleteFirewallRulesAsync(const DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteFirewallRulesOutcomeCallable SWAS_OPENClient::deleteFirewallRulesCallable(const DeleteFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteFirewallRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteFirewallTemplateRulesOutcome SWAS_OPENClient::deleteFirewallTemplateRules(const DeleteFirewallTemplateRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFirewallTemplateRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFirewallTemplateRulesOutcome(DeleteFirewallTemplateRulesResult(outcome.result()));
	else
		return DeleteFirewallTemplateRulesOutcome(outcome.error());
}

void SWAS_OPENClient::deleteFirewallTemplateRulesAsync(const DeleteFirewallTemplateRulesRequest& request, const DeleteFirewallTemplateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFirewallTemplateRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteFirewallTemplateRulesOutcomeCallable SWAS_OPENClient::deleteFirewallTemplateRulesCallable(const DeleteFirewallTemplateRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFirewallTemplateRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteFirewallTemplateRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteFirewallTemplatesOutcome SWAS_OPENClient::deleteFirewallTemplates(const DeleteFirewallTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFirewallTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFirewallTemplatesOutcome(DeleteFirewallTemplatesResult(outcome.result()));
	else
		return DeleteFirewallTemplatesOutcome(outcome.error());
}

void SWAS_OPENClient::deleteFirewallTemplatesAsync(const DeleteFirewallTemplatesRequest& request, const DeleteFirewallTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFirewallTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteFirewallTemplatesOutcomeCallable SWAS_OPENClient::deleteFirewallTemplatesCallable(const DeleteFirewallTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFirewallTemplatesOutcome()>>(
			[this, request]()
			{
			return this->deleteFirewallTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteInstanceKeyPairOutcome SWAS_OPENClient::deleteInstanceKeyPair(const DeleteInstanceKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceKeyPairOutcome(DeleteInstanceKeyPairResult(outcome.result()));
	else
		return DeleteInstanceKeyPairOutcome(outcome.error());
}

void SWAS_OPENClient::deleteInstanceKeyPairAsync(const DeleteInstanceKeyPairRequest& request, const DeleteInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstanceKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteInstanceKeyPairOutcomeCallable SWAS_OPENClient::deleteInstanceKeyPairCallable(const DeleteInstanceKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceKeyPairOutcome()>>(
			[this, request]()
			{
			return this->deleteInstanceKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteKeyPairsOutcome SWAS_OPENClient::deleteKeyPairs(const DeleteKeyPairsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKeyPairsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKeyPairsOutcome(DeleteKeyPairsResult(outcome.result()));
	else
		return DeleteKeyPairsOutcome(outcome.error());
}

void SWAS_OPENClient::deleteKeyPairsAsync(const DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKeyPairs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteKeyPairsOutcomeCallable SWAS_OPENClient::deleteKeyPairsCallable(const DeleteKeyPairsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKeyPairsOutcome()>>(
			[this, request]()
			{
			return this->deleteKeyPairs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteSnapshotOutcome SWAS_OPENClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.result()));
	else
		return DeleteSnapshotOutcome(outcome.error());
}

void SWAS_OPENClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteSnapshotOutcomeCallable SWAS_OPENClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DeleteSnapshotsOutcome SWAS_OPENClient::deleteSnapshots(const DeleteSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotsOutcome(DeleteSnapshotsResult(outcome.result()));
	else
		return DeleteSnapshotsOutcome(outcome.error());
}

void SWAS_OPENClient::deleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DeleteSnapshotsOutcomeCallable SWAS_OPENClient::deleteSnapshotsCallable(const DeleteSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeCloudAssistantAttributesOutcome SWAS_OPENClient::describeCloudAssistantAttributes(const DescribeCloudAssistantAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudAssistantAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudAssistantAttributesOutcome(DescribeCloudAssistantAttributesResult(outcome.result()));
	else
		return DescribeCloudAssistantAttributesOutcome(outcome.error());
}

void SWAS_OPENClient::describeCloudAssistantAttributesAsync(const DescribeCloudAssistantAttributesRequest& request, const DescribeCloudAssistantAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudAssistantAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeCloudAssistantAttributesOutcomeCallable SWAS_OPENClient::describeCloudAssistantAttributesCallable(const DescribeCloudAssistantAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudAssistantAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeCloudAssistantAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeCloudAssistantStatusOutcome SWAS_OPENClient::describeCloudAssistantStatus(const DescribeCloudAssistantStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudAssistantStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudAssistantStatusOutcome(DescribeCloudAssistantStatusResult(outcome.result()));
	else
		return DescribeCloudAssistantStatusOutcome(outcome.error());
}

void SWAS_OPENClient::describeCloudAssistantStatusAsync(const DescribeCloudAssistantStatusRequest& request, const DescribeCloudAssistantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudAssistantStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeCloudAssistantStatusOutcomeCallable SWAS_OPENClient::describeCloudAssistantStatusCallable(const DescribeCloudAssistantStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudAssistantStatusOutcome()>>(
			[this, request]()
			{
			return this->describeCloudAssistantStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeCloudMonitorAgentStatusesOutcome SWAS_OPENClient::describeCloudMonitorAgentStatuses(const DescribeCloudMonitorAgentStatusesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudMonitorAgentStatusesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudMonitorAgentStatusesOutcome(DescribeCloudMonitorAgentStatusesResult(outcome.result()));
	else
		return DescribeCloudMonitorAgentStatusesOutcome(outcome.error());
}

void SWAS_OPENClient::describeCloudMonitorAgentStatusesAsync(const DescribeCloudMonitorAgentStatusesRequest& request, const DescribeCloudMonitorAgentStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudMonitorAgentStatuses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeCloudMonitorAgentStatusesOutcomeCallable SWAS_OPENClient::describeCloudMonitorAgentStatusesCallable(const DescribeCloudMonitorAgentStatusesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudMonitorAgentStatusesOutcome()>>(
			[this, request]()
			{
			return this->describeCloudMonitorAgentStatuses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeCommandInvocationsOutcome SWAS_OPENClient::describeCommandInvocations(const DescribeCommandInvocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommandInvocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommandInvocationsOutcome(DescribeCommandInvocationsResult(outcome.result()));
	else
		return DescribeCommandInvocationsOutcome(outcome.error());
}

void SWAS_OPENClient::describeCommandInvocationsAsync(const DescribeCommandInvocationsRequest& request, const DescribeCommandInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommandInvocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeCommandInvocationsOutcomeCallable SWAS_OPENClient::describeCommandInvocationsCallable(const DescribeCommandInvocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommandInvocationsOutcome()>>(
			[this, request]()
			{
			return this->describeCommandInvocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeCommandsOutcome SWAS_OPENClient::describeCommands(const DescribeCommandsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommandsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommandsOutcome(DescribeCommandsResult(outcome.result()));
	else
		return DescribeCommandsOutcome(outcome.error());
}

void SWAS_OPENClient::describeCommandsAsync(const DescribeCommandsRequest& request, const DescribeCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommands(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeCommandsOutcomeCallable SWAS_OPENClient::describeCommandsCallable(const DescribeCommandsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommandsOutcome()>>(
			[this, request]()
			{
			return this->describeCommands(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseErrorLogsOutcome SWAS_OPENClient::describeDatabaseErrorLogs(const DescribeDatabaseErrorLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseErrorLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseErrorLogsOutcome(DescribeDatabaseErrorLogsResult(outcome.result()));
	else
		return DescribeDatabaseErrorLogsOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseErrorLogsAsync(const DescribeDatabaseErrorLogsRequest& request, const DescribeDatabaseErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseErrorLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseErrorLogsOutcomeCallable SWAS_OPENClient::describeDatabaseErrorLogsCallable(const DescribeDatabaseErrorLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseErrorLogsOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseErrorLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseInstanceMetricDataOutcome SWAS_OPENClient::describeDatabaseInstanceMetricData(const DescribeDatabaseInstanceMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseInstanceMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseInstanceMetricDataOutcome(DescribeDatabaseInstanceMetricDataResult(outcome.result()));
	else
		return DescribeDatabaseInstanceMetricDataOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseInstanceMetricDataAsync(const DescribeDatabaseInstanceMetricDataRequest& request, const DescribeDatabaseInstanceMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseInstanceMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseInstanceMetricDataOutcomeCallable SWAS_OPENClient::describeDatabaseInstanceMetricDataCallable(const DescribeDatabaseInstanceMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseInstanceMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseInstanceMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseInstanceParametersOutcome SWAS_OPENClient::describeDatabaseInstanceParameters(const DescribeDatabaseInstanceParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseInstanceParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseInstanceParametersOutcome(DescribeDatabaseInstanceParametersResult(outcome.result()));
	else
		return DescribeDatabaseInstanceParametersOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseInstanceParametersAsync(const DescribeDatabaseInstanceParametersRequest& request, const DescribeDatabaseInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseInstanceParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseInstanceParametersOutcomeCallable SWAS_OPENClient::describeDatabaseInstanceParametersCallable(const DescribeDatabaseInstanceParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseInstanceParametersOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseInstanceParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseInstancesOutcome SWAS_OPENClient::describeDatabaseInstances(const DescribeDatabaseInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseInstancesOutcome(DescribeDatabaseInstancesResult(outcome.result()));
	else
		return DescribeDatabaseInstancesOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseInstancesAsync(const DescribeDatabaseInstancesRequest& request, const DescribeDatabaseInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseInstancesOutcomeCallable SWAS_OPENClient::describeDatabaseInstancesCallable(const DescribeDatabaseInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeDatabaseSlowLogRecordsOutcome SWAS_OPENClient::describeDatabaseSlowLogRecords(const DescribeDatabaseSlowLogRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatabaseSlowLogRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatabaseSlowLogRecordsOutcome(DescribeDatabaseSlowLogRecordsResult(outcome.result()));
	else
		return DescribeDatabaseSlowLogRecordsOutcome(outcome.error());
}

void SWAS_OPENClient::describeDatabaseSlowLogRecordsAsync(const DescribeDatabaseSlowLogRecordsRequest& request, const DescribeDatabaseSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatabaseSlowLogRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeDatabaseSlowLogRecordsOutcomeCallable SWAS_OPENClient::describeDatabaseSlowLogRecordsCallable(const DescribeDatabaseSlowLogRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatabaseSlowLogRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeDatabaseSlowLogRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeFirewallTemplateApplyResultsOutcome SWAS_OPENClient::describeFirewallTemplateApplyResults(const DescribeFirewallTemplateApplyResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFirewallTemplateApplyResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFirewallTemplateApplyResultsOutcome(DescribeFirewallTemplateApplyResultsResult(outcome.result()));
	else
		return DescribeFirewallTemplateApplyResultsOutcome(outcome.error());
}

void SWAS_OPENClient::describeFirewallTemplateApplyResultsAsync(const DescribeFirewallTemplateApplyResultsRequest& request, const DescribeFirewallTemplateApplyResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFirewallTemplateApplyResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeFirewallTemplateApplyResultsOutcomeCallable SWAS_OPENClient::describeFirewallTemplateApplyResultsCallable(const DescribeFirewallTemplateApplyResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFirewallTemplateApplyResultsOutcome()>>(
			[this, request]()
			{
			return this->describeFirewallTemplateApplyResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeFirewallTemplateRulesApplyResultOutcome SWAS_OPENClient::describeFirewallTemplateRulesApplyResult(const DescribeFirewallTemplateRulesApplyResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFirewallTemplateRulesApplyResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFirewallTemplateRulesApplyResultOutcome(DescribeFirewallTemplateRulesApplyResultResult(outcome.result()));
	else
		return DescribeFirewallTemplateRulesApplyResultOutcome(outcome.error());
}

void SWAS_OPENClient::describeFirewallTemplateRulesApplyResultAsync(const DescribeFirewallTemplateRulesApplyResultRequest& request, const DescribeFirewallTemplateRulesApplyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFirewallTemplateRulesApplyResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeFirewallTemplateRulesApplyResultOutcomeCallable SWAS_OPENClient::describeFirewallTemplateRulesApplyResultCallable(const DescribeFirewallTemplateRulesApplyResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFirewallTemplateRulesApplyResultOutcome()>>(
			[this, request]()
			{
			return this->describeFirewallTemplateRulesApplyResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeFirewallTemplatesOutcome SWAS_OPENClient::describeFirewallTemplates(const DescribeFirewallTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFirewallTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFirewallTemplatesOutcome(DescribeFirewallTemplatesResult(outcome.result()));
	else
		return DescribeFirewallTemplatesOutcome(outcome.error());
}

void SWAS_OPENClient::describeFirewallTemplatesAsync(const DescribeFirewallTemplatesRequest& request, const DescribeFirewallTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFirewallTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeFirewallTemplatesOutcomeCallable SWAS_OPENClient::describeFirewallTemplatesCallable(const DescribeFirewallTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFirewallTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeFirewallTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeInstanceKeyPairOutcome SWAS_OPENClient::describeInstanceKeyPair(const DescribeInstanceKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceKeyPairOutcome(DescribeInstanceKeyPairResult(outcome.result()));
	else
		return DescribeInstanceKeyPairOutcome(outcome.error());
}

void SWAS_OPENClient::describeInstanceKeyPairAsync(const DescribeInstanceKeyPairRequest& request, const DescribeInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeInstanceKeyPairOutcomeCallable SWAS_OPENClient::describeInstanceKeyPairCallable(const DescribeInstanceKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceKeyPairOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeInstancePasswordsSettingOutcome SWAS_OPENClient::describeInstancePasswordsSetting(const DescribeInstancePasswordsSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancePasswordsSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancePasswordsSettingOutcome(DescribeInstancePasswordsSettingResult(outcome.result()));
	else
		return DescribeInstancePasswordsSettingOutcome(outcome.error());
}

void SWAS_OPENClient::describeInstancePasswordsSettingAsync(const DescribeInstancePasswordsSettingRequest& request, const DescribeInstancePasswordsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstancePasswordsSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeInstancePasswordsSettingOutcomeCallable SWAS_OPENClient::describeInstancePasswordsSettingCallable(const DescribeInstancePasswordsSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancePasswordsSettingOutcome()>>(
			[this, request]()
			{
			return this->describeInstancePasswordsSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeInstanceVncUrlOutcome SWAS_OPENClient::describeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceVncUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceVncUrlOutcome(DescribeInstanceVncUrlResult(outcome.result()));
	else
		return DescribeInstanceVncUrlOutcome(outcome.error());
}

void SWAS_OPENClient::describeInstanceVncUrlAsync(const DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceVncUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeInstanceVncUrlOutcomeCallable SWAS_OPENClient::describeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceVncUrlOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceVncUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeInvocationResultOutcome SWAS_OPENClient::describeInvocationResult(const DescribeInvocationResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInvocationResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInvocationResultOutcome(DescribeInvocationResultResult(outcome.result()));
	else
		return DescribeInvocationResultOutcome(outcome.error());
}

void SWAS_OPENClient::describeInvocationResultAsync(const DescribeInvocationResultRequest& request, const DescribeInvocationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInvocationResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeInvocationResultOutcomeCallable SWAS_OPENClient::describeInvocationResultCallable(const DescribeInvocationResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInvocationResultOutcome()>>(
			[this, request]()
			{
			return this->describeInvocationResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeInvocationsOutcome SWAS_OPENClient::describeInvocations(const DescribeInvocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInvocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInvocationsOutcome(DescribeInvocationsResult(outcome.result()));
	else
		return DescribeInvocationsOutcome(outcome.error());
}

void SWAS_OPENClient::describeInvocationsAsync(const DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInvocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeInvocationsOutcomeCallable SWAS_OPENClient::describeInvocationsCallable(const DescribeInvocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInvocationsOutcome()>>(
			[this, request]()
			{
			return this->describeInvocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeMonitorDataOutcome SWAS_OPENClient::describeMonitorData(const DescribeMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorDataOutcome(DescribeMonitorDataResult(outcome.result()));
	else
		return DescribeMonitorDataOutcome(outcome.error());
}

void SWAS_OPENClient::describeMonitorDataAsync(const DescribeMonitorDataRequest& request, const DescribeMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeMonitorDataOutcomeCallable SWAS_OPENClient::describeMonitorDataCallable(const DescribeMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DescribeSecurityAgentStatusOutcome SWAS_OPENClient::describeSecurityAgentStatus(const DescribeSecurityAgentStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityAgentStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityAgentStatusOutcome(DescribeSecurityAgentStatusResult(outcome.result()));
	else
		return DescribeSecurityAgentStatusOutcome(outcome.error());
}

void SWAS_OPENClient::describeSecurityAgentStatusAsync(const DescribeSecurityAgentStatusRequest& request, const DescribeSecurityAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityAgentStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DescribeSecurityAgentStatusOutcomeCallable SWAS_OPENClient::describeSecurityAgentStatusCallable(const DescribeSecurityAgentStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityAgentStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityAgentStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DetachKeyPairOutcome SWAS_OPENClient::detachKeyPair(const DetachKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachKeyPairOutcome(DetachKeyPairResult(outcome.result()));
	else
		return DetachKeyPairOutcome(outcome.error());
}

void SWAS_OPENClient::detachKeyPairAsync(const DetachKeyPairRequest& request, const DetachKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DetachKeyPairOutcomeCallable SWAS_OPENClient::detachKeyPairCallable(const DetachKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachKeyPairOutcome()>>(
			[this, request]()
			{
			return this->detachKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::DisableFirewallRuleOutcome SWAS_OPENClient::disableFirewallRule(const DisableFirewallRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableFirewallRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableFirewallRuleOutcome(DisableFirewallRuleResult(outcome.result()));
	else
		return DisableFirewallRuleOutcome(outcome.error());
}

void SWAS_OPENClient::disableFirewallRuleAsync(const DisableFirewallRuleRequest& request, const DisableFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableFirewallRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::DisableFirewallRuleOutcomeCallable SWAS_OPENClient::disableFirewallRuleCallable(const DisableFirewallRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableFirewallRuleOutcome()>>(
			[this, request]()
			{
			return this->disableFirewallRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::EnableFirewallRuleOutcome SWAS_OPENClient::enableFirewallRule(const EnableFirewallRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableFirewallRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableFirewallRuleOutcome(EnableFirewallRuleResult(outcome.result()));
	else
		return EnableFirewallRuleOutcome(outcome.error());
}

void SWAS_OPENClient::enableFirewallRuleAsync(const EnableFirewallRuleRequest& request, const EnableFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableFirewallRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::EnableFirewallRuleOutcomeCallable SWAS_OPENClient::enableFirewallRuleCallable(const EnableFirewallRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableFirewallRuleOutcome()>>(
			[this, request]()
			{
			return this->enableFirewallRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ImportKeyPairOutcome SWAS_OPENClient::importKeyPair(const ImportKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportKeyPairOutcome(ImportKeyPairResult(outcome.result()));
	else
		return ImportKeyPairOutcome(outcome.error());
}

void SWAS_OPENClient::importKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ImportKeyPairOutcomeCallable SWAS_OPENClient::importKeyPairCallable(const ImportKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportKeyPairOutcome()>>(
			[this, request]()
			{
			return this->importKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::InstallCloudAssistantOutcome SWAS_OPENClient::installCloudAssistant(const InstallCloudAssistantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallCloudAssistantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallCloudAssistantOutcome(InstallCloudAssistantResult(outcome.result()));
	else
		return InstallCloudAssistantOutcome(outcome.error());
}

void SWAS_OPENClient::installCloudAssistantAsync(const InstallCloudAssistantRequest& request, const InstallCloudAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installCloudAssistant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::InstallCloudAssistantOutcomeCallable SWAS_OPENClient::installCloudAssistantCallable(const InstallCloudAssistantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallCloudAssistantOutcome()>>(
			[this, request]()
			{
			return this->installCloudAssistant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::InstallCloudMonitorAgentOutcome SWAS_OPENClient::installCloudMonitorAgent(const InstallCloudMonitorAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallCloudMonitorAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallCloudMonitorAgentOutcome(InstallCloudMonitorAgentResult(outcome.result()));
	else
		return InstallCloudMonitorAgentOutcome(outcome.error());
}

void SWAS_OPENClient::installCloudMonitorAgentAsync(const InstallCloudMonitorAgentRequest& request, const InstallCloudMonitorAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installCloudMonitorAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::InstallCloudMonitorAgentOutcomeCallable SWAS_OPENClient::installCloudMonitorAgentCallable(const InstallCloudMonitorAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallCloudMonitorAgentOutcome()>>(
			[this, request]()
			{
			return this->installCloudMonitorAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::InvokeCommandOutcome SWAS_OPENClient::invokeCommand(const InvokeCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeCommandOutcome(InvokeCommandResult(outcome.result()));
	else
		return InvokeCommandOutcome(outcome.error());
}

void SWAS_OPENClient::invokeCommandAsync(const InvokeCommandRequest& request, const InvokeCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::InvokeCommandOutcomeCallable SWAS_OPENClient::invokeCommandCallable(const InvokeCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeCommandOutcome()>>(
			[this, request]()
			{
			return this->invokeCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListCustomImageShareAccountsOutcome SWAS_OPENClient::listCustomImageShareAccounts(const ListCustomImageShareAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomImageShareAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomImageShareAccountsOutcome(ListCustomImageShareAccountsResult(outcome.result()));
	else
		return ListCustomImageShareAccountsOutcome(outcome.error());
}

void SWAS_OPENClient::listCustomImageShareAccountsAsync(const ListCustomImageShareAccountsRequest& request, const ListCustomImageShareAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomImageShareAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListCustomImageShareAccountsOutcomeCallable SWAS_OPENClient::listCustomImageShareAccountsCallable(const ListCustomImageShareAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomImageShareAccountsOutcome()>>(
			[this, request]()
			{
			return this->listCustomImageShareAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListCustomImagesOutcome SWAS_OPENClient::listCustomImages(const ListCustomImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomImagesOutcome(ListCustomImagesResult(outcome.result()));
	else
		return ListCustomImagesOutcome(outcome.error());
}

void SWAS_OPENClient::listCustomImagesAsync(const ListCustomImagesRequest& request, const ListCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListCustomImagesOutcomeCallable SWAS_OPENClient::listCustomImagesCallable(const ListCustomImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomImagesOutcome()>>(
			[this, request]()
			{
			return this->listCustomImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListDisksOutcome SWAS_OPENClient::listDisks(const ListDisksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDisksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDisksOutcome(ListDisksResult(outcome.result()));
	else
		return ListDisksOutcome(outcome.error());
}

void SWAS_OPENClient::listDisksAsync(const ListDisksRequest& request, const ListDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListDisksOutcomeCallable SWAS_OPENClient::listDisksCallable(const ListDisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDisksOutcome()>>(
			[this, request]()
			{
			return this->listDisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListFirewallRulesOutcome SWAS_OPENClient::listFirewallRules(const ListFirewallRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFirewallRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFirewallRulesOutcome(ListFirewallRulesResult(outcome.result()));
	else
		return ListFirewallRulesOutcome(outcome.error());
}

void SWAS_OPENClient::listFirewallRulesAsync(const ListFirewallRulesRequest& request, const ListFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFirewallRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListFirewallRulesOutcomeCallable SWAS_OPENClient::listFirewallRulesCallable(const ListFirewallRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFirewallRulesOutcome()>>(
			[this, request]()
			{
			return this->listFirewallRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListImagesOutcome SWAS_OPENClient::listImages(const ListImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImagesOutcome(ListImagesResult(outcome.result()));
	else
		return ListImagesOutcome(outcome.error());
}

void SWAS_OPENClient::listImagesAsync(const ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListImagesOutcomeCallable SWAS_OPENClient::listImagesCallable(const ListImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImagesOutcome()>>(
			[this, request]()
			{
			return this->listImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListInstancePlansModificationOutcome SWAS_OPENClient::listInstancePlansModification(const ListInstancePlansModificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancePlansModificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancePlansModificationOutcome(ListInstancePlansModificationResult(outcome.result()));
	else
		return ListInstancePlansModificationOutcome(outcome.error());
}

void SWAS_OPENClient::listInstancePlansModificationAsync(const ListInstancePlansModificationRequest& request, const ListInstancePlansModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancePlansModification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListInstancePlansModificationOutcomeCallable SWAS_OPENClient::listInstancePlansModificationCallable(const ListInstancePlansModificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancePlansModificationOutcome()>>(
			[this, request]()
			{
			return this->listInstancePlansModification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListInstanceStatusOutcome SWAS_OPENClient::listInstanceStatus(const ListInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceStatusOutcome(ListInstanceStatusResult(outcome.result()));
	else
		return ListInstanceStatusOutcome(outcome.error());
}

void SWAS_OPENClient::listInstanceStatusAsync(const ListInstanceStatusRequest& request, const ListInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListInstanceStatusOutcomeCallable SWAS_OPENClient::listInstanceStatusCallable(const ListInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->listInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListInstancesOutcome SWAS_OPENClient::listInstances(const ListInstancesRequest &request) const
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

void SWAS_OPENClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListInstancesOutcomeCallable SWAS_OPENClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListInstancesTrafficPackagesOutcome SWAS_OPENClient::listInstancesTrafficPackages(const ListInstancesTrafficPackagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesTrafficPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesTrafficPackagesOutcome(ListInstancesTrafficPackagesResult(outcome.result()));
	else
		return ListInstancesTrafficPackagesOutcome(outcome.error());
}

void SWAS_OPENClient::listInstancesTrafficPackagesAsync(const ListInstancesTrafficPackagesRequest& request, const ListInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancesTrafficPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListInstancesTrafficPackagesOutcomeCallable SWAS_OPENClient::listInstancesTrafficPackagesCallable(const ListInstancesTrafficPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesTrafficPackagesOutcome()>>(
			[this, request]()
			{
			return this->listInstancesTrafficPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListKeyPairsOutcome SWAS_OPENClient::listKeyPairs(const ListKeyPairsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKeyPairsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKeyPairsOutcome(ListKeyPairsResult(outcome.result()));
	else
		return ListKeyPairsOutcome(outcome.error());
}

void SWAS_OPENClient::listKeyPairsAsync(const ListKeyPairsRequest& request, const ListKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKeyPairs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListKeyPairsOutcomeCallable SWAS_OPENClient::listKeyPairsCallable(const ListKeyPairsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKeyPairsOutcome()>>(
			[this, request]()
			{
			return this->listKeyPairs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListPlansOutcome SWAS_OPENClient::listPlans(const ListPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPlansOutcome(ListPlansResult(outcome.result()));
	else
		return ListPlansOutcome(outcome.error());
}

void SWAS_OPENClient::listPlansAsync(const ListPlansRequest& request, const ListPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListPlansOutcomeCallable SWAS_OPENClient::listPlansCallable(const ListPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPlansOutcome()>>(
			[this, request]()
			{
			return this->listPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListRegionsOutcome SWAS_OPENClient::listRegions(const ListRegionsRequest &request) const
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

void SWAS_OPENClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListRegionsOutcomeCallable SWAS_OPENClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListSnapshotsOutcome SWAS_OPENClient::listSnapshots(const ListSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSnapshotsOutcome(ListSnapshotsResult(outcome.result()));
	else
		return ListSnapshotsOutcome(outcome.error());
}

void SWAS_OPENClient::listSnapshotsAsync(const ListSnapshotsRequest& request, const ListSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListSnapshotsOutcomeCallable SWAS_OPENClient::listSnapshotsCallable(const ListSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->listSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ListTagResourcesOutcome SWAS_OPENClient::listTagResources(const ListTagResourcesRequest &request) const
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

void SWAS_OPENClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ListTagResourcesOutcomeCallable SWAS_OPENClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::LoginInstanceOutcome SWAS_OPENClient::loginInstance(const LoginInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LoginInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LoginInstanceOutcome(LoginInstanceResult(outcome.result()));
	else
		return LoginInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::loginInstanceAsync(const LoginInstanceRequest& request, const LoginInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, loginInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::LoginInstanceOutcomeCallable SWAS_OPENClient::loginInstanceCallable(const LoginInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LoginInstanceOutcome()>>(
			[this, request]()
			{
			return this->loginInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyDatabaseInstanceDescriptionOutcome SWAS_OPENClient::modifyDatabaseInstanceDescription(const ModifyDatabaseInstanceDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseInstanceDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseInstanceDescriptionOutcome(ModifyDatabaseInstanceDescriptionResult(outcome.result()));
	else
		return ModifyDatabaseInstanceDescriptionOutcome(outcome.error());
}

void SWAS_OPENClient::modifyDatabaseInstanceDescriptionAsync(const ModifyDatabaseInstanceDescriptionRequest& request, const ModifyDatabaseInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseInstanceDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyDatabaseInstanceDescriptionOutcomeCallable SWAS_OPENClient::modifyDatabaseInstanceDescriptionCallable(const ModifyDatabaseInstanceDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseInstanceDescriptionOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseInstanceDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyDatabaseInstanceParameterOutcome SWAS_OPENClient::modifyDatabaseInstanceParameter(const ModifyDatabaseInstanceParameterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatabaseInstanceParameterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatabaseInstanceParameterOutcome(ModifyDatabaseInstanceParameterResult(outcome.result()));
	else
		return ModifyDatabaseInstanceParameterOutcome(outcome.error());
}

void SWAS_OPENClient::modifyDatabaseInstanceParameterAsync(const ModifyDatabaseInstanceParameterRequest& request, const ModifyDatabaseInstanceParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatabaseInstanceParameter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyDatabaseInstanceParameterOutcomeCallable SWAS_OPENClient::modifyDatabaseInstanceParameterCallable(const ModifyDatabaseInstanceParameterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatabaseInstanceParameterOutcome()>>(
			[this, request]()
			{
			return this->modifyDatabaseInstanceParameter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyFirewallRuleOutcome SWAS_OPENClient::modifyFirewallRule(const ModifyFirewallRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFirewallRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFirewallRuleOutcome(ModifyFirewallRuleResult(outcome.result()));
	else
		return ModifyFirewallRuleOutcome(outcome.error());
}

void SWAS_OPENClient::modifyFirewallRuleAsync(const ModifyFirewallRuleRequest& request, const ModifyFirewallRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFirewallRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyFirewallRuleOutcomeCallable SWAS_OPENClient::modifyFirewallRuleCallable(const ModifyFirewallRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFirewallRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyFirewallRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyFirewallTemplateOutcome SWAS_OPENClient::modifyFirewallTemplate(const ModifyFirewallTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFirewallTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFirewallTemplateOutcome(ModifyFirewallTemplateResult(outcome.result()));
	else
		return ModifyFirewallTemplateOutcome(outcome.error());
}

void SWAS_OPENClient::modifyFirewallTemplateAsync(const ModifyFirewallTemplateRequest& request, const ModifyFirewallTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFirewallTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyFirewallTemplateOutcomeCallable SWAS_OPENClient::modifyFirewallTemplateCallable(const ModifyFirewallTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFirewallTemplateOutcome()>>(
			[this, request]()
			{
			return this->modifyFirewallTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyImageShareStatusOutcome SWAS_OPENClient::modifyImageShareStatus(const ModifyImageShareStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyImageShareStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyImageShareStatusOutcome(ModifyImageShareStatusResult(outcome.result()));
	else
		return ModifyImageShareStatusOutcome(outcome.error());
}

void SWAS_OPENClient::modifyImageShareStatusAsync(const ModifyImageShareStatusRequest& request, const ModifyImageShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyImageShareStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyImageShareStatusOutcomeCallable SWAS_OPENClient::modifyImageShareStatusCallable(const ModifyImageShareStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyImageShareStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyImageShareStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ModifyInstanceVncPasswordOutcome SWAS_OPENClient::modifyInstanceVncPassword(const ModifyInstanceVncPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceVncPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceVncPasswordOutcome(ModifyInstanceVncPasswordResult(outcome.result()));
	else
		return ModifyInstanceVncPasswordOutcome(outcome.error());
}

void SWAS_OPENClient::modifyInstanceVncPasswordAsync(const ModifyInstanceVncPasswordRequest& request, const ModifyInstanceVncPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceVncPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ModifyInstanceVncPasswordOutcomeCallable SWAS_OPENClient::modifyInstanceVncPasswordCallable(const ModifyInstanceVncPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceVncPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceVncPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RebootInstanceOutcome SWAS_OPENClient::rebootInstance(const RebootInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootInstanceOutcome(RebootInstanceResult(outcome.result()));
	else
		return RebootInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::rebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RebootInstanceOutcomeCallable SWAS_OPENClient::rebootInstanceCallable(const RebootInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootInstanceOutcome()>>(
			[this, request]()
			{
			return this->rebootInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RebootInstancesOutcome SWAS_OPENClient::rebootInstances(const RebootInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootInstancesOutcome(RebootInstancesResult(outcome.result()));
	else
		return RebootInstancesOutcome(outcome.error());
}

void SWAS_OPENClient::rebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RebootInstancesOutcomeCallable SWAS_OPENClient::rebootInstancesCallable(const RebootInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootInstancesOutcome()>>(
			[this, request]()
			{
			return this->rebootInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ReleasePublicConnectionOutcome SWAS_OPENClient::releasePublicConnection(const ReleasePublicConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleasePublicConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleasePublicConnectionOutcome(ReleasePublicConnectionResult(outcome.result()));
	else
		return ReleasePublicConnectionOutcome(outcome.error());
}

void SWAS_OPENClient::releasePublicConnectionAsync(const ReleasePublicConnectionRequest& request, const ReleasePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releasePublicConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ReleasePublicConnectionOutcomeCallable SWAS_OPENClient::releasePublicConnectionCallable(const ReleasePublicConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleasePublicConnectionOutcome()>>(
			[this, request]()
			{
			return this->releasePublicConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RemoveCustomImageShareAccountOutcome SWAS_OPENClient::removeCustomImageShareAccount(const RemoveCustomImageShareAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveCustomImageShareAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveCustomImageShareAccountOutcome(RemoveCustomImageShareAccountResult(outcome.result()));
	else
		return RemoveCustomImageShareAccountOutcome(outcome.error());
}

void SWAS_OPENClient::removeCustomImageShareAccountAsync(const RemoveCustomImageShareAccountRequest& request, const RemoveCustomImageShareAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeCustomImageShareAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RemoveCustomImageShareAccountOutcomeCallable SWAS_OPENClient::removeCustomImageShareAccountCallable(const RemoveCustomImageShareAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveCustomImageShareAccountOutcome()>>(
			[this, request]()
			{
			return this->removeCustomImageShareAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RenewInstanceOutcome SWAS_OPENClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RenewInstanceOutcomeCallable SWAS_OPENClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ResetDatabaseAccountPasswordOutcome SWAS_OPENClient::resetDatabaseAccountPassword(const ResetDatabaseAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDatabaseAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDatabaseAccountPasswordOutcome(ResetDatabaseAccountPasswordResult(outcome.result()));
	else
		return ResetDatabaseAccountPasswordOutcome(outcome.error());
}

void SWAS_OPENClient::resetDatabaseAccountPasswordAsync(const ResetDatabaseAccountPasswordRequest& request, const ResetDatabaseAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDatabaseAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ResetDatabaseAccountPasswordOutcomeCallable SWAS_OPENClient::resetDatabaseAccountPasswordCallable(const ResetDatabaseAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDatabaseAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetDatabaseAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ResetDiskOutcome SWAS_OPENClient::resetDisk(const ResetDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDiskOutcome(ResetDiskResult(outcome.result()));
	else
		return ResetDiskOutcome(outcome.error());
}

void SWAS_OPENClient::resetDiskAsync(const ResetDiskRequest& request, const ResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ResetDiskOutcomeCallable SWAS_OPENClient::resetDiskCallable(const ResetDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDiskOutcome()>>(
			[this, request]()
			{
			return this->resetDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::ResetSystemOutcome SWAS_OPENClient::resetSystem(const ResetSystemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetSystemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetSystemOutcome(ResetSystemResult(outcome.result()));
	else
		return ResetSystemOutcome(outcome.error());
}

void SWAS_OPENClient::resetSystemAsync(const ResetSystemRequest& request, const ResetSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetSystem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::ResetSystemOutcomeCallable SWAS_OPENClient::resetSystemCallable(const ResetSystemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetSystemOutcome()>>(
			[this, request]()
			{
			return this->resetSystem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RestartDatabaseInstanceOutcome SWAS_OPENClient::restartDatabaseInstance(const RestartDatabaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartDatabaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartDatabaseInstanceOutcome(RestartDatabaseInstanceResult(outcome.result()));
	else
		return RestartDatabaseInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::restartDatabaseInstanceAsync(const RestartDatabaseInstanceRequest& request, const RestartDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartDatabaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RestartDatabaseInstanceOutcomeCallable SWAS_OPENClient::restartDatabaseInstanceCallable(const RestartDatabaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartDatabaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartDatabaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::RunCommandOutcome SWAS_OPENClient::runCommand(const RunCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunCommandOutcome(RunCommandResult(outcome.result()));
	else
		return RunCommandOutcome(outcome.error());
}

void SWAS_OPENClient::runCommandAsync(const RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::RunCommandOutcomeCallable SWAS_OPENClient::runCommandCallable(const RunCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunCommandOutcome()>>(
			[this, request]()
			{
			return this->runCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StartDatabaseInstanceOutcome SWAS_OPENClient::startDatabaseInstance(const StartDatabaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDatabaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDatabaseInstanceOutcome(StartDatabaseInstanceResult(outcome.result()));
	else
		return StartDatabaseInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::startDatabaseInstanceAsync(const StartDatabaseInstanceRequest& request, const StartDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDatabaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StartDatabaseInstanceOutcomeCallable SWAS_OPENClient::startDatabaseInstanceCallable(const StartDatabaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDatabaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->startDatabaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StartInstanceOutcome SWAS_OPENClient::startInstance(const StartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartInstanceOutcome(StartInstanceResult(outcome.result()));
	else
		return StartInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::startInstanceAsync(const StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StartInstanceOutcomeCallable SWAS_OPENClient::startInstanceCallable(const StartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstanceOutcome()>>(
			[this, request]()
			{
			return this->startInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StartInstancesOutcome SWAS_OPENClient::startInstances(const StartInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartInstancesOutcome(StartInstancesResult(outcome.result()));
	else
		return StartInstancesOutcome(outcome.error());
}

void SWAS_OPENClient::startInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StartInstancesOutcomeCallable SWAS_OPENClient::startInstancesCallable(const StartInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstancesOutcome()>>(
			[this, request]()
			{
			return this->startInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StartTerminalSessionOutcome SWAS_OPENClient::startTerminalSession(const StartTerminalSessionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTerminalSessionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTerminalSessionOutcome(StartTerminalSessionResult(outcome.result()));
	else
		return StartTerminalSessionOutcome(outcome.error());
}

void SWAS_OPENClient::startTerminalSessionAsync(const StartTerminalSessionRequest& request, const StartTerminalSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTerminalSession(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StartTerminalSessionOutcomeCallable SWAS_OPENClient::startTerminalSessionCallable(const StartTerminalSessionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTerminalSessionOutcome()>>(
			[this, request]()
			{
			return this->startTerminalSession(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StopDatabaseInstanceOutcome SWAS_OPENClient::stopDatabaseInstance(const StopDatabaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDatabaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDatabaseInstanceOutcome(StopDatabaseInstanceResult(outcome.result()));
	else
		return StopDatabaseInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::stopDatabaseInstanceAsync(const StopDatabaseInstanceRequest& request, const StopDatabaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDatabaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StopDatabaseInstanceOutcomeCallable SWAS_OPENClient::stopDatabaseInstanceCallable(const StopDatabaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDatabaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopDatabaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StopInstanceOutcome SWAS_OPENClient::stopInstance(const StopInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstanceOutcome(StopInstanceResult(outcome.result()));
	else
		return StopInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StopInstanceOutcomeCallable SWAS_OPENClient::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::StopInstancesOutcome SWAS_OPENClient::stopInstances(const StopInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstancesOutcome(StopInstancesResult(outcome.result()));
	else
		return StopInstancesOutcome(outcome.error());
}

void SWAS_OPENClient::stopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::StopInstancesOutcomeCallable SWAS_OPENClient::stopInstancesCallable(const StopInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstancesOutcome()>>(
			[this, request]()
			{
			return this->stopInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::TagResourcesOutcome SWAS_OPENClient::tagResources(const TagResourcesRequest &request) const
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

void SWAS_OPENClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::TagResourcesOutcomeCallable SWAS_OPENClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UntagResourcesOutcome SWAS_OPENClient::untagResources(const UntagResourcesRequest &request) const
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

void SWAS_OPENClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UntagResourcesOutcomeCallable SWAS_OPENClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UpdateCommandAttributeOutcome SWAS_OPENClient::updateCommandAttribute(const UpdateCommandAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCommandAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCommandAttributeOutcome(UpdateCommandAttributeResult(outcome.result()));
	else
		return UpdateCommandAttributeOutcome(outcome.error());
}

void SWAS_OPENClient::updateCommandAttributeAsync(const UpdateCommandAttributeRequest& request, const UpdateCommandAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCommandAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UpdateCommandAttributeOutcomeCallable SWAS_OPENClient::updateCommandAttributeCallable(const UpdateCommandAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCommandAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateCommandAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UpdateDiskAttributeOutcome SWAS_OPENClient::updateDiskAttribute(const UpdateDiskAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDiskAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDiskAttributeOutcome(UpdateDiskAttributeResult(outcome.result()));
	else
		return UpdateDiskAttributeOutcome(outcome.error());
}

void SWAS_OPENClient::updateDiskAttributeAsync(const UpdateDiskAttributeRequest& request, const UpdateDiskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDiskAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UpdateDiskAttributeOutcomeCallable SWAS_OPENClient::updateDiskAttributeCallable(const UpdateDiskAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDiskAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateDiskAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UpdateInstanceAttributeOutcome SWAS_OPENClient::updateInstanceAttribute(const UpdateInstanceAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceAttributeOutcome(UpdateInstanceAttributeResult(outcome.result()));
	else
		return UpdateInstanceAttributeOutcome(outcome.error());
}

void SWAS_OPENClient::updateInstanceAttributeAsync(const UpdateInstanceAttributeRequest& request, const UpdateInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UpdateInstanceAttributeOutcomeCallable SWAS_OPENClient::updateInstanceAttributeCallable(const UpdateInstanceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UpdateSnapshotAttributeOutcome SWAS_OPENClient::updateSnapshotAttribute(const UpdateSnapshotAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSnapshotAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSnapshotAttributeOutcome(UpdateSnapshotAttributeResult(outcome.result()));
	else
		return UpdateSnapshotAttributeOutcome(outcome.error());
}

void SWAS_OPENClient::updateSnapshotAttributeAsync(const UpdateSnapshotAttributeRequest& request, const UpdateSnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSnapshotAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UpdateSnapshotAttributeOutcomeCallable SWAS_OPENClient::updateSnapshotAttributeCallable(const UpdateSnapshotAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSnapshotAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateSnapshotAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UpgradeInstanceOutcome SWAS_OPENClient::upgradeInstance(const UpgradeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeInstanceOutcome(UpgradeInstanceResult(outcome.result()));
	else
		return UpgradeInstanceOutcome(outcome.error());
}

void SWAS_OPENClient::upgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UpgradeInstanceOutcomeCallable SWAS_OPENClient::upgradeInstanceCallable(const UpgradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SWAS_OPENClient::UploadInstanceKeyPairOutcome SWAS_OPENClient::uploadInstanceKeyPair(const UploadInstanceKeyPairRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadInstanceKeyPairOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadInstanceKeyPairOutcome(UploadInstanceKeyPairResult(outcome.result()));
	else
		return UploadInstanceKeyPairOutcome(outcome.error());
}

void SWAS_OPENClient::uploadInstanceKeyPairAsync(const UploadInstanceKeyPairRequest& request, const UploadInstanceKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadInstanceKeyPair(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SWAS_OPENClient::UploadInstanceKeyPairOutcomeCallable SWAS_OPENClient::uploadInstanceKeyPairCallable(const UploadInstanceKeyPairRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadInstanceKeyPairOutcome()>>(
			[this, request]()
			{
			return this->uploadInstanceKeyPair(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

