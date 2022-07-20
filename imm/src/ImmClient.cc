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

