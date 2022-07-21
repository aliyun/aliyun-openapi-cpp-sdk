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

#include <alibabacloud/imm/ImmClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

namespace
{
	const std::string SERVICE_NAME = "imm";
}

ImmClient::ImmClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "imm");
}

ImmClient::ImmClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "imm");
}

ImmClient::ImmClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "imm");
}

ImmClient::~ImmClient()
{}

ImmClient::AddStoryFilesOutcome ImmClient::addStoryFiles(const AddStoryFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddStoryFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddStoryFilesOutcome(AddStoryFilesResult(outcome.result()));
	else
		return AddStoryFilesOutcome(outcome.error());
}

void ImmClient::addStoryFilesAsync(const AddStoryFilesRequest& request, const AddStoryFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addStoryFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::AddStoryFilesOutcomeCallable ImmClient::addStoryFilesCallable(const AddStoryFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddStoryFilesOutcome()>>(
			[this, request]()
			{
			return this->addStoryFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::AttachOSSBucketOutcome ImmClient::attachOSSBucket(const AttachOSSBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachOSSBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachOSSBucketOutcome(AttachOSSBucketResult(outcome.result()));
	else
		return AttachOSSBucketOutcome(outcome.error());
}

void ImmClient::attachOSSBucketAsync(const AttachOSSBucketRequest& request, const AttachOSSBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachOSSBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::AttachOSSBucketOutcomeCallable ImmClient::attachOSSBucketCallable(const AttachOSSBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachOSSBucketOutcome()>>(
			[this, request]()
			{
			return this->attachOSSBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::BatchDeleteFileMetaOutcome ImmClient::batchDeleteFileMeta(const BatchDeleteFileMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteFileMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteFileMetaOutcome(BatchDeleteFileMetaResult(outcome.result()));
	else
		return BatchDeleteFileMetaOutcome(outcome.error());
}

void ImmClient::batchDeleteFileMetaAsync(const BatchDeleteFileMetaRequest& request, const BatchDeleteFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteFileMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::BatchDeleteFileMetaOutcomeCallable ImmClient::batchDeleteFileMetaCallable(const BatchDeleteFileMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteFileMetaOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteFileMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::BatchGetFileMetaOutcome ImmClient::batchGetFileMeta(const BatchGetFileMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetFileMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetFileMetaOutcome(BatchGetFileMetaResult(outcome.result()));
	else
		return BatchGetFileMetaOutcome(outcome.error());
}

void ImmClient::batchGetFileMetaAsync(const BatchGetFileMetaRequest& request, const BatchGetFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetFileMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::BatchGetFileMetaOutcomeCallable ImmClient::batchGetFileMetaCallable(const BatchGetFileMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetFileMetaOutcome()>>(
			[this, request]()
			{
			return this->batchGetFileMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::BatchIndexFileMetaOutcome ImmClient::batchIndexFileMeta(const BatchIndexFileMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchIndexFileMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchIndexFileMetaOutcome(BatchIndexFileMetaResult(outcome.result()));
	else
		return BatchIndexFileMetaOutcome(outcome.error());
}

void ImmClient::batchIndexFileMetaAsync(const BatchIndexFileMetaRequest& request, const BatchIndexFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchIndexFileMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::BatchIndexFileMetaOutcomeCallable ImmClient::batchIndexFileMetaCallable(const BatchIndexFileMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchIndexFileMetaOutcome()>>(
			[this, request]()
			{
			return this->batchIndexFileMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::BatchUpdateFileMetaOutcome ImmClient::batchUpdateFileMeta(const BatchUpdateFileMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUpdateFileMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUpdateFileMetaOutcome(BatchUpdateFileMetaResult(outcome.result()));
	else
		return BatchUpdateFileMetaOutcome(outcome.error());
}

void ImmClient::batchUpdateFileMetaAsync(const BatchUpdateFileMetaRequest& request, const BatchUpdateFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUpdateFileMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::BatchUpdateFileMetaOutcomeCallable ImmClient::batchUpdateFileMetaCallable(const BatchUpdateFileMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUpdateFileMetaOutcome()>>(
			[this, request]()
			{
			return this->batchUpdateFileMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CompareImageFacesOutcome ImmClient::compareImageFaces(const CompareImageFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareImageFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareImageFacesOutcome(CompareImageFacesResult(outcome.result()));
	else
		return CompareImageFacesOutcome(outcome.error());
}

void ImmClient::compareImageFacesAsync(const CompareImageFacesRequest& request, const CompareImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareImageFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CompareImageFacesOutcomeCallable ImmClient::compareImageFacesCallable(const CompareImageFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareImageFacesOutcome()>>(
			[this, request]()
			{
			return this->compareImageFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ConvertOfficeFormatOutcome ImmClient::convertOfficeFormat(const ConvertOfficeFormatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertOfficeFormatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertOfficeFormatOutcome(ConvertOfficeFormatResult(outcome.result()));
	else
		return ConvertOfficeFormatOutcome(outcome.error());
}

void ImmClient::convertOfficeFormatAsync(const ConvertOfficeFormatRequest& request, const ConvertOfficeFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertOfficeFormat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ConvertOfficeFormatOutcomeCallable ImmClient::convertOfficeFormatCallable(const ConvertOfficeFormatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertOfficeFormatOutcome()>>(
			[this, request]()
			{
			return this->convertOfficeFormat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateBindingOutcome ImmClient::createBinding(const CreateBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBindingOutcome(CreateBindingResult(outcome.result()));
	else
		return CreateBindingOutcome(outcome.error());
}

void ImmClient::createBindingAsync(const CreateBindingRequest& request, const CreateBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateBindingOutcomeCallable ImmClient::createBindingCallable(const CreateBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBindingOutcome()>>(
			[this, request]()
			{
			return this->createBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateDatasetOutcome ImmClient::createDataset(const CreateDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatasetOutcome(CreateDatasetResult(outcome.result()));
	else
		return CreateDatasetOutcome(outcome.error());
}

void ImmClient::createDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateDatasetOutcomeCallable ImmClient::createDatasetCallable(const CreateDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasetOutcome()>>(
			[this, request]()
			{
			return this->createDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateDetectVideoLabelsTaskOutcome ImmClient::createDetectVideoLabelsTask(const CreateDetectVideoLabelsTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDetectVideoLabelsTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDetectVideoLabelsTaskOutcome(CreateDetectVideoLabelsTaskResult(outcome.result()));
	else
		return CreateDetectVideoLabelsTaskOutcome(outcome.error());
}

void ImmClient::createDetectVideoLabelsTaskAsync(const CreateDetectVideoLabelsTaskRequest& request, const CreateDetectVideoLabelsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDetectVideoLabelsTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateDetectVideoLabelsTaskOutcomeCallable ImmClient::createDetectVideoLabelsTaskCallable(const CreateDetectVideoLabelsTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDetectVideoLabelsTaskOutcome()>>(
			[this, request]()
			{
			return this->createDetectVideoLabelsTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateFigureClusteringTaskOutcome ImmClient::createFigureClusteringTask(const CreateFigureClusteringTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFigureClusteringTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFigureClusteringTaskOutcome(CreateFigureClusteringTaskResult(outcome.result()));
	else
		return CreateFigureClusteringTaskOutcome(outcome.error());
}

void ImmClient::createFigureClusteringTaskAsync(const CreateFigureClusteringTaskRequest& request, const CreateFigureClusteringTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFigureClusteringTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateFigureClusteringTaskOutcomeCallable ImmClient::createFigureClusteringTaskCallable(const CreateFigureClusteringTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFigureClusteringTaskOutcome()>>(
			[this, request]()
			{
			return this->createFigureClusteringTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateFigureClustersMergingTaskOutcome ImmClient::createFigureClustersMergingTask(const CreateFigureClustersMergingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFigureClustersMergingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFigureClustersMergingTaskOutcome(CreateFigureClustersMergingTaskResult(outcome.result()));
	else
		return CreateFigureClustersMergingTaskOutcome(outcome.error());
}

void ImmClient::createFigureClustersMergingTaskAsync(const CreateFigureClustersMergingTaskRequest& request, const CreateFigureClustersMergingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFigureClustersMergingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateFigureClustersMergingTaskOutcomeCallable ImmClient::createFigureClustersMergingTaskCallable(const CreateFigureClustersMergingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFigureClustersMergingTaskOutcome()>>(
			[this, request]()
			{
			return this->createFigureClustersMergingTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateGrabFrameTaskOutcome ImmClient::createGrabFrameTask(const CreateGrabFrameTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGrabFrameTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGrabFrameTaskOutcome(CreateGrabFrameTaskResult(outcome.result()));
	else
		return CreateGrabFrameTaskOutcome(outcome.error());
}

void ImmClient::createGrabFrameTaskAsync(const CreateGrabFrameTaskRequest& request, const CreateGrabFrameTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGrabFrameTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateGrabFrameTaskOutcomeCallable ImmClient::createGrabFrameTaskCallable(const CreateGrabFrameTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGrabFrameTaskOutcome()>>(
			[this, request]()
			{
			return this->createGrabFrameTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateGroupFacesJobOutcome ImmClient::createGroupFacesJob(const CreateGroupFacesJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupFacesJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupFacesJobOutcome(CreateGroupFacesJobResult(outcome.result()));
	else
		return CreateGroupFacesJobOutcome(outcome.error());
}

void ImmClient::createGroupFacesJobAsync(const CreateGroupFacesJobRequest& request, const CreateGroupFacesJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroupFacesJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateGroupFacesJobOutcomeCallable ImmClient::createGroupFacesJobCallable(const CreateGroupFacesJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupFacesJobOutcome()>>(
			[this, request]()
			{
			return this->createGroupFacesJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateImageModerationTaskOutcome ImmClient::createImageModerationTask(const CreateImageModerationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImageModerationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImageModerationTaskOutcome(CreateImageModerationTaskResult(outcome.result()));
	else
		return CreateImageModerationTaskOutcome(outcome.error());
}

void ImmClient::createImageModerationTaskAsync(const CreateImageModerationTaskRequest& request, const CreateImageModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImageModerationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateImageModerationTaskOutcomeCallable ImmClient::createImageModerationTaskCallable(const CreateImageModerationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageModerationTaskOutcome()>>(
			[this, request]()
			{
			return this->createImageModerationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateImageSplicingTaskOutcome ImmClient::createImageSplicingTask(const CreateImageSplicingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImageSplicingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImageSplicingTaskOutcome(CreateImageSplicingTaskResult(outcome.result()));
	else
		return CreateImageSplicingTaskOutcome(outcome.error());
}

void ImmClient::createImageSplicingTaskAsync(const CreateImageSplicingTaskRequest& request, const CreateImageSplicingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImageSplicingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateImageSplicingTaskOutcomeCallable ImmClient::createImageSplicingTaskCallable(const CreateImageSplicingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImageSplicingTaskOutcome()>>(
			[this, request]()
			{
			return this->createImageSplicingTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateMediaConvertTaskOutcome ImmClient::createMediaConvertTask(const CreateMediaConvertTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMediaConvertTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMediaConvertTaskOutcome(CreateMediaConvertTaskResult(outcome.result()));
	else
		return CreateMediaConvertTaskOutcome(outcome.error());
}

void ImmClient::createMediaConvertTaskAsync(const CreateMediaConvertTaskRequest& request, const CreateMediaConvertTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMediaConvertTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateMediaConvertTaskOutcomeCallable ImmClient::createMediaConvertTaskCallable(const CreateMediaConvertTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMediaConvertTaskOutcome()>>(
			[this, request]()
			{
			return this->createMediaConvertTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateMergeFaceGroupsJobOutcome ImmClient::createMergeFaceGroupsJob(const CreateMergeFaceGroupsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMergeFaceGroupsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMergeFaceGroupsJobOutcome(CreateMergeFaceGroupsJobResult(outcome.result()));
	else
		return CreateMergeFaceGroupsJobOutcome(outcome.error());
}

void ImmClient::createMergeFaceGroupsJobAsync(const CreateMergeFaceGroupsJobRequest& request, const CreateMergeFaceGroupsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMergeFaceGroupsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateMergeFaceGroupsJobOutcomeCallable ImmClient::createMergeFaceGroupsJobCallable(const CreateMergeFaceGroupsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMergeFaceGroupsJobOutcome()>>(
			[this, request]()
			{
			return this->createMergeFaceGroupsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateOfficeConversionTaskOutcome ImmClient::createOfficeConversionTask(const CreateOfficeConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOfficeConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOfficeConversionTaskOutcome(CreateOfficeConversionTaskResult(outcome.result()));
	else
		return CreateOfficeConversionTaskOutcome(outcome.error());
}

void ImmClient::createOfficeConversionTaskAsync(const CreateOfficeConversionTaskRequest& request, const CreateOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOfficeConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateOfficeConversionTaskOutcomeCallable ImmClient::createOfficeConversionTaskCallable(const CreateOfficeConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOfficeConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->createOfficeConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateProjectOutcome ImmClient::createProject(const CreateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectOutcome(CreateProjectResult(outcome.result()));
	else
		return CreateProjectOutcome(outcome.error());
}

void ImmClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateProjectOutcomeCallable ImmClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateSetOutcome ImmClient::createSet(const CreateSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSetOutcome(CreateSetResult(outcome.result()));
	else
		return CreateSetOutcome(outcome.error());
}

void ImmClient::createSetAsync(const CreateSetRequest& request, const CreateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateSetOutcomeCallable ImmClient::createSetCallable(const CreateSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSetOutcome()>>(
			[this, request]()
			{
			return this->createSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateStoryOutcome ImmClient::createStory(const CreateStoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStoryOutcome(CreateStoryResult(outcome.result()));
	else
		return CreateStoryOutcome(outcome.error());
}

void ImmClient::createStoryAsync(const CreateStoryRequest& request, const CreateStoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateStoryOutcomeCallable ImmClient::createStoryCallable(const CreateStoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStoryOutcome()>>(
			[this, request]()
			{
			return this->createStory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateVideoCompressTaskOutcome ImmClient::createVideoCompressTask(const CreateVideoCompressTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVideoCompressTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVideoCompressTaskOutcome(CreateVideoCompressTaskResult(outcome.result()));
	else
		return CreateVideoCompressTaskOutcome(outcome.error());
}

void ImmClient::createVideoCompressTaskAsync(const CreateVideoCompressTaskRequest& request, const CreateVideoCompressTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVideoCompressTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateVideoCompressTaskOutcomeCallable ImmClient::createVideoCompressTaskCallable(const CreateVideoCompressTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVideoCompressTaskOutcome()>>(
			[this, request]()
			{
			return this->createVideoCompressTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::CreateVideoModerationTaskOutcome ImmClient::createVideoModerationTask(const CreateVideoModerationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVideoModerationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVideoModerationTaskOutcome(CreateVideoModerationTaskResult(outcome.result()));
	else
		return CreateVideoModerationTaskOutcome(outcome.error());
}

void ImmClient::createVideoModerationTaskAsync(const CreateVideoModerationTaskRequest& request, const CreateVideoModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVideoModerationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::CreateVideoModerationTaskOutcomeCallable ImmClient::createVideoModerationTaskCallable(const CreateVideoModerationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVideoModerationTaskOutcome()>>(
			[this, request]()
			{
			return this->createVideoModerationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DecodeBlindWatermarkOutcome ImmClient::decodeBlindWatermark(const DecodeBlindWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecodeBlindWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecodeBlindWatermarkOutcome(DecodeBlindWatermarkResult(outcome.result()));
	else
		return DecodeBlindWatermarkOutcome(outcome.error());
}

void ImmClient::decodeBlindWatermarkAsync(const DecodeBlindWatermarkRequest& request, const DecodeBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decodeBlindWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DecodeBlindWatermarkOutcomeCallable ImmClient::decodeBlindWatermarkCallable(const DecodeBlindWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecodeBlindWatermarkOutcome()>>(
			[this, request]()
			{
			return this->decodeBlindWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteBindingOutcome ImmClient::deleteBinding(const DeleteBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBindingOutcome(DeleteBindingResult(outcome.result()));
	else
		return DeleteBindingOutcome(outcome.error());
}

void ImmClient::deleteBindingAsync(const DeleteBindingRequest& request, const DeleteBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteBindingOutcomeCallable ImmClient::deleteBindingCallable(const DeleteBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBindingOutcome()>>(
			[this, request]()
			{
			return this->deleteBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteDatasetOutcome ImmClient::deleteDataset(const DeleteDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatasetOutcome(DeleteDatasetResult(outcome.result()));
	else
		return DeleteDatasetOutcome(outcome.error());
}

void ImmClient::deleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteDatasetOutcomeCallable ImmClient::deleteDatasetCallable(const DeleteDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatasetOutcome()>>(
			[this, request]()
			{
			return this->deleteDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteFileMetaOutcome ImmClient::deleteFileMeta(const DeleteFileMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFileMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFileMetaOutcome(DeleteFileMetaResult(outcome.result()));
	else
		return DeleteFileMetaOutcome(outcome.error());
}

void ImmClient::deleteFileMetaAsync(const DeleteFileMetaRequest& request, const DeleteFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFileMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteFileMetaOutcomeCallable ImmClient::deleteFileMetaCallable(const DeleteFileMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileMetaOutcome()>>(
			[this, request]()
			{
			return this->deleteFileMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteImageOutcome ImmClient::deleteImage(const DeleteImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteImageOutcome(DeleteImageResult(outcome.result()));
	else
		return DeleteImageOutcome(outcome.error());
}

void ImmClient::deleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteImageOutcomeCallable ImmClient::deleteImageCallable(const DeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
			[this, request]()
			{
			return this->deleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteOfficeConversionTaskOutcome ImmClient::deleteOfficeConversionTask(const DeleteOfficeConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOfficeConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOfficeConversionTaskOutcome(DeleteOfficeConversionTaskResult(outcome.result()));
	else
		return DeleteOfficeConversionTaskOutcome(outcome.error());
}

void ImmClient::deleteOfficeConversionTaskAsync(const DeleteOfficeConversionTaskRequest& request, const DeleteOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOfficeConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteOfficeConversionTaskOutcomeCallable ImmClient::deleteOfficeConversionTaskCallable(const DeleteOfficeConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOfficeConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteOfficeConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteProjectOutcome ImmClient::deleteProject(const DeleteProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectOutcome(DeleteProjectResult(outcome.result()));
	else
		return DeleteProjectOutcome(outcome.error());
}

void ImmClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteProjectOutcomeCallable ImmClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteSetOutcome ImmClient::deleteSet(const DeleteSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSetOutcome(DeleteSetResult(outcome.result()));
	else
		return DeleteSetOutcome(outcome.error());
}

void ImmClient::deleteSetAsync(const DeleteSetRequest& request, const DeleteSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteSetOutcomeCallable ImmClient::deleteSetCallable(const DeleteSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSetOutcome()>>(
			[this, request]()
			{
			return this->deleteSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteStoryOutcome ImmClient::deleteStory(const DeleteStoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStoryOutcome(DeleteStoryResult(outcome.result()));
	else
		return DeleteStoryOutcome(outcome.error());
}

void ImmClient::deleteStoryAsync(const DeleteStoryRequest& request, const DeleteStoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteStoryOutcomeCallable ImmClient::deleteStoryCallable(const DeleteStoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStoryOutcome()>>(
			[this, request]()
			{
			return this->deleteStory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteVideoOutcome ImmClient::deleteVideo(const DeleteVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVideoOutcome(DeleteVideoResult(outcome.result()));
	else
		return DeleteVideoOutcome(outcome.error());
}

void ImmClient::deleteVideoAsync(const DeleteVideoRequest& request, const DeleteVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteVideoOutcomeCallable ImmClient::deleteVideoCallable(const DeleteVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVideoOutcome()>>(
			[this, request]()
			{
			return this->deleteVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DeleteVideoTaskOutcome ImmClient::deleteVideoTask(const DeleteVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVideoTaskOutcome(DeleteVideoTaskResult(outcome.result()));
	else
		return DeleteVideoTaskOutcome(outcome.error());
}

void ImmClient::deleteVideoTaskAsync(const DeleteVideoTaskRequest& request, const DeleteVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DeleteVideoTaskOutcomeCallable ImmClient::deleteVideoTaskCallable(const DeleteVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetachOSSBucketOutcome ImmClient::detachOSSBucket(const DetachOSSBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachOSSBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachOSSBucketOutcome(DetachOSSBucketResult(outcome.result()));
	else
		return DetachOSSBucketOutcome(outcome.error());
}

void ImmClient::detachOSSBucketAsync(const DetachOSSBucketRequest& request, const DetachOSSBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachOSSBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetachOSSBucketOutcomeCallable ImmClient::detachOSSBucketCallable(const DetachOSSBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachOSSBucketOutcome()>>(
			[this, request]()
			{
			return this->detachOSSBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageBodiesOutcome ImmClient::detectImageBodies(const DetectImageBodiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageBodiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageBodiesOutcome(DetectImageBodiesResult(outcome.result()));
	else
		return DetectImageBodiesOutcome(outcome.error());
}

void ImmClient::detectImageBodiesAsync(const DetectImageBodiesRequest& request, const DetectImageBodiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageBodies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageBodiesOutcomeCallable ImmClient::detectImageBodiesCallable(const DetectImageBodiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageBodiesOutcome()>>(
			[this, request]()
			{
			return this->detectImageBodies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageCodesOutcome ImmClient::detectImageCodes(const DetectImageCodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageCodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageCodesOutcome(DetectImageCodesResult(outcome.result()));
	else
		return DetectImageCodesOutcome(outcome.error());
}

void ImmClient::detectImageCodesAsync(const DetectImageCodesRequest& request, const DetectImageCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageCodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageCodesOutcomeCallable ImmClient::detectImageCodesCallable(const DetectImageCodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageCodesOutcome()>>(
			[this, request]()
			{
			return this->detectImageCodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageCroppingOutcome ImmClient::detectImageCropping(const DetectImageCroppingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageCroppingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageCroppingOutcome(DetectImageCroppingResult(outcome.result()));
	else
		return DetectImageCroppingOutcome(outcome.error());
}

void ImmClient::detectImageCroppingAsync(const DetectImageCroppingRequest& request, const DetectImageCroppingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageCropping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageCroppingOutcomeCallable ImmClient::detectImageCroppingCallable(const DetectImageCroppingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageCroppingOutcome()>>(
			[this, request]()
			{
			return this->detectImageCropping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageFacesOutcome ImmClient::detectImageFaces(const DetectImageFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageFacesOutcome(DetectImageFacesResult(outcome.result()));
	else
		return DetectImageFacesOutcome(outcome.error());
}

void ImmClient::detectImageFacesAsync(const DetectImageFacesRequest& request, const DetectImageFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageFacesOutcomeCallable ImmClient::detectImageFacesCallable(const DetectImageFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageFacesOutcome()>>(
			[this, request]()
			{
			return this->detectImageFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageLabelsOutcome ImmClient::detectImageLabels(const DetectImageLabelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageLabelsOutcome(DetectImageLabelsResult(outcome.result()));
	else
		return DetectImageLabelsOutcome(outcome.error());
}

void ImmClient::detectImageLabelsAsync(const DetectImageLabelsRequest& request, const DetectImageLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageLabelsOutcomeCallable ImmClient::detectImageLabelsCallable(const DetectImageLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageLabelsOutcome()>>(
			[this, request]()
			{
			return this->detectImageLabels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageQRCodesOutcome ImmClient::detectImageQRCodes(const DetectImageQRCodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageQRCodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageQRCodesOutcome(DetectImageQRCodesResult(outcome.result()));
	else
		return DetectImageQRCodesOutcome(outcome.error());
}

void ImmClient::detectImageQRCodesAsync(const DetectImageQRCodesRequest& request, const DetectImageQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageQRCodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageQRCodesOutcomeCallable ImmClient::detectImageQRCodesCallable(const DetectImageQRCodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageQRCodesOutcome()>>(
			[this, request]()
			{
			return this->detectImageQRCodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageScoreOutcome ImmClient::detectImageScore(const DetectImageScoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageScoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageScoreOutcome(DetectImageScoreResult(outcome.result()));
	else
		return DetectImageScoreOutcome(outcome.error());
}

void ImmClient::detectImageScoreAsync(const DetectImageScoreRequest& request, const DetectImageScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageScore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageScoreOutcomeCallable ImmClient::detectImageScoreCallable(const DetectImageScoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageScoreOutcome()>>(
			[this, request]()
			{
			return this->detectImageScore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectImageTagsOutcome ImmClient::detectImageTags(const DetectImageTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectImageTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectImageTagsOutcome(DetectImageTagsResult(outcome.result()));
	else
		return DetectImageTagsOutcome(outcome.error());
}

void ImmClient::detectImageTagsAsync(const DetectImageTagsRequest& request, const DetectImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectImageTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectImageTagsOutcomeCallable ImmClient::detectImageTagsCallable(const DetectImageTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectImageTagsOutcome()>>(
			[this, request]()
			{
			return this->detectImageTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectQRCodesOutcome ImmClient::detectQRCodes(const DetectQRCodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectQRCodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectQRCodesOutcome(DetectQRCodesResult(outcome.result()));
	else
		return DetectQRCodesOutcome(outcome.error());
}

void ImmClient::detectQRCodesAsync(const DetectQRCodesRequest& request, const DetectQRCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectQRCodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectQRCodesOutcomeCallable ImmClient::detectQRCodesCallable(const DetectQRCodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectQRCodesOutcome()>>(
			[this, request]()
			{
			return this->detectQRCodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::DetectTextAnomalyOutcome ImmClient::detectTextAnomaly(const DetectTextAnomalyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectTextAnomalyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectTextAnomalyOutcome(DetectTextAnomalyResult(outcome.result()));
	else
		return DetectTextAnomalyOutcome(outcome.error());
}

void ImmClient::detectTextAnomalyAsync(const DetectTextAnomalyRequest& request, const DetectTextAnomalyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectTextAnomaly(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::DetectTextAnomalyOutcomeCallable ImmClient::detectTextAnomalyCallable(const DetectTextAnomalyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectTextAnomalyOutcome()>>(
			[this, request]()
			{
			return this->detectTextAnomaly(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::EncodeBlindWatermarkOutcome ImmClient::encodeBlindWatermark(const EncodeBlindWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EncodeBlindWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EncodeBlindWatermarkOutcome(EncodeBlindWatermarkResult(outcome.result()));
	else
		return EncodeBlindWatermarkOutcome(outcome.error());
}

void ImmClient::encodeBlindWatermarkAsync(const EncodeBlindWatermarkRequest& request, const EncodeBlindWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, encodeBlindWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::EncodeBlindWatermarkOutcomeCallable ImmClient::encodeBlindWatermarkCallable(const EncodeBlindWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EncodeBlindWatermarkOutcome()>>(
			[this, request]()
			{
			return this->encodeBlindWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::FindImagesOutcome ImmClient::findImages(const FindImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindImagesOutcome(FindImagesResult(outcome.result()));
	else
		return FindImagesOutcome(outcome.error());
}

void ImmClient::findImagesAsync(const FindImagesRequest& request, const FindImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::FindImagesOutcomeCallable ImmClient::findImagesCallable(const FindImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindImagesOutcome()>>(
			[this, request]()
			{
			return this->findImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::FindSimilarFacesOutcome ImmClient::findSimilarFaces(const FindSimilarFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindSimilarFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindSimilarFacesOutcome(FindSimilarFacesResult(outcome.result()));
	else
		return FindSimilarFacesOutcome(outcome.error());
}

void ImmClient::findSimilarFacesAsync(const FindSimilarFacesRequest& request, const FindSimilarFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findSimilarFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::FindSimilarFacesOutcomeCallable ImmClient::findSimilarFacesCallable(const FindSimilarFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindSimilarFacesOutcome()>>(
			[this, request]()
			{
			return this->findSimilarFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::FuzzyQueryOutcome ImmClient::fuzzyQuery(const FuzzyQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FuzzyQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FuzzyQueryOutcome(FuzzyQueryResult(outcome.result()));
	else
		return FuzzyQueryOutcome(outcome.error());
}

void ImmClient::fuzzyQueryAsync(const FuzzyQueryRequest& request, const FuzzyQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fuzzyQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::FuzzyQueryOutcomeCallable ImmClient::fuzzyQueryCallable(const FuzzyQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FuzzyQueryOutcome()>>(
			[this, request]()
			{
			return this->fuzzyQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetBindingOutcome ImmClient::getBinding(const GetBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBindingOutcome(GetBindingResult(outcome.result()));
	else
		return GetBindingOutcome(outcome.error());
}

void ImmClient::getBindingAsync(const GetBindingRequest& request, const GetBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetBindingOutcomeCallable ImmClient::getBindingCallable(const GetBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBindingOutcome()>>(
			[this, request]()
			{
			return this->getBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetDatasetOutcome ImmClient::getDataset(const GetDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatasetOutcome(GetDatasetResult(outcome.result()));
	else
		return GetDatasetOutcome(outcome.error());
}

void ImmClient::getDatasetAsync(const GetDatasetRequest& request, const GetDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetDatasetOutcomeCallable ImmClient::getDatasetCallable(const GetDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatasetOutcome()>>(
			[this, request]()
			{
			return this->getDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetDetectVideoLabelsResultOutcome ImmClient::getDetectVideoLabelsResult(const GetDetectVideoLabelsResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDetectVideoLabelsResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDetectVideoLabelsResultOutcome(GetDetectVideoLabelsResultResult(outcome.result()));
	else
		return GetDetectVideoLabelsResultOutcome(outcome.error());
}

void ImmClient::getDetectVideoLabelsResultAsync(const GetDetectVideoLabelsResultRequest& request, const GetDetectVideoLabelsResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDetectVideoLabelsResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetDetectVideoLabelsResultOutcomeCallable ImmClient::getDetectVideoLabelsResultCallable(const GetDetectVideoLabelsResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDetectVideoLabelsResultOutcome()>>(
			[this, request]()
			{
			return this->getDetectVideoLabelsResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetFigureClusterOutcome ImmClient::getFigureCluster(const GetFigureClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFigureClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFigureClusterOutcome(GetFigureClusterResult(outcome.result()));
	else
		return GetFigureClusterOutcome(outcome.error());
}

void ImmClient::getFigureClusterAsync(const GetFigureClusterRequest& request, const GetFigureClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFigureCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetFigureClusterOutcomeCallable ImmClient::getFigureClusterCallable(const GetFigureClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFigureClusterOutcome()>>(
			[this, request]()
			{
			return this->getFigureCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetFileMetaOutcome ImmClient::getFileMeta(const GetFileMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileMetaOutcome(GetFileMetaResult(outcome.result()));
	else
		return GetFileMetaOutcome(outcome.error());
}

void ImmClient::getFileMetaAsync(const GetFileMetaRequest& request, const GetFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetFileMetaOutcomeCallable ImmClient::getFileMetaCallable(const GetFileMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileMetaOutcome()>>(
			[this, request]()
			{
			return this->getFileMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetImageOutcome ImmClient::getImage(const GetImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageOutcome(GetImageResult(outcome.result()));
	else
		return GetImageOutcome(outcome.error());
}

void ImmClient::getImageAsync(const GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetImageOutcomeCallable ImmClient::getImageCallable(const GetImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageOutcome()>>(
			[this, request]()
			{
			return this->getImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetImageCroppingSuggestionsOutcome ImmClient::getImageCroppingSuggestions(const GetImageCroppingSuggestionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageCroppingSuggestionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageCroppingSuggestionsOutcome(GetImageCroppingSuggestionsResult(outcome.result()));
	else
		return GetImageCroppingSuggestionsOutcome(outcome.error());
}

void ImmClient::getImageCroppingSuggestionsAsync(const GetImageCroppingSuggestionsRequest& request, const GetImageCroppingSuggestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImageCroppingSuggestions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetImageCroppingSuggestionsOutcomeCallable ImmClient::getImageCroppingSuggestionsCallable(const GetImageCroppingSuggestionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageCroppingSuggestionsOutcome()>>(
			[this, request]()
			{
			return this->getImageCroppingSuggestions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetImageQualityOutcome ImmClient::getImageQuality(const GetImageQualityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageQualityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageQualityOutcome(GetImageQualityResult(outcome.result()));
	else
		return GetImageQualityOutcome(outcome.error());
}

void ImmClient::getImageQualityAsync(const GetImageQualityRequest& request, const GetImageQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImageQuality(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetImageQualityOutcomeCallable ImmClient::getImageQualityCallable(const GetImageQualityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageQualityOutcome()>>(
			[this, request]()
			{
			return this->getImageQuality(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetMediaMetaOutcome ImmClient::getMediaMeta(const GetMediaMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaMetaOutcome(GetMediaMetaResult(outcome.result()));
	else
		return GetMediaMetaOutcome(outcome.error());
}

void ImmClient::getMediaMetaAsync(const GetMediaMetaRequest& request, const GetMediaMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetMediaMetaOutcomeCallable ImmClient::getMediaMetaCallable(const GetMediaMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaMetaOutcome()>>(
			[this, request]()
			{
			return this->getMediaMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetOSSBucketAttachmentOutcome ImmClient::getOSSBucketAttachment(const GetOSSBucketAttachmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOSSBucketAttachmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOSSBucketAttachmentOutcome(GetOSSBucketAttachmentResult(outcome.result()));
	else
		return GetOSSBucketAttachmentOutcome(outcome.error());
}

void ImmClient::getOSSBucketAttachmentAsync(const GetOSSBucketAttachmentRequest& request, const GetOSSBucketAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOSSBucketAttachment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetOSSBucketAttachmentOutcomeCallable ImmClient::getOSSBucketAttachmentCallable(const GetOSSBucketAttachmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOSSBucketAttachmentOutcome()>>(
			[this, request]()
			{
			return this->getOSSBucketAttachment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetOfficeConversionTaskOutcome ImmClient::getOfficeConversionTask(const GetOfficeConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOfficeConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOfficeConversionTaskOutcome(GetOfficeConversionTaskResult(outcome.result()));
	else
		return GetOfficeConversionTaskOutcome(outcome.error());
}

void ImmClient::getOfficeConversionTaskAsync(const GetOfficeConversionTaskRequest& request, const GetOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOfficeConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetOfficeConversionTaskOutcomeCallable ImmClient::getOfficeConversionTaskCallable(const GetOfficeConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOfficeConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->getOfficeConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetOfficePreviewURLOutcome ImmClient::getOfficePreviewURL(const GetOfficePreviewURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOfficePreviewURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOfficePreviewURLOutcome(GetOfficePreviewURLResult(outcome.result()));
	else
		return GetOfficePreviewURLOutcome(outcome.error());
}

void ImmClient::getOfficePreviewURLAsync(const GetOfficePreviewURLRequest& request, const GetOfficePreviewURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOfficePreviewURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetOfficePreviewURLOutcomeCallable ImmClient::getOfficePreviewURLCallable(const GetOfficePreviewURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOfficePreviewURLOutcome()>>(
			[this, request]()
			{
			return this->getOfficePreviewURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetProjectOutcome ImmClient::getProject(const GetProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectOutcome(GetProjectResult(outcome.result()));
	else
		return GetProjectOutcome(outcome.error());
}

void ImmClient::getProjectAsync(const GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetProjectOutcomeCallable ImmClient::getProjectCallable(const GetProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectOutcome()>>(
			[this, request]()
			{
			return this->getProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetSetOutcome ImmClient::getSet(const GetSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSetOutcome(GetSetResult(outcome.result()));
	else
		return GetSetOutcome(outcome.error());
}

void ImmClient::getSetAsync(const GetSetRequest& request, const GetSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetSetOutcomeCallable ImmClient::getSetCallable(const GetSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSetOutcome()>>(
			[this, request]()
			{
			return this->getSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetStoryOutcome ImmClient::getStory(const GetStoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStoryOutcome(GetStoryResult(outcome.result()));
	else
		return GetStoryOutcome(outcome.error());
}

void ImmClient::getStoryAsync(const GetStoryRequest& request, const GetStoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetStoryOutcomeCallable ImmClient::getStoryCallable(const GetStoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStoryOutcome()>>(
			[this, request]()
			{
			return this->getStory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetTaskOutcome ImmClient::getTask(const GetTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskOutcome(GetTaskResult(outcome.result()));
	else
		return GetTaskOutcome(outcome.error());
}

void ImmClient::getTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetTaskOutcomeCallable ImmClient::getTaskCallable(const GetTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskOutcome()>>(
			[this, request]()
			{
			return this->getTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetVideoOutcome ImmClient::getVideo(const GetVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoOutcome(GetVideoResult(outcome.result()));
	else
		return GetVideoOutcome(outcome.error());
}

void ImmClient::getVideoAsync(const GetVideoRequest& request, const GetVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetVideoOutcomeCallable ImmClient::getVideoCallable(const GetVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoOutcome()>>(
			[this, request]()
			{
			return this->getVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetVideoTaskOutcome ImmClient::getVideoTask(const GetVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoTaskOutcome(GetVideoTaskResult(outcome.result()));
	else
		return GetVideoTaskOutcome(outcome.error());
}

void ImmClient::getVideoTaskAsync(const GetVideoTaskRequest& request, const GetVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetVideoTaskOutcomeCallable ImmClient::getVideoTaskCallable(const GetVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->getVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::GetWebofficeURLOutcome ImmClient::getWebofficeURL(const GetWebofficeURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWebofficeURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWebofficeURLOutcome(GetWebofficeURLResult(outcome.result()));
	else
		return GetWebofficeURLOutcome(outcome.error());
}

void ImmClient::getWebofficeURLAsync(const GetWebofficeURLRequest& request, const GetWebofficeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWebofficeURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::GetWebofficeURLOutcomeCallable ImmClient::getWebofficeURLCallable(const GetWebofficeURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWebofficeURLOutcome()>>(
			[this, request]()
			{
			return this->getWebofficeURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::IndexFileMetaOutcome ImmClient::indexFileMeta(const IndexFileMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IndexFileMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IndexFileMetaOutcome(IndexFileMetaResult(outcome.result()));
	else
		return IndexFileMetaOutcome(outcome.error());
}

void ImmClient::indexFileMetaAsync(const IndexFileMetaRequest& request, const IndexFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, indexFileMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::IndexFileMetaOutcomeCallable ImmClient::indexFileMetaCallable(const IndexFileMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IndexFileMetaOutcome()>>(
			[this, request]()
			{
			return this->indexFileMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::IndexImageOutcome ImmClient::indexImage(const IndexImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IndexImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IndexImageOutcome(IndexImageResult(outcome.result()));
	else
		return IndexImageOutcome(outcome.error());
}

void ImmClient::indexImageAsync(const IndexImageRequest& request, const IndexImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, indexImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::IndexImageOutcomeCallable ImmClient::indexImageCallable(const IndexImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IndexImageOutcome()>>(
			[this, request]()
			{
			return this->indexImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::IndexVideoOutcome ImmClient::indexVideo(const IndexVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IndexVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IndexVideoOutcome(IndexVideoResult(outcome.result()));
	else
		return IndexVideoOutcome(outcome.error());
}

void ImmClient::indexVideoAsync(const IndexVideoRequest& request, const IndexVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, indexVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::IndexVideoOutcomeCallable ImmClient::indexVideoCallable(const IndexVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IndexVideoOutcome()>>(
			[this, request]()
			{
			return this->indexVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListBindingsOutcome ImmClient::listBindings(const ListBindingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBindingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBindingsOutcome(ListBindingsResult(outcome.result()));
	else
		return ListBindingsOutcome(outcome.error());
}

void ImmClient::listBindingsAsync(const ListBindingsRequest& request, const ListBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBindings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListBindingsOutcomeCallable ImmClient::listBindingsCallable(const ListBindingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBindingsOutcome()>>(
			[this, request]()
			{
			return this->listBindings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListDatasetsOutcome ImmClient::listDatasets(const ListDatasetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasetsOutcome(ListDatasetsResult(outcome.result()));
	else
		return ListDatasetsOutcome(outcome.error());
}

void ImmClient::listDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListDatasetsOutcomeCallable ImmClient::listDatasetsCallable(const ListDatasetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasetsOutcome()>>(
			[this, request]()
			{
			return this->listDatasets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListFaceGroupsOutcome ImmClient::listFaceGroups(const ListFaceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFaceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFaceGroupsOutcome(ListFaceGroupsResult(outcome.result()));
	else
		return ListFaceGroupsOutcome(outcome.error());
}

void ImmClient::listFaceGroupsAsync(const ListFaceGroupsRequest& request, const ListFaceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFaceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListFaceGroupsOutcomeCallable ImmClient::listFaceGroupsCallable(const ListFaceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFaceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listFaceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListImagesOutcome ImmClient::listImages(const ListImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImagesOutcome(ListImagesResult(outcome.result()));
	else
		return ListImagesOutcome(outcome.error());
}

void ImmClient::listImagesAsync(const ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListImagesOutcomeCallable ImmClient::listImagesCallable(const ListImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImagesOutcome()>>(
			[this, request]()
			{
			return this->listImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListOfficeConversionTaskOutcome ImmClient::listOfficeConversionTask(const ListOfficeConversionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOfficeConversionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOfficeConversionTaskOutcome(ListOfficeConversionTaskResult(outcome.result()));
	else
		return ListOfficeConversionTaskOutcome(outcome.error());
}

void ImmClient::listOfficeConversionTaskAsync(const ListOfficeConversionTaskRequest& request, const ListOfficeConversionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOfficeConversionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListOfficeConversionTaskOutcomeCallable ImmClient::listOfficeConversionTaskCallable(const ListOfficeConversionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOfficeConversionTaskOutcome()>>(
			[this, request]()
			{
			return this->listOfficeConversionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListProjectsOutcome ImmClient::listProjects(const ListProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectsOutcome(ListProjectsResult(outcome.result()));
	else
		return ListProjectsOutcome(outcome.error());
}

void ImmClient::listProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListProjectsOutcomeCallable ImmClient::listProjectsCallable(const ListProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectsOutcome()>>(
			[this, request]()
			{
			return this->listProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListRegionsOutcome ImmClient::listRegions(const ListRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegionsOutcome(ListRegionsResult(outcome.result()));
	else
		return ListRegionsOutcome(outcome.error());
}

void ImmClient::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListRegionsOutcomeCallable ImmClient::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListSetTagsOutcome ImmClient::listSetTags(const ListSetTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSetTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSetTagsOutcome(ListSetTagsResult(outcome.result()));
	else
		return ListSetTagsOutcome(outcome.error());
}

void ImmClient::listSetTagsAsync(const ListSetTagsRequest& request, const ListSetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSetTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListSetTagsOutcomeCallable ImmClient::listSetTagsCallable(const ListSetTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSetTagsOutcome()>>(
			[this, request]()
			{
			return this->listSetTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListSetsOutcome ImmClient::listSets(const ListSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSetsOutcome(ListSetsResult(outcome.result()));
	else
		return ListSetsOutcome(outcome.error());
}

void ImmClient::listSetsAsync(const ListSetsRequest& request, const ListSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListSetsOutcomeCallable ImmClient::listSetsCallable(const ListSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSetsOutcome()>>(
			[this, request]()
			{
			return this->listSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListTasksOutcome ImmClient::listTasks(const ListTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTasksOutcome(ListTasksResult(outcome.result()));
	else
		return ListTasksOutcome(outcome.error());
}

void ImmClient::listTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListTasksOutcomeCallable ImmClient::listTasksCallable(const ListTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
			[this, request]()
			{
			return this->listTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListVideoAudiosOutcome ImmClient::listVideoAudios(const ListVideoAudiosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVideoAudiosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVideoAudiosOutcome(ListVideoAudiosResult(outcome.result()));
	else
		return ListVideoAudiosOutcome(outcome.error());
}

void ImmClient::listVideoAudiosAsync(const ListVideoAudiosRequest& request, const ListVideoAudiosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVideoAudios(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListVideoAudiosOutcomeCallable ImmClient::listVideoAudiosCallable(const ListVideoAudiosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVideoAudiosOutcome()>>(
			[this, request]()
			{
			return this->listVideoAudios(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListVideoFramesOutcome ImmClient::listVideoFrames(const ListVideoFramesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVideoFramesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVideoFramesOutcome(ListVideoFramesResult(outcome.result()));
	else
		return ListVideoFramesOutcome(outcome.error());
}

void ImmClient::listVideoFramesAsync(const ListVideoFramesRequest& request, const ListVideoFramesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVideoFrames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListVideoFramesOutcomeCallable ImmClient::listVideoFramesCallable(const ListVideoFramesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVideoFramesOutcome()>>(
			[this, request]()
			{
			return this->listVideoFrames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListVideoTasksOutcome ImmClient::listVideoTasks(const ListVideoTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVideoTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVideoTasksOutcome(ListVideoTasksResult(outcome.result()));
	else
		return ListVideoTasksOutcome(outcome.error());
}

void ImmClient::listVideoTasksAsync(const ListVideoTasksRequest& request, const ListVideoTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVideoTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListVideoTasksOutcomeCallable ImmClient::listVideoTasksCallable(const ListVideoTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVideoTasksOutcome()>>(
			[this, request]()
			{
			return this->listVideoTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ListVideosOutcome ImmClient::listVideos(const ListVideosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVideosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVideosOutcome(ListVideosResult(outcome.result()));
	else
		return ListVideosOutcome(outcome.error());
}

void ImmClient::listVideosAsync(const ListVideosRequest& request, const ListVideosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVideos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ListVideosOutcomeCallable ImmClient::listVideosCallable(const ListVideosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVideosOutcome()>>(
			[this, request]()
			{
			return this->listVideos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::MergeFigureClustersOutcome ImmClient::mergeFigureClusters(const MergeFigureClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MergeFigureClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MergeFigureClustersOutcome(MergeFigureClustersResult(outcome.result()));
	else
		return MergeFigureClustersOutcome(outcome.error());
}

void ImmClient::mergeFigureClustersAsync(const MergeFigureClustersRequest& request, const MergeFigureClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mergeFigureClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::MergeFigureClustersOutcomeCallable ImmClient::mergeFigureClustersCallable(const MergeFigureClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MergeFigureClustersOutcome()>>(
			[this, request]()
			{
			return this->mergeFigureClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::OpenImmServiceOutcome ImmClient::openImmService(const OpenImmServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenImmServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenImmServiceOutcome(OpenImmServiceResult(outcome.result()));
	else
		return OpenImmServiceOutcome(outcome.error());
}

void ImmClient::openImmServiceAsync(const OpenImmServiceRequest& request, const OpenImmServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openImmService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::OpenImmServiceOutcomeCallable ImmClient::openImmServiceCallable(const OpenImmServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenImmServiceOutcome()>>(
			[this, request]()
			{
			return this->openImmService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::PutProjectOutcome ImmClient::putProject(const PutProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutProjectOutcome(PutProjectResult(outcome.result()));
	else
		return PutProjectOutcome(outcome.error());
}

void ImmClient::putProjectAsync(const PutProjectRequest& request, const PutProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::PutProjectOutcomeCallable ImmClient::putProjectCallable(const PutProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutProjectOutcome()>>(
			[this, request]()
			{
			return this->putProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::QueryFigureClustersOutcome ImmClient::queryFigureClusters(const QueryFigureClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFigureClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFigureClustersOutcome(QueryFigureClustersResult(outcome.result()));
	else
		return QueryFigureClustersOutcome(outcome.error());
}

void ImmClient::queryFigureClustersAsync(const QueryFigureClustersRequest& request, const QueryFigureClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFigureClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::QueryFigureClustersOutcomeCallable ImmClient::queryFigureClustersCallable(const QueryFigureClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFigureClustersOutcome()>>(
			[this, request]()
			{
			return this->queryFigureClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::QueryStoriesOutcome ImmClient::queryStories(const QueryStoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStoriesOutcome(QueryStoriesResult(outcome.result()));
	else
		return QueryStoriesOutcome(outcome.error());
}

void ImmClient::queryStoriesAsync(const QueryStoriesRequest& request, const QueryStoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::QueryStoriesOutcomeCallable ImmClient::queryStoriesCallable(const QueryStoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStoriesOutcome()>>(
			[this, request]()
			{
			return this->queryStories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::RefreshOfficePreviewTokenOutcome ImmClient::refreshOfficePreviewToken(const RefreshOfficePreviewTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshOfficePreviewTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshOfficePreviewTokenOutcome(RefreshOfficePreviewTokenResult(outcome.result()));
	else
		return RefreshOfficePreviewTokenOutcome(outcome.error());
}

void ImmClient::refreshOfficePreviewTokenAsync(const RefreshOfficePreviewTokenRequest& request, const RefreshOfficePreviewTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshOfficePreviewToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::RefreshOfficePreviewTokenOutcomeCallable ImmClient::refreshOfficePreviewTokenCallable(const RefreshOfficePreviewTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshOfficePreviewTokenOutcome()>>(
			[this, request]()
			{
			return this->refreshOfficePreviewToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::RefreshWebofficeTokenOutcome ImmClient::refreshWebofficeToken(const RefreshWebofficeTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshWebofficeTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshWebofficeTokenOutcome(RefreshWebofficeTokenResult(outcome.result()));
	else
		return RefreshWebofficeTokenOutcome(outcome.error());
}

void ImmClient::refreshWebofficeTokenAsync(const RefreshWebofficeTokenRequest& request, const RefreshWebofficeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshWebofficeToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::RefreshWebofficeTokenOutcomeCallable ImmClient::refreshWebofficeTokenCallable(const RefreshWebofficeTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshWebofficeTokenOutcome()>>(
			[this, request]()
			{
			return this->refreshWebofficeToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::RemoveStoryFilesOutcome ImmClient::removeStoryFiles(const RemoveStoryFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveStoryFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveStoryFilesOutcome(RemoveStoryFilesResult(outcome.result()));
	else
		return RemoveStoryFilesOutcome(outcome.error());
}

void ImmClient::removeStoryFilesAsync(const RemoveStoryFilesRequest& request, const RemoveStoryFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeStoryFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::RemoveStoryFilesOutcomeCallable ImmClient::removeStoryFilesCallable(const RemoveStoryFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveStoryFilesOutcome()>>(
			[this, request]()
			{
			return this->removeStoryFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::ResumeBindingOutcome ImmClient::resumeBinding(const ResumeBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeBindingOutcome(ResumeBindingResult(outcome.result()));
	else
		return ResumeBindingOutcome(outcome.error());
}

void ImmClient::resumeBindingAsync(const ResumeBindingRequest& request, const ResumeBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::ResumeBindingOutcomeCallable ImmClient::resumeBindingCallable(const ResumeBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeBindingOutcome()>>(
			[this, request]()
			{
			return this->resumeBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::SemanticQueryOutcome ImmClient::semanticQuery(const SemanticQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SemanticQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SemanticQueryOutcome(SemanticQueryResult(outcome.result()));
	else
		return SemanticQueryOutcome(outcome.error());
}

void ImmClient::semanticQueryAsync(const SemanticQueryRequest& request, const SemanticQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, semanticQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::SemanticQueryOutcomeCallable ImmClient::semanticQueryCallable(const SemanticQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SemanticQueryOutcome()>>(
			[this, request]()
			{
			return this->semanticQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::SimpleQueryOutcome ImmClient::simpleQuery(const SimpleQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SimpleQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SimpleQueryOutcome(SimpleQueryResult(outcome.result()));
	else
		return SimpleQueryOutcome(outcome.error());
}

void ImmClient::simpleQueryAsync(const SimpleQueryRequest& request, const SimpleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, simpleQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::SimpleQueryOutcomeCallable ImmClient::simpleQueryCallable(const SimpleQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SimpleQueryOutcome()>>(
			[this, request]()
			{
			return this->simpleQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::StopBindingOutcome ImmClient::stopBinding(const StopBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopBindingOutcome(StopBindingResult(outcome.result()));
	else
		return StopBindingOutcome(outcome.error());
}

void ImmClient::stopBindingAsync(const StopBindingRequest& request, const StopBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::StopBindingOutcomeCallable ImmClient::stopBindingCallable(const StopBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopBindingOutcome()>>(
			[this, request]()
			{
			return this->stopBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateDatasetOutcome ImmClient::updateDataset(const UpdateDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDatasetOutcome(UpdateDatasetResult(outcome.result()));
	else
		return UpdateDatasetOutcome(outcome.error());
}

void ImmClient::updateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateDatasetOutcomeCallable ImmClient::updateDatasetCallable(const UpdateDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDatasetOutcome()>>(
			[this, request]()
			{
			return this->updateDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateFaceGroupOutcome ImmClient::updateFaceGroup(const UpdateFaceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFaceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFaceGroupOutcome(UpdateFaceGroupResult(outcome.result()));
	else
		return UpdateFaceGroupOutcome(outcome.error());
}

void ImmClient::updateFaceGroupAsync(const UpdateFaceGroupRequest& request, const UpdateFaceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFaceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateFaceGroupOutcomeCallable ImmClient::updateFaceGroupCallable(const UpdateFaceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFaceGroupOutcome()>>(
			[this, request]()
			{
			return this->updateFaceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateFigureClusterOutcome ImmClient::updateFigureCluster(const UpdateFigureClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFigureClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFigureClusterOutcome(UpdateFigureClusterResult(outcome.result()));
	else
		return UpdateFigureClusterOutcome(outcome.error());
}

void ImmClient::updateFigureClusterAsync(const UpdateFigureClusterRequest& request, const UpdateFigureClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFigureCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateFigureClusterOutcomeCallable ImmClient::updateFigureClusterCallable(const UpdateFigureClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFigureClusterOutcome()>>(
			[this, request]()
			{
			return this->updateFigureCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateFileMetaOutcome ImmClient::updateFileMeta(const UpdateFileMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFileMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFileMetaOutcome(UpdateFileMetaResult(outcome.result()));
	else
		return UpdateFileMetaOutcome(outcome.error());
}

void ImmClient::updateFileMetaAsync(const UpdateFileMetaRequest& request, const UpdateFileMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFileMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateFileMetaOutcomeCallable ImmClient::updateFileMetaCallable(const UpdateFileMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFileMetaOutcome()>>(
			[this, request]()
			{
			return this->updateFileMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateImageOutcome ImmClient::updateImage(const UpdateImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateImageOutcome(UpdateImageResult(outcome.result()));
	else
		return UpdateImageOutcome(outcome.error());
}

void ImmClient::updateImageAsync(const UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateImageOutcomeCallable ImmClient::updateImageCallable(const UpdateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateImageOutcome()>>(
			[this, request]()
			{
			return this->updateImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateProjectOutcome ImmClient::updateProject(const UpdateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectOutcome(UpdateProjectResult(outcome.result()));
	else
		return UpdateProjectOutcome(outcome.error());
}

void ImmClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateProjectOutcomeCallable ImmClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateSetOutcome ImmClient::updateSet(const UpdateSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSetOutcome(UpdateSetResult(outcome.result()));
	else
		return UpdateSetOutcome(outcome.error());
}

void ImmClient::updateSetAsync(const UpdateSetRequest& request, const UpdateSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateSetOutcomeCallable ImmClient::updateSetCallable(const UpdateSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSetOutcome()>>(
			[this, request]()
			{
			return this->updateSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ImmClient::UpdateStoryOutcome ImmClient::updateStory(const UpdateStoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStoryOutcome(UpdateStoryResult(outcome.result()));
	else
		return UpdateStoryOutcome(outcome.error());
}

void ImmClient::updateStoryAsync(const UpdateStoryRequest& request, const UpdateStoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ImmClient::UpdateStoryOutcomeCallable ImmClient::updateStoryCallable(const UpdateStoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStoryOutcome()>>(
			[this, request]()
			{
			return this->updateStory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

