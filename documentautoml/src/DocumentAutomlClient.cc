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

#include <alibabacloud/documentautoml/DocumentAutomlClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::DocumentAutoml;
using namespace AlibabaCloud::DocumentAutoml::Model;

namespace
{
	const std::string SERVICE_NAME = "documentAutoml";
}

DocumentAutomlClient::DocumentAutomlClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "documentAutoml");
}

DocumentAutomlClient::DocumentAutomlClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "documentAutoml");
}

DocumentAutomlClient::DocumentAutomlClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "documentAutoml");
}

DocumentAutomlClient::~DocumentAutomlClient()
{}

DocumentAutomlClient::CreateModelAsyncPredictOutcome DocumentAutomlClient::createModelAsyncPredict(const CreateModelAsyncPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateModelAsyncPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateModelAsyncPredictOutcome(CreateModelAsyncPredictResult(outcome.result()));
	else
		return CreateModelAsyncPredictOutcome(outcome.error());
}

void DocumentAutomlClient::createModelAsyncPredictAsync(const CreateModelAsyncPredictRequest& request, const CreateModelAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createModelAsyncPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DocumentAutomlClient::CreateModelAsyncPredictOutcomeCallable DocumentAutomlClient::createModelAsyncPredictCallable(const CreateModelAsyncPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateModelAsyncPredictOutcome()>>(
			[this, request]()
			{
			return this->createModelAsyncPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DocumentAutomlClient::GetModelAsyncPredictOutcome DocumentAutomlClient::getModelAsyncPredict(const GetModelAsyncPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelAsyncPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelAsyncPredictOutcome(GetModelAsyncPredictResult(outcome.result()));
	else
		return GetModelAsyncPredictOutcome(outcome.error());
}

void DocumentAutomlClient::getModelAsyncPredictAsync(const GetModelAsyncPredictRequest& request, const GetModelAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelAsyncPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DocumentAutomlClient::GetModelAsyncPredictOutcomeCallable DocumentAutomlClient::getModelAsyncPredictCallable(const GetModelAsyncPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelAsyncPredictOutcome()>>(
			[this, request]()
			{
			return this->getModelAsyncPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DocumentAutomlClient::PredictClassifierModelOutcome DocumentAutomlClient::predictClassifierModel(const PredictClassifierModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PredictClassifierModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PredictClassifierModelOutcome(PredictClassifierModelResult(outcome.result()));
	else
		return PredictClassifierModelOutcome(outcome.error());
}

void DocumentAutomlClient::predictClassifierModelAsync(const PredictClassifierModelRequest& request, const PredictClassifierModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, predictClassifierModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DocumentAutomlClient::PredictClassifierModelOutcomeCallable DocumentAutomlClient::predictClassifierModelCallable(const PredictClassifierModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PredictClassifierModelOutcome()>>(
			[this, request]()
			{
			return this->predictClassifierModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DocumentAutomlClient::PredictModelOutcome DocumentAutomlClient::predictModel(const PredictModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PredictModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PredictModelOutcome(PredictModelResult(outcome.result()));
	else
		return PredictModelOutcome(outcome.error());
}

void DocumentAutomlClient::predictModelAsync(const PredictModelRequest& request, const PredictModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, predictModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DocumentAutomlClient::PredictModelOutcomeCallable DocumentAutomlClient::predictModelCallable(const PredictModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PredictModelOutcome()>>(
			[this, request]()
			{
			return this->predictModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DocumentAutomlClient::PredictTemplateModelOutcome DocumentAutomlClient::predictTemplateModel(const PredictTemplateModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PredictTemplateModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PredictTemplateModelOutcome(PredictTemplateModelResult(outcome.result()));
	else
		return PredictTemplateModelOutcome(outcome.error());
}

void DocumentAutomlClient::predictTemplateModelAsync(const PredictTemplateModelRequest& request, const PredictTemplateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, predictTemplateModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DocumentAutomlClient::PredictTemplateModelOutcomeCallable DocumentAutomlClient::predictTemplateModelCallable(const PredictTemplateModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PredictTemplateModelOutcome()>>(
			[this, request]()
			{
			return this->predictTemplateModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

