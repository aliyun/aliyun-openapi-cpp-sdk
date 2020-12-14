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

#include <alibabacloud/cdrs/CDRSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

namespace
{
	const std::string SERVICE_NAME = "CDRS";
}

CDRSClient::CDRSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CDRSClient::CDRSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CDRSClient::CDRSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CDRSClient::~CDRSClient()
{}

CDRSClient::ListCityMapAoisOutcome CDRSClient::listCityMapAois(const ListCityMapAoisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCityMapAoisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCityMapAoisOutcome(ListCityMapAoisResult(outcome.result()));
	else
		return ListCityMapAoisOutcome(outcome.error());
}

void CDRSClient::listCityMapAoisAsync(const ListCityMapAoisRequest& request, const ListCityMapAoisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCityMapAois(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListCityMapAoisOutcomeCallable CDRSClient::listCityMapAoisCallable(const ListCityMapAoisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCityMapAoisOutcome()>>(
			[this, request]()
			{
			return this->listCityMapAois(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListCityMapCameraResultsOutcome CDRSClient::listCityMapCameraResults(const ListCityMapCameraResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCityMapCameraResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCityMapCameraResultsOutcome(ListCityMapCameraResultsResult(outcome.result()));
	else
		return ListCityMapCameraResultsOutcome(outcome.error());
}

void CDRSClient::listCityMapCameraResultsAsync(const ListCityMapCameraResultsRequest& request, const ListCityMapCameraResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCityMapCameraResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListCityMapCameraResultsOutcomeCallable CDRSClient::listCityMapCameraResultsCallable(const ListCityMapCameraResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCityMapCameraResultsOutcome()>>(
			[this, request]()
			{
			return this->listCityMapCameraResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListCityMapCameraStatisticsOutcome CDRSClient::listCityMapCameraStatistics(const ListCityMapCameraStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCityMapCameraStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCityMapCameraStatisticsOutcome(ListCityMapCameraStatisticsResult(outcome.result()));
	else
		return ListCityMapCameraStatisticsOutcome(outcome.error());
}

void CDRSClient::listCityMapCameraStatisticsAsync(const ListCityMapCameraStatisticsRequest& request, const ListCityMapCameraStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCityMapCameraStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListCityMapCameraStatisticsOutcomeCallable CDRSClient::listCityMapCameraStatisticsCallable(const ListCityMapCameraStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCityMapCameraStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listCityMapCameraStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListCityMapImageDetailsOutcome CDRSClient::listCityMapImageDetails(const ListCityMapImageDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCityMapImageDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCityMapImageDetailsOutcome(ListCityMapImageDetailsResult(outcome.result()));
	else
		return ListCityMapImageDetailsOutcome(outcome.error());
}

void CDRSClient::listCityMapImageDetailsAsync(const ListCityMapImageDetailsRequest& request, const ListCityMapImageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCityMapImageDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListCityMapImageDetailsOutcomeCallable CDRSClient::listCityMapImageDetailsCallable(const ListCityMapImageDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCityMapImageDetailsOutcome()>>(
			[this, request]()
			{
			return this->listCityMapImageDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListCityMapPersonFlowOutcome CDRSClient::listCityMapPersonFlow(const ListCityMapPersonFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCityMapPersonFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCityMapPersonFlowOutcome(ListCityMapPersonFlowResult(outcome.result()));
	else
		return ListCityMapPersonFlowOutcome(outcome.error());
}

void CDRSClient::listCityMapPersonFlowAsync(const ListCityMapPersonFlowRequest& request, const ListCityMapPersonFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCityMapPersonFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListCityMapPersonFlowOutcomeCallable CDRSClient::listCityMapPersonFlowCallable(const ListCityMapPersonFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCityMapPersonFlowOutcome()>>(
			[this, request]()
			{
			return this->listCityMapPersonFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListCityMapRangeStatisticOutcome CDRSClient::listCityMapRangeStatistic(const ListCityMapRangeStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCityMapRangeStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCityMapRangeStatisticOutcome(ListCityMapRangeStatisticResult(outcome.result()));
	else
		return ListCityMapRangeStatisticOutcome(outcome.error());
}

void CDRSClient::listCityMapRangeStatisticAsync(const ListCityMapRangeStatisticRequest& request, const ListCityMapRangeStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCityMapRangeStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListCityMapRangeStatisticOutcomeCallable CDRSClient::listCityMapRangeStatisticCallable(const ListCityMapRangeStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCityMapRangeStatisticOutcome()>>(
			[this, request]()
			{
			return this->listCityMapRangeStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListDataStatisticsOutcome CDRSClient::listDataStatistics(const ListDataStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataStatisticsOutcome(ListDataStatisticsResult(outcome.result()));
	else
		return ListDataStatisticsOutcome(outcome.error());
}

void CDRSClient::listDataStatisticsAsync(const ListDataStatisticsRequest& request, const ListDataStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListDataStatisticsOutcomeCallable CDRSClient::listDataStatisticsCallable(const ListDataStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listDataStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListDataStatisticsByDayOutcome CDRSClient::listDataStatisticsByDay(const ListDataStatisticsByDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataStatisticsByDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataStatisticsByDayOutcome(ListDataStatisticsByDayResult(outcome.result()));
	else
		return ListDataStatisticsByDayOutcome(outcome.error());
}

void CDRSClient::listDataStatisticsByDayAsync(const ListDataStatisticsByDayRequest& request, const ListDataStatisticsByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataStatisticsByDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListDataStatisticsByDayOutcomeCallable CDRSClient::listDataStatisticsByDayCallable(const ListDataStatisticsByDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataStatisticsByDayOutcome()>>(
			[this, request]()
			{
			return this->listDataStatisticsByDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListDeviceDetailOutcome CDRSClient::listDeviceDetail(const ListDeviceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceDetailOutcome(ListDeviceDetailResult(outcome.result()));
	else
		return ListDeviceDetailOutcome(outcome.error());
}

void CDRSClient::listDeviceDetailAsync(const ListDeviceDetailRequest& request, const ListDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListDeviceDetailOutcomeCallable CDRSClient::listDeviceDetailCallable(const ListDeviceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceDetailOutcome()>>(
			[this, request]()
			{
			return this->listDeviceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListDeviceGenderStatisticsOutcome CDRSClient::listDeviceGenderStatistics(const ListDeviceGenderStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceGenderStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceGenderStatisticsOutcome(ListDeviceGenderStatisticsResult(outcome.result()));
	else
		return ListDeviceGenderStatisticsOutcome(outcome.error());
}

void CDRSClient::listDeviceGenderStatisticsAsync(const ListDeviceGenderStatisticsRequest& request, const ListDeviceGenderStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceGenderStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListDeviceGenderStatisticsOutcomeCallable CDRSClient::listDeviceGenderStatisticsCallable(const ListDeviceGenderStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceGenderStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listDeviceGenderStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListDevicePersonOutcome CDRSClient::listDevicePerson(const ListDevicePersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevicePersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevicePersonOutcome(ListDevicePersonResult(outcome.result()));
	else
		return ListDevicePersonOutcome(outcome.error());
}

void CDRSClient::listDevicePersonAsync(const ListDevicePersonRequest& request, const ListDevicePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevicePerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListDevicePersonOutcomeCallable CDRSClient::listDevicePersonCallable(const ListDevicePersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevicePersonOutcome()>>(
			[this, request]()
			{
			return this->listDevicePerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListDevicePersonStatisticsOutcome CDRSClient::listDevicePersonStatistics(const ListDevicePersonStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevicePersonStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevicePersonStatisticsOutcome(ListDevicePersonStatisticsResult(outcome.result()));
	else
		return ListDevicePersonStatisticsOutcome(outcome.error());
}

void CDRSClient::listDevicePersonStatisticsAsync(const ListDevicePersonStatisticsRequest& request, const ListDevicePersonStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevicePersonStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListDevicePersonStatisticsOutcomeCallable CDRSClient::listDevicePersonStatisticsCallable(const ListDevicePersonStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevicePersonStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listDevicePersonStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListMapRouteDetailsOutcome CDRSClient::listMapRouteDetails(const ListMapRouteDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMapRouteDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMapRouteDetailsOutcome(ListMapRouteDetailsResult(outcome.result()));
	else
		return ListMapRouteDetailsOutcome(outcome.error());
}

void CDRSClient::listMapRouteDetailsAsync(const ListMapRouteDetailsRequest& request, const ListMapRouteDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMapRouteDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListMapRouteDetailsOutcomeCallable CDRSClient::listMapRouteDetailsCallable(const ListMapRouteDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMapRouteDetailsOutcome()>>(
			[this, request]()
			{
			return this->listMapRouteDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListPersonDetailsOutcome CDRSClient::listPersonDetails(const ListPersonDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonDetailsOutcome(ListPersonDetailsResult(outcome.result()));
	else
		return ListPersonDetailsOutcome(outcome.error());
}

void CDRSClient::listPersonDetailsAsync(const ListPersonDetailsRequest& request, const ListPersonDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListPersonDetailsOutcomeCallable CDRSClient::listPersonDetailsCallable(const ListPersonDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonDetailsOutcome()>>(
			[this, request]()
			{
			return this->listPersonDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListPersonResultOutcome CDRSClient::listPersonResult(const ListPersonResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonResultOutcome(ListPersonResultResult(outcome.result()));
	else
		return ListPersonResultOutcome(outcome.error());
}

void CDRSClient::listPersonResultAsync(const ListPersonResultRequest& request, const ListPersonResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListPersonResultOutcomeCallable CDRSClient::listPersonResultCallable(const ListPersonResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonResultOutcome()>>(
			[this, request]()
			{
			return this->listPersonResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListPersonTagOutcome CDRSClient::listPersonTag(const ListPersonTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonTagOutcome(ListPersonTagResult(outcome.result()));
	else
		return ListPersonTagOutcome(outcome.error());
}

void CDRSClient::listPersonTagAsync(const ListPersonTagRequest& request, const ListPersonTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListPersonTagOutcomeCallable CDRSClient::listPersonTagCallable(const ListPersonTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonTagOutcome()>>(
			[this, request]()
			{
			return this->listPersonTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListPersonTopOutcome CDRSClient::listPersonTop(const ListPersonTopRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonTopOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonTopOutcome(ListPersonTopResult(outcome.result()));
	else
		return ListPersonTopOutcome(outcome.error());
}

void CDRSClient::listPersonTopAsync(const ListPersonTopRequest& request, const ListPersonTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonTop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListPersonTopOutcomeCallable CDRSClient::listPersonTopCallable(const ListPersonTopRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonTopOutcome()>>(
			[this, request]()
			{
			return this->listPersonTop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListPersonTrackOutcome CDRSClient::listPersonTrack(const ListPersonTrackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonTrackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonTrackOutcome(ListPersonTrackResult(outcome.result()));
	else
		return ListPersonTrackOutcome(outcome.error());
}

void CDRSClient::listPersonTrackAsync(const ListPersonTrackRequest& request, const ListPersonTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonTrack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListPersonTrackOutcomeCallable CDRSClient::listPersonTrackCallable(const ListPersonTrackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonTrackOutcome()>>(
			[this, request]()
			{
			return this->listPersonTrack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListRangeDeviceOutcome CDRSClient::listRangeDevice(const ListRangeDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRangeDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRangeDeviceOutcome(ListRangeDeviceResult(outcome.result()));
	else
		return ListRangeDeviceOutcome(outcome.error());
}

void CDRSClient::listRangeDeviceAsync(const ListRangeDeviceRequest& request, const ListRangeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRangeDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListRangeDeviceOutcomeCallable CDRSClient::listRangeDeviceCallable(const ListRangeDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRangeDeviceOutcome()>>(
			[this, request]()
			{
			return this->listRangeDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListStorageStatisticsOutcome CDRSClient::listStorageStatistics(const ListStorageStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStorageStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStorageStatisticsOutcome(ListStorageStatisticsResult(outcome.result()));
	else
		return ListStorageStatisticsOutcome(outcome.error());
}

void CDRSClient::listStorageStatisticsAsync(const ListStorageStatisticsRequest& request, const ListStorageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStorageStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListStorageStatisticsOutcomeCallable CDRSClient::listStorageStatisticsCallable(const ListStorageStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStorageStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listStorageStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListStructureStatisticsOutcome CDRSClient::listStructureStatistics(const ListStructureStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStructureStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStructureStatisticsOutcome(ListStructureStatisticsResult(outcome.result()));
	else
		return ListStructureStatisticsOutcome(outcome.error());
}

void CDRSClient::listStructureStatisticsAsync(const ListStructureStatisticsRequest& request, const ListStructureStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStructureStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListStructureStatisticsOutcomeCallable CDRSClient::listStructureStatisticsCallable(const ListStructureStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStructureStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listStructureStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListVehicleDetailsOutcome CDRSClient::listVehicleDetails(const ListVehicleDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVehicleDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVehicleDetailsOutcome(ListVehicleDetailsResult(outcome.result()));
	else
		return ListVehicleDetailsOutcome(outcome.error());
}

void CDRSClient::listVehicleDetailsAsync(const ListVehicleDetailsRequest& request, const ListVehicleDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVehicleDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListVehicleDetailsOutcomeCallable CDRSClient::listVehicleDetailsCallable(const ListVehicleDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVehicleDetailsOutcome()>>(
			[this, request]()
			{
			return this->listVehicleDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListVehicleResultsOutcome CDRSClient::listVehicleResults(const ListVehicleResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVehicleResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVehicleResultsOutcome(ListVehicleResultsResult(outcome.result()));
	else
		return ListVehicleResultsOutcome(outcome.error());
}

void CDRSClient::listVehicleResultsAsync(const ListVehicleResultsRequest& request, const ListVehicleResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVehicleResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListVehicleResultsOutcomeCallable CDRSClient::listVehicleResultsCallable(const ListVehicleResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVehicleResultsOutcome()>>(
			[this, request]()
			{
			return this->listVehicleResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListVehicleTagDistributeOutcome CDRSClient::listVehicleTagDistribute(const ListVehicleTagDistributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVehicleTagDistributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVehicleTagDistributeOutcome(ListVehicleTagDistributeResult(outcome.result()));
	else
		return ListVehicleTagDistributeOutcome(outcome.error());
}

void CDRSClient::listVehicleTagDistributeAsync(const ListVehicleTagDistributeRequest& request, const ListVehicleTagDistributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVehicleTagDistribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListVehicleTagDistributeOutcomeCallable CDRSClient::listVehicleTagDistributeCallable(const ListVehicleTagDistributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVehicleTagDistributeOutcome()>>(
			[this, request]()
			{
			return this->listVehicleTagDistribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListVehicleTopOutcome CDRSClient::listVehicleTop(const ListVehicleTopRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVehicleTopOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVehicleTopOutcome(ListVehicleTopResult(outcome.result()));
	else
		return ListVehicleTopOutcome(outcome.error());
}

void CDRSClient::listVehicleTopAsync(const ListVehicleTopRequest& request, const ListVehicleTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVehicleTop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListVehicleTopOutcomeCallable CDRSClient::listVehicleTopCallable(const ListVehicleTopRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVehicleTopOutcome()>>(
			[this, request]()
			{
			return this->listVehicleTop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListVehicleTrackOutcome CDRSClient::listVehicleTrack(const ListVehicleTrackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVehicleTrackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVehicleTrackOutcome(ListVehicleTrackResult(outcome.result()));
	else
		return ListVehicleTrackOutcome(outcome.error());
}

void CDRSClient::listVehicleTrackAsync(const ListVehicleTrackRequest& request, const ListVehicleTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVehicleTrack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListVehicleTrackOutcomeCallable CDRSClient::listVehicleTrackCallable(const ListVehicleTrackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVehicleTrackOutcome()>>(
			[this, request]()
			{
			return this->listVehicleTrack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::RecognizeImageOutcome CDRSClient::recognizeImage(const RecognizeImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeImageOutcome(RecognizeImageResult(outcome.result()));
	else
		return RecognizeImageOutcome(outcome.error());
}

void CDRSClient::recognizeImageAsync(const RecognizeImageRequest& request, const RecognizeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::RecognizeImageOutcomeCallable CDRSClient::recognizeImageCallable(const RecognizeImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeImageOutcome()>>(
			[this, request]()
			{
			return this->recognizeImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::SearchObjectOutcome CDRSClient::searchObject(const SearchObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchObjectOutcome(SearchObjectResult(outcome.result()));
	else
		return SearchObjectOutcome(outcome.error());
}

void CDRSClient::searchObjectAsync(const SearchObjectRequest& request, const SearchObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::SearchObjectOutcomeCallable CDRSClient::searchObjectCallable(const SearchObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchObjectOutcome()>>(
			[this, request]()
			{
			return this->searchObject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

