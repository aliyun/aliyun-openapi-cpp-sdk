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

#include <alibabacloud/iot/IotClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

namespace
{
	const std::string SERVICE_NAME = "Iot";
}

IotClient::IotClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

IotClient::IotClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

IotClient::IotClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

IotClient::~IotClient()
{}

IotClient::RegistDeviceOutcome IotClient::registDevice(const RegistDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegistDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegistDeviceOutcome(RegistDeviceResult(outcome.result()));
	else
		return RegistDeviceOutcome(outcome.error());
}

void IotClient::registDeviceAsync(const RegistDeviceRequest& request, const RegistDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RegistDeviceOutcomeCallable IotClient::registDeviceCallable(const RegistDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegistDeviceOutcome()>>(
			[this, request]()
			{
			return this->registDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteTopicRouteTableOutcome IotClient::deleteTopicRouteTable(const DeleteTopicRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTopicRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTopicRouteTableOutcome(DeleteTopicRouteTableResult(outcome.result()));
	else
		return DeleteTopicRouteTableOutcome(outcome.error());
}

void IotClient::deleteTopicRouteTableAsync(const DeleteTopicRouteTableRequest& request, const DeleteTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTopicRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteTopicRouteTableOutcomeCallable IotClient::deleteTopicRouteTableCallable(const DeleteTopicRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTopicRouteTableOutcome()>>(
			[this, request]()
			{
			return this->deleteTopicRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceEventDataOutcome IotClient::queryDeviceEventData(const QueryDeviceEventDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceEventDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceEventDataOutcome(QueryDeviceEventDataResult(outcome.result()));
	else
		return QueryDeviceEventDataOutcome(outcome.error());
}

void IotClient::queryDeviceEventDataAsync(const QueryDeviceEventDataRequest& request, const QueryDeviceEventDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceEventData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceEventDataOutcomeCallable IotClient::queryDeviceEventDataCallable(const QueryDeviceEventDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceEventDataOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceEventData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDeviceStatusOutcome IotClient::getDeviceStatus(const GetDeviceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceStatusOutcome(GetDeviceStatusResult(outcome.result()));
	else
		return GetDeviceStatusOutcome(outcome.error());
}

void IotClient::getDeviceStatusAsync(const GetDeviceStatusRequest& request, const GetDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDeviceStatusOutcomeCallable IotClient::getDeviceStatusCallable(const GetDeviceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceStatusOutcome()>>(
			[this, request]()
			{
			return this->getDeviceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDeviceOutcome IotClient::deleteDevice(const DeleteDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceOutcome(DeleteDeviceResult(outcome.result()));
	else
		return DeleteDeviceOutcome(outcome.error());
}

void IotClient::deleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDeviceOutcomeCallable IotClient::deleteDeviceCallable(const DeleteDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::EnableThingOutcome IotClient::enableThing(const EnableThingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableThingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableThingOutcome(EnableThingResult(outcome.result()));
	else
		return EnableThingOutcome(outcome.error());
}

void IotClient::enableThingAsync(const EnableThingRequest& request, const EnableThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableThing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::EnableThingOutcomeCallable IotClient::enableThingCallable(const EnableThingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableThingOutcome()>>(
			[this, request]()
			{
			return this->enableThing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RRpcOutcome IotClient::rRpc(const RRpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RRpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RRpcOutcome(RRpcResult(outcome.result()));
	else
		return RRpcOutcome(outcome.error());
}

void IotClient::rRpcAsync(const RRpcRequest& request, const RRpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rRpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RRpcOutcomeCallable IotClient::rRpcCallable(const RRpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RRpcOutcome()>>(
			[this, request]()
			{
			return this->rRpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteRuleOutcome IotClient::deleteRule(const DeleteRuleRequest &request) const
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

void IotClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteRuleOutcomeCallable IotClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceByNameOutcome IotClient::queryDeviceByName(const QueryDeviceByNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceByNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceByNameOutcome(QueryDeviceByNameResult(outcome.result()));
	else
		return QueryDeviceByNameOutcome(outcome.error());
}

void IotClient::queryDeviceByNameAsync(const QueryDeviceByNameRequest& request, const QueryDeviceByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceByName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceByNameOutcomeCallable IotClient::queryDeviceByNameCallable(const QueryDeviceByNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceByNameOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceByName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryProductTopicOutcome IotClient::queryProductTopic(const QueryProductTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProductTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProductTopicOutcome(QueryProductTopicResult(outcome.result()));
	else
		return QueryProductTopicOutcome(outcome.error());
}

void IotClient::queryProductTopicAsync(const QueryProductTopicRequest& request, const QueryProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProductTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryProductTopicOutcomeCallable IotClient::queryProductTopicCallable(const QueryProductTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProductTopicOutcome()>>(
			[this, request]()
			{
			return this->queryProductTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetThingTopoOutcome IotClient::getThingTopo(const GetThingTopoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetThingTopoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetThingTopoOutcome(GetThingTopoResult(outcome.result()));
	else
		return GetThingTopoOutcome(outcome.error());
}

void IotClient::getThingTopoAsync(const GetThingTopoRequest& request, const GetThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getThingTopo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetThingTopoOutcomeCallable IotClient::getThingTopoCallable(const GetThingTopoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetThingTopoOutcome()>>(
			[this, request]()
			{
			return this->getThingTopo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryPageByApplyIdOutcome IotClient::queryPageByApplyId(const QueryPageByApplyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPageByApplyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPageByApplyIdOutcome(QueryPageByApplyIdResult(outcome.result()));
	else
		return QueryPageByApplyIdOutcome(outcome.error());
}

void IotClient::queryPageByApplyIdAsync(const QueryPageByApplyIdRequest& request, const QueryPageByApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPageByApplyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryPageByApplyIdOutcomeCallable IotClient::queryPageByApplyIdCallable(const QueryPageByApplyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPageByApplyIdOutcome()>>(
			[this, request]()
			{
			return this->queryPageByApplyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateTopicRouteTableOutcome IotClient::createTopicRouteTable(const CreateTopicRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTopicRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTopicRouteTableOutcome(CreateTopicRouteTableResult(outcome.result()));
	else
		return CreateTopicRouteTableOutcome(outcome.error());
}

void IotClient::createTopicRouteTableAsync(const CreateTopicRouteTableRequest& request, const CreateTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTopicRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateTopicRouteTableOutcomeCallable IotClient::createTopicRouteTableCallable(const CreateTopicRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTopicRouteTableOutcome()>>(
			[this, request]()
			{
			return this->createTopicRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateProductOutcome IotClient::createProduct(const CreateProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProductOutcome(CreateProductResult(outcome.result()));
	else
		return CreateProductOutcome(outcome.error());
}

void IotClient::createProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateProductOutcomeCallable IotClient::createProductCallable(const CreateProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProductOutcome()>>(
			[this, request]()
			{
			return this->createProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateRuleOutcome IotClient::updateRule(const UpdateRuleRequest &request) const
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

void IotClient::updateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateRuleOutcomeCallable IotClient::updateRuleCallable(const UpdateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRuleOutcome()>>(
			[this, request]()
			{
			return this->updateRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicePropertyDataOutcome IotClient::queryDevicePropertyData(const QueryDevicePropertyDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePropertyDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePropertyDataOutcome(QueryDevicePropertyDataResult(outcome.result()));
	else
		return QueryDevicePropertyDataOutcome(outcome.error());
}

void IotClient::queryDevicePropertyDataAsync(const QueryDevicePropertyDataRequest& request, const QueryDevicePropertyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicePropertyData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicePropertyDataOutcomeCallable IotClient::queryDevicePropertyDataCallable(const QueryDevicePropertyDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePropertyDataOutcome()>>(
			[this, request]()
			{
			return this->queryDevicePropertyData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicePropOutcome IotClient::queryDeviceProp(const QueryDevicePropRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePropOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePropOutcome(QueryDevicePropResult(outcome.result()));
	else
		return QueryDevicePropOutcome(outcome.error());
}

void IotClient::queryDevicePropAsync(const QueryDevicePropRequest& request, const QueryDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceProp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicePropOutcomeCallable IotClient::queryDevicePropCallable(const QueryDevicePropRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePropOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceProp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteDevicePropOutcome IotClient::deleteDeviceProp(const DeleteDevicePropRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDevicePropOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDevicePropOutcome(DeleteDevicePropResult(outcome.result()));
	else
		return DeleteDevicePropOutcome(outcome.error());
}

void IotClient::deleteDevicePropAsync(const DeleteDevicePropRequest& request, const DeleteDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeviceProp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteDevicePropOutcomeCallable IotClient::deleteDevicePropCallable(const DeleteDevicePropRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDevicePropOutcome()>>(
			[this, request]()
			{
			return this->deleteDeviceProp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::StopRuleOutcome IotClient::stopRule(const StopRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRuleOutcome(StopRuleResult(outcome.result()));
	else
		return StopRuleOutcome(outcome.error());
}

void IotClient::stopRuleAsync(const StopRuleRequest& request, const StopRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::StopRuleOutcomeCallable IotClient::stopRuleCallable(const StopRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRuleOutcome()>>(
			[this, request]()
			{
			return this->stopRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceDetailOutcome IotClient::queryDeviceDetail(const QueryDeviceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceDetailOutcome(QueryDeviceDetailResult(outcome.result()));
	else
		return QueryDeviceDetailOutcome(outcome.error());
}

void IotClient::queryDeviceDetailAsync(const QueryDeviceDetailRequest& request, const QueryDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceDetailOutcomeCallable IotClient::queryDeviceDetailCallable(const QueryDeviceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceDetailOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::NotifyAddThingTopoOutcome IotClient::notifyAddThingTopo(const NotifyAddThingTopoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NotifyAddThingTopoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NotifyAddThingTopoOutcome(NotifyAddThingTopoResult(outcome.result()));
	else
		return NotifyAddThingTopoOutcome(outcome.error());
}

void IotClient::notifyAddThingTopoAsync(const NotifyAddThingTopoRequest& request, const NotifyAddThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, notifyAddThingTopo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::NotifyAddThingTopoOutcomeCallable IotClient::notifyAddThingTopoCallable(const NotifyAddThingTopoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NotifyAddThingTopoOutcome()>>(
			[this, request]()
			{
			return this->notifyAddThingTopo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::InvokeThingServiceOutcome IotClient::invokeThingService(const InvokeThingServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeThingServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeThingServiceOutcome(InvokeThingServiceResult(outcome.result()));
	else
		return InvokeThingServiceOutcome(outcome.error());
}

void IotClient::invokeThingServiceAsync(const InvokeThingServiceRequest& request, const InvokeThingServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeThingService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::InvokeThingServiceOutcomeCallable IotClient::invokeThingServiceCallable(const InvokeThingServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeThingServiceOutcome()>>(
			[this, request]()
			{
			return this->invokeThingService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListRuleActionsOutcome IotClient::listRuleActions(const ListRuleActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleActionsOutcome(ListRuleActionsResult(outcome.result()));
	else
		return ListRuleActionsOutcome(outcome.error());
}

void IotClient::listRuleActionsAsync(const ListRuleActionsRequest& request, const ListRuleActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRuleActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListRuleActionsOutcomeCallable IotClient::listRuleActionsCallable(const ListRuleActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleActionsOutcome()>>(
			[this, request]()
			{
			return this->listRuleActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchCheckDeviceNamesOutcome IotClient::batchCheckDeviceNames(const BatchCheckDeviceNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchCheckDeviceNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchCheckDeviceNamesOutcome(BatchCheckDeviceNamesResult(outcome.result()));
	else
		return BatchCheckDeviceNamesOutcome(outcome.error());
}

void IotClient::batchCheckDeviceNamesAsync(const BatchCheckDeviceNamesRequest& request, const BatchCheckDeviceNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchCheckDeviceNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchCheckDeviceNamesOutcomeCallable IotClient::batchCheckDeviceNamesCallable(const BatchCheckDeviceNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchCheckDeviceNamesOutcome()>>(
			[this, request]()
			{
			return this->batchCheckDeviceNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateProductTopicOutcome IotClient::updateProductTopic(const UpdateProductTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProductTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProductTopicOutcome(UpdateProductTopicResult(outcome.result()));
	else
		return UpdateProductTopicOutcome(outcome.error());
}

void IotClient::updateProductTopicAsync(const UpdateProductTopicRequest& request, const UpdateProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProductTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateProductTopicOutcomeCallable IotClient::updateProductTopicCallable(const UpdateProductTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProductTopicOutcome()>>(
			[this, request]()
			{
			return this->updateProductTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateRuleActionOutcome IotClient::updateRuleAction(const UpdateRuleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRuleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRuleActionOutcome(UpdateRuleActionResult(outcome.result()));
	else
		return UpdateRuleActionOutcome(outcome.error());
}

void IotClient::updateRuleActionAsync(const UpdateRuleActionRequest& request, const UpdateRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRuleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateRuleActionOutcomeCallable IotClient::updateRuleActionCallable(const UpdateRuleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRuleActionOutcome()>>(
			[this, request]()
			{
			return this->updateRuleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateProductOutcome IotClient::updateProduct(const UpdateProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProductOutcome(UpdateProductResult(outcome.result()));
	else
		return UpdateProductOutcome(outcome.error());
}

void IotClient::updateProductAsync(const UpdateProductRequest& request, const UpdateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateProductOutcomeCallable IotClient::updateProductCallable(const UpdateProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProductOutcome()>>(
			[this, request]()
			{
			return this->updateProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryProductOutcome IotClient::queryProduct(const QueryProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProductOutcome(QueryProductResult(outcome.result()));
	else
		return QueryProductOutcome(outcome.error());
}

void IotClient::queryProductAsync(const QueryProductRequest& request, const QueryProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryProductOutcomeCallable IotClient::queryProductCallable(const QueryProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProductOutcome()>>(
			[this, request]()
			{
			return this->queryProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::UpdateDeviceShadowOutcome IotClient::updateDeviceShadow(const UpdateDeviceShadowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDeviceShadowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDeviceShadowOutcome(UpdateDeviceShadowResult(outcome.result()));
	else
		return UpdateDeviceShadowOutcome(outcome.error());
}

void IotClient::updateDeviceShadowAsync(const UpdateDeviceShadowRequest& request, const UpdateDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDeviceShadow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::UpdateDeviceShadowOutcomeCallable IotClient::updateDeviceShadowCallable(const UpdateDeviceShadowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDeviceShadowOutcome()>>(
			[this, request]()
			{
			return this->updateDeviceShadow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryBatchRegisterDeviceStatusOutcome IotClient::queryBatchRegisterDeviceStatus(const QueryBatchRegisterDeviceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBatchRegisterDeviceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBatchRegisterDeviceStatusOutcome(QueryBatchRegisterDeviceStatusResult(outcome.result()));
	else
		return QueryBatchRegisterDeviceStatusOutcome(outcome.error());
}

void IotClient::queryBatchRegisterDeviceStatusAsync(const QueryBatchRegisterDeviceStatusRequest& request, const QueryBatchRegisterDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBatchRegisterDeviceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryBatchRegisterDeviceStatusOutcomeCallable IotClient::queryBatchRegisterDeviceStatusCallable(const QueryBatchRegisterDeviceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBatchRegisterDeviceStatusOutcome()>>(
			[this, request]()
			{
			return this->queryBatchRegisterDeviceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SetDevicePropertyOutcome IotClient::setDeviceProperty(const SetDevicePropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDevicePropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDevicePropertyOutcome(SetDevicePropertyResult(outcome.result()));
	else
		return SetDevicePropertyOutcome(outcome.error());
}

void IotClient::setDevicePropertyAsync(const SetDevicePropertyRequest& request, const SetDevicePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDeviceProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SetDevicePropertyOutcomeCallable IotClient::setDevicePropertyCallable(const SetDevicePropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDevicePropertyOutcome()>>(
			[this, request]()
			{
			return this->setDeviceProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RegisterDeviceOutcome IotClient::registerDevice(const RegisterDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterDeviceOutcome(RegisterDeviceResult(outcome.result()));
	else
		return RegisterDeviceOutcome(outcome.error());
}

void IotClient::registerDeviceAsync(const RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RegisterDeviceOutcomeCallable IotClient::registerDeviceCallable(const RegisterDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterDeviceOutcome()>>(
			[this, request]()
			{
			return this->registerDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceOutcome IotClient::queryDevice(const QueryDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceOutcome(QueryDeviceResult(outcome.result()));
	else
		return QueryDeviceOutcome(outcome.error());
}

void IotClient::queryDeviceAsync(const QueryDeviceRequest& request, const QueryDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceOutcomeCallable IotClient::queryDeviceCallable(const QueryDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ListRuleOutcome IotClient::listRule(const ListRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleOutcome(ListRuleResult(outcome.result()));
	else
		return ListRuleOutcome(outcome.error());
}

void IotClient::listRuleAsync(const ListRuleRequest& request, const ListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ListRuleOutcomeCallable IotClient::listRuleCallable(const ListRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleOutcome()>>(
			[this, request]()
			{
			return this->listRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryTopicRouteTableOutcome IotClient::queryTopicRouteTable(const QueryTopicRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTopicRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTopicRouteTableOutcome(QueryTopicRouteTableResult(outcome.result()));
	else
		return QueryTopicRouteTableOutcome(outcome.error());
}

void IotClient::queryTopicRouteTableAsync(const QueryTopicRouteTableRequest& request, const QueryTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTopicRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryTopicRouteTableOutcomeCallable IotClient::queryTopicRouteTableCallable(const QueryTopicRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTopicRouteTableOutcome()>>(
			[this, request]()
			{
			return this->queryTopicRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateRuleOutcome IotClient::createRule(const CreateRuleRequest &request) const
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

void IotClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateRuleOutcomeCallable IotClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::StartRuleOutcome IotClient::startRule(const StartRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRuleOutcome(StartRuleResult(outcome.result()));
	else
		return StartRuleOutcome(outcome.error());
}

void IotClient::startRuleAsync(const StartRuleRequest& request, const StartRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::StartRuleOutcomeCallable IotClient::startRuleCallable(const StartRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRuleOutcome()>>(
			[this, request]()
			{
			return this->startRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::ApplyDeviceWithNamesOutcome IotClient::applyDeviceWithNames(const ApplyDeviceWithNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyDeviceWithNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyDeviceWithNamesOutcome(ApplyDeviceWithNamesResult(outcome.result()));
	else
		return ApplyDeviceWithNamesOutcome(outcome.error());
}

void IotClient::applyDeviceWithNamesAsync(const ApplyDeviceWithNamesRequest& request, const ApplyDeviceWithNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyDeviceWithNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::ApplyDeviceWithNamesOutcomeCallable IotClient::applyDeviceWithNamesCallable(const ApplyDeviceWithNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyDeviceWithNamesOutcome()>>(
			[this, request]()
			{
			return this->applyDeviceWithNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryProductListOutcome IotClient::queryProductList(const QueryProductListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryProductListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryProductListOutcome(QueryProductListResult(outcome.result()));
	else
		return QueryProductListOutcome(outcome.error());
}

void IotClient::queryProductListAsync(const QueryProductListRequest& request, const QueryProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryProductList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryProductListOutcomeCallable IotClient::queryProductListCallable(const QueryProductListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryProductListOutcome()>>(
			[this, request]()
			{
			return this->queryProductList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDevicePropertyStatusOutcome IotClient::queryDevicePropertyStatus(const QueryDevicePropertyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePropertyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePropertyStatusOutcome(QueryDevicePropertyStatusResult(outcome.result()));
	else
		return QueryDevicePropertyStatusOutcome(outcome.error());
}

void IotClient::queryDevicePropertyStatusAsync(const QueryDevicePropertyStatusRequest& request, const QueryDevicePropertyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicePropertyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDevicePropertyStatusOutcomeCallable IotClient::queryDevicePropertyStatusCallable(const QueryDevicePropertyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePropertyStatusOutcome()>>(
			[this, request]()
			{
			return this->queryDevicePropertyStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceStatisticsOutcome IotClient::queryDeviceStatistics(const QueryDeviceStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceStatisticsOutcome(QueryDeviceStatisticsResult(outcome.result()));
	else
		return QueryDeviceStatisticsOutcome(outcome.error());
}

void IotClient::queryDeviceStatisticsAsync(const QueryDeviceStatisticsRequest& request, const QueryDeviceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceStatisticsOutcomeCallable IotClient::queryDeviceStatisticsCallable(const QueryDeviceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PubOutcome IotClient::pub(const PubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PubOutcome(PubResult(outcome.result()));
	else
		return PubOutcome(outcome.error());
}

void IotClient::pubAsync(const PubRequest& request, const PubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PubOutcomeCallable IotClient::pubCallable(const PubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PubOutcome()>>(
			[this, request]()
			{
			return this->pub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::SaveDevicePropOutcome IotClient::saveDeviceProp(const SaveDevicePropRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveDevicePropOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveDevicePropOutcome(SaveDevicePropResult(outcome.result()));
	else
		return SaveDevicePropOutcome(outcome.error());
}

void IotClient::saveDevicePropAsync(const SaveDevicePropRequest& request, const SaveDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveDeviceProp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::SaveDevicePropOutcomeCallable IotClient::saveDevicePropCallable(const SaveDevicePropRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveDevicePropOutcome()>>(
			[this, request]()
			{
			return this->saveDeviceProp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteProductTopicOutcome IotClient::deleteProductTopic(const DeleteProductTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProductTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProductTopicOutcome(DeleteProductTopicResult(outcome.result()));
	else
		return DeleteProductTopicOutcome(outcome.error());
}

void IotClient::deleteProductTopicAsync(const DeleteProductTopicRequest& request, const DeleteProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProductTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteProductTopicOutcomeCallable IotClient::deleteProductTopicCallable(const DeleteProductTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProductTopicOutcome()>>(
			[this, request]()
			{
			return this->deleteProductTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryApplyStatusOutcome IotClient::queryApplyStatus(const QueryApplyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryApplyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryApplyStatusOutcome(QueryApplyStatusResult(outcome.result()));
	else
		return QueryApplyStatusOutcome(outcome.error());
}

void IotClient::queryApplyStatusAsync(const QueryApplyStatusRequest& request, const QueryApplyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryApplyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryApplyStatusOutcomeCallable IotClient::queryApplyStatusCallable(const QueryApplyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryApplyStatusOutcome()>>(
			[this, request]()
			{
			return this->queryApplyStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryDeviceServiceDataOutcome IotClient::queryDeviceServiceData(const QueryDeviceServiceDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceServiceDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceServiceDataOutcome(QueryDeviceServiceDataResult(outcome.result()));
	else
		return QueryDeviceServiceDataOutcome(outcome.error());
}

void IotClient::queryDeviceServiceDataAsync(const QueryDeviceServiceDataRequest& request, const QueryDeviceServiceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceServiceData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryDeviceServiceDataOutcomeCallable IotClient::queryDeviceServiceDataCallable(const QueryDeviceServiceDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceServiceDataOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceServiceData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchRegisterDeviceWithApplyIdOutcome IotClient::batchRegisterDeviceWithApplyId(const BatchRegisterDeviceWithApplyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchRegisterDeviceWithApplyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchRegisterDeviceWithApplyIdOutcome(BatchRegisterDeviceWithApplyIdResult(outcome.result()));
	else
		return BatchRegisterDeviceWithApplyIdOutcome(outcome.error());
}

void IotClient::batchRegisterDeviceWithApplyIdAsync(const BatchRegisterDeviceWithApplyIdRequest& request, const BatchRegisterDeviceWithApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchRegisterDeviceWithApplyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchRegisterDeviceWithApplyIdOutcomeCallable IotClient::batchRegisterDeviceWithApplyIdCallable(const BatchRegisterDeviceWithApplyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchRegisterDeviceWithApplyIdOutcome()>>(
			[this, request]()
			{
			return this->batchRegisterDeviceWithApplyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DisableThingOutcome IotClient::disableThing(const DisableThingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableThingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableThingOutcome(DisableThingResult(outcome.result()));
	else
		return DisableThingOutcome(outcome.error());
}

void IotClient::disableThingAsync(const DisableThingRequest& request, const DisableThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableThing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DisableThingOutcomeCallable IotClient::disableThingCallable(const DisableThingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableThingOutcome()>>(
			[this, request]()
			{
			return this->disableThing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateProductTopicOutcome IotClient::createProductTopic(const CreateProductTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProductTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProductTopicOutcome(CreateProductTopicResult(outcome.result()));
	else
		return CreateProductTopicOutcome(outcome.error());
}

void IotClient::createProductTopicAsync(const CreateProductTopicRequest& request, const CreateProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProductTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateProductTopicOutcomeCallable IotClient::createProductTopicCallable(const CreateProductTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProductTopicOutcome()>>(
			[this, request]()
			{
			return this->createProductTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::RemoveThingTopoOutcome IotClient::removeThingTopo(const RemoveThingTopoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveThingTopoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveThingTopoOutcome(RemoveThingTopoResult(outcome.result()));
	else
		return RemoveThingTopoOutcome(outcome.error());
}

void IotClient::removeThingTopoAsync(const RemoveThingTopoRequest& request, const RemoveThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeThingTopo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::RemoveThingTopoOutcomeCallable IotClient::removeThingTopoCallable(const RemoveThingTopoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveThingTopoOutcome()>>(
			[this, request]()
			{
			return this->removeThingTopo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::QueryTopicReverseRouteTableOutcome IotClient::queryTopicReverseRouteTable(const QueryTopicReverseRouteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTopicReverseRouteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTopicReverseRouteTableOutcome(QueryTopicReverseRouteTableResult(outcome.result()));
	else
		return QueryTopicReverseRouteTableOutcome(outcome.error());
}

void IotClient::queryTopicReverseRouteTableAsync(const QueryTopicReverseRouteTableRequest& request, const QueryTopicReverseRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTopicReverseRouteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::QueryTopicReverseRouteTableOutcomeCallable IotClient::queryTopicReverseRouteTableCallable(const QueryTopicReverseRouteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTopicReverseRouteTableOutcome()>>(
			[this, request]()
			{
			return this->queryTopicReverseRouteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchGetDeviceStateOutcome IotClient::batchGetDeviceState(const BatchGetDeviceStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetDeviceStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetDeviceStateOutcome(BatchGetDeviceStateResult(outcome.result()));
	else
		return BatchGetDeviceStateOutcome(outcome.error());
}

void IotClient::batchGetDeviceStateAsync(const BatchGetDeviceStateRequest& request, const BatchGetDeviceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetDeviceState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchGetDeviceStateOutcomeCallable IotClient::batchGetDeviceStateCallable(const BatchGetDeviceStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetDeviceStateOutcome()>>(
			[this, request]()
			{
			return this->batchGetDeviceState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetRuleActionOutcome IotClient::getRuleAction(const GetRuleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleActionOutcome(GetRuleActionResult(outcome.result()));
	else
		return GetRuleActionOutcome(outcome.error());
}

void IotClient::getRuleActionAsync(const GetRuleActionRequest& request, const GetRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRuleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetRuleActionOutcomeCallable IotClient::getRuleActionCallable(const GetRuleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleActionOutcome()>>(
			[this, request]()
			{
			return this->getRuleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetRuleOutcome IotClient::getRule(const GetRuleRequest &request) const
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

void IotClient::getRuleAsync(const GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetRuleOutcomeCallable IotClient::getRuleCallable(const GetRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleOutcome()>>(
			[this, request]()
			{
			return this->getRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetDeviceShadowOutcome IotClient::getDeviceShadow(const GetDeviceShadowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceShadowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceShadowOutcome(GetDeviceShadowResult(outcome.result()));
	else
		return GetDeviceShadowOutcome(outcome.error());
}

void IotClient::getDeviceShadowAsync(const GetDeviceShadowRequest& request, const GetDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceShadow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetDeviceShadowOutcomeCallable IotClient::getDeviceShadowCallable(const GetDeviceShadowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceShadowOutcome()>>(
			[this, request]()
			{
			return this->getDeviceShadow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::GetGatewayBySubDeviceOutcome IotClient::getGatewayBySubDevice(const GetGatewayBySubDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayBySubDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayBySubDeviceOutcome(GetGatewayBySubDeviceResult(outcome.result()));
	else
		return GetGatewayBySubDeviceOutcome(outcome.error());
}

void IotClient::getGatewayBySubDeviceAsync(const GetGatewayBySubDeviceRequest& request, const GetGatewayBySubDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayBySubDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::GetGatewayBySubDeviceOutcomeCallable IotClient::getGatewayBySubDeviceCallable(const GetGatewayBySubDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayBySubDeviceOutcome()>>(
			[this, request]()
			{
			return this->getGatewayBySubDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::CreateRuleActionOutcome IotClient::createRuleAction(const CreateRuleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRuleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRuleActionOutcome(CreateRuleActionResult(outcome.result()));
	else
		return CreateRuleActionOutcome(outcome.error());
}

void IotClient::createRuleActionAsync(const CreateRuleActionRequest& request, const CreateRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRuleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::CreateRuleActionOutcomeCallable IotClient::createRuleActionCallable(const CreateRuleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleActionOutcome()>>(
			[this, request]()
			{
			return this->createRuleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::BatchRegisterDeviceOutcome IotClient::batchRegisterDevice(const BatchRegisterDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchRegisterDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchRegisterDeviceOutcome(BatchRegisterDeviceResult(outcome.result()));
	else
		return BatchRegisterDeviceOutcome(outcome.error());
}

void IotClient::batchRegisterDeviceAsync(const BatchRegisterDeviceRequest& request, const BatchRegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchRegisterDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::BatchRegisterDeviceOutcomeCallable IotClient::batchRegisterDeviceCallable(const BatchRegisterDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchRegisterDeviceOutcome()>>(
			[this, request]()
			{
			return this->batchRegisterDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::DeleteRuleActionOutcome IotClient::deleteRuleAction(const DeleteRuleActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleActionOutcome(DeleteRuleActionResult(outcome.result()));
	else
		return DeleteRuleActionOutcome(outcome.error());
}

void IotClient::deleteRuleActionAsync(const DeleteRuleActionRequest& request, const DeleteRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRuleAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::DeleteRuleActionOutcomeCallable IotClient::deleteRuleActionCallable(const DeleteRuleActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleActionOutcome()>>(
			[this, request]()
			{
			return this->deleteRuleAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IotClient::PubBroadcastOutcome IotClient::pubBroadcast(const PubBroadcastRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PubBroadcastOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PubBroadcastOutcome(PubBroadcastResult(outcome.result()));
	else
		return PubBroadcastOutcome(outcome.error());
}

void IotClient::pubBroadcastAsync(const PubBroadcastRequest& request, const PubBroadcastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pubBroadcast(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IotClient::PubBroadcastOutcomeCallable IotClient::pubBroadcastCallable(const PubBroadcastRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PubBroadcastOutcome()>>(
			[this, request]()
			{
			return this->pubBroadcast(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

