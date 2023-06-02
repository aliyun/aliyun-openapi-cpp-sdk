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

#include <alibabacloud/resourcecenter/ResourceCenterClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

namespace
{
	const std::string SERVICE_NAME = "ResourceCenter";
}

ResourceCenterClient::ResourceCenterClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ResourceCenterClient::ResourceCenterClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ResourceCenterClient::ResourceCenterClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ResourceCenterClient::~ResourceCenterClient()
{}

ResourceCenterClient::DisableMultiAccountResourceCenterOutcome ResourceCenterClient::disableMultiAccountResourceCenter(const DisableMultiAccountResourceCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableMultiAccountResourceCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableMultiAccountResourceCenterOutcome(DisableMultiAccountResourceCenterResult(outcome.result()));
	else
		return DisableMultiAccountResourceCenterOutcome(outcome.error());
}

void ResourceCenterClient::disableMultiAccountResourceCenterAsync(const DisableMultiAccountResourceCenterRequest& request, const DisableMultiAccountResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableMultiAccountResourceCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::DisableMultiAccountResourceCenterOutcomeCallable ResourceCenterClient::disableMultiAccountResourceCenterCallable(const DisableMultiAccountResourceCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableMultiAccountResourceCenterOutcome()>>(
			[this, request]()
			{
			return this->disableMultiAccountResourceCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::DisableResourceCenterOutcome ResourceCenterClient::disableResourceCenter(const DisableResourceCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableResourceCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableResourceCenterOutcome(DisableResourceCenterResult(outcome.result()));
	else
		return DisableResourceCenterOutcome(outcome.error());
}

void ResourceCenterClient::disableResourceCenterAsync(const DisableResourceCenterRequest& request, const DisableResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableResourceCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::DisableResourceCenterOutcomeCallable ResourceCenterClient::disableResourceCenterCallable(const DisableResourceCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableResourceCenterOutcome()>>(
			[this, request]()
			{
			return this->disableResourceCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::EnableMultiAccountResourceCenterOutcome ResourceCenterClient::enableMultiAccountResourceCenter(const EnableMultiAccountResourceCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableMultiAccountResourceCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableMultiAccountResourceCenterOutcome(EnableMultiAccountResourceCenterResult(outcome.result()));
	else
		return EnableMultiAccountResourceCenterOutcome(outcome.error());
}

void ResourceCenterClient::enableMultiAccountResourceCenterAsync(const EnableMultiAccountResourceCenterRequest& request, const EnableMultiAccountResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableMultiAccountResourceCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::EnableMultiAccountResourceCenterOutcomeCallable ResourceCenterClient::enableMultiAccountResourceCenterCallable(const EnableMultiAccountResourceCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableMultiAccountResourceCenterOutcome()>>(
			[this, request]()
			{
			return this->enableMultiAccountResourceCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::EnableResourceCenterOutcome ResourceCenterClient::enableResourceCenter(const EnableResourceCenterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableResourceCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableResourceCenterOutcome(EnableResourceCenterResult(outcome.result()));
	else
		return EnableResourceCenterOutcome(outcome.error());
}

void ResourceCenterClient::enableResourceCenterAsync(const EnableResourceCenterRequest& request, const EnableResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableResourceCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::EnableResourceCenterOutcomeCallable ResourceCenterClient::enableResourceCenterCallable(const EnableResourceCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableResourceCenterOutcome()>>(
			[this, request]()
			{
			return this->enableResourceCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetMultiAccountResourceCenterServiceStatusOutcome ResourceCenterClient::getMultiAccountResourceCenterServiceStatus(const GetMultiAccountResourceCenterServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMultiAccountResourceCenterServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMultiAccountResourceCenterServiceStatusOutcome(GetMultiAccountResourceCenterServiceStatusResult(outcome.result()));
	else
		return GetMultiAccountResourceCenterServiceStatusOutcome(outcome.error());
}

void ResourceCenterClient::getMultiAccountResourceCenterServiceStatusAsync(const GetMultiAccountResourceCenterServiceStatusRequest& request, const GetMultiAccountResourceCenterServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMultiAccountResourceCenterServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetMultiAccountResourceCenterServiceStatusOutcomeCallable ResourceCenterClient::getMultiAccountResourceCenterServiceStatusCallable(const GetMultiAccountResourceCenterServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMultiAccountResourceCenterServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->getMultiAccountResourceCenterServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetMultiAccountResourceConfigurationOutcome ResourceCenterClient::getMultiAccountResourceConfiguration(const GetMultiAccountResourceConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMultiAccountResourceConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMultiAccountResourceConfigurationOutcome(GetMultiAccountResourceConfigurationResult(outcome.result()));
	else
		return GetMultiAccountResourceConfigurationOutcome(outcome.error());
}

void ResourceCenterClient::getMultiAccountResourceConfigurationAsync(const GetMultiAccountResourceConfigurationRequest& request, const GetMultiAccountResourceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMultiAccountResourceConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetMultiAccountResourceConfigurationOutcomeCallable ResourceCenterClient::getMultiAccountResourceConfigurationCallable(const GetMultiAccountResourceConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMultiAccountResourceConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getMultiAccountResourceConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetResourceCenterServiceStatusOutcome ResourceCenterClient::getResourceCenterServiceStatus(const GetResourceCenterServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceCenterServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceCenterServiceStatusOutcome(GetResourceCenterServiceStatusResult(outcome.result()));
	else
		return GetResourceCenterServiceStatusOutcome(outcome.error());
}

void ResourceCenterClient::getResourceCenterServiceStatusAsync(const GetResourceCenterServiceStatusRequest& request, const GetResourceCenterServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceCenterServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetResourceCenterServiceStatusOutcomeCallable ResourceCenterClient::getResourceCenterServiceStatusCallable(const GetResourceCenterServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceCenterServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->getResourceCenterServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetResourceConfigurationOutcome ResourceCenterClient::getResourceConfiguration(const GetResourceConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceConfigurationOutcome(GetResourceConfigurationResult(outcome.result()));
	else
		return GetResourceConfigurationOutcome(outcome.error());
}

void ResourceCenterClient::getResourceConfigurationAsync(const GetResourceConfigurationRequest& request, const GetResourceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetResourceConfigurationOutcomeCallable ResourceCenterClient::getResourceConfigurationCallable(const GetResourceConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getResourceConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::GetResourceCountsOutcome ResourceCenterClient::getResourceCounts(const GetResourceCountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResourceCountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResourceCountsOutcome(GetResourceCountsResult(outcome.result()));
	else
		return GetResourceCountsOutcome(outcome.error());
}

void ResourceCenterClient::getResourceCountsAsync(const GetResourceCountsRequest& request, const GetResourceCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResourceCounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::GetResourceCountsOutcomeCallable ResourceCenterClient::getResourceCountsCallable(const GetResourceCountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResourceCountsOutcome()>>(
			[this, request]()
			{
			return this->getResourceCounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListMultiAccountResourceGroupsOutcome ResourceCenterClient::listMultiAccountResourceGroups(const ListMultiAccountResourceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiAccountResourceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiAccountResourceGroupsOutcome(ListMultiAccountResourceGroupsResult(outcome.result()));
	else
		return ListMultiAccountResourceGroupsOutcome(outcome.error());
}

void ResourceCenterClient::listMultiAccountResourceGroupsAsync(const ListMultiAccountResourceGroupsRequest& request, const ListMultiAccountResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiAccountResourceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListMultiAccountResourceGroupsOutcomeCallable ResourceCenterClient::listMultiAccountResourceGroupsCallable(const ListMultiAccountResourceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiAccountResourceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listMultiAccountResourceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListMultiAccountTagKeysOutcome ResourceCenterClient::listMultiAccountTagKeys(const ListMultiAccountTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiAccountTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiAccountTagKeysOutcome(ListMultiAccountTagKeysResult(outcome.result()));
	else
		return ListMultiAccountTagKeysOutcome(outcome.error());
}

void ResourceCenterClient::listMultiAccountTagKeysAsync(const ListMultiAccountTagKeysRequest& request, const ListMultiAccountTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiAccountTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListMultiAccountTagKeysOutcomeCallable ResourceCenterClient::listMultiAccountTagKeysCallable(const ListMultiAccountTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiAccountTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listMultiAccountTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListMultiAccountTagValuesOutcome ResourceCenterClient::listMultiAccountTagValues(const ListMultiAccountTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiAccountTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiAccountTagValuesOutcome(ListMultiAccountTagValuesResult(outcome.result()));
	else
		return ListMultiAccountTagValuesOutcome(outcome.error());
}

void ResourceCenterClient::listMultiAccountTagValuesAsync(const ListMultiAccountTagValuesRequest& request, const ListMultiAccountTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiAccountTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListMultiAccountTagValuesOutcomeCallable ResourceCenterClient::listMultiAccountTagValuesCallable(const ListMultiAccountTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiAccountTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listMultiAccountTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListResourceTypesOutcome ResourceCenterClient::listResourceTypes(const ListResourceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceTypesOutcome(ListResourceTypesResult(outcome.result()));
	else
		return ListResourceTypesOutcome(outcome.error());
}

void ResourceCenterClient::listResourceTypesAsync(const ListResourceTypesRequest& request, const ListResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListResourceTypesOutcomeCallable ResourceCenterClient::listResourceTypesCallable(const ListResourceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceTypesOutcome()>>(
			[this, request]()
			{
			return this->listResourceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListTagKeysOutcome ResourceCenterClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void ResourceCenterClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListTagKeysOutcomeCallable ResourceCenterClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::ListTagValuesOutcome ResourceCenterClient::listTagValues(const ListTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagValuesOutcome(ListTagValuesResult(outcome.result()));
	else
		return ListTagValuesOutcome(outcome.error());
}

void ResourceCenterClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::ListTagValuesOutcomeCallable ResourceCenterClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::SearchMultiAccountResourcesOutcome ResourceCenterClient::searchMultiAccountResources(const SearchMultiAccountResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMultiAccountResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMultiAccountResourcesOutcome(SearchMultiAccountResourcesResult(outcome.result()));
	else
		return SearchMultiAccountResourcesOutcome(outcome.error());
}

void ResourceCenterClient::searchMultiAccountResourcesAsync(const SearchMultiAccountResourcesRequest& request, const SearchMultiAccountResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMultiAccountResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::SearchMultiAccountResourcesOutcomeCallable ResourceCenterClient::searchMultiAccountResourcesCallable(const SearchMultiAccountResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMultiAccountResourcesOutcome()>>(
			[this, request]()
			{
			return this->searchMultiAccountResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ResourceCenterClient::SearchResourcesOutcome ResourceCenterClient::searchResources(const SearchResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchResourcesOutcome(SearchResourcesResult(outcome.result()));
	else
		return SearchResourcesOutcome(outcome.error());
}

void ResourceCenterClient::searchResourcesAsync(const SearchResourcesRequest& request, const SearchResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ResourceCenterClient::SearchResourcesOutcomeCallable ResourceCenterClient::searchResourcesCallable(const SearchResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchResourcesOutcome()>>(
			[this, request]()
			{
			return this->searchResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

