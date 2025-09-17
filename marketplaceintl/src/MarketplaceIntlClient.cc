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

#include <alibabacloud/marketplaceintl/MarketplaceIntlClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::MarketplaceIntl;
using namespace AlibabaCloud::MarketplaceIntl::Model;

namespace
{
	const std::string SERVICE_NAME = "marketplaceIntl";
}

MarketplaceIntlClient::MarketplaceIntlClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MarketplaceIntlClient::MarketplaceIntlClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MarketplaceIntlClient::MarketplaceIntlClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MarketplaceIntlClient::~MarketplaceIntlClient()
{}

MarketplaceIntlClient::DescribePushMeteringDataOutcome MarketplaceIntlClient::describePushMeteringData(const DescribePushMeteringDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePushMeteringDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePushMeteringDataOutcome(DescribePushMeteringDataResult(outcome.result()));
	else
		return DescribePushMeteringDataOutcome(outcome.error());
}

void MarketplaceIntlClient::describePushMeteringDataAsync(const DescribePushMeteringDataRequest& request, const DescribePushMeteringDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePushMeteringData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketplaceIntlClient::DescribePushMeteringDataOutcomeCallable MarketplaceIntlClient::describePushMeteringDataCallable(const DescribePushMeteringDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePushMeteringDataOutcome()>>(
			[this, request]()
			{
			return this->describePushMeteringData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketplaceIntlClient::DescribeSellerInstancesOutcome MarketplaceIntlClient::describeSellerInstances(const DescribeSellerInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSellerInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSellerInstancesOutcome(DescribeSellerInstancesResult(outcome.result()));
	else
		return DescribeSellerInstancesOutcome(outcome.error());
}

void MarketplaceIntlClient::describeSellerInstancesAsync(const DescribeSellerInstancesRequest& request, const DescribeSellerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSellerInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketplaceIntlClient::DescribeSellerInstancesOutcomeCallable MarketplaceIntlClient::describeSellerInstancesCallable(const DescribeSellerInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSellerInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeSellerInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketplaceIntlClient::NoticeInstanceUserOutcome MarketplaceIntlClient::noticeInstanceUser(const NoticeInstanceUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return NoticeInstanceUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return NoticeInstanceUserOutcome(NoticeInstanceUserResult(outcome.result()));
	else
		return NoticeInstanceUserOutcome(outcome.error());
}

void MarketplaceIntlClient::noticeInstanceUserAsync(const NoticeInstanceUserRequest& request, const NoticeInstanceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, noticeInstanceUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketplaceIntlClient::NoticeInstanceUserOutcomeCallable MarketplaceIntlClient::noticeInstanceUserCallable(const NoticeInstanceUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<NoticeInstanceUserOutcome()>>(
			[this, request]()
			{
			return this->noticeInstanceUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MarketplaceIntlClient::PushMeteringDataOutcome MarketplaceIntlClient::pushMeteringData(const PushMeteringDataRequest &request) const
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

void MarketplaceIntlClient::pushMeteringDataAsync(const PushMeteringDataRequest& request, const PushMeteringDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushMeteringData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MarketplaceIntlClient::PushMeteringDataOutcomeCallable MarketplaceIntlClient::pushMeteringDataCallable(const PushMeteringDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushMeteringDataOutcome()>>(
			[this, request]()
			{
			return this->pushMeteringData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

