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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yunmarket");
}

MarketClient::MarketClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yunmarket");
}

MarketClient::MarketClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yunmarket");
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

MarketClient::AutoRenewInstanceOutcome MarketClient::autoRenewInstance(const AutoRenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AutoRenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AutoRenewInstanceOutcome(AutoRenewInstanceResult(outcome.result()));
	else
		return AutoRenewInstanceOutcome(outcome.error());
}

void MarketClient::autoRenewInstanceAsync(const AutoRenewInstanceRequest& request, const AutoRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, autoRenewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::AutoRenewInstanceOutcomeCallable MarketClient::autoRenewInstanceCallable(const AutoRenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AutoRenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->autoRenewInstance(request);
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

MarketClient::CrossAccountVerifyTokenOutcome MarketClient::crossAccountVerifyToken(const CrossAccountVerifyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CrossAccountVerifyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CrossAccountVerifyTokenOutcome(CrossAccountVerifyTokenResult(outcome.result()));
	else
		return CrossAccountVerifyTokenOutcome(outcome.error());
}

void MarketClient::crossAccountVerifyTokenAsync(const CrossAccountVerifyTokenRequest& request, const CrossAccountVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, crossAccountVerifyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::CrossAccountVerifyTokenOutcomeCallable MarketClient::crossAccountVerifyTokenCallable(const CrossAccountVerifyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CrossAccountVerifyTokenOutcome()>>(
			[this, request]()
			{
			return this->crossAccountVerifyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeApiMeteringOutcome MarketClient::describeApiMetering(const DescribeApiMeteringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiMeteringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiMeteringOutcome(DescribeApiMeteringResult(outcome.result()));
	else
		return DescribeApiMeteringOutcome(outcome.error());
}

void MarketClient::describeApiMeteringAsync(const DescribeApiMeteringRequest& request, const DescribeApiMeteringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiMetering(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeApiMeteringOutcomeCallable MarketClient::describeApiMeteringCallable(const DescribeApiMeteringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiMeteringOutcome()>>(
			[this, request]()
			{
			return this->describeApiMetering(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeCurrentNodeInfoOutcome MarketClient::describeCurrentNodeInfo(const DescribeCurrentNodeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCurrentNodeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCurrentNodeInfoOutcome(DescribeCurrentNodeInfoResult(outcome.result()));
	else
		return DescribeCurrentNodeInfoOutcome(outcome.error());
}

void MarketClient::describeCurrentNodeInfoAsync(const DescribeCurrentNodeInfoRequest& request, const DescribeCurrentNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCurrentNodeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeCurrentNodeInfoOutcomeCallable MarketClient::describeCurrentNodeInfoCallable(const DescribeCurrentNodeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCurrentNodeInfoOutcome()>>(
			[this, request]()
			{
			return this->describeCurrentNodeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeDistributionProductsOutcome MarketClient::describeDistributionProducts(const DescribeDistributionProductsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDistributionProductsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDistributionProductsOutcome(DescribeDistributionProductsResult(outcome.result()));
	else
		return DescribeDistributionProductsOutcome(outcome.error());
}

void MarketClient::describeDistributionProductsAsync(const DescribeDistributionProductsRequest& request, const DescribeDistributionProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDistributionProducts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeDistributionProductsOutcomeCallable MarketClient::describeDistributionProductsCallable(const DescribeDistributionProductsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDistributionProductsOutcome()>>(
			[this, request]()
			{
			return this->describeDistributionProducts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeDistributionProductsLinkOutcome MarketClient::describeDistributionProductsLink(const DescribeDistributionProductsLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDistributionProductsLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDistributionProductsLinkOutcome(DescribeDistributionProductsLinkResult(outcome.result()));
	else
		return DescribeDistributionProductsLinkOutcome(outcome.error());
}

void MarketClient::describeDistributionProductsLinkAsync(const DescribeDistributionProductsLinkRequest& request, const DescribeDistributionProductsLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDistributionProductsLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeDistributionProductsLinkOutcomeCallable MarketClient::describeDistributionProductsLinkCallable(const DescribeDistributionProductsLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDistributionProductsLinkOutcome()>>(
			[this, request]()
			{
			return this->describeDistributionProductsLink(request);
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

MarketClient::DescribeProjectAttachmentsOutcome MarketClient::describeProjectAttachments(const DescribeProjectAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectAttachmentsOutcome(DescribeProjectAttachmentsResult(outcome.result()));
	else
		return DescribeProjectAttachmentsOutcome(outcome.error());
}

void MarketClient::describeProjectAttachmentsAsync(const DescribeProjectAttachmentsRequest& request, const DescribeProjectAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeProjectAttachmentsOutcomeCallable MarketClient::describeProjectAttachmentsCallable(const DescribeProjectAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->describeProjectAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeProjectInfoOutcome MarketClient::describeProjectInfo(const DescribeProjectInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectInfoOutcome(DescribeProjectInfoResult(outcome.result()));
	else
		return DescribeProjectInfoOutcome(outcome.error());
}

void MarketClient::describeProjectInfoAsync(const DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeProjectInfoOutcomeCallable MarketClient::describeProjectInfoCallable(const DescribeProjectInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectInfoOutcome()>>(
			[this, request]()
			{
			return this->describeProjectInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeProjectMessagesOutcome MarketClient::describeProjectMessages(const DescribeProjectMessagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectMessagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectMessagesOutcome(DescribeProjectMessagesResult(outcome.result()));
	else
		return DescribeProjectMessagesOutcome(outcome.error());
}

void MarketClient::describeProjectMessagesAsync(const DescribeProjectMessagesRequest& request, const DescribeProjectMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectMessages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeProjectMessagesOutcomeCallable MarketClient::describeProjectMessagesCallable(const DescribeProjectMessagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectMessagesOutcome()>>(
			[this, request]()
			{
			return this->describeProjectMessages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeProjectNodesOutcome MarketClient::describeProjectNodes(const DescribeProjectNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectNodesOutcome(DescribeProjectNodesResult(outcome.result()));
	else
		return DescribeProjectNodesOutcome(outcome.error());
}

void MarketClient::describeProjectNodesAsync(const DescribeProjectNodesRequest& request, const DescribeProjectNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeProjectNodesOutcomeCallable MarketClient::describeProjectNodesCallable(const DescribeProjectNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectNodesOutcome()>>(
			[this, request]()
			{
			return this->describeProjectNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::DescribeProjectOperateLogsOutcome MarketClient::describeProjectOperateLogs(const DescribeProjectOperateLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectOperateLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectOperateLogsOutcome(DescribeProjectOperateLogsResult(outcome.result()));
	else
		return DescribeProjectOperateLogsOutcome(outcome.error());
}

void MarketClient::describeProjectOperateLogsAsync(const DescribeProjectOperateLogsRequest& request, const DescribeProjectOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjectOperateLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::DescribeProjectOperateLogsOutcomeCallable MarketClient::describeProjectOperateLogsCallable(const DescribeProjectOperateLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectOperateLogsOutcome()>>(
			[this, request]()
			{
			return this->describeProjectOperateLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::FinishCurrentProjectNodeOutcome MarketClient::finishCurrentProjectNode(const FinishCurrentProjectNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FinishCurrentProjectNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FinishCurrentProjectNodeOutcome(FinishCurrentProjectNodeResult(outcome.result()));
	else
		return FinishCurrentProjectNodeOutcome(outcome.error());
}

void MarketClient::finishCurrentProjectNodeAsync(const FinishCurrentProjectNodeRequest& request, const FinishCurrentProjectNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, finishCurrentProjectNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::FinishCurrentProjectNodeOutcomeCallable MarketClient::finishCurrentProjectNodeCallable(const FinishCurrentProjectNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FinishCurrentProjectNodeOutcome()>>(
			[this, request]()
			{
			return this->finishCurrentProjectNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::PauseProjectOutcome MarketClient::pauseProject(const PauseProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseProjectOutcome(PauseProjectResult(outcome.result()));
	else
		return PauseProjectOutcome(outcome.error());
}

void MarketClient::pauseProjectAsync(const PauseProjectRequest& request, const PauseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::PauseProjectOutcomeCallable MarketClient::pauseProjectCallable(const PauseProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseProjectOutcome()>>(
			[this, request]()
			{
			return this->pauseProject(request);
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

MarketClient::ResumeProjectOutcome MarketClient::resumeProject(const ResumeProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeProjectOutcome(ResumeProjectResult(outcome.result()));
	else
		return ResumeProjectOutcome(outcome.error());
}

void MarketClient::resumeProjectAsync(const ResumeProjectRequest& request, const ResumeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::ResumeProjectOutcomeCallable MarketClient::resumeProjectCallable(const ResumeProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeProjectOutcome()>>(
			[this, request]()
			{
			return this->resumeProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketClient::RollbackCurrentProjectNodeOutcome MarketClient::rollbackCurrentProjectNode(const RollbackCurrentProjectNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackCurrentProjectNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackCurrentProjectNodeOutcome(RollbackCurrentProjectNodeResult(outcome.result()));
	else
		return RollbackCurrentProjectNodeOutcome(outcome.error());
}

void MarketClient::rollbackCurrentProjectNodeAsync(const RollbackCurrentProjectNodeRequest& request, const RollbackCurrentProjectNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackCurrentProjectNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketClient::RollbackCurrentProjectNodeOutcomeCallable MarketClient::rollbackCurrentProjectNodeCallable(const RollbackCurrentProjectNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackCurrentProjectNodeOutcome()>>(
			[this, request]()
			{
			return this->rollbackCurrentProjectNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

