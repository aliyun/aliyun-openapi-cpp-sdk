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

#include <alibabacloud/cloudauth/CloudauthClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

namespace
{
	const std::string SERVICE_NAME = "Cloudauth";
}

CloudauthClient::CloudauthClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::CloudauthClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::CloudauthClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::~CloudauthClient()
{}

CloudauthClient::GetMaterialsOutcome CloudauthClient::getMaterials(const GetMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMaterialsOutcome(GetMaterialsResult(outcome.result()));
	else
		return GetMaterialsOutcome(outcome.error());
}

void CloudauthClient::getMaterialsAsync(const GetMaterialsRequest& request, const GetMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::GetMaterialsOutcomeCallable CloudauthClient::getMaterialsCallable(const GetMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMaterialsOutcome()>>(
			[this, request]()
			{
			return this->getMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::GetVerifyTokenOutcome CloudauthClient::getVerifyToken(const GetVerifyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVerifyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVerifyTokenOutcome(GetVerifyTokenResult(outcome.result()));
	else
		return GetVerifyTokenOutcome(outcome.error());
}

void CloudauthClient::getVerifyTokenAsync(const GetVerifyTokenRequest& request, const GetVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVerifyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::GetVerifyTokenOutcomeCallable CloudauthClient::getVerifyTokenCallable(const GetVerifyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVerifyTokenOutcome()>>(
			[this, request]()
			{
			return this->getVerifyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DetectFaceAttributesOutcome CloudauthClient::detectFaceAttributes(const DetectFaceAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectFaceAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectFaceAttributesOutcome(DetectFaceAttributesResult(outcome.result()));
	else
		return DetectFaceAttributesOutcome(outcome.error());
}

void CloudauthClient::detectFaceAttributesAsync(const DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectFaceAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DetectFaceAttributesOutcomeCallable CloudauthClient::detectFaceAttributesCallable(const DetectFaceAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectFaceAttributesOutcome()>>(
			[this, request]()
			{
			return this->detectFaceAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CompareFacesOutcome CloudauthClient::compareFaces(const CompareFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareFacesOutcome(CompareFacesResult(outcome.result()));
	else
		return CompareFacesOutcome(outcome.error());
}

void CloudauthClient::compareFacesAsync(const CompareFacesRequest& request, const CompareFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CompareFacesOutcomeCallable CloudauthClient::compareFacesCallable(const CompareFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareFacesOutcome()>>(
			[this, request]()
			{
			return this->compareFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::SubmitMaterialsOutcome CloudauthClient::submitMaterials(const SubmitMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitMaterialsOutcome(SubmitMaterialsResult(outcome.result()));
	else
		return SubmitMaterialsOutcome(outcome.error());
}

void CloudauthClient::submitMaterialsAsync(const SubmitMaterialsRequest& request, const SubmitMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::SubmitMaterialsOutcomeCallable CloudauthClient::submitMaterialsCallable(const SubmitMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitMaterialsOutcome()>>(
			[this, request]()
			{
			return this->submitMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::GetStatusOutcome CloudauthClient::getStatus(const GetStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStatusOutcome(GetStatusResult(outcome.result()));
	else
		return GetStatusOutcome(outcome.error());
}

void CloudauthClient::getStatusAsync(const GetStatusRequest& request, const GetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::GetStatusOutcomeCallable CloudauthClient::getStatusCallable(const GetStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStatusOutcome()>>(
			[this, request]()
			{
			return this->getStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

