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

#include <alibabacloud/cdn/CdnClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

namespace
{
	const std::string SERVICE_NAME = "Cdn";
}

CdnClient::CdnClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CdnClient::CdnClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CdnClient::CdnClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CdnClient::~CdnClient()
{}

CdnClient::AddCdnDomainOutcome CdnClient::addCdnDomain(const AddCdnDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCdnDomainOutcome(AddCdnDomainResult(outcome.result()));
	else
		return AddCdnDomainOutcome(outcome.error());
}

void CdnClient::addCdnDomainAsync(const AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddCdnDomainOutcomeCallable CdnClient::addCdnDomainCallable(const AddCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->addCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainDetailOutcome CdnClient::describeCdnDomainDetail(const DescribeCdnDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainDetailOutcome(DescribeCdnDomainDetailResult(outcome.result()));
	else
		return DescribeCdnDomainDetailOutcome(outcome.error());
}

void CdnClient::describeCdnDomainDetailAsync(const DescribeCdnDomainDetailRequest& request, const DescribeCdnDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDomainDetailOutcomeCallable CdnClient::describeCdnDomainDetailCallable(const DescribeCdnDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainLogsOutcome CdnClient::describeCdnDomainLogs(const DescribeCdnDomainLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainLogsOutcome(DescribeCdnDomainLogsResult(outcome.result()));
	else
		return DescribeCdnDomainLogsOutcome(outcome.error());
}

void CdnClient::describeCdnDomainLogsAsync(const DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDomainLogsOutcomeCallable CdnClient::describeCdnDomainLogsCallable(const DescribeCdnDomainLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainLogsOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnServiceOutcome CdnClient::describeCdnService(const DescribeCdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnServiceOutcome(DescribeCdnServiceResult(outcome.result()));
	else
		return DescribeCdnServiceOutcome(outcome.error());
}

void CdnClient::describeCdnServiceAsync(const DescribeCdnServiceRequest& request, const DescribeCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnServiceOutcomeCallable CdnClient::describeCdnServiceCallable(const DescribeCdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnServiceOutcome()>>(
			[this, request]()
			{
			return this->describeCdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainBpsDataOutcome CdnClient::describeDomainBpsData(const DescribeDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainBpsDataOutcome(DescribeDomainBpsDataResult(outcome.result()));
	else
		return DescribeDomainBpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainBpsDataAsync(const DescribeDomainBpsDataRequest& request, const DescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainBpsDataOutcomeCallable CdnClient::describeDomainBpsDataCallable(const DescribeDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainBpsDataByTimeStampOutcome CdnClient::describeDomainBpsDataByTimeStamp(const DescribeDomainBpsDataByTimeStampRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainBpsDataByTimeStampOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainBpsDataByTimeStampOutcome(DescribeDomainBpsDataByTimeStampResult(outcome.result()));
	else
		return DescribeDomainBpsDataByTimeStampOutcome(outcome.error());
}

void CdnClient::describeDomainBpsDataByTimeStampAsync(const DescribeDomainBpsDataByTimeStampRequest& request, const DescribeDomainBpsDataByTimeStampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainBpsDataByTimeStamp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainBpsDataByTimeStampOutcomeCallable CdnClient::describeDomainBpsDataByTimeStampCallable(const DescribeDomainBpsDataByTimeStampRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainBpsDataByTimeStampOutcome()>>(
			[this, request]()
			{
			return this->describeDomainBpsDataByTimeStamp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainFileSizeProportionDataOutcome CdnClient::describeDomainFileSizeProportionData(const DescribeDomainFileSizeProportionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainFileSizeProportionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainFileSizeProportionDataOutcome(DescribeDomainFileSizeProportionDataResult(outcome.result()));
	else
		return DescribeDomainFileSizeProportionDataOutcome(outcome.error());
}

void CdnClient::describeDomainFileSizeProportionDataAsync(const DescribeDomainFileSizeProportionDataRequest& request, const DescribeDomainFileSizeProportionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainFileSizeProportionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainFileSizeProportionDataOutcomeCallable CdnClient::describeDomainFileSizeProportionDataCallable(const DescribeDomainFileSizeProportionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainFileSizeProportionDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainFileSizeProportionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainFlowDataOutcome CdnClient::describeDomainFlowData(const DescribeDomainFlowDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainFlowDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainFlowDataOutcome(DescribeDomainFlowDataResult(outcome.result()));
	else
		return DescribeDomainFlowDataOutcome(outcome.error());
}

void CdnClient::describeDomainFlowDataAsync(const DescribeDomainFlowDataRequest& request, const DescribeDomainFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainFlowData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainFlowDataOutcomeCallable CdnClient::describeDomainFlowDataCallable(const DescribeDomainFlowDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainFlowDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainFlowData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainHitRateDataOutcome CdnClient::describeDomainHitRateData(const DescribeDomainHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainHitRateDataOutcome(DescribeDomainHitRateDataResult(outcome.result()));
	else
		return DescribeDomainHitRateDataOutcome(outcome.error());
}

void CdnClient::describeDomainHitRateDataAsync(const DescribeDomainHitRateDataRequest& request, const DescribeDomainHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainHitRateDataOutcomeCallable CdnClient::describeDomainHitRateDataCallable(const DescribeDomainHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainHttpCodeDataOutcome CdnClient::describeDomainHttpCodeData(const DescribeDomainHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainHttpCodeDataOutcome(DescribeDomainHttpCodeDataResult(outcome.result()));
	else
		return DescribeDomainHttpCodeDataOutcome(outcome.error());
}

void CdnClient::describeDomainHttpCodeDataAsync(const DescribeDomainHttpCodeDataRequest& request, const DescribeDomainHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainHttpCodeDataOutcomeCallable CdnClient::describeDomainHttpCodeDataCallable(const DescribeDomainHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainISPDataOutcome CdnClient::describeDomainISPData(const DescribeDomainISPDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainISPDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainISPDataOutcome(DescribeDomainISPDataResult(outcome.result()));
	else
		return DescribeDomainISPDataOutcome(outcome.error());
}

void CdnClient::describeDomainISPDataAsync(const DescribeDomainISPDataRequest& request, const DescribeDomainISPDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainISPData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainISPDataOutcomeCallable CdnClient::describeDomainISPDataCallable(const DescribeDomainISPDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainISPDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainISPData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainQpsDataOutcome CdnClient::describeDomainQpsData(const DescribeDomainQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainQpsDataOutcome(DescribeDomainQpsDataResult(outcome.result()));
	else
		return DescribeDomainQpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainQpsDataAsync(const DescribeDomainQpsDataRequest& request, const DescribeDomainQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainQpsDataOutcomeCallable CdnClient::describeDomainQpsDataCallable(const DescribeDomainQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRegionDataOutcome CdnClient::describeDomainRegionData(const DescribeDomainRegionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRegionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRegionDataOutcome(DescribeDomainRegionDataResult(outcome.result()));
	else
		return DescribeDomainRegionDataOutcome(outcome.error());
}

void CdnClient::describeDomainRegionDataAsync(const DescribeDomainRegionDataRequest& request, const DescribeDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRegionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRegionDataOutcomeCallable CdnClient::describeDomainRegionDataCallable(const DescribeDomainRegionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRegionDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRegionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainReqHitRateDataOutcome CdnClient::describeDomainReqHitRateData(const DescribeDomainReqHitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainReqHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainReqHitRateDataOutcome(DescribeDomainReqHitRateDataResult(outcome.result()));
	else
		return DescribeDomainReqHitRateDataOutcome(outcome.error());
}

void CdnClient::describeDomainReqHitRateDataAsync(const DescribeDomainReqHitRateDataRequest& request, const DescribeDomainReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainReqHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainReqHitRateDataOutcomeCallable CdnClient::describeDomainReqHitRateDataCallable(const DescribeDomainReqHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainReqHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainReqHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcBpsDataOutcome CdnClient::describeDomainSrcBpsData(const DescribeDomainSrcBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSrcBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSrcBpsDataOutcome(DescribeDomainSrcBpsDataResult(outcome.result()));
	else
		return DescribeDomainSrcBpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainSrcBpsDataAsync(const DescribeDomainSrcBpsDataRequest& request, const DescribeDomainSrcBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSrcBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSrcBpsDataOutcomeCallable CdnClient::describeDomainSrcBpsDataCallable(const DescribeDomainSrcBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSrcBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSrcBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcFlowDataOutcome CdnClient::describeDomainSrcFlowData(const DescribeDomainSrcFlowDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSrcFlowDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSrcFlowDataOutcome(DescribeDomainSrcFlowDataResult(outcome.result()));
	else
		return DescribeDomainSrcFlowDataOutcome(outcome.error());
}

void CdnClient::describeDomainSrcFlowDataAsync(const DescribeDomainSrcFlowDataRequest& request, const DescribeDomainSrcFlowDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSrcFlowData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSrcFlowDataOutcomeCallable CdnClient::describeDomainSrcFlowDataCallable(const DescribeDomainSrcFlowDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSrcFlowDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSrcFlowData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainUvDataOutcome CdnClient::describeDomainUvData(const DescribeDomainUvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainUvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainUvDataOutcome(DescribeDomainUvDataResult(outcome.result()));
	else
		return DescribeDomainUvDataOutcome(outcome.error());
}

void CdnClient::describeDomainUvDataAsync(const DescribeDomainUvDataRequest& request, const DescribeDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainUvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainUvDataOutcomeCallable CdnClient::describeDomainUvDataCallable(const DescribeDomainUvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainUvDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainUvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainsBySourceOutcome CdnClient::describeDomainsBySource(const DescribeDomainsBySourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainsBySourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainsBySourceOutcome(DescribeDomainsBySourceResult(outcome.result()));
	else
		return DescribeDomainsBySourceOutcome(outcome.error());
}

void CdnClient::describeDomainsBySourceAsync(const DescribeDomainsBySourceRequest& request, const DescribeDomainsBySourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainsBySource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainsBySourceOutcomeCallable CdnClient::describeDomainsBySourceCallable(const DescribeDomainsBySourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainsBySourceOutcome()>>(
			[this, request]()
			{
			return this->describeDomainsBySource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainsUsageByDayOutcome CdnClient::describeDomainsUsageByDay(const DescribeDomainsUsageByDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainsUsageByDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainsUsageByDayOutcome(DescribeDomainsUsageByDayResult(outcome.result()));
	else
		return DescribeDomainsUsageByDayOutcome(outcome.error());
}

void CdnClient::describeDomainsUsageByDayAsync(const DescribeDomainsUsageByDayRequest& request, const DescribeDomainsUsageByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainsUsageByDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainsUsageByDayOutcomeCallable CdnClient::describeDomainsUsageByDayCallable(const DescribeDomainsUsageByDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainsUsageByDayOutcome()>>(
			[this, request]()
			{
			return this->describeDomainsUsageByDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRefreshQuotaOutcome CdnClient::describeRefreshQuota(const DescribeRefreshQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRefreshQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRefreshQuotaOutcome(DescribeRefreshQuotaResult(outcome.result()));
	else
		return DescribeRefreshQuotaOutcome(outcome.error());
}

void CdnClient::describeRefreshQuotaAsync(const DescribeRefreshQuotaRequest& request, const DescribeRefreshQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRefreshQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRefreshQuotaOutcomeCallable CdnClient::describeRefreshQuotaCallable(const DescribeRefreshQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRefreshQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeRefreshQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeTopDomainsByFlowOutcome CdnClient::describeTopDomainsByFlow(const DescribeTopDomainsByFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTopDomainsByFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTopDomainsByFlowOutcome(DescribeTopDomainsByFlowResult(outcome.result()));
	else
		return DescribeTopDomainsByFlowOutcome(outcome.error());
}

void CdnClient::describeTopDomainsByFlowAsync(const DescribeTopDomainsByFlowRequest& request, const DescribeTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTopDomainsByFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeTopDomainsByFlowOutcomeCallable CdnClient::describeTopDomainsByFlowCallable(const DescribeTopDomainsByFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTopDomainsByFlowOutcome()>>(
			[this, request]()
			{
			return this->describeTopDomainsByFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserDomainsOutcome CdnClient::describeUserDomains(const DescribeUserDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserDomainsOutcome(DescribeUserDomainsResult(outcome.result()));
	else
		return DescribeUserDomainsOutcome(outcome.error());
}

void CdnClient::describeUserDomainsAsync(const DescribeUserDomainsRequest& request, const DescribeUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserDomainsOutcomeCallable CdnClient::describeUserDomainsCallable(const DescribeUserDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeUserDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::OpenCdnServiceOutcome CdnClient::openCdnService(const OpenCdnServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenCdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenCdnServiceOutcome(OpenCdnServiceResult(outcome.result()));
	else
		return OpenCdnServiceOutcome(outcome.error());
}

void CdnClient::openCdnServiceAsync(const OpenCdnServiceRequest& request, const OpenCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openCdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::OpenCdnServiceOutcomeCallable CdnClient::openCdnServiceCallable(const OpenCdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenCdnServiceOutcome()>>(
			[this, request]()
			{
			return this->openCdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::PushObjectCacheOutcome CdnClient::pushObjectCache(const PushObjectCacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushObjectCacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushObjectCacheOutcome(PushObjectCacheResult(outcome.result()));
	else
		return PushObjectCacheOutcome(outcome.error());
}

void CdnClient::pushObjectCacheAsync(const PushObjectCacheRequest& request, const PushObjectCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushObjectCache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::PushObjectCacheOutcomeCallable CdnClient::pushObjectCacheCallable(const PushObjectCacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushObjectCacheOutcome()>>(
			[this, request]()
			{
			return this->pushObjectCache(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::RefreshObjectCachesOutcome CdnClient::refreshObjectCaches(const RefreshObjectCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshObjectCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshObjectCachesOutcome(RefreshObjectCachesResult(outcome.result()));
	else
		return RefreshObjectCachesOutcome(outcome.error());
}

void CdnClient::refreshObjectCachesAsync(const RefreshObjectCachesRequest& request, const RefreshObjectCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshObjectCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::RefreshObjectCachesOutcomeCallable CdnClient::refreshObjectCachesCallable(const RefreshObjectCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshObjectCachesOutcome()>>(
			[this, request]()
			{
			return this->refreshObjectCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::TestDescribeDomainBpsDataOutcome CdnClient::testDescribeDomainBpsData(const TestDescribeDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestDescribeDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestDescribeDomainBpsDataOutcome(TestDescribeDomainBpsDataResult(outcome.result()));
	else
		return TestDescribeDomainBpsDataOutcome(outcome.error());
}

void CdnClient::testDescribeDomainBpsDataAsync(const TestDescribeDomainBpsDataRequest& request, const TestDescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testDescribeDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::TestDescribeDomainBpsDataOutcomeCallable CdnClient::testDescribeDomainBpsDataCallable(const TestDescribeDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestDescribeDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->testDescribeDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

