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

CDRSClient::AddCdrsMonitorOutcome CDRSClient::addCdrsMonitor(const AddCdrsMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCdrsMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCdrsMonitorOutcome(AddCdrsMonitorResult(outcome.result()));
	else
		return AddCdrsMonitorOutcome(outcome.error());
}

void CDRSClient::addCdrsMonitorAsync(const AddCdrsMonitorRequest& request, const AddCdrsMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCdrsMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::AddCdrsMonitorOutcomeCallable CDRSClient::addCdrsMonitorCallable(const AddCdrsMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCdrsMonitorOutcome()>>(
			[this, request]()
			{
			return this->addCdrsMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::AddMonitorOutcome CDRSClient::addMonitor(const AddMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMonitorOutcome(AddMonitorResult(outcome.result()));
	else
		return AddMonitorOutcome(outcome.error());
}

void CDRSClient::addMonitorAsync(const AddMonitorRequest& request, const AddMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::AddMonitorOutcomeCallable CDRSClient::addMonitorCallable(const AddMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMonitorOutcome()>>(
			[this, request]()
			{
			return this->addMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::BindDeviceOutcome CDRSClient::bindDevice(const BindDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindDeviceOutcome(BindDeviceResult(outcome.result()));
	else
		return BindDeviceOutcome(outcome.error());
}

void CDRSClient::bindDeviceAsync(const BindDeviceRequest& request, const BindDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::BindDeviceOutcomeCallable CDRSClient::bindDeviceCallable(const BindDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindDeviceOutcome()>>(
			[this, request]()
			{
			return this->bindDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::CreateProjectOutcome CDRSClient::createProject(const CreateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectOutcome(CreateProjectResult(outcome.result()));
	else
		return CreateProjectOutcome(outcome.error());
}

void CDRSClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::CreateProjectOutcomeCallable CDRSClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::GetCdrsMonitorListOutcome CDRSClient::getCdrsMonitorList(const GetCdrsMonitorListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCdrsMonitorListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCdrsMonitorListOutcome(GetCdrsMonitorListResult(outcome.result()));
	else
		return GetCdrsMonitorListOutcome(outcome.error());
}

void CDRSClient::getCdrsMonitorListAsync(const GetCdrsMonitorListRequest& request, const GetCdrsMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCdrsMonitorList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::GetCdrsMonitorListOutcomeCallable CDRSClient::getCdrsMonitorListCallable(const GetCdrsMonitorListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCdrsMonitorListOutcome()>>(
			[this, request]()
			{
			return this->getCdrsMonitorList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::GetCdrsMonitorResultOutcome CDRSClient::getCdrsMonitorResult(const GetCdrsMonitorResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCdrsMonitorResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCdrsMonitorResultOutcome(GetCdrsMonitorResultResult(outcome.result()));
	else
		return GetCdrsMonitorResultOutcome(outcome.error());
}

void CDRSClient::getCdrsMonitorResultAsync(const GetCdrsMonitorResultRequest& request, const GetCdrsMonitorResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCdrsMonitorResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::GetCdrsMonitorResultOutcomeCallable CDRSClient::getCdrsMonitorResultCallable(const GetCdrsMonitorResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCdrsMonitorResultOutcome()>>(
			[this, request]()
			{
			return this->getCdrsMonitorResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::GetMonitorListOutcome CDRSClient::getMonitorList(const GetMonitorListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMonitorListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMonitorListOutcome(GetMonitorListResult(outcome.result()));
	else
		return GetMonitorListOutcome(outcome.error());
}

void CDRSClient::getMonitorListAsync(const GetMonitorListRequest& request, const GetMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMonitorList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::GetMonitorListOutcomeCallable CDRSClient::getMonitorListCallable(const GetMonitorListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMonitorListOutcome()>>(
			[this, request]()
			{
			return this->getMonitorList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::GetMonitorResultOutcome CDRSClient::getMonitorResult(const GetMonitorResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMonitorResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMonitorResultOutcome(GetMonitorResultResult(outcome.result()));
	else
		return GetMonitorResultOutcome(outcome.error());
}

void CDRSClient::getMonitorResultAsync(const GetMonitorResultRequest& request, const GetMonitorResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMonitorResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::GetMonitorResultOutcomeCallable CDRSClient::getMonitorResultCallable(const GetMonitorResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMonitorResultOutcome()>>(
			[this, request]()
			{
			return this->getMonitorResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::ListAreaHotSpotMetricsOutcome CDRSClient::listAreaHotSpotMetrics(const ListAreaHotSpotMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAreaHotSpotMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAreaHotSpotMetricsOutcome(ListAreaHotSpotMetricsResult(outcome.result()));
	else
		return ListAreaHotSpotMetricsOutcome(outcome.error());
}

void CDRSClient::listAreaHotSpotMetricsAsync(const ListAreaHotSpotMetricsRequest& request, const ListAreaHotSpotMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAreaHotSpotMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListAreaHotSpotMetricsOutcomeCallable CDRSClient::listAreaHotSpotMetricsCallable(const ListAreaHotSpotMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAreaHotSpotMetricsOutcome()>>(
			[this, request]()
			{
			return this->listAreaHotSpotMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

CDRSClient::ListCorpMetricsStatisticOutcome CDRSClient::listCorpMetricsStatistic(const ListCorpMetricsStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCorpMetricsStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCorpMetricsStatisticOutcome(ListCorpMetricsStatisticResult(outcome.result()));
	else
		return ListCorpMetricsStatisticOutcome(outcome.error());
}

void CDRSClient::listCorpMetricsStatisticAsync(const ListCorpMetricsStatisticRequest& request, const ListCorpMetricsStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCorpMetricsStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListCorpMetricsStatisticOutcomeCallable CDRSClient::listCorpMetricsStatisticCallable(const ListCorpMetricsStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCorpMetricsStatisticOutcome()>>(
			[this, request]()
			{
			return this->listCorpMetricsStatistic(request);
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

CDRSClient::ListDeviceRelationOutcome CDRSClient::listDeviceRelation(const ListDeviceRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceRelationOutcome(ListDeviceRelationResult(outcome.result()));
	else
		return ListDeviceRelationOutcome(outcome.error());
}

void CDRSClient::listDeviceRelationAsync(const ListDeviceRelationRequest& request, const ListDeviceRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListDeviceRelationOutcomeCallable CDRSClient::listDeviceRelationCallable(const ListDeviceRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceRelationOutcome()>>(
			[this, request]()
			{
			return this->listDeviceRelation(request);
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

CDRSClient::ListTagMetricsOutcome CDRSClient::listTagMetrics(const ListTagMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagMetricsOutcome(ListTagMetricsResult(outcome.result()));
	else
		return ListTagMetricsOutcome(outcome.error());
}

void CDRSClient::listTagMetricsAsync(const ListTagMetricsRequest& request, const ListTagMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::ListTagMetricsOutcomeCallable CDRSClient::listTagMetricsCallable(const ListTagMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagMetricsOutcome()>>(
			[this, request]()
			{
			return this->listTagMetrics(request);
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

CDRSClient::PaginateDeviceOutcome CDRSClient::paginateDevice(const PaginateDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PaginateDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PaginateDeviceOutcome(PaginateDeviceResult(outcome.result()));
	else
		return PaginateDeviceOutcome(outcome.error());
}

void CDRSClient::paginateDeviceAsync(const PaginateDeviceRequest& request, const PaginateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, paginateDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::PaginateDeviceOutcomeCallable CDRSClient::paginateDeviceCallable(const PaginateDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PaginateDeviceOutcome()>>(
			[this, request]()
			{
			return this->paginateDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::PaginateProjectOutcome CDRSClient::paginateProject(const PaginateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PaginateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PaginateProjectOutcome(PaginateProjectResult(outcome.result()));
	else
		return PaginateProjectOutcome(outcome.error());
}

void CDRSClient::paginateProjectAsync(const PaginateProjectRequest& request, const PaginateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, paginateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::PaginateProjectOutcomeCallable CDRSClient::paginateProjectCallable(const PaginateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PaginateProjectOutcome()>>(
			[this, request]()
			{
			return this->paginateProject(request);
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

CDRSClient::SearchAggregateObjectOutcome CDRSClient::searchAggregateObject(const SearchAggregateObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchAggregateObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchAggregateObjectOutcome(SearchAggregateObjectResult(outcome.result()));
	else
		return SearchAggregateObjectOutcome(outcome.error());
}

void CDRSClient::searchAggregateObjectAsync(const SearchAggregateObjectRequest& request, const SearchAggregateObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchAggregateObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::SearchAggregateObjectOutcomeCallable CDRSClient::searchAggregateObjectCallable(const SearchAggregateObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchAggregateObjectOutcome()>>(
			[this, request]()
			{
			return this->searchAggregateObject(request);
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

CDRSClient::StopCdrsMonitorOutcome CDRSClient::stopCdrsMonitor(const StopCdrsMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopCdrsMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopCdrsMonitorOutcome(StopCdrsMonitorResult(outcome.result()));
	else
		return StopCdrsMonitorOutcome(outcome.error());
}

void CDRSClient::stopCdrsMonitorAsync(const StopCdrsMonitorRequest& request, const StopCdrsMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCdrsMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::StopCdrsMonitorOutcomeCallable CDRSClient::stopCdrsMonitorCallable(const StopCdrsMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopCdrsMonitorOutcome()>>(
			[this, request]()
			{
			return this->stopCdrsMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::StopMonitorOutcome CDRSClient::stopMonitor(const StopMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMonitorOutcome(StopMonitorResult(outcome.result()));
	else
		return StopMonitorOutcome(outcome.error());
}

void CDRSClient::stopMonitorAsync(const StopMonitorRequest& request, const StopMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::StopMonitorOutcomeCallable CDRSClient::stopMonitorCallable(const StopMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMonitorOutcome()>>(
			[this, request]()
			{
			return this->stopMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::UnbindDeviceOutcome CDRSClient::unbindDevice(const UnbindDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindDeviceOutcome(UnbindDeviceResult(outcome.result()));
	else
		return UnbindDeviceOutcome(outcome.error());
}

void CDRSClient::unbindDeviceAsync(const UnbindDeviceRequest& request, const UnbindDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::UnbindDeviceOutcomeCallable CDRSClient::unbindDeviceCallable(const UnbindDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindDeviceOutcome()>>(
			[this, request]()
			{
			return this->unbindDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::UpdateCdrsMonitorOutcome CDRSClient::updateCdrsMonitor(const UpdateCdrsMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCdrsMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCdrsMonitorOutcome(UpdateCdrsMonitorResult(outcome.result()));
	else
		return UpdateCdrsMonitorOutcome(outcome.error());
}

void CDRSClient::updateCdrsMonitorAsync(const UpdateCdrsMonitorRequest& request, const UpdateCdrsMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCdrsMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::UpdateCdrsMonitorOutcomeCallable CDRSClient::updateCdrsMonitorCallable(const UpdateCdrsMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCdrsMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateCdrsMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::UpdateMonitorOutcome CDRSClient::updateMonitor(const UpdateMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMonitorOutcome(UpdateMonitorResult(outcome.result()));
	else
		return UpdateMonitorOutcome(outcome.error());
}

void CDRSClient::updateMonitorAsync(const UpdateMonitorRequest& request, const UpdateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::UpdateMonitorOutcomeCallable CDRSClient::updateMonitorCallable(const UpdateMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CDRSClient::UpdateProjectOutcome CDRSClient::updateProject(const UpdateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectOutcome(UpdateProjectResult(outcome.result()));
	else
		return UpdateProjectOutcome(outcome.error());
}

void CDRSClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CDRSClient::UpdateProjectOutcomeCallable CDRSClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

