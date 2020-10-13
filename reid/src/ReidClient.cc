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

#include <alibabacloud/reid/ReidClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Reid;
using namespace AlibabaCloud::Reid::Model;

namespace
{
	const std::string SERVICE_NAME = "reid";
}

ReidClient::ReidClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "1.1.8.5");
}

ReidClient::ReidClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "1.1.8.5");
}

ReidClient::ReidClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "1.1.8.5");
}

ReidClient::~ReidClient()
{}

ReidClient::DescribeBaseStatisticsOutcome ReidClient::describeBaseStatistics(const DescribeBaseStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBaseStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBaseStatisticsOutcome(DescribeBaseStatisticsResult(outcome.result()));
	else
		return DescribeBaseStatisticsOutcome(outcome.error());
}

void ReidClient::describeBaseStatisticsAsync(const DescribeBaseStatisticsRequest& request, const DescribeBaseStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBaseStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeBaseStatisticsOutcomeCallable ReidClient::describeBaseStatisticsCallable(const DescribeBaseStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBaseStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeBaseStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::DescribeCameraStatisticsOutcome ReidClient::describeCameraStatistics(const DescribeCameraStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCameraStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCameraStatisticsOutcome(DescribeCameraStatisticsResult(outcome.result()));
	else
		return DescribeCameraStatisticsOutcome(outcome.error());
}

void ReidClient::describeCameraStatisticsAsync(const DescribeCameraStatisticsRequest& request, const DescribeCameraStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCameraStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeCameraStatisticsOutcomeCallable ReidClient::describeCameraStatisticsCallable(const DescribeCameraStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCameraStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeCameraStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::DescribeCursorOutcome ReidClient::describeCursor(const DescribeCursorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCursorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCursorOutcome(DescribeCursorResult(outcome.result()));
	else
		return DescribeCursorOutcome(outcome.error());
}

void ReidClient::describeCursorAsync(const DescribeCursorRequest& request, const DescribeCursorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCursor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeCursorOutcomeCallable ReidClient::describeCursorCallable(const DescribeCursorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCursorOutcome()>>(
			[this, request]()
			{
			return this->describeCursor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::DescribeCustomerFlowByLocationOutcome ReidClient::describeCustomerFlowByLocation(const DescribeCustomerFlowByLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomerFlowByLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomerFlowByLocationOutcome(DescribeCustomerFlowByLocationResult(outcome.result()));
	else
		return DescribeCustomerFlowByLocationOutcome(outcome.error());
}

void ReidClient::describeCustomerFlowByLocationAsync(const DescribeCustomerFlowByLocationRequest& request, const DescribeCustomerFlowByLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomerFlowByLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeCustomerFlowByLocationOutcomeCallable ReidClient::describeCustomerFlowByLocationCallable(const DescribeCustomerFlowByLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomerFlowByLocationOutcome()>>(
			[this, request]()
			{
			return this->describeCustomerFlowByLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::DescribeDevicesOutcome ReidClient::describeDevices(const DescribeDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDevicesOutcome(DescribeDevicesResult(outcome.result()));
	else
		return DescribeDevicesOutcome(outcome.error());
}

void ReidClient::describeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeDevicesOutcomeCallable ReidClient::describeDevicesCallable(const DescribeDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::DescribeHeatMapOutcome ReidClient::describeHeatMap(const DescribeHeatMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHeatMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHeatMapOutcome(DescribeHeatMapResult(outcome.result()));
	else
		return DescribeHeatMapOutcome(outcome.error());
}

void ReidClient::describeHeatMapAsync(const DescribeHeatMapRequest& request, const DescribeHeatMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHeatMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeHeatMapOutcomeCallable ReidClient::describeHeatMapCallable(const DescribeHeatMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHeatMapOutcome()>>(
			[this, request]()
			{
			return this->describeHeatMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::DescribeImageUrlsOutcome ReidClient::describeImageUrls(const DescribeImageUrlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageUrlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageUrlsOutcome(DescribeImageUrlsResult(outcome.result()));
	else
		return DescribeImageUrlsOutcome(outcome.error());
}

void ReidClient::describeImageUrlsAsync(const DescribeImageUrlsRequest& request, const DescribeImageUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageUrls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeImageUrlsOutcomeCallable ReidClient::describeImageUrlsCallable(const DescribeImageUrlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageUrlsOutcome()>>(
			[this, request]()
			{
			return this->describeImageUrls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::DescribeIpcLiveAddressOutcome ReidClient::describeIpcLiveAddress(const DescribeIpcLiveAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpcLiveAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpcLiveAddressOutcome(DescribeIpcLiveAddressResult(outcome.result()));
	else
		return DescribeIpcLiveAddressOutcome(outcome.error());
}

void ReidClient::describeIpcLiveAddressAsync(const DescribeIpcLiveAddressRequest& request, const DescribeIpcLiveAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpcLiveAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeIpcLiveAddressOutcomeCallable ReidClient::describeIpcLiveAddressCallable(const DescribeIpcLiveAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpcLiveAddressOutcome()>>(
			[this, request]()
			{
			return this->describeIpcLiveAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::DescribeOverviewDataOutcome ReidClient::describeOverviewData(const DescribeOverviewDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOverviewDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOverviewDataOutcome(DescribeOverviewDataResult(outcome.result()));
	else
		return DescribeOverviewDataOutcome(outcome.error());
}

void ReidClient::describeOverviewDataAsync(const DescribeOverviewDataRequest& request, const DescribeOverviewDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOverviewData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::DescribeOverviewDataOutcomeCallable ReidClient::describeOverviewDataCallable(const DescribeOverviewDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOverviewDataOutcome()>>(
			[this, request]()
			{
			return this->describeOverviewData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::GetFootwearEventOutcome ReidClient::getFootwearEvent(const GetFootwearEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFootwearEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFootwearEventOutcome(GetFootwearEventResult(outcome.result()));
	else
		return GetFootwearEventOutcome(outcome.error());
}

void ReidClient::getFootwearEventAsync(const GetFootwearEventRequest& request, const GetFootwearEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFootwearEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::GetFootwearEventOutcomeCallable ReidClient::getFootwearEventCallable(const GetFootwearEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFootwearEventOutcome()>>(
			[this, request]()
			{
			return this->getFootwearEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::GetFootwearPositionOutcome ReidClient::getFootwearPosition(const GetFootwearPositionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFootwearPositionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFootwearPositionOutcome(GetFootwearPositionResult(outcome.result()));
	else
		return GetFootwearPositionOutcome(outcome.error());
}

void ReidClient::getFootwearPositionAsync(const GetFootwearPositionRequest& request, const GetFootwearPositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFootwearPosition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::GetFootwearPositionOutcomeCallable ReidClient::getFootwearPositionCallable(const GetFootwearPositionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFootwearPositionOutcome()>>(
			[this, request]()
			{
			return this->getFootwearPosition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::ImportSpecialPersonnelOutcome ReidClient::importSpecialPersonnel(const ImportSpecialPersonnelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportSpecialPersonnelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportSpecialPersonnelOutcome(ImportSpecialPersonnelResult(outcome.result()));
	else
		return ImportSpecialPersonnelOutcome(outcome.error());
}

void ReidClient::importSpecialPersonnelAsync(const ImportSpecialPersonnelRequest& request, const ImportSpecialPersonnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importSpecialPersonnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::ImportSpecialPersonnelOutcomeCallable ReidClient::importSpecialPersonnelCallable(const ImportSpecialPersonnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportSpecialPersonnelOutcome()>>(
			[this, request]()
			{
			return this->importSpecialPersonnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::ListActionDataOutcome ReidClient::listActionData(const ListActionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListActionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListActionDataOutcome(ListActionDataResult(outcome.result()));
	else
		return ListActionDataOutcome(outcome.error());
}

void ReidClient::listActionDataAsync(const ListActionDataRequest& request, const ListActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listActionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::ListActionDataOutcomeCallable ReidClient::listActionDataCallable(const ListActionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListActionDataOutcome()>>(
			[this, request]()
			{
			return this->listActionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::ListDevicesImagesOutcome ReidClient::listDevicesImages(const ListDevicesImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevicesImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevicesImagesOutcome(ListDevicesImagesResult(outcome.result()));
	else
		return ListDevicesImagesOutcome(outcome.error());
}

void ReidClient::listDevicesImagesAsync(const ListDevicesImagesRequest& request, const ListDevicesImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevicesImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::ListDevicesImagesOutcomeCallable ReidClient::listDevicesImagesCallable(const ListDevicesImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevicesImagesOutcome()>>(
			[this, request]()
			{
			return this->listDevicesImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::ListEmapOutcome ReidClient::listEmap(const ListEmapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmapOutcome(ListEmapResult(outcome.result()));
	else
		return ListEmapOutcome(outcome.error());
}

void ReidClient::listEmapAsync(const ListEmapRequest& request, const ListEmapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::ListEmapOutcomeCallable ReidClient::listEmapCallable(const ListEmapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmapOutcome()>>(
			[this, request]()
			{
			return this->listEmap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::ListLocationOutcome ReidClient::listLocation(const ListLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLocationOutcome(ListLocationResult(outcome.result()));
	else
		return ListLocationOutcome(outcome.error());
}

void ReidClient::listLocationAsync(const ListLocationRequest& request, const ListLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::ListLocationOutcomeCallable ReidClient::listLocationCallable(const ListLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLocationOutcome()>>(
			[this, request]()
			{
			return this->listLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::ListMaskDetectionResultsOutcome ReidClient::listMaskDetectionResults(const ListMaskDetectionResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMaskDetectionResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMaskDetectionResultsOutcome(ListMaskDetectionResultsResult(outcome.result()));
	else
		return ListMaskDetectionResultsOutcome(outcome.error());
}

void ReidClient::listMaskDetectionResultsAsync(const ListMaskDetectionResultsRequest& request, const ListMaskDetectionResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMaskDetectionResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::ListMaskDetectionResultsOutcomeCallable ReidClient::listMaskDetectionResultsCallable(const ListMaskDetectionResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMaskDetectionResultsOutcome()>>(
			[this, request]()
			{
			return this->listMaskDetectionResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::ListPersonByImageOutcome ReidClient::listPersonByImage(const ListPersonByImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonByImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonByImageOutcome(ListPersonByImageResult(outcome.result()));
	else
		return ListPersonByImageOutcome(outcome.error());
}

void ReidClient::listPersonByImageAsync(const ListPersonByImageRequest& request, const ListPersonByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonByImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::ListPersonByImageOutcomeCallable ReidClient::listPersonByImageCallable(const ListPersonByImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonByImageOutcome()>>(
			[this, request]()
			{
			return this->listPersonByImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::ListStoreOutcome ReidClient::listStore(const ListStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStoreOutcome(ListStoreResult(outcome.result()));
	else
		return ListStoreOutcome(outcome.error());
}

void ReidClient::listStoreAsync(const ListStoreRequest& request, const ListStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::ListStoreOutcomeCallable ReidClient::listStoreCallable(const ListStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStoreOutcome()>>(
			[this, request]()
			{
			return this->listStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::PullActionDataOutcome ReidClient::pullActionData(const PullActionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullActionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullActionDataOutcome(PullActionDataResult(outcome.result()));
	else
		return PullActionDataOutcome(outcome.error());
}

void ReidClient::pullActionDataAsync(const PullActionDataRequest& request, const PullActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullActionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::PullActionDataOutcomeCallable ReidClient::pullActionDataCallable(const PullActionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullActionDataOutcome()>>(
			[this, request]()
			{
			return this->pullActionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::PullTakeShoesEventOutcome ReidClient::pullTakeShoesEvent(const PullTakeShoesEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullTakeShoesEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullTakeShoesEventOutcome(PullTakeShoesEventResult(outcome.result()));
	else
		return PullTakeShoesEventOutcome(outcome.error());
}

void ReidClient::pullTakeShoesEventAsync(const PullTakeShoesEventRequest& request, const PullTakeShoesEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullTakeShoesEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::PullTakeShoesEventOutcomeCallable ReidClient::pullTakeShoesEventCallable(const PullTakeShoesEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullTakeShoesEventOutcome()>>(
			[this, request]()
			{
			return this->pullTakeShoesEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ReidClient::PullTryOnShoesEventOutcome ReidClient::pullTryOnShoesEvent(const PullTryOnShoesEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullTryOnShoesEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullTryOnShoesEventOutcome(PullTryOnShoesEventResult(outcome.result()));
	else
		return PullTryOnShoesEventOutcome(outcome.error());
}

void ReidClient::pullTryOnShoesEventAsync(const PullTryOnShoesEventRequest& request, const PullTryOnShoesEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullTryOnShoesEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ReidClient::PullTryOnShoesEventOutcomeCallable ReidClient::pullTryOnShoesEventCallable(const PullTryOnShoesEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullTryOnShoesEventOutcome()>>(
			[this, request]()
			{
			return this->pullTryOnShoesEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

