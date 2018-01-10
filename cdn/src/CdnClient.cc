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

CdnClient::CdnClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "cdn");
}

CdnClient::CdnClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "cdn");
}

CdnClient::CdnClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "cdn");
}

CdnClient::~CdnClient()
{}

CoreClient::EndpointOutcome CdnClient::endpoint()const
{
	if(!configuration().endpoint().empty())
		return CoreClient::EndpointOutcome(configuration().endpoint());

	auto endpoint = endpointProvider_->getEndpoint();
	
	if (endpoint.empty())
		return CoreClient::EndpointOutcome(Error("InvalidEndpoint",""));
	else
		return CoreClient::EndpointOutcome(endpoint);
}

CdnClient::DescribeCdnServiceOutcome CdnClient::describeCdnService(const DescribeCdnServiceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::CreateLiveStreamRecordIndexFilesOutcome CdnClient::createLiveStreamRecordIndexFiles(const CreateLiveStreamRecordIndexFilesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveStreamRecordIndexFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveStreamRecordIndexFilesOutcome(CreateLiveStreamRecordIndexFilesResult(outcome.result()));
	else
		return CreateLiveStreamRecordIndexFilesOutcome(outcome.error());
}

void CdnClient::createLiveStreamRecordIndexFilesAsync(const CreateLiveStreamRecordIndexFilesRequest& request, const CreateLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveStreamRecordIndexFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::CreateLiveStreamRecordIndexFilesOutcomeCallable CdnClient::createLiveStreamRecordIndexFilesCallable(const CreateLiveStreamRecordIndexFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveStreamRecordIndexFilesOutcome()>>(
			[this, request]()
			{
			return this->createLiveStreamRecordIndexFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainDetailOutcome CdnClient::describeCdnDomainDetail(const DescribeCdnDomainDetailRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::SetWafConfigOutcome CdnClient::setWafConfig(const SetWafConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetWafConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetWafConfigOutcome(SetWafConfigResult(outcome.result()));
	else
		return SetWafConfigOutcome(outcome.error());
}

void CdnClient::setWafConfigAsync(const SetWafConfigRequest& request, const SetWafConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setWafConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetWafConfigOutcomeCallable CdnClient::setWafConfigCallable(const SetWafConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetWafConfigOutcome()>>(
			[this, request]()
			{
			return this->setWafConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsOnlineListOutcome CdnClient::describeLiveStreamsOnlineList(const DescribeLiveStreamsOnlineListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsOnlineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsOnlineListOutcome(DescribeLiveStreamsOnlineListResult(outcome.result()));
	else
		return DescribeLiveStreamsOnlineListOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsOnlineListAsync(const DescribeLiveStreamsOnlineListRequest& request, const DescribeLiveStreamsOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsOnlineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsOnlineListOutcomeCallable CdnClient::describeLiveStreamsOnlineListCallable(const DescribeLiveStreamsOnlineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsOnlineListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsOnlineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamTranscodeInfoOutcome CdnClient::describeLiveStreamTranscodeInfo(const DescribeLiveStreamTranscodeInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamTranscodeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamTranscodeInfoOutcome(DescribeLiveStreamTranscodeInfoResult(outcome.result()));
	else
		return DescribeLiveStreamTranscodeInfoOutcome(outcome.error());
}

void CdnClient::describeLiveStreamTranscodeInfoAsync(const DescribeLiveStreamTranscodeInfoRequest& request, const DescribeLiveStreamTranscodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamTranscodeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamTranscodeInfoOutcomeCallable CdnClient::describeLiveStreamTranscodeInfoCallable(const DescribeLiveStreamTranscodeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamTranscodeInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamTranscodeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetVideoSeekConfigOutcome CdnClient::setVideoSeekConfig(const SetVideoSeekConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetVideoSeekConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetVideoSeekConfigOutcome(SetVideoSeekConfigResult(outcome.result()));
	else
		return SetVideoSeekConfigOutcome(outcome.error());
}

void CdnClient::setVideoSeekConfigAsync(const SetVideoSeekConfigRequest& request, const SetVideoSeekConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setVideoSeekConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetVideoSeekConfigOutcomeCallable CdnClient::setVideoSeekConfigCallable(const SetVideoSeekConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetVideoSeekConfigOutcome()>>(
			[this, request]()
			{
			return this->setVideoSeekConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnMonitorDataOutcome CdnClient::describeCdnMonitorData(const DescribeCdnMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnMonitorDataOutcome(DescribeCdnMonitorDataResult(outcome.result()));
	else
		return DescribeCdnMonitorDataOutcome(outcome.error());
}

void CdnClient::describeCdnMonitorDataAsync(const DescribeCdnMonitorDataRequest& request, const DescribeCdnMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnMonitorDataOutcomeCallable CdnClient::describeCdnMonitorDataCallable(const DescribeCdnMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeCdnMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetL2OssKeyConfigOutcome CdnClient::setL2OssKeyConfig(const SetL2OssKeyConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetL2OssKeyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetL2OssKeyConfigOutcome(SetL2OssKeyConfigResult(outcome.result()));
	else
		return SetL2OssKeyConfigOutcome(outcome.error());
}

void CdnClient::setL2OssKeyConfigAsync(const SetL2OssKeyConfigRequest& request, const SetL2OssKeyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setL2OssKeyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetL2OssKeyConfigOutcomeCallable CdnClient::setL2OssKeyConfigCallable(const SetL2OssKeyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetL2OssKeyConfigOutcome()>>(
			[this, request]()
			{
			return this->setL2OssKeyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainReqHitRateDataOutcome CdnClient::describeDomainReqHitRateData(const DescribeDomainReqHitRateDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeDomainUvDataOutcome CdnClient::describeDomainUvData(const DescribeDomainUvDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::StopMixStreamsServiceOutcome CdnClient::stopMixStreamsService(const StopMixStreamsServiceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return StopMixStreamsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMixStreamsServiceOutcome(StopMixStreamsServiceResult(outcome.result()));
	else
		return StopMixStreamsServiceOutcome(outcome.error());
}

void CdnClient::stopMixStreamsServiceAsync(const StopMixStreamsServiceRequest& request, const StopMixStreamsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMixStreamsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::StopMixStreamsServiceOutcomeCallable CdnClient::stopMixStreamsServiceCallable(const StopMixStreamsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMixStreamsServiceOutcome()>>(
			[this, request]()
			{
			return this->stopMixStreamsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteCdnDomainOutcome CdnClient::deleteCdnDomain(const DeleteCdnDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCdnDomainOutcome(DeleteCdnDomainResult(outcome.result()));
	else
		return DeleteCdnDomainOutcome(outcome.error());
}

void CdnClient::deleteCdnDomainAsync(const DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteCdnDomainOutcomeCallable CdnClient::deleteCdnDomainCallable(const DeleteCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetFileTypeForceTtlCodeConfigOutcome CdnClient::setFileTypeForceTtlCodeConfig(const SetFileTypeForceTtlCodeConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetFileTypeForceTtlCodeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetFileTypeForceTtlCodeConfigOutcome(SetFileTypeForceTtlCodeConfigResult(outcome.result()));
	else
		return SetFileTypeForceTtlCodeConfigOutcome(outcome.error());
}

void CdnClient::setFileTypeForceTtlCodeConfigAsync(const SetFileTypeForceTtlCodeConfigRequest& request, const SetFileTypeForceTtlCodeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setFileTypeForceTtlCodeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetFileTypeForceTtlCodeConfigOutcomeCallable CdnClient::setFileTypeForceTtlCodeConfigCallable(const SetFileTypeForceTtlCodeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetFileTypeForceTtlCodeConfigOutcome()>>(
			[this, request]()
			{
			return this->setFileTypeForceTtlCodeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetRemoveQueryStringConfigOutcome CdnClient::setRemoveQueryStringConfig(const SetRemoveQueryStringConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetRemoveQueryStringConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRemoveQueryStringConfigOutcome(SetRemoveQueryStringConfigResult(outcome.result()));
	else
		return SetRemoveQueryStringConfigOutcome(outcome.error());
}

void CdnClient::setRemoveQueryStringConfigAsync(const SetRemoveQueryStringConfigRequest& request, const SetRemoveQueryStringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRemoveQueryStringConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetRemoveQueryStringConfigOutcomeCallable CdnClient::setRemoveQueryStringConfigCallable(const SetRemoveQueryStringConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRemoveQueryStringConfigOutcome()>>(
			[this, request]()
			{
			return this->setRemoveQueryStringConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteLiveStreamTranscodeOutcome CdnClient::deleteLiveStreamTranscode(const DeleteLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamTranscodeOutcome(DeleteLiveStreamTranscodeResult(outcome.result()));
	else
		return DeleteLiveStreamTranscodeOutcome(outcome.error());
}

void CdnClient::deleteLiveStreamTranscodeAsync(const DeleteLiveStreamTranscodeRequest& request, const DeleteLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLiveStreamTranscodeOutcomeCallable CdnClient::deleteLiveStreamTranscodeCallable(const DeleteLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainUpstreamOfCenterOutcome CdnClient::describeDomainUpstreamOfCenter(const DescribeDomainUpstreamOfCenterRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainUpstreamOfCenterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainUpstreamOfCenterOutcome(DescribeDomainUpstreamOfCenterResult(outcome.result()));
	else
		return DescribeDomainUpstreamOfCenterOutcome(outcome.error());
}

void CdnClient::describeDomainUpstreamOfCenterAsync(const DescribeDomainUpstreamOfCenterRequest& request, const DescribeDomainUpstreamOfCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainUpstreamOfCenter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainUpstreamOfCenterOutcomeCallable CdnClient::describeDomainUpstreamOfCenterCallable(const DescribeDomainUpstreamOfCenterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainUpstreamOfCenterOutcome()>>(
			[this, request]()
			{
			return this->describeDomainUpstreamOfCenter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::StopCdnDomainOutcome CdnClient::stopCdnDomain(const StopCdnDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return StopCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopCdnDomainOutcome(StopCdnDomainResult(outcome.result()));
	else
		return StopCdnDomainOutcome(outcome.error());
}

void CdnClient::stopCdnDomainAsync(const StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::StopCdnDomainOutcomeCallable CdnClient::stopCdnDomainCallable(const StopCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->stopCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainsUsageByDayOutcome CdnClient::describeDomainsUsageByDay(const DescribeDomainsUsageByDayRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeTopDomainsByFlowOutcome CdnClient::describeTopDomainsByFlow(const DescribeTopDomainsByFlowRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeDomainAverageResponseTimeOutcome CdnClient::describeDomainAverageResponseTime(const DescribeDomainAverageResponseTimeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainAverageResponseTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainAverageResponseTimeOutcome(DescribeDomainAverageResponseTimeResult(outcome.result()));
	else
		return DescribeDomainAverageResponseTimeOutcome(outcome.error());
}

void CdnClient::describeDomainAverageResponseTimeAsync(const DescribeDomainAverageResponseTimeRequest& request, const DescribeDomainAverageResponseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainAverageResponseTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainAverageResponseTimeOutcomeCallable CdnClient::describeDomainAverageResponseTimeCallable(const DescribeDomainAverageResponseTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainAverageResponseTimeOutcome()>>(
			[this, request]()
			{
			return this->describeDomainAverageResponseTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamBitRateDataOutcome CdnClient::describeLiveStreamBitRateData(const DescribeLiveStreamBitRateDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamBitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamBitRateDataOutcome(DescribeLiveStreamBitRateDataResult(outcome.result()));
	else
		return DescribeLiveStreamBitRateDataOutcome(outcome.error());
}

void CdnClient::describeLiveStreamBitRateDataAsync(const DescribeLiveStreamBitRateDataRequest& request, const DescribeLiveStreamBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamBitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamBitRateDataOutcomeCallable CdnClient::describeLiveStreamBitRateDataCallable(const DescribeLiveStreamBitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamBitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamBitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetUserDomainBlackListOutcome CdnClient::setUserDomainBlackList(const SetUserDomainBlackListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserDomainBlackListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserDomainBlackListOutcome(SetUserDomainBlackListResult(outcome.result()));
	else
		return SetUserDomainBlackListOutcome(outcome.error());
}

void CdnClient::setUserDomainBlackListAsync(const SetUserDomainBlackListRequest& request, const SetUserDomainBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserDomainBlackList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetUserDomainBlackListOutcomeCallable CdnClient::setUserDomainBlackListCallable(const SetUserDomainBlackListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserDomainBlackListOutcome()>>(
			[this, request]()
			{
			return this->setUserDomainBlackList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetLocationAccessRestrictionOutcome CdnClient::setLocationAccessRestriction(const SetLocationAccessRestrictionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetLocationAccessRestrictionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLocationAccessRestrictionOutcome(SetLocationAccessRestrictionResult(outcome.result()));
	else
		return SetLocationAccessRestrictionOutcome(outcome.error());
}

void CdnClient::setLocationAccessRestrictionAsync(const SetLocationAccessRestrictionRequest& request, const SetLocationAccessRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLocationAccessRestriction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetLocationAccessRestrictionOutcomeCallable CdnClient::setLocationAccessRestrictionCallable(const SetLocationAccessRestrictionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLocationAccessRestrictionOutcome()>>(
			[this, request]()
			{
			return this->setLocationAccessRestriction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeExtensiveDomainDataOutcome CdnClient::describeExtensiveDomainData(const DescribeExtensiveDomainDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExtensiveDomainDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExtensiveDomainDataOutcome(DescribeExtensiveDomainDataResult(outcome.result()));
	else
		return DescribeExtensiveDomainDataOutcome(outcome.error());
}

void CdnClient::describeExtensiveDomainDataAsync(const DescribeExtensiveDomainDataRequest& request, const DescribeExtensiveDomainDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExtensiveDomainData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeExtensiveDomainDataOutcomeCallable CdnClient::describeExtensiveDomainDataCallable(const DescribeExtensiveDomainDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExtensiveDomainDataOutcome()>>(
			[this, request]()
			{
			return this->describeExtensiveDomainData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyCdnServiceOutcome CdnClient::modifyCdnService(const ModifyCdnServiceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCdnServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCdnServiceOutcome(ModifyCdnServiceResult(outcome.result()));
	else
		return ModifyCdnServiceOutcome(outcome.error());
}

void CdnClient::modifyCdnServiceAsync(const ModifyCdnServiceRequest& request, const ModifyCdnServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCdnService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyCdnServiceOutcomeCallable CdnClient::modifyCdnServiceCallable(const ModifyCdnServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCdnServiceOutcome()>>(
			[this, request]()
			{
			return this->modifyCdnService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRecordIndexFileOutcome CdnClient::describeLiveStreamRecordIndexFile(const DescribeLiveStreamRecordIndexFileRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordIndexFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordIndexFileOutcome(DescribeLiveStreamRecordIndexFileResult(outcome.result()));
	else
		return DescribeLiveStreamRecordIndexFileOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRecordIndexFileAsync(const DescribeLiveStreamRecordIndexFileRequest& request, const DescribeLiveStreamRecordIndexFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordIndexFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRecordIndexFileOutcomeCallable CdnClient::describeLiveStreamRecordIndexFileCallable(const DescribeLiveStreamRecordIndexFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordIndexFileOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordIndexFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamTranscodeStreamNumOutcome CdnClient::describeLiveStreamTranscodeStreamNum(const DescribeLiveStreamTranscodeStreamNumRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamTranscodeStreamNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamTranscodeStreamNumOutcome(DescribeLiveStreamTranscodeStreamNumResult(outcome.result()));
	else
		return DescribeLiveStreamTranscodeStreamNumOutcome(outcome.error());
}

void CdnClient::describeLiveStreamTranscodeStreamNumAsync(const DescribeLiveStreamTranscodeStreamNumRequest& request, const DescribeLiveStreamTranscodeStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamTranscodeStreamNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamTranscodeStreamNumOutcomeCallable CdnClient::describeLiveStreamTranscodeStreamNumCallable(const DescribeLiveStreamTranscodeStreamNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamTranscodeStreamNumOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamTranscodeStreamNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteHttpHeaderConfigOutcome CdnClient::deleteHttpHeaderConfig(const DeleteHttpHeaderConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHttpHeaderConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHttpHeaderConfigOutcome(DeleteHttpHeaderConfigResult(outcome.result()));
	else
		return DeleteHttpHeaderConfigOutcome(outcome.error());
}

void CdnClient::deleteHttpHeaderConfigAsync(const DeleteHttpHeaderConfigRequest& request, const DeleteHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHttpHeaderConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteHttpHeaderConfigOutcomeCallable CdnClient::deleteHttpHeaderConfigCallable(const DeleteHttpHeaderConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHttpHeaderConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteHttpHeaderConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainHitRateDataOutcome CdnClient::describeDomainHitRateData(const DescribeDomainHitRateDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::PushObjectCacheOutcome CdnClient::pushObjectCache(const PushObjectCacheRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeLiveRecordConfigOutcome CdnClient::describeLiveRecordConfig(const DescribeLiveRecordConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveRecordConfigOutcome(DescribeLiveRecordConfigResult(outcome.result()));
	else
		return DescribeLiveRecordConfigOutcome(outcome.error());
}

void CdnClient::describeLiveRecordConfigAsync(const DescribeLiveRecordConfigRequest& request, const DescribeLiveRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveRecordConfigOutcomeCallable CdnClient::describeLiveRecordConfigCallable(const DescribeLiveRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetForceRedirectConfigOutcome CdnClient::setForceRedirectConfig(const SetForceRedirectConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetForceRedirectConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetForceRedirectConfigOutcome(SetForceRedirectConfigResult(outcome.result()));
	else
		return SetForceRedirectConfigOutcome(outcome.error());
}

void CdnClient::setForceRedirectConfigAsync(const SetForceRedirectConfigRequest& request, const SetForceRedirectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setForceRedirectConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetForceRedirectConfigOutcomeCallable CdnClient::setForceRedirectConfigCallable(const SetForceRedirectConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetForceRedirectConfigOutcome()>>(
			[this, request]()
			{
			return this->setForceRedirectConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetErrorPageConfigOutcome CdnClient::setErrorPageConfig(const SetErrorPageConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetErrorPageConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetErrorPageConfigOutcome(SetErrorPageConfigResult(outcome.result()));
	else
		return SetErrorPageConfigOutcome(outcome.error());
}

void CdnClient::setErrorPageConfigAsync(const SetErrorPageConfigRequest& request, const SetErrorPageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setErrorPageConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetErrorPageConfigOutcomeCallable CdnClient::setErrorPageConfigCallable(const SetErrorPageConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetErrorPageConfigOutcome()>>(
			[this, request]()
			{
			return this->setErrorPageConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamOnlineUserNumOutcome CdnClient::describeLiveStreamOnlineUserNum(const DescribeLiveStreamOnlineUserNumRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamOnlineUserNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamOnlineUserNumOutcome(DescribeLiveStreamOnlineUserNumResult(outcome.result()));
	else
		return DescribeLiveStreamOnlineUserNumOutcome(outcome.error());
}

void CdnClient::describeLiveStreamOnlineUserNumAsync(const DescribeLiveStreamOnlineUserNumRequest& request, const DescribeLiveStreamOnlineUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamOnlineUserNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamOnlineUserNumOutcomeCallable CdnClient::describeLiveStreamOnlineUserNumCallable(const DescribeLiveStreamOnlineUserNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamOnlineUserNumOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamOnlineUserNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetRefererConfigOutcome CdnClient::setRefererConfig(const SetRefererConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetRefererConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRefererConfigOutcome(SetRefererConfigResult(outcome.result()));
	else
		return SetRefererConfigOutcome(outcome.error());
}

void CdnClient::setRefererConfigAsync(const SetRefererConfigRequest& request, const SetRefererConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRefererConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetRefererConfigOutcomeCallable CdnClient::setRefererConfigCallable(const SetRefererConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRefererConfigOutcome()>>(
			[this, request]()
			{
			return this->setRefererConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSrcFlowDataOutcome CdnClient::describeDomainSrcFlowData(const DescribeDomainSrcFlowDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DeleteLiveAppSnapshotConfigOutcome CdnClient::deleteLiveAppSnapshotConfig(const DeleteLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAppSnapshotConfigOutcome(DeleteLiveAppSnapshotConfigResult(outcome.result()));
	else
		return DeleteLiveAppSnapshotConfigOutcome(outcome.error());
}

void CdnClient::deleteLiveAppSnapshotConfigAsync(const DeleteLiveAppSnapshotConfigRequest& request, const DeleteLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLiveAppSnapshotConfigOutcomeCallable CdnClient::deleteLiveAppSnapshotConfigCallable(const DeleteLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnTypesOutcome CdnClient::describeCdnTypes(const DescribeCdnTypesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnTypesOutcome(DescribeCdnTypesResult(outcome.result()));
	else
		return DescribeCdnTypesOutcome(outcome.error());
}

void CdnClient::describeCdnTypesAsync(const DescribeCdnTypesRequest& request, const DescribeCdnTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnTypesOutcomeCallable CdnClient::describeCdnTypesCallable(const DescribeCdnTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnTypesOutcome()>>(
			[this, request]()
			{
			return this->describeCdnTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetOptimizeConfigOutcome CdnClient::setOptimizeConfig(const SetOptimizeConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetOptimizeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetOptimizeConfigOutcome(SetOptimizeConfigResult(outcome.result()));
	else
		return SetOptimizeConfigOutcome(outcome.error());
}

void CdnClient::setOptimizeConfigAsync(const SetOptimizeConfigRequest& request, const SetOptimizeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setOptimizeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetOptimizeConfigOutcomeCallable CdnClient::setOptimizeConfigCallable(const SetOptimizeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetOptimizeConfigOutcome()>>(
			[this, request]()
			{
			return this->setOptimizeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetDynamicConfigOutcome CdnClient::setDynamicConfig(const SetDynamicConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetDynamicConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDynamicConfigOutcome(SetDynamicConfigResult(outcome.result()));
	else
		return SetDynamicConfigOutcome(outcome.error());
}

void CdnClient::setDynamicConfigAsync(const SetDynamicConfigRequest& request, const SetDynamicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDynamicConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetDynamicConfigOutcomeCallable CdnClient::setDynamicConfigCallable(const SetDynamicConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDynamicConfigOutcome()>>(
			[this, request]()
			{
			return this->setDynamicConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetReqAuthConfigOutcome CdnClient::setReqAuthConfig(const SetReqAuthConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetReqAuthConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetReqAuthConfigOutcome(SetReqAuthConfigResult(outcome.result()));
	else
		return SetReqAuthConfigOutcome(outcome.error());
}

void CdnClient::setReqAuthConfigAsync(const SetReqAuthConfigRequest& request, const SetReqAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setReqAuthConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetReqAuthConfigOutcomeCallable CdnClient::setReqAuthConfigCallable(const SetReqAuthConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetReqAuthConfigOutcome()>>(
			[this, request]()
			{
			return this->setReqAuthConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamLimitInfoOutcome CdnClient::describeLiveStreamLimitInfo(const DescribeLiveStreamLimitInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamLimitInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamLimitInfoOutcome(DescribeLiveStreamLimitInfoResult(outcome.result()));
	else
		return DescribeLiveStreamLimitInfoOutcome(outcome.error());
}

void CdnClient::describeLiveStreamLimitInfoAsync(const DescribeLiveStreamLimitInfoRequest& request, const DescribeLiveStreamLimitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamLimitInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamLimitInfoOutcomeCallable CdnClient::describeLiveStreamLimitInfoCallable(const DescribeLiveStreamLimitInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamLimitInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamLimitInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamNumberListOutcome CdnClient::describeLiveStreamNumberList(const DescribeLiveStreamNumberListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamNumberListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamNumberListOutcome(DescribeLiveStreamNumberListResult(outcome.result()));
	else
		return DescribeLiveStreamNumberListOutcome(outcome.error());
}

void CdnClient::describeLiveStreamNumberListAsync(const DescribeLiveStreamNumberListRequest& request, const DescribeLiveStreamNumberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamNumberList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamNumberListOutcomeCallable CdnClient::describeLiveStreamNumberListCallable(const DescribeLiveStreamNumberListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamNumberListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamNumberList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetHttpErrorPageConfigOutcome CdnClient::setHttpErrorPageConfig(const SetHttpErrorPageConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetHttpErrorPageConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetHttpErrorPageConfigOutcome(SetHttpErrorPageConfigResult(outcome.result()));
	else
		return SetHttpErrorPageConfigOutcome(outcome.error());
}

void CdnClient::setHttpErrorPageConfigAsync(const SetHttpErrorPageConfigRequest& request, const SetHttpErrorPageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setHttpErrorPageConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetHttpErrorPageConfigOutcomeCallable CdnClient::setHttpErrorPageConfigCallable(const SetHttpErrorPageConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetHttpErrorPageConfigOutcome()>>(
			[this, request]()
			{
			return this->setHttpErrorPageConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetPathForceTtlCodeConfigOutcome CdnClient::setPathForceTtlCodeConfig(const SetPathForceTtlCodeConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetPathForceTtlCodeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPathForceTtlCodeConfigOutcome(SetPathForceTtlCodeConfigResult(outcome.result()));
	else
		return SetPathForceTtlCodeConfigOutcome(outcome.error());
}

void CdnClient::setPathForceTtlCodeConfigAsync(const SetPathForceTtlCodeConfigRequest& request, const SetPathForceTtlCodeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPathForceTtlCodeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetPathForceTtlCodeConfigOutcomeCallable CdnClient::setPathForceTtlCodeConfigCallable(const SetPathForceTtlCodeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPathForceTtlCodeConfigOutcome()>>(
			[this, request]()
			{
			return this->setPathForceTtlCodeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRelayPushBitRateOutcome CdnClient::describeLiveStreamRelayPushBitRate(const DescribeLiveStreamRelayPushBitRateRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRelayPushBitRateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRelayPushBitRateOutcome(DescribeLiveStreamRelayPushBitRateResult(outcome.result()));
	else
		return DescribeLiveStreamRelayPushBitRateOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRelayPushBitRateAsync(const DescribeLiveStreamRelayPushBitRateRequest& request, const DescribeLiveStreamRelayPushBitRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRelayPushBitRate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRelayPushBitRateOutcomeCallable CdnClient::describeLiveStreamRelayPushBitRateCallable(const DescribeLiveStreamRelayPushBitRateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRelayPushBitRateOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRelayPushBitRate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::StartMixStreamsServiceOutcome CdnClient::startMixStreamsService(const StartMixStreamsServiceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return StartMixStreamsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartMixStreamsServiceOutcome(StartMixStreamsServiceResult(outcome.result()));
	else
		return StartMixStreamsServiceOutcome(outcome.error());
}

void CdnClient::startMixStreamsServiceAsync(const StartMixStreamsServiceRequest& request, const StartMixStreamsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startMixStreamsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::StartMixStreamsServiceOutcomeCallable CdnClient::startMixStreamsServiceCallable(const StartMixStreamsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartMixStreamsServiceOutcome()>>(
			[this, request]()
			{
			return this->startMixStreamsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLivePullStreamConfigOutcome CdnClient::describeLivePullStreamConfig(const DescribeLivePullStreamConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePullStreamConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePullStreamConfigOutcome(DescribeLivePullStreamConfigResult(outcome.result()));
	else
		return DescribeLivePullStreamConfigOutcome(outcome.error());
}

void CdnClient::describeLivePullStreamConfigAsync(const DescribeLivePullStreamConfigRequest& request, const DescribeLivePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePullStreamConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLivePullStreamConfigOutcomeCallable CdnClient::describeLivePullStreamConfigCallable(const DescribeLivePullStreamConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePullStreamConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLivePullStreamConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetLiveStreamsNotifyUrlConfigOutcome CdnClient::setLiveStreamsNotifyUrlConfig(const SetLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveStreamsNotifyUrlConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveStreamsNotifyUrlConfigOutcome(SetLiveStreamsNotifyUrlConfigResult(outcome.result()));
	else
		return SetLiveStreamsNotifyUrlConfigOutcome(outcome.error());
}

void CdnClient::setLiveStreamsNotifyUrlConfigAsync(const SetLiveStreamsNotifyUrlConfigRequest& request, const SetLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveStreamsNotifyUrlConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetLiveStreamsNotifyUrlConfigOutcomeCallable CdnClient::setLiveStreamsNotifyUrlConfigCallable(const SetLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveStreamsNotifyUrlConfigOutcome()>>(
			[this, request]()
			{
			return this->setLiveStreamsNotifyUrlConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainPathDataOutcome CdnClient::describeDomainPathData(const DescribeDomainPathDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainPathDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainPathDataOutcome(DescribeDomainPathDataResult(outcome.result()));
	else
		return DescribeDomainPathDataOutcome(outcome.error());
}

void CdnClient::describeDomainPathDataAsync(const DescribeDomainPathDataRequest& request, const DescribeDomainPathDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainPathData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainPathDataOutcomeCallable CdnClient::describeDomainPathDataCallable(const DescribeDomainPathDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainPathDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainPathData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainLogsOutcome CdnClient::describeCdnDomainLogs(const DescribeCdnDomainLogsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeLiveAppRecordConfigOutcome CdnClient::describeLiveAppRecordConfig(const DescribeLiveAppRecordConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveAppRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveAppRecordConfigOutcome(DescribeLiveAppRecordConfigResult(outcome.result()));
	else
		return DescribeLiveAppRecordConfigOutcome(outcome.error());
}

void CdnClient::describeLiveAppRecordConfigAsync(const DescribeLiveAppRecordConfigRequest& request, const DescribeLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveAppRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveAppRecordConfigOutcomeCallable CdnClient::describeLiveAppRecordConfigCallable(const DescribeLiveAppRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveAppRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveAppRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainFlowDataOutcome CdnClient::describeDomainFlowData(const DescribeDomainFlowDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::SetOssLogConfigOutcome CdnClient::setOssLogConfig(const SetOssLogConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetOssLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetOssLogConfigOutcome(SetOssLogConfigResult(outcome.result()));
	else
		return SetOssLogConfigOutcome(outcome.error());
}

void CdnClient::setOssLogConfigAsync(const SetOssLogConfigRequest& request, const SetOssLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setOssLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetOssLogConfigOutcomeCallable CdnClient::setOssLogConfigCallable(const SetOssLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetOssLogConfigOutcome()>>(
			[this, request]()
			{
			return this->setOssLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRelayPushErrorsOutcome CdnClient::describeLiveStreamRelayPushErrors(const DescribeLiveStreamRelayPushErrorsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRelayPushErrorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRelayPushErrorsOutcome(DescribeLiveStreamRelayPushErrorsResult(outcome.result()));
	else
		return DescribeLiveStreamRelayPushErrorsOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRelayPushErrorsAsync(const DescribeLiveStreamRelayPushErrorsRequest& request, const DescribeLiveStreamRelayPushErrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRelayPushErrors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRelayPushErrorsOutcomeCallable CdnClient::describeLiveStreamRelayPushErrorsCallable(const DescribeLiveStreamRelayPushErrorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRelayPushErrorsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRelayPushErrors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsBlockListOutcome CdnClient::describeLiveStreamsBlockList(const DescribeLiveStreamsBlockListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsBlockListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsBlockListOutcome(DescribeLiveStreamsBlockListResult(outcome.result()));
	else
		return DescribeLiveStreamsBlockListOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsBlockListAsync(const DescribeLiveStreamsBlockListRequest& request, const DescribeLiveStreamsBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsBlockList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsBlockListOutcomeCallable CdnClient::describeLiveStreamsBlockListCallable(const DescribeLiveStreamsBlockListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsBlockListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsBlockList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddLiveStreamTranscodeOutcome CdnClient::addLiveStreamTranscode(const AddLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveStreamTranscodeOutcome(AddLiveStreamTranscodeResult(outcome.result()));
	else
		return AddLiveStreamTranscodeOutcome(outcome.error());
}

void CdnClient::addLiveStreamTranscodeAsync(const AddLiveStreamTranscodeRequest& request, const AddLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLiveStreamTranscodeOutcomeCallable CdnClient::addLiveStreamTranscodeCallable(const AddLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->addLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetIgnoreQueryStringConfigOutcome CdnClient::setIgnoreQueryStringConfig(const SetIgnoreQueryStringConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetIgnoreQueryStringConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIgnoreQueryStringConfigOutcome(SetIgnoreQueryStringConfigResult(outcome.result()));
	else
		return SetIgnoreQueryStringConfigOutcome(outcome.error());
}

void CdnClient::setIgnoreQueryStringConfigAsync(const SetIgnoreQueryStringConfigRequest& request, const SetIgnoreQueryStringConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIgnoreQueryStringConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetIgnoreQueryStringConfigOutcomeCallable CdnClient::setIgnoreQueryStringConfigCallable(const SetIgnoreQueryStringConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIgnoreQueryStringConfigOutcome()>>(
			[this, request]()
			{
			return this->setIgnoreQueryStringConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddLivePullStreamInfoOutcome CdnClient::addLivePullStreamInfo(const AddLivePullStreamInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddLivePullStreamInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLivePullStreamInfoOutcome(AddLivePullStreamInfoResult(outcome.result()));
	else
		return AddLivePullStreamInfoOutcome(outcome.error());
}

void CdnClient::addLivePullStreamInfoAsync(const AddLivePullStreamInfoRequest& request, const AddLivePullStreamInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLivePullStreamInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLivePullStreamInfoOutcomeCallable CdnClient::addLivePullStreamInfoCallable(const AddLivePullStreamInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLivePullStreamInfoOutcome()>>(
			[this, request]()
			{
			return this->addLivePullStreamInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserCustomerLabelsOutcome CdnClient::describeUserCustomerLabels(const DescribeUserCustomerLabelsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserCustomerLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserCustomerLabelsOutcome(DescribeUserCustomerLabelsResult(outcome.result()));
	else
		return DescribeUserCustomerLabelsOutcome(outcome.error());
}

void CdnClient::describeUserCustomerLabelsAsync(const DescribeUserCustomerLabelsRequest& request, const DescribeUserCustomerLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserCustomerLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserCustomerLabelsOutcomeCallable CdnClient::describeUserCustomerLabelsCallable(const DescribeUserCustomerLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserCustomerLabelsOutcome()>>(
			[this, request]()
			{
			return this->describeUserCustomerLabels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::BatchDescribeDomainBpsDataOutcome CdnClient::batchDescribeDomainBpsData(const BatchDescribeDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDescribeDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDescribeDomainBpsDataOutcome(BatchDescribeDomainBpsDataResult(outcome.result()));
	else
		return BatchDescribeDomainBpsDataOutcome(outcome.error());
}

void CdnClient::batchDescribeDomainBpsDataAsync(const BatchDescribeDomainBpsDataRequest& request, const BatchDescribeDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDescribeDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::BatchDescribeDomainBpsDataOutcomeCallable CdnClient::batchDescribeDomainBpsDataCallable(const BatchDescribeDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDescribeDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->batchDescribeDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainTopReferVisitOutcome CdnClient::describeDomainTopReferVisit(const DescribeDomainTopReferVisitRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainTopReferVisitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainTopReferVisitOutcome(DescribeDomainTopReferVisitResult(outcome.result()));
	else
		return DescribeDomainTopReferVisitOutcome(outcome.error());
}

void CdnClient::describeDomainTopReferVisitAsync(const DescribeDomainTopReferVisitRequest& request, const DescribeDomainTopReferVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainTopReferVisit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainTopReferVisitOutcomeCallable CdnClient::describeDomainTopReferVisitCallable(const DescribeDomainTopReferVisitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainTopReferVisitOutcome()>>(
			[this, request]()
			{
			return this->describeDomainTopReferVisit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamBpsDataOutcome CdnClient::describeLiveStreamBpsData(const DescribeLiveStreamBpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamBpsDataOutcome(DescribeLiveStreamBpsDataResult(outcome.result()));
	else
		return DescribeLiveStreamBpsDataOutcome(outcome.error());
}

void CdnClient::describeLiveStreamBpsDataAsync(const DescribeLiveStreamBpsDataRequest& request, const DescribeLiveStreamBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamBpsDataOutcomeCallable CdnClient::describeLiveStreamBpsDataCallable(const DescribeLiveStreamBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsControlHistoryOutcome CdnClient::describeLiveStreamsControlHistory(const DescribeLiveStreamsControlHistoryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsControlHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsControlHistoryOutcome(DescribeLiveStreamsControlHistoryResult(outcome.result()));
	else
		return DescribeLiveStreamsControlHistoryOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsControlHistoryAsync(const DescribeLiveStreamsControlHistoryRequest& request, const DescribeLiveStreamsControlHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsControlHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsControlHistoryOutcomeCallable CdnClient::describeLiveStreamsControlHistoryCallable(const DescribeLiveStreamsControlHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsControlHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsControlHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::OpenCdnServiceOutcome CdnClient::openCdnService(const OpenCdnServiceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::SetReqHeaderConfigOutcome CdnClient::setReqHeaderConfig(const SetReqHeaderConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetReqHeaderConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetReqHeaderConfigOutcome(SetReqHeaderConfigResult(outcome.result()));
	else
		return SetReqHeaderConfigOutcome(outcome.error());
}

void CdnClient::setReqHeaderConfigAsync(const SetReqHeaderConfigRequest& request, const SetReqHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setReqHeaderConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetReqHeaderConfigOutcomeCallable CdnClient::setReqHeaderConfigCallable(const SetReqHeaderConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetReqHeaderConfigOutcome()>>(
			[this, request]()
			{
			return this->setReqHeaderConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainQoSRtOutcome CdnClient::describeDomainQoSRt(const DescribeDomainQoSRtRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainQoSRtOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainQoSRtOutcome(DescribeDomainQoSRtResult(outcome.result()));
	else
		return DescribeDomainQoSRtOutcome(outcome.error());
}

void CdnClient::describeDomainQoSRtAsync(const DescribeDomainQoSRtRequest& request, const DescribeDomainQoSRtAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainQoSRt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainQoSRtOutcomeCallable CdnClient::describeDomainQoSRtCallable(const DescribeDomainQoSRtRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainQoSRtOutcome()>>(
			[this, request]()
			{
			return this->describeDomainQoSRt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeReqHitRateDataOutcome CdnClient::describeDomainRealTimeReqHitRateData(const DescribeDomainRealTimeReqHitRateDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeReqHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeReqHitRateDataOutcome(DescribeDomainRealTimeReqHitRateDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeReqHitRateDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeReqHitRateDataAsync(const DescribeDomainRealTimeReqHitRateDataRequest& request, const DescribeDomainRealTimeReqHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeReqHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeReqHitRateDataOutcomeCallable CdnClient::describeDomainRealTimeReqHitRateDataCallable(const DescribeDomainRealTimeReqHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeReqHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeReqHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamFrameAndBitRateByDomainOutcome CdnClient::describeLiveStreamFrameAndBitRateByDomain(const DescribeLiveStreamFrameAndBitRateByDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamFrameAndBitRateByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamFrameAndBitRateByDomainOutcome(DescribeLiveStreamFrameAndBitRateByDomainResult(outcome.result()));
	else
		return DescribeLiveStreamFrameAndBitRateByDomainOutcome(outcome.error());
}

void CdnClient::describeLiveStreamFrameAndBitRateByDomainAsync(const DescribeLiveStreamFrameAndBitRateByDomainRequest& request, const DescribeLiveStreamFrameAndBitRateByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamFrameAndBitRateByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamFrameAndBitRateByDomainOutcomeCallable CdnClient::describeLiveStreamFrameAndBitRateByDomainCallable(const DescribeLiveStreamFrameAndBitRateByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamFrameAndBitRateByDomainOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamFrameAndBitRateByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamSnapshotInfoOutcome CdnClient::describeLiveStreamSnapshotInfo(const DescribeLiveStreamSnapshotInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamSnapshotInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamSnapshotInfoOutcome(DescribeLiveStreamSnapshotInfoResult(outcome.result()));
	else
		return DescribeLiveStreamSnapshotInfoOutcome(outcome.error());
}

void CdnClient::describeLiveStreamSnapshotInfoAsync(const DescribeLiveStreamSnapshotInfoRequest& request, const DescribeLiveStreamSnapshotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamSnapshotInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamSnapshotInfoOutcomeCallable CdnClient::describeLiveStreamSnapshotInfoCallable(const DescribeLiveStreamSnapshotInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamSnapshotInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamSnapshotInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetIpBlackListConfigOutcome CdnClient::setIpBlackListConfig(const SetIpBlackListConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetIpBlackListConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIpBlackListConfigOutcome(SetIpBlackListConfigResult(outcome.result()));
	else
		return SetIpBlackListConfigOutcome(outcome.error());
}

void CdnClient::setIpBlackListConfigAsync(const SetIpBlackListConfigRequest& request, const SetIpBlackListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIpBlackListConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetIpBlackListConfigOutcomeCallable CdnClient::setIpBlackListConfigCallable(const SetIpBlackListConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIpBlackListConfigOutcome()>>(
			[this, request]()
			{
			return this->setIpBlackListConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainSlowRatioOutcome CdnClient::describeDomainSlowRatio(const DescribeDomainSlowRatioRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainSlowRatioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainSlowRatioOutcome(DescribeDomainSlowRatioResult(outcome.result()));
	else
		return DescribeDomainSlowRatioOutcome(outcome.error());
}

void CdnClient::describeDomainSlowRatioAsync(const DescribeDomainSlowRatioRequest& request, const DescribeDomainSlowRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainSlowRatio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainSlowRatioOutcomeCallable CdnClient::describeDomainSlowRatioCallable(const DescribeDomainSlowRatioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainSlowRatioOutcome()>>(
			[this, request]()
			{
			return this->describeDomainSlowRatio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainCCDataOutcome CdnClient::describeDomainCCData(const DescribeDomainCCDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCCDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCCDataOutcome(DescribeDomainCCDataResult(outcome.result()));
	else
		return DescribeDomainCCDataOutcome(outcome.error());
}

void CdnClient::describeDomainCCDataAsync(const DescribeDomainCCDataRequest& request, const DescribeDomainCCDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCCData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainCCDataOutcomeCallable CdnClient::describeDomainCCDataCallable(const DescribeDomainCCDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCCDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCCData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRelayPushDataOutcome CdnClient::describeLiveStreamRelayPushData(const DescribeLiveStreamRelayPushDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRelayPushDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRelayPushDataOutcome(DescribeLiveStreamRelayPushDataResult(outcome.result()));
	else
		return DescribeLiveStreamRelayPushDataOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRelayPushDataAsync(const DescribeLiveStreamRelayPushDataRequest& request, const DescribeLiveStreamRelayPushDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRelayPushData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRelayPushDataOutcomeCallable CdnClient::describeLiveStreamRelayPushDataCallable(const DescribeLiveStreamRelayPushDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRelayPushDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRelayPushData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetIpAllowListConfigOutcome CdnClient::setIpAllowListConfig(const SetIpAllowListConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetIpAllowListConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIpAllowListConfigOutcome(SetIpAllowListConfigResult(outcome.result()));
	else
		return SetIpAllowListConfigOutcome(outcome.error());
}

void CdnClient::setIpAllowListConfigAsync(const SetIpAllowListConfigRequest& request, const SetIpAllowListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIpAllowListConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetIpAllowListConfigOutcomeCallable CdnClient::setIpAllowListConfigCallable(const SetIpAllowListConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIpAllowListConfigOutcome()>>(
			[this, request]()
			{
			return this->setIpAllowListConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeQpsDataOutcome CdnClient::describeDomainRealTimeQpsData(const DescribeDomainRealTimeQpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeQpsDataOutcome(DescribeDomainRealTimeQpsDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeQpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeQpsDataAsync(const DescribeDomainRealTimeQpsDataRequest& request, const DescribeDomainRealTimeQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeQpsDataOutcomeCallable CdnClient::describeDomainRealTimeQpsDataCallable(const DescribeDomainRealTimeQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::RefreshObjectCachesOutcome CdnClient::refreshObjectCaches(const RefreshObjectCachesRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeLiveStreamsFrameRateAndBitRateDataOutcome CdnClient::describeLiveStreamsFrameRateAndBitRateData(const DescribeLiveStreamsFrameRateAndBitRateDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsFrameRateAndBitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsFrameRateAndBitRateDataOutcome(DescribeLiveStreamsFrameRateAndBitRateDataResult(outcome.result()));
	else
		return DescribeLiveStreamsFrameRateAndBitRateDataOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsFrameRateAndBitRateDataAsync(const DescribeLiveStreamsFrameRateAndBitRateDataRequest& request, const DescribeLiveStreamsFrameRateAndBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsFrameRateAndBitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsFrameRateAndBitRateDataOutcomeCallable CdnClient::describeLiveStreamsFrameRateAndBitRateDataCallable(const DescribeLiveStreamsFrameRateAndBitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsFrameRateAndBitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsFrameRateAndBitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeOneMinuteDataOutcome CdnClient::describeOneMinuteData(const DescribeOneMinuteDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOneMinuteDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOneMinuteDataOutcome(DescribeOneMinuteDataResult(outcome.result()));
	else
		return DescribeOneMinuteDataOutcome(outcome.error());
}

void CdnClient::describeOneMinuteDataAsync(const DescribeOneMinuteDataRequest& request, const DescribeOneMinuteDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOneMinuteData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeOneMinuteDataOutcomeCallable CdnClient::describeOneMinuteDataCallable(const DescribeOneMinuteDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOneMinuteDataOutcome()>>(
			[this, request]()
			{
			return this->describeOneMinuteData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRecordContentOutcome CdnClient::describeLiveStreamRecordContent(const DescribeLiveStreamRecordContentRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordContentOutcome(DescribeLiveStreamRecordContentResult(outcome.result()));
	else
		return DescribeLiveStreamRecordContentOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRecordContentAsync(const DescribeLiveStreamRecordContentRequest& request, const DescribeLiveStreamRecordContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRecordContentOutcomeCallable CdnClient::describeLiveStreamRecordContentCallable(const DescribeLiveStreamRecordContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordContentOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddCdnDomainOutcome CdnClient::addCdnDomain(const AddCdnDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::SetRangeConfigOutcome CdnClient::setRangeConfig(const SetRangeConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetRangeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRangeConfigOutcome(SetRangeConfigResult(outcome.result()));
	else
		return SetRangeConfigOutcome(outcome.error());
}

void CdnClient::setRangeConfigAsync(const SetRangeConfigRequest& request, const SetRangeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRangeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetRangeConfigOutcomeCallable CdnClient::setRangeConfigCallable(const SetRangeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRangeConfigOutcome()>>(
			[this, request]()
			{
			return this->setRangeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRoomBitRateOutcome CdnClient::describeLiveStreamRoomBitRate(const DescribeLiveStreamRoomBitRateRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRoomBitRateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRoomBitRateOutcome(DescribeLiveStreamRoomBitRateResult(outcome.result()));
	else
		return DescribeLiveStreamRoomBitRateOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRoomBitRateAsync(const DescribeLiveStreamRoomBitRateRequest& request, const DescribeLiveStreamRoomBitRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRoomBitRate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRoomBitRateOutcomeCallable CdnClient::describeLiveStreamRoomBitRateCallable(const DescribeLiveStreamRoomBitRateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRoomBitRateOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRoomBitRate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetCcConfigOutcome CdnClient::setCcConfig(const SetCcConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetCcConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCcConfigOutcome(SetCcConfigResult(outcome.result()));
	else
		return SetCcConfigOutcome(outcome.error());
}

void CdnClient::setCcConfigAsync(const SetCcConfigRequest& request, const SetCcConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCcConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetCcConfigOutcomeCallable CdnClient::setCcConfigCallable(const SetCcConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCcConfigOutcome()>>(
			[this, request]()
			{
			return this->setCcConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserDomainsOutcome CdnClient::describeUserDomains(const DescribeUserDomainsRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeLiveSnapshotConfigOutcome CdnClient::describeLiveSnapshotConfig(const DescribeLiveSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveSnapshotConfigOutcome(DescribeLiveSnapshotConfigResult(outcome.result()));
	else
		return DescribeLiveSnapshotConfigOutcome(outcome.error());
}

void CdnClient::describeLiveSnapshotConfigAsync(const DescribeLiveSnapshotConfigRequest& request, const DescribeLiveSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveSnapshotConfigOutcomeCallable CdnClient::describeLiveSnapshotConfigCallable(const DescribeLiveSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRefreshTasksOutcome CdnClient::describeRefreshTasks(const DescribeRefreshTasksRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRefreshTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRefreshTasksOutcome(DescribeRefreshTasksResult(outcome.result()));
	else
		return DescribeRefreshTasksOutcome(outcome.error());
}

void CdnClient::describeRefreshTasksAsync(const DescribeRefreshTasksRequest& request, const DescribeRefreshTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRefreshTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRefreshTasksOutcomeCallable CdnClient::describeRefreshTasksCallable(const DescribeRefreshTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRefreshTasksOutcome()>>(
			[this, request]()
			{
			return this->describeRefreshTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRefreshQuotaOutcome CdnClient::describeRefreshQuota(const DescribeRefreshQuotaRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::AddLiveAppRecordConfigOutcome CdnClient::addLiveAppRecordConfig(const AddLiveAppRecordConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAppRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAppRecordConfigOutcome(AddLiveAppRecordConfigResult(outcome.result()));
	else
		return AddLiveAppRecordConfigOutcome(outcome.error());
}

void CdnClient::addLiveAppRecordConfigAsync(const AddLiveAppRecordConfigRequest& request, const AddLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAppRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLiveAppRecordConfigOutcomeCallable CdnClient::addLiveAppRecordConfigCallable(const AddLiveAppRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAppRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveAppRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetForwardSchemeConfigOutcome CdnClient::setForwardSchemeConfig(const SetForwardSchemeConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetForwardSchemeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetForwardSchemeConfigOutcome(SetForwardSchemeConfigResult(outcome.result()));
	else
		return SetForwardSchemeConfigOutcome(outcome.error());
}

void CdnClient::setForwardSchemeConfigAsync(const SetForwardSchemeConfigRequest& request, const SetForwardSchemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setForwardSchemeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetForwardSchemeConfigOutcomeCallable CdnClient::setForwardSchemeConfigCallable(const SetForwardSchemeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetForwardSchemeConfigOutcome()>>(
			[this, request]()
			{
			return this->setForwardSchemeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteLiveDomainMappingOutcome CdnClient::deleteLiveDomainMapping(const DeleteLiveDomainMappingRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveDomainMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveDomainMappingOutcome(DeleteLiveDomainMappingResult(outcome.result()));
	else
		return DeleteLiveDomainMappingOutcome(outcome.error());
}

void CdnClient::deleteLiveDomainMappingAsync(const DeleteLiveDomainMappingRequest& request, const DeleteLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveDomainMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLiveDomainMappingOutcomeCallable CdnClient::deleteLiveDomainMappingCallable(const DeleteLiveDomainMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveDomainMappingOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveDomainMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainBpsDataByTimeStampOutcome CdnClient::describeDomainBpsDataByTimeStamp(const DescribeDomainBpsDataByTimeStampRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::SetSourceHostConfigOutcome CdnClient::setSourceHostConfig(const SetSourceHostConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetSourceHostConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSourceHostConfigOutcome(SetSourceHostConfigResult(outcome.result()));
	else
		return SetSourceHostConfigOutcome(outcome.error());
}

void CdnClient::setSourceHostConfigAsync(const SetSourceHostConfigRequest& request, const SetSourceHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSourceHostConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetSourceHostConfigOutcomeCallable CdnClient::setSourceHostConfigCallable(const SetSourceHostConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSourceHostConfigOutcome()>>(
			[this, request]()
			{
			return this->setSourceHostConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRoomUserNumberOutcome CdnClient::describeLiveStreamRoomUserNumber(const DescribeLiveStreamRoomUserNumberRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRoomUserNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRoomUserNumberOutcome(DescribeLiveStreamRoomUserNumberResult(outcome.result()));
	else
		return DescribeLiveStreamRoomUserNumberOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRoomUserNumberAsync(const DescribeLiveStreamRoomUserNumberRequest& request, const DescribeLiveStreamRoomUserNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRoomUserNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRoomUserNumberOutcomeCallable CdnClient::describeLiveStreamRoomUserNumberCallable(const DescribeLiveStreamRoomUserNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRoomUserNumberOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRoomUserNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserConfigsOutcome CdnClient::describeUserConfigs(const DescribeUserConfigsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserConfigsOutcome(DescribeUserConfigsResult(outcome.result()));
	else
		return DescribeUserConfigsOutcome(outcome.error());
}

void CdnClient::describeUserConfigsAsync(const DescribeUserConfigsRequest& request, const DescribeUserConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserConfigsOutcomeCallable CdnClient::describeUserConfigsCallable(const DescribeUserConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeUserConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamStreamStatusOutcome CdnClient::describeLiveStreamStreamStatus(const DescribeLiveStreamStreamStatusRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamStreamStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamStreamStatusOutcome(DescribeLiveStreamStreamStatusResult(outcome.result()));
	else
		return DescribeLiveStreamStreamStatusOutcome(outcome.error());
}

void CdnClient::describeLiveStreamStreamStatusAsync(const DescribeLiveStreamStreamStatusRequest& request, const DescribeLiveStreamStreamStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamStreamStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamStreamStatusOutcomeCallable CdnClient::describeLiveStreamStreamStatusCallable(const DescribeLiveStreamStreamStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamStreamStatusOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamStreamStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamRecordIndexFilesOutcome CdnClient::describeLiveStreamRecordIndexFiles(const DescribeLiveStreamRecordIndexFilesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordIndexFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordIndexFilesOutcome(DescribeLiveStreamRecordIndexFilesResult(outcome.result()));
	else
		return DescribeLiveStreamRecordIndexFilesOutcome(outcome.error());
}

void CdnClient::describeLiveStreamRecordIndexFilesAsync(const DescribeLiveStreamRecordIndexFilesRequest& request, const DescribeLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordIndexFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamRecordIndexFilesOutcomeCallable CdnClient::describeLiveStreamRecordIndexFilesCallable(const DescribeLiveStreamRecordIndexFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordIndexFilesOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordIndexFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyCdnDomainOutcome CdnClient::modifyCdnDomain(const ModifyCdnDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCdnDomainOutcome(ModifyCdnDomainResult(outcome.result()));
	else
		return ModifyCdnDomainOutcome(outcome.error());
}

void CdnClient::modifyCdnDomainAsync(const ModifyCdnDomainRequest& request, const ModifyCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyCdnDomainOutcomeCallable CdnClient::modifyCdnDomainCallable(const ModifyCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->modifyCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainMonthBillingBpsDataOutcome CdnClient::describeDomainMonthBillingBpsData(const DescribeDomainMonthBillingBpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainMonthBillingBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainMonthBillingBpsDataOutcome(DescribeDomainMonthBillingBpsDataResult(outcome.result()));
	else
		return DescribeDomainMonthBillingBpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainMonthBillingBpsDataAsync(const DescribeDomainMonthBillingBpsDataRequest& request, const DescribeDomainMonthBillingBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainMonthBillingBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainMonthBillingBpsDataOutcomeCallable CdnClient::describeDomainMonthBillingBpsDataCallable(const DescribeDomainMonthBillingBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainMonthBillingBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainMonthBillingBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainOnlineUserNumberOutcome CdnClient::describeDomainOnlineUserNumber(const DescribeDomainOnlineUserNumberRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainOnlineUserNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainOnlineUserNumberOutcome(DescribeDomainOnlineUserNumberResult(outcome.result()));
	else
		return DescribeDomainOnlineUserNumberOutcome(outcome.error());
}

void CdnClient::describeDomainOnlineUserNumberAsync(const DescribeDomainOnlineUserNumberRequest& request, const DescribeDomainOnlineUserNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainOnlineUserNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainOnlineUserNumberOutcomeCallable CdnClient::describeDomainOnlineUserNumberCallable(const DescribeDomainOnlineUserNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainOnlineUserNumberOutcome()>>(
			[this, request]()
			{
			return this->describeDomainOnlineUserNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamFrameInfoOutcome CdnClient::describeLiveStreamFrameInfo(const DescribeLiveStreamFrameInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamFrameInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamFrameInfoOutcome(DescribeLiveStreamFrameInfoResult(outcome.result()));
	else
		return DescribeLiveStreamFrameInfoOutcome(outcome.error());
}

void CdnClient::describeLiveStreamFrameInfoAsync(const DescribeLiveStreamFrameInfoRequest& request, const DescribeLiveStreamFrameInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamFrameInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamFrameInfoOutcomeCallable CdnClient::describeLiveStreamFrameInfoCallable(const DescribeLiveStreamFrameInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamFrameInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamFrameInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamFrameLossRatioOutcome CdnClient::describeLiveStreamFrameLossRatio(const DescribeLiveStreamFrameLossRatioRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamFrameLossRatioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamFrameLossRatioOutcome(DescribeLiveStreamFrameLossRatioResult(outcome.result()));
	else
		return DescribeLiveStreamFrameLossRatioOutcome(outcome.error());
}

void CdnClient::describeLiveStreamFrameLossRatioAsync(const DescribeLiveStreamFrameLossRatioRequest& request, const DescribeLiveStreamFrameLossRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamFrameLossRatio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamFrameLossRatioOutcomeCallable CdnClient::describeLiveStreamFrameLossRatioCallable(const DescribeLiveStreamFrameLossRatioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamFrameLossRatioOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamFrameLossRatio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ForbidLiveStreamOutcome CdnClient::forbidLiveStream(const ForbidLiveStreamRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ForbidLiveStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ForbidLiveStreamOutcome(ForbidLiveStreamResult(outcome.result()));
	else
		return ForbidLiveStreamOutcome(outcome.error());
}

void CdnClient::forbidLiveStreamAsync(const ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, forbidLiveStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ForbidLiveStreamOutcomeCallable CdnClient::forbidLiveStreamCallable(const ForbidLiveStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ForbidLiveStreamOutcome()>>(
			[this, request]()
			{
			return this->forbidLiveStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamDomainAppInfoOutcome CdnClient::describeLiveStreamDomainAppInfo(const DescribeLiveStreamDomainAppInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamDomainAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamDomainAppInfoOutcome(DescribeLiveStreamDomainAppInfoResult(outcome.result()));
	else
		return DescribeLiveStreamDomainAppInfoOutcome(outcome.error());
}

void CdnClient::describeLiveStreamDomainAppInfoAsync(const DescribeLiveStreamDomainAppInfoRequest& request, const DescribeLiveStreamDomainAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamDomainAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamDomainAppInfoOutcomeCallable CdnClient::describeLiveStreamDomainAppInfoCallable(const DescribeLiveStreamDomainAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamDomainAppInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamDomainAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainQpsDataOutcome CdnClient::describeDomainQpsData(const DescribeDomainQpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::SetPageCompressConfigOutcome CdnClient::setPageCompressConfig(const SetPageCompressConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetPageCompressConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPageCompressConfigOutcome(SetPageCompressConfigResult(outcome.result()));
	else
		return SetPageCompressConfigOutcome(outcome.error());
}

void CdnClient::setPageCompressConfigAsync(const SetPageCompressConfigRequest& request, const SetPageCompressConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPageCompressConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetPageCompressConfigOutcomeCallable CdnClient::setPageCompressConfigCallable(const SetPageCompressConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPageCompressConfigOutcome()>>(
			[this, request]()
			{
			return this->setPageCompressConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeL2VipsByDomainOutcome CdnClient::describeL2VipsByDomain(const DescribeL2VipsByDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeL2VipsByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeL2VipsByDomainOutcome(DescribeL2VipsByDomainResult(outcome.result()));
	else
		return DescribeL2VipsByDomainOutcome(outcome.error());
}

void CdnClient::describeL2VipsByDomainAsync(const DescribeL2VipsByDomainRequest& request, const DescribeL2VipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeL2VipsByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeL2VipsByDomainOutcomeCallable CdnClient::describeL2VipsByDomainCallable(const DescribeL2VipsByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeL2VipsByDomainOutcome()>>(
			[this, request]()
			{
			return this->describeL2VipsByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ModifyHttpHeaderConfigOutcome CdnClient::modifyHttpHeaderConfig(const ModifyHttpHeaderConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHttpHeaderConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHttpHeaderConfigOutcome(ModifyHttpHeaderConfigResult(outcome.result()));
	else
		return ModifyHttpHeaderConfigOutcome(outcome.error());
}

void CdnClient::modifyHttpHeaderConfigAsync(const ModifyHttpHeaderConfigRequest& request, const ModifyHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHttpHeaderConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ModifyHttpHeaderConfigOutcomeCallable CdnClient::modifyHttpHeaderConfigCallable(const ModifyHttpHeaderConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHttpHeaderConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyHttpHeaderConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetDomainServerCertificateOutcome CdnClient::setDomainServerCertificate(const SetDomainServerCertificateRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainServerCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainServerCertificateOutcome(SetDomainServerCertificateResult(outcome.result()));
	else
		return SetDomainServerCertificateOutcome(outcome.error());
}

void CdnClient::setDomainServerCertificateAsync(const SetDomainServerCertificateRequest& request, const SetDomainServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainServerCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetDomainServerCertificateOutcomeCallable CdnClient::setDomainServerCertificateCallable(const SetDomainServerCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainServerCertificateOutcome()>>(
			[this, request]()
			{
			return this->setDomainServerCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeIpInfoOutcome CdnClient::describeIpInfo(const DescribeIpInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpInfoOutcome(DescribeIpInfoResult(outcome.result()));
	else
		return DescribeIpInfoOutcome(outcome.error());
}

void CdnClient::describeIpInfoAsync(const DescribeIpInfoRequest& request, const DescribeIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeIpInfoOutcomeCallable CdnClient::describeIpInfoCallable(const DescribeIpInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpInfoOutcome()>>(
			[this, request]()
			{
			return this->describeIpInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainConfigsOutcome CdnClient::describeDomainConfigs(const DescribeDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainConfigsOutcome(DescribeDomainConfigsResult(outcome.result()));
	else
		return DescribeDomainConfigsOutcome(outcome.error());
}

void CdnClient::describeDomainConfigsAsync(const DescribeDomainConfigsRequest& request, const DescribeDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainConfigsOutcomeCallable CdnClient::describeDomainConfigsCallable(const DescribeDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainsBySourceOutcome CdnClient::describeDomainsBySource(const DescribeDomainsBySourceRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::UpdateLiveAppSnapshotConfigOutcome CdnClient::updateLiveAppSnapshotConfig(const UpdateLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveAppSnapshotConfigOutcome(UpdateLiveAppSnapshotConfigResult(outcome.result()));
	else
		return UpdateLiveAppSnapshotConfigOutcome(outcome.error());
}

void CdnClient::updateLiveAppSnapshotConfigAsync(const UpdateLiveAppSnapshotConfigRequest& request, const UpdateLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::UpdateLiveAppSnapshotConfigOutcomeCallable CdnClient::updateLiveAppSnapshotConfigCallable(const UpdateLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainPvDataOutcome CdnClient::describeDomainPvData(const DescribeDomainPvDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainPvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainPvDataOutcome(DescribeDomainPvDataResult(outcome.result()));
	else
		return DescribeDomainPvDataOutcome(outcome.error());
}

void CdnClient::describeDomainPvDataAsync(const DescribeDomainPvDataRequest& request, const DescribeDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainPvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainPvDataOutcomeCallable CdnClient::describeDomainPvDataCallable(const DescribeDomainPvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainPvDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainPvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetRemoteReqAuthConfigOutcome CdnClient::setRemoteReqAuthConfig(const SetRemoteReqAuthConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetRemoteReqAuthConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRemoteReqAuthConfigOutcome(SetRemoteReqAuthConfigResult(outcome.result()));
	else
		return SetRemoteReqAuthConfigOutcome(outcome.error());
}

void CdnClient::setRemoteReqAuthConfigAsync(const SetRemoteReqAuthConfigRequest& request, const SetRemoteReqAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRemoteReqAuthConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetRemoteReqAuthConfigOutcomeCallable CdnClient::setRemoteReqAuthConfigCallable(const SetRemoteReqAuthConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRemoteReqAuthConfigOutcome()>>(
			[this, request]()
			{
			return this->setRemoteReqAuthConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamPushErrorsOutcome CdnClient::describeLiveStreamPushErrors(const DescribeLiveStreamPushErrorsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamPushErrorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamPushErrorsOutcome(DescribeLiveStreamPushErrorsResult(outcome.result()));
	else
		return DescribeLiveStreamPushErrorsOutcome(outcome.error());
}

void CdnClient::describeLiveStreamPushErrorsAsync(const DescribeLiveStreamPushErrorsRequest& request, const DescribeLiveStreamPushErrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamPushErrors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamPushErrorsOutcomeCallable CdnClient::describeLiveStreamPushErrorsCallable(const DescribeLiveStreamPushErrorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamPushErrorsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamPushErrors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddLiveAppSnapshotConfigOutcome CdnClient::addLiveAppSnapshotConfig(const AddLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAppSnapshotConfigOutcome(AddLiveAppSnapshotConfigResult(outcome.result()));
	else
		return AddLiveAppSnapshotConfigOutcome(outcome.error());
}

void CdnClient::addLiveAppSnapshotConfigAsync(const AddLiveAppSnapshotConfigRequest& request, const AddLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLiveAppSnapshotConfigOutcomeCallable CdnClient::addLiveAppSnapshotConfigCallable(const AddLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainISPDataOutcome CdnClient::describeDomainISPData(const DescribeDomainISPDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::ClearUserDomainBlackListOutcome CdnClient::clearUserDomainBlackList(const ClearUserDomainBlackListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ClearUserDomainBlackListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearUserDomainBlackListOutcome(ClearUserDomainBlackListResult(outcome.result()));
	else
		return ClearUserDomainBlackListOutcome(outcome.error());
}

void CdnClient::clearUserDomainBlackListAsync(const ClearUserDomainBlackListRequest& request, const ClearUserDomainBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearUserDomainBlackList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ClearUserDomainBlackListOutcomeCallable CdnClient::clearUserDomainBlackListCallable(const ClearUserDomainBlackListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearUserDomainBlackListOutcome()>>(
			[this, request]()
			{
			return this->clearUserDomainBlackList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainFileSizeProportionDataOutcome CdnClient::describeDomainFileSizeProportionData(const DescribeDomainFileSizeProportionDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeLiveSpecificDomainMappingOutcome CdnClient::describeLiveSpecificDomainMapping(const DescribeLiveSpecificDomainMappingRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveSpecificDomainMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveSpecificDomainMappingOutcome(DescribeLiveSpecificDomainMappingResult(outcome.result()));
	else
		return DescribeLiveSpecificDomainMappingOutcome(outcome.error());
}

void CdnClient::describeLiveSpecificDomainMappingAsync(const DescribeLiveSpecificDomainMappingRequest& request, const DescribeLiveSpecificDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveSpecificDomainMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveSpecificDomainMappingOutcomeCallable CdnClient::describeLiveSpecificDomainMappingCallable(const DescribeLiveSpecificDomainMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveSpecificDomainMappingOutcome()>>(
			[this, request]()
			{
			return this->describeLiveSpecificDomainMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeByteHitRateDataOutcome CdnClient::describeDomainRealTimeByteHitRateData(const DescribeDomainRealTimeByteHitRateDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeByteHitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeByteHitRateDataOutcome(DescribeDomainRealTimeByteHitRateDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeByteHitRateDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeByteHitRateDataAsync(const DescribeDomainRealTimeByteHitRateDataRequest& request, const DescribeDomainRealTimeByteHitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeByteHitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeByteHitRateDataOutcomeCallable CdnClient::describeDomainRealTimeByteHitRateDataCallable(const DescribeDomainRealTimeByteHitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeByteHitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeByteHitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::AddLiveDomainMappingOutcome CdnClient::addLiveDomainMapping(const AddLiveDomainMappingRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveDomainMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveDomainMappingOutcome(AddLiveDomainMappingResult(outcome.result()));
	else
		return AddLiveDomainMappingOutcome(outcome.error());
}

void CdnClient::addLiveDomainMappingAsync(const AddLiveDomainMappingRequest& request, const AddLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveDomainMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::AddLiveDomainMappingOutcomeCallable CdnClient::addLiveDomainMappingCallable(const AddLiveDomainMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveDomainMappingOutcome()>>(
			[this, request]()
			{
			return this->addLiveDomainMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::MigrateDomainToHttpsDeliveryOutcome CdnClient::migrateDomainToHttpsDelivery(const MigrateDomainToHttpsDeliveryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateDomainToHttpsDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateDomainToHttpsDeliveryOutcome(MigrateDomainToHttpsDeliveryResult(outcome.result()));
	else
		return MigrateDomainToHttpsDeliveryOutcome(outcome.error());
}

void CdnClient::migrateDomainToHttpsDeliveryAsync(const MigrateDomainToHttpsDeliveryRequest& request, const MigrateDomainToHttpsDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateDomainToHttpsDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::MigrateDomainToHttpsDeliveryOutcomeCallable CdnClient::migrateDomainToHttpsDeliveryCallable(const MigrateDomainToHttpsDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateDomainToHttpsDeliveryOutcome()>>(
			[this, request]()
			{
			return this->migrateDomainToHttpsDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeDataOutcome CdnClient::describeDomainRealTimeData(const DescribeDomainRealTimeDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeDataOutcome(DescribeDomainRealTimeDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeDataAsync(const DescribeDomainRealTimeDataRequest& request, const DescribeDomainRealTimeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeDataOutcomeCallable CdnClient::describeDomainRealTimeDataCallable(const DescribeDomainRealTimeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ResumeLiveStreamOutcome CdnClient::resumeLiveStream(const ResumeLiveStreamRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeLiveStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeLiveStreamOutcome(ResumeLiveStreamResult(outcome.result()));
	else
		return ResumeLiveStreamOutcome(outcome.error());
}

void CdnClient::resumeLiveStreamAsync(const ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeLiveStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ResumeLiveStreamOutcomeCallable CdnClient::resumeLiveStreamCallable(const ResumeLiveStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeLiveStreamOutcome()>>(
			[this, request]()
			{
			return this->resumeLiveStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::GetUserDomainBlackListOutcome CdnClient::getUserDomainBlackList(const GetUserDomainBlackListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserDomainBlackListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserDomainBlackListOutcome(GetUserDomainBlackListResult(outcome.result()));
	else
		return GetUserDomainBlackListOutcome(outcome.error());
}

void CdnClient::getUserDomainBlackListAsync(const GetUserDomainBlackListRequest& request, const GetUserDomainBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserDomainBlackList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::GetUserDomainBlackListOutcomeCallable CdnClient::getUserDomainBlackListCallable(const GetUserDomainBlackListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserDomainBlackListOutcome()>>(
			[this, request]()
			{
			return this->getUserDomainBlackList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetUserBlackListOutcome CdnClient::setUserBlackList(const SetUserBlackListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserBlackListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserBlackListOutcome(SetUserBlackListResult(outcome.result()));
	else
		return SetUserBlackListOutcome(outcome.error());
}

void CdnClient::setUserBlackListAsync(const SetUserBlackListRequest& request, const SetUserBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserBlackList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetUserBlackListOutcomeCallable CdnClient::setUserBlackListCallable(const SetUserBlackListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserBlackListOutcome()>>(
			[this, request]()
			{
			return this->setUserBlackList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainCCAttackInfoOutcome CdnClient::describeDomainCCAttackInfo(const DescribeDomainCCAttackInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCCAttackInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCCAttackInfoOutcome(DescribeDomainCCAttackInfoResult(outcome.result()));
	else
		return DescribeDomainCCAttackInfoOutcome(outcome.error());
}

void CdnClient::describeDomainCCAttackInfoAsync(const DescribeDomainCCAttackInfoRequest& request, const DescribeDomainCCAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCCAttackInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainCCAttackInfoOutcomeCallable CdnClient::describeDomainCCAttackInfoCallable(const DescribeDomainCCAttackInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCCAttackInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCCAttackInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRealTimeBpsDataOutcome CdnClient::describeDomainRealTimeBpsData(const DescribeDomainRealTimeBpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainRealTimeBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainRealTimeBpsDataOutcome(DescribeDomainRealTimeBpsDataResult(outcome.result()));
	else
		return DescribeDomainRealTimeBpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainRealTimeBpsDataAsync(const DescribeDomainRealTimeBpsDataRequest& request, const DescribeDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainRealTimeBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainRealTimeBpsDataOutcomeCallable CdnClient::describeDomainRealTimeBpsDataCallable(const DescribeDomainRealTimeBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainRealTimeBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainRealTimeBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamsPublishListOutcome CdnClient::describeLiveStreamsPublishList(const DescribeLiveStreamsPublishListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsPublishListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsPublishListOutcome(DescribeLiveStreamsPublishListResult(outcome.result()));
	else
		return DescribeLiveStreamsPublishListOutcome(outcome.error());
}

void CdnClient::describeLiveStreamsPublishListAsync(const DescribeLiveStreamsPublishListRequest& request, const DescribeLiveStreamsPublishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsPublishList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamsPublishListOutcomeCallable CdnClient::describeLiveStreamsPublishListCallable(const DescribeLiveStreamsPublishListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsPublishListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsPublishList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteLivePullStreamInfoOutcome CdnClient::deleteLivePullStreamInfo(const DeleteLivePullStreamInfoRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLivePullStreamInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLivePullStreamInfoOutcome(DeleteLivePullStreamInfoResult(outcome.result()));
	else
		return DeleteLivePullStreamInfoOutcome(outcome.error());
}

void CdnClient::deleteLivePullStreamInfoAsync(const DeleteLivePullStreamInfoRequest& request, const DeleteLivePullStreamInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLivePullStreamInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLivePullStreamInfoOutcomeCallable CdnClient::deleteLivePullStreamInfoCallable(const DeleteLivePullStreamInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLivePullStreamInfoOutcome()>>(
			[this, request]()
			{
			return this->deleteLivePullStreamInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainDownstreamBpsOfEdgeOutcome CdnClient::describeDomainDownstreamBpsOfEdge(const DescribeDomainDownstreamBpsOfEdgeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainDownstreamBpsOfEdgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainDownstreamBpsOfEdgeOutcome(DescribeDomainDownstreamBpsOfEdgeResult(outcome.result()));
	else
		return DescribeDomainDownstreamBpsOfEdgeOutcome(outcome.error());
}

void CdnClient::describeDomainDownstreamBpsOfEdgeAsync(const DescribeDomainDownstreamBpsOfEdgeRequest& request, const DescribeDomainDownstreamBpsOfEdgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainDownstreamBpsOfEdge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainDownstreamBpsOfEdgeOutcomeCallable CdnClient::describeDomainDownstreamBpsOfEdgeCallable(const DescribeDomainDownstreamBpsOfEdgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainDownstreamBpsOfEdgeOutcome()>>(
			[this, request]()
			{
			return this->describeDomainDownstreamBpsOfEdge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::ClearUserBlackListOutcome CdnClient::clearUserBlackList(const ClearUserBlackListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ClearUserBlackListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearUserBlackListOutcome(ClearUserBlackListResult(outcome.result()));
	else
		return ClearUserBlackListOutcome(outcome.error());
}

void CdnClient::clearUserBlackListAsync(const ClearUserBlackListRequest& request, const ClearUserBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearUserBlackList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::ClearUserBlackListOutcomeCallable CdnClient::clearUserBlackListCallable(const ClearUserBlackListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearUserBlackListOutcome()>>(
			[this, request]()
			{
			return this->clearUserBlackList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainMax95BpsDataOutcome CdnClient::describeDomainMax95BpsData(const DescribeDomainMax95BpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainMax95BpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainMax95BpsDataOutcome(DescribeDomainMax95BpsDataResult(outcome.result()));
	else
		return DescribeDomainMax95BpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainMax95BpsDataAsync(const DescribeDomainMax95BpsDataRequest& request, const DescribeDomainMax95BpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainMax95BpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainMax95BpsDataOutcomeCallable CdnClient::describeDomainMax95BpsDataCallable(const DescribeDomainMax95BpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainMax95BpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainMax95BpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetHttpsOptionConfigOutcome CdnClient::setHttpsOptionConfig(const SetHttpsOptionConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetHttpsOptionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetHttpsOptionConfigOutcome(SetHttpsOptionConfigResult(outcome.result()));
	else
		return SetHttpsOptionConfigOutcome(outcome.error());
}

void CdnClient::setHttpsOptionConfigAsync(const SetHttpsOptionConfigRequest& request, const SetHttpsOptionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setHttpsOptionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetHttpsOptionConfigOutcomeCallable CdnClient::setHttpsOptionConfigCallable(const SetHttpsOptionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetHttpsOptionConfigOutcome()>>(
			[this, request]()
			{
			return this->setHttpsOptionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetWaitingRoomConfigOutcome CdnClient::setWaitingRoomConfig(const SetWaitingRoomConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetWaitingRoomConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetWaitingRoomConfigOutcome(SetWaitingRoomConfigResult(outcome.result()));
	else
		return SetWaitingRoomConfigOutcome(outcome.error());
}

void CdnClient::setWaitingRoomConfigAsync(const SetWaitingRoomConfigRequest& request, const SetWaitingRoomConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setWaitingRoomConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetWaitingRoomConfigOutcomeCallable CdnClient::setWaitingRoomConfigCallable(const SetWaitingRoomConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetWaitingRoomConfigOutcome()>>(
			[this, request]()
			{
			return this->setWaitingRoomConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeRangeDataByLocateAndIspServiceOutcome CdnClient::describeRangeDataByLocateAndIspService(const DescribeRangeDataByLocateAndIspServiceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRangeDataByLocateAndIspServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRangeDataByLocateAndIspServiceOutcome(DescribeRangeDataByLocateAndIspServiceResult(outcome.result()));
	else
		return DescribeRangeDataByLocateAndIspServiceOutcome(outcome.error());
}

void CdnClient::describeRangeDataByLocateAndIspServiceAsync(const DescribeRangeDataByLocateAndIspServiceRequest& request, const DescribeRangeDataByLocateAndIspServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRangeDataByLocateAndIspService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeRangeDataByLocateAndIspServiceOutcomeCallable CdnClient::describeRangeDataByLocateAndIspServiceCallable(const DescribeRangeDataByLocateAndIspServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRangeDataByLocateAndIspServiceOutcome()>>(
			[this, request]()
			{
			return this->describeRangeDataByLocateAndIspService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamOnlineBpsOutcome CdnClient::describeLiveStreamOnlineBps(const DescribeLiveStreamOnlineBpsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamOnlineBpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamOnlineBpsOutcome(DescribeLiveStreamOnlineBpsResult(outcome.result()));
	else
		return DescribeLiveStreamOnlineBpsOutcome(outcome.error());
}

void CdnClient::describeLiveStreamOnlineBpsAsync(const DescribeLiveStreamOnlineBpsRequest& request, const DescribeLiveStreamOnlineBpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamOnlineBps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamOnlineBpsOutcomeCallable CdnClient::describeLiveStreamOnlineBpsCallable(const DescribeLiveStreamOnlineBpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamOnlineBpsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamOnlineBps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainRegionDataOutcome CdnClient::describeDomainRegionData(const DescribeDomainRegionDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeDomainSrcBpsDataOutcome CdnClient::describeDomainSrcBpsData(const DescribeDomainSrcBpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

CdnClient::DescribeLiveStreamPushDataOutcome CdnClient::describeLiveStreamPushData(const DescribeLiveStreamPushDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamPushDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamPushDataOutcome(DescribeLiveStreamPushDataResult(outcome.result()));
	else
		return DescribeLiveStreamPushDataOutcome(outcome.error());
}

void CdnClient::describeLiveStreamPushDataAsync(const DescribeLiveStreamPushDataRequest& request, const DescribeLiveStreamPushDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamPushData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamPushDataOutcomeCallable CdnClient::describeLiveStreamPushDataCallable(const DescribeLiveStreamPushDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamPushDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamPushData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DeleteLiveAppRecordConfigOutcome CdnClient::deleteLiveAppRecordConfig(const DeleteLiveAppRecordConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAppRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAppRecordConfigOutcome(DeleteLiveAppRecordConfigResult(outcome.result()));
	else
		return DeleteLiveAppRecordConfigOutcome(outcome.error());
}

void CdnClient::deleteLiveAppRecordConfigAsync(const DeleteLiveAppRecordConfigRequest& request, const DeleteLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAppRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DeleteLiveAppRecordConfigOutcomeCallable CdnClient::deleteLiveAppRecordConfigCallable(const DeleteLiveAppRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAppRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAppRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnRegionAndIspOutcome CdnClient::describeCdnRegionAndIsp(const DescribeCdnRegionAndIspRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnRegionAndIspOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnRegionAndIspOutcome(DescribeCdnRegionAndIspResult(outcome.result()));
	else
		return DescribeCdnRegionAndIspOutcome(outcome.error());
}

void CdnClient::describeCdnRegionAndIspAsync(const DescribeCdnRegionAndIspRequest& request, const DescribeCdnRegionAndIspAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnRegionAndIsp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnRegionAndIspOutcomeCallable CdnClient::describeCdnRegionAndIspCallable(const DescribeCdnRegionAndIspRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnRegionAndIspOutcome()>>(
			[this, request]()
			{
			return this->describeCdnRegionAndIsp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetHttpHeaderConfigOutcome CdnClient::setHttpHeaderConfig(const SetHttpHeaderConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetHttpHeaderConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetHttpHeaderConfigOutcome(SetHttpHeaderConfigResult(outcome.result()));
	else
		return SetHttpHeaderConfigOutcome(outcome.error());
}

void CdnClient::setHttpHeaderConfigAsync(const SetHttpHeaderConfigRequest& request, const SetHttpHeaderConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setHttpHeaderConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetHttpHeaderConfigOutcomeCallable CdnClient::setHttpHeaderConfigCallable(const SetHttpHeaderConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetHttpHeaderConfigOutcome()>>(
			[this, request]()
			{
			return this->setHttpHeaderConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeCdnDomainBaseDetailOutcome CdnClient::describeCdnDomainBaseDetail(const DescribeCdnDomainBaseDetailRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnDomainBaseDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnDomainBaseDetailOutcome(DescribeCdnDomainBaseDetailResult(outcome.result()));
	else
		return DescribeCdnDomainBaseDetailOutcome(outcome.error());
}

void CdnClient::describeCdnDomainBaseDetailAsync(const DescribeCdnDomainBaseDetailRequest& request, const DescribeCdnDomainBaseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnDomainBaseDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeCdnDomainBaseDetailOutcomeCallable CdnClient::describeCdnDomainBaseDetailCallable(const DescribeCdnDomainBaseDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnDomainBaseDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCdnDomainBaseDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::SetUserAgentAcessRestrictionOutcome CdnClient::setUserAgentAcessRestriction(const SetUserAgentAcessRestrictionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return SetUserAgentAcessRestrictionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetUserAgentAcessRestrictionOutcome(SetUserAgentAcessRestrictionResult(outcome.result()));
	else
		return SetUserAgentAcessRestrictionOutcome(outcome.error());
}

void CdnClient::setUserAgentAcessRestrictionAsync(const SetUserAgentAcessRestrictionRequest& request, const SetUserAgentAcessRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setUserAgentAcessRestriction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::SetUserAgentAcessRestrictionOutcomeCallable CdnClient::setUserAgentAcessRestrictionCallable(const SetUserAgentAcessRestrictionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetUserAgentAcessRestrictionOutcome()>>(
			[this, request]()
			{
			return this->setUserAgentAcessRestriction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::StartCdnDomainOutcome CdnClient::startCdnDomain(const StartCdnDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return StartCdnDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartCdnDomainOutcome(StartCdnDomainResult(outcome.result()));
	else
		return StartCdnDomainOutcome(outcome.error());
}

void CdnClient::startCdnDomainAsync(const StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCdnDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::StartCdnDomainOutcomeCallable CdnClient::startCdnDomainCallable(const StartCdnDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartCdnDomainOutcome()>>(
			[this, request]()
			{
			return this->startCdnDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeUserVipsByDomainOutcome CdnClient::describeUserVipsByDomain(const DescribeUserVipsByDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserVipsByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserVipsByDomainOutcome(DescribeUserVipsByDomainResult(outcome.result()));
	else
		return DescribeUserVipsByDomainOutcome(outcome.error());
}

void CdnClient::describeUserVipsByDomainAsync(const DescribeUserVipsByDomainRequest& request, const DescribeUserVipsByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserVipsByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeUserVipsByDomainOutcomeCallable CdnClient::describeUserVipsByDomainCallable(const DescribeUserVipsByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserVipsByDomainOutcome()>>(
			[this, request]()
			{
			return this->describeUserVipsByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainUpstreamBpsOfEdgeOutcome CdnClient::describeDomainUpstreamBpsOfEdge(const DescribeDomainUpstreamBpsOfEdgeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainUpstreamBpsOfEdgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainUpstreamBpsOfEdgeOutcome(DescribeDomainUpstreamBpsOfEdgeResult(outcome.result()));
	else
		return DescribeDomainUpstreamBpsOfEdgeOutcome(outcome.error());
}

void CdnClient::describeDomainUpstreamBpsOfEdgeAsync(const DescribeDomainUpstreamBpsOfEdgeRequest& request, const DescribeDomainUpstreamBpsOfEdgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainUpstreamBpsOfEdge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainUpstreamBpsOfEdgeOutcomeCallable CdnClient::describeDomainUpstreamBpsOfEdgeCallable(const DescribeDomainUpstreamBpsOfEdgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainUpstreamBpsOfEdgeOutcome()>>(
			[this, request]()
			{
			return this->describeDomainUpstreamBpsOfEdge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamOnlineUserNumByDomainOutcome CdnClient::describeLiveStreamOnlineUserNumByDomain(const DescribeLiveStreamOnlineUserNumByDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamOnlineUserNumByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamOnlineUserNumByDomainOutcome(DescribeLiveStreamOnlineUserNumByDomainResult(outcome.result()));
	else
		return DescribeLiveStreamOnlineUserNumByDomainOutcome(outcome.error());
}

void CdnClient::describeLiveStreamOnlineUserNumByDomainAsync(const DescribeLiveStreamOnlineUserNumByDomainRequest& request, const DescribeLiveStreamOnlineUserNumByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamOnlineUserNumByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamOnlineUserNumByDomainOutcomeCallable CdnClient::describeLiveStreamOnlineUserNumByDomainCallable(const DescribeLiveStreamOnlineUserNumByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamOnlineUserNumByDomainOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamOnlineUserNumByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainHttpsDataOutcome CdnClient::describeDomainHttpsData(const DescribeDomainHttpsDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainHttpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainHttpsDataOutcome(DescribeDomainHttpsDataResult(outcome.result()));
	else
		return DescribeDomainHttpsDataOutcome(outcome.error());
}

void CdnClient::describeDomainHttpsDataAsync(const DescribeDomainHttpsDataRequest& request, const DescribeDomainHttpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainHttpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeDomainHttpsDataOutcomeCallable CdnClient::describeDomainHttpsDataCallable(const DescribeDomainHttpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainHttpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainHttpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeLiveStreamHlsOnlineUserNumByDomainOutcome CdnClient::describeLiveStreamHlsOnlineUserNumByDomain(const DescribeLiveStreamHlsOnlineUserNumByDomainRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamHlsOnlineUserNumByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamHlsOnlineUserNumByDomainOutcome(DescribeLiveStreamHlsOnlineUserNumByDomainResult(outcome.result()));
	else
		return DescribeLiveStreamHlsOnlineUserNumByDomainOutcome(outcome.error());
}

void CdnClient::describeLiveStreamHlsOnlineUserNumByDomainAsync(const DescribeLiveStreamHlsOnlineUserNumByDomainRequest& request, const DescribeLiveStreamHlsOnlineUserNumByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamHlsOnlineUserNumByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CdnClient::DescribeLiveStreamHlsOnlineUserNumByDomainOutcomeCallable CdnClient::describeLiveStreamHlsOnlineUserNumByDomainCallable(const DescribeLiveStreamHlsOnlineUserNumByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamHlsOnlineUserNumByDomainOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamHlsOnlineUserNumByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CdnClient::DescribeDomainHttpCodeDataOutcome CdnClient::describeDomainHttpCodeData(const DescribeDomainHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpoint();
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

