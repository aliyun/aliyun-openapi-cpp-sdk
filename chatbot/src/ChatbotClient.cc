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

#include <alibabacloud/chatbot/ChatbotClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

namespace
{
	const std::string SERVICE_NAME = "Chatbot";
}

ChatbotClient::ChatbotClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "chatbot");
}

ChatbotClient::ChatbotClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "chatbot");
}

ChatbotClient::ChatbotClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "chatbot");
}

ChatbotClient::~ChatbotClient()
{}

ChatbotClient::ActivatePerspectiveOutcome ChatbotClient::activatePerspective(const ActivatePerspectiveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivatePerspectiveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivatePerspectiveOutcome(ActivatePerspectiveResult(outcome.result()));
	else
		return ActivatePerspectiveOutcome(outcome.error());
}

void ChatbotClient::activatePerspectiveAsync(const ActivatePerspectiveRequest& request, const ActivatePerspectiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activatePerspective(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::ActivatePerspectiveOutcomeCallable ChatbotClient::activatePerspectiveCallable(const ActivatePerspectiveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivatePerspectiveOutcome()>>(
			[this, request]()
			{
			return this->activatePerspective(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::AddSynonymOutcome ChatbotClient::addSynonym(const AddSynonymRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSynonymOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSynonymOutcome(AddSynonymResult(outcome.result()));
	else
		return AddSynonymOutcome(outcome.error());
}

void ChatbotClient::addSynonymAsync(const AddSynonymRequest& request, const AddSynonymAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSynonym(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::AddSynonymOutcomeCallable ChatbotClient::addSynonymCallable(const AddSynonymRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSynonymOutcome()>>(
			[this, request]()
			{
			return this->addSynonym(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::AppendEntityMemberOutcome ChatbotClient::appendEntityMember(const AppendEntityMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AppendEntityMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AppendEntityMemberOutcome(AppendEntityMemberResult(outcome.result()));
	else
		return AppendEntityMemberOutcome(outcome.error());
}

void ChatbotClient::appendEntityMemberAsync(const AppendEntityMemberRequest& request, const AppendEntityMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, appendEntityMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::AppendEntityMemberOutcomeCallable ChatbotClient::appendEntityMemberCallable(const AppendEntityMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AppendEntityMemberOutcome()>>(
			[this, request]()
			{
			return this->appendEntityMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::ChatOutcome ChatbotClient::chat(const ChatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChatOutcome(ChatResult(outcome.result()));
	else
		return ChatOutcome(outcome.error());
}

void ChatbotClient::chatAsync(const ChatRequest& request, const ChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, chat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::ChatOutcomeCallable ChatbotClient::chatCallable(const ChatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChatOutcome()>>(
			[this, request]()
			{
			return this->chat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::CreateBotOutcome ChatbotClient::createBot(const CreateBotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBotOutcome(CreateBotResult(outcome.result()));
	else
		return CreateBotOutcome(outcome.error());
}

void ChatbotClient::createBotAsync(const CreateBotRequest& request, const CreateBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::CreateBotOutcomeCallable ChatbotClient::createBotCallable(const CreateBotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBotOutcome()>>(
			[this, request]()
			{
			return this->createBot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::CreateCategoryOutcome ChatbotClient::createCategory(const CreateCategoryRequest &request) const
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

void ChatbotClient::createCategoryAsync(const CreateCategoryRequest& request, const CreateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::CreateCategoryOutcomeCallable ChatbotClient::createCategoryCallable(const CreateCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCategoryOutcome()>>(
			[this, request]()
			{
			return this->createCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::CreateCoreWordOutcome ChatbotClient::createCoreWord(const CreateCoreWordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCoreWordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCoreWordOutcome(CreateCoreWordResult(outcome.result()));
	else
		return CreateCoreWordOutcome(outcome.error());
}

void ChatbotClient::createCoreWordAsync(const CreateCoreWordRequest& request, const CreateCoreWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCoreWord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::CreateCoreWordOutcomeCallable ChatbotClient::createCoreWordCallable(const CreateCoreWordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCoreWordOutcome()>>(
			[this, request]()
			{
			return this->createCoreWord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::CreateDialogOutcome ChatbotClient::createDialog(const CreateDialogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDialogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDialogOutcome(CreateDialogResult(outcome.result()));
	else
		return CreateDialogOutcome(outcome.error());
}

void ChatbotClient::createDialogAsync(const CreateDialogRequest& request, const CreateDialogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDialog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::CreateDialogOutcomeCallable ChatbotClient::createDialogCallable(const CreateDialogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDialogOutcome()>>(
			[this, request]()
			{
			return this->createDialog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::CreateEntityOutcome ChatbotClient::createEntity(const CreateEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEntityOutcome(CreateEntityResult(outcome.result()));
	else
		return CreateEntityOutcome(outcome.error());
}

void ChatbotClient::createEntityAsync(const CreateEntityRequest& request, const CreateEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::CreateEntityOutcomeCallable ChatbotClient::createEntityCallable(const CreateEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEntityOutcome()>>(
			[this, request]()
			{
			return this->createEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::CreateIntentOutcome ChatbotClient::createIntent(const CreateIntentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIntentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIntentOutcome(CreateIntentResult(outcome.result()));
	else
		return CreateIntentOutcome(outcome.error());
}

void ChatbotClient::createIntentAsync(const CreateIntentRequest& request, const CreateIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIntent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::CreateIntentOutcomeCallable ChatbotClient::createIntentCallable(const CreateIntentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIntentOutcome()>>(
			[this, request]()
			{
			return this->createIntent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::CreateKnowledgeOutcome ChatbotClient::createKnowledge(const CreateKnowledgeRequest &request) const
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

void ChatbotClient::createKnowledgeAsync(const CreateKnowledgeRequest& request, const CreateKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::CreateKnowledgeOutcomeCallable ChatbotClient::createKnowledgeCallable(const CreateKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->createKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::CreatePerspectiveOutcome ChatbotClient::createPerspective(const CreatePerspectiveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePerspectiveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePerspectiveOutcome(CreatePerspectiveResult(outcome.result()));
	else
		return CreatePerspectiveOutcome(outcome.error());
}

void ChatbotClient::createPerspectiveAsync(const CreatePerspectiveRequest& request, const CreatePerspectiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPerspective(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::CreatePerspectiveOutcomeCallable ChatbotClient::createPerspectiveCallable(const CreatePerspectiveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePerspectiveOutcome()>>(
			[this, request]()
			{
			return this->createPerspective(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DeleteBotOutcome ChatbotClient::deleteBot(const DeleteBotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBotOutcome(DeleteBotResult(outcome.result()));
	else
		return DeleteBotOutcome(outcome.error());
}

void ChatbotClient::deleteBotAsync(const DeleteBotRequest& request, const DeleteBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DeleteBotOutcomeCallable ChatbotClient::deleteBotCallable(const DeleteBotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBotOutcome()>>(
			[this, request]()
			{
			return this->deleteBot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DeleteCategoryOutcome ChatbotClient::deleteCategory(const DeleteCategoryRequest &request) const
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

void ChatbotClient::deleteCategoryAsync(const DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DeleteCategoryOutcomeCallable ChatbotClient::deleteCategoryCallable(const DeleteCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DeleteCoreWordOutcome ChatbotClient::deleteCoreWord(const DeleteCoreWordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCoreWordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCoreWordOutcome(DeleteCoreWordResult(outcome.result()));
	else
		return DeleteCoreWordOutcome(outcome.error());
}

void ChatbotClient::deleteCoreWordAsync(const DeleteCoreWordRequest& request, const DeleteCoreWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCoreWord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DeleteCoreWordOutcomeCallable ChatbotClient::deleteCoreWordCallable(const DeleteCoreWordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCoreWordOutcome()>>(
			[this, request]()
			{
			return this->deleteCoreWord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DeleteDialogOutcome ChatbotClient::deleteDialog(const DeleteDialogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDialogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDialogOutcome(DeleteDialogResult(outcome.result()));
	else
		return DeleteDialogOutcome(outcome.error());
}

void ChatbotClient::deleteDialogAsync(const DeleteDialogRequest& request, const DeleteDialogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDialog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DeleteDialogOutcomeCallable ChatbotClient::deleteDialogCallable(const DeleteDialogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDialogOutcome()>>(
			[this, request]()
			{
			return this->deleteDialog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DeleteEntityOutcome ChatbotClient::deleteEntity(const DeleteEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEntityOutcome(DeleteEntityResult(outcome.result()));
	else
		return DeleteEntityOutcome(outcome.error());
}

void ChatbotClient::deleteEntityAsync(const DeleteEntityRequest& request, const DeleteEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DeleteEntityOutcomeCallable ChatbotClient::deleteEntityCallable(const DeleteEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEntityOutcome()>>(
			[this, request]()
			{
			return this->deleteEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DeleteIntentOutcome ChatbotClient::deleteIntent(const DeleteIntentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIntentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIntentOutcome(DeleteIntentResult(outcome.result()));
	else
		return DeleteIntentOutcome(outcome.error());
}

void ChatbotClient::deleteIntentAsync(const DeleteIntentRequest& request, const DeleteIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIntent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DeleteIntentOutcomeCallable ChatbotClient::deleteIntentCallable(const DeleteIntentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIntentOutcome()>>(
			[this, request]()
			{
			return this->deleteIntent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DeleteKnowledgeOutcome ChatbotClient::deleteKnowledge(const DeleteKnowledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKnowledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKnowledgeOutcome(DeleteKnowledgeResult(outcome.result()));
	else
		return DeleteKnowledgeOutcome(outcome.error());
}

void ChatbotClient::deleteKnowledgeAsync(const DeleteKnowledgeRequest& request, const DeleteKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DeleteKnowledgeOutcomeCallable ChatbotClient::deleteKnowledgeCallable(const DeleteKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->deleteKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribeBotOutcome ChatbotClient::describeBot(const DescribeBotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBotOutcome(DescribeBotResult(outcome.result()));
	else
		return DescribeBotOutcome(outcome.error());
}

void ChatbotClient::describeBotAsync(const DescribeBotRequest& request, const DescribeBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribeBotOutcomeCallable ChatbotClient::describeBotCallable(const DescribeBotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBotOutcome()>>(
			[this, request]()
			{
			return this->describeBot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribeCategoryOutcome ChatbotClient::describeCategory(const DescribeCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCategoryOutcome(DescribeCategoryResult(outcome.result()));
	else
		return DescribeCategoryOutcome(outcome.error());
}

void ChatbotClient::describeCategoryAsync(const DescribeCategoryRequest& request, const DescribeCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribeCategoryOutcomeCallable ChatbotClient::describeCategoryCallable(const DescribeCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCategoryOutcome()>>(
			[this, request]()
			{
			return this->describeCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribeCoreWordOutcome ChatbotClient::describeCoreWord(const DescribeCoreWordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCoreWordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCoreWordOutcome(DescribeCoreWordResult(outcome.result()));
	else
		return DescribeCoreWordOutcome(outcome.error());
}

void ChatbotClient::describeCoreWordAsync(const DescribeCoreWordRequest& request, const DescribeCoreWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCoreWord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribeCoreWordOutcomeCallable ChatbotClient::describeCoreWordCallable(const DescribeCoreWordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCoreWordOutcome()>>(
			[this, request]()
			{
			return this->describeCoreWord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribeDialogOutcome ChatbotClient::describeDialog(const DescribeDialogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDialogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDialogOutcome(DescribeDialogResult(outcome.result()));
	else
		return DescribeDialogOutcome(outcome.error());
}

void ChatbotClient::describeDialogAsync(const DescribeDialogRequest& request, const DescribeDialogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDialog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribeDialogOutcomeCallable ChatbotClient::describeDialogCallable(const DescribeDialogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDialogOutcome()>>(
			[this, request]()
			{
			return this->describeDialog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribeDialogFlowOutcome ChatbotClient::describeDialogFlow(const DescribeDialogFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDialogFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDialogFlowOutcome(DescribeDialogFlowResult(outcome.result()));
	else
		return DescribeDialogFlowOutcome(outcome.error());
}

void ChatbotClient::describeDialogFlowAsync(const DescribeDialogFlowRequest& request, const DescribeDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDialogFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribeDialogFlowOutcomeCallable ChatbotClient::describeDialogFlowCallable(const DescribeDialogFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDialogFlowOutcome()>>(
			[this, request]()
			{
			return this->describeDialogFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribeEntitiesOutcome ChatbotClient::describeEntities(const DescribeEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEntitiesOutcome(DescribeEntitiesResult(outcome.result()));
	else
		return DescribeEntitiesOutcome(outcome.error());
}

void ChatbotClient::describeEntitiesAsync(const DescribeEntitiesRequest& request, const DescribeEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribeEntitiesOutcomeCallable ChatbotClient::describeEntitiesCallable(const DescribeEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEntitiesOutcome()>>(
			[this, request]()
			{
			return this->describeEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribeIntentOutcome ChatbotClient::describeIntent(const DescribeIntentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIntentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIntentOutcome(DescribeIntentResult(outcome.result()));
	else
		return DescribeIntentOutcome(outcome.error());
}

void ChatbotClient::describeIntentAsync(const DescribeIntentRequest& request, const DescribeIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIntent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribeIntentOutcomeCallable ChatbotClient::describeIntentCallable(const DescribeIntentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIntentOutcome()>>(
			[this, request]()
			{
			return this->describeIntent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribeKnowledgeOutcome ChatbotClient::describeKnowledge(const DescribeKnowledgeRequest &request) const
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

void ChatbotClient::describeKnowledgeAsync(const DescribeKnowledgeRequest& request, const DescribeKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribeKnowledgeOutcomeCallable ChatbotClient::describeKnowledgeCallable(const DescribeKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->describeKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DescribePerspectiveOutcome ChatbotClient::describePerspective(const DescribePerspectiveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePerspectiveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePerspectiveOutcome(DescribePerspectiveResult(outcome.result()));
	else
		return DescribePerspectiveOutcome(outcome.error());
}

void ChatbotClient::describePerspectiveAsync(const DescribePerspectiveRequest& request, const DescribePerspectiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePerspective(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DescribePerspectiveOutcomeCallable ChatbotClient::describePerspectiveCallable(const DescribePerspectiveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePerspectiveOutcome()>>(
			[this, request]()
			{
			return this->describePerspective(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DisableDialogFlowOutcome ChatbotClient::disableDialogFlow(const DisableDialogFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDialogFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDialogFlowOutcome(DisableDialogFlowResult(outcome.result()));
	else
		return DisableDialogFlowOutcome(outcome.error());
}

void ChatbotClient::disableDialogFlowAsync(const DisableDialogFlowRequest& request, const DisableDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDialogFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DisableDialogFlowOutcomeCallable ChatbotClient::disableDialogFlowCallable(const DisableDialogFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDialogFlowOutcome()>>(
			[this, request]()
			{
			return this->disableDialogFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::DisableKnowledgeOutcome ChatbotClient::disableKnowledge(const DisableKnowledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableKnowledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableKnowledgeOutcome(DisableKnowledgeResult(outcome.result()));
	else
		return DisableKnowledgeOutcome(outcome.error());
}

void ChatbotClient::disableKnowledgeAsync(const DisableKnowledgeRequest& request, const DisableKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::DisableKnowledgeOutcomeCallable ChatbotClient::disableKnowledgeCallable(const DisableKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->disableKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::FeedbackOutcome ChatbotClient::feedback(const FeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FeedbackOutcome(FeedbackResult(outcome.result()));
	else
		return FeedbackOutcome(outcome.error());
}

void ChatbotClient::feedbackAsync(const FeedbackRequest& request, const FeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, feedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::FeedbackOutcomeCallable ChatbotClient::feedbackCallable(const FeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FeedbackOutcome()>>(
			[this, request]()
			{
			return this->feedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::LinkBotCategoryOutcome ChatbotClient::linkBotCategory(const LinkBotCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LinkBotCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LinkBotCategoryOutcome(LinkBotCategoryResult(outcome.result()));
	else
		return LinkBotCategoryOutcome(outcome.error());
}

void ChatbotClient::linkBotCategoryAsync(const LinkBotCategoryRequest& request, const LinkBotCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, linkBotCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::LinkBotCategoryOutcomeCallable ChatbotClient::linkBotCategoryCallable(const LinkBotCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LinkBotCategoryOutcome()>>(
			[this, request]()
			{
			return this->linkBotCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::MoveKnowledgeCategoryOutcome ChatbotClient::moveKnowledgeCategory(const MoveKnowledgeCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveKnowledgeCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveKnowledgeCategoryOutcome(MoveKnowledgeCategoryResult(outcome.result()));
	else
		return MoveKnowledgeCategoryOutcome(outcome.error());
}

void ChatbotClient::moveKnowledgeCategoryAsync(const MoveKnowledgeCategoryRequest& request, const MoveKnowledgeCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveKnowledgeCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::MoveKnowledgeCategoryOutcomeCallable ChatbotClient::moveKnowledgeCategoryCallable(const MoveKnowledgeCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveKnowledgeCategoryOutcome()>>(
			[this, request]()
			{
			return this->moveKnowledgeCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::PublishDialogFlowOutcome ChatbotClient::publishDialogFlow(const PublishDialogFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishDialogFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishDialogFlowOutcome(PublishDialogFlowResult(outcome.result()));
	else
		return PublishDialogFlowOutcome(outcome.error());
}

void ChatbotClient::publishDialogFlowAsync(const PublishDialogFlowRequest& request, const PublishDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishDialogFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::PublishDialogFlowOutcomeCallable ChatbotClient::publishDialogFlowCallable(const PublishDialogFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishDialogFlowOutcome()>>(
			[this, request]()
			{
			return this->publishDialogFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::PublishKnowledgeOutcome ChatbotClient::publishKnowledge(const PublishKnowledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishKnowledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishKnowledgeOutcome(PublishKnowledgeResult(outcome.result()));
	else
		return PublishKnowledgeOutcome(outcome.error());
}

void ChatbotClient::publishKnowledgeAsync(const PublishKnowledgeRequest& request, const PublishKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::PublishKnowledgeOutcomeCallable ChatbotClient::publishKnowledgeCallable(const PublishKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->publishKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QueryBotsOutcome ChatbotClient::queryBots(const QueryBotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBotsOutcome(QueryBotsResult(outcome.result()));
	else
		return QueryBotsOutcome(outcome.error());
}

void ChatbotClient::queryBotsAsync(const QueryBotsRequest& request, const QueryBotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QueryBotsOutcomeCallable ChatbotClient::queryBotsCallable(const QueryBotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBotsOutcome()>>(
			[this, request]()
			{
			return this->queryBots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QueryCategoriesOutcome ChatbotClient::queryCategories(const QueryCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCategoriesOutcome(QueryCategoriesResult(outcome.result()));
	else
		return QueryCategoriesOutcome(outcome.error());
}

void ChatbotClient::queryCategoriesAsync(const QueryCategoriesRequest& request, const QueryCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QueryCategoriesOutcomeCallable ChatbotClient::queryCategoriesCallable(const QueryCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCategoriesOutcome()>>(
			[this, request]()
			{
			return this->queryCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QueryCoreWordsOutcome ChatbotClient::queryCoreWords(const QueryCoreWordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCoreWordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCoreWordsOutcome(QueryCoreWordsResult(outcome.result()));
	else
		return QueryCoreWordsOutcome(outcome.error());
}

void ChatbotClient::queryCoreWordsAsync(const QueryCoreWordsRequest& request, const QueryCoreWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCoreWords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QueryCoreWordsOutcomeCallable ChatbotClient::queryCoreWordsCallable(const QueryCoreWordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCoreWordsOutcome()>>(
			[this, request]()
			{
			return this->queryCoreWords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QueryDialogsOutcome ChatbotClient::queryDialogs(const QueryDialogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDialogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDialogsOutcome(QueryDialogsResult(outcome.result()));
	else
		return QueryDialogsOutcome(outcome.error());
}

void ChatbotClient::queryDialogsAsync(const QueryDialogsRequest& request, const QueryDialogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDialogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QueryDialogsOutcomeCallable ChatbotClient::queryDialogsCallable(const QueryDialogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDialogsOutcome()>>(
			[this, request]()
			{
			return this->queryDialogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QueryEntitiesOutcome ChatbotClient::queryEntities(const QueryEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEntitiesOutcome(QueryEntitiesResult(outcome.result()));
	else
		return QueryEntitiesOutcome(outcome.error());
}

void ChatbotClient::queryEntitiesAsync(const QueryEntitiesRequest& request, const QueryEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QueryEntitiesOutcomeCallable ChatbotClient::queryEntitiesCallable(const QueryEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEntitiesOutcome()>>(
			[this, request]()
			{
			return this->queryEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QueryIntentsOutcome ChatbotClient::queryIntents(const QueryIntentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryIntentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryIntentsOutcome(QueryIntentsResult(outcome.result()));
	else
		return QueryIntentsOutcome(outcome.error());
}

void ChatbotClient::queryIntentsAsync(const QueryIntentsRequest& request, const QueryIntentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIntents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QueryIntentsOutcomeCallable ChatbotClient::queryIntentsCallable(const QueryIntentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIntentsOutcome()>>(
			[this, request]()
			{
			return this->queryIntents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QueryKnowledgesOutcome ChatbotClient::queryKnowledges(const QueryKnowledgesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryKnowledgesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryKnowledgesOutcome(QueryKnowledgesResult(outcome.result()));
	else
		return QueryKnowledgesOutcome(outcome.error());
}

void ChatbotClient::queryKnowledgesAsync(const QueryKnowledgesRequest& request, const QueryKnowledgesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryKnowledges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QueryKnowledgesOutcomeCallable ChatbotClient::queryKnowledgesCallable(const QueryKnowledgesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryKnowledgesOutcome()>>(
			[this, request]()
			{
			return this->queryKnowledges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QueryPerspectivesOutcome ChatbotClient::queryPerspectives(const QueryPerspectivesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPerspectivesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPerspectivesOutcome(QueryPerspectivesResult(outcome.result()));
	else
		return QueryPerspectivesOutcome(outcome.error());
}

void ChatbotClient::queryPerspectivesAsync(const QueryPerspectivesRequest& request, const QueryPerspectivesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPerspectives(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QueryPerspectivesOutcomeCallable ChatbotClient::queryPerspectivesCallable(const QueryPerspectivesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPerspectivesOutcome()>>(
			[this, request]()
			{
			return this->queryPerspectives(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::QuerySystemEntitiesOutcome ChatbotClient::querySystemEntities(const QuerySystemEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySystemEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySystemEntitiesOutcome(QuerySystemEntitiesResult(outcome.result()));
	else
		return QuerySystemEntitiesOutcome(outcome.error());
}

void ChatbotClient::querySystemEntitiesAsync(const QuerySystemEntitiesRequest& request, const QuerySystemEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySystemEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::QuerySystemEntitiesOutcomeCallable ChatbotClient::querySystemEntitiesCallable(const QuerySystemEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySystemEntitiesOutcome()>>(
			[this, request]()
			{
			return this->querySystemEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::RemoveEntityMemberOutcome ChatbotClient::removeEntityMember(const RemoveEntityMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveEntityMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveEntityMemberOutcome(RemoveEntityMemberResult(outcome.result()));
	else
		return RemoveEntityMemberOutcome(outcome.error());
}

void ChatbotClient::removeEntityMemberAsync(const RemoveEntityMemberRequest& request, const RemoveEntityMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeEntityMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::RemoveEntityMemberOutcomeCallable ChatbotClient::removeEntityMemberCallable(const RemoveEntityMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveEntityMemberOutcome()>>(
			[this, request]()
			{
			return this->removeEntityMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::RemoveSynonymOutcome ChatbotClient::removeSynonym(const RemoveSynonymRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSynonymOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSynonymOutcome(RemoveSynonymResult(outcome.result()));
	else
		return RemoveSynonymOutcome(outcome.error());
}

void ChatbotClient::removeSynonymAsync(const RemoveSynonymRequest& request, const RemoveSynonymAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSynonym(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::RemoveSynonymOutcomeCallable ChatbotClient::removeSynonymCallable(const RemoveSynonymRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSynonymOutcome()>>(
			[this, request]()
			{
			return this->removeSynonym(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::TestDialogFlowOutcome ChatbotClient::testDialogFlow(const TestDialogFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestDialogFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestDialogFlowOutcome(TestDialogFlowResult(outcome.result()));
	else
		return TestDialogFlowOutcome(outcome.error());
}

void ChatbotClient::testDialogFlowAsync(const TestDialogFlowRequest& request, const TestDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testDialogFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::TestDialogFlowOutcomeCallable ChatbotClient::testDialogFlowCallable(const TestDialogFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestDialogFlowOutcome()>>(
			[this, request]()
			{
			return this->testDialogFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::UpdateCategoryOutcome ChatbotClient::updateCategory(const UpdateCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCategoryOutcome(UpdateCategoryResult(outcome.result()));
	else
		return UpdateCategoryOutcome(outcome.error());
}

void ChatbotClient::updateCategoryAsync(const UpdateCategoryRequest& request, const UpdateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::UpdateCategoryOutcomeCallable ChatbotClient::updateCategoryCallable(const UpdateCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCategoryOutcome()>>(
			[this, request]()
			{
			return this->updateCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::UpdateCoreWordOutcome ChatbotClient::updateCoreWord(const UpdateCoreWordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCoreWordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCoreWordOutcome(UpdateCoreWordResult(outcome.result()));
	else
		return UpdateCoreWordOutcome(outcome.error());
}

void ChatbotClient::updateCoreWordAsync(const UpdateCoreWordRequest& request, const UpdateCoreWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCoreWord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::UpdateCoreWordOutcomeCallable ChatbotClient::updateCoreWordCallable(const UpdateCoreWordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCoreWordOutcome()>>(
			[this, request]()
			{
			return this->updateCoreWord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::UpdateDialogOutcome ChatbotClient::updateDialog(const UpdateDialogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDialogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDialogOutcome(UpdateDialogResult(outcome.result()));
	else
		return UpdateDialogOutcome(outcome.error());
}

void ChatbotClient::updateDialogAsync(const UpdateDialogRequest& request, const UpdateDialogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDialog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::UpdateDialogOutcomeCallable ChatbotClient::updateDialogCallable(const UpdateDialogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDialogOutcome()>>(
			[this, request]()
			{
			return this->updateDialog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::UpdateDialogFlowOutcome ChatbotClient::updateDialogFlow(const UpdateDialogFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDialogFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDialogFlowOutcome(UpdateDialogFlowResult(outcome.result()));
	else
		return UpdateDialogFlowOutcome(outcome.error());
}

void ChatbotClient::updateDialogFlowAsync(const UpdateDialogFlowRequest& request, const UpdateDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDialogFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::UpdateDialogFlowOutcomeCallable ChatbotClient::updateDialogFlowCallable(const UpdateDialogFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDialogFlowOutcome()>>(
			[this, request]()
			{
			return this->updateDialogFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::UpdateEntityOutcome ChatbotClient::updateEntity(const UpdateEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEntityOutcome(UpdateEntityResult(outcome.result()));
	else
		return UpdateEntityOutcome(outcome.error());
}

void ChatbotClient::updateEntityAsync(const UpdateEntityRequest& request, const UpdateEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::UpdateEntityOutcomeCallable ChatbotClient::updateEntityCallable(const UpdateEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEntityOutcome()>>(
			[this, request]()
			{
			return this->updateEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::UpdateIntentOutcome ChatbotClient::updateIntent(const UpdateIntentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIntentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIntentOutcome(UpdateIntentResult(outcome.result()));
	else
		return UpdateIntentOutcome(outcome.error());
}

void ChatbotClient::updateIntentAsync(const UpdateIntentRequest& request, const UpdateIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIntent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::UpdateIntentOutcomeCallable ChatbotClient::updateIntentCallable(const UpdateIntentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIntentOutcome()>>(
			[this, request]()
			{
			return this->updateIntent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::UpdateKnowledgeOutcome ChatbotClient::updateKnowledge(const UpdateKnowledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKnowledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKnowledgeOutcome(UpdateKnowledgeResult(outcome.result()));
	else
		return UpdateKnowledgeOutcome(outcome.error());
}

void ChatbotClient::updateKnowledgeAsync(const UpdateKnowledgeRequest& request, const UpdateKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKnowledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::UpdateKnowledgeOutcomeCallable ChatbotClient::updateKnowledgeCallable(const UpdateKnowledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKnowledgeOutcome()>>(
			[this, request]()
			{
			return this->updateKnowledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ChatbotClient::UpdatePerspectiveOutcome ChatbotClient::updatePerspective(const UpdatePerspectiveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePerspectiveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePerspectiveOutcome(UpdatePerspectiveResult(outcome.result()));
	else
		return UpdatePerspectiveOutcome(outcome.error());
}

void ChatbotClient::updatePerspectiveAsync(const UpdatePerspectiveRequest& request, const UpdatePerspectiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePerspective(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ChatbotClient::UpdatePerspectiveOutcomeCallable ChatbotClient::updatePerspectiveCallable(const UpdatePerspectiveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePerspectiveOutcome()>>(
			[this, request]()
			{
			return this->updatePerspective(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

