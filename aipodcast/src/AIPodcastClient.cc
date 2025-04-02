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

#include <alibabacloud/aipodcast/AIPodcastClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::AIPodcast;
using namespace AlibabaCloud::AIPodcast::Model;

namespace
{
	const std::string SERVICE_NAME = "AIPodcast";
}

AIPodcastClient::AIPodcastClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AIPodcastClient::AIPodcastClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AIPodcastClient::AIPodcastClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AIPodcastClient::~AIPodcastClient()
{}

AIPodcastClient::PodcastTaskResultQueryOutcome AIPodcastClient::podcastTaskResultQuery(const PodcastTaskResultQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PodcastTaskResultQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PodcastTaskResultQueryOutcome(PodcastTaskResultQueryResult(outcome.result()));
	else
		return PodcastTaskResultQueryOutcome(outcome.error());
}

void AIPodcastClient::podcastTaskResultQueryAsync(const PodcastTaskResultQueryRequest& request, const PodcastTaskResultQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, podcastTaskResultQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIPodcastClient::PodcastTaskResultQueryOutcomeCallable AIPodcastClient::podcastTaskResultQueryCallable(const PodcastTaskResultQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PodcastTaskResultQueryOutcome()>>(
			[this, request]()
			{
			return this->podcastTaskResultQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIPodcastClient::PodcastTaskSubmitOutcome AIPodcastClient::podcastTaskSubmit(const PodcastTaskSubmitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PodcastTaskSubmitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PodcastTaskSubmitOutcome(PodcastTaskSubmitResult(outcome.result()));
	else
		return PodcastTaskSubmitOutcome(outcome.error());
}

void AIPodcastClient::podcastTaskSubmitAsync(const PodcastTaskSubmitRequest& request, const PodcastTaskSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, podcastTaskSubmit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIPodcastClient::PodcastTaskSubmitOutcomeCallable AIPodcastClient::podcastTaskSubmitCallable(const PodcastTaskSubmitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PodcastTaskSubmitOutcome()>>(
			[this, request]()
			{
			return this->podcastTaskSubmit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

