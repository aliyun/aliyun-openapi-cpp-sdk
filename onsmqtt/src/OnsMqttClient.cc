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

#include <alibabacloud/onsmqtt/OnsMqttClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::OnsMqtt;
using namespace AlibabaCloud::OnsMqtt::Model;

namespace
{
	const std::string SERVICE_NAME = "OnsMqtt";
}

OnsMqttClient::OnsMqttClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "onsmqtt");
}

OnsMqttClient::OnsMqttClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "onsmqtt");
}

OnsMqttClient::OnsMqttClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "onsmqtt");
}

OnsMqttClient::~OnsMqttClient()
{}

OnsMqttClient::ApplyTokenOutcome OnsMqttClient::applyToken(const ApplyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyTokenOutcome(ApplyTokenResult(outcome.result()));
	else
		return ApplyTokenOutcome(outcome.error());
}

void OnsMqttClient::applyTokenAsync(const ApplyTokenRequest& request, const ApplyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::ApplyTokenOutcomeCallable OnsMqttClient::applyTokenCallable(const ApplyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyTokenOutcome()>>(
			[this, request]()
			{
			return this->applyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsMqttClient::BatchQuerySessionByClientIdsOutcome OnsMqttClient::batchQuerySessionByClientIds(const BatchQuerySessionByClientIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchQuerySessionByClientIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchQuerySessionByClientIdsOutcome(BatchQuerySessionByClientIdsResult(outcome.result()));
	else
		return BatchQuerySessionByClientIdsOutcome(outcome.error());
}

void OnsMqttClient::batchQuerySessionByClientIdsAsync(const BatchQuerySessionByClientIdsRequest& request, const BatchQuerySessionByClientIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchQuerySessionByClientIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::BatchQuerySessionByClientIdsOutcomeCallable OnsMqttClient::batchQuerySessionByClientIdsCallable(const BatchQuerySessionByClientIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchQuerySessionByClientIdsOutcome()>>(
			[this, request]()
			{
			return this->batchQuerySessionByClientIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsMqttClient::CreateGroupIdOutcome OnsMqttClient::createGroupId(const CreateGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupIdOutcome(CreateGroupIdResult(outcome.result()));
	else
		return CreateGroupIdOutcome(outcome.error());
}

void OnsMqttClient::createGroupIdAsync(const CreateGroupIdRequest& request, const CreateGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::CreateGroupIdOutcomeCallable OnsMqttClient::createGroupIdCallable(const CreateGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupIdOutcome()>>(
			[this, request]()
			{
			return this->createGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsMqttClient::DeleteGroupIdOutcome OnsMqttClient::deleteGroupId(const DeleteGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupIdOutcome(DeleteGroupIdResult(outcome.result()));
	else
		return DeleteGroupIdOutcome(outcome.error());
}

void OnsMqttClient::deleteGroupIdAsync(const DeleteGroupIdRequest& request, const DeleteGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::DeleteGroupIdOutcomeCallable OnsMqttClient::deleteGroupIdCallable(const DeleteGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupIdOutcome()>>(
			[this, request]()
			{
			return this->deleteGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsMqttClient::ListGroupIdOutcome OnsMqttClient::listGroupId(const ListGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupIdOutcome(ListGroupIdResult(outcome.result()));
	else
		return ListGroupIdOutcome(outcome.error());
}

void OnsMqttClient::listGroupIdAsync(const ListGroupIdRequest& request, const ListGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::ListGroupIdOutcomeCallable OnsMqttClient::listGroupIdCallable(const ListGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupIdOutcome()>>(
			[this, request]()
			{
			return this->listGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsMqttClient::QuerySessionByClientIdOutcome OnsMqttClient::querySessionByClientId(const QuerySessionByClientIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySessionByClientIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySessionByClientIdOutcome(QuerySessionByClientIdResult(outcome.result()));
	else
		return QuerySessionByClientIdOutcome(outcome.error());
}

void OnsMqttClient::querySessionByClientIdAsync(const QuerySessionByClientIdRequest& request, const QuerySessionByClientIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySessionByClientId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::QuerySessionByClientIdOutcomeCallable OnsMqttClient::querySessionByClientIdCallable(const QuerySessionByClientIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySessionByClientIdOutcome()>>(
			[this, request]()
			{
			return this->querySessionByClientId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsMqttClient::QueryTokenOutcome OnsMqttClient::queryToken(const QueryTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTokenOutcome(QueryTokenResult(outcome.result()));
	else
		return QueryTokenOutcome(outcome.error());
}

void OnsMqttClient::queryTokenAsync(const QueryTokenRequest& request, const QueryTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::QueryTokenOutcomeCallable OnsMqttClient::queryTokenCallable(const QueryTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTokenOutcome()>>(
			[this, request]()
			{
			return this->queryToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsMqttClient::RevokeTokenOutcome OnsMqttClient::revokeToken(const RevokeTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeTokenOutcome(RevokeTokenResult(outcome.result()));
	else
		return RevokeTokenOutcome(outcome.error());
}

void OnsMqttClient::revokeTokenAsync(const RevokeTokenRequest& request, const RevokeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::RevokeTokenOutcomeCallable OnsMqttClient::revokeTokenCallable(const RevokeTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeTokenOutcome()>>(
			[this, request]()
			{
			return this->revokeToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsMqttClient::SendMessageOutcome OnsMqttClient::sendMessage(const SendMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendMessageOutcome(SendMessageResult(outcome.result()));
	else
		return SendMessageOutcome(outcome.error());
}

void OnsMqttClient::sendMessageAsync(const SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsMqttClient::SendMessageOutcomeCallable OnsMqttClient::sendMessageCallable(const SendMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendMessageOutcome()>>(
			[this, request]()
			{
			return this->sendMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

