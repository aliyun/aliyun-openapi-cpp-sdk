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

#include <alibabacloud/voicenavigator/VoiceNavigatorClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

namespace
{
	const std::string SERVICE_NAME = "VoiceNavigator";
}

VoiceNavigatorClient::VoiceNavigatorClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "voicebot");
}

VoiceNavigatorClient::VoiceNavigatorClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "voicebot");
}

VoiceNavigatorClient::VoiceNavigatorClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "voicebot");
}

VoiceNavigatorClient::~VoiceNavigatorClient()
{}

VoiceNavigatorClient::AuditTTSVoiceOutcome VoiceNavigatorClient::auditTTSVoice(const AuditTTSVoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuditTTSVoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuditTTSVoiceOutcome(AuditTTSVoiceResult(outcome.result()));
	else
		return AuditTTSVoiceOutcome(outcome.error());
}

void VoiceNavigatorClient::auditTTSVoiceAsync(const AuditTTSVoiceRequest& request, const AuditTTSVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, auditTTSVoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::AuditTTSVoiceOutcomeCallable VoiceNavigatorClient::auditTTSVoiceCallable(const AuditTTSVoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuditTTSVoiceOutcome()>>(
			[this, request]()
			{
			return this->auditTTSVoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::AuthorizedOutcome VoiceNavigatorClient::authorized(const AuthorizedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizedOutcome(AuthorizedResult(outcome.result()));
	else
		return AuthorizedOutcome(outcome.error());
}

void VoiceNavigatorClient::authorizedAsync(const AuthorizedRequest& request, const AuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::AuthorizedOutcomeCallable VoiceNavigatorClient::authorizedCallable(const AuthorizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizedOutcome()>>(
			[this, request]()
			{
			return this->authorized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::BatchDeleteNavigationScriptsOutcome VoiceNavigatorClient::batchDeleteNavigationScripts(const BatchDeleteNavigationScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteNavigationScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteNavigationScriptsOutcome(BatchDeleteNavigationScriptsResult(outcome.result()));
	else
		return BatchDeleteNavigationScriptsOutcome(outcome.error());
}

void VoiceNavigatorClient::batchDeleteNavigationScriptsAsync(const BatchDeleteNavigationScriptsRequest& request, const BatchDeleteNavigationScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteNavigationScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::BatchDeleteNavigationScriptsOutcomeCallable VoiceNavigatorClient::batchDeleteNavigationScriptsCallable(const BatchDeleteNavigationScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteNavigationScriptsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteNavigationScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::BatchMoveNavigationScriptsOutcome VoiceNavigatorClient::batchMoveNavigationScripts(const BatchMoveNavigationScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchMoveNavigationScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchMoveNavigationScriptsOutcome(BatchMoveNavigationScriptsResult(outcome.result()));
	else
		return BatchMoveNavigationScriptsOutcome(outcome.error());
}

void VoiceNavigatorClient::batchMoveNavigationScriptsAsync(const BatchMoveNavigationScriptsRequest& request, const BatchMoveNavigationScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchMoveNavigationScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::BatchMoveNavigationScriptsOutcomeCallable VoiceNavigatorClient::batchMoveNavigationScriptsCallable(const BatchMoveNavigationScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchMoveNavigationScriptsOutcome()>>(
			[this, request]()
			{
			return this->batchMoveNavigationScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::BeginDialogueOutcome VoiceNavigatorClient::beginDialogue(const BeginDialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BeginDialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BeginDialogueOutcome(BeginDialogueResult(outcome.result()));
	else
		return BeginDialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::beginDialogueAsync(const BeginDialogueRequest& request, const BeginDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, beginDialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::BeginDialogueOutcomeCallable VoiceNavigatorClient::beginDialogueCallable(const BeginDialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BeginDialogueOutcome()>>(
			[this, request]()
			{
			return this->beginDialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::CollectedNumberOutcome VoiceNavigatorClient::collectedNumber(const CollectedNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CollectedNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CollectedNumberOutcome(CollectedNumberResult(outcome.result()));
	else
		return CollectedNumberOutcome(outcome.error());
}

void VoiceNavigatorClient::collectedNumberAsync(const CollectedNumberRequest& request, const CollectedNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, collectedNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::CollectedNumberOutcomeCallable VoiceNavigatorClient::collectedNumberCallable(const CollectedNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CollectedNumberOutcome()>>(
			[this, request]()
			{
			return this->collectedNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::CreateCategoryOutcome VoiceNavigatorClient::createCategory(const CreateCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCategoryOutcome(CreateCategoryResult(outcome.result()));
	else
		return CreateCategoryOutcome(outcome.error());
}

void VoiceNavigatorClient::createCategoryAsync(const CreateCategoryRequest& request, const CreateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::CreateCategoryOutcomeCallable VoiceNavigatorClient::createCategoryCallable(const CreateCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCategoryOutcome()>>(
			[this, request]()
			{
			return this->createCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::CreateInstanceOutcome VoiceNavigatorClient::createInstance(const CreateInstanceRequest &request) const
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

void VoiceNavigatorClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::CreateInstanceOutcomeCallable VoiceNavigatorClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::CreateKnowledgeOutcome VoiceNavigatorClient::createKnowledge(const CreateKnowledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKnowledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKnowledgeOutcome(CreateKnowledgeResult(outcome.result()));
	else
		return CreateKnowledgeOutcome(outcome.error());
}

void VoiceNavigatorClient::createKnowledgeAsync(const CreateKnowledgeRequest& request, const CreateKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::CreateKnowledgeOutcomeCallable VoiceNavigatorClient::createKnowledgeCallable(const CreateKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->createKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::CreateRedirectionOutcome VoiceNavigatorClient::createRedirection(const CreateRedirectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRedirectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRedirectionOutcome(CreateRedirectionResult(outcome.result()));
	else
		return CreateRedirectionOutcome(outcome.error());
}

void VoiceNavigatorClient::createRedirectionAsync(const CreateRedirectionRequest& request, const CreateRedirectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRedirection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::CreateRedirectionOutcomeCallable VoiceNavigatorClient::createRedirectionCallable(const CreateRedirectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRedirectionOutcome()>>(
			[this, request]()
			{
			return this->createRedirection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DebugAuthorizedOutcome VoiceNavigatorClient::debugAuthorized(const DebugAuthorizedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugAuthorizedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugAuthorizedOutcome(DebugAuthorizedResult(outcome.result()));
	else
		return DebugAuthorizedOutcome(outcome.error());
}

void VoiceNavigatorClient::debugAuthorizedAsync(const DebugAuthorizedRequest& request, const DebugAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugAuthorized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DebugAuthorizedOutcomeCallable VoiceNavigatorClient::debugAuthorizedCallable(const DebugAuthorizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugAuthorizedOutcome()>>(
			[this, request]()
			{
			return this->debugAuthorized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DebugBeginDialogueOutcome VoiceNavigatorClient::debugBeginDialogue(const DebugBeginDialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugBeginDialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugBeginDialogueOutcome(DebugBeginDialogueResult(outcome.result()));
	else
		return DebugBeginDialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::debugBeginDialogueAsync(const DebugBeginDialogueRequest& request, const DebugBeginDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugBeginDialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DebugBeginDialogueOutcomeCallable VoiceNavigatorClient::debugBeginDialogueCallable(const DebugBeginDialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugBeginDialogueOutcome()>>(
			[this, request]()
			{
			return this->debugBeginDialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DebugCollectedNumberOutcome VoiceNavigatorClient::debugCollectedNumber(const DebugCollectedNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugCollectedNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugCollectedNumberOutcome(DebugCollectedNumberResult(outcome.result()));
	else
		return DebugCollectedNumberOutcome(outcome.error());
}

void VoiceNavigatorClient::debugCollectedNumberAsync(const DebugCollectedNumberRequest& request, const DebugCollectedNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugCollectedNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DebugCollectedNumberOutcomeCallable VoiceNavigatorClient::debugCollectedNumberCallable(const DebugCollectedNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugCollectedNumberOutcome()>>(
			[this, request]()
			{
			return this->debugCollectedNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DebugDialogueOutcome VoiceNavigatorClient::debugDialogue(const DebugDialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugDialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugDialogueOutcome(DebugDialogueResult(outcome.result()));
	else
		return DebugDialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::debugDialogueAsync(const DebugDialogueRequest& request, const DebugDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugDialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DebugDialogueOutcomeCallable VoiceNavigatorClient::debugDialogueCallable(const DebugDialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugDialogueOutcome()>>(
			[this, request]()
			{
			return this->debugDialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DeleteCategoryOutcome VoiceNavigatorClient::deleteCategory(const DeleteCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCategoryOutcome(DeleteCategoryResult(outcome.result()));
	else
		return DeleteCategoryOutcome(outcome.error());
}

void VoiceNavigatorClient::deleteCategoryAsync(const DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DeleteCategoryOutcomeCallable VoiceNavigatorClient::deleteCategoryCallable(const DeleteCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DeleteInstanceOutcome VoiceNavigatorClient::deleteInstance(const DeleteInstanceRequest &request) const
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

void VoiceNavigatorClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DeleteInstanceOutcomeCallable VoiceNavigatorClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DeleteNavigationScriptOutcome VoiceNavigatorClient::deleteNavigationScript(const DeleteNavigationScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNavigationScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNavigationScriptOutcome(DeleteNavigationScriptResult(outcome.result()));
	else
		return DeleteNavigationScriptOutcome(outcome.error());
}

void VoiceNavigatorClient::deleteNavigationScriptAsync(const DeleteNavigationScriptRequest& request, const DeleteNavigationScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNavigationScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DeleteNavigationScriptOutcomeCallable VoiceNavigatorClient::deleteNavigationScriptCallable(const DeleteNavigationScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNavigationScriptOutcome()>>(
			[this, request]()
			{
			return this->deleteNavigationScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeCategoryTreeOutcome VoiceNavigatorClient::describeCategoryTree(const DescribeCategoryTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCategoryTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCategoryTreeOutcome(DescribeCategoryTreeResult(outcome.result()));
	else
		return DescribeCategoryTreeOutcome(outcome.error());
}

void VoiceNavigatorClient::describeCategoryTreeAsync(const DescribeCategoryTreeRequest& request, const DescribeCategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCategoryTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeCategoryTreeOutcomeCallable VoiceNavigatorClient::describeCategoryTreeCallable(const DescribeCategoryTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCategoryTreeOutcome()>>(
			[this, request]()
			{
			return this->describeCategoryTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeConversationOutcome VoiceNavigatorClient::describeConversation(const DescribeConversationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConversationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConversationOutcome(DescribeConversationResult(outcome.result()));
	else
		return DescribeConversationOutcome(outcome.error());
}

void VoiceNavigatorClient::describeConversationAsync(const DescribeConversationRequest& request, const DescribeConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConversation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeConversationOutcomeCallable VoiceNavigatorClient::describeConversationCallable(const DescribeConversationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConversationOutcome()>>(
			[this, request]()
			{
			return this->describeConversation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeConversationContextOutcome VoiceNavigatorClient::describeConversationContext(const DescribeConversationContextRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConversationContextOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConversationContextOutcome(DescribeConversationContextResult(outcome.result()));
	else
		return DescribeConversationContextOutcome(outcome.error());
}

void VoiceNavigatorClient::describeConversationContextAsync(const DescribeConversationContextRequest& request, const DescribeConversationContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConversationContext(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeConversationContextOutcomeCallable VoiceNavigatorClient::describeConversationContextCallable(const DescribeConversationContextRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConversationContextOutcome()>>(
			[this, request]()
			{
			return this->describeConversationContext(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeExportProgressOutcome VoiceNavigatorClient::describeExportProgress(const DescribeExportProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExportProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExportProgressOutcome(DescribeExportProgressResult(outcome.result()));
	else
		return DescribeExportProgressOutcome(outcome.error());
}

void VoiceNavigatorClient::describeExportProgressAsync(const DescribeExportProgressRequest& request, const DescribeExportProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExportProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeExportProgressOutcomeCallable VoiceNavigatorClient::describeExportProgressCallable(const DescribeExportProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExportProgressOutcome()>>(
			[this, request]()
			{
			return this->describeExportProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeInstanceOutcome VoiceNavigatorClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeInstanceOutcomeCallable VoiceNavigatorClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeKnowledgeOutcome VoiceNavigatorClient::describeKnowledge(const DescribeKnowledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKnowledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKnowledgeOutcome(DescribeKnowledgeResult(outcome.result()));
	else
		return DescribeKnowledgeOutcome(outcome.error());
}

void VoiceNavigatorClient::describeKnowledgeAsync(const DescribeKnowledgeRequest& request, const DescribeKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeKnowledgeOutcomeCallable VoiceNavigatorClient::describeKnowledgeCallable(const DescribeKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->describeKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeNavigationConfigOutcome VoiceNavigatorClient::describeNavigationConfig(const DescribeNavigationConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNavigationConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNavigationConfigOutcome(DescribeNavigationConfigResult(outcome.result()));
	else
		return DescribeNavigationConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::describeNavigationConfigAsync(const DescribeNavigationConfigRequest& request, const DescribeNavigationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNavigationConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeNavigationConfigOutcomeCallable VoiceNavigatorClient::describeNavigationConfigCallable(const DescribeNavigationConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNavigationConfigOutcome()>>(
			[this, request]()
			{
			return this->describeNavigationConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeRecordingOutcome VoiceNavigatorClient::describeRecording(const DescribeRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordingOutcome(DescribeRecordingResult(outcome.result()));
	else
		return DescribeRecordingOutcome(outcome.error());
}

void VoiceNavigatorClient::describeRecordingAsync(const DescribeRecordingRequest& request, const DescribeRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeRecordingOutcomeCallable VoiceNavigatorClient::describeRecordingCallable(const DescribeRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordingOutcome()>>(
			[this, request]()
			{
			return this->describeRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeRedirectionOutcome VoiceNavigatorClient::describeRedirection(const DescribeRedirectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRedirectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRedirectionOutcome(DescribeRedirectionResult(outcome.result()));
	else
		return DescribeRedirectionOutcome(outcome.error());
}

void VoiceNavigatorClient::describeRedirectionAsync(const DescribeRedirectionRequest& request, const DescribeRedirectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRedirection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeRedirectionOutcomeCallable VoiceNavigatorClient::describeRedirectionCallable(const DescribeRedirectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRedirectionOutcome()>>(
			[this, request]()
			{
			return this->describeRedirection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeStatisticalDataOutcome VoiceNavigatorClient::describeStatisticalData(const DescribeStatisticalDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStatisticalDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStatisticalDataOutcome(DescribeStatisticalDataResult(outcome.result()));
	else
		return DescribeStatisticalDataOutcome(outcome.error());
}

void VoiceNavigatorClient::describeStatisticalDataAsync(const DescribeStatisticalDataRequest& request, const DescribeStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStatisticalData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeStatisticalDataOutcomeCallable VoiceNavigatorClient::describeStatisticalDataCallable(const DescribeStatisticalDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStatisticalDataOutcome()>>(
			[this, request]()
			{
			return this->describeStatisticalData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeTTSConfigOutcome VoiceNavigatorClient::describeTTSConfig(const DescribeTTSConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTTSConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTTSConfigOutcome(DescribeTTSConfigResult(outcome.result()));
	else
		return DescribeTTSConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::describeTTSConfigAsync(const DescribeTTSConfigRequest& request, const DescribeTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTTSConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeTTSConfigOutcomeCallable VoiceNavigatorClient::describeTTSConfigCallable(const DescribeTTSConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTTSConfigOutcome()>>(
			[this, request]()
			{
			return this->describeTTSConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DialogueOutcome VoiceNavigatorClient::dialogue(const DialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DialogueOutcome(DialogueResult(outcome.result()));
	else
		return DialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::dialogueAsync(const DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DialogueOutcomeCallable VoiceNavigatorClient::dialogueCallable(const DialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DialogueOutcome()>>(
			[this, request]()
			{
			return this->dialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DisableInstanceOutcome VoiceNavigatorClient::disableInstance(const DisableInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableInstanceOutcome(DisableInstanceResult(outcome.result()));
	else
		return DisableInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::disableInstanceAsync(const DisableInstanceRequest& request, const DisableInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DisableInstanceOutcomeCallable VoiceNavigatorClient::disableInstanceCallable(const DisableInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableInstanceOutcome()>>(
			[this, request]()
			{
			return this->disableInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DuplicateInstanceOutcome VoiceNavigatorClient::duplicateInstance(const DuplicateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DuplicateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DuplicateInstanceOutcome(DuplicateInstanceResult(outcome.result()));
	else
		return DuplicateInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::duplicateInstanceAsync(const DuplicateInstanceRequest& request, const DuplicateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, duplicateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DuplicateInstanceOutcomeCallable VoiceNavigatorClient::duplicateInstanceCallable(const DuplicateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DuplicateInstanceOutcome()>>(
			[this, request]()
			{
			return this->duplicateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::EnableInstanceOutcome VoiceNavigatorClient::enableInstance(const EnableInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableInstanceOutcome(EnableInstanceResult(outcome.result()));
	else
		return EnableInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::enableInstanceAsync(const EnableInstanceRequest& request, const EnableInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::EnableInstanceOutcomeCallable VoiceNavigatorClient::enableInstanceCallable(const EnableInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableInstanceOutcome()>>(
			[this, request]()
			{
			return this->enableInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::EndDialogueOutcome VoiceNavigatorClient::endDialogue(const EndDialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EndDialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EndDialogueOutcome(EndDialogueResult(outcome.result()));
	else
		return EndDialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::endDialogueAsync(const EndDialogueRequest& request, const EndDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, endDialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::EndDialogueOutcomeCallable VoiceNavigatorClient::endDialogueCallable(const EndDialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EndDialogueOutcome()>>(
			[this, request]()
			{
			return this->endDialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ExportConversationDetailsOutcome VoiceNavigatorClient::exportConversationDetails(const ExportConversationDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportConversationDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportConversationDetailsOutcome(ExportConversationDetailsResult(outcome.result()));
	else
		return ExportConversationDetailsOutcome(outcome.error());
}

void VoiceNavigatorClient::exportConversationDetailsAsync(const ExportConversationDetailsRequest& request, const ExportConversationDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportConversationDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ExportConversationDetailsOutcomeCallable VoiceNavigatorClient::exportConversationDetailsCallable(const ExportConversationDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportConversationDetailsOutcome()>>(
			[this, request]()
			{
			return this->exportConversationDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ExportStatisticalDataOutcome VoiceNavigatorClient::exportStatisticalData(const ExportStatisticalDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportStatisticalDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportStatisticalDataOutcome(ExportStatisticalDataResult(outcome.result()));
	else
		return ExportStatisticalDataOutcome(outcome.error());
}

void VoiceNavigatorClient::exportStatisticalDataAsync(const ExportStatisticalDataRequest& request, const ExportStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportStatisticalData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ExportStatisticalDataOutcomeCallable VoiceNavigatorClient::exportStatisticalDataCallable(const ExportStatisticalDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportStatisticalDataOutcome()>>(
			[this, request]()
			{
			return this->exportStatisticalData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListCategoriesOutcome VoiceNavigatorClient::listCategories(const ListCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCategoriesOutcome(ListCategoriesResult(outcome.result()));
	else
		return ListCategoriesOutcome(outcome.error());
}

void VoiceNavigatorClient::listCategoriesAsync(const ListCategoriesRequest& request, const ListCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListCategoriesOutcomeCallable VoiceNavigatorClient::listCategoriesCallable(const ListCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCategoriesOutcome()>>(
			[this, request]()
			{
			return this->listCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListConversationDetailsOutcome VoiceNavigatorClient::listConversationDetails(const ListConversationDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConversationDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConversationDetailsOutcome(ListConversationDetailsResult(outcome.result()));
	else
		return ListConversationDetailsOutcome(outcome.error());
}

void VoiceNavigatorClient::listConversationDetailsAsync(const ListConversationDetailsRequest& request, const ListConversationDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConversationDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListConversationDetailsOutcomeCallable VoiceNavigatorClient::listConversationDetailsCallable(const ListConversationDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConversationDetailsOutcome()>>(
			[this, request]()
			{
			return this->listConversationDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListConversationsOutcome VoiceNavigatorClient::listConversations(const ListConversationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConversationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConversationsOutcome(ListConversationsResult(outcome.result()));
	else
		return ListConversationsOutcome(outcome.error());
}

void VoiceNavigatorClient::listConversationsAsync(const ListConversationsRequest& request, const ListConversationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConversations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListConversationsOutcomeCallable VoiceNavigatorClient::listConversationsCallable(const ListConversationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConversationsOutcome()>>(
			[this, request]()
			{
			return this->listConversations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListInstancesOutcome VoiceNavigatorClient::listInstances(const ListInstancesRequest &request) const
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

void VoiceNavigatorClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListInstancesOutcomeCallable VoiceNavigatorClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListNavigationScriptsOutcome VoiceNavigatorClient::listNavigationScripts(const ListNavigationScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNavigationScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNavigationScriptsOutcome(ListNavigationScriptsResult(outcome.result()));
	else
		return ListNavigationScriptsOutcome(outcome.error());
}

void VoiceNavigatorClient::listNavigationScriptsAsync(const ListNavigationScriptsRequest& request, const ListNavigationScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNavigationScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListNavigationScriptsOutcomeCallable VoiceNavigatorClient::listNavigationScriptsCallable(const ListNavigationScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNavigationScriptsOutcome()>>(
			[this, request]()
			{
			return this->listNavigationScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListPublishHistoriesOutcome VoiceNavigatorClient::listPublishHistories(const ListPublishHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPublishHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPublishHistoriesOutcome(ListPublishHistoriesResult(outcome.result()));
	else
		return ListPublishHistoriesOutcome(outcome.error());
}

void VoiceNavigatorClient::listPublishHistoriesAsync(const ListPublishHistoriesRequest& request, const ListPublishHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPublishHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListPublishHistoriesOutcomeCallable VoiceNavigatorClient::listPublishHistoriesCallable(const ListPublishHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPublishHistoriesOutcome()>>(
			[this, request]()
			{
			return this->listPublishHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyAskingBackConfigOutcome VoiceNavigatorClient::modifyAskingBackConfig(const ModifyAskingBackConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAskingBackConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAskingBackConfigOutcome(ModifyAskingBackConfigResult(outcome.result()));
	else
		return ModifyAskingBackConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyAskingBackConfigAsync(const ModifyAskingBackConfigRequest& request, const ModifyAskingBackConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAskingBackConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyAskingBackConfigOutcomeCallable VoiceNavigatorClient::modifyAskingBackConfigCallable(const ModifyAskingBackConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAskingBackConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAskingBackConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyCategoryOutcome VoiceNavigatorClient::modifyCategory(const ModifyCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCategoryOutcome(ModifyCategoryResult(outcome.result()));
	else
		return ModifyCategoryOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyCategoryAsync(const ModifyCategoryRequest& request, const ModifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyCategoryOutcomeCallable VoiceNavigatorClient::modifyCategoryCallable(const ModifyCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCategoryOutcome()>>(
			[this, request]()
			{
			return this->modifyCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyComplainingConfigOutcome VoiceNavigatorClient::modifyComplainingConfig(const ModifyComplainingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyComplainingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyComplainingConfigOutcome(ModifyComplainingConfigResult(outcome.result()));
	else
		return ModifyComplainingConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyComplainingConfigAsync(const ModifyComplainingConfigRequest& request, const ModifyComplainingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyComplainingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyComplainingConfigOutcomeCallable VoiceNavigatorClient::modifyComplainingConfigCallable(const ModifyComplainingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyComplainingConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyComplainingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyGreetingConfigOutcome VoiceNavigatorClient::modifyGreetingConfig(const ModifyGreetingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGreetingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGreetingConfigOutcome(ModifyGreetingConfigResult(outcome.result()));
	else
		return ModifyGreetingConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyGreetingConfigAsync(const ModifyGreetingConfigRequest& request, const ModifyGreetingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGreetingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyGreetingConfigOutcomeCallable VoiceNavigatorClient::modifyGreetingConfigCallable(const ModifyGreetingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGreetingConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyGreetingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyInstanceOutcome VoiceNavigatorClient::modifyInstance(const ModifyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceOutcome(ModifyInstanceResult(outcome.result()));
	else
		return ModifyInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyInstanceOutcomeCallable VoiceNavigatorClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyKnowledgeOutcome VoiceNavigatorClient::modifyKnowledge(const ModifyKnowledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyKnowledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyKnowledgeOutcome(ModifyKnowledgeResult(outcome.result()));
	else
		return ModifyKnowledgeOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyKnowledgeAsync(const ModifyKnowledgeRequest& request, const ModifyKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyKnowledgeOutcomeCallable VoiceNavigatorClient::modifyKnowledgeCallable(const ModifyKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->modifyKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyRedirectionOutcome VoiceNavigatorClient::modifyRedirection(const ModifyRedirectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRedirectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRedirectionOutcome(ModifyRedirectionResult(outcome.result()));
	else
		return ModifyRedirectionOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyRedirectionAsync(const ModifyRedirectionRequest& request, const ModifyRedirectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRedirection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyRedirectionOutcomeCallable VoiceNavigatorClient::modifyRedirectionCallable(const ModifyRedirectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRedirectionOutcome()>>(
			[this, request]()
			{
			return this->modifyRedirection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyRepeatingConfigOutcome VoiceNavigatorClient::modifyRepeatingConfig(const ModifyRepeatingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRepeatingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRepeatingConfigOutcome(ModifyRepeatingConfigResult(outcome.result()));
	else
		return ModifyRepeatingConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyRepeatingConfigAsync(const ModifyRepeatingConfigRequest& request, const ModifyRepeatingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRepeatingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyRepeatingConfigOutcomeCallable VoiceNavigatorClient::modifyRepeatingConfigCallable(const ModifyRepeatingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRepeatingConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyRepeatingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifySilenceTimeoutConfigOutcome VoiceNavigatorClient::modifySilenceTimeoutConfig(const ModifySilenceTimeoutConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySilenceTimeoutConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySilenceTimeoutConfigOutcome(ModifySilenceTimeoutConfigResult(outcome.result()));
	else
		return ModifySilenceTimeoutConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifySilenceTimeoutConfigAsync(const ModifySilenceTimeoutConfigRequest& request, const ModifySilenceTimeoutConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySilenceTimeoutConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifySilenceTimeoutConfigOutcomeCallable VoiceNavigatorClient::modifySilenceTimeoutConfigCallable(const ModifySilenceTimeoutConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySilenceTimeoutConfigOutcome()>>(
			[this, request]()
			{
			return this->modifySilenceTimeoutConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyTTSConfigOutcome VoiceNavigatorClient::modifyTTSConfig(const ModifyTTSConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTTSConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTTSConfigOutcome(ModifyTTSConfigResult(outcome.result()));
	else
		return ModifyTTSConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyTTSConfigAsync(const ModifyTTSConfigRequest& request, const ModifyTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTTSConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyTTSConfigOutcomeCallable VoiceNavigatorClient::modifyTTSConfigCallable(const ModifyTTSConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTTSConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyTTSConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyUnrecognizingConfigOutcome VoiceNavigatorClient::modifyUnrecognizingConfig(const ModifyUnrecognizingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUnrecognizingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUnrecognizingConfigOutcome(ModifyUnrecognizingConfigResult(outcome.result()));
	else
		return ModifyUnrecognizingConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyUnrecognizingConfigAsync(const ModifyUnrecognizingConfigRequest& request, const ModifyUnrecognizingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUnrecognizingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyUnrecognizingConfigOutcomeCallable VoiceNavigatorClient::modifyUnrecognizingConfigCallable(const ModifyUnrecognizingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUnrecognizingConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyUnrecognizingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::MoveCategoryOutcome VoiceNavigatorClient::moveCategory(const MoveCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveCategoryOutcome(MoveCategoryResult(outcome.result()));
	else
		return MoveCategoryOutcome(outcome.error());
}

void VoiceNavigatorClient::moveCategoryAsync(const MoveCategoryRequest& request, const MoveCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::MoveCategoryOutcomeCallable VoiceNavigatorClient::moveCategoryCallable(const MoveCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveCategoryOutcome()>>(
			[this, request]()
			{
			return this->moveCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::MoveNavigationScriptOutcome VoiceNavigatorClient::moveNavigationScript(const MoveNavigationScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveNavigationScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveNavigationScriptOutcome(MoveNavigationScriptResult(outcome.result()));
	else
		return MoveNavigationScriptOutcome(outcome.error());
}

void VoiceNavigatorClient::moveNavigationScriptAsync(const MoveNavigationScriptRequest& request, const MoveNavigationScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveNavigationScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::MoveNavigationScriptOutcomeCallable VoiceNavigatorClient::moveNavigationScriptCallable(const MoveNavigationScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveNavigationScriptOutcome()>>(
			[this, request]()
			{
			return this->moveNavigationScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::PublishInstanceOutcome VoiceNavigatorClient::publishInstance(const PublishInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishInstanceOutcome(PublishInstanceResult(outcome.result()));
	else
		return PublishInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::publishInstanceAsync(const PublishInstanceRequest& request, const PublishInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::PublishInstanceOutcomeCallable VoiceNavigatorClient::publishInstanceCallable(const PublishInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishInstanceOutcome()>>(
			[this, request]()
			{
			return this->publishInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::QueryConversationsOutcome VoiceNavigatorClient::queryConversations(const QueryConversationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryConversationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryConversationsOutcome(QueryConversationsResult(outcome.result()));
	else
		return QueryConversationsOutcome(outcome.error());
}

void VoiceNavigatorClient::queryConversationsAsync(const QueryConversationsRequest& request, const QueryConversationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryConversations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::QueryConversationsOutcomeCallable VoiceNavigatorClient::queryConversationsCallable(const QueryConversationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryConversationsOutcome()>>(
			[this, request]()
			{
			return this->queryConversations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::QueryNavigationScriptsOutcome VoiceNavigatorClient::queryNavigationScripts(const QueryNavigationScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryNavigationScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryNavigationScriptsOutcome(QueryNavigationScriptsResult(outcome.result()));
	else
		return QueryNavigationScriptsOutcome(outcome.error());
}

void VoiceNavigatorClient::queryNavigationScriptsAsync(const QueryNavigationScriptsRequest& request, const QueryNavigationScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryNavigationScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::QueryNavigationScriptsOutcomeCallable VoiceNavigatorClient::queryNavigationScriptsCallable(const QueryNavigationScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryNavigationScriptsOutcome()>>(
			[this, request]()
			{
			return this->queryNavigationScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::QueryPerformanceIndicatorsOutcome VoiceNavigatorClient::queryPerformanceIndicators(const QueryPerformanceIndicatorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPerformanceIndicatorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPerformanceIndicatorsOutcome(QueryPerformanceIndicatorsResult(outcome.result()));
	else
		return QueryPerformanceIndicatorsOutcome(outcome.error());
}

void VoiceNavigatorClient::queryPerformanceIndicatorsAsync(const QueryPerformanceIndicatorsRequest& request, const QueryPerformanceIndicatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPerformanceIndicators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::QueryPerformanceIndicatorsOutcomeCallable VoiceNavigatorClient::queryPerformanceIndicatorsCallable(const QueryPerformanceIndicatorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPerformanceIndicatorsOutcome()>>(
			[this, request]()
			{
			return this->queryPerformanceIndicators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::QueryRecordingOutcome VoiceNavigatorClient::queryRecording(const QueryRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordingOutcome(QueryRecordingResult(outcome.result()));
	else
		return QueryRecordingOutcome(outcome.error());
}

void VoiceNavigatorClient::queryRecordingAsync(const QueryRecordingRequest& request, const QueryRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::QueryRecordingOutcomeCallable VoiceNavigatorClient::queryRecordingCallable(const QueryRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordingOutcome()>>(
			[this, request]()
			{
			return this->queryRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::RollbackInstanceOutcome VoiceNavigatorClient::rollbackInstance(const RollbackInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackInstanceOutcome(RollbackInstanceResult(outcome.result()));
	else
		return RollbackInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::rollbackInstanceAsync(const RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::RollbackInstanceOutcomeCallable VoiceNavigatorClient::rollbackInstanceCallable(const RollbackInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackInstanceOutcome()>>(
			[this, request]()
			{
			return this->rollbackInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::SaveRecordingOutcome VoiceNavigatorClient::saveRecording(const SaveRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveRecordingOutcome(SaveRecordingResult(outcome.result()));
	else
		return SaveRecordingOutcome(outcome.error());
}

void VoiceNavigatorClient::saveRecordingAsync(const SaveRecordingRequest& request, const SaveRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::SaveRecordingOutcomeCallable VoiceNavigatorClient::saveRecordingCallable(const SaveRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveRecordingOutcome()>>(
			[this, request]()
			{
			return this->saveRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::SilenceTimeoutOutcome VoiceNavigatorClient::silenceTimeout(const SilenceTimeoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SilenceTimeoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SilenceTimeoutOutcome(SilenceTimeoutResult(outcome.result()));
	else
		return SilenceTimeoutOutcome(outcome.error());
}

void VoiceNavigatorClient::silenceTimeoutAsync(const SilenceTimeoutRequest& request, const SilenceTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, silenceTimeout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::SilenceTimeoutOutcomeCallable VoiceNavigatorClient::silenceTimeoutCallable(const SilenceTimeoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SilenceTimeoutOutcome()>>(
			[this, request]()
			{
			return this->silenceTimeout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

