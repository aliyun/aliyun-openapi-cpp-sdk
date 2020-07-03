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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

IvpdClient::IvpdClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

IvpdClient::IvpdClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

IvpdClient::~IvpdClient()
{}

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

IvpdClient::CreateSegmentBodyJobOutcome IvpdClient::createSegmentBodyJob(const CreateSegmentBodyJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSegmentBodyJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSegmentBodyJobOutcome(CreateSegmentBodyJobResult(outcome.result()));
	else
		return CreateSegmentBodyJobOutcome(outcome.error());
}

void IvpdClient::createSegmentBodyJobAsync(const CreateSegmentBodyJobRequest& request, const CreateSegmentBodyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSegmentBodyJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::CreateSegmentBodyJobOutcomeCallable IvpdClient::createSegmentBodyJobCallable(const CreateSegmentBodyJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSegmentBodyJobOutcome()>>(
			[this, request]()
			{
			return this->createSegmentBodyJob(request);
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

IvpdClient::EraseLogoInVideoOutcome IvpdClient::eraseLogoInVideo(const EraseLogoInVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EraseLogoInVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EraseLogoInVideoOutcome(EraseLogoInVideoResult(outcome.result()));
	else
		return EraseLogoInVideoOutcome(outcome.error());
}

void IvpdClient::eraseLogoInVideoAsync(const EraseLogoInVideoRequest& request, const EraseLogoInVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, eraseLogoInVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::EraseLogoInVideoOutcomeCallable IvpdClient::eraseLogoInVideoCallable(const EraseLogoInVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EraseLogoInVideoOutcome()>>(
			[this, request]()
			{
			return this->eraseLogoInVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

IvpdClient::GetAsyncResultOutcome IvpdClient::getAsyncResult(const GetAsyncResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsyncResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsyncResultOutcome(GetAsyncResultResult(outcome.result()));
	else
		return GetAsyncResultOutcome(outcome.error());
}

void IvpdClient::getAsyncResultAsync(const GetAsyncResultRequest& request, const GetAsyncResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsyncResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::GetAsyncResultOutcomeCallable IvpdClient::getAsyncResultCallable(const GetAsyncResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsyncResultOutcome()>>(
			[this, request]()
			{
			return this->getAsyncResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::GetJobResultOutcome IvpdClient::getJobResult(const GetJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobResultOutcome(GetJobResultResult(outcome.result()));
	else
		return GetJobResultOutcome(outcome.error());
}

void IvpdClient::getJobResultAsync(const GetJobResultRequest& request, const GetJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::GetJobResultOutcomeCallable IvpdClient::getJobResultCallable(const GetJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobResultOutcome()>>(
			[this, request]()
			{
			return this->getJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::GetJobStatusOutcome IvpdClient::getJobStatus(const GetJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobStatusOutcome(GetJobStatusResult(outcome.result()));
	else
		return GetJobStatusOutcome(outcome.error());
}

void IvpdClient::getJobStatusAsync(const GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::GetJobStatusOutcomeCallable IvpdClient::getJobStatusCallable(const GetJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobStatusOutcome()>>(
			[this, request]()
			{
			return this->getJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::GetRenderResultOutcome IvpdClient::getRenderResult(const GetRenderResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRenderResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRenderResultOutcome(GetRenderResultResult(outcome.result()));
	else
		return GetRenderResultOutcome(outcome.error());
}

void IvpdClient::getRenderResultAsync(const GetRenderResultRequest& request, const GetRenderResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRenderResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::GetRenderResultOutcomeCallable IvpdClient::getRenderResultCallable(const GetRenderResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRenderResultOutcome()>>(
			[this, request]()
			{
			return this->getRenderResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::GetUserBucketConfigOutcome IvpdClient::getUserBucketConfig(const GetUserBucketConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserBucketConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserBucketConfigOutcome(GetUserBucketConfigResult(outcome.result()));
	else
		return GetUserBucketConfigOutcome(outcome.error());
}

void IvpdClient::getUserBucketConfigAsync(const GetUserBucketConfigRequest& request, const GetUserBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserBucketConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::GetUserBucketConfigOutcomeCallable IvpdClient::getUserBucketConfigCallable(const GetUserBucketConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserBucketConfigOutcome()>>(
			[this, request]()
			{
			return this->getUserBucketConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::ListPackageDesignModelTypesOutcome IvpdClient::listPackageDesignModelTypes(const ListPackageDesignModelTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPackageDesignModelTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPackageDesignModelTypesOutcome(ListPackageDesignModelTypesResult(outcome.result()));
	else
		return ListPackageDesignModelTypesOutcome(outcome.error());
}

void IvpdClient::listPackageDesignModelTypesAsync(const ListPackageDesignModelTypesRequest& request, const ListPackageDesignModelTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPackageDesignModelTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::ListPackageDesignModelTypesOutcomeCallable IvpdClient::listPackageDesignModelTypesCallable(const ListPackageDesignModelTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPackageDesignModelTypesOutcome()>>(
			[this, request]()
			{
			return this->listPackageDesignModelTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::ListUserBucketsOutcome IvpdClient::listUserBuckets(const ListUserBucketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserBucketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserBucketsOutcome(ListUserBucketsResult(outcome.result()));
	else
		return ListUserBucketsOutcome(outcome.error());
}

void IvpdClient::listUserBucketsAsync(const ListUserBucketsRequest& request, const ListUserBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserBuckets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::ListUserBucketsOutcomeCallable IvpdClient::listUserBucketsCallable(const ListUserBucketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserBucketsOutcome()>>(
			[this, request]()
			{
			return this->listUserBuckets(request);
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

IvpdClient::PreviewModelForPackageDesignOutcome IvpdClient::previewModelForPackageDesign(const PreviewModelForPackageDesignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreviewModelForPackageDesignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreviewModelForPackageDesignOutcome(PreviewModelForPackageDesignResult(outcome.result()));
	else
		return PreviewModelForPackageDesignOutcome(outcome.error());
}

void IvpdClient::previewModelForPackageDesignAsync(const PreviewModelForPackageDesignRequest& request, const PreviewModelForPackageDesignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, previewModelForPackageDesign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::PreviewModelForPackageDesignOutcomeCallable IvpdClient::previewModelForPackageDesignCallable(const PreviewModelForPackageDesignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreviewModelForPackageDesignOutcome()>>(
			[this, request]()
			{
			return this->previewModelForPackageDesign(request);
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

IvpdClient::RenderImageForPackageDesignOutcome IvpdClient::renderImageForPackageDesign(const RenderImageForPackageDesignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenderImageForPackageDesignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenderImageForPackageDesignOutcome(RenderImageForPackageDesignResult(outcome.result()));
	else
		return RenderImageForPackageDesignOutcome(outcome.error());
}

void IvpdClient::renderImageForPackageDesignAsync(const RenderImageForPackageDesignRequest& request, const RenderImageForPackageDesignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renderImageForPackageDesign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::RenderImageForPackageDesignOutcomeCallable IvpdClient::renderImageForPackageDesignCallable(const RenderImageForPackageDesignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenderImageForPackageDesignOutcome()>>(
			[this, request]()
			{
			return this->renderImageForPackageDesign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvpdClient::SegmentBodyOutcome IvpdClient::segmentBody(const SegmentBodyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SegmentBodyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SegmentBodyOutcome(SegmentBodyResult(outcome.result()));
	else
		return SegmentBodyOutcome(outcome.error());
}

void IvpdClient::segmentBodyAsync(const SegmentBodyRequest& request, const SegmentBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, segmentBody(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::SegmentBodyOutcomeCallable IvpdClient::segmentBodyCallable(const SegmentBodyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SegmentBodyOutcome()>>(
			[this, request]()
			{
			return this->segmentBody(request);
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

IvpdClient::UpdateUserBucketConfigOutcome IvpdClient::updateUserBucketConfig(const UpdateUserBucketConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserBucketConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserBucketConfigOutcome(UpdateUserBucketConfigResult(outcome.result()));
	else
		return UpdateUserBucketConfigOutcome(outcome.error());
}

void IvpdClient::updateUserBucketConfigAsync(const UpdateUserBucketConfigRequest& request, const UpdateUserBucketConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserBucketConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvpdClient::UpdateUserBucketConfigOutcomeCallable IvpdClient::updateUserBucketConfigCallable(const UpdateUserBucketConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserBucketConfigOutcome()>>(
			[this, request]()
			{
			return this->updateUserBucketConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

