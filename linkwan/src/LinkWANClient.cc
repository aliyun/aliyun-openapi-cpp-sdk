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

#include <alibabacloud/linkwan/LinkWANClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

namespace
{
	const std::string SERVICE_NAME = "LinkWAN";
}

LinkWANClient::LinkWANClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "linkwan");
}

LinkWANClient::LinkWANClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "linkwan");
}

LinkWANClient::LinkWANClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "linkwan");
}

LinkWANClient::~LinkWANClient()
{}

LinkWANClient::AcceptJoinPermissionAuthOrderOutcome LinkWANClient::acceptJoinPermissionAuthOrder(const AcceptJoinPermissionAuthOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptJoinPermissionAuthOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptJoinPermissionAuthOrderOutcome(AcceptJoinPermissionAuthOrderResult(outcome.result()));
	else
		return AcceptJoinPermissionAuthOrderOutcome(outcome.error());
}

void LinkWANClient::acceptJoinPermissionAuthOrderAsync(const AcceptJoinPermissionAuthOrderRequest& request, const AcceptJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptJoinPermissionAuthOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::AcceptJoinPermissionAuthOrderOutcomeCallable LinkWANClient::acceptJoinPermissionAuthOrderCallable(const AcceptJoinPermissionAuthOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptJoinPermissionAuthOrderOutcome()>>(
			[this, request]()
			{
			return this->acceptJoinPermissionAuthOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::AddNodeToGroupOutcome LinkWANClient::addNodeToGroup(const AddNodeToGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddNodeToGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddNodeToGroupOutcome(AddNodeToGroupResult(outcome.result()));
	else
		return AddNodeToGroupOutcome(outcome.error());
}

void LinkWANClient::addNodeToGroupAsync(const AddNodeToGroupRequest& request, const AddNodeToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addNodeToGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::AddNodeToGroupOutcomeCallable LinkWANClient::addNodeToGroupCallable(const AddNodeToGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddNodeToGroupOutcome()>>(
			[this, request]()
			{
			return this->addNodeToGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ApplyRoamingJoinPermissionOutcome LinkWANClient::applyRoamingJoinPermission(const ApplyRoamingJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyRoamingJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyRoamingJoinPermissionOutcome(ApplyRoamingJoinPermissionResult(outcome.result()));
	else
		return ApplyRoamingJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::applyRoamingJoinPermissionAsync(const ApplyRoamingJoinPermissionRequest& request, const ApplyRoamingJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyRoamingJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ApplyRoamingJoinPermissionOutcomeCallable LinkWANClient::applyRoamingJoinPermissionCallable(const ApplyRoamingJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyRoamingJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->applyRoamingJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::BindJoinPermissionToNodeGroupOutcome LinkWANClient::bindJoinPermissionToNodeGroup(const BindJoinPermissionToNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindJoinPermissionToNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindJoinPermissionToNodeGroupOutcome(BindJoinPermissionToNodeGroupResult(outcome.result()));
	else
		return BindJoinPermissionToNodeGroupOutcome(outcome.error());
}

void LinkWANClient::bindJoinPermissionToNodeGroupAsync(const BindJoinPermissionToNodeGroupRequest& request, const BindJoinPermissionToNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindJoinPermissionToNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::BindJoinPermissionToNodeGroupOutcomeCallable LinkWANClient::bindJoinPermissionToNodeGroupCallable(const BindJoinPermissionToNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindJoinPermissionToNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->bindJoinPermissionToNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CancelJoinPermissionAuthOrderOutcome LinkWANClient::cancelJoinPermissionAuthOrder(const CancelJoinPermissionAuthOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelJoinPermissionAuthOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelJoinPermissionAuthOrderOutcome(CancelJoinPermissionAuthOrderResult(outcome.result()));
	else
		return CancelJoinPermissionAuthOrderOutcome(outcome.error());
}

void LinkWANClient::cancelJoinPermissionAuthOrderAsync(const CancelJoinPermissionAuthOrderRequest& request, const CancelJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelJoinPermissionAuthOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CancelJoinPermissionAuthOrderOutcomeCallable LinkWANClient::cancelJoinPermissionAuthOrderCallable(const CancelJoinPermissionAuthOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelJoinPermissionAuthOrderOutcome()>>(
			[this, request]()
			{
			return this->cancelJoinPermissionAuthOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CheckCloudProductOpenStatusOutcome LinkWANClient::checkCloudProductOpenStatus(const CheckCloudProductOpenStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCloudProductOpenStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCloudProductOpenStatusOutcome(CheckCloudProductOpenStatusResult(outcome.result()));
	else
		return CheckCloudProductOpenStatusOutcome(outcome.error());
}

void LinkWANClient::checkCloudProductOpenStatusAsync(const CheckCloudProductOpenStatusRequest& request, const CheckCloudProductOpenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCloudProductOpenStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CheckCloudProductOpenStatusOutcomeCallable LinkWANClient::checkCloudProductOpenStatusCallable(const CheckCloudProductOpenStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCloudProductOpenStatusOutcome()>>(
			[this, request]()
			{
			return this->checkCloudProductOpenStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CheckUserChargeStatusOutcome LinkWANClient::checkUserChargeStatus(const CheckUserChargeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckUserChargeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckUserChargeStatusOutcome(CheckUserChargeStatusResult(outcome.result()));
	else
		return CheckUserChargeStatusOutcome(outcome.error());
}

void LinkWANClient::checkUserChargeStatusAsync(const CheckUserChargeStatusRequest& request, const CheckUserChargeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkUserChargeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CheckUserChargeStatusOutcomeCallable LinkWANClient::checkUserChargeStatusCallable(const CheckUserChargeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckUserChargeStatusOutcome()>>(
			[this, request]()
			{
			return this->checkUserChargeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountGatewayTupleOrdersOutcome LinkWANClient::countGatewayTupleOrders(const CountGatewayTupleOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountGatewayTupleOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountGatewayTupleOrdersOutcome(CountGatewayTupleOrdersResult(outcome.result()));
	else
		return CountGatewayTupleOrdersOutcome(outcome.error());
}

void LinkWANClient::countGatewayTupleOrdersAsync(const CountGatewayTupleOrdersRequest& request, const CountGatewayTupleOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countGatewayTupleOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountGatewayTupleOrdersOutcomeCallable LinkWANClient::countGatewayTupleOrdersCallable(const CountGatewayTupleOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountGatewayTupleOrdersOutcome()>>(
			[this, request]()
			{
			return this->countGatewayTupleOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountGatewaysOutcome LinkWANClient::countGateways(const CountGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountGatewaysOutcome(CountGatewaysResult(outcome.result()));
	else
		return CountGatewaysOutcome(outcome.error());
}

void LinkWANClient::countGatewaysAsync(const CountGatewaysRequest& request, const CountGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountGatewaysOutcomeCallable LinkWANClient::countGatewaysCallable(const CountGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountGatewaysOutcome()>>(
			[this, request]()
			{
			return this->countGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountNodeGroupsOutcome LinkWANClient::countNodeGroups(const CountNodeGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountNodeGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountNodeGroupsOutcome(CountNodeGroupsResult(outcome.result()));
	else
		return CountNodeGroupsOutcome(outcome.error());
}

void LinkWANClient::countNodeGroupsAsync(const CountNodeGroupsRequest& request, const CountNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countNodeGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountNodeGroupsOutcomeCallable LinkWANClient::countNodeGroupsCallable(const CountNodeGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountNodeGroupsOutcome()>>(
			[this, request]()
			{
			return this->countNodeGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountNodeTupleOrdersOutcome LinkWANClient::countNodeTupleOrders(const CountNodeTupleOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountNodeTupleOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountNodeTupleOrdersOutcome(CountNodeTupleOrdersResult(outcome.result()));
	else
		return CountNodeTupleOrdersOutcome(outcome.error());
}

void LinkWANClient::countNodeTupleOrdersAsync(const CountNodeTupleOrdersRequest& request, const CountNodeTupleOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countNodeTupleOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountNodeTupleOrdersOutcomeCallable LinkWANClient::countNodeTupleOrdersCallable(const CountNodeTupleOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountNodeTupleOrdersOutcome()>>(
			[this, request]()
			{
			return this->countNodeTupleOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountNodesByNodeGroupIdOutcome LinkWANClient::countNodesByNodeGroupId(const CountNodesByNodeGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountNodesByNodeGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountNodesByNodeGroupIdOutcome(CountNodesByNodeGroupIdResult(outcome.result()));
	else
		return CountNodesByNodeGroupIdOutcome(outcome.error());
}

void LinkWANClient::countNodesByNodeGroupIdAsync(const CountNodesByNodeGroupIdRequest& request, const CountNodesByNodeGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countNodesByNodeGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountNodesByNodeGroupIdOutcomeCallable LinkWANClient::countNodesByNodeGroupIdCallable(const CountNodesByNodeGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountNodesByNodeGroupIdOutcome()>>(
			[this, request]()
			{
			return this->countNodesByNodeGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountNodesByOwnedJoinPermissionIdOutcome LinkWANClient::countNodesByOwnedJoinPermissionId(const CountNodesByOwnedJoinPermissionIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountNodesByOwnedJoinPermissionIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountNodesByOwnedJoinPermissionIdOutcome(CountNodesByOwnedJoinPermissionIdResult(outcome.result()));
	else
		return CountNodesByOwnedJoinPermissionIdOutcome(outcome.error());
}

void LinkWANClient::countNodesByOwnedJoinPermissionIdAsync(const CountNodesByOwnedJoinPermissionIdRequest& request, const CountNodesByOwnedJoinPermissionIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countNodesByOwnedJoinPermissionId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountNodesByOwnedJoinPermissionIdOutcomeCallable LinkWANClient::countNodesByOwnedJoinPermissionIdCallable(const CountNodesByOwnedJoinPermissionIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountNodesByOwnedJoinPermissionIdOutcome()>>(
			[this, request]()
			{
			return this->countNodesByOwnedJoinPermissionId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountNotificationsOutcome LinkWANClient::countNotifications(const CountNotificationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountNotificationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountNotificationsOutcome(CountNotificationsResult(outcome.result()));
	else
		return CountNotificationsOutcome(outcome.error());
}

void LinkWANClient::countNotificationsAsync(const CountNotificationsRequest& request, const CountNotificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countNotifications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountNotificationsOutcomeCallable LinkWANClient::countNotificationsCallable(const CountNotificationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountNotificationsOutcome()>>(
			[this, request]()
			{
			return this->countNotifications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountOwnedJoinPermissionsOutcome LinkWANClient::countOwnedJoinPermissions(const CountOwnedJoinPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountOwnedJoinPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountOwnedJoinPermissionsOutcome(CountOwnedJoinPermissionsResult(outcome.result()));
	else
		return CountOwnedJoinPermissionsOutcome(outcome.error());
}

void LinkWANClient::countOwnedJoinPermissionsAsync(const CountOwnedJoinPermissionsRequest& request, const CountOwnedJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countOwnedJoinPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountOwnedJoinPermissionsOutcomeCallable LinkWANClient::countOwnedJoinPermissionsCallable(const CountOwnedJoinPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountOwnedJoinPermissionsOutcome()>>(
			[this, request]()
			{
			return this->countOwnedJoinPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CountRentedJoinPermissionsOutcome LinkWANClient::countRentedJoinPermissions(const CountRentedJoinPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountRentedJoinPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountRentedJoinPermissionsOutcome(CountRentedJoinPermissionsResult(outcome.result()));
	else
		return CountRentedJoinPermissionsOutcome(outcome.error());
}

void LinkWANClient::countRentedJoinPermissionsAsync(const CountRentedJoinPermissionsRequest& request, const CountRentedJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countRentedJoinPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CountRentedJoinPermissionsOutcomeCallable LinkWANClient::countRentedJoinPermissionsCallable(const CountRentedJoinPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountRentedJoinPermissionsOutcome()>>(
			[this, request]()
			{
			return this->countRentedJoinPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CreateCustomLocalJoinPermissionOutcome LinkWANClient::createCustomLocalJoinPermission(const CreateCustomLocalJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomLocalJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomLocalJoinPermissionOutcome(CreateCustomLocalJoinPermissionResult(outcome.result()));
	else
		return CreateCustomLocalJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::createCustomLocalJoinPermissionAsync(const CreateCustomLocalJoinPermissionRequest& request, const CreateCustomLocalJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomLocalJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CreateCustomLocalJoinPermissionOutcomeCallable LinkWANClient::createCustomLocalJoinPermissionCallable(const CreateCustomLocalJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomLocalJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->createCustomLocalJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CreateGatewayOutcome LinkWANClient::createGateway(const CreateGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewayOutcome(CreateGatewayResult(outcome.result()));
	else
		return CreateGatewayOutcome(outcome.error());
}

void LinkWANClient::createGatewayAsync(const CreateGatewayRequest& request, const CreateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CreateGatewayOutcomeCallable LinkWANClient::createGatewayCallable(const CreateGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayOutcome()>>(
			[this, request]()
			{
			return this->createGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CreateLocalJoinPermissionOutcome LinkWANClient::createLocalJoinPermission(const CreateLocalJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLocalJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLocalJoinPermissionOutcome(CreateLocalJoinPermissionResult(outcome.result()));
	else
		return CreateLocalJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::createLocalJoinPermissionAsync(const CreateLocalJoinPermissionRequest& request, const CreateLocalJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLocalJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CreateLocalJoinPermissionOutcomeCallable LinkWANClient::createLocalJoinPermissionCallable(const CreateLocalJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLocalJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->createLocalJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::CreateNodeGroupOutcome LinkWANClient::createNodeGroup(const CreateNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNodeGroupOutcome(CreateNodeGroupResult(outcome.result()));
	else
		return CreateNodeGroupOutcome(outcome.error());
}

void LinkWANClient::createNodeGroupAsync(const CreateNodeGroupRequest& request, const CreateNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::CreateNodeGroupOutcomeCallable LinkWANClient::createNodeGroupCallable(const CreateNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->createNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::DeleteGatewayOutcome LinkWANClient::deleteGateway(const DeleteGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayOutcome(DeleteGatewayResult(outcome.result()));
	else
		return DeleteGatewayOutcome(outcome.error());
}

void LinkWANClient::deleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::DeleteGatewayOutcomeCallable LinkWANClient::deleteGatewayCallable(const DeleteGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::DeleteLocalJoinPermissionOutcome LinkWANClient::deleteLocalJoinPermission(const DeleteLocalJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLocalJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLocalJoinPermissionOutcome(DeleteLocalJoinPermissionResult(outcome.result()));
	else
		return DeleteLocalJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::deleteLocalJoinPermissionAsync(const DeleteLocalJoinPermissionRequest& request, const DeleteLocalJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLocalJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::DeleteLocalJoinPermissionOutcomeCallable LinkWANClient::deleteLocalJoinPermissionCallable(const DeleteLocalJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLocalJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->deleteLocalJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::DeleteNodeGroupOutcome LinkWANClient::deleteNodeGroup(const DeleteNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNodeGroupOutcome(DeleteNodeGroupResult(outcome.result()));
	else
		return DeleteNodeGroupOutcome(outcome.error());
}

void LinkWANClient::deleteNodeGroupAsync(const DeleteNodeGroupRequest& request, const DeleteNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::DeleteNodeGroupOutcomeCallable LinkWANClient::deleteNodeGroupCallable(const DeleteNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::DescribeRegionsOutcome LinkWANClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void LinkWANClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::DescribeRegionsOutcomeCallable LinkWANClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetFreqBandPlanGroupOutcome LinkWANClient::getFreqBandPlanGroup(const GetFreqBandPlanGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFreqBandPlanGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFreqBandPlanGroupOutcome(GetFreqBandPlanGroupResult(outcome.result()));
	else
		return GetFreqBandPlanGroupOutcome(outcome.error());
}

void LinkWANClient::getFreqBandPlanGroupAsync(const GetFreqBandPlanGroupRequest& request, const GetFreqBandPlanGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFreqBandPlanGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetFreqBandPlanGroupOutcomeCallable LinkWANClient::getFreqBandPlanGroupCallable(const GetFreqBandPlanGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFreqBandPlanGroupOutcome()>>(
			[this, request]()
			{
			return this->getFreqBandPlanGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetGatewayOutcome LinkWANClient::getGateway(const GetGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayOutcome(GetGatewayResult(outcome.result()));
	else
		return GetGatewayOutcome(outcome.error());
}

void LinkWANClient::getGatewayAsync(const GetGatewayRequest& request, const GetGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetGatewayOutcomeCallable LinkWANClient::getGatewayCallable(const GetGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayOutcome()>>(
			[this, request]()
			{
			return this->getGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetGatewayPacketStatOutcome LinkWANClient::getGatewayPacketStat(const GetGatewayPacketStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayPacketStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayPacketStatOutcome(GetGatewayPacketStatResult(outcome.result()));
	else
		return GetGatewayPacketStatOutcome(outcome.error());
}

void LinkWANClient::getGatewayPacketStatAsync(const GetGatewayPacketStatRequest& request, const GetGatewayPacketStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayPacketStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetGatewayPacketStatOutcomeCallable LinkWANClient::getGatewayPacketStatCallable(const GetGatewayPacketStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayPacketStatOutcome()>>(
			[this, request]()
			{
			return this->getGatewayPacketStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetGatewayStatusStatOutcome LinkWANClient::getGatewayStatusStat(const GetGatewayStatusStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayStatusStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayStatusStatOutcome(GetGatewayStatusStatResult(outcome.result()));
	else
		return GetGatewayStatusStatOutcome(outcome.error());
}

void LinkWANClient::getGatewayStatusStatAsync(const GetGatewayStatusStatRequest& request, const GetGatewayStatusStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayStatusStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetGatewayStatusStatOutcomeCallable LinkWANClient::getGatewayStatusStatCallable(const GetGatewayStatusStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayStatusStatOutcome()>>(
			[this, request]()
			{
			return this->getGatewayStatusStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetGatewayTransferPacketsDownloadUrlOutcome LinkWANClient::getGatewayTransferPacketsDownloadUrl(const GetGatewayTransferPacketsDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayTransferPacketsDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayTransferPacketsDownloadUrlOutcome(GetGatewayTransferPacketsDownloadUrlResult(outcome.result()));
	else
		return GetGatewayTransferPacketsDownloadUrlOutcome(outcome.error());
}

void LinkWANClient::getGatewayTransferPacketsDownloadUrlAsync(const GetGatewayTransferPacketsDownloadUrlRequest& request, const GetGatewayTransferPacketsDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayTransferPacketsDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetGatewayTransferPacketsDownloadUrlOutcomeCallable LinkWANClient::getGatewayTransferPacketsDownloadUrlCallable(const GetGatewayTransferPacketsDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayTransferPacketsDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getGatewayTransferPacketsDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetGatewayTupleOrderOutcome LinkWANClient::getGatewayTupleOrder(const GetGatewayTupleOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayTupleOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayTupleOrderOutcome(GetGatewayTupleOrderResult(outcome.result()));
	else
		return GetGatewayTupleOrderOutcome(outcome.error());
}

void LinkWANClient::getGatewayTupleOrderAsync(const GetGatewayTupleOrderRequest& request, const GetGatewayTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayTupleOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetGatewayTupleOrderOutcomeCallable LinkWANClient::getGatewayTupleOrderCallable(const GetGatewayTupleOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayTupleOrderOutcome()>>(
			[this, request]()
			{
			return this->getGatewayTupleOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetGatewayTuplesDownloadUrlOutcome LinkWANClient::getGatewayTuplesDownloadUrl(const GetGatewayTuplesDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGatewayTuplesDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGatewayTuplesDownloadUrlOutcome(GetGatewayTuplesDownloadUrlResult(outcome.result()));
	else
		return GetGatewayTuplesDownloadUrlOutcome(outcome.error());
}

void LinkWANClient::getGatewayTuplesDownloadUrlAsync(const GetGatewayTuplesDownloadUrlRequest& request, const GetGatewayTuplesDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGatewayTuplesDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetGatewayTuplesDownloadUrlOutcomeCallable LinkWANClient::getGatewayTuplesDownloadUrlCallable(const GetGatewayTuplesDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGatewayTuplesDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getGatewayTuplesDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetJoinPermissionAuthOrderOutcome LinkWANClient::getJoinPermissionAuthOrder(const GetJoinPermissionAuthOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJoinPermissionAuthOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJoinPermissionAuthOrderOutcome(GetJoinPermissionAuthOrderResult(outcome.result()));
	else
		return GetJoinPermissionAuthOrderOutcome(outcome.error());
}

void LinkWANClient::getJoinPermissionAuthOrderAsync(const GetJoinPermissionAuthOrderRequest& request, const GetJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJoinPermissionAuthOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetJoinPermissionAuthOrderOutcomeCallable LinkWANClient::getJoinPermissionAuthOrderCallable(const GetJoinPermissionAuthOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJoinPermissionAuthOrderOutcome()>>(
			[this, request]()
			{
			return this->getJoinPermissionAuthOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetLocalConfigSyncTaskOutcome LinkWANClient::getLocalConfigSyncTask(const GetLocalConfigSyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLocalConfigSyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLocalConfigSyncTaskOutcome(GetLocalConfigSyncTaskResult(outcome.result()));
	else
		return GetLocalConfigSyncTaskOutcome(outcome.error());
}

void LinkWANClient::getLocalConfigSyncTaskAsync(const GetLocalConfigSyncTaskRequest& request, const GetLocalConfigSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLocalConfigSyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetLocalConfigSyncTaskOutcomeCallable LinkWANClient::getLocalConfigSyncTaskCallable(const GetLocalConfigSyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLocalConfigSyncTaskOutcome()>>(
			[this, request]()
			{
			return this->getLocalConfigSyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNodeOutcome LinkWANClient::getNode(const GetNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeOutcome(GetNodeResult(outcome.result()));
	else
		return GetNodeOutcome(outcome.error());
}

void LinkWANClient::getNodeAsync(const GetNodeRequest& request, const GetNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNodeOutcomeCallable LinkWANClient::getNodeCallable(const GetNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeOutcome()>>(
			[this, request]()
			{
			return this->getNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNodeGroupOutcome LinkWANClient::getNodeGroup(const GetNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeGroupOutcome(GetNodeGroupResult(outcome.result()));
	else
		return GetNodeGroupOutcome(outcome.error());
}

void LinkWANClient::getNodeGroupAsync(const GetNodeGroupRequest& request, const GetNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNodeGroupOutcomeCallable LinkWANClient::getNodeGroupCallable(const GetNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->getNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNodeGroupTransferPacketsDownloadUrlOutcome LinkWANClient::getNodeGroupTransferPacketsDownloadUrl(const GetNodeGroupTransferPacketsDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeGroupTransferPacketsDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeGroupTransferPacketsDownloadUrlOutcome(GetNodeGroupTransferPacketsDownloadUrlResult(outcome.result()));
	else
		return GetNodeGroupTransferPacketsDownloadUrlOutcome(outcome.error());
}

void LinkWANClient::getNodeGroupTransferPacketsDownloadUrlAsync(const GetNodeGroupTransferPacketsDownloadUrlRequest& request, const GetNodeGroupTransferPacketsDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeGroupTransferPacketsDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNodeGroupTransferPacketsDownloadUrlOutcomeCallable LinkWANClient::getNodeGroupTransferPacketsDownloadUrlCallable(const GetNodeGroupTransferPacketsDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeGroupTransferPacketsDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getNodeGroupTransferPacketsDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNodeLocalConfigOutcome LinkWANClient::getNodeLocalConfig(const GetNodeLocalConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeLocalConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeLocalConfigOutcome(GetNodeLocalConfigResult(outcome.result()));
	else
		return GetNodeLocalConfigOutcome(outcome.error());
}

void LinkWANClient::getNodeLocalConfigAsync(const GetNodeLocalConfigRequest& request, const GetNodeLocalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeLocalConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNodeLocalConfigOutcomeCallable LinkWANClient::getNodeLocalConfigCallable(const GetNodeLocalConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeLocalConfigOutcome()>>(
			[this, request]()
			{
			return this->getNodeLocalConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNodeTransferPacketOutcome LinkWANClient::getNodeTransferPacket(const GetNodeTransferPacketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeTransferPacketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeTransferPacketOutcome(GetNodeTransferPacketResult(outcome.result()));
	else
		return GetNodeTransferPacketOutcome(outcome.error());
}

void LinkWANClient::getNodeTransferPacketAsync(const GetNodeTransferPacketRequest& request, const GetNodeTransferPacketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeTransferPacket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNodeTransferPacketOutcomeCallable LinkWANClient::getNodeTransferPacketCallable(const GetNodeTransferPacketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeTransferPacketOutcome()>>(
			[this, request]()
			{
			return this->getNodeTransferPacket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNodeTransferPacketsDownloadUrlOutcome LinkWANClient::getNodeTransferPacketsDownloadUrl(const GetNodeTransferPacketsDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeTransferPacketsDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeTransferPacketsDownloadUrlOutcome(GetNodeTransferPacketsDownloadUrlResult(outcome.result()));
	else
		return GetNodeTransferPacketsDownloadUrlOutcome(outcome.error());
}

void LinkWANClient::getNodeTransferPacketsDownloadUrlAsync(const GetNodeTransferPacketsDownloadUrlRequest& request, const GetNodeTransferPacketsDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeTransferPacketsDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNodeTransferPacketsDownloadUrlOutcomeCallable LinkWANClient::getNodeTransferPacketsDownloadUrlCallable(const GetNodeTransferPacketsDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeTransferPacketsDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getNodeTransferPacketsDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNodeTupleOrderOutcome LinkWANClient::getNodeTupleOrder(const GetNodeTupleOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeTupleOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeTupleOrderOutcome(GetNodeTupleOrderResult(outcome.result()));
	else
		return GetNodeTupleOrderOutcome(outcome.error());
}

void LinkWANClient::getNodeTupleOrderAsync(const GetNodeTupleOrderRequest& request, const GetNodeTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeTupleOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNodeTupleOrderOutcomeCallable LinkWANClient::getNodeTupleOrderCallable(const GetNodeTupleOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeTupleOrderOutcome()>>(
			[this, request]()
			{
			return this->getNodeTupleOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNodeTuplesDownloadUrlOutcome LinkWANClient::getNodeTuplesDownloadUrl(const GetNodeTuplesDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeTuplesDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeTuplesDownloadUrlOutcome(GetNodeTuplesDownloadUrlResult(outcome.result()));
	else
		return GetNodeTuplesDownloadUrlOutcome(outcome.error());
}

void LinkWANClient::getNodeTuplesDownloadUrlAsync(const GetNodeTuplesDownloadUrlRequest& request, const GetNodeTuplesDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeTuplesDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNodeTuplesDownloadUrlOutcomeCallable LinkWANClient::getNodeTuplesDownloadUrlCallable(const GetNodeTuplesDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeTuplesDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getNodeTuplesDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetNotificationOutcome LinkWANClient::getNotification(const GetNotificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNotificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNotificationOutcome(GetNotificationResult(outcome.result()));
	else
		return GetNotificationOutcome(outcome.error());
}

void LinkWANClient::getNotificationAsync(const GetNotificationRequest& request, const GetNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNotification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetNotificationOutcomeCallable LinkWANClient::getNotificationCallable(const GetNotificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNotificationOutcome()>>(
			[this, request]()
			{
			return this->getNotification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetOwnedJoinPermissionOutcome LinkWANClient::getOwnedJoinPermission(const GetOwnedJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOwnedJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOwnedJoinPermissionOutcome(GetOwnedJoinPermissionResult(outcome.result()));
	else
		return GetOwnedJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::getOwnedJoinPermissionAsync(const GetOwnedJoinPermissionRequest& request, const GetOwnedJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOwnedJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetOwnedJoinPermissionOutcomeCallable LinkWANClient::getOwnedJoinPermissionCallable(const GetOwnedJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOwnedJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->getOwnedJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetRentedJoinPermissionOutcome LinkWANClient::getRentedJoinPermission(const GetRentedJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRentedJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRentedJoinPermissionOutcome(GetRentedJoinPermissionResult(outcome.result()));
	else
		return GetRentedJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::getRentedJoinPermissionAsync(const GetRentedJoinPermissionRequest& request, const GetRentedJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRentedJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetRentedJoinPermissionOutcomeCallable LinkWANClient::getRentedJoinPermissionCallable(const GetRentedJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRentedJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->getRentedJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetUserLicenseOutcome LinkWANClient::getUserLicense(const GetUserLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserLicenseOutcome(GetUserLicenseResult(outcome.result()));
	else
		return GetUserLicenseOutcome(outcome.error());
}

void LinkWANClient::getUserLicenseAsync(const GetUserLicenseRequest& request, const GetUserLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetUserLicenseOutcomeCallable LinkWANClient::getUserLicenseCallable(const GetUserLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserLicenseOutcome()>>(
			[this, request]()
			{
			return this->getUserLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::GetUserNetProfileDescriptionOutcome LinkWANClient::getUserNetProfileDescription(const GetUserNetProfileDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserNetProfileDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserNetProfileDescriptionOutcome(GetUserNetProfileDescriptionResult(outcome.result()));
	else
		return GetUserNetProfileDescriptionOutcome(outcome.error());
}

void LinkWANClient::getUserNetProfileDescriptionAsync(const GetUserNetProfileDescriptionRequest& request, const GetUserNetProfileDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserNetProfileDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::GetUserNetProfileDescriptionOutcomeCallable LinkWANClient::getUserNetProfileDescriptionCallable(const GetUserNetProfileDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserNetProfileDescriptionOutcome()>>(
			[this, request]()
			{
			return this->getUserNetProfileDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListActivatedFeaturesOutcome LinkWANClient::listActivatedFeatures(const ListActivatedFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListActivatedFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListActivatedFeaturesOutcome(ListActivatedFeaturesResult(outcome.result()));
	else
		return ListActivatedFeaturesOutcome(outcome.error());
}

void LinkWANClient::listActivatedFeaturesAsync(const ListActivatedFeaturesRequest& request, const ListActivatedFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listActivatedFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListActivatedFeaturesOutcomeCallable LinkWANClient::listActivatedFeaturesCallable(const ListActivatedFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListActivatedFeaturesOutcome()>>(
			[this, request]()
			{
			return this->listActivatedFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListActiveGatewaysOutcome LinkWANClient::listActiveGateways(const ListActiveGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListActiveGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListActiveGatewaysOutcome(ListActiveGatewaysResult(outcome.result()));
	else
		return ListActiveGatewaysOutcome(outcome.error());
}

void LinkWANClient::listActiveGatewaysAsync(const ListActiveGatewaysRequest& request, const ListActiveGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listActiveGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListActiveGatewaysOutcomeCallable LinkWANClient::listActiveGatewaysCallable(const ListActiveGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListActiveGatewaysOutcome()>>(
			[this, request]()
			{
			return this->listActiveGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListFreqBandPlanGroupsOutcome LinkWANClient::listFreqBandPlanGroups(const ListFreqBandPlanGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFreqBandPlanGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFreqBandPlanGroupsOutcome(ListFreqBandPlanGroupsResult(outcome.result()));
	else
		return ListFreqBandPlanGroupsOutcome(outcome.error());
}

void LinkWANClient::listFreqBandPlanGroupsAsync(const ListFreqBandPlanGroupsRequest& request, const ListFreqBandPlanGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFreqBandPlanGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListFreqBandPlanGroupsOutcomeCallable LinkWANClient::listFreqBandPlanGroupsCallable(const ListFreqBandPlanGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFreqBandPlanGroupsOutcome()>>(
			[this, request]()
			{
			return this->listFreqBandPlanGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListGatewayLocalConfigsOutcome LinkWANClient::listGatewayLocalConfigs(const ListGatewayLocalConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayLocalConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayLocalConfigsOutcome(ListGatewayLocalConfigsResult(outcome.result()));
	else
		return ListGatewayLocalConfigsOutcome(outcome.error());
}

void LinkWANClient::listGatewayLocalConfigsAsync(const ListGatewayLocalConfigsRequest& request, const ListGatewayLocalConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayLocalConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListGatewayLocalConfigsOutcomeCallable LinkWANClient::listGatewayLocalConfigsCallable(const ListGatewayLocalConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayLocalConfigsOutcome()>>(
			[this, request]()
			{
			return this->listGatewayLocalConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListGatewayOnlineRecordsOutcome LinkWANClient::listGatewayOnlineRecords(const ListGatewayOnlineRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayOnlineRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayOnlineRecordsOutcome(ListGatewayOnlineRecordsResult(outcome.result()));
	else
		return ListGatewayOnlineRecordsOutcome(outcome.error());
}

void LinkWANClient::listGatewayOnlineRecordsAsync(const ListGatewayOnlineRecordsRequest& request, const ListGatewayOnlineRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayOnlineRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListGatewayOnlineRecordsOutcomeCallable LinkWANClient::listGatewayOnlineRecordsCallable(const ListGatewayOnlineRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayOnlineRecordsOutcome()>>(
			[this, request]()
			{
			return this->listGatewayOnlineRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListGatewayTransferFlowStatsOutcome LinkWANClient::listGatewayTransferFlowStats(const ListGatewayTransferFlowStatsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayTransferFlowStatsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayTransferFlowStatsOutcome(ListGatewayTransferFlowStatsResult(outcome.result()));
	else
		return ListGatewayTransferFlowStatsOutcome(outcome.error());
}

void LinkWANClient::listGatewayTransferFlowStatsAsync(const ListGatewayTransferFlowStatsRequest& request, const ListGatewayTransferFlowStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayTransferFlowStats(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListGatewayTransferFlowStatsOutcomeCallable LinkWANClient::listGatewayTransferFlowStatsCallable(const ListGatewayTransferFlowStatsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayTransferFlowStatsOutcome()>>(
			[this, request]()
			{
			return this->listGatewayTransferFlowStats(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListGatewayTransferPacketsOutcome LinkWANClient::listGatewayTransferPackets(const ListGatewayTransferPacketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayTransferPacketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayTransferPacketsOutcome(ListGatewayTransferPacketsResult(outcome.result()));
	else
		return ListGatewayTransferPacketsOutcome(outcome.error());
}

void LinkWANClient::listGatewayTransferPacketsAsync(const ListGatewayTransferPacketsRequest& request, const ListGatewayTransferPacketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayTransferPackets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListGatewayTransferPacketsOutcomeCallable LinkWANClient::listGatewayTransferPacketsCallable(const ListGatewayTransferPacketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayTransferPacketsOutcome()>>(
			[this, request]()
			{
			return this->listGatewayTransferPackets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListGatewayTupleOrdersOutcome LinkWANClient::listGatewayTupleOrders(const ListGatewayTupleOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewayTupleOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewayTupleOrdersOutcome(ListGatewayTupleOrdersResult(outcome.result()));
	else
		return ListGatewayTupleOrdersOutcome(outcome.error());
}

void LinkWANClient::listGatewayTupleOrdersAsync(const ListGatewayTupleOrdersRequest& request, const ListGatewayTupleOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewayTupleOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListGatewayTupleOrdersOutcomeCallable LinkWANClient::listGatewayTupleOrdersCallable(const ListGatewayTupleOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewayTupleOrdersOutcome()>>(
			[this, request]()
			{
			return this->listGatewayTupleOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListGatewaysOutcome LinkWANClient::listGateways(const ListGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewaysOutcome(ListGatewaysResult(outcome.result()));
	else
		return ListGatewaysOutcome(outcome.error());
}

void LinkWANClient::listGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListGatewaysOutcomeCallable LinkWANClient::listGatewaysCallable(const ListGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewaysOutcome()>>(
			[this, request]()
			{
			return this->listGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListGatewaysGisInfoOutcome LinkWANClient::listGatewaysGisInfo(const ListGatewaysGisInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewaysGisInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewaysGisInfoOutcome(ListGatewaysGisInfoResult(outcome.result()));
	else
		return ListGatewaysGisInfoOutcome(outcome.error());
}

void LinkWANClient::listGatewaysGisInfoAsync(const ListGatewaysGisInfoRequest& request, const ListGatewaysGisInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewaysGisInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListGatewaysGisInfoOutcomeCallable LinkWANClient::listGatewaysGisInfoCallable(const ListGatewaysGisInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewaysGisInfoOutcome()>>(
			[this, request]()
			{
			return this->listGatewaysGisInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListGatewaysPacketStatOutcome LinkWANClient::listGatewaysPacketStat(const ListGatewaysPacketStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGatewaysPacketStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGatewaysPacketStatOutcome(ListGatewaysPacketStatResult(outcome.result()));
	else
		return ListGatewaysPacketStatOutcome(outcome.error());
}

void LinkWANClient::listGatewaysPacketStatAsync(const ListGatewaysPacketStatRequest& request, const ListGatewaysPacketStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGatewaysPacketStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListGatewaysPacketStatOutcomeCallable LinkWANClient::listGatewaysPacketStatCallable(const ListGatewaysPacketStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGatewaysPacketStatOutcome()>>(
			[this, request]()
			{
			return this->listGatewaysPacketStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodeGroupTransferFlowStatsOutcome LinkWANClient::listNodeGroupTransferFlowStats(const ListNodeGroupTransferFlowStatsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeGroupTransferFlowStatsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeGroupTransferFlowStatsOutcome(ListNodeGroupTransferFlowStatsResult(outcome.result()));
	else
		return ListNodeGroupTransferFlowStatsOutcome(outcome.error());
}

void LinkWANClient::listNodeGroupTransferFlowStatsAsync(const ListNodeGroupTransferFlowStatsRequest& request, const ListNodeGroupTransferFlowStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeGroupTransferFlowStats(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodeGroupTransferFlowStatsOutcomeCallable LinkWANClient::listNodeGroupTransferFlowStatsCallable(const ListNodeGroupTransferFlowStatsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeGroupTransferFlowStatsOutcome()>>(
			[this, request]()
			{
			return this->listNodeGroupTransferFlowStats(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodeGroupTransferPacketsOutcome LinkWANClient::listNodeGroupTransferPackets(const ListNodeGroupTransferPacketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeGroupTransferPacketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeGroupTransferPacketsOutcome(ListNodeGroupTransferPacketsResult(outcome.result()));
	else
		return ListNodeGroupTransferPacketsOutcome(outcome.error());
}

void LinkWANClient::listNodeGroupTransferPacketsAsync(const ListNodeGroupTransferPacketsRequest& request, const ListNodeGroupTransferPacketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeGroupTransferPackets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodeGroupTransferPacketsOutcomeCallable LinkWANClient::listNodeGroupTransferPacketsCallable(const ListNodeGroupTransferPacketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeGroupTransferPacketsOutcome()>>(
			[this, request]()
			{
			return this->listNodeGroupTransferPackets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodeGroupsOutcome LinkWANClient::listNodeGroups(const ListNodeGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeGroupsOutcome(ListNodeGroupsResult(outcome.result()));
	else
		return ListNodeGroupsOutcome(outcome.error());
}

void LinkWANClient::listNodeGroupsAsync(const ListNodeGroupsRequest& request, const ListNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodeGroupsOutcomeCallable LinkWANClient::listNodeGroupsCallable(const ListNodeGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeGroupsOutcome()>>(
			[this, request]()
			{
			return this->listNodeGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodeGroupsPacketStatOutcome LinkWANClient::listNodeGroupsPacketStat(const ListNodeGroupsPacketStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeGroupsPacketStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeGroupsPacketStatOutcome(ListNodeGroupsPacketStatResult(outcome.result()));
	else
		return ListNodeGroupsPacketStatOutcome(outcome.error());
}

void LinkWANClient::listNodeGroupsPacketStatAsync(const ListNodeGroupsPacketStatRequest& request, const ListNodeGroupsPacketStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeGroupsPacketStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodeGroupsPacketStatOutcomeCallable LinkWANClient::listNodeGroupsPacketStatCallable(const ListNodeGroupsPacketStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeGroupsPacketStatOutcome()>>(
			[this, request]()
			{
			return this->listNodeGroupsPacketStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodeTransferPacketPathsOutcome LinkWANClient::listNodeTransferPacketPaths(const ListNodeTransferPacketPathsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeTransferPacketPathsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeTransferPacketPathsOutcome(ListNodeTransferPacketPathsResult(outcome.result()));
	else
		return ListNodeTransferPacketPathsOutcome(outcome.error());
}

void LinkWANClient::listNodeTransferPacketPathsAsync(const ListNodeTransferPacketPathsRequest& request, const ListNodeTransferPacketPathsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeTransferPacketPaths(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodeTransferPacketPathsOutcomeCallable LinkWANClient::listNodeTransferPacketPathsCallable(const ListNodeTransferPacketPathsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeTransferPacketPathsOutcome()>>(
			[this, request]()
			{
			return this->listNodeTransferPacketPaths(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodeTransferPacketsOutcome LinkWANClient::listNodeTransferPackets(const ListNodeTransferPacketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeTransferPacketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeTransferPacketsOutcome(ListNodeTransferPacketsResult(outcome.result()));
	else
		return ListNodeTransferPacketsOutcome(outcome.error());
}

void LinkWANClient::listNodeTransferPacketsAsync(const ListNodeTransferPacketsRequest& request, const ListNodeTransferPacketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeTransferPackets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodeTransferPacketsOutcomeCallable LinkWANClient::listNodeTransferPacketsCallable(const ListNodeTransferPacketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeTransferPacketsOutcome()>>(
			[this, request]()
			{
			return this->listNodeTransferPackets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodeTupleOrdersOutcome LinkWANClient::listNodeTupleOrders(const ListNodeTupleOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeTupleOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeTupleOrdersOutcome(ListNodeTupleOrdersResult(outcome.result()));
	else
		return ListNodeTupleOrdersOutcome(outcome.error());
}

void LinkWANClient::listNodeTupleOrdersAsync(const ListNodeTupleOrdersRequest& request, const ListNodeTupleOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeTupleOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodeTupleOrdersOutcomeCallable LinkWANClient::listNodeTupleOrdersCallable(const ListNodeTupleOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeTupleOrdersOutcome()>>(
			[this, request]()
			{
			return this->listNodeTupleOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodesByNodeGroupIdOutcome LinkWANClient::listNodesByNodeGroupId(const ListNodesByNodeGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesByNodeGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesByNodeGroupIdOutcome(ListNodesByNodeGroupIdResult(outcome.result()));
	else
		return ListNodesByNodeGroupIdOutcome(outcome.error());
}

void LinkWANClient::listNodesByNodeGroupIdAsync(const ListNodesByNodeGroupIdRequest& request, const ListNodesByNodeGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodesByNodeGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodesByNodeGroupIdOutcomeCallable LinkWANClient::listNodesByNodeGroupIdCallable(const ListNodesByNodeGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesByNodeGroupIdOutcome()>>(
			[this, request]()
			{
			return this->listNodesByNodeGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNodesByOwnedJoinPermissionIdOutcome LinkWANClient::listNodesByOwnedJoinPermissionId(const ListNodesByOwnedJoinPermissionIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesByOwnedJoinPermissionIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesByOwnedJoinPermissionIdOutcome(ListNodesByOwnedJoinPermissionIdResult(outcome.result()));
	else
		return ListNodesByOwnedJoinPermissionIdOutcome(outcome.error());
}

void LinkWANClient::listNodesByOwnedJoinPermissionIdAsync(const ListNodesByOwnedJoinPermissionIdRequest& request, const ListNodesByOwnedJoinPermissionIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodesByOwnedJoinPermissionId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNodesByOwnedJoinPermissionIdOutcomeCallable LinkWANClient::listNodesByOwnedJoinPermissionIdCallable(const ListNodesByOwnedJoinPermissionIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesByOwnedJoinPermissionIdOutcome()>>(
			[this, request]()
			{
			return this->listNodesByOwnedJoinPermissionId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListNotificationsOutcome LinkWANClient::listNotifications(const ListNotificationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNotificationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNotificationsOutcome(ListNotificationsResult(outcome.result()));
	else
		return ListNotificationsOutcome(outcome.error());
}

void LinkWANClient::listNotificationsAsync(const ListNotificationsRequest& request, const ListNotificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNotifications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListNotificationsOutcomeCallable LinkWANClient::listNotificationsCallable(const ListNotificationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNotificationsOutcome()>>(
			[this, request]()
			{
			return this->listNotifications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListOwnedJoinPermissionsOutcome LinkWANClient::listOwnedJoinPermissions(const ListOwnedJoinPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOwnedJoinPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOwnedJoinPermissionsOutcome(ListOwnedJoinPermissionsResult(outcome.result()));
	else
		return ListOwnedJoinPermissionsOutcome(outcome.error());
}

void LinkWANClient::listOwnedJoinPermissionsAsync(const ListOwnedJoinPermissionsRequest& request, const ListOwnedJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOwnedJoinPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListOwnedJoinPermissionsOutcomeCallable LinkWANClient::listOwnedJoinPermissionsCallable(const ListOwnedJoinPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOwnedJoinPermissionsOutcome()>>(
			[this, request]()
			{
			return this->listOwnedJoinPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListRentedJoinPermissionsOutcome LinkWANClient::listRentedJoinPermissions(const ListRentedJoinPermissionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRentedJoinPermissionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRentedJoinPermissionsOutcome(ListRentedJoinPermissionsResult(outcome.result()));
	else
		return ListRentedJoinPermissionsOutcome(outcome.error());
}

void LinkWANClient::listRentedJoinPermissionsAsync(const ListRentedJoinPermissionsRequest& request, const ListRentedJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRentedJoinPermissions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListRentedJoinPermissionsOutcomeCallable LinkWANClient::listRentedJoinPermissionsCallable(const ListRentedJoinPermissionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRentedJoinPermissionsOutcome()>>(
			[this, request]()
			{
			return this->listRentedJoinPermissions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ListTransferPacketOutcome LinkWANClient::listTransferPacket(const ListTransferPacketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransferPacketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransferPacketOutcome(ListTransferPacketResult(outcome.result()));
	else
		return ListTransferPacketOutcome(outcome.error());
}

void LinkWANClient::listTransferPacketAsync(const ListTransferPacketRequest& request, const ListTransferPacketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransferPacket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ListTransferPacketOutcomeCallable LinkWANClient::listTransferPacketCallable(const ListTransferPacketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransferPacketOutcome()>>(
			[this, request]()
			{
			return this->listTransferPacket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::RejectJoinPermissionAuthOrderOutcome LinkWANClient::rejectJoinPermissionAuthOrder(const RejectJoinPermissionAuthOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RejectJoinPermissionAuthOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RejectJoinPermissionAuthOrderOutcome(RejectJoinPermissionAuthOrderResult(outcome.result()));
	else
		return RejectJoinPermissionAuthOrderOutcome(outcome.error());
}

void LinkWANClient::rejectJoinPermissionAuthOrderAsync(const RejectJoinPermissionAuthOrderRequest& request, const RejectJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rejectJoinPermissionAuthOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::RejectJoinPermissionAuthOrderOutcomeCallable LinkWANClient::rejectJoinPermissionAuthOrderCallable(const RejectJoinPermissionAuthOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RejectJoinPermissionAuthOrderOutcome()>>(
			[this, request]()
			{
			return this->rejectJoinPermissionAuthOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::RemoveNodeFromGroupOutcome LinkWANClient::removeNodeFromGroup(const RemoveNodeFromGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveNodeFromGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveNodeFromGroupOutcome(RemoveNodeFromGroupResult(outcome.result()));
	else
		return RemoveNodeFromGroupOutcome(outcome.error());
}

void LinkWANClient::removeNodeFromGroupAsync(const RemoveNodeFromGroupRequest& request, const RemoveNodeFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeNodeFromGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::RemoveNodeFromGroupOutcomeCallable LinkWANClient::removeNodeFromGroupCallable(const RemoveNodeFromGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveNodeFromGroupOutcome()>>(
			[this, request]()
			{
			return this->removeNodeFromGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::ReturnJoinPermissionOutcome LinkWANClient::returnJoinPermission(const ReturnJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReturnJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReturnJoinPermissionOutcome(ReturnJoinPermissionResult(outcome.result()));
	else
		return ReturnJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::returnJoinPermissionAsync(const ReturnJoinPermissionRequest& request, const ReturnJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, returnJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::ReturnJoinPermissionOutcomeCallable LinkWANClient::returnJoinPermissionCallable(const ReturnJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReturnJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->returnJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SendUnicastCommandOutcome LinkWANClient::sendUnicastCommand(const SendUnicastCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendUnicastCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendUnicastCommandOutcome(SendUnicastCommandResult(outcome.result()));
	else
		return SendUnicastCommandOutcome(outcome.error());
}

void LinkWANClient::sendUnicastCommandAsync(const SendUnicastCommandRequest& request, const SendUnicastCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendUnicastCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SendUnicastCommandOutcomeCallable LinkWANClient::sendUnicastCommandCallable(const SendUnicastCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendUnicastCommandOutcome()>>(
			[this, request]()
			{
			return this->sendUnicastCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SubmitGatewayLocalConfigAddingTaskOutcome LinkWANClient::submitGatewayLocalConfigAddingTask(const SubmitGatewayLocalConfigAddingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitGatewayLocalConfigAddingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitGatewayLocalConfigAddingTaskOutcome(SubmitGatewayLocalConfigAddingTaskResult(outcome.result()));
	else
		return SubmitGatewayLocalConfigAddingTaskOutcome(outcome.error());
}

void LinkWANClient::submitGatewayLocalConfigAddingTaskAsync(const SubmitGatewayLocalConfigAddingTaskRequest& request, const SubmitGatewayLocalConfigAddingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitGatewayLocalConfigAddingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SubmitGatewayLocalConfigAddingTaskOutcomeCallable LinkWANClient::submitGatewayLocalConfigAddingTaskCallable(const SubmitGatewayLocalConfigAddingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitGatewayLocalConfigAddingTaskOutcome()>>(
			[this, request]()
			{
			return this->submitGatewayLocalConfigAddingTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SubmitGatewayLocalConfigDeletingTaskOutcome LinkWANClient::submitGatewayLocalConfigDeletingTask(const SubmitGatewayLocalConfigDeletingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitGatewayLocalConfigDeletingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitGatewayLocalConfigDeletingTaskOutcome(SubmitGatewayLocalConfigDeletingTaskResult(outcome.result()));
	else
		return SubmitGatewayLocalConfigDeletingTaskOutcome(outcome.error());
}

void LinkWANClient::submitGatewayLocalConfigDeletingTaskAsync(const SubmitGatewayLocalConfigDeletingTaskRequest& request, const SubmitGatewayLocalConfigDeletingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitGatewayLocalConfigDeletingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SubmitGatewayLocalConfigDeletingTaskOutcomeCallable LinkWANClient::submitGatewayLocalConfigDeletingTaskCallable(const SubmitGatewayLocalConfigDeletingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitGatewayLocalConfigDeletingTaskOutcome()>>(
			[this, request]()
			{
			return this->submitGatewayLocalConfigDeletingTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SubmitGatewayTupleOrderOutcome LinkWANClient::submitGatewayTupleOrder(const SubmitGatewayTupleOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitGatewayTupleOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitGatewayTupleOrderOutcome(SubmitGatewayTupleOrderResult(outcome.result()));
	else
		return SubmitGatewayTupleOrderOutcome(outcome.error());
}

void LinkWANClient::submitGatewayTupleOrderAsync(const SubmitGatewayTupleOrderRequest& request, const SubmitGatewayTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitGatewayTupleOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SubmitGatewayTupleOrderOutcomeCallable LinkWANClient::submitGatewayTupleOrderCallable(const SubmitGatewayTupleOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitGatewayTupleOrderOutcome()>>(
			[this, request]()
			{
			return this->submitGatewayTupleOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SubmitJoinPermissionAuthOrderOutcome LinkWANClient::submitJoinPermissionAuthOrder(const SubmitJoinPermissionAuthOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitJoinPermissionAuthOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitJoinPermissionAuthOrderOutcome(SubmitJoinPermissionAuthOrderResult(outcome.result()));
	else
		return SubmitJoinPermissionAuthOrderOutcome(outcome.error());
}

void LinkWANClient::submitJoinPermissionAuthOrderAsync(const SubmitJoinPermissionAuthOrderRequest& request, const SubmitJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitJoinPermissionAuthOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SubmitJoinPermissionAuthOrderOutcomeCallable LinkWANClient::submitJoinPermissionAuthOrderCallable(const SubmitJoinPermissionAuthOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitJoinPermissionAuthOrderOutcome()>>(
			[this, request]()
			{
			return this->submitJoinPermissionAuthOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SubmitKpmEncryptedNodeTupleOrderOutcome LinkWANClient::submitKpmEncryptedNodeTupleOrder(const SubmitKpmEncryptedNodeTupleOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitKpmEncryptedNodeTupleOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitKpmEncryptedNodeTupleOrderOutcome(SubmitKpmEncryptedNodeTupleOrderResult(outcome.result()));
	else
		return SubmitKpmEncryptedNodeTupleOrderOutcome(outcome.error());
}

void LinkWANClient::submitKpmEncryptedNodeTupleOrderAsync(const SubmitKpmEncryptedNodeTupleOrderRequest& request, const SubmitKpmEncryptedNodeTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitKpmEncryptedNodeTupleOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SubmitKpmEncryptedNodeTupleOrderOutcomeCallable LinkWANClient::submitKpmEncryptedNodeTupleOrderCallable(const SubmitKpmEncryptedNodeTupleOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitKpmEncryptedNodeTupleOrderOutcome()>>(
			[this, request]()
			{
			return this->submitKpmEncryptedNodeTupleOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SubmitNodeLocalConfigAddingTaskOutcome LinkWANClient::submitNodeLocalConfigAddingTask(const SubmitNodeLocalConfigAddingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitNodeLocalConfigAddingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitNodeLocalConfigAddingTaskOutcome(SubmitNodeLocalConfigAddingTaskResult(outcome.result()));
	else
		return SubmitNodeLocalConfigAddingTaskOutcome(outcome.error());
}

void LinkWANClient::submitNodeLocalConfigAddingTaskAsync(const SubmitNodeLocalConfigAddingTaskRequest& request, const SubmitNodeLocalConfigAddingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitNodeLocalConfigAddingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SubmitNodeLocalConfigAddingTaskOutcomeCallable LinkWANClient::submitNodeLocalConfigAddingTaskCallable(const SubmitNodeLocalConfigAddingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitNodeLocalConfigAddingTaskOutcome()>>(
			[this, request]()
			{
			return this->submitNodeLocalConfigAddingTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SubmitNodeLocalConfigDeletingTaskOutcome LinkWANClient::submitNodeLocalConfigDeletingTask(const SubmitNodeLocalConfigDeletingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitNodeLocalConfigDeletingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitNodeLocalConfigDeletingTaskOutcome(SubmitNodeLocalConfigDeletingTaskResult(outcome.result()));
	else
		return SubmitNodeLocalConfigDeletingTaskOutcome(outcome.error());
}

void LinkWANClient::submitNodeLocalConfigDeletingTaskAsync(const SubmitNodeLocalConfigDeletingTaskRequest& request, const SubmitNodeLocalConfigDeletingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitNodeLocalConfigDeletingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SubmitNodeLocalConfigDeletingTaskOutcomeCallable LinkWANClient::submitNodeLocalConfigDeletingTaskCallable(const SubmitNodeLocalConfigDeletingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitNodeLocalConfigDeletingTaskOutcome()>>(
			[this, request]()
			{
			return this->submitNodeLocalConfigDeletingTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::SubmitNodeTupleOrderOutcome LinkWANClient::submitNodeTupleOrder(const SubmitNodeTupleOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitNodeTupleOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitNodeTupleOrderOutcome(SubmitNodeTupleOrderResult(outcome.result()));
	else
		return SubmitNodeTupleOrderOutcome(outcome.error());
}

void LinkWANClient::submitNodeTupleOrderAsync(const SubmitNodeTupleOrderRequest& request, const SubmitNodeTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitNodeTupleOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::SubmitNodeTupleOrderOutcomeCallable LinkWANClient::submitNodeTupleOrderCallable(const SubmitNodeTupleOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitNodeTupleOrderOutcome()>>(
			[this, request]()
			{
			return this->submitNodeTupleOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UnbindJoinPermissionFromNodeGroupOutcome LinkWANClient::unbindJoinPermissionFromNodeGroup(const UnbindJoinPermissionFromNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindJoinPermissionFromNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindJoinPermissionFromNodeGroupOutcome(UnbindJoinPermissionFromNodeGroupResult(outcome.result()));
	else
		return UnbindJoinPermissionFromNodeGroupOutcome(outcome.error());
}

void LinkWANClient::unbindJoinPermissionFromNodeGroupAsync(const UnbindJoinPermissionFromNodeGroupRequest& request, const UnbindJoinPermissionFromNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindJoinPermissionFromNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UnbindJoinPermissionFromNodeGroupOutcomeCallable LinkWANClient::unbindJoinPermissionFromNodeGroupCallable(const UnbindJoinPermissionFromNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindJoinPermissionFromNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->unbindJoinPermissionFromNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateDataDispatchConfigOutcome LinkWANClient::updateDataDispatchConfig(const UpdateDataDispatchConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataDispatchConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataDispatchConfigOutcome(UpdateDataDispatchConfigResult(outcome.result()));
	else
		return UpdateDataDispatchConfigOutcome(outcome.error());
}

void LinkWANClient::updateDataDispatchConfigAsync(const UpdateDataDispatchConfigRequest& request, const UpdateDataDispatchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataDispatchConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateDataDispatchConfigOutcomeCallable LinkWANClient::updateDataDispatchConfigCallable(const UpdateDataDispatchConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataDispatchConfigOutcome()>>(
			[this, request]()
			{
			return this->updateDataDispatchConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateDataDispatchEnablingStateOutcome LinkWANClient::updateDataDispatchEnablingState(const UpdateDataDispatchEnablingStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataDispatchEnablingStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataDispatchEnablingStateOutcome(UpdateDataDispatchEnablingStateResult(outcome.result()));
	else
		return UpdateDataDispatchEnablingStateOutcome(outcome.error());
}

void LinkWANClient::updateDataDispatchEnablingStateAsync(const UpdateDataDispatchEnablingStateRequest& request, const UpdateDataDispatchEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataDispatchEnablingState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateDataDispatchEnablingStateOutcomeCallable LinkWANClient::updateDataDispatchEnablingStateCallable(const UpdateDataDispatchEnablingStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataDispatchEnablingStateOutcome()>>(
			[this, request]()
			{
			return this->updateDataDispatchEnablingState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateGatewayOutcome LinkWANClient::updateGateway(const UpdateGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayOutcome(UpdateGatewayResult(outcome.result()));
	else
		return UpdateGatewayOutcome(outcome.error());
}

void LinkWANClient::updateGatewayAsync(const UpdateGatewayRequest& request, const UpdateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateGatewayOutcomeCallable LinkWANClient::updateGatewayCallable(const UpdateGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayOutcome()>>(
			[this, request]()
			{
			return this->updateGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateGatewayEnablingStateOutcome LinkWANClient::updateGatewayEnablingState(const UpdateGatewayEnablingStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayEnablingStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayEnablingStateOutcome(UpdateGatewayEnablingStateResult(outcome.result()));
	else
		return UpdateGatewayEnablingStateOutcome(outcome.error());
}

void LinkWANClient::updateGatewayEnablingStateAsync(const UpdateGatewayEnablingStateRequest& request, const UpdateGatewayEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayEnablingState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateGatewayEnablingStateOutcomeCallable LinkWANClient::updateGatewayEnablingStateCallable(const UpdateGatewayEnablingStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayEnablingStateOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayEnablingState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateGatewaySshCtrlOutcome LinkWANClient::updateGatewaySshCtrl(const UpdateGatewaySshCtrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewaySshCtrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewaySshCtrlOutcome(UpdateGatewaySshCtrlResult(outcome.result()));
	else
		return UpdateGatewaySshCtrlOutcome(outcome.error());
}

void LinkWANClient::updateGatewaySshCtrlAsync(const UpdateGatewaySshCtrlRequest& request, const UpdateGatewaySshCtrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewaySshCtrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateGatewaySshCtrlOutcomeCallable LinkWANClient::updateGatewaySshCtrlCallable(const UpdateGatewaySshCtrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewaySshCtrlOutcome()>>(
			[this, request]()
			{
			return this->updateGatewaySshCtrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateNodeEnablingStateOutcome LinkWANClient::updateNodeEnablingState(const UpdateNodeEnablingStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNodeEnablingStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNodeEnablingStateOutcome(UpdateNodeEnablingStateResult(outcome.result()));
	else
		return UpdateNodeEnablingStateOutcome(outcome.error());
}

void LinkWANClient::updateNodeEnablingStateAsync(const UpdateNodeEnablingStateRequest& request, const UpdateNodeEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNodeEnablingState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateNodeEnablingStateOutcomeCallable LinkWANClient::updateNodeEnablingStateCallable(const UpdateNodeEnablingStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNodeEnablingStateOutcome()>>(
			[this, request]()
			{
			return this->updateNodeEnablingState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateNodeGroupOutcome LinkWANClient::updateNodeGroup(const UpdateNodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNodeGroupOutcome(UpdateNodeGroupResult(outcome.result()));
	else
		return UpdateNodeGroupOutcome(outcome.error());
}

void LinkWANClient::updateNodeGroupAsync(const UpdateNodeGroupRequest& request, const UpdateNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateNodeGroupOutcomeCallable LinkWANClient::updateNodeGroupCallable(const UpdateNodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNodeGroupOutcome()>>(
			[this, request]()
			{
			return this->updateNodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateNotificationsHandleStateOutcome LinkWANClient::updateNotificationsHandleState(const UpdateNotificationsHandleStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNotificationsHandleStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNotificationsHandleStateOutcome(UpdateNotificationsHandleStateResult(outcome.result()));
	else
		return UpdateNotificationsHandleStateOutcome(outcome.error());
}

void LinkWANClient::updateNotificationsHandleStateAsync(const UpdateNotificationsHandleStateRequest& request, const UpdateNotificationsHandleStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNotificationsHandleState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateNotificationsHandleStateOutcomeCallable LinkWANClient::updateNotificationsHandleStateCallable(const UpdateNotificationsHandleStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNotificationsHandleStateOutcome()>>(
			[this, request]()
			{
			return this->updateNotificationsHandleState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateOwnedLocalJoinPermissionOutcome LinkWANClient::updateOwnedLocalJoinPermission(const UpdateOwnedLocalJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOwnedLocalJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOwnedLocalJoinPermissionOutcome(UpdateOwnedLocalJoinPermissionResult(outcome.result()));
	else
		return UpdateOwnedLocalJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::updateOwnedLocalJoinPermissionAsync(const UpdateOwnedLocalJoinPermissionRequest& request, const UpdateOwnedLocalJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOwnedLocalJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateOwnedLocalJoinPermissionOutcomeCallable LinkWANClient::updateOwnedLocalJoinPermissionCallable(const UpdateOwnedLocalJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOwnedLocalJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->updateOwnedLocalJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateOwnedLocalJoinPermissionEnablingStateOutcome LinkWANClient::updateOwnedLocalJoinPermissionEnablingState(const UpdateOwnedLocalJoinPermissionEnablingStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateOwnedLocalJoinPermissionEnablingStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateOwnedLocalJoinPermissionEnablingStateOutcome(UpdateOwnedLocalJoinPermissionEnablingStateResult(outcome.result()));
	else
		return UpdateOwnedLocalJoinPermissionEnablingStateOutcome(outcome.error());
}

void LinkWANClient::updateOwnedLocalJoinPermissionEnablingStateAsync(const UpdateOwnedLocalJoinPermissionEnablingStateRequest& request, const UpdateOwnedLocalJoinPermissionEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateOwnedLocalJoinPermissionEnablingState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateOwnedLocalJoinPermissionEnablingStateOutcomeCallable LinkWANClient::updateOwnedLocalJoinPermissionEnablingStateCallable(const UpdateOwnedLocalJoinPermissionEnablingStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateOwnedLocalJoinPermissionEnablingStateOutcome()>>(
			[this, request]()
			{
			return this->updateOwnedLocalJoinPermissionEnablingState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateRoamingJoinPermissionOutcome LinkWANClient::updateRoamingJoinPermission(const UpdateRoamingJoinPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRoamingJoinPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRoamingJoinPermissionOutcome(UpdateRoamingJoinPermissionResult(outcome.result()));
	else
		return UpdateRoamingJoinPermissionOutcome(outcome.error());
}

void LinkWANClient::updateRoamingJoinPermissionAsync(const UpdateRoamingJoinPermissionRequest& request, const UpdateRoamingJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRoamingJoinPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateRoamingJoinPermissionOutcomeCallable LinkWANClient::updateRoamingJoinPermissionCallable(const UpdateRoamingJoinPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRoamingJoinPermissionOutcome()>>(
			[this, request]()
			{
			return this->updateRoamingJoinPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateRoamingJoinPermissionEnablingStateOutcome LinkWANClient::updateRoamingJoinPermissionEnablingState(const UpdateRoamingJoinPermissionEnablingStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRoamingJoinPermissionEnablingStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRoamingJoinPermissionEnablingStateOutcome(UpdateRoamingJoinPermissionEnablingStateResult(outcome.result()));
	else
		return UpdateRoamingJoinPermissionEnablingStateOutcome(outcome.error());
}

void LinkWANClient::updateRoamingJoinPermissionEnablingStateAsync(const UpdateRoamingJoinPermissionEnablingStateRequest& request, const UpdateRoamingJoinPermissionEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRoamingJoinPermissionEnablingState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateRoamingJoinPermissionEnablingStateOutcomeCallable LinkWANClient::updateRoamingJoinPermissionEnablingStateCallable(const UpdateRoamingJoinPermissionEnablingStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRoamingJoinPermissionEnablingStateOutcome()>>(
			[this, request]()
			{
			return this->updateRoamingJoinPermissionEnablingState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkWANClient::UpdateUserIsolationStateOutcome LinkWANClient::updateUserIsolationState(const UpdateUserIsolationStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserIsolationStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserIsolationStateOutcome(UpdateUserIsolationStateResult(outcome.result()));
	else
		return UpdateUserIsolationStateOutcome(outcome.error());
}

void LinkWANClient::updateUserIsolationStateAsync(const UpdateUserIsolationStateRequest& request, const UpdateUserIsolationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserIsolationState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkWANClient::UpdateUserIsolationStateOutcomeCallable LinkWANClient::updateUserIsolationStateCallable(const UpdateUserIsolationStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserIsolationStateOutcome()>>(
			[this, request]()
			{
			return this->updateUserIsolationState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

