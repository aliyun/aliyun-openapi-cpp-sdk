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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlp-automl");
}

Nlp_automlClient::Nlp_automlClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlp-automl");
}

Nlp_automlClient::Nlp_automlClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlp-automl");
}

Nlp_automlClient::~Nlp_automlClient()
{}

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

Nlp_automlClient::RunContactReviewOutcome Nlp_automlClient::runContactReview(const RunContactReviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunContactReviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunContactReviewOutcome(RunContactReviewResult(outcome.result()));
	else
		return RunContactReviewOutcome(outcome.error());
}

void Nlp_automlClient::runContactReviewAsync(const RunContactReviewRequest& request, const RunContactReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runContactReview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::RunContactReviewOutcomeCallable Nlp_automlClient::runContactReviewCallable(const RunContactReviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunContactReviewOutcome()>>(
			[this, request]()
			{
			return this->runContactReview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

