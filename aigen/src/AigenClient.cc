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

#include <alibabacloud/aigen/AigenClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Aigen;
using namespace AlibabaCloud::Aigen::Model;

namespace
{
	const std::string SERVICE_NAME = "aigen";
}

AigenClient::AigenClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AigenClient::AigenClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AigenClient::AigenClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AigenClient::~AigenClient()
{}

AigenClient::GenerateCosplayImageOutcome AigenClient::generateCosplayImage(const GenerateCosplayImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateCosplayImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateCosplayImageOutcome(GenerateCosplayImageResult(outcome.result()));
	else
		return GenerateCosplayImageOutcome(outcome.error());
}

void AigenClient::generateCosplayImageAsync(const GenerateCosplayImageRequest& request, const GenerateCosplayImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateCosplayImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AigenClient::GenerateCosplayImageOutcomeCallable AigenClient::generateCosplayImageCallable(const GenerateCosplayImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateCosplayImageOutcome()>>(
			[this, request]()
			{
			return this->generateCosplayImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AigenClient::GenerateTextDeformationOutcome AigenClient::generateTextDeformation(const GenerateTextDeformationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateTextDeformationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateTextDeformationOutcome(GenerateTextDeformationResult(outcome.result()));
	else
		return GenerateTextDeformationOutcome(outcome.error());
}

void AigenClient::generateTextDeformationAsync(const GenerateTextDeformationRequest& request, const GenerateTextDeformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateTextDeformation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AigenClient::GenerateTextDeformationOutcomeCallable AigenClient::generateTextDeformationCallable(const GenerateTextDeformationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateTextDeformationOutcome()>>(
			[this, request]()
			{
			return this->generateTextDeformation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AigenClient::GenerateTextTextureOutcome AigenClient::generateTextTexture(const GenerateTextTextureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateTextTextureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateTextTextureOutcome(GenerateTextTextureResult(outcome.result()));
	else
		return GenerateTextTextureOutcome(outcome.error());
}

void AigenClient::generateTextTextureAsync(const GenerateTextTextureRequest& request, const GenerateTextTextureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateTextTexture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AigenClient::GenerateTextTextureOutcomeCallable AigenClient::generateTextTextureCallable(const GenerateTextTextureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateTextTextureOutcome()>>(
			[this, request]()
			{
			return this->generateTextTexture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AigenClient::InteractiveFullSegmentationOutcome AigenClient::interactiveFullSegmentation(const InteractiveFullSegmentationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InteractiveFullSegmentationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InteractiveFullSegmentationOutcome(InteractiveFullSegmentationResult(outcome.result()));
	else
		return InteractiveFullSegmentationOutcome(outcome.error());
}

void AigenClient::interactiveFullSegmentationAsync(const InteractiveFullSegmentationRequest& request, const InteractiveFullSegmentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, interactiveFullSegmentation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AigenClient::InteractiveFullSegmentationOutcomeCallable AigenClient::interactiveFullSegmentationCallable(const InteractiveFullSegmentationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InteractiveFullSegmentationOutcome()>>(
			[this, request]()
			{
			return this->interactiveFullSegmentation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AigenClient::InteractiveScribbleSegmentationOutcome AigenClient::interactiveScribbleSegmentation(const InteractiveScribbleSegmentationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InteractiveScribbleSegmentationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InteractiveScribbleSegmentationOutcome(InteractiveScribbleSegmentationResult(outcome.result()));
	else
		return InteractiveScribbleSegmentationOutcome(outcome.error());
}

void AigenClient::interactiveScribbleSegmentationAsync(const InteractiveScribbleSegmentationRequest& request, const InteractiveScribbleSegmentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, interactiveScribbleSegmentation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AigenClient::InteractiveScribbleSegmentationOutcomeCallable AigenClient::interactiveScribbleSegmentationCallable(const InteractiveScribbleSegmentationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InteractiveScribbleSegmentationOutcome()>>(
			[this, request]()
			{
			return this->interactiveScribbleSegmentation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

