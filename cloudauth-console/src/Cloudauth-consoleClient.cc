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

#include <alibabacloud/cloudauth-console/Cloudauth_consoleClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloudauth_console;
using namespace AlibabaCloud::Cloudauth_console::Model;

namespace
{
	const std::string SERVICE_NAME = "Cloudauth-console";
}

Cloudauth_consoleClient::Cloudauth_consoleClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth-console");
}

Cloudauth_consoleClient::Cloudauth_consoleClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth-console");
}

Cloudauth_consoleClient::Cloudauth_consoleClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth-console");
}

Cloudauth_consoleClient::~Cloudauth_consoleClient()
{}

Cloudauth_consoleClient::RetrieveFaceOutcome Cloudauth_consoleClient::retrieveFace(const RetrieveFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetrieveFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetrieveFaceOutcome(RetrieveFaceResult(outcome.result()));
	else
		return RetrieveFaceOutcome(outcome.error());
}

void Cloudauth_consoleClient::retrieveFaceAsync(const RetrieveFaceRequest& request, const RetrieveFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retrieveFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloudauth_consoleClient::RetrieveFaceOutcomeCallable Cloudauth_consoleClient::retrieveFaceCallable(const RetrieveFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetrieveFaceOutcome()>>(
			[this, request]()
			{
			return this->retrieveFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Cloudauth_consoleClient::UploadIdentifyRecordOutcome Cloudauth_consoleClient::uploadIdentifyRecord(const UploadIdentifyRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadIdentifyRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadIdentifyRecordOutcome(UploadIdentifyRecordResult(outcome.result()));
	else
		return UploadIdentifyRecordOutcome(outcome.error());
}

void Cloudauth_consoleClient::uploadIdentifyRecordAsync(const UploadIdentifyRecordRequest& request, const UploadIdentifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadIdentifyRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Cloudauth_consoleClient::UploadIdentifyRecordOutcomeCallable Cloudauth_consoleClient::uploadIdentifyRecordCallable(const UploadIdentifyRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadIdentifyRecordOutcome()>>(
			[this, request]()
			{
			return this->uploadIdentifyRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

