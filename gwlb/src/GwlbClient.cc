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

#include <alibabacloud/gwlb/GwlbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Gwlb;
using namespace AlibabaCloud::Gwlb::Model;

namespace
{
	const std::string SERVICE_NAME = "Gwlb";
}

GwlbClient::GwlbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "gwlb");
}

GwlbClient::GwlbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "gwlb");
}

GwlbClient::GwlbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "gwlb");
}

GwlbClient::~GwlbClient()
{}

GwlbClient::AddServersToServerGroupOutcome GwlbClient::addServersToServerGroup(const AddServersToServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddServersToServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddServersToServerGroupOutcome(AddServersToServerGroupResult(outcome.result()));
	else
		return AddServersToServerGroupOutcome(outcome.error());
}

void GwlbClient::addServersToServerGroupAsync(const AddServersToServerGroupRequest& request, const AddServersToServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addServersToServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::AddServersToServerGroupOutcomeCallable GwlbClient::addServersToServerGroupCallable(const AddServersToServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddServersToServerGroupOutcome()>>(
			[this, request]()
			{
			return this->addServersToServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::CreateListenerOutcome GwlbClient::createListener(const CreateListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateListenerOutcome(CreateListenerResult(outcome.result()));
	else
		return CreateListenerOutcome(outcome.error());
}

void GwlbClient::createListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::CreateListenerOutcomeCallable GwlbClient::createListenerCallable(const CreateListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateListenerOutcome()>>(
			[this, request]()
			{
			return this->createListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::CreateLoadBalancerOutcome GwlbClient::createLoadBalancer(const CreateLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLoadBalancerOutcome(CreateLoadBalancerResult(outcome.result()));
	else
		return CreateLoadBalancerOutcome(outcome.error());
}

void GwlbClient::createLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::CreateLoadBalancerOutcomeCallable GwlbClient::createLoadBalancerCallable(const CreateLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->createLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::CreateServerGroupOutcome GwlbClient::createServerGroup(const CreateServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServerGroupOutcome(CreateServerGroupResult(outcome.result()));
	else
		return CreateServerGroupOutcome(outcome.error());
}

void GwlbClient::createServerGroupAsync(const CreateServerGroupRequest& request, const CreateServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::CreateServerGroupOutcomeCallable GwlbClient::createServerGroupCallable(const CreateServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServerGroupOutcome()>>(
			[this, request]()
			{
			return this->createServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::DeleteListenerOutcome GwlbClient::deleteListener(const DeleteListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteListenerOutcome(DeleteListenerResult(outcome.result()));
	else
		return DeleteListenerOutcome(outcome.error());
}

void GwlbClient::deleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::DeleteListenerOutcomeCallable GwlbClient::deleteListenerCallable(const DeleteListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteListenerOutcome()>>(
			[this, request]()
			{
			return this->deleteListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::DeleteLoadBalancerOutcome GwlbClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoadBalancerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoadBalancerOutcome(DeleteLoadBalancerResult(outcome.result()));
	else
		return DeleteLoadBalancerOutcome(outcome.error());
}

void GwlbClient::deleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoadBalancer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::DeleteLoadBalancerOutcomeCallable GwlbClient::deleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
			[this, request]()
			{
			return this->deleteLoadBalancer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::DeleteServerGroupOutcome GwlbClient::deleteServerGroup(const DeleteServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServerGroupOutcome(DeleteServerGroupResult(outcome.result()));
	else
		return DeleteServerGroupOutcome(outcome.error());
}

void GwlbClient::deleteServerGroupAsync(const DeleteServerGroupRequest& request, const DeleteServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::DeleteServerGroupOutcomeCallable GwlbClient::deleteServerGroupCallable(const DeleteServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServerGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::DescribeRegionsOutcome GwlbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void GwlbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::DescribeRegionsOutcomeCallable GwlbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::DescribeZonesOutcome GwlbClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void GwlbClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::DescribeZonesOutcomeCallable GwlbClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::GetListenerAttributeOutcome GwlbClient::getListenerAttribute(const GetListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetListenerAttributeOutcome(GetListenerAttributeResult(outcome.result()));
	else
		return GetListenerAttributeOutcome(outcome.error());
}

void GwlbClient::getListenerAttributeAsync(const GetListenerAttributeRequest& request, const GetListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::GetListenerAttributeOutcomeCallable GwlbClient::getListenerAttributeCallable(const GetListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->getListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::GetListenerHealthStatusOutcome GwlbClient::getListenerHealthStatus(const GetListenerHealthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetListenerHealthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetListenerHealthStatusOutcome(GetListenerHealthStatusResult(outcome.result()));
	else
		return GetListenerHealthStatusOutcome(outcome.error());
}

void GwlbClient::getListenerHealthStatusAsync(const GetListenerHealthStatusRequest& request, const GetListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getListenerHealthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::GetListenerHealthStatusOutcomeCallable GwlbClient::getListenerHealthStatusCallable(const GetListenerHealthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetListenerHealthStatusOutcome()>>(
			[this, request]()
			{
			return this->getListenerHealthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::GetLoadBalancerAttributeOutcome GwlbClient::getLoadBalancerAttribute(const GetLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoadBalancerAttributeOutcome(GetLoadBalancerAttributeResult(outcome.result()));
	else
		return GetLoadBalancerAttributeOutcome(outcome.error());
}

void GwlbClient::getLoadBalancerAttributeAsync(const GetLoadBalancerAttributeRequest& request, const GetLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::GetLoadBalancerAttributeOutcomeCallable GwlbClient::getLoadBalancerAttributeCallable(const GetLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->getLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::ListListenersOutcome GwlbClient::listListeners(const ListListenersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListListenersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListListenersOutcome(ListListenersResult(outcome.result()));
	else
		return ListListenersOutcome(outcome.error());
}

void GwlbClient::listListenersAsync(const ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listListeners(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::ListListenersOutcomeCallable GwlbClient::listListenersCallable(const ListListenersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListListenersOutcome()>>(
			[this, request]()
			{
			return this->listListeners(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::ListLoadBalancersOutcome GwlbClient::listLoadBalancers(const ListLoadBalancersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLoadBalancersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLoadBalancersOutcome(ListLoadBalancersResult(outcome.result()));
	else
		return ListLoadBalancersOutcome(outcome.error());
}

void GwlbClient::listLoadBalancersAsync(const ListLoadBalancersRequest& request, const ListLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLoadBalancers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::ListLoadBalancersOutcomeCallable GwlbClient::listLoadBalancersCallable(const ListLoadBalancersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLoadBalancersOutcome()>>(
			[this, request]()
			{
			return this->listLoadBalancers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::ListServerGroupServersOutcome GwlbClient::listServerGroupServers(const ListServerGroupServersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServerGroupServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServerGroupServersOutcome(ListServerGroupServersResult(outcome.result()));
	else
		return ListServerGroupServersOutcome(outcome.error());
}

void GwlbClient::listServerGroupServersAsync(const ListServerGroupServersRequest& request, const ListServerGroupServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServerGroupServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::ListServerGroupServersOutcomeCallable GwlbClient::listServerGroupServersCallable(const ListServerGroupServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServerGroupServersOutcome()>>(
			[this, request]()
			{
			return this->listServerGroupServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::ListServerGroupsOutcome GwlbClient::listServerGroups(const ListServerGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServerGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServerGroupsOutcome(ListServerGroupsResult(outcome.result()));
	else
		return ListServerGroupsOutcome(outcome.error());
}

void GwlbClient::listServerGroupsAsync(const ListServerGroupsRequest& request, const ListServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServerGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::ListServerGroupsOutcomeCallable GwlbClient::listServerGroupsCallable(const ListServerGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServerGroupsOutcome()>>(
			[this, request]()
			{
			return this->listServerGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::ListTagResourcesOutcome GwlbClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void GwlbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::ListTagResourcesOutcomeCallable GwlbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::MoveResourceGroupOutcome GwlbClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveResourceGroupOutcome(MoveResourceGroupResult(outcome.result()));
	else
		return MoveResourceGroupOutcome(outcome.error());
}

void GwlbClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::MoveResourceGroupOutcomeCallable GwlbClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::RemoveServersFromServerGroupOutcome GwlbClient::removeServersFromServerGroup(const RemoveServersFromServerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveServersFromServerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveServersFromServerGroupOutcome(RemoveServersFromServerGroupResult(outcome.result()));
	else
		return RemoveServersFromServerGroupOutcome(outcome.error());
}

void GwlbClient::removeServersFromServerGroupAsync(const RemoveServersFromServerGroupRequest& request, const RemoveServersFromServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeServersFromServerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::RemoveServersFromServerGroupOutcomeCallable GwlbClient::removeServersFromServerGroupCallable(const RemoveServersFromServerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveServersFromServerGroupOutcome()>>(
			[this, request]()
			{
			return this->removeServersFromServerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::TagResourcesOutcome GwlbClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void GwlbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::TagResourcesOutcomeCallable GwlbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::UntagResourcesOutcome GwlbClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void GwlbClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::UntagResourcesOutcomeCallable GwlbClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::UpdateListenerAttributeOutcome GwlbClient::updateListenerAttribute(const UpdateListenerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateListenerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateListenerAttributeOutcome(UpdateListenerAttributeResult(outcome.result()));
	else
		return UpdateListenerAttributeOutcome(outcome.error());
}

void GwlbClient::updateListenerAttributeAsync(const UpdateListenerAttributeRequest& request, const UpdateListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateListenerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::UpdateListenerAttributeOutcomeCallable GwlbClient::updateListenerAttributeCallable(const UpdateListenerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateListenerAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateListenerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::UpdateLoadBalancerAttributeOutcome GwlbClient::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerAttributeOutcome(UpdateLoadBalancerAttributeResult(outcome.result()));
	else
		return UpdateLoadBalancerAttributeOutcome(outcome.error());
}

void GwlbClient::updateLoadBalancerAttributeAsync(const UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::UpdateLoadBalancerAttributeOutcomeCallable GwlbClient::updateLoadBalancerAttributeCallable(const UpdateLoadBalancerAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::UpdateLoadBalancerZonesOutcome GwlbClient::updateLoadBalancerZones(const UpdateLoadBalancerZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLoadBalancerZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLoadBalancerZonesOutcome(UpdateLoadBalancerZonesResult(outcome.result()));
	else
		return UpdateLoadBalancerZonesOutcome(outcome.error());
}

void GwlbClient::updateLoadBalancerZonesAsync(const UpdateLoadBalancerZonesRequest& request, const UpdateLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLoadBalancerZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::UpdateLoadBalancerZonesOutcomeCallable GwlbClient::updateLoadBalancerZonesCallable(const UpdateLoadBalancerZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLoadBalancerZonesOutcome()>>(
			[this, request]()
			{
			return this->updateLoadBalancerZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GwlbClient::UpdateServerGroupAttributeOutcome GwlbClient::updateServerGroupAttribute(const UpdateServerGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateServerGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateServerGroupAttributeOutcome(UpdateServerGroupAttributeResult(outcome.result()));
	else
		return UpdateServerGroupAttributeOutcome(outcome.error());
}

void GwlbClient::updateServerGroupAttributeAsync(const UpdateServerGroupAttributeRequest& request, const UpdateServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateServerGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GwlbClient::UpdateServerGroupAttributeOutcomeCallable GwlbClient::updateServerGroupAttributeCallable(const UpdateServerGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateServerGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateServerGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

