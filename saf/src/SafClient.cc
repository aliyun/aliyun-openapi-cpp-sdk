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

#include <alibabacloud/saf/SafClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Saf;
using namespace AlibabaCloud::Saf::Model;

namespace
{
	const std::string SERVICE_NAME = "saf";
}

SafClient::SafClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SafClient::SafClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SafClient::SafClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SafClient::~SafClient()
{}

SafClient::ExecuteExtendServiceOutcome SafClient::executeExtendService(const ExecuteExtendServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteExtendServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteExtendServiceOutcome(ExecuteExtendServiceResult(outcome.result()));
	else
		return ExecuteExtendServiceOutcome(outcome.error());
}

void SafClient::executeExtendServiceAsync(const ExecuteExtendServiceRequest& request, const ExecuteExtendServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeExtendService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SafClient::ExecuteExtendServiceOutcomeCallable SafClient::executeExtendServiceCallable(const ExecuteExtendServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteExtendServiceOutcome()>>(
			[this, request]()
			{
			return this->executeExtendService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SafClient::ExecuteRequestOutcome SafClient::executeRequest(const ExecuteRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteRequestOutcome(ExecuteRequestResult(outcome.result()));
	else
		return ExecuteRequestOutcome(outcome.error());
}

void SafClient::executeRequestAsync(const ExecuteRequestRequest& request, const ExecuteRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SafClient::ExecuteRequestOutcomeCallable SafClient::executeRequestCallable(const ExecuteRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteRequestOutcome()>>(
			[this, request]()
			{
			return this->executeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SafClient::ExecuteRequestMLOutcome SafClient::executeRequestML(const ExecuteRequestMLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteRequestMLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteRequestMLOutcome(ExecuteRequestMLResult(outcome.result()));
	else
		return ExecuteRequestMLOutcome(outcome.error());
}

void SafClient::executeRequestMLAsync(const ExecuteRequestMLRequest& request, const ExecuteRequestMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeRequestML(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SafClient::ExecuteRequestMLOutcomeCallable SafClient::executeRequestMLCallable(const ExecuteRequestMLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteRequestMLOutcome()>>(
			[this, request]()
			{
			return this->executeRequestML(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SafClient::ExecuteRequestSGOutcome SafClient::executeRequestSG(const ExecuteRequestSGRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteRequestSGOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteRequestSGOutcome(ExecuteRequestSGResult(outcome.result()));
	else
		return ExecuteRequestSGOutcome(outcome.error());
}

void SafClient::executeRequestSGAsync(const ExecuteRequestSGRequest& request, const ExecuteRequestSGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeRequestSG(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SafClient::ExecuteRequestSGOutcomeCallable SafClient::executeRequestSGCallable(const ExecuteRequestSGRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteRequestSGOutcome()>>(
			[this, request]()
			{
			return this->executeRequestSG(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SafClient::RequestDecisionOutcome SafClient::requestDecision(const RequestDecisionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RequestDecisionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RequestDecisionOutcome(RequestDecisionResult(outcome.result()));
	else
		return RequestDecisionOutcome(outcome.error());
}

void SafClient::requestDecisionAsync(const RequestDecisionRequest& request, const RequestDecisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, requestDecision(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SafClient::RequestDecisionOutcomeCallable SafClient::requestDecisionCallable(const RequestDecisionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RequestDecisionOutcome()>>(
			[this, request]()
			{
			return this->requestDecision(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

