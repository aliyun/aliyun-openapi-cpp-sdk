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

#include <alibabacloud/yundun/YundunClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Yundun;
using namespace AlibabaCloud::Yundun::Model;

namespace
{
	const std::string SERVICE_NAME = "Yundun";
}

YundunClient::YundunClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yundun");
}

YundunClient::YundunClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yundun");
}

YundunClient::YundunClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "yundun");
}

YundunClient::~YundunClient()
{}

YundunClient::AllMalwareNumOutcome YundunClient::allMalwareNum(const AllMalwareNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllMalwareNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllMalwareNumOutcome(AllMalwareNumResult(outcome.result()));
	else
		return AllMalwareNumOutcome(outcome.error());
}

void YundunClient::allMalwareNumAsync(const AllMalwareNumRequest& request, const AllMalwareNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allMalwareNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::AllMalwareNumOutcomeCallable YundunClient::allMalwareNumCallable(const AllMalwareNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllMalwareNumOutcome()>>(
			[this, request]()
			{
			return this->allMalwareNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::CurrentDdosAttackNumOutcome YundunClient::currentDdosAttackNum(const CurrentDdosAttackNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CurrentDdosAttackNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CurrentDdosAttackNumOutcome(CurrentDdosAttackNumResult(outcome.result()));
	else
		return CurrentDdosAttackNumOutcome(outcome.error());
}

void YundunClient::currentDdosAttackNumAsync(const CurrentDdosAttackNumRequest& request, const CurrentDdosAttackNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, currentDdosAttackNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::CurrentDdosAttackNumOutcomeCallable YundunClient::currentDdosAttackNumCallable(const CurrentDdosAttackNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CurrentDdosAttackNumOutcome()>>(
			[this, request]()
			{
			return this->currentDdosAttackNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::TodayAegisOnlineRateOutcome YundunClient::todayAegisOnlineRate(const TodayAegisOnlineRateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TodayAegisOnlineRateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TodayAegisOnlineRateOutcome(TodayAegisOnlineRateResult(outcome.result()));
	else
		return TodayAegisOnlineRateOutcome(outcome.error());
}

void YundunClient::todayAegisOnlineRateAsync(const TodayAegisOnlineRateRequest& request, const TodayAegisOnlineRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, todayAegisOnlineRate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::TodayAegisOnlineRateOutcomeCallable YundunClient::todayAegisOnlineRateCallable(const TodayAegisOnlineRateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TodayAegisOnlineRateOutcome()>>(
			[this, request]()
			{
			return this->todayAegisOnlineRate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::TodayAllkbpsOutcome YundunClient::todayAllkbps(const TodayAllkbpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TodayAllkbpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TodayAllkbpsOutcome(TodayAllkbpsResult(outcome.result()));
	else
		return TodayAllkbpsOutcome(outcome.error());
}

void YundunClient::todayAllkbpsAsync(const TodayAllkbpsRequest& request, const TodayAllkbpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, todayAllkbps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::TodayAllkbpsOutcomeCallable YundunClient::todayAllkbpsCallable(const TodayAllkbpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TodayAllkbpsOutcome()>>(
			[this, request]()
			{
			return this->todayAllkbps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::TodayAllppsOutcome YundunClient::todayAllpps(const TodayAllppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TodayAllppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TodayAllppsOutcome(TodayAllppsResult(outcome.result()));
	else
		return TodayAllppsOutcome(outcome.error());
}

void YundunClient::todayAllppsAsync(const TodayAllppsRequest& request, const TodayAllppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, todayAllpps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::TodayAllppsOutcomeCallable YundunClient::todayAllppsCallable(const TodayAllppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TodayAllppsOutcome()>>(
			[this, request]()
			{
			return this->todayAllpps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::TodayBackdoorOutcome YundunClient::todayBackdoor(const TodayBackdoorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TodayBackdoorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TodayBackdoorOutcome(TodayBackdoorResult(outcome.result()));
	else
		return TodayBackdoorOutcome(outcome.error());
}

void YundunClient::todayBackdoorAsync(const TodayBackdoorRequest& request, const TodayBackdoorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, todayBackdoor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::TodayBackdoorOutcomeCallable YundunClient::todayBackdoorCallable(const TodayBackdoorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TodayBackdoorOutcome()>>(
			[this, request]()
			{
			return this->todayBackdoor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::TodayCrackInterceptOutcome YundunClient::todayCrackIntercept(const TodayCrackInterceptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TodayCrackInterceptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TodayCrackInterceptOutcome(TodayCrackInterceptResult(outcome.result()));
	else
		return TodayCrackInterceptOutcome(outcome.error());
}

void YundunClient::todayCrackInterceptAsync(const TodayCrackInterceptRequest& request, const TodayCrackInterceptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, todayCrackIntercept(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::TodayCrackInterceptOutcomeCallable YundunClient::todayCrackInterceptCallable(const TodayCrackInterceptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TodayCrackInterceptOutcome()>>(
			[this, request]()
			{
			return this->todayCrackIntercept(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::TodayMalwareNumOutcome YundunClient::todayMalwareNum(const TodayMalwareNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TodayMalwareNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TodayMalwareNumOutcome(TodayMalwareNumResult(outcome.result()));
	else
		return TodayMalwareNumOutcome(outcome.error());
}

void YundunClient::todayMalwareNumAsync(const TodayMalwareNumRequest& request, const TodayMalwareNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, todayMalwareNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::TodayMalwareNumOutcomeCallable YundunClient::todayMalwareNumCallable(const TodayMalwareNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TodayMalwareNumOutcome()>>(
			[this, request]()
			{
			return this->todayMalwareNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::TodayqpsByRegionOutcome YundunClient::todayqpsByRegion(const TodayqpsByRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TodayqpsByRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TodayqpsByRegionOutcome(TodayqpsByRegionResult(outcome.result()));
	else
		return TodayqpsByRegionOutcome(outcome.error());
}

void YundunClient::todayqpsByRegionAsync(const TodayqpsByRegionRequest& request, const TodayqpsByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, todayqpsByRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::TodayqpsByRegionOutcomeCallable YundunClient::todayqpsByRegionCallable(const TodayqpsByRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TodayqpsByRegionOutcome()>>(
			[this, request]()
			{
			return this->todayqpsByRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

YundunClient::WebAttackNumOutcome YundunClient::webAttackNum(const WebAttackNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WebAttackNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WebAttackNumOutcome(WebAttackNumResult(outcome.result()));
	else
		return WebAttackNumOutcome(outcome.error());
}

void YundunClient::webAttackNumAsync(const WebAttackNumRequest& request, const WebAttackNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, webAttackNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

YundunClient::WebAttackNumOutcomeCallable YundunClient::webAttackNumCallable(const WebAttackNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WebAttackNumOutcome()>>(
			[this, request]()
			{
			return this->webAttackNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

