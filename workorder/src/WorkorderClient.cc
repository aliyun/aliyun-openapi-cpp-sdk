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

#include <alibabacloud/workorder/WorkorderClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Workorder;
using namespace AlibabaCloud::Workorder::Model;

namespace
{
	const std::string SERVICE_NAME = "Workorder";
}

WorkorderClient::WorkorderClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WorkorderClient::WorkorderClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WorkorderClient::WorkorderClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WorkorderClient::~WorkorderClient()
{}

WorkorderClient::CloseTicketOutcome WorkorderClient::closeTicket(const CloseTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseTicketOutcome(CloseTicketResult(outcome.result()));
	else
		return CloseTicketOutcome(outcome.error());
}

void WorkorderClient::closeTicketAsync(const CloseTicketRequest& request, const CloseTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WorkorderClient::CloseTicketOutcomeCallable WorkorderClient::closeTicketCallable(const CloseTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseTicketOutcome()>>(
			[this, request]()
			{
			return this->closeTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WorkorderClient::CreateTicketOutcome WorkorderClient::createTicket(const CreateTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTicketOutcome(CreateTicketResult(outcome.result()));
	else
		return CreateTicketOutcome(outcome.error());
}

void WorkorderClient::createTicketAsync(const CreateTicketRequest& request, const CreateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WorkorderClient::CreateTicketOutcomeCallable WorkorderClient::createTicketCallable(const CreateTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTicketOutcome()>>(
			[this, request]()
			{
			return this->createTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WorkorderClient::GetMqConsumerTagOutcome WorkorderClient::getMqConsumerTag(const GetMqConsumerTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMqConsumerTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMqConsumerTagOutcome(GetMqConsumerTagResult(outcome.result()));
	else
		return GetMqConsumerTagOutcome(outcome.error());
}

void WorkorderClient::getMqConsumerTagAsync(const GetMqConsumerTagRequest& request, const GetMqConsumerTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMqConsumerTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WorkorderClient::GetMqConsumerTagOutcomeCallable WorkorderClient::getMqConsumerTagCallable(const GetMqConsumerTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMqConsumerTagOutcome()>>(
			[this, request]()
			{
			return this->getMqConsumerTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WorkorderClient::ListCategoriesOutcome WorkorderClient::listCategories(const ListCategoriesRequest &request) const
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

void WorkorderClient::listCategoriesAsync(const ListCategoriesRequest& request, const ListCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WorkorderClient::ListCategoriesOutcomeCallable WorkorderClient::listCategoriesCallable(const ListCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCategoriesOutcome()>>(
			[this, request]()
			{
			return this->listCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WorkorderClient::ListProductsOutcome WorkorderClient::listProducts(const ListProductsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductsOutcome(ListProductsResult(outcome.result()));
	else
		return ListProductsOutcome(outcome.error());
}

void WorkorderClient::listProductsAsync(const ListProductsRequest& request, const ListProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProducts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WorkorderClient::ListProductsOutcomeCallable WorkorderClient::listProductsCallable(const ListProductsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductsOutcome()>>(
			[this, request]()
			{
			return this->listProducts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WorkorderClient::ListTicketNotesOutcome WorkorderClient::listTicketNotes(const ListTicketNotesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTicketNotesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTicketNotesOutcome(ListTicketNotesResult(outcome.result()));
	else
		return ListTicketNotesOutcome(outcome.error());
}

void WorkorderClient::listTicketNotesAsync(const ListTicketNotesRequest& request, const ListTicketNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTicketNotes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WorkorderClient::ListTicketNotesOutcomeCallable WorkorderClient::listTicketNotesCallable(const ListTicketNotesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTicketNotesOutcome()>>(
			[this, request]()
			{
			return this->listTicketNotes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WorkorderClient::ListTicketsOutcome WorkorderClient::listTickets(const ListTicketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTicketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTicketsOutcome(ListTicketsResult(outcome.result()));
	else
		return ListTicketsOutcome(outcome.error());
}

void WorkorderClient::listTicketsAsync(const ListTicketsRequest& request, const ListTicketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTickets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WorkorderClient::ListTicketsOutcomeCallable WorkorderClient::listTicketsCallable(const ListTicketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTicketsOutcome()>>(
			[this, request]()
			{
			return this->listTickets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WorkorderClient::ReplyTicketOutcome WorkorderClient::replyTicket(const ReplyTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplyTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplyTicketOutcome(ReplyTicketResult(outcome.result()));
	else
		return ReplyTicketOutcome(outcome.error());
}

void WorkorderClient::replyTicketAsync(const ReplyTicketRequest& request, const ReplyTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replyTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WorkorderClient::ReplyTicketOutcomeCallable WorkorderClient::replyTicketCallable(const ReplyTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplyTicketOutcome()>>(
			[this, request]()
			{
			return this->replyTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

