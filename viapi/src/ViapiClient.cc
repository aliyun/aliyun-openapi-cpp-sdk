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

#include <alibabacloud/viapi/ViapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Viapi;
using namespace AlibabaCloud::Viapi::Model;

namespace
{
	const std::string SERVICE_NAME = "viapi";
}

ViapiClient::ViapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "viapi");
}

ViapiClient::ViapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "viapi");
}

ViapiClient::ViapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "viapi");
}

ViapiClient::~ViapiClient()
{}

ViapiClient::CancelWaitingAsyncJobOutcome ViapiClient::cancelWaitingAsyncJob(const CancelWaitingAsyncJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelWaitingAsyncJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelWaitingAsyncJobOutcome(CancelWaitingAsyncJobResult(outcome.result()));
	else
		return CancelWaitingAsyncJobOutcome(outcome.error());
}

void ViapiClient::cancelWaitingAsyncJobAsync(const CancelWaitingAsyncJobRequest& request, const CancelWaitingAsyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelWaitingAsyncJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ViapiClient::CancelWaitingAsyncJobOutcomeCallable ViapiClient::cancelWaitingAsyncJobCallable(const CancelWaitingAsyncJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelWaitingAsyncJobOutcome()>>(
			[this, request]()
			{
			return this->cancelWaitingAsyncJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ViapiClient::GetAsyncJobResultOutcome ViapiClient::getAsyncJobResult(const GetAsyncJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsyncJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsyncJobResultOutcome(GetAsyncJobResultResult(outcome.result()));
	else
		return GetAsyncJobResultOutcome(outcome.error());
}

void ViapiClient::getAsyncJobResultAsync(const GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsyncJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ViapiClient::GetAsyncJobResultOutcomeCallable ViapiClient::getAsyncJobResultCallable(const GetAsyncJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsyncJobResultOutcome()>>(
			[this, request]()
			{
			return this->getAsyncJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ViapiClient::QueryAsyncJobListOutcome ViapiClient::queryAsyncJobList(const QueryAsyncJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAsyncJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAsyncJobListOutcome(QueryAsyncJobListResult(outcome.result()));
	else
		return QueryAsyncJobListOutcome(outcome.error());
}

void ViapiClient::queryAsyncJobListAsync(const QueryAsyncJobListRequest& request, const QueryAsyncJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAsyncJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ViapiClient::QueryAsyncJobListOutcomeCallable ViapiClient::queryAsyncJobListCallable(const QueryAsyncJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAsyncJobListOutcome()>>(
			[this, request]()
			{
			return this->queryAsyncJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

