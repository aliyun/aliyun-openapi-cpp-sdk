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

#include <alibabacloud/videoenhan/VideoenhanClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Videoenhan;
using namespace AlibabaCloud::Videoenhan::Model;

namespace
{
	const std::string SERVICE_NAME = "videoenhan";
}

VideoenhanClient::VideoenhanClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "videoenhan");
}

VideoenhanClient::VideoenhanClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "videoenhan");
}

VideoenhanClient::VideoenhanClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "videoenhan");
}

VideoenhanClient::~VideoenhanClient()
{}

VideoenhanClient::AbstractEcommerceVideoOutcome VideoenhanClient::abstractEcommerceVideo(const AbstractEcommerceVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbstractEcommerceVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbstractEcommerceVideoOutcome(AbstractEcommerceVideoResult(outcome.result()));
	else
		return AbstractEcommerceVideoOutcome(outcome.error());
}

void VideoenhanClient::abstractEcommerceVideoAsync(const AbstractEcommerceVideoRequest& request, const AbstractEcommerceVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abstractEcommerceVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::AbstractEcommerceVideoOutcomeCallable VideoenhanClient::abstractEcommerceVideoCallable(const AbstractEcommerceVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbstractEcommerceVideoOutcome()>>(
			[this, request]()
			{
			return this->abstractEcommerceVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::AbstractFilmVideoOutcome VideoenhanClient::abstractFilmVideo(const AbstractFilmVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbstractFilmVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbstractFilmVideoOutcome(AbstractFilmVideoResult(outcome.result()));
	else
		return AbstractFilmVideoOutcome(outcome.error());
}

void VideoenhanClient::abstractFilmVideoAsync(const AbstractFilmVideoRequest& request, const AbstractFilmVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abstractFilmVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::AbstractFilmVideoOutcomeCallable VideoenhanClient::abstractFilmVideoCallable(const AbstractFilmVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbstractFilmVideoOutcome()>>(
			[this, request]()
			{
			return this->abstractFilmVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::AddFaceVideoTemplateOutcome VideoenhanClient::addFaceVideoTemplate(const AddFaceVideoTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceVideoTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceVideoTemplateOutcome(AddFaceVideoTemplateResult(outcome.result()));
	else
		return AddFaceVideoTemplateOutcome(outcome.error());
}

void VideoenhanClient::addFaceVideoTemplateAsync(const AddFaceVideoTemplateRequest& request, const AddFaceVideoTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceVideoTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::AddFaceVideoTemplateOutcomeCallable VideoenhanClient::addFaceVideoTemplateCallable(const AddFaceVideoTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceVideoTemplateOutcome()>>(
			[this, request]()
			{
			return this->addFaceVideoTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::AdjustVideoColorOutcome VideoenhanClient::adjustVideoColor(const AdjustVideoColorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AdjustVideoColorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AdjustVideoColorOutcome(AdjustVideoColorResult(outcome.result()));
	else
		return AdjustVideoColorOutcome(outcome.error());
}

void VideoenhanClient::adjustVideoColorAsync(const AdjustVideoColorRequest& request, const AdjustVideoColorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, adjustVideoColor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::AdjustVideoColorOutcomeCallable VideoenhanClient::adjustVideoColorCallable(const AdjustVideoColorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AdjustVideoColorOutcome()>>(
			[this, request]()
			{
			return this->adjustVideoColor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::ChangeVideoSizeOutcome VideoenhanClient::changeVideoSize(const ChangeVideoSizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeVideoSizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeVideoSizeOutcome(ChangeVideoSizeResult(outcome.result()));
	else
		return ChangeVideoSizeOutcome(outcome.error());
}

void VideoenhanClient::changeVideoSizeAsync(const ChangeVideoSizeRequest& request, const ChangeVideoSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeVideoSize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::ChangeVideoSizeOutcomeCallable VideoenhanClient::changeVideoSizeCallable(const ChangeVideoSizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeVideoSizeOutcome()>>(
			[this, request]()
			{
			return this->changeVideoSize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::ConvertHdrVideoOutcome VideoenhanClient::convertHdrVideo(const ConvertHdrVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertHdrVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertHdrVideoOutcome(ConvertHdrVideoResult(outcome.result()));
	else
		return ConvertHdrVideoOutcome(outcome.error());
}

void VideoenhanClient::convertHdrVideoAsync(const ConvertHdrVideoRequest& request, const ConvertHdrVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertHdrVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::ConvertHdrVideoOutcomeCallable VideoenhanClient::convertHdrVideoCallable(const ConvertHdrVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertHdrVideoOutcome()>>(
			[this, request]()
			{
			return this->convertHdrVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::DeleteFaceVideoTemplateOutcome VideoenhanClient::deleteFaceVideoTemplate(const DeleteFaceVideoTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceVideoTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceVideoTemplateOutcome(DeleteFaceVideoTemplateResult(outcome.result()));
	else
		return DeleteFaceVideoTemplateOutcome(outcome.error());
}

void VideoenhanClient::deleteFaceVideoTemplateAsync(const DeleteFaceVideoTemplateRequest& request, const DeleteFaceVideoTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceVideoTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::DeleteFaceVideoTemplateOutcomeCallable VideoenhanClient::deleteFaceVideoTemplateCallable(const DeleteFaceVideoTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceVideoTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceVideoTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::EnhancePortraitVideoOutcome VideoenhanClient::enhancePortraitVideo(const EnhancePortraitVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnhancePortraitVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnhancePortraitVideoOutcome(EnhancePortraitVideoResult(outcome.result()));
	else
		return EnhancePortraitVideoOutcome(outcome.error());
}

void VideoenhanClient::enhancePortraitVideoAsync(const EnhancePortraitVideoRequest& request, const EnhancePortraitVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enhancePortraitVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::EnhancePortraitVideoOutcomeCallable VideoenhanClient::enhancePortraitVideoCallable(const EnhancePortraitVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnhancePortraitVideoOutcome()>>(
			[this, request]()
			{
			return this->enhancePortraitVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::EnhanceVideoQualityOutcome VideoenhanClient::enhanceVideoQuality(const EnhanceVideoQualityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnhanceVideoQualityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnhanceVideoQualityOutcome(EnhanceVideoQualityResult(outcome.result()));
	else
		return EnhanceVideoQualityOutcome(outcome.error());
}

void VideoenhanClient::enhanceVideoQualityAsync(const EnhanceVideoQualityRequest& request, const EnhanceVideoQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enhanceVideoQuality(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::EnhanceVideoQualityOutcomeCallable VideoenhanClient::enhanceVideoQualityCallable(const EnhanceVideoQualityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnhanceVideoQualityOutcome()>>(
			[this, request]()
			{
			return this->enhanceVideoQuality(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::EraseVideoLogoOutcome VideoenhanClient::eraseVideoLogo(const EraseVideoLogoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EraseVideoLogoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EraseVideoLogoOutcome(EraseVideoLogoResult(outcome.result()));
	else
		return EraseVideoLogoOutcome(outcome.error());
}

void VideoenhanClient::eraseVideoLogoAsync(const EraseVideoLogoRequest& request, const EraseVideoLogoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, eraseVideoLogo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::EraseVideoLogoOutcomeCallable VideoenhanClient::eraseVideoLogoCallable(const EraseVideoLogoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EraseVideoLogoOutcome()>>(
			[this, request]()
			{
			return this->eraseVideoLogo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::EraseVideoSubtitlesOutcome VideoenhanClient::eraseVideoSubtitles(const EraseVideoSubtitlesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EraseVideoSubtitlesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EraseVideoSubtitlesOutcome(EraseVideoSubtitlesResult(outcome.result()));
	else
		return EraseVideoSubtitlesOutcome(outcome.error());
}

void VideoenhanClient::eraseVideoSubtitlesAsync(const EraseVideoSubtitlesRequest& request, const EraseVideoSubtitlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, eraseVideoSubtitles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::EraseVideoSubtitlesOutcomeCallable VideoenhanClient::eraseVideoSubtitlesCallable(const EraseVideoSubtitlesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EraseVideoSubtitlesOutcome()>>(
			[this, request]()
			{
			return this->eraseVideoSubtitles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::GenerateHumanAnimeStyleVideoOutcome VideoenhanClient::generateHumanAnimeStyleVideo(const GenerateHumanAnimeStyleVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateHumanAnimeStyleVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateHumanAnimeStyleVideoOutcome(GenerateHumanAnimeStyleVideoResult(outcome.result()));
	else
		return GenerateHumanAnimeStyleVideoOutcome(outcome.error());
}

void VideoenhanClient::generateHumanAnimeStyleVideoAsync(const GenerateHumanAnimeStyleVideoRequest& request, const GenerateHumanAnimeStyleVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateHumanAnimeStyleVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::GenerateHumanAnimeStyleVideoOutcomeCallable VideoenhanClient::generateHumanAnimeStyleVideoCallable(const GenerateHumanAnimeStyleVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateHumanAnimeStyleVideoOutcome()>>(
			[this, request]()
			{
			return this->generateHumanAnimeStyleVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::GenerateVideoOutcome VideoenhanClient::generateVideo(const GenerateVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateVideoOutcome(GenerateVideoResult(outcome.result()));
	else
		return GenerateVideoOutcome(outcome.error());
}

void VideoenhanClient::generateVideoAsync(const GenerateVideoRequest& request, const GenerateVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::GenerateVideoOutcomeCallable VideoenhanClient::generateVideoCallable(const GenerateVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateVideoOutcome()>>(
			[this, request]()
			{
			return this->generateVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::GetAsyncJobResultOutcome VideoenhanClient::getAsyncJobResult(const GetAsyncJobResultRequest &request) const
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

void VideoenhanClient::getAsyncJobResultAsync(const GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsyncJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::GetAsyncJobResultOutcomeCallable VideoenhanClient::getAsyncJobResultCallable(const GetAsyncJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsyncJobResultOutcome()>>(
			[this, request]()
			{
			return this->getAsyncJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::InterpolateVideoFrameOutcome VideoenhanClient::interpolateVideoFrame(const InterpolateVideoFrameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InterpolateVideoFrameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InterpolateVideoFrameOutcome(InterpolateVideoFrameResult(outcome.result()));
	else
		return InterpolateVideoFrameOutcome(outcome.error());
}

void VideoenhanClient::interpolateVideoFrameAsync(const InterpolateVideoFrameRequest& request, const InterpolateVideoFrameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, interpolateVideoFrame(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::InterpolateVideoFrameOutcomeCallable VideoenhanClient::interpolateVideoFrameCallable(const InterpolateVideoFrameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InterpolateVideoFrameOutcome()>>(
			[this, request]()
			{
			return this->interpolateVideoFrame(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::MergeVideoFaceOutcome VideoenhanClient::mergeVideoFace(const MergeVideoFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MergeVideoFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MergeVideoFaceOutcome(MergeVideoFaceResult(outcome.result()));
	else
		return MergeVideoFaceOutcome(outcome.error());
}

void VideoenhanClient::mergeVideoFaceAsync(const MergeVideoFaceRequest& request, const MergeVideoFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mergeVideoFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::MergeVideoFaceOutcomeCallable VideoenhanClient::mergeVideoFaceCallable(const MergeVideoFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MergeVideoFaceOutcome()>>(
			[this, request]()
			{
			return this->mergeVideoFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::MergeVideoModelFaceOutcome VideoenhanClient::mergeVideoModelFace(const MergeVideoModelFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MergeVideoModelFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MergeVideoModelFaceOutcome(MergeVideoModelFaceResult(outcome.result()));
	else
		return MergeVideoModelFaceOutcome(outcome.error());
}

void VideoenhanClient::mergeVideoModelFaceAsync(const MergeVideoModelFaceRequest& request, const MergeVideoModelFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mergeVideoModelFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::MergeVideoModelFaceOutcomeCallable VideoenhanClient::mergeVideoModelFaceCallable(const MergeVideoModelFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MergeVideoModelFaceOutcome()>>(
			[this, request]()
			{
			return this->mergeVideoModelFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::QueryFaceVideoTemplateOutcome VideoenhanClient::queryFaceVideoTemplate(const QueryFaceVideoTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceVideoTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceVideoTemplateOutcome(QueryFaceVideoTemplateResult(outcome.result()));
	else
		return QueryFaceVideoTemplateOutcome(outcome.error());
}

void VideoenhanClient::queryFaceVideoTemplateAsync(const QueryFaceVideoTemplateRequest& request, const QueryFaceVideoTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceVideoTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::QueryFaceVideoTemplateOutcomeCallable VideoenhanClient::queryFaceVideoTemplateCallable(const QueryFaceVideoTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceVideoTemplateOutcome()>>(
			[this, request]()
			{
			return this->queryFaceVideoTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::ReduceVideoNoiseOutcome VideoenhanClient::reduceVideoNoise(const ReduceVideoNoiseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReduceVideoNoiseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReduceVideoNoiseOutcome(ReduceVideoNoiseResult(outcome.result()));
	else
		return ReduceVideoNoiseOutcome(outcome.error());
}

void VideoenhanClient::reduceVideoNoiseAsync(const ReduceVideoNoiseRequest& request, const ReduceVideoNoiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reduceVideoNoise(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::ReduceVideoNoiseOutcomeCallable VideoenhanClient::reduceVideoNoiseCallable(const ReduceVideoNoiseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReduceVideoNoiseOutcome()>>(
			[this, request]()
			{
			return this->reduceVideoNoise(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::SuperResolveVideoOutcome VideoenhanClient::superResolveVideo(const SuperResolveVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuperResolveVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuperResolveVideoOutcome(SuperResolveVideoResult(outcome.result()));
	else
		return SuperResolveVideoOutcome(outcome.error());
}

void VideoenhanClient::superResolveVideoAsync(const SuperResolveVideoRequest& request, const SuperResolveVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, superResolveVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::SuperResolveVideoOutcomeCallable VideoenhanClient::superResolveVideoCallable(const SuperResolveVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuperResolveVideoOutcome()>>(
			[this, request]()
			{
			return this->superResolveVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VideoenhanClient::ToneSdrVideoOutcome VideoenhanClient::toneSdrVideo(const ToneSdrVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ToneSdrVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ToneSdrVideoOutcome(ToneSdrVideoResult(outcome.result()));
	else
		return ToneSdrVideoOutcome(outcome.error());
}

void VideoenhanClient::toneSdrVideoAsync(const ToneSdrVideoRequest& request, const ToneSdrVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, toneSdrVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VideoenhanClient::ToneSdrVideoOutcomeCallable VideoenhanClient::toneSdrVideoCallable(const ToneSdrVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ToneSdrVideoOutcome()>>(
			[this, request]()
			{
			return this->toneSdrVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

