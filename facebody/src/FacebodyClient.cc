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
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "facebody");
}

FacebodyClient::FacebodyClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "facebody");
}

FacebodyClient::FacebodyClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "facebody");
}

FacebodyClient::~FacebodyClient()
{}

FacebodyClient::AddFaceOutcome FacebodyClient::addFace(const AddFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceOutcome(AddFaceResult(outcome.result()));
	else
		return AddFaceOutcome(outcome.error());
}

void FacebodyClient::addFaceAsync(const AddFaceRequest& request, const AddFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::AddFaceOutcomeCallable FacebodyClient::addFaceCallable(const AddFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceOutcome()>>(
			[this, request]()
			{
			return this->addFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::AddFaceEntityOutcome FacebodyClient::addFaceEntity(const AddFaceEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceEntityOutcome(AddFaceEntityResult(outcome.result()));
	else
		return AddFaceEntityOutcome(outcome.error());
}

void FacebodyClient::addFaceEntityAsync(const AddFaceEntityRequest& request, const AddFaceEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::AddFaceEntityOutcomeCallable FacebodyClient::addFaceEntityCallable(const AddFaceEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceEntityOutcome()>>(
			[this, request]()
			{
			return this->addFaceEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::AddFaceImageTemplateOutcome FacebodyClient::addFaceImageTemplate(const AddFaceImageTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceImageTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceImageTemplateOutcome(AddFaceImageTemplateResult(outcome.result()));
	else
		return AddFaceImageTemplateOutcome(outcome.error());
}

void FacebodyClient::addFaceImageTemplateAsync(const AddFaceImageTemplateRequest& request, const AddFaceImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceImageTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::AddFaceImageTemplateOutcomeCallable FacebodyClient::addFaceImageTemplateCallable(const AddFaceImageTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceImageTemplateOutcome()>>(
			[this, request]()
			{
			return this->addFaceImageTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::BatchAddFacesOutcome FacebodyClient::batchAddFaces(const BatchAddFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAddFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAddFacesOutcome(BatchAddFacesResult(outcome.result()));
	else
		return BatchAddFacesOutcome(outcome.error());
}

void FacebodyClient::batchAddFacesAsync(const BatchAddFacesRequest& request, const BatchAddFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAddFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::BatchAddFacesOutcomeCallable FacebodyClient::batchAddFacesCallable(const BatchAddFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAddFacesOutcome()>>(
			[this, request]()
			{
			return this->batchAddFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::BeautifyBodyOutcome FacebodyClient::beautifyBody(const BeautifyBodyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BeautifyBodyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BeautifyBodyOutcome(BeautifyBodyResult(outcome.result()));
	else
		return BeautifyBodyOutcome(outcome.error());
}

void FacebodyClient::beautifyBodyAsync(const BeautifyBodyRequest& request, const BeautifyBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, beautifyBody(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::BeautifyBodyOutcomeCallable FacebodyClient::beautifyBodyCallable(const BeautifyBodyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BeautifyBodyOutcome()>>(
			[this, request]()
			{
			return this->beautifyBody(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::BlurFaceOutcome FacebodyClient::blurFace(const BlurFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BlurFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BlurFaceOutcome(BlurFaceResult(outcome.result()));
	else
		return BlurFaceOutcome(outcome.error());
}

void FacebodyClient::blurFaceAsync(const BlurFaceRequest& request, const BlurFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, blurFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::BlurFaceOutcomeCallable FacebodyClient::blurFaceCallable(const BlurFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BlurFaceOutcome()>>(
			[this, request]()
			{
			return this->blurFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::BodyPostureOutcome FacebodyClient::bodyPosture(const BodyPostureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BodyPostureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BodyPostureOutcome(BodyPostureResult(outcome.result()));
	else
		return BodyPostureOutcome(outcome.error());
}

void FacebodyClient::bodyPostureAsync(const BodyPostureRequest& request, const BodyPostureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bodyPosture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::BodyPostureOutcomeCallable FacebodyClient::bodyPostureCallable(const BodyPostureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BodyPostureOutcome()>>(
			[this, request]()
			{
			return this->bodyPosture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::CompareFaceOutcome FacebodyClient::compareFace(const CompareFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareFaceOutcome(CompareFaceResult(outcome.result()));
	else
		return CompareFaceOutcome(outcome.error());
}

void FacebodyClient::compareFaceAsync(const CompareFaceRequest& request, const CompareFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::CompareFaceOutcomeCallable FacebodyClient::compareFaceCallable(const CompareFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareFaceOutcome()>>(
			[this, request]()
			{
			return this->compareFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::CompareFaceWithMaskOutcome FacebodyClient::compareFaceWithMask(const CompareFaceWithMaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareFaceWithMaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareFaceWithMaskOutcome(CompareFaceWithMaskResult(outcome.result()));
	else
		return CompareFaceWithMaskOutcome(outcome.error());
}

void FacebodyClient::compareFaceWithMaskAsync(const CompareFaceWithMaskRequest& request, const CompareFaceWithMaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareFaceWithMask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::CompareFaceWithMaskOutcomeCallable FacebodyClient::compareFaceWithMaskCallable(const CompareFaceWithMaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareFaceWithMaskOutcome()>>(
			[this, request]()
			{
			return this->compareFaceWithMask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::CreateFaceDbOutcome FacebodyClient::createFaceDb(const CreateFaceDbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFaceDbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFaceDbOutcome(CreateFaceDbResult(outcome.result()));
	else
		return CreateFaceDbOutcome(outcome.error());
}

void FacebodyClient::createFaceDbAsync(const CreateFaceDbRequest& request, const CreateFaceDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFaceDb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::CreateFaceDbOutcomeCallable FacebodyClient::createFaceDbCallable(const CreateFaceDbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFaceDbOutcome()>>(
			[this, request]()
			{
			return this->createFaceDb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DeepfakeFaceOutcome FacebodyClient::deepfakeFace(const DeepfakeFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeepfakeFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeepfakeFaceOutcome(DeepfakeFaceResult(outcome.result()));
	else
		return DeepfakeFaceOutcome(outcome.error());
}

void FacebodyClient::deepfakeFaceAsync(const DeepfakeFaceRequest& request, const DeepfakeFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deepfakeFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DeepfakeFaceOutcomeCallable FacebodyClient::deepfakeFaceCallable(const DeepfakeFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeepfakeFaceOutcome()>>(
			[this, request]()
			{
			return this->deepfakeFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DeleteFaceOutcome FacebodyClient::deleteFace(const DeleteFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceOutcome(DeleteFaceResult(outcome.result()));
	else
		return DeleteFaceOutcome(outcome.error());
}

void FacebodyClient::deleteFaceAsync(const DeleteFaceRequest& request, const DeleteFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DeleteFaceOutcomeCallable FacebodyClient::deleteFaceCallable(const DeleteFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceOutcome()>>(
			[this, request]()
			{
			return this->deleteFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DeleteFaceDbOutcome FacebodyClient::deleteFaceDb(const DeleteFaceDbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceDbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceDbOutcome(DeleteFaceDbResult(outcome.result()));
	else
		return DeleteFaceDbOutcome(outcome.error());
}

void FacebodyClient::deleteFaceDbAsync(const DeleteFaceDbRequest& request, const DeleteFaceDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceDb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DeleteFaceDbOutcomeCallable FacebodyClient::deleteFaceDbCallable(const DeleteFaceDbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceDbOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceDb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DeleteFaceEntityOutcome FacebodyClient::deleteFaceEntity(const DeleteFaceEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceEntityOutcome(DeleteFaceEntityResult(outcome.result()));
	else
		return DeleteFaceEntityOutcome(outcome.error());
}

void FacebodyClient::deleteFaceEntityAsync(const DeleteFaceEntityRequest& request, const DeleteFaceEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DeleteFaceEntityOutcomeCallable FacebodyClient::deleteFaceEntityCallable(const DeleteFaceEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceEntityOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DeleteFaceImageTemplateOutcome FacebodyClient::deleteFaceImageTemplate(const DeleteFaceImageTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceImageTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceImageTemplateOutcome(DeleteFaceImageTemplateResult(outcome.result()));
	else
		return DeleteFaceImageTemplateOutcome(outcome.error());
}

void FacebodyClient::deleteFaceImageTemplateAsync(const DeleteFaceImageTemplateRequest& request, const DeleteFaceImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceImageTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DeleteFaceImageTemplateOutcomeCallable FacebodyClient::deleteFaceImageTemplateCallable(const DeleteFaceImageTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceImageTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceImageTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectBodyCountOutcome FacebodyClient::detectBodyCount(const DetectBodyCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectBodyCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectBodyCountOutcome(DetectBodyCountResult(outcome.result()));
	else
		return DetectBodyCountOutcome(outcome.error());
}

void FacebodyClient::detectBodyCountAsync(const DetectBodyCountRequest& request, const DetectBodyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectBodyCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectBodyCountOutcomeCallable FacebodyClient::detectBodyCountCallable(const DetectBodyCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectBodyCountOutcome()>>(
			[this, request]()
			{
			return this->detectBodyCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectCelebrityOutcome FacebodyClient::detectCelebrity(const DetectCelebrityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectCelebrityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectCelebrityOutcome(DetectCelebrityResult(outcome.result()));
	else
		return DetectCelebrityOutcome(outcome.error());
}

void FacebodyClient::detectCelebrityAsync(const DetectCelebrityRequest& request, const DetectCelebrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectCelebrity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectCelebrityOutcomeCallable FacebodyClient::detectCelebrityCallable(const DetectCelebrityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectCelebrityOutcome()>>(
			[this, request]()
			{
			return this->detectCelebrity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectChefCapOutcome FacebodyClient::detectChefCap(const DetectChefCapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectChefCapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectChefCapOutcome(DetectChefCapResult(outcome.result()));
	else
		return DetectChefCapOutcome(outcome.error());
}

void FacebodyClient::detectChefCapAsync(const DetectChefCapRequest& request, const DetectChefCapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectChefCap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectChefCapOutcomeCallable FacebodyClient::detectChefCapCallable(const DetectChefCapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectChefCapOutcome()>>(
			[this, request]()
			{
			return this->detectChefCap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectFaceOutcome FacebodyClient::detectFace(const DetectFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectFaceOutcome(DetectFaceResult(outcome.result()));
	else
		return DetectFaceOutcome(outcome.error());
}

void FacebodyClient::detectFaceAsync(const DetectFaceRequest& request, const DetectFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectFaceOutcomeCallable FacebodyClient::detectFaceCallable(const DetectFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectFaceOutcome()>>(
			[this, request]()
			{
			return this->detectFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectInfraredLivingFaceOutcome FacebodyClient::detectInfraredLivingFace(const DetectInfraredLivingFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectInfraredLivingFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectInfraredLivingFaceOutcome(DetectInfraredLivingFaceResult(outcome.result()));
	else
		return DetectInfraredLivingFaceOutcome(outcome.error());
}

void FacebodyClient::detectInfraredLivingFaceAsync(const DetectInfraredLivingFaceRequest& request, const DetectInfraredLivingFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectInfraredLivingFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectInfraredLivingFaceOutcomeCallable FacebodyClient::detectInfraredLivingFaceCallable(const DetectInfraredLivingFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectInfraredLivingFaceOutcome()>>(
			[this, request]()
			{
			return this->detectInfraredLivingFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectLivingFaceOutcome FacebodyClient::detectLivingFace(const DetectLivingFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectLivingFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectLivingFaceOutcome(DetectLivingFaceResult(outcome.result()));
	else
		return DetectLivingFaceOutcome(outcome.error());
}

void FacebodyClient::detectLivingFaceAsync(const DetectLivingFaceRequest& request, const DetectLivingFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectLivingFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectLivingFaceOutcomeCallable FacebodyClient::detectLivingFaceCallable(const DetectLivingFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectLivingFaceOutcome()>>(
			[this, request]()
			{
			return this->detectLivingFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectPedestrianOutcome FacebodyClient::detectPedestrian(const DetectPedestrianRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectPedestrianOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectPedestrianOutcome(DetectPedestrianResult(outcome.result()));
	else
		return DetectPedestrianOutcome(outcome.error());
}

void FacebodyClient::detectPedestrianAsync(const DetectPedestrianRequest& request, const DetectPedestrianAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectPedestrian(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectPedestrianOutcomeCallable FacebodyClient::detectPedestrianCallable(const DetectPedestrianRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectPedestrianOutcome()>>(
			[this, request]()
			{
			return this->detectPedestrian(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectPedestrianIntrusionOutcome FacebodyClient::detectPedestrianIntrusion(const DetectPedestrianIntrusionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectPedestrianIntrusionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectPedestrianIntrusionOutcome(DetectPedestrianIntrusionResult(outcome.result()));
	else
		return DetectPedestrianIntrusionOutcome(outcome.error());
}

void FacebodyClient::detectPedestrianIntrusionAsync(const DetectPedestrianIntrusionRequest& request, const DetectPedestrianIntrusionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectPedestrianIntrusion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectPedestrianIntrusionOutcomeCallable FacebodyClient::detectPedestrianIntrusionCallable(const DetectPedestrianIntrusionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectPedestrianIntrusionOutcome()>>(
			[this, request]()
			{
			return this->detectPedestrianIntrusion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::DetectVideoLivingFaceOutcome FacebodyClient::detectVideoLivingFace(const DetectVideoLivingFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectVideoLivingFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectVideoLivingFaceOutcome(DetectVideoLivingFaceResult(outcome.result()));
	else
		return DetectVideoLivingFaceOutcome(outcome.error());
}

void FacebodyClient::detectVideoLivingFaceAsync(const DetectVideoLivingFaceRequest& request, const DetectVideoLivingFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectVideoLivingFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::DetectVideoLivingFaceOutcomeCallable FacebodyClient::detectVideoLivingFaceCallable(const DetectVideoLivingFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectVideoLivingFaceOutcome()>>(
			[this, request]()
			{
			return this->detectVideoLivingFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::EnhanceFaceOutcome FacebodyClient::enhanceFace(const EnhanceFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnhanceFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnhanceFaceOutcome(EnhanceFaceResult(outcome.result()));
	else
		return EnhanceFaceOutcome(outcome.error());
}

void FacebodyClient::enhanceFaceAsync(const EnhanceFaceRequest& request, const EnhanceFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enhanceFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::EnhanceFaceOutcomeCallable FacebodyClient::enhanceFaceCallable(const EnhanceFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnhanceFaceOutcome()>>(
			[this, request]()
			{
			return this->enhanceFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::ExtractFingerPrintOutcome FacebodyClient::extractFingerPrint(const ExtractFingerPrintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExtractFingerPrintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExtractFingerPrintOutcome(ExtractFingerPrintResult(outcome.result()));
	else
		return ExtractFingerPrintOutcome(outcome.error());
}

void FacebodyClient::extractFingerPrintAsync(const ExtractFingerPrintRequest& request, const ExtractFingerPrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, extractFingerPrint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::ExtractFingerPrintOutcomeCallable FacebodyClient::extractFingerPrintCallable(const ExtractFingerPrintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExtractFingerPrintOutcome()>>(
			[this, request]()
			{
			return this->extractFingerPrint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::ExtractPedestrianFeatureAttrOutcome FacebodyClient::extractPedestrianFeatureAttr(const ExtractPedestrianFeatureAttrRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExtractPedestrianFeatureAttrOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExtractPedestrianFeatureAttrOutcome(ExtractPedestrianFeatureAttrResult(outcome.result()));
	else
		return ExtractPedestrianFeatureAttrOutcome(outcome.error());
}

void FacebodyClient::extractPedestrianFeatureAttrAsync(const ExtractPedestrianFeatureAttrRequest& request, const ExtractPedestrianFeatureAttrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, extractPedestrianFeatureAttr(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::ExtractPedestrianFeatureAttrOutcomeCallable FacebodyClient::extractPedestrianFeatureAttrCallable(const ExtractPedestrianFeatureAttrRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExtractPedestrianFeatureAttrOutcome()>>(
			[this, request]()
			{
			return this->extractPedestrianFeatureAttr(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::FaceBeautyOutcome FacebodyClient::faceBeauty(const FaceBeautyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FaceBeautyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FaceBeautyOutcome(FaceBeautyResult(outcome.result()));
	else
		return FaceBeautyOutcome(outcome.error());
}

void FacebodyClient::faceBeautyAsync(const FaceBeautyRequest& request, const FaceBeautyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, faceBeauty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::FaceBeautyOutcomeCallable FacebodyClient::faceBeautyCallable(const FaceBeautyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FaceBeautyOutcome()>>(
			[this, request]()
			{
			return this->faceBeauty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::FaceFilterOutcome FacebodyClient::faceFilter(const FaceFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FaceFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FaceFilterOutcome(FaceFilterResult(outcome.result()));
	else
		return FaceFilterOutcome(outcome.error());
}

void FacebodyClient::faceFilterAsync(const FaceFilterRequest& request, const FaceFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, faceFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::FaceFilterOutcomeCallable FacebodyClient::faceFilterCallable(const FaceFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FaceFilterOutcome()>>(
			[this, request]()
			{
			return this->faceFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::FaceMakeupOutcome FacebodyClient::faceMakeup(const FaceMakeupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FaceMakeupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FaceMakeupOutcome(FaceMakeupResult(outcome.result()));
	else
		return FaceMakeupOutcome(outcome.error());
}

void FacebodyClient::faceMakeupAsync(const FaceMakeupRequest& request, const FaceMakeupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, faceMakeup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::FaceMakeupOutcomeCallable FacebodyClient::faceMakeupCallable(const FaceMakeupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FaceMakeupOutcome()>>(
			[this, request]()
			{
			return this->faceMakeup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::FaceTidyupOutcome FacebodyClient::faceTidyup(const FaceTidyupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FaceTidyupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FaceTidyupOutcome(FaceTidyupResult(outcome.result()));
	else
		return FaceTidyupOutcome(outcome.error());
}

void FacebodyClient::faceTidyupAsync(const FaceTidyupRequest& request, const FaceTidyupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, faceTidyup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::FaceTidyupOutcomeCallable FacebodyClient::faceTidyupCallable(const FaceTidyupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FaceTidyupOutcome()>>(
			[this, request]()
			{
			return this->faceTidyup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::GenRealPersonVerificationTokenOutcome FacebodyClient::genRealPersonVerificationToken(const GenRealPersonVerificationTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenRealPersonVerificationTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenRealPersonVerificationTokenOutcome(GenRealPersonVerificationTokenResult(outcome.result()));
	else
		return GenRealPersonVerificationTokenOutcome(outcome.error());
}

void FacebodyClient::genRealPersonVerificationTokenAsync(const GenRealPersonVerificationTokenRequest& request, const GenRealPersonVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, genRealPersonVerificationToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::GenRealPersonVerificationTokenOutcomeCallable FacebodyClient::genRealPersonVerificationTokenCallable(const GenRealPersonVerificationTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenRealPersonVerificationTokenOutcome()>>(
			[this, request]()
			{
			return this->genRealPersonVerificationToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::GenerateHumanAnimeStyleOutcome FacebodyClient::generateHumanAnimeStyle(const GenerateHumanAnimeStyleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateHumanAnimeStyleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateHumanAnimeStyleOutcome(GenerateHumanAnimeStyleResult(outcome.result()));
	else
		return GenerateHumanAnimeStyleOutcome(outcome.error());
}

void FacebodyClient::generateHumanAnimeStyleAsync(const GenerateHumanAnimeStyleRequest& request, const GenerateHumanAnimeStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateHumanAnimeStyle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::GenerateHumanAnimeStyleOutcomeCallable FacebodyClient::generateHumanAnimeStyleCallable(const GenerateHumanAnimeStyleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateHumanAnimeStyleOutcome()>>(
			[this, request]()
			{
			return this->generateHumanAnimeStyle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::GenerateHumanSketchStyleOutcome FacebodyClient::generateHumanSketchStyle(const GenerateHumanSketchStyleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateHumanSketchStyleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateHumanSketchStyleOutcome(GenerateHumanSketchStyleResult(outcome.result()));
	else
		return GenerateHumanSketchStyleOutcome(outcome.error());
}

void FacebodyClient::generateHumanSketchStyleAsync(const GenerateHumanSketchStyleRequest& request, const GenerateHumanSketchStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateHumanSketchStyle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::GenerateHumanSketchStyleOutcomeCallable FacebodyClient::generateHumanSketchStyleCallable(const GenerateHumanSketchStyleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateHumanSketchStyleOutcome()>>(
			[this, request]()
			{
			return this->generateHumanSketchStyle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::GetFaceEntityOutcome FacebodyClient::getFaceEntity(const GetFaceEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFaceEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFaceEntityOutcome(GetFaceEntityResult(outcome.result()));
	else
		return GetFaceEntityOutcome(outcome.error());
}

void FacebodyClient::getFaceEntityAsync(const GetFaceEntityRequest& request, const GetFaceEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFaceEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::GetFaceEntityOutcomeCallable FacebodyClient::getFaceEntityCallable(const GetFaceEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFaceEntityOutcome()>>(
			[this, request]()
			{
			return this->getFaceEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::GetRealPersonVerificationResultOutcome FacebodyClient::getRealPersonVerificationResult(const GetRealPersonVerificationResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRealPersonVerificationResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRealPersonVerificationResultOutcome(GetRealPersonVerificationResultResult(outcome.result()));
	else
		return GetRealPersonVerificationResultOutcome(outcome.error());
}

void FacebodyClient::getRealPersonVerificationResultAsync(const GetRealPersonVerificationResultRequest& request, const GetRealPersonVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRealPersonVerificationResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::GetRealPersonVerificationResultOutcomeCallable FacebodyClient::getRealPersonVerificationResultCallable(const GetRealPersonVerificationResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRealPersonVerificationResultOutcome()>>(
			[this, request]()
			{
			return this->getRealPersonVerificationResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::HandPostureOutcome FacebodyClient::handPosture(const HandPostureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HandPostureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HandPostureOutcome(HandPostureResult(outcome.result()));
	else
		return HandPostureOutcome(outcome.error());
}

void FacebodyClient::handPostureAsync(const HandPostureRequest& request, const HandPostureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, handPosture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::HandPostureOutcomeCallable FacebodyClient::handPostureCallable(const HandPostureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HandPostureOutcome()>>(
			[this, request]()
			{
			return this->handPosture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::LiquifyFaceOutcome FacebodyClient::liquifyFace(const LiquifyFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LiquifyFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LiquifyFaceOutcome(LiquifyFaceResult(outcome.result()));
	else
		return LiquifyFaceOutcome(outcome.error());
}

void FacebodyClient::liquifyFaceAsync(const LiquifyFaceRequest& request, const LiquifyFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, liquifyFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::LiquifyFaceOutcomeCallable FacebodyClient::liquifyFaceCallable(const LiquifyFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LiquifyFaceOutcome()>>(
			[this, request]()
			{
			return this->liquifyFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::ListFaceDbsOutcome FacebodyClient::listFaceDbs(const ListFaceDbsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFaceDbsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFaceDbsOutcome(ListFaceDbsResult(outcome.result()));
	else
		return ListFaceDbsOutcome(outcome.error());
}

void FacebodyClient::listFaceDbsAsync(const ListFaceDbsRequest& request, const ListFaceDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFaceDbs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::ListFaceDbsOutcomeCallable FacebodyClient::listFaceDbsCallable(const ListFaceDbsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFaceDbsOutcome()>>(
			[this, request]()
			{
			return this->listFaceDbs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::ListFaceEntitiesOutcome FacebodyClient::listFaceEntities(const ListFaceEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFaceEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFaceEntitiesOutcome(ListFaceEntitiesResult(outcome.result()));
	else
		return ListFaceEntitiesOutcome(outcome.error());
}

void FacebodyClient::listFaceEntitiesAsync(const ListFaceEntitiesRequest& request, const ListFaceEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFaceEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::ListFaceEntitiesOutcomeCallable FacebodyClient::listFaceEntitiesCallable(const ListFaceEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFaceEntitiesOutcome()>>(
			[this, request]()
			{
			return this->listFaceEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::MergeImageFaceOutcome FacebodyClient::mergeImageFace(const MergeImageFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MergeImageFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MergeImageFaceOutcome(MergeImageFaceResult(outcome.result()));
	else
		return MergeImageFaceOutcome(outcome.error());
}

void FacebodyClient::mergeImageFaceAsync(const MergeImageFaceRequest& request, const MergeImageFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mergeImageFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::MergeImageFaceOutcomeCallable FacebodyClient::mergeImageFaceCallable(const MergeImageFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MergeImageFaceOutcome()>>(
			[this, request]()
			{
			return this->mergeImageFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::MonitorExaminationOutcome FacebodyClient::monitorExamination(const MonitorExaminationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MonitorExaminationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MonitorExaminationOutcome(MonitorExaminationResult(outcome.result()));
	else
		return MonitorExaminationOutcome(outcome.error());
}

void FacebodyClient::monitorExaminationAsync(const MonitorExaminationRequest& request, const MonitorExaminationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, monitorExamination(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::MonitorExaminationOutcomeCallable FacebodyClient::monitorExaminationCallable(const MonitorExaminationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MonitorExaminationOutcome()>>(
			[this, request]()
			{
			return this->monitorExamination(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::PedestrianDetectAttributeOutcome FacebodyClient::pedestrianDetectAttribute(const PedestrianDetectAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PedestrianDetectAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PedestrianDetectAttributeOutcome(PedestrianDetectAttributeResult(outcome.result()));
	else
		return PedestrianDetectAttributeOutcome(outcome.error());
}

void FacebodyClient::pedestrianDetectAttributeAsync(const PedestrianDetectAttributeRequest& request, const PedestrianDetectAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pedestrianDetectAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::PedestrianDetectAttributeOutcomeCallable FacebodyClient::pedestrianDetectAttributeCallable(const PedestrianDetectAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PedestrianDetectAttributeOutcome()>>(
			[this, request]()
			{
			return this->pedestrianDetectAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::QueryFaceImageTemplateOutcome FacebodyClient::queryFaceImageTemplate(const QueryFaceImageTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceImageTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceImageTemplateOutcome(QueryFaceImageTemplateResult(outcome.result()));
	else
		return QueryFaceImageTemplateOutcome(outcome.error());
}

void FacebodyClient::queryFaceImageTemplateAsync(const QueryFaceImageTemplateRequest& request, const QueryFaceImageTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceImageTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::QueryFaceImageTemplateOutcomeCallable FacebodyClient::queryFaceImageTemplateCallable(const QueryFaceImageTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceImageTemplateOutcome()>>(
			[this, request]()
			{
			return this->queryFaceImageTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::RecognizeActionOutcome FacebodyClient::recognizeAction(const RecognizeActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeActionOutcome(RecognizeActionResult(outcome.result()));
	else
		return RecognizeActionOutcome(outcome.error());
}

void FacebodyClient::recognizeActionAsync(const RecognizeActionRequest& request, const RecognizeActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::RecognizeActionOutcomeCallable FacebodyClient::recognizeActionCallable(const RecognizeActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeActionOutcome()>>(
			[this, request]()
			{
			return this->recognizeAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::RecognizeExpressionOutcome FacebodyClient::recognizeExpression(const RecognizeExpressionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeExpressionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeExpressionOutcome(RecognizeExpressionResult(outcome.result()));
	else
		return RecognizeExpressionOutcome(outcome.error());
}

void FacebodyClient::recognizeExpressionAsync(const RecognizeExpressionRequest& request, const RecognizeExpressionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeExpression(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::RecognizeExpressionOutcomeCallable FacebodyClient::recognizeExpressionCallable(const RecognizeExpressionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeExpressionOutcome()>>(
			[this, request]()
			{
			return this->recognizeExpression(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::RecognizeFaceOutcome FacebodyClient::recognizeFace(const RecognizeFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeFaceOutcome(RecognizeFaceResult(outcome.result()));
	else
		return RecognizeFaceOutcome(outcome.error());
}

void FacebodyClient::recognizeFaceAsync(const RecognizeFaceRequest& request, const RecognizeFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::RecognizeFaceOutcomeCallable FacebodyClient::recognizeFaceCallable(const RecognizeFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeFaceOutcome()>>(
			[this, request]()
			{
			return this->recognizeFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::RecognizeHandGestureOutcome FacebodyClient::recognizeHandGesture(const RecognizeHandGestureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeHandGestureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeHandGestureOutcome(RecognizeHandGestureResult(outcome.result()));
	else
		return RecognizeHandGestureOutcome(outcome.error());
}

void FacebodyClient::recognizeHandGestureAsync(const RecognizeHandGestureRequest& request, const RecognizeHandGestureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeHandGesture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::RecognizeHandGestureOutcomeCallable FacebodyClient::recognizeHandGestureCallable(const RecognizeHandGestureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeHandGestureOutcome()>>(
			[this, request]()
			{
			return this->recognizeHandGesture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::RecognizePublicFaceOutcome FacebodyClient::recognizePublicFace(const RecognizePublicFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizePublicFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizePublicFaceOutcome(RecognizePublicFaceResult(outcome.result()));
	else
		return RecognizePublicFaceOutcome(outcome.error());
}

void FacebodyClient::recognizePublicFaceAsync(const RecognizePublicFaceRequest& request, const RecognizePublicFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizePublicFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::RecognizePublicFaceOutcomeCallable FacebodyClient::recognizePublicFaceCallable(const RecognizePublicFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizePublicFaceOutcome()>>(
			[this, request]()
			{
			return this->recognizePublicFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::RetouchBodyOutcome FacebodyClient::retouchBody(const RetouchBodyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetouchBodyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetouchBodyOutcome(RetouchBodyResult(outcome.result()));
	else
		return RetouchBodyOutcome(outcome.error());
}

void FacebodyClient::retouchBodyAsync(const RetouchBodyRequest& request, const RetouchBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retouchBody(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::RetouchBodyOutcomeCallable FacebodyClient::retouchBodyCallable(const RetouchBodyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetouchBodyOutcome()>>(
			[this, request]()
			{
			return this->retouchBody(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::RetouchSkinOutcome FacebodyClient::retouchSkin(const RetouchSkinRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetouchSkinOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetouchSkinOutcome(RetouchSkinResult(outcome.result()));
	else
		return RetouchSkinOutcome(outcome.error());
}

void FacebodyClient::retouchSkinAsync(const RetouchSkinRequest& request, const RetouchSkinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retouchSkin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::RetouchSkinOutcomeCallable FacebodyClient::retouchSkinCallable(const RetouchSkinRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetouchSkinOutcome()>>(
			[this, request]()
			{
			return this->retouchSkin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::SearchFaceOutcome FacebodyClient::searchFace(const SearchFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchFaceOutcome(SearchFaceResult(outcome.result()));
	else
		return SearchFaceOutcome(outcome.error());
}

void FacebodyClient::searchFaceAsync(const SearchFaceRequest& request, const SearchFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::SearchFaceOutcomeCallable FacebodyClient::searchFaceCallable(const SearchFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchFaceOutcome()>>(
			[this, request]()
			{
			return this->searchFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::UpdateFaceEntityOutcome FacebodyClient::updateFaceEntity(const UpdateFaceEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFaceEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFaceEntityOutcome(UpdateFaceEntityResult(outcome.result()));
	else
		return UpdateFaceEntityOutcome(outcome.error());
}

void FacebodyClient::updateFaceEntityAsync(const UpdateFaceEntityRequest& request, const UpdateFaceEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFaceEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::UpdateFaceEntityOutcomeCallable FacebodyClient::updateFaceEntityCallable(const UpdateFaceEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFaceEntityOutcome()>>(
			[this, request]()
			{
			return this->updateFaceEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FacebodyClient::VerifyFaceMaskOutcome FacebodyClient::verifyFaceMask(const VerifyFaceMaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyFaceMaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyFaceMaskOutcome(VerifyFaceMaskResult(outcome.result()));
	else
		return VerifyFaceMaskOutcome(outcome.error());
}

void FacebodyClient::verifyFaceMaskAsync(const VerifyFaceMaskRequest& request, const VerifyFaceMaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyFaceMask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FacebodyClient::VerifyFaceMaskOutcomeCallable FacebodyClient::verifyFaceMaskCallable(const VerifyFaceMaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyFaceMaskOutcome()>>(
			[this, request]()
			{
			return this->verifyFaceMask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

