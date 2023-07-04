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

#include <alibabacloud/nlp-automl/Nlp_automlClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Nlp_automl;
using namespace AlibabaCloud::Nlp_automl::Model;

namespace
{
	const std::string SERVICE_NAME = "nlp-automl";
}

Nlp_automlClient::Nlp_automlClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Nlp_automlClient::Nlp_automlClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Nlp_automlClient::Nlp_automlClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Nlp_automlClient::~Nlp_automlClient()
{}

Nlp_automlClient::CreateAsyncPredictOutcome Nlp_automlClient::createAsyncPredict(const CreateAsyncPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAsyncPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAsyncPredictOutcome(CreateAsyncPredictResult(outcome.result()));
	else
		return CreateAsyncPredictOutcome(outcome.error());
}

void Nlp_automlClient::createAsyncPredictAsync(const CreateAsyncPredictRequest& request, const CreateAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAsyncPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::CreateAsyncPredictOutcomeCallable Nlp_automlClient::createAsyncPredictCallable(const CreateAsyncPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAsyncPredictOutcome()>>(
			[this, request]()
			{
			return this->createAsyncPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::FindUserReport4AlinlpOutcome Nlp_automlClient::findUserReport4Alinlp(const FindUserReport4AlinlpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindUserReport4AlinlpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindUserReport4AlinlpOutcome(FindUserReport4AlinlpResult(outcome.result()));
	else
		return FindUserReport4AlinlpOutcome(outcome.error());
}

void Nlp_automlClient::findUserReport4AlinlpAsync(const FindUserReport4AlinlpRequest& request, const FindUserReport4AlinlpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findUserReport4Alinlp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::FindUserReport4AlinlpOutcomeCallable Nlp_automlClient::findUserReport4AlinlpCallable(const FindUserReport4AlinlpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindUserReport4AlinlpOutcome()>>(
			[this, request]()
			{
			return this->findUserReport4Alinlp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::GetAsyncPredictOutcome Nlp_automlClient::getAsyncPredict(const GetAsyncPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsyncPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsyncPredictOutcome(GetAsyncPredictResult(outcome.result()));
	else
		return GetAsyncPredictOutcome(outcome.error());
}

void Nlp_automlClient::getAsyncPredictAsync(const GetAsyncPredictRequest& request, const GetAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsyncPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::GetAsyncPredictOutcomeCallable Nlp_automlClient::getAsyncPredictCallable(const GetAsyncPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsyncPredictOutcome()>>(
			[this, request]()
			{
			return this->getAsyncPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::GetPredictResultOutcome Nlp_automlClient::getPredictResult(const GetPredictResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPredictResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPredictResultOutcome(GetPredictResultResult(outcome.result()));
	else
		return GetPredictResultOutcome(outcome.error());
}

void Nlp_automlClient::getPredictResultAsync(const GetPredictResultRequest& request, const GetPredictResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPredictResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::GetPredictResultOutcomeCallable Nlp_automlClient::getPredictResultCallable(const GetPredictResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPredictResultOutcome()>>(
			[this, request]()
			{
			return this->getPredictResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::GetPredictResultHighOutcome Nlp_automlClient::getPredictResultHigh(const GetPredictResultHighRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPredictResultHighOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPredictResultHighOutcome(GetPredictResultHighResult(outcome.result()));
	else
		return GetPredictResultHighOutcome(outcome.error());
}

void Nlp_automlClient::getPredictResultHighAsync(const GetPredictResultHighRequest& request, const GetPredictResultHighAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPredictResultHigh(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::GetPredictResultHighOutcomeCallable Nlp_automlClient::getPredictResultHighCallable(const GetPredictResultHighRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPredictResultHighOutcome()>>(
			[this, request]()
			{
			return this->getPredictResultHigh(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::RunPreTrainServiceOutcome Nlp_automlClient::runPreTrainService(const RunPreTrainServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunPreTrainServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunPreTrainServiceOutcome(RunPreTrainServiceResult(outcome.result()));
	else
		return RunPreTrainServiceOutcome(outcome.error());
}

void Nlp_automlClient::runPreTrainServiceAsync(const RunPreTrainServiceRequest& request, const RunPreTrainServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runPreTrainService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::RunPreTrainServiceOutcomeCallable Nlp_automlClient::runPreTrainServiceCallable(const RunPreTrainServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunPreTrainServiceOutcome()>>(
			[this, request]()
			{
			return this->runPreTrainService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::RunPreTrainServiceNewOutcome Nlp_automlClient::runPreTrainServiceNew(const RunPreTrainServiceNewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunPreTrainServiceNewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunPreTrainServiceNewOutcome(RunPreTrainServiceNewResult(outcome.result()));
	else
		return RunPreTrainServiceNewOutcome(outcome.error());
}

void Nlp_automlClient::runPreTrainServiceNewAsync(const RunPreTrainServiceNewRequest& request, const RunPreTrainServiceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runPreTrainServiceNew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::RunPreTrainServiceNewOutcomeCallable Nlp_automlClient::runPreTrainServiceNewCallable(const RunPreTrainServiceNewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunPreTrainServiceNewOutcome()>>(
			[this, request]()
			{
			return this->runPreTrainServiceNew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

