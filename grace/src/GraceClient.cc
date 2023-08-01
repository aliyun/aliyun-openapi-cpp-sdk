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

#include <alibabacloud/grace/GraceClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Grace;
using namespace AlibabaCloud::Grace::Model;

namespace
{
	const std::string SERVICE_NAME = "grace";
}

GraceClient::GraceClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "grace");
}

GraceClient::GraceClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "grace");
}

GraceClient::GraceClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "grace");
}

GraceClient::~GraceClient()
{}

GraceClient::AnalyzeFileOutcome GraceClient::analyzeFile(const AnalyzeFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AnalyzeFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AnalyzeFileOutcome(AnalyzeFileResult(outcome.result()));
	else
		return AnalyzeFileOutcome(outcome.error());
}

void GraceClient::analyzeFileAsync(const AnalyzeFileRequest& request, const AnalyzeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, analyzeFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GraceClient::AnalyzeFileOutcomeCallable GraceClient::analyzeFileCallable(const AnalyzeFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AnalyzeFileOutcome()>>(
			[this, request]()
			{
			return this->analyzeFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GraceClient::GetFileOutcome GraceClient::getFile(const GetFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileOutcome(GetFileResult(outcome.result()));
	else
		return GetFileOutcome(outcome.error());
}

void GraceClient::getFileAsync(const GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GraceClient::GetFileOutcomeCallable GraceClient::getFileCallable(const GetFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileOutcome()>>(
			[this, request]()
			{
			return this->getFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GraceClient::UploadFileByOSSOutcome GraceClient::uploadFileByOSS(const UploadFileByOSSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadFileByOSSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadFileByOSSOutcome(UploadFileByOSSResult(outcome.result()));
	else
		return UploadFileByOSSOutcome(outcome.error());
}

void GraceClient::uploadFileByOSSAsync(const UploadFileByOSSRequest& request, const UploadFileByOSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadFileByOSS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GraceClient::UploadFileByOSSOutcomeCallable GraceClient::uploadFileByOSSCallable(const UploadFileByOSSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadFileByOSSOutcome()>>(
			[this, request]()
			{
			return this->uploadFileByOSS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GraceClient::UploadFileByURLOutcome GraceClient::uploadFileByURL(const UploadFileByURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadFileByURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadFileByURLOutcome(UploadFileByURLResult(outcome.result()));
	else
		return UploadFileByURLOutcome(outcome.error());
}

void GraceClient::uploadFileByURLAsync(const UploadFileByURLRequest& request, const UploadFileByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadFileByURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GraceClient::UploadFileByURLOutcomeCallable GraceClient::uploadFileByURLCallable(const UploadFileByURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadFileByURLOutcome()>>(
			[this, request]()
			{
			return this->uploadFileByURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

