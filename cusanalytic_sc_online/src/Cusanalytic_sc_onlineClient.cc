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

