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

#ifndef ALIBABACLOUD_CHATBOT_CHATBOTCLIENT_H_
#define ALIBABACLOUD_CHATBOT_CHATBOTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ChatbotExport.h"
#include "model/ActivatePerspectiveRequest.h"
#include "model/ActivatePerspectiveResult.h"
#include "model/AddSynonymRequest.h"
#include "model/AddSynonymResult.h"
#include "model/AppendEntityMemberRequest.h"
#include "model/AppendEntityMemberResult.h"
#include "model/ChatRequest.h"
#include "model/ChatResult.h"
#include "model/CreateBotRequest.h"
#include "model/CreateBotResult.h"
#include "model/CreateCategoryRequest.h"
#include "model/CreateCategoryResult.h"
#include "model/CreateCoreWordRequest.h"
#include "model/CreateCoreWordResult.h"
#include "model/CreateDialogRequest.h"
#include "model/CreateDialogResult.h"
#include "model/CreateEntityRequest.h"
#include "model/CreateEntityResult.h"
#include "model/CreateIntentRequest.h"
#include "model/CreateIntentResult.h"
#include "model/CreateKnowledgeRequest.h"
#include "model/CreateKnowledgeResult.h"
#include "model/CreatePerspectiveRequest.h"
#include "model/CreatePerspectiveResult.h"
#include "model/DeleteBotRequest.h"
#include "model/DeleteBotResult.h"
#include "model/DeleteCategoryRequest.h"
#include "model/DeleteCategoryResult.h"
#include "model/DeleteCoreWordRequest.h"
#include "model/DeleteCoreWordResult.h"
#include "model/DeleteDialogRequest.h"
#include "model/DeleteDialogResult.h"
#include "model/DeleteEntityRequest.h"
#include "model/DeleteEntityResult.h"
#include "model/DeleteIntentRequest.h"
#include "model/DeleteIntentResult.h"
#include "model/DeleteKnowledgeRequest.h"
#include "model/DeleteKnowledgeResult.h"
#include "model/DescribeBotRequest.h"
#include "model/DescribeBotResult.h"
#include "model/DescribeCategoryRequest.h"
#include "model/DescribeCategoryResult.h"
#include "model/DescribeCoreWordRequest.h"
#include "model/DescribeCoreWordResult.h"
#include "model/DescribeDialogRequest.h"
#include "model/DescribeDialogResult.h"
#include "model/DescribeDialogFlowRequest.h"
#include "model/DescribeDialogFlowResult.h"
#include "model/DescribeEntitiesRequest.h"
#include "model/DescribeEntitiesResult.h"
#include "model/DescribeIntentRequest.h"
#include "model/DescribeIntentResult.h"
#include "model/DescribeKnowledgeRequest.h"
#include "model/DescribeKnowledgeResult.h"
#include "model/DescribePerspectiveRequest.h"
#include "model/DescribePerspectiveResult.h"
#include "model/DisableDialogFlowRequest.h"
#include "model/DisableDialogFlowResult.h"
#include "model/DisableKnowledgeRequest.h"
#include "model/DisableKnowledgeResult.h"
#include "model/FeedbackRequest.h"
#include "model/FeedbackResult.h"
#include "model/LinkBotCategoryRequest.h"
#include "model/LinkBotCategoryResult.h"
#include "model/MoveKnowledgeCategoryRequest.h"
#include "model/MoveKnowledgeCategoryResult.h"
#include "model/PublishDialogFlowRequest.h"
#include "model/PublishDialogFlowResult.h"
#include "model/PublishKnowledgeRequest.h"
#include "model/PublishKnowledgeResult.h"
#include "model/QueryBotsRequest.h"
#include "model/QueryBotsResult.h"
#include "model/QueryCategoriesRequest.h"
#include "model/QueryCategoriesResult.h"
#include "model/QueryCoreWordsRequest.h"
#include "model/QueryCoreWordsResult.h"
#include "model/QueryDialogsRequest.h"
#include "model/QueryDialogsResult.h"
#include "model/QueryEntitiesRequest.h"
#include "model/QueryEntitiesResult.h"
#include "model/QueryIntentsRequest.h"
#include "model/QueryIntentsResult.h"
#include "model/QueryKnowledgesRequest.h"
#include "model/QueryKnowledgesResult.h"
#include "model/QueryPerspectivesRequest.h"
#include "model/QueryPerspectivesResult.h"
#include "model/QuerySystemEntitiesRequest.h"
#include "model/QuerySystemEntitiesResult.h"
#include "model/RemoveEntityMemberRequest.h"
#include "model/RemoveEntityMemberResult.h"
#include "model/RemoveSynonymRequest.h"
#include "model/RemoveSynonymResult.h"
#include "model/TestDialogFlowRequest.h"
#include "model/TestDialogFlowResult.h"
#include "model/UpdateCategoryRequest.h"
#include "model/UpdateCategoryResult.h"
#include "model/UpdateCoreWordRequest.h"
#include "model/UpdateCoreWordResult.h"
#include "model/UpdateDialogRequest.h"
#include "model/UpdateDialogResult.h"
#include "model/UpdateDialogFlowRequest.h"
#include "model/UpdateDialogFlowResult.h"
#include "model/UpdateEntityRequest.h"
#include "model/UpdateEntityResult.h"
#include "model/UpdateIntentRequest.h"
#include "model/UpdateIntentResult.h"
#include "model/UpdateKnowledgeRequest.h"
#include "model/UpdateKnowledgeResult.h"
#include "model/UpdatePerspectiveRequest.h"
#include "model/UpdatePerspectiveResult.h"


namespace AlibabaCloud
{
	namespace Chatbot
	{
		class ALIBABACLOUD_CHATBOT_EXPORT ChatbotClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivatePerspectiveResult> ActivatePerspectiveOutcome;
			typedef std::future<ActivatePerspectiveOutcome> ActivatePerspectiveOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::ActivatePerspectiveRequest&, const ActivatePerspectiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivatePerspectiveAsyncHandler;
			typedef Outcome<Error, Model::AddSynonymResult> AddSynonymOutcome;
			typedef std::future<AddSynonymOutcome> AddSynonymOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::AddSynonymRequest&, const AddSynonymOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSynonymAsyncHandler;
			typedef Outcome<Error, Model::AppendEntityMemberResult> AppendEntityMemberOutcome;
			typedef std::future<AppendEntityMemberOutcome> AppendEntityMemberOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::AppendEntityMemberRequest&, const AppendEntityMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AppendEntityMemberAsyncHandler;
			typedef Outcome<Error, Model::ChatResult> ChatOutcome;
			typedef std::future<ChatOutcome> ChatOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::ChatRequest&, const ChatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChatAsyncHandler;
			typedef Outcome<Error, Model::CreateBotResult> CreateBotOutcome;
			typedef std::future<CreateBotOutcome> CreateBotOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::CreateBotRequest&, const CreateBotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBotAsyncHandler;
			typedef Outcome<Error, Model::CreateCategoryResult> CreateCategoryOutcome;
			typedef std::future<CreateCategoryOutcome> CreateCategoryOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::CreateCategoryRequest&, const CreateCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCategoryAsyncHandler;
			typedef Outcome<Error, Model::CreateCoreWordResult> CreateCoreWordOutcome;
			typedef std::future<CreateCoreWordOutcome> CreateCoreWordOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::CreateCoreWordRequest&, const CreateCoreWordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCoreWordAsyncHandler;
			typedef Outcome<Error, Model::CreateDialogResult> CreateDialogOutcome;
			typedef std::future<CreateDialogOutcome> CreateDialogOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::CreateDialogRequest&, const CreateDialogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDialogAsyncHandler;
			typedef Outcome<Error, Model::CreateEntityResult> CreateEntityOutcome;
			typedef std::future<CreateEntityOutcome> CreateEntityOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::CreateEntityRequest&, const CreateEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEntityAsyncHandler;
			typedef Outcome<Error, Model::CreateIntentResult> CreateIntentOutcome;
			typedef std::future<CreateIntentOutcome> CreateIntentOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::CreateIntentRequest&, const CreateIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntentAsyncHandler;
			typedef Outcome<Error, Model::CreateKnowledgeResult> CreateKnowledgeOutcome;
			typedef std::future<CreateKnowledgeOutcome> CreateKnowledgeOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::CreateKnowledgeRequest&, const CreateKnowledgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKnowledgeAsyncHandler;
			typedef Outcome<Error, Model::CreatePerspectiveResult> CreatePerspectiveOutcome;
			typedef std::future<CreatePerspectiveOutcome> CreatePerspectiveOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::CreatePerspectiveRequest&, const CreatePerspectiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePerspectiveAsyncHandler;
			typedef Outcome<Error, Model::DeleteBotResult> DeleteBotOutcome;
			typedef std::future<DeleteBotOutcome> DeleteBotOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DeleteBotRequest&, const DeleteBotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBotAsyncHandler;
			typedef Outcome<Error, Model::DeleteCategoryResult> DeleteCategoryOutcome;
			typedef std::future<DeleteCategoryOutcome> DeleteCategoryOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DeleteCategoryRequest&, const DeleteCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteCoreWordResult> DeleteCoreWordOutcome;
			typedef std::future<DeleteCoreWordOutcome> DeleteCoreWordOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DeleteCoreWordRequest&, const DeleteCoreWordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCoreWordAsyncHandler;
			typedef Outcome<Error, Model::DeleteDialogResult> DeleteDialogOutcome;
			typedef std::future<DeleteDialogOutcome> DeleteDialogOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DeleteDialogRequest&, const DeleteDialogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDialogAsyncHandler;
			typedef Outcome<Error, Model::DeleteEntityResult> DeleteEntityOutcome;
			typedef std::future<DeleteEntityOutcome> DeleteEntityOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DeleteEntityRequest&, const DeleteEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEntityAsyncHandler;
			typedef Outcome<Error, Model::DeleteIntentResult> DeleteIntentOutcome;
			typedef std::future<DeleteIntentOutcome> DeleteIntentOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DeleteIntentRequest&, const DeleteIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntentAsyncHandler;
			typedef Outcome<Error, Model::DeleteKnowledgeResult> DeleteKnowledgeOutcome;
			typedef std::future<DeleteKnowledgeOutcome> DeleteKnowledgeOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DeleteKnowledgeRequest&, const DeleteKnowledgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKnowledgeAsyncHandler;
			typedef Outcome<Error, Model::DescribeBotResult> DescribeBotOutcome;
			typedef std::future<DescribeBotOutcome> DescribeBotOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribeBotRequest&, const DescribeBotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBotAsyncHandler;
			typedef Outcome<Error, Model::DescribeCategoryResult> DescribeCategoryOutcome;
			typedef std::future<DescribeCategoryOutcome> DescribeCategoryOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribeCategoryRequest&, const DescribeCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCategoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCoreWordResult> DescribeCoreWordOutcome;
			typedef std::future<DescribeCoreWordOutcome> DescribeCoreWordOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribeCoreWordRequest&, const DescribeCoreWordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCoreWordAsyncHandler;
			typedef Outcome<Error, Model::DescribeDialogResult> DescribeDialogOutcome;
			typedef std::future<DescribeDialogOutcome> DescribeDialogOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribeDialogRequest&, const DescribeDialogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDialogAsyncHandler;
			typedef Outcome<Error, Model::DescribeDialogFlowResult> DescribeDialogFlowOutcome;
			typedef std::future<DescribeDialogFlowOutcome> DescribeDialogFlowOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribeDialogFlowRequest&, const DescribeDialogFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDialogFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeEntitiesResult> DescribeEntitiesOutcome;
			typedef std::future<DescribeEntitiesOutcome> DescribeEntitiesOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribeEntitiesRequest&, const DescribeEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEntitiesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIntentResult> DescribeIntentOutcome;
			typedef std::future<DescribeIntentOutcome> DescribeIntentOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribeIntentRequest&, const DescribeIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntentAsyncHandler;
			typedef Outcome<Error, Model::DescribeKnowledgeResult> DescribeKnowledgeOutcome;
			typedef std::future<DescribeKnowledgeOutcome> DescribeKnowledgeOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribeKnowledgeRequest&, const DescribeKnowledgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKnowledgeAsyncHandler;
			typedef Outcome<Error, Model::DescribePerspectiveResult> DescribePerspectiveOutcome;
			typedef std::future<DescribePerspectiveOutcome> DescribePerspectiveOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DescribePerspectiveRequest&, const DescribePerspectiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePerspectiveAsyncHandler;
			typedef Outcome<Error, Model::DisableDialogFlowResult> DisableDialogFlowOutcome;
			typedef std::future<DisableDialogFlowOutcome> DisableDialogFlowOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DisableDialogFlowRequest&, const DisableDialogFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDialogFlowAsyncHandler;
			typedef Outcome<Error, Model::DisableKnowledgeResult> DisableKnowledgeOutcome;
			typedef std::future<DisableKnowledgeOutcome> DisableKnowledgeOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::DisableKnowledgeRequest&, const DisableKnowledgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableKnowledgeAsyncHandler;
			typedef Outcome<Error, Model::FeedbackResult> FeedbackOutcome;
			typedef std::future<FeedbackOutcome> FeedbackOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::FeedbackRequest&, const FeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FeedbackAsyncHandler;
			typedef Outcome<Error, Model::LinkBotCategoryResult> LinkBotCategoryOutcome;
			typedef std::future<LinkBotCategoryOutcome> LinkBotCategoryOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::LinkBotCategoryRequest&, const LinkBotCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LinkBotCategoryAsyncHandler;
			typedef Outcome<Error, Model::MoveKnowledgeCategoryResult> MoveKnowledgeCategoryOutcome;
			typedef std::future<MoveKnowledgeCategoryOutcome> MoveKnowledgeCategoryOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::MoveKnowledgeCategoryRequest&, const MoveKnowledgeCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveKnowledgeCategoryAsyncHandler;
			typedef Outcome<Error, Model::PublishDialogFlowResult> PublishDialogFlowOutcome;
			typedef std::future<PublishDialogFlowOutcome> PublishDialogFlowOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::PublishDialogFlowRequest&, const PublishDialogFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishDialogFlowAsyncHandler;
			typedef Outcome<Error, Model::PublishKnowledgeResult> PublishKnowledgeOutcome;
			typedef std::future<PublishKnowledgeOutcome> PublishKnowledgeOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::PublishKnowledgeRequest&, const PublishKnowledgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishKnowledgeAsyncHandler;
			typedef Outcome<Error, Model::QueryBotsResult> QueryBotsOutcome;
			typedef std::future<QueryBotsOutcome> QueryBotsOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QueryBotsRequest&, const QueryBotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBotsAsyncHandler;
			typedef Outcome<Error, Model::QueryCategoriesResult> QueryCategoriesOutcome;
			typedef std::future<QueryCategoriesOutcome> QueryCategoriesOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QueryCategoriesRequest&, const QueryCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCategoriesAsyncHandler;
			typedef Outcome<Error, Model::QueryCoreWordsResult> QueryCoreWordsOutcome;
			typedef std::future<QueryCoreWordsOutcome> QueryCoreWordsOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QueryCoreWordsRequest&, const QueryCoreWordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCoreWordsAsyncHandler;
			typedef Outcome<Error, Model::QueryDialogsResult> QueryDialogsOutcome;
			typedef std::future<QueryDialogsOutcome> QueryDialogsOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QueryDialogsRequest&, const QueryDialogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDialogsAsyncHandler;
			typedef Outcome<Error, Model::QueryEntitiesResult> QueryEntitiesOutcome;
			typedef std::future<QueryEntitiesOutcome> QueryEntitiesOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QueryEntitiesRequest&, const QueryEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEntitiesAsyncHandler;
			typedef Outcome<Error, Model::QueryIntentsResult> QueryIntentsOutcome;
			typedef std::future<QueryIntentsOutcome> QueryIntentsOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QueryIntentsRequest&, const QueryIntentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIntentsAsyncHandler;
			typedef Outcome<Error, Model::QueryKnowledgesResult> QueryKnowledgesOutcome;
			typedef std::future<QueryKnowledgesOutcome> QueryKnowledgesOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QueryKnowledgesRequest&, const QueryKnowledgesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryKnowledgesAsyncHandler;
			typedef Outcome<Error, Model::QueryPerspectivesResult> QueryPerspectivesOutcome;
			typedef std::future<QueryPerspectivesOutcome> QueryPerspectivesOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QueryPerspectivesRequest&, const QueryPerspectivesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPerspectivesAsyncHandler;
			typedef Outcome<Error, Model::QuerySystemEntitiesResult> QuerySystemEntitiesOutcome;
			typedef std::future<QuerySystemEntitiesOutcome> QuerySystemEntitiesOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::QuerySystemEntitiesRequest&, const QuerySystemEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySystemEntitiesAsyncHandler;
			typedef Outcome<Error, Model::RemoveEntityMemberResult> RemoveEntityMemberOutcome;
			typedef std::future<RemoveEntityMemberOutcome> RemoveEntityMemberOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::RemoveEntityMemberRequest&, const RemoveEntityMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEntityMemberAsyncHandler;
			typedef Outcome<Error, Model::RemoveSynonymResult> RemoveSynonymOutcome;
			typedef std::future<RemoveSynonymOutcome> RemoveSynonymOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::RemoveSynonymRequest&, const RemoveSynonymOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSynonymAsyncHandler;
			typedef Outcome<Error, Model::TestDialogFlowResult> TestDialogFlowOutcome;
			typedef std::future<TestDialogFlowOutcome> TestDialogFlowOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::TestDialogFlowRequest&, const TestDialogFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestDialogFlowAsyncHandler;
			typedef Outcome<Error, Model::UpdateCategoryResult> UpdateCategoryOutcome;
			typedef std::future<UpdateCategoryOutcome> UpdateCategoryOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::UpdateCategoryRequest&, const UpdateCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCategoryAsyncHandler;
			typedef Outcome<Error, Model::UpdateCoreWordResult> UpdateCoreWordOutcome;
			typedef std::future<UpdateCoreWordOutcome> UpdateCoreWordOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::UpdateCoreWordRequest&, const UpdateCoreWordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCoreWordAsyncHandler;
			typedef Outcome<Error, Model::UpdateDialogResult> UpdateDialogOutcome;
			typedef std::future<UpdateDialogOutcome> UpdateDialogOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::UpdateDialogRequest&, const UpdateDialogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDialogAsyncHandler;
			typedef Outcome<Error, Model::UpdateDialogFlowResult> UpdateDialogFlowOutcome;
			typedef std::future<UpdateDialogFlowOutcome> UpdateDialogFlowOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::UpdateDialogFlowRequest&, const UpdateDialogFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDialogFlowAsyncHandler;
			typedef Outcome<Error, Model::UpdateEntityResult> UpdateEntityOutcome;
			typedef std::future<UpdateEntityOutcome> UpdateEntityOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::UpdateEntityRequest&, const UpdateEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEntityAsyncHandler;
			typedef Outcome<Error, Model::UpdateIntentResult> UpdateIntentOutcome;
			typedef std::future<UpdateIntentOutcome> UpdateIntentOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::UpdateIntentRequest&, const UpdateIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIntentAsyncHandler;
			typedef Outcome<Error, Model::UpdateKnowledgeResult> UpdateKnowledgeOutcome;
			typedef std::future<UpdateKnowledgeOutcome> UpdateKnowledgeOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::UpdateKnowledgeRequest&, const UpdateKnowledgeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKnowledgeAsyncHandler;
			typedef Outcome<Error, Model::UpdatePerspectiveResult> UpdatePerspectiveOutcome;
			typedef std::future<UpdatePerspectiveOutcome> UpdatePerspectiveOutcomeCallable;
			typedef std::function<void(const ChatbotClient*, const Model::UpdatePerspectiveRequest&, const UpdatePerspectiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePerspectiveAsyncHandler;

			ChatbotClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ChatbotClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ChatbotClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ChatbotClient();
			ActivatePerspectiveOutcome activatePerspective(const Model::ActivatePerspectiveRequest &request)const;
			void activatePerspectiveAsync(const Model::ActivatePerspectiveRequest& request, const ActivatePerspectiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivatePerspectiveOutcomeCallable activatePerspectiveCallable(const Model::ActivatePerspectiveRequest& request) const;
			AddSynonymOutcome addSynonym(const Model::AddSynonymRequest &request)const;
			void addSynonymAsync(const Model::AddSynonymRequest& request, const AddSynonymAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSynonymOutcomeCallable addSynonymCallable(const Model::AddSynonymRequest& request) const;
			AppendEntityMemberOutcome appendEntityMember(const Model::AppendEntityMemberRequest &request)const;
			void appendEntityMemberAsync(const Model::AppendEntityMemberRequest& request, const AppendEntityMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AppendEntityMemberOutcomeCallable appendEntityMemberCallable(const Model::AppendEntityMemberRequest& request) const;
			ChatOutcome chat(const Model::ChatRequest &request)const;
			void chatAsync(const Model::ChatRequest& request, const ChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChatOutcomeCallable chatCallable(const Model::ChatRequest& request) const;
			CreateBotOutcome createBot(const Model::CreateBotRequest &request)const;
			void createBotAsync(const Model::CreateBotRequest& request, const CreateBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBotOutcomeCallable createBotCallable(const Model::CreateBotRequest& request) const;
			CreateCategoryOutcome createCategory(const Model::CreateCategoryRequest &request)const;
			void createCategoryAsync(const Model::CreateCategoryRequest& request, const CreateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCategoryOutcomeCallable createCategoryCallable(const Model::CreateCategoryRequest& request) const;
			CreateCoreWordOutcome createCoreWord(const Model::CreateCoreWordRequest &request)const;
			void createCoreWordAsync(const Model::CreateCoreWordRequest& request, const CreateCoreWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCoreWordOutcomeCallable createCoreWordCallable(const Model::CreateCoreWordRequest& request) const;
			CreateDialogOutcome createDialog(const Model::CreateDialogRequest &request)const;
			void createDialogAsync(const Model::CreateDialogRequest& request, const CreateDialogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDialogOutcomeCallable createDialogCallable(const Model::CreateDialogRequest& request) const;
			CreateEntityOutcome createEntity(const Model::CreateEntityRequest &request)const;
			void createEntityAsync(const Model::CreateEntityRequest& request, const CreateEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEntityOutcomeCallable createEntityCallable(const Model::CreateEntityRequest& request) const;
			CreateIntentOutcome createIntent(const Model::CreateIntentRequest &request)const;
			void createIntentAsync(const Model::CreateIntentRequest& request, const CreateIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIntentOutcomeCallable createIntentCallable(const Model::CreateIntentRequest& request) const;
			CreateKnowledgeOutcome createKnowledge(const Model::CreateKnowledgeRequest &request)const;
			void createKnowledgeAsync(const Model::CreateKnowledgeRequest& request, const CreateKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKnowledgeOutcomeCallable createKnowledgeCallable(const Model::CreateKnowledgeRequest& request) const;
			CreatePerspectiveOutcome createPerspective(const Model::CreatePerspectiveRequest &request)const;
			void createPerspectiveAsync(const Model::CreatePerspectiveRequest& request, const CreatePerspectiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePerspectiveOutcomeCallable createPerspectiveCallable(const Model::CreatePerspectiveRequest& request) const;
			DeleteBotOutcome deleteBot(const Model::DeleteBotRequest &request)const;
			void deleteBotAsync(const Model::DeleteBotRequest& request, const DeleteBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBotOutcomeCallable deleteBotCallable(const Model::DeleteBotRequest& request) const;
			DeleteCategoryOutcome deleteCategory(const Model::DeleteCategoryRequest &request)const;
			void deleteCategoryAsync(const Model::DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCategoryOutcomeCallable deleteCategoryCallable(const Model::DeleteCategoryRequest& request) const;
			DeleteCoreWordOutcome deleteCoreWord(const Model::DeleteCoreWordRequest &request)const;
			void deleteCoreWordAsync(const Model::DeleteCoreWordRequest& request, const DeleteCoreWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCoreWordOutcomeCallable deleteCoreWordCallable(const Model::DeleteCoreWordRequest& request) const;
			DeleteDialogOutcome deleteDialog(const Model::DeleteDialogRequest &request)const;
			void deleteDialogAsync(const Model::DeleteDialogRequest& request, const DeleteDialogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDialogOutcomeCallable deleteDialogCallable(const Model::DeleteDialogRequest& request) const;
			DeleteEntityOutcome deleteEntity(const Model::DeleteEntityRequest &request)const;
			void deleteEntityAsync(const Model::DeleteEntityRequest& request, const DeleteEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEntityOutcomeCallable deleteEntityCallable(const Model::DeleteEntityRequest& request) const;
			DeleteIntentOutcome deleteIntent(const Model::DeleteIntentRequest &request)const;
			void deleteIntentAsync(const Model::DeleteIntentRequest& request, const DeleteIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIntentOutcomeCallable deleteIntentCallable(const Model::DeleteIntentRequest& request) const;
			DeleteKnowledgeOutcome deleteKnowledge(const Model::DeleteKnowledgeRequest &request)const;
			void deleteKnowledgeAsync(const Model::DeleteKnowledgeRequest& request, const DeleteKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKnowledgeOutcomeCallable deleteKnowledgeCallable(const Model::DeleteKnowledgeRequest& request) const;
			DescribeBotOutcome describeBot(const Model::DescribeBotRequest &request)const;
			void describeBotAsync(const Model::DescribeBotRequest& request, const DescribeBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBotOutcomeCallable describeBotCallable(const Model::DescribeBotRequest& request) const;
			DescribeCategoryOutcome describeCategory(const Model::DescribeCategoryRequest &request)const;
			void describeCategoryAsync(const Model::DescribeCategoryRequest& request, const DescribeCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCategoryOutcomeCallable describeCategoryCallable(const Model::DescribeCategoryRequest& request) const;
			DescribeCoreWordOutcome describeCoreWord(const Model::DescribeCoreWordRequest &request)const;
			void describeCoreWordAsync(const Model::DescribeCoreWordRequest& request, const DescribeCoreWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCoreWordOutcomeCallable describeCoreWordCallable(const Model::DescribeCoreWordRequest& request) const;
			DescribeDialogOutcome describeDialog(const Model::DescribeDialogRequest &request)const;
			void describeDialogAsync(const Model::DescribeDialogRequest& request, const DescribeDialogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDialogOutcomeCallable describeDialogCallable(const Model::DescribeDialogRequest& request) const;
			DescribeDialogFlowOutcome describeDialogFlow(const Model::DescribeDialogFlowRequest &request)const;
			void describeDialogFlowAsync(const Model::DescribeDialogFlowRequest& request, const DescribeDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDialogFlowOutcomeCallable describeDialogFlowCallable(const Model::DescribeDialogFlowRequest& request) const;
			DescribeEntitiesOutcome describeEntities(const Model::DescribeEntitiesRequest &request)const;
			void describeEntitiesAsync(const Model::DescribeEntitiesRequest& request, const DescribeEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEntitiesOutcomeCallable describeEntitiesCallable(const Model::DescribeEntitiesRequest& request) const;
			DescribeIntentOutcome describeIntent(const Model::DescribeIntentRequest &request)const;
			void describeIntentAsync(const Model::DescribeIntentRequest& request, const DescribeIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIntentOutcomeCallable describeIntentCallable(const Model::DescribeIntentRequest& request) const;
			DescribeKnowledgeOutcome describeKnowledge(const Model::DescribeKnowledgeRequest &request)const;
			void describeKnowledgeAsync(const Model::DescribeKnowledgeRequest& request, const DescribeKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKnowledgeOutcomeCallable describeKnowledgeCallable(const Model::DescribeKnowledgeRequest& request) const;
			DescribePerspectiveOutcome describePerspective(const Model::DescribePerspectiveRequest &request)const;
			void describePerspectiveAsync(const Model::DescribePerspectiveRequest& request, const DescribePerspectiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePerspectiveOutcomeCallable describePerspectiveCallable(const Model::DescribePerspectiveRequest& request) const;
			DisableDialogFlowOutcome disableDialogFlow(const Model::DisableDialogFlowRequest &request)const;
			void disableDialogFlowAsync(const Model::DisableDialogFlowRequest& request, const DisableDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDialogFlowOutcomeCallable disableDialogFlowCallable(const Model::DisableDialogFlowRequest& request) const;
			DisableKnowledgeOutcome disableKnowledge(const Model::DisableKnowledgeRequest &request)const;
			void disableKnowledgeAsync(const Model::DisableKnowledgeRequest& request, const DisableKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableKnowledgeOutcomeCallable disableKnowledgeCallable(const Model::DisableKnowledgeRequest& request) const;
			FeedbackOutcome feedback(const Model::FeedbackRequest &request)const;
			void feedbackAsync(const Model::FeedbackRequest& request, const FeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FeedbackOutcomeCallable feedbackCallable(const Model::FeedbackRequest& request) const;
			LinkBotCategoryOutcome linkBotCategory(const Model::LinkBotCategoryRequest &request)const;
			void linkBotCategoryAsync(const Model::LinkBotCategoryRequest& request, const LinkBotCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LinkBotCategoryOutcomeCallable linkBotCategoryCallable(const Model::LinkBotCategoryRequest& request) const;
			MoveKnowledgeCategoryOutcome moveKnowledgeCategory(const Model::MoveKnowledgeCategoryRequest &request)const;
			void moveKnowledgeCategoryAsync(const Model::MoveKnowledgeCategoryRequest& request, const MoveKnowledgeCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveKnowledgeCategoryOutcomeCallable moveKnowledgeCategoryCallable(const Model::MoveKnowledgeCategoryRequest& request) const;
			PublishDialogFlowOutcome publishDialogFlow(const Model::PublishDialogFlowRequest &request)const;
			void publishDialogFlowAsync(const Model::PublishDialogFlowRequest& request, const PublishDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishDialogFlowOutcomeCallable publishDialogFlowCallable(const Model::PublishDialogFlowRequest& request) const;
			PublishKnowledgeOutcome publishKnowledge(const Model::PublishKnowledgeRequest &request)const;
			void publishKnowledgeAsync(const Model::PublishKnowledgeRequest& request, const PublishKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishKnowledgeOutcomeCallable publishKnowledgeCallable(const Model::PublishKnowledgeRequest& request) const;
			QueryBotsOutcome queryBots(const Model::QueryBotsRequest &request)const;
			void queryBotsAsync(const Model::QueryBotsRequest& request, const QueryBotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBotsOutcomeCallable queryBotsCallable(const Model::QueryBotsRequest& request) const;
			QueryCategoriesOutcome queryCategories(const Model::QueryCategoriesRequest &request)const;
			void queryCategoriesAsync(const Model::QueryCategoriesRequest& request, const QueryCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCategoriesOutcomeCallable queryCategoriesCallable(const Model::QueryCategoriesRequest& request) const;
			QueryCoreWordsOutcome queryCoreWords(const Model::QueryCoreWordsRequest &request)const;
			void queryCoreWordsAsync(const Model::QueryCoreWordsRequest& request, const QueryCoreWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCoreWordsOutcomeCallable queryCoreWordsCallable(const Model::QueryCoreWordsRequest& request) const;
			QueryDialogsOutcome queryDialogs(const Model::QueryDialogsRequest &request)const;
			void queryDialogsAsync(const Model::QueryDialogsRequest& request, const QueryDialogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDialogsOutcomeCallable queryDialogsCallable(const Model::QueryDialogsRequest& request) const;
			QueryEntitiesOutcome queryEntities(const Model::QueryEntitiesRequest &request)const;
			void queryEntitiesAsync(const Model::QueryEntitiesRequest& request, const QueryEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEntitiesOutcomeCallable queryEntitiesCallable(const Model::QueryEntitiesRequest& request) const;
			QueryIntentsOutcome queryIntents(const Model::QueryIntentsRequest &request)const;
			void queryIntentsAsync(const Model::QueryIntentsRequest& request, const QueryIntentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIntentsOutcomeCallable queryIntentsCallable(const Model::QueryIntentsRequest& request) const;
			QueryKnowledgesOutcome queryKnowledges(const Model::QueryKnowledgesRequest &request)const;
			void queryKnowledgesAsync(const Model::QueryKnowledgesRequest& request, const QueryKnowledgesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryKnowledgesOutcomeCallable queryKnowledgesCallable(const Model::QueryKnowledgesRequest& request) const;
			QueryPerspectivesOutcome queryPerspectives(const Model::QueryPerspectivesRequest &request)const;
			void queryPerspectivesAsync(const Model::QueryPerspectivesRequest& request, const QueryPerspectivesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPerspectivesOutcomeCallable queryPerspectivesCallable(const Model::QueryPerspectivesRequest& request) const;
			QuerySystemEntitiesOutcome querySystemEntities(const Model::QuerySystemEntitiesRequest &request)const;
			void querySystemEntitiesAsync(const Model::QuerySystemEntitiesRequest& request, const QuerySystemEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySystemEntitiesOutcomeCallable querySystemEntitiesCallable(const Model::QuerySystemEntitiesRequest& request) const;
			RemoveEntityMemberOutcome removeEntityMember(const Model::RemoveEntityMemberRequest &request)const;
			void removeEntityMemberAsync(const Model::RemoveEntityMemberRequest& request, const RemoveEntityMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEntityMemberOutcomeCallable removeEntityMemberCallable(const Model::RemoveEntityMemberRequest& request) const;
			RemoveSynonymOutcome removeSynonym(const Model::RemoveSynonymRequest &request)const;
			void removeSynonymAsync(const Model::RemoveSynonymRequest& request, const RemoveSynonymAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSynonymOutcomeCallable removeSynonymCallable(const Model::RemoveSynonymRequest& request) const;
			TestDialogFlowOutcome testDialogFlow(const Model::TestDialogFlowRequest &request)const;
			void testDialogFlowAsync(const Model::TestDialogFlowRequest& request, const TestDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestDialogFlowOutcomeCallable testDialogFlowCallable(const Model::TestDialogFlowRequest& request) const;
			UpdateCategoryOutcome updateCategory(const Model::UpdateCategoryRequest &request)const;
			void updateCategoryAsync(const Model::UpdateCategoryRequest& request, const UpdateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCategoryOutcomeCallable updateCategoryCallable(const Model::UpdateCategoryRequest& request) const;
			UpdateCoreWordOutcome updateCoreWord(const Model::UpdateCoreWordRequest &request)const;
			void updateCoreWordAsync(const Model::UpdateCoreWordRequest& request, const UpdateCoreWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCoreWordOutcomeCallable updateCoreWordCallable(const Model::UpdateCoreWordRequest& request) const;
			UpdateDialogOutcome updateDialog(const Model::UpdateDialogRequest &request)const;
			void updateDialogAsync(const Model::UpdateDialogRequest& request, const UpdateDialogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDialogOutcomeCallable updateDialogCallable(const Model::UpdateDialogRequest& request) const;
			UpdateDialogFlowOutcome updateDialogFlow(const Model::UpdateDialogFlowRequest &request)const;
			void updateDialogFlowAsync(const Model::UpdateDialogFlowRequest& request, const UpdateDialogFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDialogFlowOutcomeCallable updateDialogFlowCallable(const Model::UpdateDialogFlowRequest& request) const;
			UpdateEntityOutcome updateEntity(const Model::UpdateEntityRequest &request)const;
			void updateEntityAsync(const Model::UpdateEntityRequest& request, const UpdateEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEntityOutcomeCallable updateEntityCallable(const Model::UpdateEntityRequest& request) const;
			UpdateIntentOutcome updateIntent(const Model::UpdateIntentRequest &request)const;
			void updateIntentAsync(const Model::UpdateIntentRequest& request, const UpdateIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIntentOutcomeCallable updateIntentCallable(const Model::UpdateIntentRequest& request) const;
			UpdateKnowledgeOutcome updateKnowledge(const Model::UpdateKnowledgeRequest &request)const;
			void updateKnowledgeAsync(const Model::UpdateKnowledgeRequest& request, const UpdateKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateKnowledgeOutcomeCallable updateKnowledgeCallable(const Model::UpdateKnowledgeRequest& request) const;
			UpdatePerspectiveOutcome updatePerspective(const Model::UpdatePerspectiveRequest &request)const;
			void updatePerspectiveAsync(const Model::UpdatePerspectiveRequest& request, const UpdatePerspectiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePerspectiveOutcomeCallable updatePerspectiveCallable(const Model::UpdatePerspectiveRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CHATBOT_CHATBOTCLIENT_H_
