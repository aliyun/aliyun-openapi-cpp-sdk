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

#include <alibabacloud/facebody/FacebodyClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

namespace
{
	const std::string SERVICE_NAME = "facebody";
}

FacebodyClient::FacebodyClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FacebodyClient::FacebodyClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FacebodyClient::FacebodyClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FacebodyClient::~FacebodyClient()
{}

FacebodyClient::DetectIPCPedestrianOptimizedOutcome FacebodyClient::detectIPCPedestrianOptimized(const DetectIPCPedestrianOptimizedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectIPCPedestrianOptimizedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectIPCPedestrianOptimizedOutcome(DetectIPCPedestrianOptimizedResult(outcome.result()));
	else
		return DetectIPCPedestrianOptimizedOutcome(outcome.error());
}

void FacebodyClient::detectIPCPedestrianOptimizedAsync(const DetectIPCPedestrianOptimizedRequest& request, const DetectIPCPedestrianOptimizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectIPCPedestrianOptimized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectIPCPedestrianOptimizedOutcomeCallable FacebodyClient::detectIPCPedestrianOptimizedCallable(const DetectIPCPedestrianOptimizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectIPCPedestrianOptimizedOutcome()>>(
			[this, request]()
			{
			return this->detectIPCPedestrianOptimized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

