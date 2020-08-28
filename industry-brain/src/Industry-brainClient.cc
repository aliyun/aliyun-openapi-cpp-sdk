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

#include <alibabacloud/industry-brain/Industry_brainClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Industry_brain;
using namespace AlibabaCloud::Industry_brain::Model;

namespace
{
	const std::string SERVICE_NAME = "industry-brain";
}

Industry_brainClient::Industry_brainClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Industry_brainClient::Industry_brainClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Industry_brainClient::Industry_brainClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Industry_brainClient::~Industry_brainClient()
{}

Industry_brainClient::AsyncResponsePostOutcome Industry_brainClient::asyncResponsePost(const AsyncResponsePostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsyncResponsePostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsyncResponsePostOutcome(AsyncResponsePostResult(outcome.result()));
	else
		return AsyncResponsePostOutcome(outcome.error());
}

void Industry_brainClient::asyncResponsePostAsync(const AsyncResponsePostRequest& request, const AsyncResponsePostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asyncResponsePost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Industry_brainClient::AsyncResponsePostOutcomeCallable Industry_brainClient::asyncResponsePostCallable(const AsyncResponsePostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsyncResponsePostOutcome()>>(
			[this, request]()
			{
			return this->asyncResponsePost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Industry_brainClient::GetAlgorithmHistoryResultOutcome Industry_brainClient::getAlgorithmHistoryResult(const GetAlgorithmHistoryResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAlgorithmHistoryResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAlgorithmHistoryResultOutcome(GetAlgorithmHistoryResultResult(outcome.result()));
	else
		return GetAlgorithmHistoryResultOutcome(outcome.error());
}

void Industry_brainClient::getAlgorithmHistoryResultAsync(const GetAlgorithmHistoryResultRequest& request, const GetAlgorithmHistoryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAlgorithmHistoryResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Industry_brainClient::GetAlgorithmHistoryResultOutcomeCallable Industry_brainClient::getAlgorithmHistoryResultCallable(const GetAlgorithmHistoryResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAlgorithmHistoryResultOutcome()>>(
			[this, request]()
			{
			return this->getAlgorithmHistoryResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Industry_brainClient::GetServiceResultAsyncOutcome Industry_brainClient::getServiceResultAsync(const GetServiceResultAsyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceResultAsyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceResultAsyncOutcome(GetServiceResultAsyncResult(outcome.result()));
	else
		return GetServiceResultAsyncOutcome(outcome.error());
}

void Industry_brainClient::getServiceResultAsyncAsync(const GetServiceResultAsyncRequest& request, const GetServiceResultAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceResultAsync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Industry_brainClient::GetServiceResultAsyncOutcomeCallable Industry_brainClient::getServiceResultAsyncCallable(const GetServiceResultAsyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceResultAsyncOutcome()>>(
			[this, request]()
			{
			return this->getServiceResultAsync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Industry_brainClient::InvokeServiceOutcome Industry_brainClient::invokeService(const InvokeServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeServiceOutcome(InvokeServiceResult(outcome.result()));
	else
		return InvokeServiceOutcome(outcome.error());
}

void Industry_brainClient::invokeServiceAsync(const InvokeServiceRequest& request, const InvokeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Industry_brainClient::InvokeServiceOutcomeCallable Industry_brainClient::invokeServiceCallable(const InvokeServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeServiceOutcome()>>(
			[this, request]()
			{
			return this->invokeService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Industry_brainClient::InvokeServiceAsyncOutcome Industry_brainClient::invokeServiceAsync(const InvokeServiceAsyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeServiceAsyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeServiceAsyncOutcome(InvokeServiceAsyncResult(outcome.result()));
	else
		return InvokeServiceAsyncOutcome(outcome.error());
}

void Industry_brainClient::invokeServiceAsyncAsync(const InvokeServiceAsyncRequest& request, const InvokeServiceAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeServiceAsync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Industry_brainClient::InvokeServiceAsyncOutcomeCallable Industry_brainClient::invokeServiceAsyncCallable(const InvokeServiceAsyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeServiceAsyncOutcome()>>(
			[this, request]()
			{
			return this->invokeServiceAsync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

