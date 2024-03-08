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

#include <alibabacloud/amqp-open/Amqp_openClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Amqp_open;
using namespace AlibabaCloud::Amqp_open::Model;

namespace
{
	const std::string SERVICE_NAME = "amqp-open";
}

Amqp_openClient::Amqp_openClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "onsproxy");
}

Amqp_openClient::Amqp_openClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "onsproxy");
}

Amqp_openClient::Amqp_openClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "onsproxy");
}

Amqp_openClient::~Amqp_openClient()
{}

Amqp_openClient::CreateAccountOutcome Amqp_openClient::createAccount(const CreateAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountOutcome(CreateAccountResult(outcome.result()));
	else
		return CreateAccountOutcome(outcome.error());
}

void Amqp_openClient::createAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::CreateAccountOutcomeCallable Amqp_openClient::createAccountCallable(const CreateAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
			[this, request]()
			{
			return this->createAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::CreateBindingOutcome Amqp_openClient::createBinding(const CreateBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBindingOutcome(CreateBindingResult(outcome.result()));
	else
		return CreateBindingOutcome(outcome.error());
}

void Amqp_openClient::createBindingAsync(const CreateBindingRequest& request, const CreateBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::CreateBindingOutcomeCallable Amqp_openClient::createBindingCallable(const CreateBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBindingOutcome()>>(
			[this, request]()
			{
			return this->createBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::CreateExchangeOutcome Amqp_openClient::createExchange(const CreateExchangeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateExchangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateExchangeOutcome(CreateExchangeResult(outcome.result()));
	else
		return CreateExchangeOutcome(outcome.error());
}

void Amqp_openClient::createExchangeAsync(const CreateExchangeRequest& request, const CreateExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createExchange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::CreateExchangeOutcomeCallable Amqp_openClient::createExchangeCallable(const CreateExchangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateExchangeOutcome()>>(
			[this, request]()
			{
			return this->createExchange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::CreateInstanceOutcome Amqp_openClient::createInstance(const CreateInstanceRequest &request) const
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

void Amqp_openClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::CreateInstanceOutcomeCallable Amqp_openClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::CreateQueueOutcome Amqp_openClient::createQueue(const CreateQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQueueOutcome(CreateQueueResult(outcome.result()));
	else
		return CreateQueueOutcome(outcome.error());
}

void Amqp_openClient::createQueueAsync(const CreateQueueRequest& request, const CreateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::CreateQueueOutcomeCallable Amqp_openClient::createQueueCallable(const CreateQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQueueOutcome()>>(
			[this, request]()
			{
			return this->createQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::CreateVirtualHostOutcome Amqp_openClient::createVirtualHost(const CreateVirtualHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVirtualHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVirtualHostOutcome(CreateVirtualHostResult(outcome.result()));
	else
		return CreateVirtualHostOutcome(outcome.error());
}

void Amqp_openClient::createVirtualHostAsync(const CreateVirtualHostRequest& request, const CreateVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVirtualHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::CreateVirtualHostOutcomeCallable Amqp_openClient::createVirtualHostCallable(const CreateVirtualHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVirtualHostOutcome()>>(
			[this, request]()
			{
			return this->createVirtualHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::DeleteAccountOutcome Amqp_openClient::deleteAccount(const DeleteAccountRequest &request) const
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

void Amqp_openClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::DeleteAccountOutcomeCallable Amqp_openClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::DeleteBindingOutcome Amqp_openClient::deleteBinding(const DeleteBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBindingOutcome(DeleteBindingResult(outcome.result()));
	else
		return DeleteBindingOutcome(outcome.error());
}

void Amqp_openClient::deleteBindingAsync(const DeleteBindingRequest& request, const DeleteBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::DeleteBindingOutcomeCallable Amqp_openClient::deleteBindingCallable(const DeleteBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBindingOutcome()>>(
			[this, request]()
			{
			return this->deleteBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::DeleteExchangeOutcome Amqp_openClient::deleteExchange(const DeleteExchangeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExchangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExchangeOutcome(DeleteExchangeResult(outcome.result()));
	else
		return DeleteExchangeOutcome(outcome.error());
}

void Amqp_openClient::deleteExchangeAsync(const DeleteExchangeRequest& request, const DeleteExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExchange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::DeleteExchangeOutcomeCallable Amqp_openClient::deleteExchangeCallable(const DeleteExchangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExchangeOutcome()>>(
			[this, request]()
			{
			return this->deleteExchange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::DeleteQueueOutcome Amqp_openClient::deleteQueue(const DeleteQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQueueOutcome(DeleteQueueResult(outcome.result()));
	else
		return DeleteQueueOutcome(outcome.error());
}

void Amqp_openClient::deleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::DeleteQueueOutcomeCallable Amqp_openClient::deleteQueueCallable(const DeleteQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQueueOutcome()>>(
			[this, request]()
			{
			return this->deleteQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::DeleteVirtualHostOutcome Amqp_openClient::deleteVirtualHost(const DeleteVirtualHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVirtualHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVirtualHostOutcome(DeleteVirtualHostResult(outcome.result()));
	else
		return DeleteVirtualHostOutcome(outcome.error());
}

void Amqp_openClient::deleteVirtualHostAsync(const DeleteVirtualHostRequest& request, const DeleteVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVirtualHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::DeleteVirtualHostOutcomeCallable Amqp_openClient::deleteVirtualHostCallable(const DeleteVirtualHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVirtualHostOutcome()>>(
			[this, request]()
			{
			return this->deleteVirtualHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::GetMetadataAmountOutcome Amqp_openClient::getMetadataAmount(const GetMetadataAmountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetadataAmountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetadataAmountOutcome(GetMetadataAmountResult(outcome.result()));
	else
		return GetMetadataAmountOutcome(outcome.error());
}

void Amqp_openClient::getMetadataAmountAsync(const GetMetadataAmountRequest& request, const GetMetadataAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetadataAmount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::GetMetadataAmountOutcomeCallable Amqp_openClient::getMetadataAmountCallable(const GetMetadataAmountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetadataAmountOutcome()>>(
			[this, request]()
			{
			return this->getMetadataAmount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListAccountsOutcome Amqp_openClient::listAccounts(const ListAccountsRequest &request) const
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

void Amqp_openClient::listAccountsAsync(const ListAccountsRequest& request, const ListAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListAccountsOutcomeCallable Amqp_openClient::listAccountsCallable(const ListAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccountsOutcome()>>(
			[this, request]()
			{
			return this->listAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListBindingsOutcome Amqp_openClient::listBindings(const ListBindingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBindingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBindingsOutcome(ListBindingsResult(outcome.result()));
	else
		return ListBindingsOutcome(outcome.error());
}

void Amqp_openClient::listBindingsAsync(const ListBindingsRequest& request, const ListBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBindings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListBindingsOutcomeCallable Amqp_openClient::listBindingsCallable(const ListBindingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBindingsOutcome()>>(
			[this, request]()
			{
			return this->listBindings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListDownStreamBindingsOutcome Amqp_openClient::listDownStreamBindings(const ListDownStreamBindingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDownStreamBindingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDownStreamBindingsOutcome(ListDownStreamBindingsResult(outcome.result()));
	else
		return ListDownStreamBindingsOutcome(outcome.error());
}

void Amqp_openClient::listDownStreamBindingsAsync(const ListDownStreamBindingsRequest& request, const ListDownStreamBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDownStreamBindings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListDownStreamBindingsOutcomeCallable Amqp_openClient::listDownStreamBindingsCallable(const ListDownStreamBindingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDownStreamBindingsOutcome()>>(
			[this, request]()
			{
			return this->listDownStreamBindings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListExchangeUpStreamBindingsOutcome Amqp_openClient::listExchangeUpStreamBindings(const ListExchangeUpStreamBindingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExchangeUpStreamBindingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExchangeUpStreamBindingsOutcome(ListExchangeUpStreamBindingsResult(outcome.result()));
	else
		return ListExchangeUpStreamBindingsOutcome(outcome.error());
}

void Amqp_openClient::listExchangeUpStreamBindingsAsync(const ListExchangeUpStreamBindingsRequest& request, const ListExchangeUpStreamBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExchangeUpStreamBindings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListExchangeUpStreamBindingsOutcomeCallable Amqp_openClient::listExchangeUpStreamBindingsCallable(const ListExchangeUpStreamBindingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExchangeUpStreamBindingsOutcome()>>(
			[this, request]()
			{
			return this->listExchangeUpStreamBindings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListExchangesOutcome Amqp_openClient::listExchanges(const ListExchangesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExchangesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExchangesOutcome(ListExchangesResult(outcome.result()));
	else
		return ListExchangesOutcome(outcome.error());
}

void Amqp_openClient::listExchangesAsync(const ListExchangesRequest& request, const ListExchangesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExchanges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListExchangesOutcomeCallable Amqp_openClient::listExchangesCallable(const ListExchangesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExchangesOutcome()>>(
			[this, request]()
			{
			return this->listExchanges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListInstancesOutcome Amqp_openClient::listInstances(const ListInstancesRequest &request) const
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

void Amqp_openClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListInstancesOutcomeCallable Amqp_openClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListQueueConsumersOutcome Amqp_openClient::listQueueConsumers(const ListQueueConsumersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQueueConsumersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQueueConsumersOutcome(ListQueueConsumersResult(outcome.result()));
	else
		return ListQueueConsumersOutcome(outcome.error());
}

void Amqp_openClient::listQueueConsumersAsync(const ListQueueConsumersRequest& request, const ListQueueConsumersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQueueConsumers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListQueueConsumersOutcomeCallable Amqp_openClient::listQueueConsumersCallable(const ListQueueConsumersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQueueConsumersOutcome()>>(
			[this, request]()
			{
			return this->listQueueConsumers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListQueueUpStreamBindingsOutcome Amqp_openClient::listQueueUpStreamBindings(const ListQueueUpStreamBindingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQueueUpStreamBindingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQueueUpStreamBindingsOutcome(ListQueueUpStreamBindingsResult(outcome.result()));
	else
		return ListQueueUpStreamBindingsOutcome(outcome.error());
}

void Amqp_openClient::listQueueUpStreamBindingsAsync(const ListQueueUpStreamBindingsRequest& request, const ListQueueUpStreamBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQueueUpStreamBindings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListQueueUpStreamBindingsOutcomeCallable Amqp_openClient::listQueueUpStreamBindingsCallable(const ListQueueUpStreamBindingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQueueUpStreamBindingsOutcome()>>(
			[this, request]()
			{
			return this->listQueueUpStreamBindings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListQueuesOutcome Amqp_openClient::listQueues(const ListQueuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQueuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQueuesOutcome(ListQueuesResult(outcome.result()));
	else
		return ListQueuesOutcome(outcome.error());
}

void Amqp_openClient::listQueuesAsync(const ListQueuesRequest& request, const ListQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQueues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListQueuesOutcomeCallable Amqp_openClient::listQueuesCallable(const ListQueuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQueuesOutcome()>>(
			[this, request]()
			{
			return this->listQueues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::ListVirtualHostsOutcome Amqp_openClient::listVirtualHosts(const ListVirtualHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVirtualHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVirtualHostsOutcome(ListVirtualHostsResult(outcome.result()));
	else
		return ListVirtualHostsOutcome(outcome.error());
}

void Amqp_openClient::listVirtualHostsAsync(const ListVirtualHostsRequest& request, const ListVirtualHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVirtualHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::ListVirtualHostsOutcomeCallable Amqp_openClient::listVirtualHostsCallable(const ListVirtualHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVirtualHostsOutcome()>>(
			[this, request]()
			{
			return this->listVirtualHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::UpdateInstanceOutcome Amqp_openClient::updateInstance(const UpdateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceOutcome(UpdateInstanceResult(outcome.result()));
	else
		return UpdateInstanceOutcome(outcome.error());
}

void Amqp_openClient::updateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::UpdateInstanceOutcomeCallable Amqp_openClient::updateInstanceCallable(const UpdateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Amqp_openClient::UpdateInstanceNameOutcome Amqp_openClient::updateInstanceName(const UpdateInstanceNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceNameOutcome(UpdateInstanceNameResult(outcome.result()));
	else
		return UpdateInstanceNameOutcome(outcome.error());
}

void Amqp_openClient::updateInstanceNameAsync(const UpdateInstanceNameRequest& request, const UpdateInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Amqp_openClient::UpdateInstanceNameOutcomeCallable Amqp_openClient::updateInstanceNameCallable(const UpdateInstanceNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceNameOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

