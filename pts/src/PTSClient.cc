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

#include <alibabacloud/pts/PTSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

namespace
{
	const std::string SERVICE_NAME = "PTS";
}

PTSClient::PTSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PTSClient::PTSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PTSClient::PTSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PTSClient::~PTSClient()
{}

PTSClient::AdjustJMeterSceneSpeedOutcome PTSClient::adjustJMeterSceneSpeed(const AdjustJMeterSceneSpeedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AdjustJMeterSceneSpeedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AdjustJMeterSceneSpeedOutcome(AdjustJMeterSceneSpeedResult(outcome.result()));
	else
		return AdjustJMeterSceneSpeedOutcome(outcome.error());
}

void PTSClient::adjustJMeterSceneSpeedAsync(const AdjustJMeterSceneSpeedRequest& request, const AdjustJMeterSceneSpeedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, adjustJMeterSceneSpeed(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::AdjustJMeterSceneSpeedOutcomeCallable PTSClient::adjustJMeterSceneSpeedCallable(const AdjustJMeterSceneSpeedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AdjustJMeterSceneSpeedOutcome()>>(
			[this, request]()
			{
			return this->adjustJMeterSceneSpeed(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::CreatePtsSceneOutcome PTSClient::createPtsScene(const CreatePtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePtsSceneOutcome(CreatePtsSceneResult(outcome.result()));
	else
		return CreatePtsSceneOutcome(outcome.error());
}

void PTSClient::createPtsSceneAsync(const CreatePtsSceneRequest& request, const CreatePtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::CreatePtsSceneOutcomeCallable PTSClient::createPtsSceneCallable(const CreatePtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePtsSceneOutcome()>>(
			[this, request]()
			{
			return this->createPtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::CreatePtsSceneBaseLineFromReportOutcome PTSClient::createPtsSceneBaseLineFromReport(const CreatePtsSceneBaseLineFromReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePtsSceneBaseLineFromReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePtsSceneBaseLineFromReportOutcome(CreatePtsSceneBaseLineFromReportResult(outcome.result()));
	else
		return CreatePtsSceneBaseLineFromReportOutcome(outcome.error());
}

void PTSClient::createPtsSceneBaseLineFromReportAsync(const CreatePtsSceneBaseLineFromReportRequest& request, const CreatePtsSceneBaseLineFromReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPtsSceneBaseLineFromReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::CreatePtsSceneBaseLineFromReportOutcomeCallable PTSClient::createPtsSceneBaseLineFromReportCallable(const CreatePtsSceneBaseLineFromReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePtsSceneBaseLineFromReportOutcome()>>(
			[this, request]()
			{
			return this->createPtsSceneBaseLineFromReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::DeletePtsSceneOutcome PTSClient::deletePtsScene(const DeletePtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePtsSceneOutcome(DeletePtsSceneResult(outcome.result()));
	else
		return DeletePtsSceneOutcome(outcome.error());
}

void PTSClient::deletePtsSceneAsync(const DeletePtsSceneRequest& request, const DeletePtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::DeletePtsSceneOutcomeCallable PTSClient::deletePtsSceneCallable(const DeletePtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePtsSceneOutcome()>>(
			[this, request]()
			{
			return this->deletePtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::DeletePtsSceneBaseLineOutcome PTSClient::deletePtsSceneBaseLine(const DeletePtsSceneBaseLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePtsSceneBaseLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePtsSceneBaseLineOutcome(DeletePtsSceneBaseLineResult(outcome.result()));
	else
		return DeletePtsSceneBaseLineOutcome(outcome.error());
}

void PTSClient::deletePtsSceneBaseLineAsync(const DeletePtsSceneBaseLineRequest& request, const DeletePtsSceneBaseLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePtsSceneBaseLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::DeletePtsSceneBaseLineOutcomeCallable PTSClient::deletePtsSceneBaseLineCallable(const DeletePtsSceneBaseLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePtsSceneBaseLineOutcome()>>(
			[this, request]()
			{
			return this->deletePtsSceneBaseLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::DeletePtsScenesOutcome PTSClient::deletePtsScenes(const DeletePtsScenesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePtsScenesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePtsScenesOutcome(DeletePtsScenesResult(outcome.result()));
	else
		return DeletePtsScenesOutcome(outcome.error());
}

void PTSClient::deletePtsScenesAsync(const DeletePtsScenesRequest& request, const DeletePtsScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePtsScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::DeletePtsScenesOutcomeCallable PTSClient::deletePtsScenesCallable(const DeletePtsScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePtsScenesOutcome()>>(
			[this, request]()
			{
			return this->deletePtsScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetAllRegionsOutcome PTSClient::getAllRegions(const GetAllRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllRegionsOutcome(GetAllRegionsResult(outcome.result()));
	else
		return GetAllRegionsOutcome(outcome.error());
}

void PTSClient::getAllRegionsAsync(const GetAllRegionsRequest& request, const GetAllRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetAllRegionsOutcomeCallable PTSClient::getAllRegionsCallable(const GetAllRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllRegionsOutcome()>>(
			[this, request]()
			{
			return this->getAllRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetJMeterLogsOutcome PTSClient::getJMeterLogs(const GetJMeterLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJMeterLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJMeterLogsOutcome(GetJMeterLogsResult(outcome.result()));
	else
		return GetJMeterLogsOutcome(outcome.error());
}

void PTSClient::getJMeterLogsAsync(const GetJMeterLogsRequest& request, const GetJMeterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJMeterLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetJMeterLogsOutcomeCallable PTSClient::getJMeterLogsCallable(const GetJMeterLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJMeterLogsOutcome()>>(
			[this, request]()
			{
			return this->getJMeterLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetJMeterSampleMetricsOutcome PTSClient::getJMeterSampleMetrics(const GetJMeterSampleMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJMeterSampleMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJMeterSampleMetricsOutcome(GetJMeterSampleMetricsResult(outcome.result()));
	else
		return GetJMeterSampleMetricsOutcome(outcome.error());
}

void PTSClient::getJMeterSampleMetricsAsync(const GetJMeterSampleMetricsRequest& request, const GetJMeterSampleMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJMeterSampleMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetJMeterSampleMetricsOutcomeCallable PTSClient::getJMeterSampleMetricsCallable(const GetJMeterSampleMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJMeterSampleMetricsOutcome()>>(
			[this, request]()
			{
			return this->getJMeterSampleMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetJMeterSamplingLogsOutcome PTSClient::getJMeterSamplingLogs(const GetJMeterSamplingLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJMeterSamplingLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJMeterSamplingLogsOutcome(GetJMeterSamplingLogsResult(outcome.result()));
	else
		return GetJMeterSamplingLogsOutcome(outcome.error());
}

void PTSClient::getJMeterSamplingLogsAsync(const GetJMeterSamplingLogsRequest& request, const GetJMeterSamplingLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJMeterSamplingLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetJMeterSamplingLogsOutcomeCallable PTSClient::getJMeterSamplingLogsCallable(const GetJMeterSamplingLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJMeterSamplingLogsOutcome()>>(
			[this, request]()
			{
			return this->getJMeterSamplingLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetJMeterSceneRunningDataOutcome PTSClient::getJMeterSceneRunningData(const GetJMeterSceneRunningDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJMeterSceneRunningDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJMeterSceneRunningDataOutcome(GetJMeterSceneRunningDataResult(outcome.result()));
	else
		return GetJMeterSceneRunningDataOutcome(outcome.error());
}

void PTSClient::getJMeterSceneRunningDataAsync(const GetJMeterSceneRunningDataRequest& request, const GetJMeterSceneRunningDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJMeterSceneRunningData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetJMeterSceneRunningDataOutcomeCallable PTSClient::getJMeterSceneRunningDataCallable(const GetJMeterSceneRunningDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJMeterSceneRunningDataOutcome()>>(
			[this, request]()
			{
			return this->getJMeterSceneRunningData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetOpenJMeterSceneOutcome PTSClient::getOpenJMeterScene(const GetOpenJMeterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpenJMeterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpenJMeterSceneOutcome(GetOpenJMeterSceneResult(outcome.result()));
	else
		return GetOpenJMeterSceneOutcome(outcome.error());
}

void PTSClient::getOpenJMeterSceneAsync(const GetOpenJMeterSceneRequest& request, const GetOpenJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpenJMeterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetOpenJMeterSceneOutcomeCallable PTSClient::getOpenJMeterSceneCallable(const GetOpenJMeterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpenJMeterSceneOutcome()>>(
			[this, request]()
			{
			return this->getOpenJMeterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetPtsReportDetailsOutcome PTSClient::getPtsReportDetails(const GetPtsReportDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPtsReportDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPtsReportDetailsOutcome(GetPtsReportDetailsResult(outcome.result()));
	else
		return GetPtsReportDetailsOutcome(outcome.error());
}

void PTSClient::getPtsReportDetailsAsync(const GetPtsReportDetailsRequest& request, const GetPtsReportDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPtsReportDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetPtsReportDetailsOutcomeCallable PTSClient::getPtsReportDetailsCallable(const GetPtsReportDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPtsReportDetailsOutcome()>>(
			[this, request]()
			{
			return this->getPtsReportDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetPtsReportsBySceneIdOutcome PTSClient::getPtsReportsBySceneId(const GetPtsReportsBySceneIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPtsReportsBySceneIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPtsReportsBySceneIdOutcome(GetPtsReportsBySceneIdResult(outcome.result()));
	else
		return GetPtsReportsBySceneIdOutcome(outcome.error());
}

void PTSClient::getPtsReportsBySceneIdAsync(const GetPtsReportsBySceneIdRequest& request, const GetPtsReportsBySceneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPtsReportsBySceneId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetPtsReportsBySceneIdOutcomeCallable PTSClient::getPtsReportsBySceneIdCallable(const GetPtsReportsBySceneIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPtsReportsBySceneIdOutcome()>>(
			[this, request]()
			{
			return this->getPtsReportsBySceneId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetPtsSceneOutcome PTSClient::getPtsScene(const GetPtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPtsSceneOutcome(GetPtsSceneResult(outcome.result()));
	else
		return GetPtsSceneOutcome(outcome.error());
}

void PTSClient::getPtsSceneAsync(const GetPtsSceneRequest& request, const GetPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetPtsSceneOutcomeCallable PTSClient::getPtsSceneCallable(const GetPtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPtsSceneOutcome()>>(
			[this, request]()
			{
			return this->getPtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetPtsSceneBaseLineOutcome PTSClient::getPtsSceneBaseLine(const GetPtsSceneBaseLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPtsSceneBaseLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPtsSceneBaseLineOutcome(GetPtsSceneBaseLineResult(outcome.result()));
	else
		return GetPtsSceneBaseLineOutcome(outcome.error());
}

void PTSClient::getPtsSceneBaseLineAsync(const GetPtsSceneBaseLineRequest& request, const GetPtsSceneBaseLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPtsSceneBaseLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetPtsSceneBaseLineOutcomeCallable PTSClient::getPtsSceneBaseLineCallable(const GetPtsSceneBaseLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPtsSceneBaseLineOutcome()>>(
			[this, request]()
			{
			return this->getPtsSceneBaseLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetPtsSceneRunningDataOutcome PTSClient::getPtsSceneRunningData(const GetPtsSceneRunningDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPtsSceneRunningDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPtsSceneRunningDataOutcome(GetPtsSceneRunningDataResult(outcome.result()));
	else
		return GetPtsSceneRunningDataOutcome(outcome.error());
}

void PTSClient::getPtsSceneRunningDataAsync(const GetPtsSceneRunningDataRequest& request, const GetPtsSceneRunningDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPtsSceneRunningData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetPtsSceneRunningDataOutcomeCallable PTSClient::getPtsSceneRunningDataCallable(const GetPtsSceneRunningDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPtsSceneRunningDataOutcome()>>(
			[this, request]()
			{
			return this->getPtsSceneRunningData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetPtsSceneRunningStatusOutcome PTSClient::getPtsSceneRunningStatus(const GetPtsSceneRunningStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPtsSceneRunningStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPtsSceneRunningStatusOutcome(GetPtsSceneRunningStatusResult(outcome.result()));
	else
		return GetPtsSceneRunningStatusOutcome(outcome.error());
}

void PTSClient::getPtsSceneRunningStatusAsync(const GetPtsSceneRunningStatusRequest& request, const GetPtsSceneRunningStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPtsSceneRunningStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetPtsSceneRunningStatusOutcomeCallable PTSClient::getPtsSceneRunningStatusCallable(const GetPtsSceneRunningStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPtsSceneRunningStatusOutcome()>>(
			[this, request]()
			{
			return this->getPtsSceneRunningStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetUserVpcSecurityGroupOutcome PTSClient::getUserVpcSecurityGroup(const GetUserVpcSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserVpcSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserVpcSecurityGroupOutcome(GetUserVpcSecurityGroupResult(outcome.result()));
	else
		return GetUserVpcSecurityGroupOutcome(outcome.error());
}

void PTSClient::getUserVpcSecurityGroupAsync(const GetUserVpcSecurityGroupRequest& request, const GetUserVpcSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserVpcSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetUserVpcSecurityGroupOutcomeCallable PTSClient::getUserVpcSecurityGroupCallable(const GetUserVpcSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserVpcSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->getUserVpcSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetUserVpcVSwitchOutcome PTSClient::getUserVpcVSwitch(const GetUserVpcVSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserVpcVSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserVpcVSwitchOutcome(GetUserVpcVSwitchResult(outcome.result()));
	else
		return GetUserVpcVSwitchOutcome(outcome.error());
}

void PTSClient::getUserVpcVSwitchAsync(const GetUserVpcVSwitchRequest& request, const GetUserVpcVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserVpcVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetUserVpcVSwitchOutcomeCallable PTSClient::getUserVpcVSwitchCallable(const GetUserVpcVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserVpcVSwitchOutcome()>>(
			[this, request]()
			{
			return this->getUserVpcVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::GetUserVpcsOutcome PTSClient::getUserVpcs(const GetUserVpcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserVpcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserVpcsOutcome(GetUserVpcsResult(outcome.result()));
	else
		return GetUserVpcsOutcome(outcome.error());
}

void PTSClient::getUserVpcsAsync(const GetUserVpcsRequest& request, const GetUserVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::GetUserVpcsOutcomeCallable PTSClient::getUserVpcsCallable(const GetUserVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserVpcsOutcome()>>(
			[this, request]()
			{
			return this->getUserVpcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::ListEnvsOutcome PTSClient::listEnvs(const ListEnvsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnvsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnvsOutcome(ListEnvsResult(outcome.result()));
	else
		return ListEnvsOutcome(outcome.error());
}

void PTSClient::listEnvsAsync(const ListEnvsRequest& request, const ListEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnvs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::ListEnvsOutcomeCallable PTSClient::listEnvsCallable(const ListEnvsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnvsOutcome()>>(
			[this, request]()
			{
			return this->listEnvs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::ListJMeterReportsOutcome PTSClient::listJMeterReports(const ListJMeterReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJMeterReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJMeterReportsOutcome(ListJMeterReportsResult(outcome.result()));
	else
		return ListJMeterReportsOutcome(outcome.error());
}

void PTSClient::listJMeterReportsAsync(const ListJMeterReportsRequest& request, const ListJMeterReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJMeterReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::ListJMeterReportsOutcomeCallable PTSClient::listJMeterReportsCallable(const ListJMeterReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJMeterReportsOutcome()>>(
			[this, request]()
			{
			return this->listJMeterReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::ListOpenJMeterScenesOutcome PTSClient::listOpenJMeterScenes(const ListOpenJMeterScenesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOpenJMeterScenesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOpenJMeterScenesOutcome(ListOpenJMeterScenesResult(outcome.result()));
	else
		return ListOpenJMeterScenesOutcome(outcome.error());
}

void PTSClient::listOpenJMeterScenesAsync(const ListOpenJMeterScenesRequest& request, const ListOpenJMeterScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOpenJMeterScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::ListOpenJMeterScenesOutcomeCallable PTSClient::listOpenJMeterScenesCallable(const ListOpenJMeterScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOpenJMeterScenesOutcome()>>(
			[this, request]()
			{
			return this->listOpenJMeterScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::ListPtsSceneOutcome PTSClient::listPtsScene(const ListPtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPtsSceneOutcome(ListPtsSceneResult(outcome.result()));
	else
		return ListPtsSceneOutcome(outcome.error());
}

void PTSClient::listPtsSceneAsync(const ListPtsSceneRequest& request, const ListPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::ListPtsSceneOutcomeCallable PTSClient::listPtsSceneCallable(const ListPtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPtsSceneOutcome()>>(
			[this, request]()
			{
			return this->listPtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::ModifyPtsSceneOutcome PTSClient::modifyPtsScene(const ModifyPtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPtsSceneOutcome(ModifyPtsSceneResult(outcome.result()));
	else
		return ModifyPtsSceneOutcome(outcome.error());
}

void PTSClient::modifyPtsSceneAsync(const ModifyPtsSceneRequest& request, const ModifyPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::ModifyPtsSceneOutcomeCallable PTSClient::modifyPtsSceneCallable(const ModifyPtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPtsSceneOutcome()>>(
			[this, request]()
			{
			return this->modifyPtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::RemoveEnvOutcome PTSClient::removeEnv(const RemoveEnvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveEnvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveEnvOutcome(RemoveEnvResult(outcome.result()));
	else
		return RemoveEnvOutcome(outcome.error());
}

void PTSClient::removeEnvAsync(const RemoveEnvRequest& request, const RemoveEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeEnv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::RemoveEnvOutcomeCallable PTSClient::removeEnvCallable(const RemoveEnvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveEnvOutcome()>>(
			[this, request]()
			{
			return this->removeEnv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::RemoveOpenJMeterSceneOutcome PTSClient::removeOpenJMeterScene(const RemoveOpenJMeterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveOpenJMeterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveOpenJMeterSceneOutcome(RemoveOpenJMeterSceneResult(outcome.result()));
	else
		return RemoveOpenJMeterSceneOutcome(outcome.error());
}

void PTSClient::removeOpenJMeterSceneAsync(const RemoveOpenJMeterSceneRequest& request, const RemoveOpenJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeOpenJMeterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::RemoveOpenJMeterSceneOutcomeCallable PTSClient::removeOpenJMeterSceneCallable(const RemoveOpenJMeterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveOpenJMeterSceneOutcome()>>(
			[this, request]()
			{
			return this->removeOpenJMeterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::SaveEnvOutcome PTSClient::saveEnv(const SaveEnvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveEnvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveEnvOutcome(SaveEnvResult(outcome.result()));
	else
		return SaveEnvOutcome(outcome.error());
}

void PTSClient::saveEnvAsync(const SaveEnvRequest& request, const SaveEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveEnv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::SaveEnvOutcomeCallable PTSClient::saveEnvCallable(const SaveEnvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveEnvOutcome()>>(
			[this, request]()
			{
			return this->saveEnv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::SaveOpenJMeterSceneOutcome PTSClient::saveOpenJMeterScene(const SaveOpenJMeterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveOpenJMeterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveOpenJMeterSceneOutcome(SaveOpenJMeterSceneResult(outcome.result()));
	else
		return SaveOpenJMeterSceneOutcome(outcome.error());
}

void PTSClient::saveOpenJMeterSceneAsync(const SaveOpenJMeterSceneRequest& request, const SaveOpenJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveOpenJMeterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::SaveOpenJMeterSceneOutcomeCallable PTSClient::saveOpenJMeterSceneCallable(const SaveOpenJMeterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveOpenJMeterSceneOutcome()>>(
			[this, request]()
			{
			return this->saveOpenJMeterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::SavePtsSceneOutcome PTSClient::savePtsScene(const SavePtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SavePtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SavePtsSceneOutcome(SavePtsSceneResult(outcome.result()));
	else
		return SavePtsSceneOutcome(outcome.error());
}

void PTSClient::savePtsSceneAsync(const SavePtsSceneRequest& request, const SavePtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, savePtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::SavePtsSceneOutcomeCallable PTSClient::savePtsSceneCallable(const SavePtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SavePtsSceneOutcome()>>(
			[this, request]()
			{
			return this->savePtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::StartDebugPtsSceneOutcome PTSClient::startDebugPtsScene(const StartDebugPtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDebugPtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDebugPtsSceneOutcome(StartDebugPtsSceneResult(outcome.result()));
	else
		return StartDebugPtsSceneOutcome(outcome.error());
}

void PTSClient::startDebugPtsSceneAsync(const StartDebugPtsSceneRequest& request, const StartDebugPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDebugPtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::StartDebugPtsSceneOutcomeCallable PTSClient::startDebugPtsSceneCallable(const StartDebugPtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDebugPtsSceneOutcome()>>(
			[this, request]()
			{
			return this->startDebugPtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::StartDebuggingJMeterSceneOutcome PTSClient::startDebuggingJMeterScene(const StartDebuggingJMeterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDebuggingJMeterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDebuggingJMeterSceneOutcome(StartDebuggingJMeterSceneResult(outcome.result()));
	else
		return StartDebuggingJMeterSceneOutcome(outcome.error());
}

void PTSClient::startDebuggingJMeterSceneAsync(const StartDebuggingJMeterSceneRequest& request, const StartDebuggingJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDebuggingJMeterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::StartDebuggingJMeterSceneOutcomeCallable PTSClient::startDebuggingJMeterSceneCallable(const StartDebuggingJMeterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDebuggingJMeterSceneOutcome()>>(
			[this, request]()
			{
			return this->startDebuggingJMeterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::StartPtsSceneOutcome PTSClient::startPtsScene(const StartPtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartPtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartPtsSceneOutcome(StartPtsSceneResult(outcome.result()));
	else
		return StartPtsSceneOutcome(outcome.error());
}

void PTSClient::startPtsSceneAsync(const StartPtsSceneRequest& request, const StartPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startPtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::StartPtsSceneOutcomeCallable PTSClient::startPtsSceneCallable(const StartPtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartPtsSceneOutcome()>>(
			[this, request]()
			{
			return this->startPtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::StartTestingJMeterSceneOutcome PTSClient::startTestingJMeterScene(const StartTestingJMeterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTestingJMeterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTestingJMeterSceneOutcome(StartTestingJMeterSceneResult(outcome.result()));
	else
		return StartTestingJMeterSceneOutcome(outcome.error());
}

void PTSClient::startTestingJMeterSceneAsync(const StartTestingJMeterSceneRequest& request, const StartTestingJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTestingJMeterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::StartTestingJMeterSceneOutcomeCallable PTSClient::startTestingJMeterSceneCallable(const StartTestingJMeterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTestingJMeterSceneOutcome()>>(
			[this, request]()
			{
			return this->startTestingJMeterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::StopDebugPtsSceneOutcome PTSClient::stopDebugPtsScene(const StopDebugPtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDebugPtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDebugPtsSceneOutcome(StopDebugPtsSceneResult(outcome.result()));
	else
		return StopDebugPtsSceneOutcome(outcome.error());
}

void PTSClient::stopDebugPtsSceneAsync(const StopDebugPtsSceneRequest& request, const StopDebugPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDebugPtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::StopDebugPtsSceneOutcomeCallable PTSClient::stopDebugPtsSceneCallable(const StopDebugPtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDebugPtsSceneOutcome()>>(
			[this, request]()
			{
			return this->stopDebugPtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::StopDebuggingJMeterSceneOutcome PTSClient::stopDebuggingJMeterScene(const StopDebuggingJMeterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDebuggingJMeterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDebuggingJMeterSceneOutcome(StopDebuggingJMeterSceneResult(outcome.result()));
	else
		return StopDebuggingJMeterSceneOutcome(outcome.error());
}

void PTSClient::stopDebuggingJMeterSceneAsync(const StopDebuggingJMeterSceneRequest& request, const StopDebuggingJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDebuggingJMeterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::StopDebuggingJMeterSceneOutcomeCallable PTSClient::stopDebuggingJMeterSceneCallable(const StopDebuggingJMeterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDebuggingJMeterSceneOutcome()>>(
			[this, request]()
			{
			return this->stopDebuggingJMeterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::StopPtsSceneOutcome PTSClient::stopPtsScene(const StopPtsSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopPtsSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopPtsSceneOutcome(StopPtsSceneResult(outcome.result()));
	else
		return StopPtsSceneOutcome(outcome.error());
}

void PTSClient::stopPtsSceneAsync(const StopPtsSceneRequest& request, const StopPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopPtsScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::StopPtsSceneOutcomeCallable PTSClient::stopPtsSceneCallable(const StopPtsSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopPtsSceneOutcome()>>(
			[this, request]()
			{
			return this->stopPtsScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::StopTestingJMeterSceneOutcome PTSClient::stopTestingJMeterScene(const StopTestingJMeterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTestingJMeterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTestingJMeterSceneOutcome(StopTestingJMeterSceneResult(outcome.result()));
	else
		return StopTestingJMeterSceneOutcome(outcome.error());
}

void PTSClient::stopTestingJMeterSceneAsync(const StopTestingJMeterSceneRequest& request, const StopTestingJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTestingJMeterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::StopTestingJMeterSceneOutcomeCallable PTSClient::stopTestingJMeterSceneCallable(const StopTestingJMeterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTestingJMeterSceneOutcome()>>(
			[this, request]()
			{
			return this->stopTestingJMeterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PTSClient::UpdatePtsSceneBaseLineOutcome PTSClient::updatePtsSceneBaseLine(const UpdatePtsSceneBaseLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePtsSceneBaseLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePtsSceneBaseLineOutcome(UpdatePtsSceneBaseLineResult(outcome.result()));
	else
		return UpdatePtsSceneBaseLineOutcome(outcome.error());
}

void PTSClient::updatePtsSceneBaseLineAsync(const UpdatePtsSceneBaseLineRequest& request, const UpdatePtsSceneBaseLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePtsSceneBaseLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PTSClient::UpdatePtsSceneBaseLineOutcomeCallable PTSClient::updatePtsSceneBaseLineCallable(const UpdatePtsSceneBaseLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePtsSceneBaseLineOutcome()>>(
			[this, request]()
			{
			return this->updatePtsSceneBaseLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

