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

#include <alibabacloud/smartsales/SmartSalesClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::SmartSales;
using namespace AlibabaCloud::SmartSales::Model;

namespace
{
	const std::string SERVICE_NAME = "SmartSales";
}

SmartSalesClient::SmartSalesClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SmartSalesClient::SmartSalesClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SmartSalesClient::SmartSalesClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SmartSalesClient::~SmartSalesClient()
{}

SmartSalesClient::UpdateCallOutcome SmartSalesClient::updateCall(const UpdateCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCallOutcome(UpdateCallResult(outcome.result()));
	else
		return UpdateCallOutcome(outcome.error());
}

void SmartSalesClient::updateCallAsync(const UpdateCallRequest& request, const UpdateCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartSalesClient::UpdateCallOutcomeCallable SmartSalesClient::updateCallCallable(const UpdateCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCallOutcome()>>(
			[this, request]()
			{
			return this->updateCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SmartSalesClient::UploadVoiceDataOutcome SmartSalesClient::uploadVoiceData(const UploadVoiceDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadVoiceDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadVoiceDataOutcome(UploadVoiceDataResult(outcome.result()));
	else
		return UploadVoiceDataOutcome(outcome.error());
}

void SmartSalesClient::uploadVoiceDataAsync(const UploadVoiceDataRequest& request, const UploadVoiceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadVoiceData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SmartSalesClient::UploadVoiceDataOutcomeCallable SmartSalesClient::uploadVoiceDataCallable(const UploadVoiceDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadVoiceDataOutcome()>>(
			[this, request]()
			{
			return this->uploadVoiceData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

