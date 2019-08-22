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

#include <alibabacloud/ivpd/IvpdClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ivpd;
using namespace AlibabaCloud::Ivpd::Model;

namespace
{
	const std::string SERVICE_NAME = "ivpd";
}

IvpdClient::IvpdClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ivpd");
}

IvpdClient::IvpdClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ivpd");
}

IvpdClient::IvpdClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ivpd");
}

IvpdClient::~IvpdClient()
{}

IvpdClient::ExtendImageStyleOutcome IvpdClient::extendImageStyle(const ExtendImageStyleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExtendImageStyleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExtendImageStyleOutcome(ExtendImageStyleResult(outcome.result()));
	else
		return ExtendImageStyleOutcome(outcome.error());
}

void IvpdClient::extendImageStyleAsync(const ExtendImageStyleRequest& request, const ExtendImageStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, extendImageStyle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::ExtendImageStyleOutcomeCallable IvpdClient::extendImageStyleCallable(const ExtendImageStyleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExtendImageStyleOutcome()>>(
			[this, request]()
			{
			return this->extendImageStyle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::DetectImageElementsOutcome IvpdClient::detectImageElements(const DetectImageElementsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageElementsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageElementsOutcome(DetectImageElementsResult(outcome.result()));
	else
		return DetectImageElementsOutcome(outcome.error());
}

void IvpdClient::detectImageElementsAsync(const DetectImageElementsRequest& request, const DetectImageElementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageElements(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::DetectImageElementsOutcomeCallable IvpdClient::detectImageElementsCallable(const DetectImageElementsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageElementsOutcome()>>(
			[this, request]()
			{
			return this->detectImageElements(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::RecognizeImageStyleOutcome IvpdClient::recognizeImageStyle(const RecognizeImageStyleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeImageStyleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeImageStyleOutcome(RecognizeImageStyleResult(outcome.result()));
	else
		return RecognizeImageStyleOutcome(outcome.error());
}

void IvpdClient::recognizeImageStyleAsync(const RecognizeImageStyleRequest& request, const RecognizeImageStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeImageStyle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::RecognizeImageStyleOutcomeCallable IvpdClient::recognizeImageStyleCallable(const RecognizeImageStyleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeImageStyleOutcome()>>(
			[this, request]()
			{
			return this->recognizeImageStyle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::ChangeImageSizeOutcome IvpdClient::changeImageSize(const ChangeImageSizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeImageSizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeImageSizeOutcome(ChangeImageSizeResult(outcome.result()));
	else
		return ChangeImageSizeOutcome(outcome.error());
}

void IvpdClient::changeImageSizeAsync(const ChangeImageSizeRequest& request, const ChangeImageSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeImageSize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::ChangeImageSizeOutcomeCallable IvpdClient::changeImageSizeCallable(const ChangeImageSizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeImageSizeOutcome()>>(
			[this, request]()
			{
			return this->changeImageSize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::SegmentImageOutcome IvpdClient::segmentImage(const SegmentImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SegmentImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SegmentImageOutcome(SegmentImageResult(outcome.result()));
	else
		return SegmentImageOutcome(outcome.error());
}

void IvpdClient::segmentImageAsync(const SegmentImageRequest& request, const SegmentImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, segmentImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::SegmentImageOutcomeCallable IvpdClient::segmentImageCallable(const SegmentImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SegmentImageOutcome()>>(
			[this, request]()
			{
			return this->segmentImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::MakeSuperResolutionImageOutcome IvpdClient::makeSuperResolutionImage(const MakeSuperResolutionImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MakeSuperResolutionImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MakeSuperResolutionImageOutcome(MakeSuperResolutionImageResult(outcome.result()));
	else
		return MakeSuperResolutionImageOutcome(outcome.error());
}

void IvpdClient::makeSuperResolutionImageAsync(const MakeSuperResolutionImageRequest& request, const MakeSuperResolutionImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, makeSuperResolutionImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::MakeSuperResolutionImageOutcomeCallable IvpdClient::makeSuperResolutionImageCallable(const MakeSuperResolutionImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MakeSuperResolutionImageOutcome()>>(
			[this, request]()
			{
			return this->makeSuperResolutionImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::RecognizeImageColorOutcome IvpdClient::recognizeImageColor(const RecognizeImageColorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeImageColorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeImageColorOutcome(RecognizeImageColorResult(outcome.result()));
	else
		return RecognizeImageColorOutcome(outcome.error());
}

void IvpdClient::recognizeImageColorAsync(const RecognizeImageColorRequest& request, const RecognizeImageColorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeImageColor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::RecognizeImageColorOutcomeCallable IvpdClient::recognizeImageColorCallable(const RecognizeImageColorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeImageColorOutcome()>>(
			[this, request]()
			{
			return this->recognizeImageColor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::RecolorImageOutcome IvpdClient::recolorImage(const RecolorImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecolorImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecolorImageOutcome(RecolorImageResult(outcome.result()));
	else
		return RecolorImageOutcome(outcome.error());
}

void IvpdClient::recolorImageAsync(const RecolorImageRequest& request, const RecolorImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recolorImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::RecolorImageOutcomeCallable IvpdClient::recolorImageCallable(const RecolorImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecolorImageOutcome()>>(
			[this, request]()
			{
			return this->recolorImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

