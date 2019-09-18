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

#include <alibabacloud/lubancloud/LubancloudClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Lubancloud;
using namespace AlibabaCloud::Lubancloud::Model;

namespace
{
	const std::string SERVICE_NAME = "lubancloud";
}

LubancloudClient::LubancloudClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "lubancloud");
}

LubancloudClient::LubancloudClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "lubancloud");
}

LubancloudClient::LubancloudClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "lubancloud");
}

LubancloudClient::~LubancloudClient()
{}

LubancloudClient::BuyOriginPicturesOutcome LubancloudClient::buyOriginPictures(const BuyOriginPicturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BuyOriginPicturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BuyOriginPicturesOutcome(BuyOriginPicturesResult(outcome.result()));
	else
		return BuyOriginPicturesOutcome(outcome.error());
}

void LubancloudClient::buyOriginPicturesAsync(const BuyOriginPicturesRequest& request, const BuyOriginPicturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, buyOriginPictures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LubancloudClient::BuyOriginPicturesOutcomeCallable LubancloudClient::buyOriginPicturesCallable(const BuyOriginPicturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BuyOriginPicturesOutcome()>>(
			[this, request]()
			{
			return this->buyOriginPictures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LubancloudClient::GetStylesOutcome LubancloudClient::getStyles(const GetStylesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStylesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStylesOutcome(GetStylesResult(outcome.result()));
	else
		return GetStylesOutcome(outcome.error());
}

void LubancloudClient::getStylesAsync(const GetStylesRequest& request, const GetStylesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStyles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LubancloudClient::GetStylesOutcomeCallable LubancloudClient::getStylesCallable(const GetStylesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStylesOutcome()>>(
			[this, request]()
			{
			return this->getStyles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LubancloudClient::QueryCutoutTaskResultOutcome LubancloudClient::queryCutoutTaskResult(const QueryCutoutTaskResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCutoutTaskResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCutoutTaskResultOutcome(QueryCutoutTaskResultResult(outcome.result()));
	else
		return QueryCutoutTaskResultOutcome(outcome.error());
}

void LubancloudClient::queryCutoutTaskResultAsync(const QueryCutoutTaskResultRequest& request, const QueryCutoutTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCutoutTaskResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LubancloudClient::QueryCutoutTaskResultOutcomeCallable LubancloudClient::queryCutoutTaskResultCallable(const QueryCutoutTaskResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCutoutTaskResultOutcome()>>(
			[this, request]()
			{
			return this->queryCutoutTaskResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LubancloudClient::QueryGenerateTaskResultOutcome LubancloudClient::queryGenerateTaskResult(const QueryGenerateTaskResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGenerateTaskResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGenerateTaskResultOutcome(QueryGenerateTaskResultResult(outcome.result()));
	else
		return QueryGenerateTaskResultOutcome(outcome.error());
}

void LubancloudClient::queryGenerateTaskResultAsync(const QueryGenerateTaskResultRequest& request, const QueryGenerateTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGenerateTaskResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LubancloudClient::QueryGenerateTaskResultOutcomeCallable LubancloudClient::queryGenerateTaskResultCallable(const QueryGenerateTaskResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGenerateTaskResultOutcome()>>(
			[this, request]()
			{
			return this->queryGenerateTaskResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LubancloudClient::SubmitCutoutTaskOutcome LubancloudClient::submitCutoutTask(const SubmitCutoutTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCutoutTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCutoutTaskOutcome(SubmitCutoutTaskResult(outcome.result()));
	else
		return SubmitCutoutTaskOutcome(outcome.error());
}

void LubancloudClient::submitCutoutTaskAsync(const SubmitCutoutTaskRequest& request, const SubmitCutoutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCutoutTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LubancloudClient::SubmitCutoutTaskOutcomeCallable LubancloudClient::submitCutoutTaskCallable(const SubmitCutoutTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCutoutTaskOutcome()>>(
			[this, request]()
			{
			return this->submitCutoutTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LubancloudClient::SubmitGenerateTaskOutcome LubancloudClient::submitGenerateTask(const SubmitGenerateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitGenerateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitGenerateTaskOutcome(SubmitGenerateTaskResult(outcome.result()));
	else
		return SubmitGenerateTaskOutcome(outcome.error());
}

void LubancloudClient::submitGenerateTaskAsync(const SubmitGenerateTaskRequest& request, const SubmitGenerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitGenerateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LubancloudClient::SubmitGenerateTaskOutcomeCallable LubancloudClient::submitGenerateTaskCallable(const SubmitGenerateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitGenerateTaskOutcome()>>(
			[this, request]()
			{
			return this->submitGenerateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

