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

#include <alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

namespace
{
	const std::string SERVICE_NAME = "cusanalytic_sc_online";
}

Cusanalytic_sc_onlineClient::Cusanalytic_sc_onlineClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cusanalytic_sc_online");
}

Cusanalytic_sc_onlineClient::Cusanalytic_sc_onlineClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cusanalytic_sc_online");
}

Cusanalytic_sc_onlineClient::Cusanalytic_sc_onlineClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cusanalytic_sc_online");
}

Cusanalytic_sc_onlineClient::~Cusanalytic_sc_onlineClient()
{}

Cusanalytic_sc_onlineClient::DescribeActionDataOutcome Cusanalytic_sc_onlineClient::describeActionData(const DescribeActionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeActionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeActionDataOutcome(DescribeActionDataResult(outcome.result()));
	else
		return DescribeActionDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::describeActionDataAsync(const DescribeActionDataRequest& request, const DescribeActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeActionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::DescribeActionDataOutcomeCallable Cusanalytic_sc_onlineClient::describeActionDataCallable(const DescribeActionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeActionDataOutcome()>>(
			[this, request]()
			{
			return this->describeActionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::DescribeHistoryActionDataOutcome Cusanalytic_sc_onlineClient::describeHistoryActionData(const DescribeHistoryActionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryActionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryActionDataOutcome(DescribeHistoryActionDataResult(outcome.result()));
	else
		return DescribeHistoryActionDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::describeHistoryActionDataAsync(const DescribeHistoryActionDataRequest& request, const DescribeHistoryActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryActionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::DescribeHistoryActionDataOutcomeCallable Cusanalytic_sc_onlineClient::describeHistoryActionDataCallable(const DescribeHistoryActionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryActionDataOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryActionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::DescribeLocationsOutcome Cusanalytic_sc_onlineClient::describeLocations(const DescribeLocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLocationsOutcome(DescribeLocationsResult(outcome.result()));
	else
		return DescribeLocationsOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::describeLocationsAsync(const DescribeLocationsRequest& request, const DescribeLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::DescribeLocationsOutcomeCallable Cusanalytic_sc_onlineClient::describeLocationsCallable(const DescribeLocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLocationsOutcome()>>(
			[this, request]()
			{
			return this->describeLocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetActionCursorOutcome Cusanalytic_sc_onlineClient::getActionCursor(const GetActionCursorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetActionCursorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetActionCursorOutcome(GetActionCursorResult(outcome.result()));
	else
		return GetActionCursorOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getActionCursorAsync(const GetActionCursorRequest& request, const GetActionCursorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getActionCursor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetActionCursorOutcomeCallable Cusanalytic_sc_onlineClient::getActionCursorCallable(const GetActionCursorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetActionCursorOutcome()>>(
			[this, request]()
			{
			return this->getActionCursor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetAnalyzeCommodityDataOutcome Cusanalytic_sc_onlineClient::getAnalyzeCommodityData(const GetAnalyzeCommodityDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAnalyzeCommodityDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAnalyzeCommodityDataOutcome(GetAnalyzeCommodityDataResult(outcome.result()));
	else
		return GetAnalyzeCommodityDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getAnalyzeCommodityDataAsync(const GetAnalyzeCommodityDataRequest& request, const GetAnalyzeCommodityDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAnalyzeCommodityData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetAnalyzeCommodityDataOutcomeCallable Cusanalytic_sc_onlineClient::getAnalyzeCommodityDataCallable(const GetAnalyzeCommodityDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAnalyzeCommodityDataOutcome()>>(
			[this, request]()
			{
			return this->getAnalyzeCommodityData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetAnalyzePlaceDataOutcome Cusanalytic_sc_onlineClient::getAnalyzePlaceData(const GetAnalyzePlaceDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAnalyzePlaceDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAnalyzePlaceDataOutcome(GetAnalyzePlaceDataResult(outcome.result()));
	else
		return GetAnalyzePlaceDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getAnalyzePlaceDataAsync(const GetAnalyzePlaceDataRequest& request, const GetAnalyzePlaceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAnalyzePlaceData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetAnalyzePlaceDataOutcomeCallable Cusanalytic_sc_onlineClient::getAnalyzePlaceDataCallable(const GetAnalyzePlaceDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAnalyzePlaceDataOutcome()>>(
			[this, request]()
			{
			return this->getAnalyzePlaceData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetBaseAgeDataOutcome Cusanalytic_sc_onlineClient::getBaseAgeData(const GetBaseAgeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaseAgeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaseAgeDataOutcome(GetBaseAgeDataResult(outcome.result()));
	else
		return GetBaseAgeDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getBaseAgeDataAsync(const GetBaseAgeDataRequest& request, const GetBaseAgeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaseAgeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetBaseAgeDataOutcomeCallable Cusanalytic_sc_onlineClient::getBaseAgeDataCallable(const GetBaseAgeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaseAgeDataOutcome()>>(
			[this, request]()
			{
			return this->getBaseAgeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetCameraStatisticOutcome Cusanalytic_sc_onlineClient::getCameraStatistic(const GetCameraStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCameraStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCameraStatisticOutcome(GetCameraStatisticResult(outcome.result()));
	else
		return GetCameraStatisticOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getCameraStatisticAsync(const GetCameraStatisticRequest& request, const GetCameraStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCameraStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetCameraStatisticOutcomeCallable Cusanalytic_sc_onlineClient::getCameraStatisticCallable(const GetCameraStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCameraStatisticOutcome()>>(
			[this, request]()
			{
			return this->getCameraStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetDailyStatisticsDataOutcome Cusanalytic_sc_onlineClient::getDailyStatisticsData(const GetDailyStatisticsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDailyStatisticsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDailyStatisticsDataOutcome(GetDailyStatisticsDataResult(outcome.result()));
	else
		return GetDailyStatisticsDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getDailyStatisticsDataAsync(const GetDailyStatisticsDataRequest& request, const GetDailyStatisticsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDailyStatisticsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetDailyStatisticsDataOutcomeCallable Cusanalytic_sc_onlineClient::getDailyStatisticsDataCallable(const GetDailyStatisticsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDailyStatisticsDataOutcome()>>(
			[this, request]()
			{
			return this->getDailyStatisticsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetEMapOutcome Cusanalytic_sc_onlineClient::getEMap(const GetEMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEMapOutcome(GetEMapResult(outcome.result()));
	else
		return GetEMapOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getEMapAsync(const GetEMapRequest& request, const GetEMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetEMapOutcomeCallable Cusanalytic_sc_onlineClient::getEMapCallable(const GetEMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEMapOutcome()>>(
			[this, request]()
			{
			return this->getEMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetHeatMapDataOutcome Cusanalytic_sc_onlineClient::getHeatMapData(const GetHeatMapDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHeatMapDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHeatMapDataOutcome(GetHeatMapDataResult(outcome.result()));
	else
		return GetHeatMapDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getHeatMapDataAsync(const GetHeatMapDataRequest& request, const GetHeatMapDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHeatMapData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetHeatMapDataOutcomeCallable Cusanalytic_sc_onlineClient::getHeatMapDataCallable(const GetHeatMapDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHeatMapDataOutcome()>>(
			[this, request]()
			{
			return this->getHeatMapData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetHourlyStatisticsDataOutcome Cusanalytic_sc_onlineClient::getHourlyStatisticsData(const GetHourlyStatisticsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHourlyStatisticsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHourlyStatisticsDataOutcome(GetHourlyStatisticsDataResult(outcome.result()));
	else
		return GetHourlyStatisticsDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getHourlyStatisticsDataAsync(const GetHourlyStatisticsDataRequest& request, const GetHourlyStatisticsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHourlyStatisticsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetHourlyStatisticsDataOutcomeCallable Cusanalytic_sc_onlineClient::getHourlyStatisticsDataCallable(const GetHourlyStatisticsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHourlyStatisticsDataOutcome()>>(
			[this, request]()
			{
			return this->getHourlyStatisticsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetImageUrlOutcome Cusanalytic_sc_onlineClient::getImageUrl(const GetImageUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageUrlOutcome(GetImageUrlResult(outcome.result()));
	else
		return GetImageUrlOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getImageUrlAsync(const GetImageUrlRequest& request, const GetImageUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImageUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetImageUrlOutcomeCallable Cusanalytic_sc_onlineClient::getImageUrlCallable(const GetImageUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageUrlOutcome()>>(
			[this, request]()
			{
			return this->getImageUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetLocationsOutcome Cusanalytic_sc_onlineClient::getLocations(const GetLocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLocationsOutcome(GetLocationsResult(outcome.result()));
	else
		return GetLocationsOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getLocationsAsync(const GetLocationsRequest& request, const GetLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetLocationsOutcomeCallable Cusanalytic_sc_onlineClient::getLocationsCallable(const GetLocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLocationsOutcome()>>(
			[this, request]()
			{
			return this->getLocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetMin5StatisticsDataOutcome Cusanalytic_sc_onlineClient::getMin5StatisticsData(const GetMin5StatisticsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMin5StatisticsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMin5StatisticsDataOutcome(GetMin5StatisticsDataResult(outcome.result()));
	else
		return GetMin5StatisticsDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getMin5StatisticsDataAsync(const GetMin5StatisticsDataRequest& request, const GetMin5StatisticsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMin5StatisticsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetMin5StatisticsDataOutcomeCallable Cusanalytic_sc_onlineClient::getMin5StatisticsDataCallable(const GetMin5StatisticsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMin5StatisticsDataOutcome()>>(
			[this, request]()
			{
			return this->getMin5StatisticsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetOverviewDataOutcome Cusanalytic_sc_onlineClient::getOverviewData(const GetOverviewDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOverviewDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOverviewDataOutcome(GetOverviewDataResult(outcome.result()));
	else
		return GetOverviewDataOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getOverviewDataAsync(const GetOverviewDataRequest& request, const GetOverviewDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOverviewData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetOverviewDataOutcomeCallable Cusanalytic_sc_onlineClient::getOverviewDataCallable(const GetOverviewDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOverviewDataOutcome()>>(
			[this, request]()
			{
			return this->getOverviewData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetPersonInStore5MinOutcome Cusanalytic_sc_onlineClient::getPersonInStore5Min(const GetPersonInStore5MinRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPersonInStore5MinOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPersonInStore5MinOutcome(GetPersonInStore5MinResult(outcome.result()));
	else
		return GetPersonInStore5MinOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getPersonInStore5MinAsync(const GetPersonInStore5MinRequest& request, const GetPersonInStore5MinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPersonInStore5Min(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetPersonInStore5MinOutcomeCallable Cusanalytic_sc_onlineClient::getPersonInStore5MinCallable(const GetPersonInStore5MinRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPersonInStore5MinOutcome()>>(
			[this, request]()
			{
			return this->getPersonInStore5Min(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetPortrayalOutcome Cusanalytic_sc_onlineClient::getPortrayal(const GetPortrayalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPortrayalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPortrayalOutcome(GetPortrayalResult(outcome.result()));
	else
		return GetPortrayalOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getPortrayalAsync(const GetPortrayalRequest& request, const GetPortrayalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPortrayal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetPortrayalOutcomeCallable Cusanalytic_sc_onlineClient::getPortrayalCallable(const GetPortrayalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPortrayalOutcome()>>(
			[this, request]()
			{
			return this->getPortrayal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetRoiRankingOutcome Cusanalytic_sc_onlineClient::getRoiRanking(const GetRoiRankingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRoiRankingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRoiRankingOutcome(GetRoiRankingResult(outcome.result()));
	else
		return GetRoiRankingOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getRoiRankingAsync(const GetRoiRankingRequest& request, const GetRoiRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRoiRanking(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetRoiRankingOutcomeCallable Cusanalytic_sc_onlineClient::getRoiRankingCallable(const GetRoiRankingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRoiRankingOutcome()>>(
			[this, request]()
			{
			return this->getRoiRanking(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetStayDistributionOutcome Cusanalytic_sc_onlineClient::getStayDistribution(const GetStayDistributionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStayDistributionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStayDistributionOutcome(GetStayDistributionResult(outcome.result()));
	else
		return GetStayDistributionOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getStayDistributionAsync(const GetStayDistributionRequest& request, const GetStayDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStayDistribution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetStayDistributionOutcomeCallable Cusanalytic_sc_onlineClient::getStayDistributionCallable(const GetStayDistributionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStayDistributionOutcome()>>(
			[this, request]()
			{
			return this->getStayDistribution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::GetSupportStoreOutcome Cusanalytic_sc_onlineClient::getSupportStore(const GetSupportStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSupportStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSupportStoreOutcome(GetSupportStoreResult(outcome.result()));
	else
		return GetSupportStoreOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::getSupportStoreAsync(const GetSupportStoreRequest& request, const GetSupportStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSupportStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::GetSupportStoreOutcomeCallable Cusanalytic_sc_onlineClient::getSupportStoreCallable(const GetSupportStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSupportStoreOutcome()>>(
			[this, request]()
			{
			return this->getSupportStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::ListVisitorsOutcome Cusanalytic_sc_onlineClient::listVisitors(const ListVisitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVisitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVisitorsOutcome(ListVisitorsResult(outcome.result()));
	else
		return ListVisitorsOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::listVisitorsAsync(const ListVisitorsRequest& request, const ListVisitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVisitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::ListVisitorsOutcomeCallable Cusanalytic_sc_onlineClient::listVisitorsCallable(const ListVisitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVisitorsOutcome()>>(
			[this, request]()
			{
			return this->listVisitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::MemberSynchronousOutcome Cusanalytic_sc_onlineClient::memberSynchronous(const MemberSynchronousRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MemberSynchronousOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MemberSynchronousOutcome(MemberSynchronousResult(outcome.result()));
	else
		return MemberSynchronousOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::memberSynchronousAsync(const MemberSynchronousRequest& request, const MemberSynchronousAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, memberSynchronous(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::MemberSynchronousOutcomeCallable Cusanalytic_sc_onlineClient::memberSynchronousCallable(const MemberSynchronousRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MemberSynchronousOutcome()>>(
			[this, request]()
			{
			return this->memberSynchronous(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cusanalytic_sc_onlineClient::SearchPersonByImgOutcome Cusanalytic_sc_onlineClient::searchPersonByImg(const SearchPersonByImgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchPersonByImgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchPersonByImgOutcome(SearchPersonByImgResult(outcome.result()));
	else
		return SearchPersonByImgOutcome(outcome.error());
}

void Cusanalytic_sc_onlineClient::searchPersonByImgAsync(const SearchPersonByImgRequest& request, const SearchPersonByImgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchPersonByImg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cusanalytic_sc_onlineClient::SearchPersonByImgOutcomeCallable Cusanalytic_sc_onlineClient::searchPersonByImgCallable(const SearchPersonByImgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchPersonByImgOutcome()>>(
			[this, request]()
			{
			return this->searchPersonByImg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

