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

#include <alibabacloud/wss/WssClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Wss;
using namespace AlibabaCloud::Wss::Model;

namespace
{
	const std::string SERVICE_NAME = "wss";
}

WssClient::WssClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WssClient::WssClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WssClient::WssClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WssClient::~WssClient()
{}

WssClient::DescribeDeliveryAddressOutcome WssClient::describeDeliveryAddress(const DescribeDeliveryAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeliveryAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeliveryAddressOutcome(DescribeDeliveryAddressResult(outcome.result()));
	else
		return DescribeDeliveryAddressOutcome(outcome.error());
}

void WssClient::describeDeliveryAddressAsync(const DescribeDeliveryAddressRequest& request, const DescribeDeliveryAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeliveryAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WssClient::DescribeDeliveryAddressOutcomeCallable WssClient::describeDeliveryAddressCallable(const DescribeDeliveryAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeliveryAddressOutcome()>>(
			[this, request]()
			{
			return this->describeDeliveryAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WssClient::DescribePackageDeductionsOutcome WssClient::describePackageDeductions(const DescribePackageDeductionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePackageDeductionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePackageDeductionsOutcome(DescribePackageDeductionsResult(outcome.result()));
	else
		return DescribePackageDeductionsOutcome(outcome.error());
}

void WssClient::describePackageDeductionsAsync(const DescribePackageDeductionsRequest& request, const DescribePackageDeductionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePackageDeductions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WssClient::DescribePackageDeductionsOutcomeCallable WssClient::describePackageDeductionsCallable(const DescribePackageDeductionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePackageDeductionsOutcome()>>(
			[this, request]()
			{
			return this->describePackageDeductions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WssClient::ModifyInstancePropertiesOutcome WssClient::modifyInstanceProperties(const ModifyInstancePropertiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstancePropertiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstancePropertiesOutcome(ModifyInstancePropertiesResult(outcome.result()));
	else
		return ModifyInstancePropertiesOutcome(outcome.error());
}

void WssClient::modifyInstancePropertiesAsync(const ModifyInstancePropertiesRequest& request, const ModifyInstancePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceProperties(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WssClient::ModifyInstancePropertiesOutcomeCallable WssClient::modifyInstancePropertiesCallable(const ModifyInstancePropertiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstancePropertiesOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceProperties(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

