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

#include <alibabacloud/appmallsservice/AppMallsServiceClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

namespace
{
	const std::string SERVICE_NAME = "AppMallsService";
}

AppMallsServiceClient::AppMallsServiceClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "appmallsservice");
}

AppMallsServiceClient::AppMallsServiceClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "appmallsservice");
}

AppMallsServiceClient::AppMallsServiceClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "appmallsservice");
}

AppMallsServiceClient::~AppMallsServiceClient()
{}

AppMallsServiceClient::GetMessagesOutcome AppMallsServiceClient::getMessages(const GetMessagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMessagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMessagesOutcome(GetMessagesResult(outcome.result()));
	else
		return GetMessagesOutcome(outcome.error());
}

void AppMallsServiceClient::getMessagesAsync(const GetMessagesRequest& request, const GetMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMessages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::GetMessagesOutcomeCallable AppMallsServiceClient::getMessagesCallable(const GetMessagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMessagesOutcome()>>(
			[this, request]()
			{
			return this->getMessages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::RemoveMessagesOutcome AppMallsServiceClient::removeMessages(const RemoveMessagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveMessagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveMessagesOutcome(RemoveMessagesResult(outcome.result()));
	else
		return RemoveMessagesOutcome(outcome.error());
}

void AppMallsServiceClient::removeMessagesAsync(const RemoveMessagesRequest& request, const RemoveMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeMessages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::RemoveMessagesOutcomeCallable AppMallsServiceClient::removeMessagesCallable(const RemoveMessagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveMessagesOutcome()>>(
			[this, request]()
			{
			return this->removeMessages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmGetCinemasOutcome AppMallsServiceClient::taobaoFilmGetCinemas(const TaobaoFilmGetCinemasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmGetCinemasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmGetCinemasOutcome(TaobaoFilmGetCinemasResult(outcome.result()));
	else
		return TaobaoFilmGetCinemasOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmGetCinemasAsync(const TaobaoFilmGetCinemasRequest& request, const TaobaoFilmGetCinemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmGetCinemas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmGetCinemasOutcomeCallable AppMallsServiceClient::taobaoFilmGetCinemasCallable(const TaobaoFilmGetCinemasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmGetCinemasOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmGetCinemas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmGetHotShowsOutcome AppMallsServiceClient::taobaoFilmGetHotShows(const TaobaoFilmGetHotShowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmGetHotShowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmGetHotShowsOutcome(TaobaoFilmGetHotShowsResult(outcome.result()));
	else
		return TaobaoFilmGetHotShowsOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmGetHotShowsAsync(const TaobaoFilmGetHotShowsRequest& request, const TaobaoFilmGetHotShowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmGetHotShows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmGetHotShowsOutcomeCallable AppMallsServiceClient::taobaoFilmGetHotShowsCallable(const TaobaoFilmGetHotShowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmGetHotShowsOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmGetHotShows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmGetRegionListOutcome AppMallsServiceClient::taobaoFilmGetRegionList(const TaobaoFilmGetRegionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmGetRegionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmGetRegionListOutcome(TaobaoFilmGetRegionListResult(outcome.result()));
	else
		return TaobaoFilmGetRegionListOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmGetRegionListAsync(const TaobaoFilmGetRegionListRequest& request, const TaobaoFilmGetRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmGetRegionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmGetRegionListOutcomeCallable AppMallsServiceClient::taobaoFilmGetRegionListCallable(const TaobaoFilmGetRegionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmGetRegionListOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmGetRegionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmGetSchedulesOutcome AppMallsServiceClient::taobaoFilmGetSchedules(const TaobaoFilmGetSchedulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmGetSchedulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmGetSchedulesOutcome(TaobaoFilmGetSchedulesResult(outcome.result()));
	else
		return TaobaoFilmGetSchedulesOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmGetSchedulesAsync(const TaobaoFilmGetSchedulesRequest& request, const TaobaoFilmGetSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmGetSchedules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmGetSchedulesOutcomeCallable AppMallsServiceClient::taobaoFilmGetSchedulesCallable(const TaobaoFilmGetSchedulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmGetSchedulesOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmGetSchedules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmGetSeatsOutcome AppMallsServiceClient::taobaoFilmGetSeats(const TaobaoFilmGetSeatsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmGetSeatsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmGetSeatsOutcome(TaobaoFilmGetSeatsResult(outcome.result()));
	else
		return TaobaoFilmGetSeatsOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmGetSeatsAsync(const TaobaoFilmGetSeatsRequest& request, const TaobaoFilmGetSeatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmGetSeats(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmGetSeatsOutcomeCallable AppMallsServiceClient::taobaoFilmGetSeatsCallable(const TaobaoFilmGetSeatsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmGetSeatsOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmGetSeats(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmGetShowCommentsOutcome AppMallsServiceClient::taobaoFilmGetShowComments(const TaobaoFilmGetShowCommentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmGetShowCommentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmGetShowCommentsOutcome(TaobaoFilmGetShowCommentsResult(outcome.result()));
	else
		return TaobaoFilmGetShowCommentsOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmGetShowCommentsAsync(const TaobaoFilmGetShowCommentsRequest& request, const TaobaoFilmGetShowCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmGetShowComments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmGetShowCommentsOutcomeCallable AppMallsServiceClient::taobaoFilmGetShowCommentsCallable(const TaobaoFilmGetShowCommentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmGetShowCommentsOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmGetShowComments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmGetSoonShowsOutcome AppMallsServiceClient::taobaoFilmGetSoonShows(const TaobaoFilmGetSoonShowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmGetSoonShowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmGetSoonShowsOutcome(TaobaoFilmGetSoonShowsResult(outcome.result()));
	else
		return TaobaoFilmGetSoonShowsOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmGetSoonShowsAsync(const TaobaoFilmGetSoonShowsRequest& request, const TaobaoFilmGetSoonShowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmGetSoonShows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmGetSoonShowsOutcomeCallable AppMallsServiceClient::taobaoFilmGetSoonShowsCallable(const TaobaoFilmGetSoonShowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmGetSoonShowsOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmGetSoonShows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmIssueOrderOutcome AppMallsServiceClient::taobaoFilmIssueOrder(const TaobaoFilmIssueOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmIssueOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmIssueOrderOutcome(TaobaoFilmIssueOrderResult(outcome.result()));
	else
		return TaobaoFilmIssueOrderOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmIssueOrderAsync(const TaobaoFilmIssueOrderRequest& request, const TaobaoFilmIssueOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmIssueOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmIssueOrderOutcomeCallable AppMallsServiceClient::taobaoFilmIssueOrderCallable(const TaobaoFilmIssueOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmIssueOrderOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmIssueOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmLockSeatOutcome AppMallsServiceClient::taobaoFilmLockSeat(const TaobaoFilmLockSeatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmLockSeatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmLockSeatOutcome(TaobaoFilmLockSeatResult(outcome.result()));
	else
		return TaobaoFilmLockSeatOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmLockSeatAsync(const TaobaoFilmLockSeatRequest& request, const TaobaoFilmLockSeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmLockSeat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmLockSeatOutcomeCallable AppMallsServiceClient::taobaoFilmLockSeatCallable(const TaobaoFilmLockSeatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmLockSeatOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmLockSeat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AppMallsServiceClient::TaobaoFilmUnLockSeatOutcome AppMallsServiceClient::taobaoFilmUnLockSeat(const TaobaoFilmUnLockSeatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaobaoFilmUnLockSeatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaobaoFilmUnLockSeatOutcome(TaobaoFilmUnLockSeatResult(outcome.result()));
	else
		return TaobaoFilmUnLockSeatOutcome(outcome.error());
}

void AppMallsServiceClient::taobaoFilmUnLockSeatAsync(const TaobaoFilmUnLockSeatRequest& request, const TaobaoFilmUnLockSeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taobaoFilmUnLockSeat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AppMallsServiceClient::TaobaoFilmUnLockSeatOutcomeCallable AppMallsServiceClient::taobaoFilmUnLockSeatCallable(const TaobaoFilmUnLockSeatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaobaoFilmUnLockSeatOutcome()>>(
			[this, request]()
			{
			return this->taobaoFilmUnLockSeat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

