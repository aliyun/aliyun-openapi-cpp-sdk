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

#include <alibabacloud/aicontent/AiContentClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::AiContent;
using namespace AlibabaCloud::AiContent::Model;

namespace
{
	const std::string SERVICE_NAME = "AiContent";
}

AiContentClient::AiContentClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AiContentClient::AiContentClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AiContentClient::AiContentClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AiContentClient::~AiContentClient()
{}

AiContentClient::AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome AiContentClient::aliyunConsoleOpenApiQueryAliyunConsoleServcieList(const AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome(AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult(outcome.result()));
	else
		return AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome(outcome.error());
}

void AiContentClient::aliyunConsoleOpenApiQueryAliyunConsoleServcieListAsync(const AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest& request, const AliyunConsoleOpenApiQueryAliyunConsoleServcieListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aliyunConsoleOpenApiQueryAliyunConsoleServcieList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AiContentClient::AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcomeCallable AiContentClient::aliyunConsoleOpenApiQueryAliyunConsoleServcieListCallable(const AliyunConsoleOpenApiQueryAliyunConsoleServcieListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AliyunConsoleOpenApiQueryAliyunConsoleServcieListOutcome()>>(
			[this, request]()
			{
			return this->aliyunConsoleOpenApiQueryAliyunConsoleServcieList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AiContentClient::Personalizedtxt2imgAddInferenceJobOutcome AiContentClient::personalizedtxt2imgAddInferenceJob(const Personalizedtxt2imgAddInferenceJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Personalizedtxt2imgAddInferenceJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Personalizedtxt2imgAddInferenceJobOutcome(Personalizedtxt2imgAddInferenceJobResult(outcome.result()));
	else
		return Personalizedtxt2imgAddInferenceJobOutcome(outcome.error());
}

void AiContentClient::personalizedtxt2imgAddInferenceJobAsync(const Personalizedtxt2imgAddInferenceJobRequest& request, const Personalizedtxt2imgAddInferenceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, personalizedtxt2imgAddInferenceJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AiContentClient::Personalizedtxt2imgAddInferenceJobOutcomeCallable AiContentClient::personalizedtxt2imgAddInferenceJobCallable(const Personalizedtxt2imgAddInferenceJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Personalizedtxt2imgAddInferenceJobOutcome()>>(
			[this, request]()
			{
			return this->personalizedtxt2imgAddInferenceJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AiContentClient::Personalizedtxt2imgAddModelTrainJobOutcome AiContentClient::personalizedtxt2imgAddModelTrainJob(const Personalizedtxt2imgAddModelTrainJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Personalizedtxt2imgAddModelTrainJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Personalizedtxt2imgAddModelTrainJobOutcome(Personalizedtxt2imgAddModelTrainJobResult(outcome.result()));
	else
		return Personalizedtxt2imgAddModelTrainJobOutcome(outcome.error());
}

void AiContentClient::personalizedtxt2imgAddModelTrainJobAsync(const Personalizedtxt2imgAddModelTrainJobRequest& request, const Personalizedtxt2imgAddModelTrainJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, personalizedtxt2imgAddModelTrainJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AiContentClient::Personalizedtxt2imgAddModelTrainJobOutcomeCallable AiContentClient::personalizedtxt2imgAddModelTrainJobCallable(const Personalizedtxt2imgAddModelTrainJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Personalizedtxt2imgAddModelTrainJobOutcome()>>(
			[this, request]()
			{
			return this->personalizedtxt2imgAddModelTrainJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AiContentClient::Personalizedtxt2imgQueryImageAssetOutcome AiContentClient::personalizedtxt2imgQueryImageAsset(const Personalizedtxt2imgQueryImageAssetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Personalizedtxt2imgQueryImageAssetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Personalizedtxt2imgQueryImageAssetOutcome(Personalizedtxt2imgQueryImageAssetResult(outcome.result()));
	else
		return Personalizedtxt2imgQueryImageAssetOutcome(outcome.error());
}

void AiContentClient::personalizedtxt2imgQueryImageAssetAsync(const Personalizedtxt2imgQueryImageAssetRequest& request, const Personalizedtxt2imgQueryImageAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, personalizedtxt2imgQueryImageAsset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AiContentClient::Personalizedtxt2imgQueryImageAssetOutcomeCallable AiContentClient::personalizedtxt2imgQueryImageAssetCallable(const Personalizedtxt2imgQueryImageAssetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Personalizedtxt2imgQueryImageAssetOutcome()>>(
			[this, request]()
			{
			return this->personalizedtxt2imgQueryImageAsset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AiContentClient::Personalizedtxt2imgQueryInferenceJobInfoOutcome AiContentClient::personalizedtxt2imgQueryInferenceJobInfo(const Personalizedtxt2imgQueryInferenceJobInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Personalizedtxt2imgQueryInferenceJobInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Personalizedtxt2imgQueryInferenceJobInfoOutcome(Personalizedtxt2imgQueryInferenceJobInfoResult(outcome.result()));
	else
		return Personalizedtxt2imgQueryInferenceJobInfoOutcome(outcome.error());
}

void AiContentClient::personalizedtxt2imgQueryInferenceJobInfoAsync(const Personalizedtxt2imgQueryInferenceJobInfoRequest& request, const Personalizedtxt2imgQueryInferenceJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, personalizedtxt2imgQueryInferenceJobInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AiContentClient::Personalizedtxt2imgQueryInferenceJobInfoOutcomeCallable AiContentClient::personalizedtxt2imgQueryInferenceJobInfoCallable(const Personalizedtxt2imgQueryInferenceJobInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Personalizedtxt2imgQueryInferenceJobInfoOutcome()>>(
			[this, request]()
			{
			return this->personalizedtxt2imgQueryInferenceJobInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AiContentClient::Personalizedtxt2imgQueryModelTrainJobListOutcome AiContentClient::personalizedtxt2imgQueryModelTrainJobList(const Personalizedtxt2imgQueryModelTrainJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Personalizedtxt2imgQueryModelTrainJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Personalizedtxt2imgQueryModelTrainJobListOutcome(Personalizedtxt2imgQueryModelTrainJobListResult(outcome.result()));
	else
		return Personalizedtxt2imgQueryModelTrainJobListOutcome(outcome.error());
}

void AiContentClient::personalizedtxt2imgQueryModelTrainJobListAsync(const Personalizedtxt2imgQueryModelTrainJobListRequest& request, const Personalizedtxt2imgQueryModelTrainJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, personalizedtxt2imgQueryModelTrainJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AiContentClient::Personalizedtxt2imgQueryModelTrainJobListOutcomeCallable AiContentClient::personalizedtxt2imgQueryModelTrainJobListCallable(const Personalizedtxt2imgQueryModelTrainJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Personalizedtxt2imgQueryModelTrainJobListOutcome()>>(
			[this, request]()
			{
			return this->personalizedtxt2imgQueryModelTrainJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AiContentClient::Personalizedtxt2imgQueryModelTrainStatusOutcome AiContentClient::personalizedtxt2imgQueryModelTrainStatus(const Personalizedtxt2imgQueryModelTrainStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Personalizedtxt2imgQueryModelTrainStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Personalizedtxt2imgQueryModelTrainStatusOutcome(Personalizedtxt2imgQueryModelTrainStatusResult(outcome.result()));
	else
		return Personalizedtxt2imgQueryModelTrainStatusOutcome(outcome.error());
}

void AiContentClient::personalizedtxt2imgQueryModelTrainStatusAsync(const Personalizedtxt2imgQueryModelTrainStatusRequest& request, const Personalizedtxt2imgQueryModelTrainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, personalizedtxt2imgQueryModelTrainStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AiContentClient::Personalizedtxt2imgQueryModelTrainStatusOutcomeCallable AiContentClient::personalizedtxt2imgQueryModelTrainStatusCallable(const Personalizedtxt2imgQueryModelTrainStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Personalizedtxt2imgQueryModelTrainStatusOutcome()>>(
			[this, request]()
			{
			return this->personalizedtxt2imgQueryModelTrainStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

