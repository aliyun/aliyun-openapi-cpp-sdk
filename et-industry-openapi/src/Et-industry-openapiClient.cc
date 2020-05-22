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

#include <alibabacloud/et-industry-openapi/Et_industry_openapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Et_industry_openapi;
using namespace AlibabaCloud::Et_industry_openapi::Model;

namespace
{
	const std::string SERVICE_NAME = "et-industry-openapi";
}

Et_industry_openapiClient::Et_industry_openapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Et_industry_openapiClient::Et_industry_openapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Et_industry_openapiClient::Et_industry_openapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Et_industry_openapiClient::~Et_industry_openapiClient()
{}

Et_industry_openapiClient::UploadDeviceDataOutcome Et_industry_openapiClient::uploadDeviceData(const UploadDeviceDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadDeviceDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadDeviceDataOutcome(UploadDeviceDataResult(outcome.result()));
	else
		return UploadDeviceDataOutcome(outcome.error());
}

void Et_industry_openapiClient::uploadDeviceDataAsync(const UploadDeviceDataRequest& request, const UploadDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadDeviceData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Et_industry_openapiClient::UploadDeviceDataOutcomeCallable Et_industry_openapiClient::uploadDeviceDataCallable(const UploadDeviceDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadDeviceDataOutcome()>>(
			[this, request]()
			{
			return this->uploadDeviceData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}
