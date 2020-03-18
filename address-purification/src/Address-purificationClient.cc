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

#include <alibabacloud/address-purification/Address_purificationClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Address_purification;
using namespace AlibabaCloud::Address_purification::Model;

namespace
{
	const std::string SERVICE_NAME = "address-purification";
}

Address_purificationClient::Address_purificationClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Address_purificationClient::Address_purificationClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Address_purificationClient::Address_purificationClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Address_purificationClient::~Address_purificationClient()
{}

Address_purificationClient::DescribeProductOutcome Address_purificationClient::describeProduct(const DescribeProductRequest &request) const
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

void Address_purificationClient::describeProductAsync(const DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::DescribeProductOutcomeCallable Address_purificationClient::describeProductCallable(const DescribeProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProductOutcome()>>(
			[this, request]()
			{
			return this->describeProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetAlgorithmResultOutcome Address_purificationClient::getAlgorithmResult(const GetAlgorithmResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAlgorithmResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAlgorithmResultOutcome(GetAlgorithmResultResult(outcome.result()));
	else
		return GetAlgorithmResultOutcome(outcome.error());
}

void Address_purificationClient::getAlgorithmResultAsync(const GetAlgorithmResultRequest& request, const GetAlgorithmResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAlgorithmResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetAlgorithmResultOutcomeCallable Address_purificationClient::getAlgorithmResultCallable(const GetAlgorithmResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAlgorithmResultOutcome()>>(
			[this, request]()
			{
			return this->getAlgorithmResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetConsoleResultOutcome Address_purificationClient::getConsoleResult(const GetConsoleResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConsoleResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConsoleResultOutcome(GetConsoleResultResult(outcome.result()));
	else
		return GetConsoleResultOutcome(outcome.error());
}

void Address_purificationClient::getConsoleResultAsync(const GetConsoleResultRequest& request, const GetConsoleResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConsoleResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetConsoleResultOutcomeCallable Address_purificationClient::getConsoleResultCallable(const GetConsoleResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConsoleResultOutcome()>>(
			[this, request]()
			{
			return this->getConsoleResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetReportOutcome Address_purificationClient::getReport(const GetReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetReportOutcome(GetReportResult(outcome.result()));
	else
		return GetReportOutcome(outcome.error());
}

void Address_purificationClient::getReportAsync(const GetReportRequest& request, const GetReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetReportOutcomeCallable Address_purificationClient::getReportCallable(const GetReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetReportOutcome()>>(
			[this, request]()
			{
			return this->getReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetUserInfomationOutcome Address_purificationClient::getUserInfomation(const GetUserInfomationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserInfomationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserInfomationOutcome(GetUserInfomationResult(outcome.result()));
	else
		return GetUserInfomationOutcome(outcome.error());
}

void Address_purificationClient::getUserInfomationAsync(const GetUserInfomationRequest& request, const GetUserInfomationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserInfomation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetUserInfomationOutcomeCallable Address_purificationClient::getUserInfomationCallable(const GetUserInfomationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserInfomationOutcome()>>(
			[this, request]()
			{
			return this->getUserInfomation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

