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

#include <alibabacloud/actiontrail/ActiontrailClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

namespace
{
	const std::string SERVICE_NAME = "Actiontrail";
}

ActiontrailClient::ActiontrailClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "actiontrail");
}

ActiontrailClient::ActiontrailClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "actiontrail");
}

ActiontrailClient::ActiontrailClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "actiontrail");
}

ActiontrailClient::~ActiontrailClient()
{}

ActiontrailClient::CreateTrailOutcome ActiontrailClient::createTrail(const CreateTrailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrailOutcome(CreateTrailResult(outcome.result()));
	else
		return CreateTrailOutcome(outcome.error());
}

void ActiontrailClient::createTrailAsync(const CreateTrailRequest& request, const CreateTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::CreateTrailOutcomeCallable ActiontrailClient::createTrailCallable(const CreateTrailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrailOutcome()>>(
			[this, request]()
			{
			return this->createTrail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ActiontrailClient::DeleteTrailOutcome ActiontrailClient::deleteTrail(const DeleteTrailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTrailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTrailOutcome(DeleteTrailResult(outcome.result()));
	else
		return DeleteTrailOutcome(outcome.error());
}

void ActiontrailClient::deleteTrailAsync(const DeleteTrailRequest& request, const DeleteTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTrail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::DeleteTrailOutcomeCallable ActiontrailClient::deleteTrailCallable(const DeleteTrailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTrailOutcome()>>(
			[this, request]()
			{
			return this->deleteTrail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ActiontrailClient::DescribeRegionsOutcome ActiontrailClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void ActiontrailClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::DescribeRegionsOutcomeCallable ActiontrailClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ActiontrailClient::DescribeTrailsOutcome ActiontrailClient::describeTrails(const DescribeTrailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTrailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTrailsOutcome(DescribeTrailsResult(outcome.result()));
	else
		return DescribeTrailsOutcome(outcome.error());
}

void ActiontrailClient::describeTrailsAsync(const DescribeTrailsRequest& request, const DescribeTrailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTrails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::DescribeTrailsOutcomeCallable ActiontrailClient::describeTrailsCallable(const DescribeTrailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTrailsOutcome()>>(
			[this, request]()
			{
			return this->describeTrails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ActiontrailClient::GetTrailStatusOutcome ActiontrailClient::getTrailStatus(const GetTrailStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTrailStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTrailStatusOutcome(GetTrailStatusResult(outcome.result()));
	else
		return GetTrailStatusOutcome(outcome.error());
}

void ActiontrailClient::getTrailStatusAsync(const GetTrailStatusRequest& request, const GetTrailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTrailStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::GetTrailStatusOutcomeCallable ActiontrailClient::getTrailStatusCallable(const GetTrailStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTrailStatusOutcome()>>(
			[this, request]()
			{
			return this->getTrailStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ActiontrailClient::LookupEventsOutcome ActiontrailClient::lookupEvents(const LookupEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LookupEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LookupEventsOutcome(LookupEventsResult(outcome.result()));
	else
		return LookupEventsOutcome(outcome.error());
}

void ActiontrailClient::lookupEventsAsync(const LookupEventsRequest& request, const LookupEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lookupEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::LookupEventsOutcomeCallable ActiontrailClient::lookupEventsCallable(const LookupEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LookupEventsOutcome()>>(
			[this, request]()
			{
			return this->lookupEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ActiontrailClient::StartLoggingOutcome ActiontrailClient::startLogging(const StartLoggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartLoggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartLoggingOutcome(StartLoggingResult(outcome.result()));
	else
		return StartLoggingOutcome(outcome.error());
}

void ActiontrailClient::startLoggingAsync(const StartLoggingRequest& request, const StartLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startLogging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::StartLoggingOutcomeCallable ActiontrailClient::startLoggingCallable(const StartLoggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartLoggingOutcome()>>(
			[this, request]()
			{
			return this->startLogging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ActiontrailClient::StopLoggingOutcome ActiontrailClient::stopLogging(const StopLoggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopLoggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopLoggingOutcome(StopLoggingResult(outcome.result()));
	else
		return StopLoggingOutcome(outcome.error());
}

void ActiontrailClient::stopLoggingAsync(const StopLoggingRequest& request, const StopLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopLogging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::StopLoggingOutcomeCallable ActiontrailClient::stopLoggingCallable(const StopLoggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopLoggingOutcome()>>(
			[this, request]()
			{
			return this->stopLogging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ActiontrailClient::UpdateTrailOutcome ActiontrailClient::updateTrail(const UpdateTrailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTrailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTrailOutcome(UpdateTrailResult(outcome.result()));
	else
		return UpdateTrailOutcome(outcome.error());
}

void ActiontrailClient::updateTrailAsync(const UpdateTrailRequest& request, const UpdateTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTrail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ActiontrailClient::UpdateTrailOutcomeCallable ActiontrailClient::updateTrailCallable(const UpdateTrailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTrailOutcome()>>(
			[this, request]()
			{
			return this->updateTrail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

