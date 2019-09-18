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

#include <alibabacloud/teslamaxcompute/TeslaMaxComputeClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

namespace
{
	const std::string SERVICE_NAME = "TeslaMaxCompute";
}

TeslaMaxComputeClient::TeslaMaxComputeClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "teslamaxcompute");
}

TeslaMaxComputeClient::TeslaMaxComputeClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "teslamaxcompute");
}

TeslaMaxComputeClient::TeslaMaxComputeClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "teslamaxcompute");
}

TeslaMaxComputeClient::~TeslaMaxComputeClient()
{}

TeslaMaxComputeClient::GetClusterInstanceOutcome TeslaMaxComputeClient::getClusterInstance(const GetClusterInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterInstanceOutcome(GetClusterInstanceResult(outcome.result()));
	else
		return GetClusterInstanceOutcome(outcome.error());
}

void TeslaMaxComputeClient::getClusterInstanceAsync(const GetClusterInstanceRequest& request, const GetClusterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::GetClusterInstanceOutcomeCallable TeslaMaxComputeClient::getClusterInstanceCallable(const GetClusterInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterInstanceOutcome()>>(
			[this, request]()
			{
			return this->getClusterInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::GetInstancesStatusCountOutcome TeslaMaxComputeClient::getInstancesStatusCount(const GetInstancesStatusCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstancesStatusCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstancesStatusCountOutcome(GetInstancesStatusCountResult(outcome.result()));
	else
		return GetInstancesStatusCountOutcome(outcome.error());
}

void TeslaMaxComputeClient::getInstancesStatusCountAsync(const GetInstancesStatusCountRequest& request, const GetInstancesStatusCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstancesStatusCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::GetInstancesStatusCountOutcomeCallable TeslaMaxComputeClient::getInstancesStatusCountCallable(const GetInstancesStatusCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstancesStatusCountOutcome()>>(
			[this, request]()
			{
			return this->getInstancesStatusCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::GetProjectInstanceOutcome TeslaMaxComputeClient::getProjectInstance(const GetProjectInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectInstanceOutcome(GetProjectInstanceResult(outcome.result()));
	else
		return GetProjectInstanceOutcome(outcome.error());
}

void TeslaMaxComputeClient::getProjectInstanceAsync(const GetProjectInstanceRequest& request, const GetProjectInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::GetProjectInstanceOutcomeCallable TeslaMaxComputeClient::getProjectInstanceCallable(const GetProjectInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectInstanceOutcome()>>(
			[this, request]()
			{
			return this->getProjectInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::GetQuotaHistoryInfoOutcome TeslaMaxComputeClient::getQuotaHistoryInfo(const GetQuotaHistoryInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQuotaHistoryInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQuotaHistoryInfoOutcome(GetQuotaHistoryInfoResult(outcome.result()));
	else
		return GetQuotaHistoryInfoOutcome(outcome.error());
}

void TeslaMaxComputeClient::getQuotaHistoryInfoAsync(const GetQuotaHistoryInfoRequest& request, const GetQuotaHistoryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQuotaHistoryInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::GetQuotaHistoryInfoOutcomeCallable TeslaMaxComputeClient::getQuotaHistoryInfoCallable(const GetQuotaHistoryInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQuotaHistoryInfoOutcome()>>(
			[this, request]()
			{
			return this->getQuotaHistoryInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::GetQuotaInstanceOutcome TeslaMaxComputeClient::getQuotaInstance(const GetQuotaInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQuotaInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQuotaInstanceOutcome(GetQuotaInstanceResult(outcome.result()));
	else
		return GetQuotaInstanceOutcome(outcome.error());
}

void TeslaMaxComputeClient::getQuotaInstanceAsync(const GetQuotaInstanceRequest& request, const GetQuotaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQuotaInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::GetQuotaInstanceOutcomeCallable TeslaMaxComputeClient::getQuotaInstanceCallable(const GetQuotaInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQuotaInstanceOutcome()>>(
			[this, request]()
			{
			return this->getQuotaInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::GetUserInstanceOutcome TeslaMaxComputeClient::getUserInstance(const GetUserInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserInstanceOutcome(GetUserInstanceResult(outcome.result()));
	else
		return GetUserInstanceOutcome(outcome.error());
}

void TeslaMaxComputeClient::getUserInstanceAsync(const GetUserInstanceRequest& request, const GetUserInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::GetUserInstanceOutcomeCallable TeslaMaxComputeClient::getUserInstanceCallable(const GetUserInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserInstanceOutcome()>>(
			[this, request]()
			{
			return this->getUserInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::ListUserQuotasOutcome TeslaMaxComputeClient::listUserQuotas(const ListUserQuotasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserQuotasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserQuotasOutcome(ListUserQuotasResult(outcome.result()));
	else
		return ListUserQuotasOutcome(outcome.error());
}

void TeslaMaxComputeClient::listUserQuotasAsync(const ListUserQuotasRequest& request, const ListUserQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserQuotas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::ListUserQuotasOutcomeCallable TeslaMaxComputeClient::listUserQuotasCallable(const ListUserQuotasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserQuotasOutcome()>>(
			[this, request]()
			{
			return this->listUserQuotas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::QueryCustomerSaleInfoOutcome TeslaMaxComputeClient::queryCustomerSaleInfo(const QueryCustomerSaleInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCustomerSaleInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCustomerSaleInfoOutcome(QueryCustomerSaleInfoResult(outcome.result()));
	else
		return QueryCustomerSaleInfoOutcome(outcome.error());
}

void TeslaMaxComputeClient::queryCustomerSaleInfoAsync(const QueryCustomerSaleInfoRequest& request, const QueryCustomerSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCustomerSaleInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::QueryCustomerSaleInfoOutcomeCallable TeslaMaxComputeClient::queryCustomerSaleInfoCallable(const QueryCustomerSaleInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCustomerSaleInfoOutcome()>>(
			[this, request]()
			{
			return this->queryCustomerSaleInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::QueryResourceInventoryOutcome TeslaMaxComputeClient::queryResourceInventory(const QueryResourceInventoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryResourceInventoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryResourceInventoryOutcome(QueryResourceInventoryResult(outcome.result()));
	else
		return QueryResourceInventoryOutcome(outcome.error());
}

void TeslaMaxComputeClient::queryResourceInventoryAsync(const QueryResourceInventoryRequest& request, const QueryResourceInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryResourceInventory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::QueryResourceInventoryOutcomeCallable TeslaMaxComputeClient::queryResourceInventoryCallable(const QueryResourceInventoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryResourceInventoryOutcome()>>(
			[this, request]()
			{
			return this->queryResourceInventory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TeslaMaxComputeClient::QueryTopologyOutcome TeslaMaxComputeClient::queryTopology(const QueryTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTopologyOutcome(QueryTopologyResult(outcome.result()));
	else
		return QueryTopologyOutcome(outcome.error());
}

void TeslaMaxComputeClient::queryTopologyAsync(const QueryTopologyRequest& request, const QueryTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TeslaMaxComputeClient::QueryTopologyOutcomeCallable TeslaMaxComputeClient::queryTopologyCallable(const QueryTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTopologyOutcome()>>(
			[this, request]()
			{
			return this->queryTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

