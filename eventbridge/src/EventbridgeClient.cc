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

#include <alibabacloud/eventbridge/EventbridgeClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

namespace
{
	const std::string SERVICE_NAME = "eventbridge";
}

EventbridgeClient::EventbridgeClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EventbridgeClient::EventbridgeClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EventbridgeClient::EventbridgeClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EventbridgeClient::~EventbridgeClient()
{}

EventbridgeClient::CreateApiDestinationOutcome EventbridgeClient::createApiDestination(const CreateApiDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApiDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApiDestinationOutcome(CreateApiDestinationResult(outcome.result()));
	else
		return CreateApiDestinationOutcome(outcome.error());
}

void EventbridgeClient::createApiDestinationAsync(const CreateApiDestinationRequest& request, const CreateApiDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApiDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::CreateApiDestinationOutcomeCallable EventbridgeClient::createApiDestinationCallable(const CreateApiDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApiDestinationOutcome()>>(
			[this, request]()
			{
			return this->createApiDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::CreateConnectionOutcome EventbridgeClient::createConnection(const CreateConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConnectionOutcome(CreateConnectionResult(outcome.result()));
	else
		return CreateConnectionOutcome(outcome.error());
}

void EventbridgeClient::createConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::CreateConnectionOutcomeCallable EventbridgeClient::createConnectionCallable(const CreateConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConnectionOutcome()>>(
			[this, request]()
			{
			return this->createConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::CreateEventBusOutcome EventbridgeClient::createEventBus(const CreateEventBusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEventBusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEventBusOutcome(CreateEventBusResult(outcome.result()));
	else
		return CreateEventBusOutcome(outcome.error());
}

void EventbridgeClient::createEventBusAsync(const CreateEventBusRequest& request, const CreateEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEventBus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::CreateEventBusOutcomeCallable EventbridgeClient::createEventBusCallable(const CreateEventBusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEventBusOutcome()>>(
			[this, request]()
			{
			return this->createEventBus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::CreateEventSourceOutcome EventbridgeClient::createEventSource(const CreateEventSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEventSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEventSourceOutcome(CreateEventSourceResult(outcome.result()));
	else
		return CreateEventSourceOutcome(outcome.error());
}

void EventbridgeClient::createEventSourceAsync(const CreateEventSourceRequest& request, const CreateEventSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEventSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::CreateEventSourceOutcomeCallable EventbridgeClient::createEventSourceCallable(const CreateEventSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEventSourceOutcome()>>(
			[this, request]()
			{
			return this->createEventSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::CreateEventStreamingOutcome EventbridgeClient::createEventStreaming(const CreateEventStreamingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEventStreamingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEventStreamingOutcome(CreateEventStreamingResult(outcome.result()));
	else
		return CreateEventStreamingOutcome(outcome.error());
}

void EventbridgeClient::createEventStreamingAsync(const CreateEventStreamingRequest& request, const CreateEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEventStreaming(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::CreateEventStreamingOutcomeCallable EventbridgeClient::createEventStreamingCallable(const CreateEventStreamingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEventStreamingOutcome()>>(
			[this, request]()
			{
			return this->createEventStreaming(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::CreateRuleOutcome EventbridgeClient::createRule(const CreateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRuleOutcome(CreateRuleResult(outcome.result()));
	else
		return CreateRuleOutcome(outcome.error());
}

void EventbridgeClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::CreateRuleOutcomeCallable EventbridgeClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::CreateServiceLinkedRoleForProductOutcome EventbridgeClient::createServiceLinkedRoleForProduct(const CreateServiceLinkedRoleForProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleForProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleForProductOutcome(CreateServiceLinkedRoleForProductResult(outcome.result()));
	else
		return CreateServiceLinkedRoleForProductOutcome(outcome.error());
}

void EventbridgeClient::createServiceLinkedRoleForProductAsync(const CreateServiceLinkedRoleForProductRequest& request, const CreateServiceLinkedRoleForProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRoleForProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::CreateServiceLinkedRoleForProductOutcomeCallable EventbridgeClient::createServiceLinkedRoleForProductCallable(const CreateServiceLinkedRoleForProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleForProductOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRoleForProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::DeleteApiDestinationOutcome EventbridgeClient::deleteApiDestination(const DeleteApiDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApiDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApiDestinationOutcome(DeleteApiDestinationResult(outcome.result()));
	else
		return DeleteApiDestinationOutcome(outcome.error());
}

void EventbridgeClient::deleteApiDestinationAsync(const DeleteApiDestinationRequest& request, const DeleteApiDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApiDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::DeleteApiDestinationOutcomeCallable EventbridgeClient::deleteApiDestinationCallable(const DeleteApiDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApiDestinationOutcome()>>(
			[this, request]()
			{
			return this->deleteApiDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::DeleteConnectionOutcome EventbridgeClient::deleteConnection(const DeleteConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConnectionOutcome(DeleteConnectionResult(outcome.result()));
	else
		return DeleteConnectionOutcome(outcome.error());
}

void EventbridgeClient::deleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::DeleteConnectionOutcomeCallable EventbridgeClient::deleteConnectionCallable(const DeleteConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConnectionOutcome()>>(
			[this, request]()
			{
			return this->deleteConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::DeleteEventBusOutcome EventbridgeClient::deleteEventBus(const DeleteEventBusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventBusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventBusOutcome(DeleteEventBusResult(outcome.result()));
	else
		return DeleteEventBusOutcome(outcome.error());
}

void EventbridgeClient::deleteEventBusAsync(const DeleteEventBusRequest& request, const DeleteEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventBus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::DeleteEventBusOutcomeCallable EventbridgeClient::deleteEventBusCallable(const DeleteEventBusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventBusOutcome()>>(
			[this, request]()
			{
			return this->deleteEventBus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::DeleteEventSourceOutcome EventbridgeClient::deleteEventSource(const DeleteEventSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventSourceOutcome(DeleteEventSourceResult(outcome.result()));
	else
		return DeleteEventSourceOutcome(outcome.error());
}

void EventbridgeClient::deleteEventSourceAsync(const DeleteEventSourceRequest& request, const DeleteEventSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::DeleteEventSourceOutcomeCallable EventbridgeClient::deleteEventSourceCallable(const DeleteEventSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteEventSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::DeleteEventStreamingOutcome EventbridgeClient::deleteEventStreaming(const DeleteEventStreamingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventStreamingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventStreamingOutcome(DeleteEventStreamingResult(outcome.result()));
	else
		return DeleteEventStreamingOutcome(outcome.error());
}

void EventbridgeClient::deleteEventStreamingAsync(const DeleteEventStreamingRequest& request, const DeleteEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventStreaming(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::DeleteEventStreamingOutcomeCallable EventbridgeClient::deleteEventStreamingCallable(const DeleteEventStreamingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventStreamingOutcome()>>(
			[this, request]()
			{
			return this->deleteEventStreaming(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::DeleteRuleOutcome EventbridgeClient::deleteRule(const DeleteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleOutcome(DeleteRuleResult(outcome.result()));
	else
		return DeleteRuleOutcome(outcome.error());
}

void EventbridgeClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::DeleteRuleOutcomeCallable EventbridgeClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::DeleteTargetsOutcome EventbridgeClient::deleteTargets(const DeleteTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTargetsOutcome(DeleteTargetsResult(outcome.result()));
	else
		return DeleteTargetsOutcome(outcome.error());
}

void EventbridgeClient::deleteTargetsAsync(const DeleteTargetsRequest& request, const DeleteTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::DeleteTargetsOutcomeCallable EventbridgeClient::deleteTargetsCallable(const DeleteTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTargetsOutcome()>>(
			[this, request]()
			{
			return this->deleteTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::DisableRuleOutcome EventbridgeClient::disableRule(const DisableRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableRuleOutcome(DisableRuleResult(outcome.result()));
	else
		return DisableRuleOutcome(outcome.error());
}

void EventbridgeClient::disableRuleAsync(const DisableRuleRequest& request, const DisableRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::DisableRuleOutcomeCallable EventbridgeClient::disableRuleCallable(const DisableRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableRuleOutcome()>>(
			[this, request]()
			{
			return this->disableRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::EnableRuleOutcome EventbridgeClient::enableRule(const EnableRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableRuleOutcome(EnableRuleResult(outcome.result()));
	else
		return EnableRuleOutcome(outcome.error());
}

void EventbridgeClient::enableRuleAsync(const EnableRuleRequest& request, const EnableRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::EnableRuleOutcomeCallable EventbridgeClient::enableRuleCallable(const EnableRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableRuleOutcome()>>(
			[this, request]()
			{
			return this->enableRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::GetApiDestinationOutcome EventbridgeClient::getApiDestination(const GetApiDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApiDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApiDestinationOutcome(GetApiDestinationResult(outcome.result()));
	else
		return GetApiDestinationOutcome(outcome.error());
}

void EventbridgeClient::getApiDestinationAsync(const GetApiDestinationRequest& request, const GetApiDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApiDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::GetApiDestinationOutcomeCallable EventbridgeClient::getApiDestinationCallable(const GetApiDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApiDestinationOutcome()>>(
			[this, request]()
			{
			return this->getApiDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::GetConnectionOutcome EventbridgeClient::getConnection(const GetConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConnectionOutcome(GetConnectionResult(outcome.result()));
	else
		return GetConnectionOutcome(outcome.error());
}

void EventbridgeClient::getConnectionAsync(const GetConnectionRequest& request, const GetConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::GetConnectionOutcomeCallable EventbridgeClient::getConnectionCallable(const GetConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConnectionOutcome()>>(
			[this, request]()
			{
			return this->getConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::GetEventBusOutcome EventbridgeClient::getEventBus(const GetEventBusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEventBusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEventBusOutcome(GetEventBusResult(outcome.result()));
	else
		return GetEventBusOutcome(outcome.error());
}

void EventbridgeClient::getEventBusAsync(const GetEventBusRequest& request, const GetEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEventBus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::GetEventBusOutcomeCallable EventbridgeClient::getEventBusCallable(const GetEventBusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEventBusOutcome()>>(
			[this, request]()
			{
			return this->getEventBus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::GetEventStreamingOutcome EventbridgeClient::getEventStreaming(const GetEventStreamingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEventStreamingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEventStreamingOutcome(GetEventStreamingResult(outcome.result()));
	else
		return GetEventStreamingOutcome(outcome.error());
}

void EventbridgeClient::getEventStreamingAsync(const GetEventStreamingRequest& request, const GetEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEventStreaming(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::GetEventStreamingOutcomeCallable EventbridgeClient::getEventStreamingCallable(const GetEventStreamingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEventStreamingOutcome()>>(
			[this, request]()
			{
			return this->getEventStreaming(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::GetRuleOutcome EventbridgeClient::getRule(const GetRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleOutcome(GetRuleResult(outcome.result()));
	else
		return GetRuleOutcome(outcome.error());
}

void EventbridgeClient::getRuleAsync(const GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::GetRuleOutcomeCallable EventbridgeClient::getRuleCallable(const GetRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleOutcome()>>(
			[this, request]()
			{
			return this->getRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::ListAliyunOfficialEventSourcesOutcome EventbridgeClient::listAliyunOfficialEventSources(const ListAliyunOfficialEventSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAliyunOfficialEventSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAliyunOfficialEventSourcesOutcome(ListAliyunOfficialEventSourcesResult(outcome.result()));
	else
		return ListAliyunOfficialEventSourcesOutcome(outcome.error());
}

void EventbridgeClient::listAliyunOfficialEventSourcesAsync(const ListAliyunOfficialEventSourcesRequest& request, const ListAliyunOfficialEventSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAliyunOfficialEventSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::ListAliyunOfficialEventSourcesOutcomeCallable EventbridgeClient::listAliyunOfficialEventSourcesCallable(const ListAliyunOfficialEventSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAliyunOfficialEventSourcesOutcome()>>(
			[this, request]()
			{
			return this->listAliyunOfficialEventSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::ListApiDestinationsOutcome EventbridgeClient::listApiDestinations(const ListApiDestinationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApiDestinationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApiDestinationsOutcome(ListApiDestinationsResult(outcome.result()));
	else
		return ListApiDestinationsOutcome(outcome.error());
}

void EventbridgeClient::listApiDestinationsAsync(const ListApiDestinationsRequest& request, const ListApiDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApiDestinations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::ListApiDestinationsOutcomeCallable EventbridgeClient::listApiDestinationsCallable(const ListApiDestinationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApiDestinationsOutcome()>>(
			[this, request]()
			{
			return this->listApiDestinations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::ListConnectionsOutcome EventbridgeClient::listConnections(const ListConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConnectionsOutcome(ListConnectionsResult(outcome.result()));
	else
		return ListConnectionsOutcome(outcome.error());
}

void EventbridgeClient::listConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::ListConnectionsOutcomeCallable EventbridgeClient::listConnectionsCallable(const ListConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConnectionsOutcome()>>(
			[this, request]()
			{
			return this->listConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::ListEventBusesOutcome EventbridgeClient::listEventBuses(const ListEventBusesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventBusesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventBusesOutcome(ListEventBusesResult(outcome.result()));
	else
		return ListEventBusesOutcome(outcome.error());
}

void EventbridgeClient::listEventBusesAsync(const ListEventBusesRequest& request, const ListEventBusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventBuses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::ListEventBusesOutcomeCallable EventbridgeClient::listEventBusesCallable(const ListEventBusesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventBusesOutcome()>>(
			[this, request]()
			{
			return this->listEventBuses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::ListEventStreamingsOutcome EventbridgeClient::listEventStreamings(const ListEventStreamingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventStreamingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventStreamingsOutcome(ListEventStreamingsResult(outcome.result()));
	else
		return ListEventStreamingsOutcome(outcome.error());
}

void EventbridgeClient::listEventStreamingsAsync(const ListEventStreamingsRequest& request, const ListEventStreamingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventStreamings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::ListEventStreamingsOutcomeCallable EventbridgeClient::listEventStreamingsCallable(const ListEventStreamingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventStreamingsOutcome()>>(
			[this, request]()
			{
			return this->listEventStreamings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::ListRulesOutcome EventbridgeClient::listRules(const ListRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRulesOutcome(ListRulesResult(outcome.result()));
	else
		return ListRulesOutcome(outcome.error());
}

void EventbridgeClient::listRulesAsync(const ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::ListRulesOutcomeCallable EventbridgeClient::listRulesCallable(const ListRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRulesOutcome()>>(
			[this, request]()
			{
			return this->listRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::ListTargetsOutcome EventbridgeClient::listTargets(const ListTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTargetsOutcome(ListTargetsResult(outcome.result()));
	else
		return ListTargetsOutcome(outcome.error());
}

void EventbridgeClient::listTargetsAsync(const ListTargetsRequest& request, const ListTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::ListTargetsOutcomeCallable EventbridgeClient::listTargetsCallable(const ListTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTargetsOutcome()>>(
			[this, request]()
			{
			return this->listTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::ListUserDefinedEventSourcesOutcome EventbridgeClient::listUserDefinedEventSources(const ListUserDefinedEventSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserDefinedEventSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserDefinedEventSourcesOutcome(ListUserDefinedEventSourcesResult(outcome.result()));
	else
		return ListUserDefinedEventSourcesOutcome(outcome.error());
}

void EventbridgeClient::listUserDefinedEventSourcesAsync(const ListUserDefinedEventSourcesRequest& request, const ListUserDefinedEventSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserDefinedEventSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::ListUserDefinedEventSourcesOutcomeCallable EventbridgeClient::listUserDefinedEventSourcesCallable(const ListUserDefinedEventSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserDefinedEventSourcesOutcome()>>(
			[this, request]()
			{
			return this->listUserDefinedEventSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::PauseEventStreamingOutcome EventbridgeClient::pauseEventStreaming(const PauseEventStreamingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseEventStreamingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseEventStreamingOutcome(PauseEventStreamingResult(outcome.result()));
	else
		return PauseEventStreamingOutcome(outcome.error());
}

void EventbridgeClient::pauseEventStreamingAsync(const PauseEventStreamingRequest& request, const PauseEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseEventStreaming(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::PauseEventStreamingOutcomeCallable EventbridgeClient::pauseEventStreamingCallable(const PauseEventStreamingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseEventStreamingOutcome()>>(
			[this, request]()
			{
			return this->pauseEventStreaming(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::PutTargetsOutcome EventbridgeClient::putTargets(const PutTargetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutTargetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutTargetsOutcome(PutTargetsResult(outcome.result()));
	else
		return PutTargetsOutcome(outcome.error());
}

void EventbridgeClient::putTargetsAsync(const PutTargetsRequest& request, const PutTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putTargets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::PutTargetsOutcomeCallable EventbridgeClient::putTargetsCallable(const PutTargetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutTargetsOutcome()>>(
			[this, request]()
			{
			return this->putTargets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::QueryEventOutcome EventbridgeClient::queryEvent(const QueryEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEventOutcome(QueryEventResult(outcome.result()));
	else
		return QueryEventOutcome(outcome.error());
}

void EventbridgeClient::queryEventAsync(const QueryEventRequest& request, const QueryEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::QueryEventOutcomeCallable EventbridgeClient::queryEventCallable(const QueryEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEventOutcome()>>(
			[this, request]()
			{
			return this->queryEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::QueryEventTracesOutcome EventbridgeClient::queryEventTraces(const QueryEventTracesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEventTracesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEventTracesOutcome(QueryEventTracesResult(outcome.result()));
	else
		return QueryEventTracesOutcome(outcome.error());
}

void EventbridgeClient::queryEventTracesAsync(const QueryEventTracesRequest& request, const QueryEventTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEventTraces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::QueryEventTracesOutcomeCallable EventbridgeClient::queryEventTracesCallable(const QueryEventTracesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEventTracesOutcome()>>(
			[this, request]()
			{
			return this->queryEventTraces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::QueryTracedEventByEventIdOutcome EventbridgeClient::queryTracedEventByEventId(const QueryTracedEventByEventIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTracedEventByEventIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTracedEventByEventIdOutcome(QueryTracedEventByEventIdResult(outcome.result()));
	else
		return QueryTracedEventByEventIdOutcome(outcome.error());
}

void EventbridgeClient::queryTracedEventByEventIdAsync(const QueryTracedEventByEventIdRequest& request, const QueryTracedEventByEventIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTracedEventByEventId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::QueryTracedEventByEventIdOutcomeCallable EventbridgeClient::queryTracedEventByEventIdCallable(const QueryTracedEventByEventIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTracedEventByEventIdOutcome()>>(
			[this, request]()
			{
			return this->queryTracedEventByEventId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::QueryTracedEventsOutcome EventbridgeClient::queryTracedEvents(const QueryTracedEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTracedEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTracedEventsOutcome(QueryTracedEventsResult(outcome.result()));
	else
		return QueryTracedEventsOutcome(outcome.error());
}

void EventbridgeClient::queryTracedEventsAsync(const QueryTracedEventsRequest& request, const QueryTracedEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTracedEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::QueryTracedEventsOutcomeCallable EventbridgeClient::queryTracedEventsCallable(const QueryTracedEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTracedEventsOutcome()>>(
			[this, request]()
			{
			return this->queryTracedEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::StartEventStreamingOutcome EventbridgeClient::startEventStreaming(const StartEventStreamingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartEventStreamingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartEventStreamingOutcome(StartEventStreamingResult(outcome.result()));
	else
		return StartEventStreamingOutcome(outcome.error());
}

void EventbridgeClient::startEventStreamingAsync(const StartEventStreamingRequest& request, const StartEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startEventStreaming(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::StartEventStreamingOutcomeCallable EventbridgeClient::startEventStreamingCallable(const StartEventStreamingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartEventStreamingOutcome()>>(
			[this, request]()
			{
			return this->startEventStreaming(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::TestEventPatternOutcome EventbridgeClient::testEventPattern(const TestEventPatternRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestEventPatternOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestEventPatternOutcome(TestEventPatternResult(outcome.result()));
	else
		return TestEventPatternOutcome(outcome.error());
}

void EventbridgeClient::testEventPatternAsync(const TestEventPatternRequest& request, const TestEventPatternAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testEventPattern(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::TestEventPatternOutcomeCallable EventbridgeClient::testEventPatternCallable(const TestEventPatternRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestEventPatternOutcome()>>(
			[this, request]()
			{
			return this->testEventPattern(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::UpdateApiDestinationOutcome EventbridgeClient::updateApiDestination(const UpdateApiDestinationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApiDestinationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApiDestinationOutcome(UpdateApiDestinationResult(outcome.result()));
	else
		return UpdateApiDestinationOutcome(outcome.error());
}

void EventbridgeClient::updateApiDestinationAsync(const UpdateApiDestinationRequest& request, const UpdateApiDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApiDestination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::UpdateApiDestinationOutcomeCallable EventbridgeClient::updateApiDestinationCallable(const UpdateApiDestinationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApiDestinationOutcome()>>(
			[this, request]()
			{
			return this->updateApiDestination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::UpdateConnectionOutcome EventbridgeClient::updateConnection(const UpdateConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConnectionOutcome(UpdateConnectionResult(outcome.result()));
	else
		return UpdateConnectionOutcome(outcome.error());
}

void EventbridgeClient::updateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::UpdateConnectionOutcomeCallable EventbridgeClient::updateConnectionCallable(const UpdateConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConnectionOutcome()>>(
			[this, request]()
			{
			return this->updateConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::UpdateEventBusOutcome EventbridgeClient::updateEventBus(const UpdateEventBusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEventBusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEventBusOutcome(UpdateEventBusResult(outcome.result()));
	else
		return UpdateEventBusOutcome(outcome.error());
}

void EventbridgeClient::updateEventBusAsync(const UpdateEventBusRequest& request, const UpdateEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEventBus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::UpdateEventBusOutcomeCallable EventbridgeClient::updateEventBusCallable(const UpdateEventBusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEventBusOutcome()>>(
			[this, request]()
			{
			return this->updateEventBus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::UpdateEventSourceOutcome EventbridgeClient::updateEventSource(const UpdateEventSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEventSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEventSourceOutcome(UpdateEventSourceResult(outcome.result()));
	else
		return UpdateEventSourceOutcome(outcome.error());
}

void EventbridgeClient::updateEventSourceAsync(const UpdateEventSourceRequest& request, const UpdateEventSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEventSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::UpdateEventSourceOutcomeCallable EventbridgeClient::updateEventSourceCallable(const UpdateEventSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEventSourceOutcome()>>(
			[this, request]()
			{
			return this->updateEventSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::UpdateEventStreamingOutcome EventbridgeClient::updateEventStreaming(const UpdateEventStreamingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEventStreamingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEventStreamingOutcome(UpdateEventStreamingResult(outcome.result()));
	else
		return UpdateEventStreamingOutcome(outcome.error());
}

void EventbridgeClient::updateEventStreamingAsync(const UpdateEventStreamingRequest& request, const UpdateEventStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEventStreaming(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::UpdateEventStreamingOutcomeCallable EventbridgeClient::updateEventStreamingCallable(const UpdateEventStreamingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEventStreamingOutcome()>>(
			[this, request]()
			{
			return this->updateEventStreaming(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EventbridgeClient::UpdateRuleOutcome EventbridgeClient::updateRule(const UpdateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRuleOutcome(UpdateRuleResult(outcome.result()));
	else
		return UpdateRuleOutcome(outcome.error());
}

void EventbridgeClient::updateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EventbridgeClient::UpdateRuleOutcomeCallable EventbridgeClient::updateRuleCallable(const UpdateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRuleOutcome()>>(
			[this, request]()
			{
			return this->updateRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

