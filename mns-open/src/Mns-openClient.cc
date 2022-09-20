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

#include <alibabacloud/mns-open/Mns_openClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

namespace
{
	const std::string SERVICE_NAME = "Mns-open";
}

Mns_openClient::Mns_openClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mns");
}

Mns_openClient::Mns_openClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mns");
}

Mns_openClient::Mns_openClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mns");
}

Mns_openClient::~Mns_openClient()
{}

Mns_openClient::CreateQueueOutcome Mns_openClient::createQueue(const CreateQueueRequest &request) const
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

void Mns_openClient::createQueueAsync(const CreateQueueRequest& request, const CreateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::CreateQueueOutcomeCallable Mns_openClient::createQueueCallable(const CreateQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQueueOutcome()>>(
			[this, request]()
			{
			return this->createQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::CreateTopicOutcome Mns_openClient::createTopic(const CreateTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTopicOutcome(CreateTopicResult(outcome.result()));
	else
		return CreateTopicOutcome(outcome.error());
}

void Mns_openClient::createTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::CreateTopicOutcomeCallable Mns_openClient::createTopicCallable(const CreateTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTopicOutcome()>>(
			[this, request]()
			{
			return this->createTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::DeleteQueueOutcome Mns_openClient::deleteQueue(const DeleteQueueRequest &request) const
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

void Mns_openClient::deleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::DeleteQueueOutcomeCallable Mns_openClient::deleteQueueCallable(const DeleteQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQueueOutcome()>>(
			[this, request]()
			{
			return this->deleteQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::DeleteTopicOutcome Mns_openClient::deleteTopic(const DeleteTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTopicOutcome(DeleteTopicResult(outcome.result()));
	else
		return DeleteTopicOutcome(outcome.error());
}

void Mns_openClient::deleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::DeleteTopicOutcomeCallable Mns_openClient::deleteTopicCallable(const DeleteTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTopicOutcome()>>(
			[this, request]()
			{
			return this->deleteTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::GetQueueAttributesOutcome Mns_openClient::getQueueAttributes(const GetQueueAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQueueAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQueueAttributesOutcome(GetQueueAttributesResult(outcome.result()));
	else
		return GetQueueAttributesOutcome(outcome.error());
}

void Mns_openClient::getQueueAttributesAsync(const GetQueueAttributesRequest& request, const GetQueueAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQueueAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::GetQueueAttributesOutcomeCallable Mns_openClient::getQueueAttributesCallable(const GetQueueAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQueueAttributesOutcome()>>(
			[this, request]()
			{
			return this->getQueueAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::GetSubscriptionAttributesOutcome Mns_openClient::getSubscriptionAttributes(const GetSubscriptionAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubscriptionAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubscriptionAttributesOutcome(GetSubscriptionAttributesResult(outcome.result()));
	else
		return GetSubscriptionAttributesOutcome(outcome.error());
}

void Mns_openClient::getSubscriptionAttributesAsync(const GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubscriptionAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::GetSubscriptionAttributesOutcomeCallable Mns_openClient::getSubscriptionAttributesCallable(const GetSubscriptionAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubscriptionAttributesOutcome()>>(
			[this, request]()
			{
			return this->getSubscriptionAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::GetTopicAttributesOutcome Mns_openClient::getTopicAttributes(const GetTopicAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTopicAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTopicAttributesOutcome(GetTopicAttributesResult(outcome.result()));
	else
		return GetTopicAttributesOutcome(outcome.error());
}

void Mns_openClient::getTopicAttributesAsync(const GetTopicAttributesRequest& request, const GetTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTopicAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::GetTopicAttributesOutcomeCallable Mns_openClient::getTopicAttributesCallable(const GetTopicAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTopicAttributesOutcome()>>(
			[this, request]()
			{
			return this->getTopicAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::ListQueueOutcome Mns_openClient::listQueue(const ListQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQueueOutcome(ListQueueResult(outcome.result()));
	else
		return ListQueueOutcome(outcome.error());
}

void Mns_openClient::listQueueAsync(const ListQueueRequest& request, const ListQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::ListQueueOutcomeCallable Mns_openClient::listQueueCallable(const ListQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQueueOutcome()>>(
			[this, request]()
			{
			return this->listQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::ListSubscriptionByTopicOutcome Mns_openClient::listSubscriptionByTopic(const ListSubscriptionByTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSubscriptionByTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSubscriptionByTopicOutcome(ListSubscriptionByTopicResult(outcome.result()));
	else
		return ListSubscriptionByTopicOutcome(outcome.error());
}

void Mns_openClient::listSubscriptionByTopicAsync(const ListSubscriptionByTopicRequest& request, const ListSubscriptionByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSubscriptionByTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::ListSubscriptionByTopicOutcomeCallable Mns_openClient::listSubscriptionByTopicCallable(const ListSubscriptionByTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSubscriptionByTopicOutcome()>>(
			[this, request]()
			{
			return this->listSubscriptionByTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::ListTopicOutcome Mns_openClient::listTopic(const ListTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTopicOutcome(ListTopicResult(outcome.result()));
	else
		return ListTopicOutcome(outcome.error());
}

void Mns_openClient::listTopicAsync(const ListTopicRequest& request, const ListTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::ListTopicOutcomeCallable Mns_openClient::listTopicCallable(const ListTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTopicOutcome()>>(
			[this, request]()
			{
			return this->listTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::SetQueueAttributesOutcome Mns_openClient::setQueueAttributes(const SetQueueAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetQueueAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetQueueAttributesOutcome(SetQueueAttributesResult(outcome.result()));
	else
		return SetQueueAttributesOutcome(outcome.error());
}

void Mns_openClient::setQueueAttributesAsync(const SetQueueAttributesRequest& request, const SetQueueAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setQueueAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::SetQueueAttributesOutcomeCallable Mns_openClient::setQueueAttributesCallable(const SetQueueAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetQueueAttributesOutcome()>>(
			[this, request]()
			{
			return this->setQueueAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::SetSubscriptionAttributesOutcome Mns_openClient::setSubscriptionAttributes(const SetSubscriptionAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSubscriptionAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSubscriptionAttributesOutcome(SetSubscriptionAttributesResult(outcome.result()));
	else
		return SetSubscriptionAttributesOutcome(outcome.error());
}

void Mns_openClient::setSubscriptionAttributesAsync(const SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSubscriptionAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::SetSubscriptionAttributesOutcomeCallable Mns_openClient::setSubscriptionAttributesCallable(const SetSubscriptionAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSubscriptionAttributesOutcome()>>(
			[this, request]()
			{
			return this->setSubscriptionAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::SetTopicAttributesOutcome Mns_openClient::setTopicAttributes(const SetTopicAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetTopicAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetTopicAttributesOutcome(SetTopicAttributesResult(outcome.result()));
	else
		return SetTopicAttributesOutcome(outcome.error());
}

void Mns_openClient::setTopicAttributesAsync(const SetTopicAttributesRequest& request, const SetTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setTopicAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::SetTopicAttributesOutcomeCallable Mns_openClient::setTopicAttributesCallable(const SetTopicAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetTopicAttributesOutcome()>>(
			[this, request]()
			{
			return this->setTopicAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::SubscribeOutcome Mns_openClient::subscribe(const SubscribeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubscribeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubscribeOutcome(SubscribeResult(outcome.result()));
	else
		return SubscribeOutcome(outcome.error());
}

void Mns_openClient::subscribeAsync(const SubscribeRequest& request, const SubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, subscribe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::SubscribeOutcomeCallable Mns_openClient::subscribeCallable(const SubscribeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubscribeOutcome()>>(
			[this, request]()
			{
			return this->subscribe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Mns_openClient::UnsubscribeOutcome Mns_openClient::unsubscribe(const UnsubscribeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnsubscribeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnsubscribeOutcome(UnsubscribeResult(outcome.result()));
	else
		return UnsubscribeOutcome(outcome.error());
}

void Mns_openClient::unsubscribeAsync(const UnsubscribeRequest& request, const UnsubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unsubscribe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Mns_openClient::UnsubscribeOutcomeCallable Mns_openClient::unsubscribeCallable(const UnsubscribeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnsubscribeOutcome()>>(
			[this, request]()
			{
			return this->unsubscribe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

