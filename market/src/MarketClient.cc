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

#include <alibabacloud/market/MarketClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

namespace
{
	const std::string SERVICE_NAME = "Market";
}

MarketClient::MarketClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "market");
}

MarketClient::MarketClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "market");
}

MarketClient::MarketClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "market");
}

MarketClient::~MarketClient()
{}

MarketClient::ActivateLicenseOutcome MarketClient::activateLicense(const ActivateLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateLicenseOutcome(ActivateLicenseResult(outcome.result()));
	else
		return ActivateLicenseOutcome(outcome.error());
}

void MarketClient::activateLicenseAsync(const ActivateLicenseRequest& request, const ActivateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::ActivateLicenseOutcomeCallable MarketClient::activateLicenseCallable(const ActivateLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateLicenseOutcome()>>(
			[this, request]()
			{
			return this->activateLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::BindImagePackageOutcome MarketClient::bindImagePackage(const BindImagePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindImagePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindImagePackageOutcome(BindImagePackageResult(outcome.result()));
	else
		return BindImagePackageOutcome(outcome.error());
}

void MarketClient::bindImagePackageAsync(const BindImagePackageRequest& request, const BindImagePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindImagePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::BindImagePackageOutcomeCallable MarketClient::bindImagePackageCallable(const BindImagePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindImagePackageOutcome()>>(
			[this, request]()
			{
			return this->bindImagePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::CreateCommodityOutcome MarketClient::createCommodity(const CreateCommodityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommodityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommodityOutcome(CreateCommodityResult(outcome.result()));
	else
		return CreateCommodityOutcome(outcome.error());
}

void MarketClient::createCommodityAsync(const CreateCommodityRequest& request, const CreateCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCommodity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::CreateCommodityOutcomeCallable MarketClient::createCommodityCallable(const CreateCommodityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommodityOutcome()>>(
			[this, request]()
			{
			return this->createCommodity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::CreateOrderOutcome MarketClient::createOrder(const CreateOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderOutcome(CreateOrderResult(outcome.result()));
	else
		return CreateOrderOutcome(outcome.error());
}

void MarketClient::createOrderAsync(const CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::CreateOrderOutcomeCallable MarketClient::createOrderCallable(const CreateOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderOutcome()>>(
			[this, request]()
			{
			return this->createOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::CreateRateOutcome MarketClient::createRate(const CreateRateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRateOutcome(CreateRateResult(outcome.result()));
	else
		return CreateRateOutcome(outcome.error());
}

void MarketClient::createRateAsync(const CreateRateRequest& request, const CreateRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::CreateRateOutcomeCallable MarketClient::createRateCallable(const CreateRateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRateOutcome()>>(
			[this, request]()
			{
			return this->createRate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DeleteCommodityOutcome MarketClient::deleteCommodity(const DeleteCommodityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCommodityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCommodityOutcome(DeleteCommodityResult(outcome.result()));
	else
		return DeleteCommodityOutcome(outcome.error());
}

void MarketClient::deleteCommodityAsync(const DeleteCommodityRequest& request, const DeleteCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCommodity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DeleteCommodityOutcomeCallable MarketClient::deleteCommodityCallable(const DeleteCommodityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCommodityOutcome()>>(
			[this, request]()
			{
			return this->deleteCommodity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeCommoditiesOutcome MarketClient::describeCommodities(const DescribeCommoditiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommoditiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommoditiesOutcome(DescribeCommoditiesResult(outcome.result()));
	else
		return DescribeCommoditiesOutcome(outcome.error());
}

void MarketClient::describeCommoditiesAsync(const DescribeCommoditiesRequest& request, const DescribeCommoditiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommodities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeCommoditiesOutcomeCallable MarketClient::describeCommoditiesCallable(const DescribeCommoditiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommoditiesOutcome()>>(
			[this, request]()
			{
			return this->describeCommodities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeCommodityOutcome MarketClient::describeCommodity(const DescribeCommodityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommodityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommodityOutcome(DescribeCommodityResult(outcome.result()));
	else
		return DescribeCommodityOutcome(outcome.error());
}

void MarketClient::describeCommodityAsync(const DescribeCommodityRequest& request, const DescribeCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommodity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeCommodityOutcomeCallable MarketClient::describeCommodityCallable(const DescribeCommodityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommodityOutcome()>>(
			[this, request]()
			{
			return this->describeCommodity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeInstanceOutcome MarketClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void MarketClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeInstanceOutcomeCallable MarketClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeInstancesOutcome MarketClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesOutcome(DescribeInstancesResult(outcome.result()));
	else
		return DescribeInstancesOutcome(outcome.error());
}

void MarketClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeInstancesOutcomeCallable MarketClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeLicenseOutcome MarketClient::describeLicense(const DescribeLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLicenseOutcome(DescribeLicenseResult(outcome.result()));
	else
		return DescribeLicenseOutcome(outcome.error());
}

void MarketClient::describeLicenseAsync(const DescribeLicenseRequest& request, const DescribeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeLicenseOutcomeCallable MarketClient::describeLicenseCallable(const DescribeLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLicenseOutcome()>>(
			[this, request]()
			{
			return this->describeLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeOrderOutcome MarketClient::describeOrder(const DescribeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderOutcome(DescribeOrderResult(outcome.result()));
	else
		return DescribeOrderOutcome(outcome.error());
}

void MarketClient::describeOrderAsync(const DescribeOrderRequest& request, const DescribeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeOrderOutcomeCallable MarketClient::describeOrderCallable(const DescribeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderOutcome()>>(
			[this, request]()
			{
			return this->describeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribePriceOutcome MarketClient::describePrice(const DescribePriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePriceOutcome(DescribePriceResult(outcome.result()));
	else
		return DescribePriceOutcome(outcome.error());
}

void MarketClient::describePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribePriceOutcomeCallable MarketClient::describePriceCallable(const DescribePriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePriceOutcome()>>(
			[this, request]()
			{
			return this->describePrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeProductOutcome MarketClient::describeProduct(const DescribeProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProductOutcome(DescribeProductResult(outcome.result()));
	else
		return DescribeProductOutcome(outcome.error());
}

void MarketClient::describeProductAsync(const DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeProductOutcomeCallable MarketClient::describeProductCallable(const DescribeProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProductOutcome()>>(
			[this, request]()
			{
			return this->describeProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeProductsOutcome MarketClient::describeProducts(const DescribeProductsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProductsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProductsOutcome(DescribeProductsResult(outcome.result()));
	else
		return DescribeProductsOutcome(outcome.error());
}

void MarketClient::describeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProducts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeProductsOutcomeCallable MarketClient::describeProductsCallable(const DescribeProductsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProductsOutcome()>>(
			[this, request]()
			{
			return this->describeProducts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeRateOutcome MarketClient::describeRate(const DescribeRateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRateOutcome(DescribeRateResult(outcome.result()));
	else
		return DescribeRateOutcome(outcome.error());
}

void MarketClient::describeRateAsync(const DescribeRateRequest& request, const DescribeRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeRateOutcomeCallable MarketClient::describeRateCallable(const DescribeRateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRateOutcome()>>(
			[this, request]()
			{
			return this->describeRate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::NotifyContractEventOutcome MarketClient::notifyContractEvent(const NotifyContractEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NotifyContractEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NotifyContractEventOutcome(NotifyContractEventResult(outcome.result()));
	else
		return NotifyContractEventOutcome(outcome.error());
}

void MarketClient::notifyContractEventAsync(const NotifyContractEventRequest& request, const NotifyContractEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, notifyContractEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::NotifyContractEventOutcomeCallable MarketClient::notifyContractEventCallable(const NotifyContractEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NotifyContractEventOutcome()>>(
			[this, request]()
			{
			return this->notifyContractEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::PushMeteringDataOutcome MarketClient::pushMeteringData(const PushMeteringDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushMeteringDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushMeteringDataOutcome(PushMeteringDataResult(outcome.result()));
	else
		return PushMeteringDataOutcome(outcome.error());
}

void MarketClient::pushMeteringDataAsync(const PushMeteringDataRequest& request, const PushMeteringDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushMeteringData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::PushMeteringDataOutcomeCallable MarketClient::pushMeteringDataCallable(const PushMeteringDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushMeteringDataOutcome()>>(
			[this, request]()
			{
			return this->pushMeteringData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::QueryMarketCategoriesOutcome MarketClient::queryMarketCategories(const QueryMarketCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMarketCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMarketCategoriesOutcome(QueryMarketCategoriesResult(outcome.result()));
	else
		return QueryMarketCategoriesOutcome(outcome.error());
}

void MarketClient::queryMarketCategoriesAsync(const QueryMarketCategoriesRequest& request, const QueryMarketCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMarketCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::QueryMarketCategoriesOutcomeCallable MarketClient::queryMarketCategoriesCallable(const QueryMarketCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMarketCategoriesOutcome()>>(
			[this, request]()
			{
			return this->queryMarketCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::QueryMarketImagesOutcome MarketClient::queryMarketImages(const QueryMarketImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMarketImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMarketImagesOutcome(QueryMarketImagesResult(outcome.result()));
	else
		return QueryMarketImagesOutcome(outcome.error());
}

void MarketClient::queryMarketImagesAsync(const QueryMarketImagesRequest& request, const QueryMarketImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMarketImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::QueryMarketImagesOutcomeCallable MarketClient::queryMarketImagesCallable(const QueryMarketImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMarketImagesOutcome()>>(
			[this, request]()
			{
			return this->queryMarketImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::UpdateCommodityOutcome MarketClient::updateCommodity(const UpdateCommodityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCommodityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCommodityOutcome(UpdateCommodityResult(outcome.result()));
	else
		return UpdateCommodityOutcome(outcome.error());
}

void MarketClient::updateCommodityAsync(const UpdateCommodityRequest& request, const UpdateCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCommodity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::UpdateCommodityOutcomeCallable MarketClient::updateCommodityCallable(const UpdateCommodityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCommodityOutcome()>>(
			[this, request]()
			{
			return this->updateCommodity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::UploadCommodityFileOutcome MarketClient::uploadCommodityFile(const UploadCommodityFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadCommodityFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadCommodityFileOutcome(UploadCommodityFileResult(outcome.result()));
	else
		return UploadCommodityFileOutcome(outcome.error());
}

void MarketClient::uploadCommodityFileAsync(const UploadCommodityFileRequest& request, const UploadCommodityFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadCommodityFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::UploadCommodityFileOutcomeCallable MarketClient::uploadCommodityFileCallable(const UploadCommodityFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadCommodityFileOutcome()>>(
			[this, request]()
			{
			return this->uploadCommodityFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

