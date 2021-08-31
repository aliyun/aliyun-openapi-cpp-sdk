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

#include <alibabacloud/reid_cloud/Reid_cloudClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

namespace
{
	const std::string SERVICE_NAME = "reid_cloud";
}

Reid_cloudClient::Reid_cloudClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "1.2.2");
}

Reid_cloudClient::Reid_cloudClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "1.2.2");
}

Reid_cloudClient::Reid_cloudClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "1.2.2");
}

Reid_cloudClient::~Reid_cloudClient()
{}

Reid_cloudClient::DescribeBaseStatisticsOutcome Reid_cloudClient::describeBaseStatistics(const DescribeBaseStatisticsRequest &request) const
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

void Reid_cloudClient::describeBaseStatisticsAsync(const DescribeBaseStatisticsRequest& request, const DescribeBaseStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBaseStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeBaseStatisticsOutcomeCallable Reid_cloudClient::describeBaseStatisticsCallable(const DescribeBaseStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBaseStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeBaseStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeCameraStatisticsOutcome Reid_cloudClient::describeCameraStatistics(const DescribeCameraStatisticsRequest &request) const
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

void Reid_cloudClient::describeCameraStatisticsAsync(const DescribeCameraStatisticsRequest& request, const DescribeCameraStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCameraStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeCameraStatisticsOutcomeCallable Reid_cloudClient::describeCameraStatisticsCallable(const DescribeCameraStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCameraStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeCameraStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeCursorOutcome Reid_cloudClient::describeCursor(const DescribeCursorRequest &request) const
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

void Reid_cloudClient::describeCursorAsync(const DescribeCursorRequest& request, const DescribeCursorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCursor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeCursorOutcomeCallable Reid_cloudClient::describeCursorCallable(const DescribeCursorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCursorOutcome()>>(
			[this, request]()
			{
			return this->describeCursor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeCustomerFlowByLocationOutcome Reid_cloudClient::describeCustomerFlowByLocation(const DescribeCustomerFlowByLocationRequest &request) const
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

void Reid_cloudClient::describeCustomerFlowByLocationAsync(const DescribeCustomerFlowByLocationRequest& request, const DescribeCustomerFlowByLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomerFlowByLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeCustomerFlowByLocationOutcomeCallable Reid_cloudClient::describeCustomerFlowByLocationCallable(const DescribeCustomerFlowByLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomerFlowByLocationOutcome()>>(
			[this, request]()
			{
			return this->describeCustomerFlowByLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeCustomerFlowByLocationOfflineOutcome Reid_cloudClient::describeCustomerFlowByLocationOffline(const DescribeCustomerFlowByLocationOfflineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomerFlowByLocationOfflineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomerFlowByLocationOfflineOutcome(DescribeCustomerFlowByLocationOfflineResult(outcome.result()));
	else
		return DescribeCustomerFlowByLocationOfflineOutcome(outcome.error());
}

void Reid_cloudClient::describeCustomerFlowByLocationOfflineAsync(const DescribeCustomerFlowByLocationOfflineRequest& request, const DescribeCustomerFlowByLocationOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomerFlowByLocationOffline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeCustomerFlowByLocationOfflineOutcomeCallable Reid_cloudClient::describeCustomerFlowByLocationOfflineCallable(const DescribeCustomerFlowByLocationOfflineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomerFlowByLocationOfflineOutcome()>>(
			[this, request]()
			{
			return this->describeCustomerFlowByLocationOffline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeDevicesOutcome Reid_cloudClient::describeDevices(const DescribeDevicesRequest &request) const
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

void Reid_cloudClient::describeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeDevicesOutcomeCallable Reid_cloudClient::describeDevicesCallable(const DescribeDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeHeatMapOutcome Reid_cloudClient::describeHeatMap(const DescribeHeatMapRequest &request) const
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

void Reid_cloudClient::describeHeatMapAsync(const DescribeHeatMapRequest& request, const DescribeHeatMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHeatMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeHeatMapOutcomeCallable Reid_cloudClient::describeHeatMapCallable(const DescribeHeatMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHeatMapOutcome()>>(
			[this, request]()
			{
			return this->describeHeatMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeImageUrlsOutcome Reid_cloudClient::describeImageUrls(const DescribeImageUrlsRequest &request) const
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

void Reid_cloudClient::describeImageUrlsAsync(const DescribeImageUrlsRequest& request, const DescribeImageUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageUrls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeImageUrlsOutcomeCallable Reid_cloudClient::describeImageUrlsCallable(const DescribeImageUrlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageUrlsOutcome()>>(
			[this, request]()
			{
			return this->describeImageUrls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeIpcLiveAddressOutcome Reid_cloudClient::describeIpcLiveAddress(const DescribeIpcLiveAddressRequest &request) const
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

void Reid_cloudClient::describeIpcLiveAddressAsync(const DescribeIpcLiveAddressRequest& request, const DescribeIpcLiveAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpcLiveAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeIpcLiveAddressOutcomeCallable Reid_cloudClient::describeIpcLiveAddressCallable(const DescribeIpcLiveAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpcLiveAddressOutcome()>>(
			[this, request]()
			{
			return this->describeIpcLiveAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::DescribeOverviewDataOutcome Reid_cloudClient::describeOverviewData(const DescribeOverviewDataRequest &request) const
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

void Reid_cloudClient::describeOverviewDataAsync(const DescribeOverviewDataRequest& request, const DescribeOverviewDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOverviewData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::DescribeOverviewDataOutcomeCallable Reid_cloudClient::describeOverviewDataCallable(const DescribeOverviewDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOverviewDataOutcome()>>(
			[this, request]()
			{
			return this->describeOverviewData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ImportSpecialPersonnelOutcome Reid_cloudClient::importSpecialPersonnel(const ImportSpecialPersonnelRequest &request) const
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

void Reid_cloudClient::importSpecialPersonnelAsync(const ImportSpecialPersonnelRequest& request, const ImportSpecialPersonnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importSpecialPersonnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ImportSpecialPersonnelOutcomeCallable Reid_cloudClient::importSpecialPersonnelCallable(const ImportSpecialPersonnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportSpecialPersonnelOutcome()>>(
			[this, request]()
			{
			return this->importSpecialPersonnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ListActionDataOutcome Reid_cloudClient::listActionData(const ListActionDataRequest &request) const
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

void Reid_cloudClient::listActionDataAsync(const ListActionDataRequest& request, const ListActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listActionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ListActionDataOutcomeCallable Reid_cloudClient::listActionDataCallable(const ListActionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListActionDataOutcome()>>(
			[this, request]()
			{
			return this->listActionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ListDevicesImagesOutcome Reid_cloudClient::listDevicesImages(const ListDevicesImagesRequest &request) const
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

void Reid_cloudClient::listDevicesImagesAsync(const ListDevicesImagesRequest& request, const ListDevicesImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevicesImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ListDevicesImagesOutcomeCallable Reid_cloudClient::listDevicesImagesCallable(const ListDevicesImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevicesImagesOutcome()>>(
			[this, request]()
			{
			return this->listDevicesImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ListEmapOutcome Reid_cloudClient::listEmap(const ListEmapRequest &request) const
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

void Reid_cloudClient::listEmapAsync(const ListEmapRequest& request, const ListEmapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ListEmapOutcomeCallable Reid_cloudClient::listEmapCallable(const ListEmapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmapOutcome()>>(
			[this, request]()
			{
			return this->listEmap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ListLocationOutcome Reid_cloudClient::listLocation(const ListLocationRequest &request) const
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

void Reid_cloudClient::listLocationAsync(const ListLocationRequest& request, const ListLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ListLocationOutcomeCallable Reid_cloudClient::listLocationCallable(const ListLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLocationOutcome()>>(
			[this, request]()
			{
			return this->listLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ListMaskDetectionResultsOutcome Reid_cloudClient::listMaskDetectionResults(const ListMaskDetectionResultsRequest &request) const
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

void Reid_cloudClient::listMaskDetectionResultsAsync(const ListMaskDetectionResultsRequest& request, const ListMaskDetectionResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMaskDetectionResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ListMaskDetectionResultsOutcomeCallable Reid_cloudClient::listMaskDetectionResultsCallable(const ListMaskDetectionResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMaskDetectionResultsOutcome()>>(
			[this, request]()
			{
			return this->listMaskDetectionResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ListPersonByImageOutcome Reid_cloudClient::listPersonByImage(const ListPersonByImageRequest &request) const
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

void Reid_cloudClient::listPersonByImageAsync(const ListPersonByImageRequest& request, const ListPersonByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonByImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ListPersonByImageOutcomeCallable Reid_cloudClient::listPersonByImageCallable(const ListPersonByImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonByImageOutcome()>>(
			[this, request]()
			{
			return this->listPersonByImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ListSpecialPersonnelByImageOutcome Reid_cloudClient::listSpecialPersonnelByImage(const ListSpecialPersonnelByImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSpecialPersonnelByImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSpecialPersonnelByImageOutcome(ListSpecialPersonnelByImageResult(outcome.result()));
	else
		return ListSpecialPersonnelByImageOutcome(outcome.error());
}

void Reid_cloudClient::listSpecialPersonnelByImageAsync(const ListSpecialPersonnelByImageRequest& request, const ListSpecialPersonnelByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSpecialPersonnelByImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ListSpecialPersonnelByImageOutcomeCallable Reid_cloudClient::listSpecialPersonnelByImageCallable(const ListSpecialPersonnelByImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSpecialPersonnelByImageOutcome()>>(
			[this, request]()
			{
			return this->listSpecialPersonnelByImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::ListStoreOutcome Reid_cloudClient::listStore(const ListStoreRequest &request) const
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

void Reid_cloudClient::listStoreAsync(const ListStoreRequest& request, const ListStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::ListStoreOutcomeCallable Reid_cloudClient::listStoreCallable(const ListStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStoreOutcome()>>(
			[this, request]()
			{
			return this->listStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Reid_cloudClient::PullActionDataOutcome Reid_cloudClient::pullActionData(const PullActionDataRequest &request) const
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

void Reid_cloudClient::pullActionDataAsync(const PullActionDataRequest& request, const PullActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullActionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Reid_cloudClient::PullActionDataOutcomeCallable Reid_cloudClient::pullActionDataCallable(const PullActionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullActionDataOutcome()>>(
			[this, request]()
			{
			return this->pullActionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

