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

#include <alibabacloud/smarthosting/SmartHostingClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::SmartHosting;
using namespace AlibabaCloud::SmartHosting::Model;

namespace
{
	const std::string SERVICE_NAME = "SmartHosting";
}

SmartHostingClient::SmartHostingClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SmartHosting");
}

SmartHostingClient::SmartHostingClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SmartHosting");
}

SmartHostingClient::SmartHostingClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "SmartHosting");
}

SmartHostingClient::~SmartHostingClient()
{}

SmartHostingClient::ListManagedHostsOutcome SmartHostingClient::listManagedHosts(const ListManagedHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListManagedHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListManagedHostsOutcome(ListManagedHostsResult(outcome.result()));
	else
		return ListManagedHostsOutcome(outcome.error());
}

void SmartHostingClient::listManagedHostsAsync(const ListManagedHostsRequest& request, const ListManagedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listManagedHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartHostingClient::ListManagedHostsOutcomeCallable SmartHostingClient::listManagedHostsCallable(const ListManagedHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListManagedHostsOutcome()>>(
			[this, request]()
			{
			return this->listManagedHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartHostingClient::ListManagedPrivateSpacesOutcome SmartHostingClient::listManagedPrivateSpaces(const ListManagedPrivateSpacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListManagedPrivateSpacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListManagedPrivateSpacesOutcome(ListManagedPrivateSpacesResult(outcome.result()));
	else
		return ListManagedPrivateSpacesOutcome(outcome.error());
}

void SmartHostingClient::listManagedPrivateSpacesAsync(const ListManagedPrivateSpacesRequest& request, const ListManagedPrivateSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listManagedPrivateSpaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartHostingClient::ListManagedPrivateSpacesOutcomeCallable SmartHostingClient::listManagedPrivateSpacesCallable(const ListManagedPrivateSpacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListManagedPrivateSpacesOutcome()>>(
			[this, request]()
			{
			return this->listManagedPrivateSpaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartHostingClient::ListManagedRacksOutcome SmartHostingClient::listManagedRacks(const ListManagedRacksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListManagedRacksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListManagedRacksOutcome(ListManagedRacksResult(outcome.result()));
	else
		return ListManagedRacksOutcome(outcome.error());
}

void SmartHostingClient::listManagedRacksAsync(const ListManagedRacksRequest& request, const ListManagedRacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listManagedRacks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartHostingClient::ListManagedRacksOutcomeCallable SmartHostingClient::listManagedRacksCallable(const ListManagedRacksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListManagedRacksOutcome()>>(
			[this, request]()
			{
			return this->listManagedRacks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartHostingClient::UpdateManagedHostAttributesOutcome SmartHostingClient::updateManagedHostAttributes(const UpdateManagedHostAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateManagedHostAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateManagedHostAttributesOutcome(UpdateManagedHostAttributesResult(outcome.result()));
	else
		return UpdateManagedHostAttributesOutcome(outcome.error());
}

void SmartHostingClient::updateManagedHostAttributesAsync(const UpdateManagedHostAttributesRequest& request, const UpdateManagedHostAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateManagedHostAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartHostingClient::UpdateManagedHostAttributesOutcomeCallable SmartHostingClient::updateManagedHostAttributesCallable(const UpdateManagedHostAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateManagedHostAttributesOutcome()>>(
			[this, request]()
			{
			return this->updateManagedHostAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

