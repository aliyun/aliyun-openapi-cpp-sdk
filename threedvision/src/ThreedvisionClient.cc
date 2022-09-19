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

#include <alibabacloud/threedvision/ThreedvisionClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Threedvision;
using namespace AlibabaCloud::Threedvision::Model;

namespace
{
	const std::string SERVICE_NAME = "threedvision";
}

ThreedvisionClient::ThreedvisionClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "threedvision");
}

ThreedvisionClient::ThreedvisionClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "threedvision");
}

ThreedvisionClient::ThreedvisionClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "threedvision");
}

ThreedvisionClient::~ThreedvisionClient()
{}

ThreedvisionClient::EstimateMonocularImageDepthOutcome ThreedvisionClient::estimateMonocularImageDepth(const EstimateMonocularImageDepthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EstimateMonocularImageDepthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EstimateMonocularImageDepthOutcome(EstimateMonocularImageDepthResult(outcome.result()));
	else
		return EstimateMonocularImageDepthOutcome(outcome.error());
}

void ThreedvisionClient::estimateMonocularImageDepthAsync(const EstimateMonocularImageDepthRequest& request, const EstimateMonocularImageDepthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, estimateMonocularImageDepth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ThreedvisionClient::EstimateMonocularImageDepthOutcomeCallable ThreedvisionClient::estimateMonocularImageDepthCallable(const EstimateMonocularImageDepthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EstimateMonocularImageDepthOutcome()>>(
			[this, request]()
			{
			return this->estimateMonocularImageDepth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ThreedvisionClient::EstimateMonocularVideoDepthOutcome ThreedvisionClient::estimateMonocularVideoDepth(const EstimateMonocularVideoDepthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EstimateMonocularVideoDepthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EstimateMonocularVideoDepthOutcome(EstimateMonocularVideoDepthResult(outcome.result()));
	else
		return EstimateMonocularVideoDepthOutcome(outcome.error());
}

void ThreedvisionClient::estimateMonocularVideoDepthAsync(const EstimateMonocularVideoDepthRequest& request, const EstimateMonocularVideoDepthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, estimateMonocularVideoDepth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ThreedvisionClient::EstimateMonocularVideoDepthOutcomeCallable ThreedvisionClient::estimateMonocularVideoDepthCallable(const EstimateMonocularVideoDepthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EstimateMonocularVideoDepthOutcome()>>(
			[this, request]()
			{
			return this->estimateMonocularVideoDepth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ThreedvisionClient::EstimateStereoImageDepthOutcome ThreedvisionClient::estimateStereoImageDepth(const EstimateStereoImageDepthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EstimateStereoImageDepthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EstimateStereoImageDepthOutcome(EstimateStereoImageDepthResult(outcome.result()));
	else
		return EstimateStereoImageDepthOutcome(outcome.error());
}

void ThreedvisionClient::estimateStereoImageDepthAsync(const EstimateStereoImageDepthRequest& request, const EstimateStereoImageDepthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, estimateStereoImageDepth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ThreedvisionClient::EstimateStereoImageDepthOutcomeCallable ThreedvisionClient::estimateStereoImageDepthCallable(const EstimateStereoImageDepthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EstimateStereoImageDepthOutcome()>>(
			[this, request]()
			{
			return this->estimateStereoImageDepth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ThreedvisionClient::GetAsyncJobResultOutcome ThreedvisionClient::getAsyncJobResult(const GetAsyncJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsyncJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsyncJobResultOutcome(GetAsyncJobResultResult(outcome.result()));
	else
		return GetAsyncJobResultOutcome(outcome.error());
}

void ThreedvisionClient::getAsyncJobResultAsync(const GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsyncJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ThreedvisionClient::GetAsyncJobResultOutcomeCallable ThreedvisionClient::getAsyncJobResultCallable(const GetAsyncJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsyncJobResultOutcome()>>(
			[this, request]()
			{
			return this->getAsyncJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ThreedvisionClient::ReconstructBodyBySingleImageOutcome ThreedvisionClient::reconstructBodyBySingleImage(const ReconstructBodyBySingleImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReconstructBodyBySingleImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReconstructBodyBySingleImageOutcome(ReconstructBodyBySingleImageResult(outcome.result()));
	else
		return ReconstructBodyBySingleImageOutcome(outcome.error());
}

void ThreedvisionClient::reconstructBodyBySingleImageAsync(const ReconstructBodyBySingleImageRequest& request, const ReconstructBodyBySingleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reconstructBodyBySingleImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ThreedvisionClient::ReconstructBodyBySingleImageOutcomeCallable ThreedvisionClient::reconstructBodyBySingleImageCallable(const ReconstructBodyBySingleImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReconstructBodyBySingleImageOutcome()>>(
			[this, request]()
			{
			return this->reconstructBodyBySingleImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ThreedvisionClient::ReconstructThreeDMultiViewOutcome ThreedvisionClient::reconstructThreeDMultiView(const ReconstructThreeDMultiViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReconstructThreeDMultiViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReconstructThreeDMultiViewOutcome(ReconstructThreeDMultiViewResult(outcome.result()));
	else
		return ReconstructThreeDMultiViewOutcome(outcome.error());
}

void ThreedvisionClient::reconstructThreeDMultiViewAsync(const ReconstructThreeDMultiViewRequest& request, const ReconstructThreeDMultiViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reconstructThreeDMultiView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ThreedvisionClient::ReconstructThreeDMultiViewOutcomeCallable ThreedvisionClient::reconstructThreeDMultiViewCallable(const ReconstructThreeDMultiViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReconstructThreeDMultiViewOutcome()>>(
			[this, request]()
			{
			return this->reconstructThreeDMultiView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

