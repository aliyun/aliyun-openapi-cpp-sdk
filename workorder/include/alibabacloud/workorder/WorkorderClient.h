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

#ifndef ALIBABACLOUD_WORKORDER_WORKORDERCLIENT_H_
#define ALIBABACLOUD_WORKORDER_WORKORDERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "WorkorderExport.h"
#include "model/CloseTicketRequest.h"
#include "model/CloseTicketResult.h"
#include "model/CreateTicketRequest.h"
#include "model/CreateTicketResult.h"
#include "model/GetMqConsumerTagRequest.h"
#include "model/GetMqConsumerTagResult.h"
#include "model/ListCategoriesRequest.h"
#include "model/ListCategoriesResult.h"
#include "model/ListProductsRequest.h"
#include "model/ListProductsResult.h"
#include "model/ListTicketNotesRequest.h"
#include "model/ListTicketNotesResult.h"
#include "model/ListTicketsRequest.h"
#include "model/ListTicketsResult.h"
#include "model/ReplyTicketRequest.h"
#include "model/ReplyTicketResult.h"


namespace AlibabaCloud
{
	namespace Workorder
	{
		class ALIBABACLOUD_WORKORDER_EXPORT WorkorderClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CloseTicketResult> CloseTicketOutcome;
			typedef std::future<CloseTicketOutcome> CloseTicketOutcomeCallable;
			typedef std::function<void(const WorkorderClient*, const Model::CloseTicketRequest&, const CloseTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseTicketAsyncHandler;
			typedef Outcome<Error, Model::CreateTicketResult> CreateTicketOutcome;
			typedef std::future<CreateTicketOutcome> CreateTicketOutcomeCallable;
			typedef std::function<void(const WorkorderClient*, const Model::CreateTicketRequest&, const CreateTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTicketAsyncHandler;
			typedef Outcome<Error, Model::GetMqConsumerTagResult> GetMqConsumerTagOutcome;
			typedef std::future<GetMqConsumerTagOutcome> GetMqConsumerTagOutcomeCallable;
			typedef std::function<void(const WorkorderClient*, const Model::GetMqConsumerTagRequest&, const GetMqConsumerTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMqConsumerTagAsyncHandler;
			typedef Outcome<Error, Model::ListCategoriesResult> ListCategoriesOutcome;
			typedef std::future<ListCategoriesOutcome> ListCategoriesOutcomeCallable;
			typedef std::function<void(const WorkorderClient*, const Model::ListCategoriesRequest&, const ListCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCategoriesAsyncHandler;
			typedef Outcome<Error, Model::ListProductsResult> ListProductsOutcome;
			typedef std::future<ListProductsOutcome> ListProductsOutcomeCallable;
			typedef std::function<void(const WorkorderClient*, const Model::ListProductsRequest&, const ListProductsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductsAsyncHandler;
			typedef Outcome<Error, Model::ListTicketNotesResult> ListTicketNotesOutcome;
			typedef std::future<ListTicketNotesOutcome> ListTicketNotesOutcomeCallable;
			typedef std::function<void(const WorkorderClient*, const Model::ListTicketNotesRequest&, const ListTicketNotesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTicketNotesAsyncHandler;
			typedef Outcome<Error, Model::ListTicketsResult> ListTicketsOutcome;
			typedef std::future<ListTicketsOutcome> ListTicketsOutcomeCallable;
			typedef std::function<void(const WorkorderClient*, const Model::ListTicketsRequest&, const ListTicketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTicketsAsyncHandler;
			typedef Outcome<Error, Model::ReplyTicketResult> ReplyTicketOutcome;
			typedef std::future<ReplyTicketOutcome> ReplyTicketOutcomeCallable;
			typedef std::function<void(const WorkorderClient*, const Model::ReplyTicketRequest&, const ReplyTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplyTicketAsyncHandler;

			WorkorderClient(const Credentials &credentials, const ClientConfiguration &configuration);
			WorkorderClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			WorkorderClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~WorkorderClient();
			CloseTicketOutcome closeTicket(const Model::CloseTicketRequest &request)const;
			void closeTicketAsync(const Model::CloseTicketRequest& request, const CloseTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseTicketOutcomeCallable closeTicketCallable(const Model::CloseTicketRequest& request) const;
			CreateTicketOutcome createTicket(const Model::CreateTicketRequest &request)const;
			void createTicketAsync(const Model::CreateTicketRequest& request, const CreateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTicketOutcomeCallable createTicketCallable(const Model::CreateTicketRequest& request) const;
			GetMqConsumerTagOutcome getMqConsumerTag(const Model::GetMqConsumerTagRequest &request)const;
			void getMqConsumerTagAsync(const Model::GetMqConsumerTagRequest& request, const GetMqConsumerTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMqConsumerTagOutcomeCallable getMqConsumerTagCallable(const Model::GetMqConsumerTagRequest& request) const;
			ListCategoriesOutcome listCategories(const Model::ListCategoriesRequest &request)const;
			void listCategoriesAsync(const Model::ListCategoriesRequest& request, const ListCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCategoriesOutcomeCallable listCategoriesCallable(const Model::ListCategoriesRequest& request) const;
			ListProductsOutcome listProducts(const Model::ListProductsRequest &request)const;
			void listProductsAsync(const Model::ListProductsRequest& request, const ListProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductsOutcomeCallable listProductsCallable(const Model::ListProductsRequest& request) const;
			ListTicketNotesOutcome listTicketNotes(const Model::ListTicketNotesRequest &request)const;
			void listTicketNotesAsync(const Model::ListTicketNotesRequest& request, const ListTicketNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTicketNotesOutcomeCallable listTicketNotesCallable(const Model::ListTicketNotesRequest& request) const;
			ListTicketsOutcome listTickets(const Model::ListTicketsRequest &request)const;
			void listTicketsAsync(const Model::ListTicketsRequest& request, const ListTicketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTicketsOutcomeCallable listTicketsCallable(const Model::ListTicketsRequest& request) const;
			ReplyTicketOutcome replyTicket(const Model::ReplyTicketRequest &request)const;
			void replyTicketAsync(const Model::ReplyTicketRequest& request, const ReplyTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplyTicketOutcomeCallable replyTicketCallable(const Model::ReplyTicketRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_WORKORDER_WORKORDERCLIENT_H_
