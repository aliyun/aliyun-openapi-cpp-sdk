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

#include <alibabacloud/ice/ICEClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

namespace
{
	const std::string SERVICE_NAME = "ICE";
}

ICEClient::ICEClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ice");
}

ICEClient::ICEClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ice");
}

ICEClient::ICEClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ice");
}

ICEClient::~ICEClient()
{}

ICEClient::AddCategoryOutcome ICEClient::addCategory(const AddCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCategoryOutcome(AddCategoryResult(outcome.result()));
	else
		return AddCategoryOutcome(outcome.error());
}

void ICEClient::addCategoryAsync(const AddCategoryRequest& request, const AddCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::AddCategoryOutcomeCallable ICEClient::addCategoryCallable(const AddCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCategoryOutcome()>>(
			[this, request]()
			{
			return this->addCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::AddEditingProjectMaterialsOutcome ICEClient::addEditingProjectMaterials(const AddEditingProjectMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEditingProjectMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEditingProjectMaterialsOutcome(AddEditingProjectMaterialsResult(outcome.result()));
	else
		return AddEditingProjectMaterialsOutcome(outcome.error());
}

void ICEClient::addEditingProjectMaterialsAsync(const AddEditingProjectMaterialsRequest& request, const AddEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEditingProjectMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::AddEditingProjectMaterialsOutcomeCallable ICEClient::addEditingProjectMaterialsCallable(const AddEditingProjectMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEditingProjectMaterialsOutcome()>>(
			[this, request]()
			{
			return this->addEditingProjectMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::AddFavoritePublicMediaOutcome ICEClient::addFavoritePublicMedia(const AddFavoritePublicMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFavoritePublicMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFavoritePublicMediaOutcome(AddFavoritePublicMediaResult(outcome.result()));
	else
		return AddFavoritePublicMediaOutcome(outcome.error());
}

void ICEClient::addFavoritePublicMediaAsync(const AddFavoritePublicMediaRequest& request, const AddFavoritePublicMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFavoritePublicMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::AddFavoritePublicMediaOutcomeCallable ICEClient::addFavoritePublicMediaCallable(const AddFavoritePublicMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFavoritePublicMediaOutcome()>>(
			[this, request]()
			{
			return this->addFavoritePublicMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::AddMediaMarksOutcome ICEClient::addMediaMarks(const AddMediaMarksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMediaMarksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMediaMarksOutcome(AddMediaMarksResult(outcome.result()));
	else
		return AddMediaMarksOutcome(outcome.error());
}

void ICEClient::addMediaMarksAsync(const AddMediaMarksRequest& request, const AddMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMediaMarks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::AddMediaMarksOutcomeCallable ICEClient::addMediaMarksCallable(const AddMediaMarksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMediaMarksOutcome()>>(
			[this, request]()
			{
			return this->addMediaMarks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::AddTemplateOutcome ICEClient::addTemplate(const AddTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTemplateOutcome(AddTemplateResult(outcome.result()));
	else
		return AddTemplateOutcome(outcome.error());
}

void ICEClient::addTemplateAsync(const AddTemplateRequest& request, const AddTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::AddTemplateOutcomeCallable ICEClient::addTemplateCallable(const AddTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTemplateOutcome()>>(
			[this, request]()
			{
			return this->addTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::BatchGetMediaInfosOutcome ICEClient::batchGetMediaInfos(const BatchGetMediaInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetMediaInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetMediaInfosOutcome(BatchGetMediaInfosResult(outcome.result()));
	else
		return BatchGetMediaInfosOutcome(outcome.error());
}

void ICEClient::batchGetMediaInfosAsync(const BatchGetMediaInfosRequest& request, const BatchGetMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetMediaInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::BatchGetMediaInfosOutcomeCallable ICEClient::batchGetMediaInfosCallable(const BatchGetMediaInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetMediaInfosOutcome()>>(
			[this, request]()
			{
			return this->batchGetMediaInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CancelDNAJobOutcome ICEClient::cancelDNAJob(const CancelDNAJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelDNAJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelDNAJobOutcome(CancelDNAJobResult(outcome.result()));
	else
		return CancelDNAJobOutcome(outcome.error());
}

void ICEClient::cancelDNAJobAsync(const CancelDNAJobRequest& request, const CancelDNAJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelDNAJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CancelDNAJobOutcomeCallable ICEClient::cancelDNAJobCallable(const CancelDNAJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelDNAJobOutcome()>>(
			[this, request]()
			{
			return this->cancelDNAJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CancelFavoritePublicMediaOutcome ICEClient::cancelFavoritePublicMedia(const CancelFavoritePublicMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelFavoritePublicMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelFavoritePublicMediaOutcome(CancelFavoritePublicMediaResult(outcome.result()));
	else
		return CancelFavoritePublicMediaOutcome(outcome.error());
}

void ICEClient::cancelFavoritePublicMediaAsync(const CancelFavoritePublicMediaRequest& request, const CancelFavoritePublicMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelFavoritePublicMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CancelFavoritePublicMediaOutcomeCallable ICEClient::cancelFavoritePublicMediaCallable(const CancelFavoritePublicMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelFavoritePublicMediaOutcome()>>(
			[this, request]()
			{
			return this->cancelFavoritePublicMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateAuditOutcome ICEClient::createAudit(const CreateAuditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAuditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAuditOutcome(CreateAuditResult(outcome.result()));
	else
		return CreateAuditOutcome(outcome.error());
}

void ICEClient::createAuditAsync(const CreateAuditRequest& request, const CreateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateAuditOutcomeCallable ICEClient::createAuditCallable(const CreateAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAuditOutcome()>>(
			[this, request]()
			{
			return this->createAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateCustomTemplateOutcome ICEClient::createCustomTemplate(const CreateCustomTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomTemplateOutcome(CreateCustomTemplateResult(outcome.result()));
	else
		return CreateCustomTemplateOutcome(outcome.error());
}

void ICEClient::createCustomTemplateAsync(const CreateCustomTemplateRequest& request, const CreateCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateCustomTemplateOutcomeCallable ICEClient::createCustomTemplateCallable(const CreateCustomTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomTemplateOutcome()>>(
			[this, request]()
			{
			return this->createCustomTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateDNADBOutcome ICEClient::createDNADB(const CreateDNADBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDNADBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDNADBOutcome(CreateDNADBResult(outcome.result()));
	else
		return CreateDNADBOutcome(outcome.error());
}

void ICEClient::createDNADBAsync(const CreateDNADBRequest& request, const CreateDNADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDNADB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateDNADBOutcomeCallable ICEClient::createDNADBCallable(const CreateDNADBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDNADBOutcome()>>(
			[this, request]()
			{
			return this->createDNADB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateEditingProjectOutcome ICEClient::createEditingProject(const CreateEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEditingProjectOutcome(CreateEditingProjectResult(outcome.result()));
	else
		return CreateEditingProjectOutcome(outcome.error());
}

void ICEClient::createEditingProjectAsync(const CreateEditingProjectRequest& request, const CreateEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateEditingProjectOutcomeCallable ICEClient::createEditingProjectCallable(const CreateEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->createEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateLiveRecordTemplateOutcome ICEClient::createLiveRecordTemplate(const CreateLiveRecordTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveRecordTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveRecordTemplateOutcome(CreateLiveRecordTemplateResult(outcome.result()));
	else
		return CreateLiveRecordTemplateOutcome(outcome.error());
}

void ICEClient::createLiveRecordTemplateAsync(const CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveRecordTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateLiveRecordTemplateOutcomeCallable ICEClient::createLiveRecordTemplateCallable(const CreateLiveRecordTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveRecordTemplateOutcome()>>(
			[this, request]()
			{
			return this->createLiveRecordTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateLiveSnapshotTemplateOutcome ICEClient::createLiveSnapshotTemplate(const CreateLiveSnapshotTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveSnapshotTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveSnapshotTemplateOutcome(CreateLiveSnapshotTemplateResult(outcome.result()));
	else
		return CreateLiveSnapshotTemplateOutcome(outcome.error());
}

void ICEClient::createLiveSnapshotTemplateAsync(const CreateLiveSnapshotTemplateRequest& request, const CreateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveSnapshotTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateLiveSnapshotTemplateOutcomeCallable ICEClient::createLiveSnapshotTemplateCallable(const CreateLiveSnapshotTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveSnapshotTemplateOutcome()>>(
			[this, request]()
			{
			return this->createLiveSnapshotTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateLiveTranscodeTemplateOutcome ICEClient::createLiveTranscodeTemplate(const CreateLiveTranscodeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveTranscodeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveTranscodeTemplateOutcome(CreateLiveTranscodeTemplateResult(outcome.result()));
	else
		return CreateLiveTranscodeTemplateOutcome(outcome.error());
}

void ICEClient::createLiveTranscodeTemplateAsync(const CreateLiveTranscodeTemplateRequest& request, const CreateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveTranscodeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateLiveTranscodeTemplateOutcomeCallable ICEClient::createLiveTranscodeTemplateCallable(const CreateLiveTranscodeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveTranscodeTemplateOutcome()>>(
			[this, request]()
			{
			return this->createLiveTranscodeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreatePipelineOutcome ICEClient::createPipeline(const CreatePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePipelineOutcome(CreatePipelineResult(outcome.result()));
	else
		return CreatePipelineOutcome(outcome.error());
}

void ICEClient::createPipelineAsync(const CreatePipelineRequest& request, const CreatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreatePipelineOutcomeCallable ICEClient::createPipelineCallable(const CreatePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePipelineOutcome()>>(
			[this, request]()
			{
			return this->createPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateUploadMediaOutcome ICEClient::createUploadMedia(const CreateUploadMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadMediaOutcome(CreateUploadMediaResult(outcome.result()));
	else
		return CreateUploadMediaOutcome(outcome.error());
}

void ICEClient::createUploadMediaAsync(const CreateUploadMediaRequest& request, const CreateUploadMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateUploadMediaOutcomeCallable ICEClient::createUploadMediaCallable(const CreateUploadMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadMediaOutcome()>>(
			[this, request]()
			{
			return this->createUploadMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::CreateUploadStreamOutcome ICEClient::createUploadStream(const CreateUploadStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadStreamOutcome(CreateUploadStreamResult(outcome.result()));
	else
		return CreateUploadStreamOutcome(outcome.error());
}

void ICEClient::createUploadStreamAsync(const CreateUploadStreamRequest& request, const CreateUploadStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::CreateUploadStreamOutcomeCallable ICEClient::createUploadStreamCallable(const CreateUploadStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadStreamOutcome()>>(
			[this, request]()
			{
			return this->createUploadStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteCategoryOutcome ICEClient::deleteCategory(const DeleteCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCategoryOutcome(DeleteCategoryResult(outcome.result()));
	else
		return DeleteCategoryOutcome(outcome.error());
}

void ICEClient::deleteCategoryAsync(const DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteCategoryOutcomeCallable ICEClient::deleteCategoryCallable(const DeleteCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteCustomTemplateOutcome ICEClient::deleteCustomTemplate(const DeleteCustomTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomTemplateOutcome(DeleteCustomTemplateResult(outcome.result()));
	else
		return DeleteCustomTemplateOutcome(outcome.error());
}

void ICEClient::deleteCustomTemplateAsync(const DeleteCustomTemplateRequest& request, const DeleteCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteCustomTemplateOutcomeCallable ICEClient::deleteCustomTemplateCallable(const DeleteCustomTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteDNADBOutcome ICEClient::deleteDNADB(const DeleteDNADBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDNADBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDNADBOutcome(DeleteDNADBResult(outcome.result()));
	else
		return DeleteDNADBOutcome(outcome.error());
}

void ICEClient::deleteDNADBAsync(const DeleteDNADBRequest& request, const DeleteDNADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDNADB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteDNADBOutcomeCallable ICEClient::deleteDNADBCallable(const DeleteDNADBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDNADBOutcome()>>(
			[this, request]()
			{
			return this->deleteDNADB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteDNAFilesOutcome ICEClient::deleteDNAFiles(const DeleteDNAFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDNAFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDNAFilesOutcome(DeleteDNAFilesResult(outcome.result()));
	else
		return DeleteDNAFilesOutcome(outcome.error());
}

void ICEClient::deleteDNAFilesAsync(const DeleteDNAFilesRequest& request, const DeleteDNAFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDNAFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteDNAFilesOutcomeCallable ICEClient::deleteDNAFilesCallable(const DeleteDNAFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDNAFilesOutcome()>>(
			[this, request]()
			{
			return this->deleteDNAFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteEditingProjectMaterialsOutcome ICEClient::deleteEditingProjectMaterials(const DeleteEditingProjectMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEditingProjectMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEditingProjectMaterialsOutcome(DeleteEditingProjectMaterialsResult(outcome.result()));
	else
		return DeleteEditingProjectMaterialsOutcome(outcome.error());
}

void ICEClient::deleteEditingProjectMaterialsAsync(const DeleteEditingProjectMaterialsRequest& request, const DeleteEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEditingProjectMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteEditingProjectMaterialsOutcomeCallable ICEClient::deleteEditingProjectMaterialsCallable(const DeleteEditingProjectMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEditingProjectMaterialsOutcome()>>(
			[this, request]()
			{
			return this->deleteEditingProjectMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteEditingProjectsOutcome ICEClient::deleteEditingProjects(const DeleteEditingProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEditingProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEditingProjectsOutcome(DeleteEditingProjectsResult(outcome.result()));
	else
		return DeleteEditingProjectsOutcome(outcome.error());
}

void ICEClient::deleteEditingProjectsAsync(const DeleteEditingProjectsRequest& request, const DeleteEditingProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEditingProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteEditingProjectsOutcomeCallable ICEClient::deleteEditingProjectsCallable(const DeleteEditingProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEditingProjectsOutcome()>>(
			[this, request]()
			{
			return this->deleteEditingProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteLiveRecordFilesOutcome ICEClient::deleteLiveRecordFiles(const DeleteLiveRecordFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveRecordFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveRecordFilesOutcome(DeleteLiveRecordFilesResult(outcome.result()));
	else
		return DeleteLiveRecordFilesOutcome(outcome.error());
}

void ICEClient::deleteLiveRecordFilesAsync(const DeleteLiveRecordFilesRequest& request, const DeleteLiveRecordFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveRecordFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteLiveRecordFilesOutcomeCallable ICEClient::deleteLiveRecordFilesCallable(const DeleteLiveRecordFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveRecordFilesOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveRecordFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteLiveRecordTemplateOutcome ICEClient::deleteLiveRecordTemplate(const DeleteLiveRecordTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveRecordTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveRecordTemplateOutcome(DeleteLiveRecordTemplateResult(outcome.result()));
	else
		return DeleteLiveRecordTemplateOutcome(outcome.error());
}

void ICEClient::deleteLiveRecordTemplateAsync(const DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveRecordTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteLiveRecordTemplateOutcomeCallable ICEClient::deleteLiveRecordTemplateCallable(const DeleteLiveRecordTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveRecordTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveRecordTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteLiveSnapshotFilesOutcome ICEClient::deleteLiveSnapshotFiles(const DeleteLiveSnapshotFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveSnapshotFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveSnapshotFilesOutcome(DeleteLiveSnapshotFilesResult(outcome.result()));
	else
		return DeleteLiveSnapshotFilesOutcome(outcome.error());
}

void ICEClient::deleteLiveSnapshotFilesAsync(const DeleteLiveSnapshotFilesRequest& request, const DeleteLiveSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveSnapshotFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteLiveSnapshotFilesOutcomeCallable ICEClient::deleteLiveSnapshotFilesCallable(const DeleteLiveSnapshotFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveSnapshotFilesOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveSnapshotFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteLiveSnapshotTemplateOutcome ICEClient::deleteLiveSnapshotTemplate(const DeleteLiveSnapshotTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveSnapshotTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveSnapshotTemplateOutcome(DeleteLiveSnapshotTemplateResult(outcome.result()));
	else
		return DeleteLiveSnapshotTemplateOutcome(outcome.error());
}

void ICEClient::deleteLiveSnapshotTemplateAsync(const DeleteLiveSnapshotTemplateRequest& request, const DeleteLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveSnapshotTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteLiveSnapshotTemplateOutcomeCallable ICEClient::deleteLiveSnapshotTemplateCallable(const DeleteLiveSnapshotTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveSnapshotTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveSnapshotTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteLiveTranscodeJobOutcome ICEClient::deleteLiveTranscodeJob(const DeleteLiveTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveTranscodeJobOutcome(DeleteLiveTranscodeJobResult(outcome.result()));
	else
		return DeleteLiveTranscodeJobOutcome(outcome.error());
}

void ICEClient::deleteLiveTranscodeJobAsync(const DeleteLiveTranscodeJobRequest& request, const DeleteLiveTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteLiveTranscodeJobOutcomeCallable ICEClient::deleteLiveTranscodeJobCallable(const DeleteLiveTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteLiveTranscodeTemplateOutcome ICEClient::deleteLiveTranscodeTemplate(const DeleteLiveTranscodeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveTranscodeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveTranscodeTemplateOutcome(DeleteLiveTranscodeTemplateResult(outcome.result()));
	else
		return DeleteLiveTranscodeTemplateOutcome(outcome.error());
}

void ICEClient::deleteLiveTranscodeTemplateAsync(const DeleteLiveTranscodeTemplateRequest& request, const DeleteLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveTranscodeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteLiveTranscodeTemplateOutcomeCallable ICEClient::deleteLiveTranscodeTemplateCallable(const DeleteLiveTranscodeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveTranscodeTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveTranscodeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteMediaInfosOutcome ICEClient::deleteMediaInfos(const DeleteMediaInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMediaInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMediaInfosOutcome(DeleteMediaInfosResult(outcome.result()));
	else
		return DeleteMediaInfosOutcome(outcome.error());
}

void ICEClient::deleteMediaInfosAsync(const DeleteMediaInfosRequest& request, const DeleteMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMediaInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteMediaInfosOutcomeCallable ICEClient::deleteMediaInfosCallable(const DeleteMediaInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMediaInfosOutcome()>>(
			[this, request]()
			{
			return this->deleteMediaInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteMediaMarksOutcome ICEClient::deleteMediaMarks(const DeleteMediaMarksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMediaMarksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMediaMarksOutcome(DeleteMediaMarksResult(outcome.result()));
	else
		return DeleteMediaMarksOutcome(outcome.error());
}

void ICEClient::deleteMediaMarksAsync(const DeleteMediaMarksRequest& request, const DeleteMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMediaMarks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteMediaMarksOutcomeCallable ICEClient::deleteMediaMarksCallable(const DeleteMediaMarksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMediaMarksOutcome()>>(
			[this, request]()
			{
			return this->deleteMediaMarks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeletePipelineOutcome ICEClient::deletePipeline(const DeletePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePipelineOutcome(DeletePipelineResult(outcome.result()));
	else
		return DeletePipelineOutcome(outcome.error());
}

void ICEClient::deletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeletePipelineOutcomeCallable ICEClient::deletePipelineCallable(const DeletePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePipelineOutcome()>>(
			[this, request]()
			{
			return this->deletePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeletePlayInfoOutcome ICEClient::deletePlayInfo(const DeletePlayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePlayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePlayInfoOutcome(DeletePlayInfoResult(outcome.result()));
	else
		return DeletePlayInfoOutcome(outcome.error());
}

void ICEClient::deletePlayInfoAsync(const DeletePlayInfoRequest& request, const DeletePlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePlayInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeletePlayInfoOutcomeCallable ICEClient::deletePlayInfoCallable(const DeletePlayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePlayInfoOutcome()>>(
			[this, request]()
			{
			return this->deletePlayInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteSmartJobOutcome ICEClient::deleteSmartJob(const DeleteSmartJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSmartJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSmartJobOutcome(DeleteSmartJobResult(outcome.result()));
	else
		return DeleteSmartJobOutcome(outcome.error());
}

void ICEClient::deleteSmartJobAsync(const DeleteSmartJobRequest& request, const DeleteSmartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSmartJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteSmartJobOutcomeCallable ICEClient::deleteSmartJobCallable(const DeleteSmartJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSmartJobOutcome()>>(
			[this, request]()
			{
			return this->deleteSmartJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DeleteTemplateOutcome ICEClient::deleteTemplate(const DeleteTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTemplateOutcome(DeleteTemplateResult(outcome.result()));
	else
		return DeleteTemplateOutcome(outcome.error());
}

void ICEClient::deleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DeleteTemplateOutcomeCallable ICEClient::deleteTemplateCallable(const DeleteTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeFilterConfigsOutcome ICEClient::describeFilterConfigs(const DescribeFilterConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFilterConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFilterConfigsOutcome(DescribeFilterConfigsResult(outcome.result()));
	else
		return DescribeFilterConfigsOutcome(outcome.error());
}

void ICEClient::describeFilterConfigsAsync(const DescribeFilterConfigsRequest& request, const DescribeFilterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFilterConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeFilterConfigsOutcomeCallable ICEClient::describeFilterConfigsCallable(const DescribeFilterConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFilterConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeFilterConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterIceEditUsageOutcome ICEClient::describeMeterIceEditUsage(const DescribeMeterIceEditUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterIceEditUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterIceEditUsageOutcome(DescribeMeterIceEditUsageResult(outcome.result()));
	else
		return DescribeMeterIceEditUsageOutcome(outcome.error());
}

void ICEClient::describeMeterIceEditUsageAsync(const DescribeMeterIceEditUsageRequest& request, const DescribeMeterIceEditUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterIceEditUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterIceEditUsageOutcomeCallable ICEClient::describeMeterIceEditUsageCallable(const DescribeMeterIceEditUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterIceEditUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterIceEditUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterIceLiveMediaConvertUsageOutcome ICEClient::describeMeterIceLiveMediaConvertUsage(const DescribeMeterIceLiveMediaConvertUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterIceLiveMediaConvertUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterIceLiveMediaConvertUsageOutcome(DescribeMeterIceLiveMediaConvertUsageResult(outcome.result()));
	else
		return DescribeMeterIceLiveMediaConvertUsageOutcome(outcome.error());
}

void ICEClient::describeMeterIceLiveMediaConvertUsageAsync(const DescribeMeterIceLiveMediaConvertUsageRequest& request, const DescribeMeterIceLiveMediaConvertUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterIceLiveMediaConvertUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterIceLiveMediaConvertUsageOutcomeCallable ICEClient::describeMeterIceLiveMediaConvertUsageCallable(const DescribeMeterIceLiveMediaConvertUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterIceLiveMediaConvertUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterIceLiveMediaConvertUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterIceMediaConvertUHDUsageOutcome ICEClient::describeMeterIceMediaConvertUHDUsage(const DescribeMeterIceMediaConvertUHDUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterIceMediaConvertUHDUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterIceMediaConvertUHDUsageOutcome(DescribeMeterIceMediaConvertUHDUsageResult(outcome.result()));
	else
		return DescribeMeterIceMediaConvertUHDUsageOutcome(outcome.error());
}

void ICEClient::describeMeterIceMediaConvertUHDUsageAsync(const DescribeMeterIceMediaConvertUHDUsageRequest& request, const DescribeMeterIceMediaConvertUHDUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterIceMediaConvertUHDUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterIceMediaConvertUHDUsageOutcomeCallable ICEClient::describeMeterIceMediaConvertUHDUsageCallable(const DescribeMeterIceMediaConvertUHDUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterIceMediaConvertUHDUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterIceMediaConvertUHDUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterIceMediaConvertUsageOutcome ICEClient::describeMeterIceMediaConvertUsage(const DescribeMeterIceMediaConvertUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterIceMediaConvertUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterIceMediaConvertUsageOutcome(DescribeMeterIceMediaConvertUsageResult(outcome.result()));
	else
		return DescribeMeterIceMediaConvertUsageOutcome(outcome.error());
}

void ICEClient::describeMeterIceMediaConvertUsageAsync(const DescribeMeterIceMediaConvertUsageRequest& request, const DescribeMeterIceMediaConvertUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterIceMediaConvertUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterIceMediaConvertUsageOutcomeCallable ICEClient::describeMeterIceMediaConvertUsageCallable(const DescribeMeterIceMediaConvertUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterIceMediaConvertUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterIceMediaConvertUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterIceMpsAiUsageOutcome ICEClient::describeMeterIceMpsAiUsage(const DescribeMeterIceMpsAiUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterIceMpsAiUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterIceMpsAiUsageOutcome(DescribeMeterIceMpsAiUsageResult(outcome.result()));
	else
		return DescribeMeterIceMpsAiUsageOutcome(outcome.error());
}

void ICEClient::describeMeterIceMpsAiUsageAsync(const DescribeMeterIceMpsAiUsageRequest& request, const DescribeMeterIceMpsAiUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterIceMpsAiUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterIceMpsAiUsageOutcomeCallable ICEClient::describeMeterIceMpsAiUsageCallable(const DescribeMeterIceMpsAiUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterIceMpsAiUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterIceMpsAiUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsEditUsageOutcome ICEClient::describeMeterImsEditUsage(const DescribeMeterImsEditUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsEditUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsEditUsageOutcome(DescribeMeterImsEditUsageResult(outcome.result()));
	else
		return DescribeMeterImsEditUsageOutcome(outcome.error());
}

void ICEClient::describeMeterImsEditUsageAsync(const DescribeMeterImsEditUsageRequest& request, const DescribeMeterImsEditUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsEditUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsEditUsageOutcomeCallable ICEClient::describeMeterImsEditUsageCallable(const DescribeMeterImsEditUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsEditUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsEditUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsLiveEditUsageOutcome ICEClient::describeMeterImsLiveEditUsage(const DescribeMeterImsLiveEditUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsLiveEditUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsLiveEditUsageOutcome(DescribeMeterImsLiveEditUsageResult(outcome.result()));
	else
		return DescribeMeterImsLiveEditUsageOutcome(outcome.error());
}

void ICEClient::describeMeterImsLiveEditUsageAsync(const DescribeMeterImsLiveEditUsageRequest& request, const DescribeMeterImsLiveEditUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsLiveEditUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsLiveEditUsageOutcomeCallable ICEClient::describeMeterImsLiveEditUsageCallable(const DescribeMeterImsLiveEditUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsLiveEditUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsLiveEditUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsLiveMediaConvertUsageOutcome ICEClient::describeMeterImsLiveMediaConvertUsage(const DescribeMeterImsLiveMediaConvertUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsLiveMediaConvertUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsLiveMediaConvertUsageOutcome(DescribeMeterImsLiveMediaConvertUsageResult(outcome.result()));
	else
		return DescribeMeterImsLiveMediaConvertUsageOutcome(outcome.error());
}

void ICEClient::describeMeterImsLiveMediaConvertUsageAsync(const DescribeMeterImsLiveMediaConvertUsageRequest& request, const DescribeMeterImsLiveMediaConvertUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsLiveMediaConvertUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsLiveMediaConvertUsageOutcomeCallable ICEClient::describeMeterImsLiveMediaConvertUsageCallable(const DescribeMeterImsLiveMediaConvertUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsLiveMediaConvertUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsLiveMediaConvertUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsLiveRecordUsageOutcome ICEClient::describeMeterImsLiveRecordUsage(const DescribeMeterImsLiveRecordUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsLiveRecordUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsLiveRecordUsageOutcome(DescribeMeterImsLiveRecordUsageResult(outcome.result()));
	else
		return DescribeMeterImsLiveRecordUsageOutcome(outcome.error());
}

void ICEClient::describeMeterImsLiveRecordUsageAsync(const DescribeMeterImsLiveRecordUsageRequest& request, const DescribeMeterImsLiveRecordUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsLiveRecordUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsLiveRecordUsageOutcomeCallable ICEClient::describeMeterImsLiveRecordUsageCallable(const DescribeMeterImsLiveRecordUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsLiveRecordUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsLiveRecordUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsLiveSnapshotUsageOutcome ICEClient::describeMeterImsLiveSnapshotUsage(const DescribeMeterImsLiveSnapshotUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsLiveSnapshotUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsLiveSnapshotUsageOutcome(DescribeMeterImsLiveSnapshotUsageResult(outcome.result()));
	else
		return DescribeMeterImsLiveSnapshotUsageOutcome(outcome.error());
}

void ICEClient::describeMeterImsLiveSnapshotUsageAsync(const DescribeMeterImsLiveSnapshotUsageRequest& request, const DescribeMeterImsLiveSnapshotUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsLiveSnapshotUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsLiveSnapshotUsageOutcomeCallable ICEClient::describeMeterImsLiveSnapshotUsageCallable(const DescribeMeterImsLiveSnapshotUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsLiveSnapshotUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsLiveSnapshotUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsMediaConvertUHDUsageOutcome ICEClient::describeMeterImsMediaConvertUHDUsage(const DescribeMeterImsMediaConvertUHDUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsMediaConvertUHDUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsMediaConvertUHDUsageOutcome(DescribeMeterImsMediaConvertUHDUsageResult(outcome.result()));
	else
		return DescribeMeterImsMediaConvertUHDUsageOutcome(outcome.error());
}

void ICEClient::describeMeterImsMediaConvertUHDUsageAsync(const DescribeMeterImsMediaConvertUHDUsageRequest& request, const DescribeMeterImsMediaConvertUHDUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsMediaConvertUHDUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsMediaConvertUHDUsageOutcomeCallable ICEClient::describeMeterImsMediaConvertUHDUsageCallable(const DescribeMeterImsMediaConvertUHDUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsMediaConvertUHDUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsMediaConvertUHDUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsMediaConvertUsageOutcome ICEClient::describeMeterImsMediaConvertUsage(const DescribeMeterImsMediaConvertUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsMediaConvertUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsMediaConvertUsageOutcome(DescribeMeterImsMediaConvertUsageResult(outcome.result()));
	else
		return DescribeMeterImsMediaConvertUsageOutcome(outcome.error());
}

void ICEClient::describeMeterImsMediaConvertUsageAsync(const DescribeMeterImsMediaConvertUsageRequest& request, const DescribeMeterImsMediaConvertUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsMediaConvertUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsMediaConvertUsageOutcomeCallable ICEClient::describeMeterImsMediaConvertUsageCallable(const DescribeMeterImsMediaConvertUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsMediaConvertUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsMediaConvertUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsMpsAiUsageOutcome ICEClient::describeMeterImsMpsAiUsage(const DescribeMeterImsMpsAiUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsMpsAiUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsMpsAiUsageOutcome(DescribeMeterImsMpsAiUsageResult(outcome.result()));
	else
		return DescribeMeterImsMpsAiUsageOutcome(outcome.error());
}

void ICEClient::describeMeterImsMpsAiUsageAsync(const DescribeMeterImsMpsAiUsageRequest& request, const DescribeMeterImsMpsAiUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsMpsAiUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsMpsAiUsageOutcomeCallable ICEClient::describeMeterImsMpsAiUsageCallable(const DescribeMeterImsMpsAiUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsMpsAiUsageOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsMpsAiUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeMeterImsSummaryOutcome ICEClient::describeMeterImsSummary(const DescribeMeterImsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterImsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterImsSummaryOutcome(DescribeMeterImsSummaryResult(outcome.result()));
	else
		return DescribeMeterImsSummaryOutcome(outcome.error());
}

void ICEClient::describeMeterImsSummaryAsync(const DescribeMeterImsSummaryRequest& request, const DescribeMeterImsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterImsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeMeterImsSummaryOutcomeCallable ICEClient::describeMeterImsSummaryCallable(const DescribeMeterImsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterImsSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeMeterImsSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribePlayDetailOutcome ICEClient::describePlayDetail(const DescribePlayDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayDetailOutcome(DescribePlayDetailResult(outcome.result()));
	else
		return DescribePlayDetailOutcome(outcome.error());
}

void ICEClient::describePlayDetailAsync(const DescribePlayDetailRequest& request, const DescribePlayDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribePlayDetailOutcomeCallable ICEClient::describePlayDetailCallable(const DescribePlayDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayDetailOutcome()>>(
			[this, request]()
			{
			return this->describePlayDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribePlayEventListOutcome ICEClient::describePlayEventList(const DescribePlayEventListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayEventListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayEventListOutcome(DescribePlayEventListResult(outcome.result()));
	else
		return DescribePlayEventListOutcome(outcome.error());
}

void ICEClient::describePlayEventListAsync(const DescribePlayEventListRequest& request, const DescribePlayEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribePlayEventListOutcomeCallable ICEClient::describePlayEventListCallable(const DescribePlayEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayEventListOutcome()>>(
			[this, request]()
			{
			return this->describePlayEventList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribePlayFirstFrameDurationMetricDataOutcome ICEClient::describePlayFirstFrameDurationMetricData(const DescribePlayFirstFrameDurationMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayFirstFrameDurationMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayFirstFrameDurationMetricDataOutcome(DescribePlayFirstFrameDurationMetricDataResult(outcome.result()));
	else
		return DescribePlayFirstFrameDurationMetricDataOutcome(outcome.error());
}

void ICEClient::describePlayFirstFrameDurationMetricDataAsync(const DescribePlayFirstFrameDurationMetricDataRequest& request, const DescribePlayFirstFrameDurationMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayFirstFrameDurationMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribePlayFirstFrameDurationMetricDataOutcomeCallable ICEClient::describePlayFirstFrameDurationMetricDataCallable(const DescribePlayFirstFrameDurationMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayFirstFrameDurationMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describePlayFirstFrameDurationMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribePlayListOutcome ICEClient::describePlayList(const DescribePlayListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayListOutcome(DescribePlayListResult(outcome.result()));
	else
		return DescribePlayListOutcome(outcome.error());
}

void ICEClient::describePlayListAsync(const DescribePlayListRequest& request, const DescribePlayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribePlayListOutcomeCallable ICEClient::describePlayListCallable(const DescribePlayListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayListOutcome()>>(
			[this, request]()
			{
			return this->describePlayList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribePlayMetricDataOutcome ICEClient::describePlayMetricData(const DescribePlayMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayMetricDataOutcome(DescribePlayMetricDataResult(outcome.result()));
	else
		return DescribePlayMetricDataOutcome(outcome.error());
}

void ICEClient::describePlayMetricDataAsync(const DescribePlayMetricDataRequest& request, const DescribePlayMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribePlayMetricDataOutcomeCallable ICEClient::describePlayMetricDataCallable(const DescribePlayMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describePlayMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribePlayQoeListOutcome ICEClient::describePlayQoeList(const DescribePlayQoeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayQoeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayQoeListOutcome(DescribePlayQoeListResult(outcome.result()));
	else
		return DescribePlayQoeListOutcome(outcome.error());
}

void ICEClient::describePlayQoeListAsync(const DescribePlayQoeListRequest& request, const DescribePlayQoeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayQoeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribePlayQoeListOutcomeCallable ICEClient::describePlayQoeListCallable(const DescribePlayQoeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayQoeListOutcome()>>(
			[this, request]()
			{
			return this->describePlayQoeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribePlayQosListOutcome ICEClient::describePlayQosList(const DescribePlayQosListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePlayQosListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePlayQosListOutcome(DescribePlayQosListResult(outcome.result()));
	else
		return DescribePlayQosListOutcome(outcome.error());
}

void ICEClient::describePlayQosListAsync(const DescribePlayQosListRequest& request, const DescribePlayQosListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlayQosList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribePlayQosListOutcomeCallable ICEClient::describePlayQosListCallable(const DescribePlayQosListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePlayQosListOutcome()>>(
			[this, request]()
			{
			return this->describePlayQosList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::DescribeQueryConfigsOutcome ICEClient::describeQueryConfigs(const DescribeQueryConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQueryConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQueryConfigsOutcome(DescribeQueryConfigsResult(outcome.result()));
	else
		return DescribeQueryConfigsOutcome(outcome.error());
}

void ICEClient::describeQueryConfigsAsync(const DescribeQueryConfigsRequest& request, const DescribeQueryConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQueryConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::DescribeQueryConfigsOutcomeCallable ICEClient::describeQueryConfigsCallable(const DescribeQueryConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQueryConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeQueryConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetCategoriesOutcome ICEClient::getCategories(const GetCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCategoriesOutcome(GetCategoriesResult(outcome.result()));
	else
		return GetCategoriesOutcome(outcome.error());
}

void ICEClient::getCategoriesAsync(const GetCategoriesRequest& request, const GetCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetCategoriesOutcomeCallable ICEClient::getCategoriesCallable(const GetCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCategoriesOutcome()>>(
			[this, request]()
			{
			return this->getCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetContentAnalyzeConfigOutcome ICEClient::getContentAnalyzeConfig(const GetContentAnalyzeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetContentAnalyzeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetContentAnalyzeConfigOutcome(GetContentAnalyzeConfigResult(outcome.result()));
	else
		return GetContentAnalyzeConfigOutcome(outcome.error());
}

void ICEClient::getContentAnalyzeConfigAsync(const GetContentAnalyzeConfigRequest& request, const GetContentAnalyzeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getContentAnalyzeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetContentAnalyzeConfigOutcomeCallable ICEClient::getContentAnalyzeConfigCallable(const GetContentAnalyzeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetContentAnalyzeConfigOutcome()>>(
			[this, request]()
			{
			return this->getContentAnalyzeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetCustomTemplateOutcome ICEClient::getCustomTemplate(const GetCustomTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomTemplateOutcome(GetCustomTemplateResult(outcome.result()));
	else
		return GetCustomTemplateOutcome(outcome.error());
}

void ICEClient::getCustomTemplateAsync(const GetCustomTemplateRequest& request, const GetCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetCustomTemplateOutcomeCallable ICEClient::getCustomTemplateCallable(const GetCustomTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomTemplateOutcome()>>(
			[this, request]()
			{
			return this->getCustomTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetDefaultStorageLocationOutcome ICEClient::getDefaultStorageLocation(const GetDefaultStorageLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDefaultStorageLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDefaultStorageLocationOutcome(GetDefaultStorageLocationResult(outcome.result()));
	else
		return GetDefaultStorageLocationOutcome(outcome.error());
}

void ICEClient::getDefaultStorageLocationAsync(const GetDefaultStorageLocationRequest& request, const GetDefaultStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDefaultStorageLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetDefaultStorageLocationOutcomeCallable ICEClient::getDefaultStorageLocationCallable(const GetDefaultStorageLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDefaultStorageLocationOutcome()>>(
			[this, request]()
			{
			return this->getDefaultStorageLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetDynamicImageJobOutcome ICEClient::getDynamicImageJob(const GetDynamicImageJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDynamicImageJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDynamicImageJobOutcome(GetDynamicImageJobResult(outcome.result()));
	else
		return GetDynamicImageJobOutcome(outcome.error());
}

void ICEClient::getDynamicImageJobAsync(const GetDynamicImageJobRequest& request, const GetDynamicImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDynamicImageJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetDynamicImageJobOutcomeCallable ICEClient::getDynamicImageJobCallable(const GetDynamicImageJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDynamicImageJobOutcome()>>(
			[this, request]()
			{
			return this->getDynamicImageJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetEditingProjectOutcome ICEClient::getEditingProject(const GetEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEditingProjectOutcome(GetEditingProjectResult(outcome.result()));
	else
		return GetEditingProjectOutcome(outcome.error());
}

void ICEClient::getEditingProjectAsync(const GetEditingProjectRequest& request, const GetEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetEditingProjectOutcomeCallable ICEClient::getEditingProjectCallable(const GetEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->getEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetEditingProjectMaterialsOutcome ICEClient::getEditingProjectMaterials(const GetEditingProjectMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEditingProjectMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEditingProjectMaterialsOutcome(GetEditingProjectMaterialsResult(outcome.result()));
	else
		return GetEditingProjectMaterialsOutcome(outcome.error());
}

void ICEClient::getEditingProjectMaterialsAsync(const GetEditingProjectMaterialsRequest& request, const GetEditingProjectMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEditingProjectMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetEditingProjectMaterialsOutcomeCallable ICEClient::getEditingProjectMaterialsCallable(const GetEditingProjectMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEditingProjectMaterialsOutcome()>>(
			[this, request]()
			{
			return this->getEditingProjectMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetEventCallbackOutcome ICEClient::getEventCallback(const GetEventCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEventCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEventCallbackOutcome(GetEventCallbackResult(outcome.result()));
	else
		return GetEventCallbackOutcome(outcome.error());
}

void ICEClient::getEventCallbackAsync(const GetEventCallbackRequest& request, const GetEventCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEventCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetEventCallbackOutcomeCallable ICEClient::getEventCallbackCallable(const GetEventCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEventCallbackOutcome()>>(
			[this, request]()
			{
			return this->getEventCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetLiveEditingIndexFileOutcome ICEClient::getLiveEditingIndexFile(const GetLiveEditingIndexFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLiveEditingIndexFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLiveEditingIndexFileOutcome(GetLiveEditingIndexFileResult(outcome.result()));
	else
		return GetLiveEditingIndexFileOutcome(outcome.error());
}

void ICEClient::getLiveEditingIndexFileAsync(const GetLiveEditingIndexFileRequest& request, const GetLiveEditingIndexFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLiveEditingIndexFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetLiveEditingIndexFileOutcomeCallable ICEClient::getLiveEditingIndexFileCallable(const GetLiveEditingIndexFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLiveEditingIndexFileOutcome()>>(
			[this, request]()
			{
			return this->getLiveEditingIndexFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetLiveEditingJobOutcome ICEClient::getLiveEditingJob(const GetLiveEditingJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLiveEditingJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLiveEditingJobOutcome(GetLiveEditingJobResult(outcome.result()));
	else
		return GetLiveEditingJobOutcome(outcome.error());
}

void ICEClient::getLiveEditingJobAsync(const GetLiveEditingJobRequest& request, const GetLiveEditingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLiveEditingJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetLiveEditingJobOutcomeCallable ICEClient::getLiveEditingJobCallable(const GetLiveEditingJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLiveEditingJobOutcome()>>(
			[this, request]()
			{
			return this->getLiveEditingJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetLiveRecordJobOutcome ICEClient::getLiveRecordJob(const GetLiveRecordJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLiveRecordJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLiveRecordJobOutcome(GetLiveRecordJobResult(outcome.result()));
	else
		return GetLiveRecordJobOutcome(outcome.error());
}

void ICEClient::getLiveRecordJobAsync(const GetLiveRecordJobRequest& request, const GetLiveRecordJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLiveRecordJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetLiveRecordJobOutcomeCallable ICEClient::getLiveRecordJobCallable(const GetLiveRecordJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLiveRecordJobOutcome()>>(
			[this, request]()
			{
			return this->getLiveRecordJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetLiveRecordTemplateOutcome ICEClient::getLiveRecordTemplate(const GetLiveRecordTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLiveRecordTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLiveRecordTemplateOutcome(GetLiveRecordTemplateResult(outcome.result()));
	else
		return GetLiveRecordTemplateOutcome(outcome.error());
}

void ICEClient::getLiveRecordTemplateAsync(const GetLiveRecordTemplateRequest& request, const GetLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLiveRecordTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetLiveRecordTemplateOutcomeCallable ICEClient::getLiveRecordTemplateCallable(const GetLiveRecordTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLiveRecordTemplateOutcome()>>(
			[this, request]()
			{
			return this->getLiveRecordTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetLiveSnapshotJobOutcome ICEClient::getLiveSnapshotJob(const GetLiveSnapshotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLiveSnapshotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLiveSnapshotJobOutcome(GetLiveSnapshotJobResult(outcome.result()));
	else
		return GetLiveSnapshotJobOutcome(outcome.error());
}

void ICEClient::getLiveSnapshotJobAsync(const GetLiveSnapshotJobRequest& request, const GetLiveSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLiveSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetLiveSnapshotJobOutcomeCallable ICEClient::getLiveSnapshotJobCallable(const GetLiveSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLiveSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->getLiveSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetLiveSnapshotTemplateOutcome ICEClient::getLiveSnapshotTemplate(const GetLiveSnapshotTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLiveSnapshotTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLiveSnapshotTemplateOutcome(GetLiveSnapshotTemplateResult(outcome.result()));
	else
		return GetLiveSnapshotTemplateOutcome(outcome.error());
}

void ICEClient::getLiveSnapshotTemplateAsync(const GetLiveSnapshotTemplateRequest& request, const GetLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLiveSnapshotTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetLiveSnapshotTemplateOutcomeCallable ICEClient::getLiveSnapshotTemplateCallable(const GetLiveSnapshotTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLiveSnapshotTemplateOutcome()>>(
			[this, request]()
			{
			return this->getLiveSnapshotTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetLiveTranscodeJobOutcome ICEClient::getLiveTranscodeJob(const GetLiveTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLiveTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLiveTranscodeJobOutcome(GetLiveTranscodeJobResult(outcome.result()));
	else
		return GetLiveTranscodeJobOutcome(outcome.error());
}

void ICEClient::getLiveTranscodeJobAsync(const GetLiveTranscodeJobRequest& request, const GetLiveTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLiveTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetLiveTranscodeJobOutcomeCallable ICEClient::getLiveTranscodeJobCallable(const GetLiveTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLiveTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->getLiveTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetLiveTranscodeTemplateOutcome ICEClient::getLiveTranscodeTemplate(const GetLiveTranscodeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLiveTranscodeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLiveTranscodeTemplateOutcome(GetLiveTranscodeTemplateResult(outcome.result()));
	else
		return GetLiveTranscodeTemplateOutcome(outcome.error());
}

void ICEClient::getLiveTranscodeTemplateAsync(const GetLiveTranscodeTemplateRequest& request, const GetLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLiveTranscodeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetLiveTranscodeTemplateOutcomeCallable ICEClient::getLiveTranscodeTemplateCallable(const GetLiveTranscodeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLiveTranscodeTemplateOutcome()>>(
			[this, request]()
			{
			return this->getLiveTranscodeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetMediaInfoOutcome ICEClient::getMediaInfo(const GetMediaInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaInfoOutcome(GetMediaInfoResult(outcome.result()));
	else
		return GetMediaInfoOutcome(outcome.error());
}

void ICEClient::getMediaInfoAsync(const GetMediaInfoRequest& request, const GetMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetMediaInfoOutcomeCallable ICEClient::getMediaInfoCallable(const GetMediaInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaInfoOutcome()>>(
			[this, request]()
			{
			return this->getMediaInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetMediaInfoJobOutcome ICEClient::getMediaInfoJob(const GetMediaInfoJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaInfoJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaInfoJobOutcome(GetMediaInfoJobResult(outcome.result()));
	else
		return GetMediaInfoJobOutcome(outcome.error());
}

void ICEClient::getMediaInfoJobAsync(const GetMediaInfoJobRequest& request, const GetMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaInfoJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetMediaInfoJobOutcomeCallable ICEClient::getMediaInfoJobCallable(const GetMediaInfoJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaInfoJobOutcome()>>(
			[this, request]()
			{
			return this->getMediaInfoJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetMediaMarksOutcome ICEClient::getMediaMarks(const GetMediaMarksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaMarksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaMarksOutcome(GetMediaMarksResult(outcome.result()));
	else
		return GetMediaMarksOutcome(outcome.error());
}

void ICEClient::getMediaMarksAsync(const GetMediaMarksRequest& request, const GetMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaMarks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetMediaMarksOutcomeCallable ICEClient::getMediaMarksCallable(const GetMediaMarksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaMarksOutcome()>>(
			[this, request]()
			{
			return this->getMediaMarks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetMediaProducingJobOutcome ICEClient::getMediaProducingJob(const GetMediaProducingJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMediaProducingJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMediaProducingJobOutcome(GetMediaProducingJobResult(outcome.result()));
	else
		return GetMediaProducingJobOutcome(outcome.error());
}

void ICEClient::getMediaProducingJobAsync(const GetMediaProducingJobRequest& request, const GetMediaProducingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMediaProducingJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetMediaProducingJobOutcomeCallable ICEClient::getMediaProducingJobCallable(const GetMediaProducingJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMediaProducingJobOutcome()>>(
			[this, request]()
			{
			return this->getMediaProducingJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetPackageJobOutcome ICEClient::getPackageJob(const GetPackageJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPackageJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPackageJobOutcome(GetPackageJobResult(outcome.result()));
	else
		return GetPackageJobOutcome(outcome.error());
}

void ICEClient::getPackageJobAsync(const GetPackageJobRequest& request, const GetPackageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPackageJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetPackageJobOutcomeCallable ICEClient::getPackageJobCallable(const GetPackageJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPackageJobOutcome()>>(
			[this, request]()
			{
			return this->getPackageJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetPipelineOutcome ICEClient::getPipeline(const GetPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineOutcome(GetPipelineResult(outcome.result()));
	else
		return GetPipelineOutcome(outcome.error());
}

void ICEClient::getPipelineAsync(const GetPipelineRequest& request, const GetPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetPipelineOutcomeCallable ICEClient::getPipelineCallable(const GetPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineOutcome()>>(
			[this, request]()
			{
			return this->getPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetPlayInfoOutcome ICEClient::getPlayInfo(const GetPlayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPlayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPlayInfoOutcome(GetPlayInfoResult(outcome.result()));
	else
		return GetPlayInfoOutcome(outcome.error());
}

void ICEClient::getPlayInfoAsync(const GetPlayInfoRequest& request, const GetPlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPlayInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetPlayInfoOutcomeCallable ICEClient::getPlayInfoCallable(const GetPlayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPlayInfoOutcome()>>(
			[this, request]()
			{
			return this->getPlayInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetPublicMediaInfoOutcome ICEClient::getPublicMediaInfo(const GetPublicMediaInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPublicMediaInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPublicMediaInfoOutcome(GetPublicMediaInfoResult(outcome.result()));
	else
		return GetPublicMediaInfoOutcome(outcome.error());
}

void ICEClient::getPublicMediaInfoAsync(const GetPublicMediaInfoRequest& request, const GetPublicMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPublicMediaInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetPublicMediaInfoOutcomeCallable ICEClient::getPublicMediaInfoCallable(const GetPublicMediaInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPublicMediaInfoOutcome()>>(
			[this, request]()
			{
			return this->getPublicMediaInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetSmartHandleJobOutcome ICEClient::getSmartHandleJob(const GetSmartHandleJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSmartHandleJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSmartHandleJobOutcome(GetSmartHandleJobResult(outcome.result()));
	else
		return GetSmartHandleJobOutcome(outcome.error());
}

void ICEClient::getSmartHandleJobAsync(const GetSmartHandleJobRequest& request, const GetSmartHandleJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSmartHandleJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetSmartHandleJobOutcomeCallable ICEClient::getSmartHandleJobCallable(const GetSmartHandleJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSmartHandleJobOutcome()>>(
			[this, request]()
			{
			return this->getSmartHandleJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetSnapshotJobOutcome ICEClient::getSnapshotJob(const GetSnapshotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSnapshotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSnapshotJobOutcome(GetSnapshotJobResult(outcome.result()));
	else
		return GetSnapshotJobOutcome(outcome.error());
}

void ICEClient::getSnapshotJobAsync(const GetSnapshotJobRequest& request, const GetSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetSnapshotJobOutcomeCallable ICEClient::getSnapshotJobCallable(const GetSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->getSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetSnapshotUrlsOutcome ICEClient::getSnapshotUrls(const GetSnapshotUrlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSnapshotUrlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSnapshotUrlsOutcome(GetSnapshotUrlsResult(outcome.result()));
	else
		return GetSnapshotUrlsOutcome(outcome.error());
}

void ICEClient::getSnapshotUrlsAsync(const GetSnapshotUrlsRequest& request, const GetSnapshotUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSnapshotUrls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetSnapshotUrlsOutcomeCallable ICEClient::getSnapshotUrlsCallable(const GetSnapshotUrlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSnapshotUrlsOutcome()>>(
			[this, request]()
			{
			return this->getSnapshotUrls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetSystemTemplateOutcome ICEClient::getSystemTemplate(const GetSystemTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSystemTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSystemTemplateOutcome(GetSystemTemplateResult(outcome.result()));
	else
		return GetSystemTemplateOutcome(outcome.error());
}

void ICEClient::getSystemTemplateAsync(const GetSystemTemplateRequest& request, const GetSystemTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSystemTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetSystemTemplateOutcomeCallable ICEClient::getSystemTemplateCallable(const GetSystemTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSystemTemplateOutcome()>>(
			[this, request]()
			{
			return this->getSystemTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetTemplateOutcome ICEClient::getTemplate(const GetTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTemplateOutcome(GetTemplateResult(outcome.result()));
	else
		return GetTemplateOutcome(outcome.error());
}

void ICEClient::getTemplateAsync(const GetTemplateRequest& request, const GetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetTemplateOutcomeCallable ICEClient::getTemplateCallable(const GetTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTemplateOutcome()>>(
			[this, request]()
			{
			return this->getTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetTemplateMaterialsOutcome ICEClient::getTemplateMaterials(const GetTemplateMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTemplateMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTemplateMaterialsOutcome(GetTemplateMaterialsResult(outcome.result()));
	else
		return GetTemplateMaterialsOutcome(outcome.error());
}

void ICEClient::getTemplateMaterialsAsync(const GetTemplateMaterialsRequest& request, const GetTemplateMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTemplateMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetTemplateMaterialsOutcomeCallable ICEClient::getTemplateMaterialsCallable(const GetTemplateMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTemplateMaterialsOutcome()>>(
			[this, request]()
			{
			return this->getTemplateMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetTemplateParamsOutcome ICEClient::getTemplateParams(const GetTemplateParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTemplateParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTemplateParamsOutcome(GetTemplateParamsResult(outcome.result()));
	else
		return GetTemplateParamsOutcome(outcome.error());
}

void ICEClient::getTemplateParamsAsync(const GetTemplateParamsRequest& request, const GetTemplateParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTemplateParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetTemplateParamsOutcomeCallable ICEClient::getTemplateParamsCallable(const GetTemplateParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTemplateParamsOutcome()>>(
			[this, request]()
			{
			return this->getTemplateParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetTranscodeJobOutcome ICEClient::getTranscodeJob(const GetTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTranscodeJobOutcome(GetTranscodeJobResult(outcome.result()));
	else
		return GetTranscodeJobOutcome(outcome.error());
}

void ICEClient::getTranscodeJobAsync(const GetTranscodeJobRequest& request, const GetTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetTranscodeJobOutcomeCallable ICEClient::getTranscodeJobCallable(const GetTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->getTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetUrlUploadInfosOutcome ICEClient::getUrlUploadInfos(const GetUrlUploadInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUrlUploadInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUrlUploadInfosOutcome(GetUrlUploadInfosResult(outcome.result()));
	else
		return GetUrlUploadInfosOutcome(outcome.error());
}

void ICEClient::getUrlUploadInfosAsync(const GetUrlUploadInfosRequest& request, const GetUrlUploadInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUrlUploadInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetUrlUploadInfosOutcomeCallable ICEClient::getUrlUploadInfosCallable(const GetUrlUploadInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUrlUploadInfosOutcome()>>(
			[this, request]()
			{
			return this->getUrlUploadInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::GetWorkflowTaskOutcome ICEClient::getWorkflowTask(const GetWorkflowTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkflowTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkflowTaskOutcome(GetWorkflowTaskResult(outcome.result()));
	else
		return GetWorkflowTaskOutcome(outcome.error());
}

void ICEClient::getWorkflowTaskAsync(const GetWorkflowTaskRequest& request, const GetWorkflowTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkflowTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::GetWorkflowTaskOutcomeCallable ICEClient::getWorkflowTaskCallable(const GetWorkflowTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkflowTaskOutcome()>>(
			[this, request]()
			{
			return this->getWorkflowTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListAllPublicMediaTagsOutcome ICEClient::listAllPublicMediaTags(const ListAllPublicMediaTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllPublicMediaTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllPublicMediaTagsOutcome(ListAllPublicMediaTagsResult(outcome.result()));
	else
		return ListAllPublicMediaTagsOutcome(outcome.error());
}

void ICEClient::listAllPublicMediaTagsAsync(const ListAllPublicMediaTagsRequest& request, const ListAllPublicMediaTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllPublicMediaTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListAllPublicMediaTagsOutcomeCallable ICEClient::listAllPublicMediaTagsCallable(const ListAllPublicMediaTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllPublicMediaTagsOutcome()>>(
			[this, request]()
			{
			return this->listAllPublicMediaTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListCustomTemplatesOutcome ICEClient::listCustomTemplates(const ListCustomTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomTemplatesOutcome(ListCustomTemplatesResult(outcome.result()));
	else
		return ListCustomTemplatesOutcome(outcome.error());
}

void ICEClient::listCustomTemplatesAsync(const ListCustomTemplatesRequest& request, const ListCustomTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListCustomTemplatesOutcomeCallable ICEClient::listCustomTemplatesCallable(const ListCustomTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listCustomTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListDNADBOutcome ICEClient::listDNADB(const ListDNADBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDNADBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDNADBOutcome(ListDNADBResult(outcome.result()));
	else
		return ListDNADBOutcome(outcome.error());
}

void ICEClient::listDNADBAsync(const ListDNADBRequest& request, const ListDNADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDNADB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListDNADBOutcomeCallable ICEClient::listDNADBCallable(const ListDNADBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDNADBOutcome()>>(
			[this, request]()
			{
			return this->listDNADB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListDNAFilesOutcome ICEClient::listDNAFiles(const ListDNAFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDNAFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDNAFilesOutcome(ListDNAFilesResult(outcome.result()));
	else
		return ListDNAFilesOutcome(outcome.error());
}

void ICEClient::listDNAFilesAsync(const ListDNAFilesRequest& request, const ListDNAFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDNAFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListDNAFilesOutcomeCallable ICEClient::listDNAFilesCallable(const ListDNAFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDNAFilesOutcome()>>(
			[this, request]()
			{
			return this->listDNAFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListDynamicImageJobsOutcome ICEClient::listDynamicImageJobs(const ListDynamicImageJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDynamicImageJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDynamicImageJobsOutcome(ListDynamicImageJobsResult(outcome.result()));
	else
		return ListDynamicImageJobsOutcome(outcome.error());
}

void ICEClient::listDynamicImageJobsAsync(const ListDynamicImageJobsRequest& request, const ListDynamicImageJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDynamicImageJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListDynamicImageJobsOutcomeCallable ICEClient::listDynamicImageJobsCallable(const ListDynamicImageJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDynamicImageJobsOutcome()>>(
			[this, request]()
			{
			return this->listDynamicImageJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListLiveRecordFilesOutcome ICEClient::listLiveRecordFiles(const ListLiveRecordFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveRecordFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveRecordFilesOutcome(ListLiveRecordFilesResult(outcome.result()));
	else
		return ListLiveRecordFilesOutcome(outcome.error());
}

void ICEClient::listLiveRecordFilesAsync(const ListLiveRecordFilesRequest& request, const ListLiveRecordFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveRecordFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListLiveRecordFilesOutcomeCallable ICEClient::listLiveRecordFilesCallable(const ListLiveRecordFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveRecordFilesOutcome()>>(
			[this, request]()
			{
			return this->listLiveRecordFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListLiveRecordJobsOutcome ICEClient::listLiveRecordJobs(const ListLiveRecordJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveRecordJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveRecordJobsOutcome(ListLiveRecordJobsResult(outcome.result()));
	else
		return ListLiveRecordJobsOutcome(outcome.error());
}

void ICEClient::listLiveRecordJobsAsync(const ListLiveRecordJobsRequest& request, const ListLiveRecordJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveRecordJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListLiveRecordJobsOutcomeCallable ICEClient::listLiveRecordJobsCallable(const ListLiveRecordJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveRecordJobsOutcome()>>(
			[this, request]()
			{
			return this->listLiveRecordJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListLiveRecordTemplatesOutcome ICEClient::listLiveRecordTemplates(const ListLiveRecordTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveRecordTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveRecordTemplatesOutcome(ListLiveRecordTemplatesResult(outcome.result()));
	else
		return ListLiveRecordTemplatesOutcome(outcome.error());
}

void ICEClient::listLiveRecordTemplatesAsync(const ListLiveRecordTemplatesRequest& request, const ListLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveRecordTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListLiveRecordTemplatesOutcomeCallable ICEClient::listLiveRecordTemplatesCallable(const ListLiveRecordTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveRecordTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listLiveRecordTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListLiveSnapshotFilesOutcome ICEClient::listLiveSnapshotFiles(const ListLiveSnapshotFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveSnapshotFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveSnapshotFilesOutcome(ListLiveSnapshotFilesResult(outcome.result()));
	else
		return ListLiveSnapshotFilesOutcome(outcome.error());
}

void ICEClient::listLiveSnapshotFilesAsync(const ListLiveSnapshotFilesRequest& request, const ListLiveSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveSnapshotFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListLiveSnapshotFilesOutcomeCallable ICEClient::listLiveSnapshotFilesCallable(const ListLiveSnapshotFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveSnapshotFilesOutcome()>>(
			[this, request]()
			{
			return this->listLiveSnapshotFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListLiveSnapshotJobsOutcome ICEClient::listLiveSnapshotJobs(const ListLiveSnapshotJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveSnapshotJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveSnapshotJobsOutcome(ListLiveSnapshotJobsResult(outcome.result()));
	else
		return ListLiveSnapshotJobsOutcome(outcome.error());
}

void ICEClient::listLiveSnapshotJobsAsync(const ListLiveSnapshotJobsRequest& request, const ListLiveSnapshotJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveSnapshotJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListLiveSnapshotJobsOutcomeCallable ICEClient::listLiveSnapshotJobsCallable(const ListLiveSnapshotJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveSnapshotJobsOutcome()>>(
			[this, request]()
			{
			return this->listLiveSnapshotJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListLiveSnapshotTemplatesOutcome ICEClient::listLiveSnapshotTemplates(const ListLiveSnapshotTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveSnapshotTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveSnapshotTemplatesOutcome(ListLiveSnapshotTemplatesResult(outcome.result()));
	else
		return ListLiveSnapshotTemplatesOutcome(outcome.error());
}

void ICEClient::listLiveSnapshotTemplatesAsync(const ListLiveSnapshotTemplatesRequest& request, const ListLiveSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveSnapshotTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListLiveSnapshotTemplatesOutcomeCallable ICEClient::listLiveSnapshotTemplatesCallable(const ListLiveSnapshotTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveSnapshotTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listLiveSnapshotTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListLiveTranscodeJobsOutcome ICEClient::listLiveTranscodeJobs(const ListLiveTranscodeJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveTranscodeJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveTranscodeJobsOutcome(ListLiveTranscodeJobsResult(outcome.result()));
	else
		return ListLiveTranscodeJobsOutcome(outcome.error());
}

void ICEClient::listLiveTranscodeJobsAsync(const ListLiveTranscodeJobsRequest& request, const ListLiveTranscodeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveTranscodeJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListLiveTranscodeJobsOutcomeCallable ICEClient::listLiveTranscodeJobsCallable(const ListLiveTranscodeJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveTranscodeJobsOutcome()>>(
			[this, request]()
			{
			return this->listLiveTranscodeJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListLiveTranscodeTemplatesOutcome ICEClient::listLiveTranscodeTemplates(const ListLiveTranscodeTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveTranscodeTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveTranscodeTemplatesOutcome(ListLiveTranscodeTemplatesResult(outcome.result()));
	else
		return ListLiveTranscodeTemplatesOutcome(outcome.error());
}

void ICEClient::listLiveTranscodeTemplatesAsync(const ListLiveTranscodeTemplatesRequest& request, const ListLiveTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveTranscodeTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListLiveTranscodeTemplatesOutcomeCallable ICEClient::listLiveTranscodeTemplatesCallable(const ListLiveTranscodeTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveTranscodeTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listLiveTranscodeTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListMediaBasicInfosOutcome ICEClient::listMediaBasicInfos(const ListMediaBasicInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMediaBasicInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMediaBasicInfosOutcome(ListMediaBasicInfosResult(outcome.result()));
	else
		return ListMediaBasicInfosOutcome(outcome.error());
}

void ICEClient::listMediaBasicInfosAsync(const ListMediaBasicInfosRequest& request, const ListMediaBasicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMediaBasicInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListMediaBasicInfosOutcomeCallable ICEClient::listMediaBasicInfosCallable(const ListMediaBasicInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMediaBasicInfosOutcome()>>(
			[this, request]()
			{
			return this->listMediaBasicInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListMediaInfoJobsOutcome ICEClient::listMediaInfoJobs(const ListMediaInfoJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMediaInfoJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMediaInfoJobsOutcome(ListMediaInfoJobsResult(outcome.result()));
	else
		return ListMediaInfoJobsOutcome(outcome.error());
}

void ICEClient::listMediaInfoJobsAsync(const ListMediaInfoJobsRequest& request, const ListMediaInfoJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMediaInfoJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListMediaInfoJobsOutcomeCallable ICEClient::listMediaInfoJobsCallable(const ListMediaInfoJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMediaInfoJobsOutcome()>>(
			[this, request]()
			{
			return this->listMediaInfoJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListMediaMarksOutcome ICEClient::listMediaMarks(const ListMediaMarksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMediaMarksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMediaMarksOutcome(ListMediaMarksResult(outcome.result()));
	else
		return ListMediaMarksOutcome(outcome.error());
}

void ICEClient::listMediaMarksAsync(const ListMediaMarksRequest& request, const ListMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMediaMarks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListMediaMarksOutcomeCallable ICEClient::listMediaMarksCallable(const ListMediaMarksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMediaMarksOutcome()>>(
			[this, request]()
			{
			return this->listMediaMarks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListPackageJobsOutcome ICEClient::listPackageJobs(const ListPackageJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPackageJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPackageJobsOutcome(ListPackageJobsResult(outcome.result()));
	else
		return ListPackageJobsOutcome(outcome.error());
}

void ICEClient::listPackageJobsAsync(const ListPackageJobsRequest& request, const ListPackageJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPackageJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListPackageJobsOutcomeCallable ICEClient::listPackageJobsCallable(const ListPackageJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPackageJobsOutcome()>>(
			[this, request]()
			{
			return this->listPackageJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListPipelinesOutcome ICEClient::listPipelines(const ListPipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelinesOutcome(ListPipelinesResult(outcome.result()));
	else
		return ListPipelinesOutcome(outcome.error());
}

void ICEClient::listPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListPipelinesOutcomeCallable ICEClient::listPipelinesCallable(const ListPipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelinesOutcome()>>(
			[this, request]()
			{
			return this->listPipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListPublicMediaBasicInfosOutcome ICEClient::listPublicMediaBasicInfos(const ListPublicMediaBasicInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPublicMediaBasicInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPublicMediaBasicInfosOutcome(ListPublicMediaBasicInfosResult(outcome.result()));
	else
		return ListPublicMediaBasicInfosOutcome(outcome.error());
}

void ICEClient::listPublicMediaBasicInfosAsync(const ListPublicMediaBasicInfosRequest& request, const ListPublicMediaBasicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPublicMediaBasicInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListPublicMediaBasicInfosOutcomeCallable ICEClient::listPublicMediaBasicInfosCallable(const ListPublicMediaBasicInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPublicMediaBasicInfosOutcome()>>(
			[this, request]()
			{
			return this->listPublicMediaBasicInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListSmartJobsOutcome ICEClient::listSmartJobs(const ListSmartJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSmartJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSmartJobsOutcome(ListSmartJobsResult(outcome.result()));
	else
		return ListSmartJobsOutcome(outcome.error());
}

void ICEClient::listSmartJobsAsync(const ListSmartJobsRequest& request, const ListSmartJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSmartJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListSmartJobsOutcomeCallable ICEClient::listSmartJobsCallable(const ListSmartJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSmartJobsOutcome()>>(
			[this, request]()
			{
			return this->listSmartJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListSmartSysAvatarModelsOutcome ICEClient::listSmartSysAvatarModels(const ListSmartSysAvatarModelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSmartSysAvatarModelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSmartSysAvatarModelsOutcome(ListSmartSysAvatarModelsResult(outcome.result()));
	else
		return ListSmartSysAvatarModelsOutcome(outcome.error());
}

void ICEClient::listSmartSysAvatarModelsAsync(const ListSmartSysAvatarModelsRequest& request, const ListSmartSysAvatarModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSmartSysAvatarModels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListSmartSysAvatarModelsOutcomeCallable ICEClient::listSmartSysAvatarModelsCallable(const ListSmartSysAvatarModelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSmartSysAvatarModelsOutcome()>>(
			[this, request]()
			{
			return this->listSmartSysAvatarModels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListSnapshotJobsOutcome ICEClient::listSnapshotJobs(const ListSnapshotJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSnapshotJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSnapshotJobsOutcome(ListSnapshotJobsResult(outcome.result()));
	else
		return ListSnapshotJobsOutcome(outcome.error());
}

void ICEClient::listSnapshotJobsAsync(const ListSnapshotJobsRequest& request, const ListSnapshotJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSnapshotJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListSnapshotJobsOutcomeCallable ICEClient::listSnapshotJobsCallable(const ListSnapshotJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSnapshotJobsOutcome()>>(
			[this, request]()
			{
			return this->listSnapshotJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListSystemTemplatesOutcome ICEClient::listSystemTemplates(const ListSystemTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSystemTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSystemTemplatesOutcome(ListSystemTemplatesResult(outcome.result()));
	else
		return ListSystemTemplatesOutcome(outcome.error());
}

void ICEClient::listSystemTemplatesAsync(const ListSystemTemplatesRequest& request, const ListSystemTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSystemTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListSystemTemplatesOutcomeCallable ICEClient::listSystemTemplatesCallable(const ListSystemTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSystemTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listSystemTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListTemplatesOutcome ICEClient::listTemplates(const ListTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTemplatesOutcome(ListTemplatesResult(outcome.result()));
	else
		return ListTemplatesOutcome(outcome.error());
}

void ICEClient::listTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListTemplatesOutcomeCallable ICEClient::listTemplatesCallable(const ListTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::ListTranscodeJobsOutcome ICEClient::listTranscodeJobs(const ListTranscodeJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTranscodeJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTranscodeJobsOutcome(ListTranscodeJobsResult(outcome.result()));
	else
		return ListTranscodeJobsOutcome(outcome.error());
}

void ICEClient::listTranscodeJobsAsync(const ListTranscodeJobsRequest& request, const ListTranscodeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTranscodeJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::ListTranscodeJobsOutcomeCallable ICEClient::listTranscodeJobsCallable(const ListTranscodeJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTranscodeJobsOutcome()>>(
			[this, request]()
			{
			return this->listTranscodeJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::QueryDNAJobListOutcome ICEClient::queryDNAJobList(const QueryDNAJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDNAJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDNAJobListOutcome(QueryDNAJobListResult(outcome.result()));
	else
		return QueryDNAJobListOutcome(outcome.error());
}

void ICEClient::queryDNAJobListAsync(const QueryDNAJobListRequest& request, const QueryDNAJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDNAJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::QueryDNAJobListOutcomeCallable ICEClient::queryDNAJobListCallable(const QueryDNAJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDNAJobListOutcome()>>(
			[this, request]()
			{
			return this->queryDNAJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::QueryIProductionJobOutcome ICEClient::queryIProductionJob(const QueryIProductionJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryIProductionJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryIProductionJobOutcome(QueryIProductionJobResult(outcome.result()));
	else
		return QueryIProductionJobOutcome(outcome.error());
}

void ICEClient::queryIProductionJobAsync(const QueryIProductionJobRequest& request, const QueryIProductionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIProductionJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::QueryIProductionJobOutcomeCallable ICEClient::queryIProductionJobCallable(const QueryIProductionJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIProductionJobOutcome()>>(
			[this, request]()
			{
			return this->queryIProductionJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::QueryMediaCensorJobDetailOutcome ICEClient::queryMediaCensorJobDetail(const QueryMediaCensorJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMediaCensorJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMediaCensorJobDetailOutcome(QueryMediaCensorJobDetailResult(outcome.result()));
	else
		return QueryMediaCensorJobDetailOutcome(outcome.error());
}

void ICEClient::queryMediaCensorJobDetailAsync(const QueryMediaCensorJobDetailRequest& request, const QueryMediaCensorJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaCensorJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::QueryMediaCensorJobDetailOutcomeCallable ICEClient::queryMediaCensorJobDetailCallable(const QueryMediaCensorJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaCensorJobDetailOutcome()>>(
			[this, request]()
			{
			return this->queryMediaCensorJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::QueryMediaCensorJobListOutcome ICEClient::queryMediaCensorJobList(const QueryMediaCensorJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMediaCensorJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMediaCensorJobListOutcome(QueryMediaCensorJobListResult(outcome.result()));
	else
		return QueryMediaCensorJobListOutcome(outcome.error());
}

void ICEClient::queryMediaCensorJobListAsync(const QueryMediaCensorJobListRequest& request, const QueryMediaCensorJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaCensorJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::QueryMediaCensorJobListOutcomeCallable ICEClient::queryMediaCensorJobListCallable(const QueryMediaCensorJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaCensorJobListOutcome()>>(
			[this, request]()
			{
			return this->queryMediaCensorJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::QuerySmarttagJobOutcome ICEClient::querySmarttagJob(const QuerySmarttagJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySmarttagJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySmarttagJobOutcome(QuerySmarttagJobResult(outcome.result()));
	else
		return QuerySmarttagJobOutcome(outcome.error());
}

void ICEClient::querySmarttagJobAsync(const QuerySmarttagJobRequest& request, const QuerySmarttagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySmarttagJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::QuerySmarttagJobOutcomeCallable ICEClient::querySmarttagJobCallable(const QuerySmarttagJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySmarttagJobOutcome()>>(
			[this, request]()
			{
			return this->querySmarttagJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::RefreshUploadMediaOutcome ICEClient::refreshUploadMedia(const RefreshUploadMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshUploadMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshUploadMediaOutcome(RefreshUploadMediaResult(outcome.result()));
	else
		return RefreshUploadMediaOutcome(outcome.error());
}

void ICEClient::refreshUploadMediaAsync(const RefreshUploadMediaRequest& request, const RefreshUploadMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshUploadMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::RefreshUploadMediaOutcomeCallable ICEClient::refreshUploadMediaCallable(const RefreshUploadMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshUploadMediaOutcome()>>(
			[this, request]()
			{
			return this->refreshUploadMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::RegisterMediaInfoOutcome ICEClient::registerMediaInfo(const RegisterMediaInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterMediaInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterMediaInfoOutcome(RegisterMediaInfoResult(outcome.result()));
	else
		return RegisterMediaInfoOutcome(outcome.error());
}

void ICEClient::registerMediaInfoAsync(const RegisterMediaInfoRequest& request, const RegisterMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerMediaInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::RegisterMediaInfoOutcomeCallable ICEClient::registerMediaInfoCallable(const RegisterMediaInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterMediaInfoOutcome()>>(
			[this, request]()
			{
			return this->registerMediaInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::RegisterMediaStreamOutcome ICEClient::registerMediaStream(const RegisterMediaStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterMediaStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterMediaStreamOutcome(RegisterMediaStreamResult(outcome.result()));
	else
		return RegisterMediaStreamOutcome(outcome.error());
}

void ICEClient::registerMediaStreamAsync(const RegisterMediaStreamRequest& request, const RegisterMediaStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerMediaStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::RegisterMediaStreamOutcomeCallable ICEClient::registerMediaStreamCallable(const RegisterMediaStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterMediaStreamOutcome()>>(
			[this, request]()
			{
			return this->registerMediaStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SearchEditingProjectOutcome ICEClient::searchEditingProject(const SearchEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchEditingProjectOutcome(SearchEditingProjectResult(outcome.result()));
	else
		return SearchEditingProjectOutcome(outcome.error());
}

void ICEClient::searchEditingProjectAsync(const SearchEditingProjectRequest& request, const SearchEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SearchEditingProjectOutcomeCallable ICEClient::searchEditingProjectCallable(const SearchEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->searchEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SearchMediaOutcome ICEClient::searchMedia(const SearchMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMediaOutcome(SearchMediaResult(outcome.result()));
	else
		return SearchMediaOutcome(outcome.error());
}

void ICEClient::searchMediaAsync(const SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SearchMediaOutcomeCallable ICEClient::searchMediaCallable(const SearchMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMediaOutcome()>>(
			[this, request]()
			{
			return this->searchMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SearchMediaByFaceOutcome ICEClient::searchMediaByFace(const SearchMediaByFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMediaByFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMediaByFaceOutcome(SearchMediaByFaceResult(outcome.result()));
	else
		return SearchMediaByFaceOutcome(outcome.error());
}

void ICEClient::searchMediaByFaceAsync(const SearchMediaByFaceRequest& request, const SearchMediaByFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMediaByFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SearchMediaByFaceOutcomeCallable ICEClient::searchMediaByFaceCallable(const SearchMediaByFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMediaByFaceOutcome()>>(
			[this, request]()
			{
			return this->searchMediaByFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SearchMediaClipByFaceOutcome ICEClient::searchMediaClipByFace(const SearchMediaClipByFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMediaClipByFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMediaClipByFaceOutcome(SearchMediaClipByFaceResult(outcome.result()));
	else
		return SearchMediaClipByFaceOutcome(outcome.error());
}

void ICEClient::searchMediaClipByFaceAsync(const SearchMediaClipByFaceRequest& request, const SearchMediaClipByFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMediaClipByFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SearchMediaClipByFaceOutcomeCallable ICEClient::searchMediaClipByFaceCallable(const SearchMediaClipByFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMediaClipByFaceOutcome()>>(
			[this, request]()
			{
			return this->searchMediaClipByFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SearchPublicMediaInfoOutcome ICEClient::searchPublicMediaInfo(const SearchPublicMediaInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchPublicMediaInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchPublicMediaInfoOutcome(SearchPublicMediaInfoResult(outcome.result()));
	else
		return SearchPublicMediaInfoOutcome(outcome.error());
}

void ICEClient::searchPublicMediaInfoAsync(const SearchPublicMediaInfoRequest& request, const SearchPublicMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchPublicMediaInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SearchPublicMediaInfoOutcomeCallable ICEClient::searchPublicMediaInfoCallable(const SearchPublicMediaInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchPublicMediaInfoOutcome()>>(
			[this, request]()
			{
			return this->searchPublicMediaInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SendLiveSnapshotJobCommandOutcome ICEClient::sendLiveSnapshotJobCommand(const SendLiveSnapshotJobCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendLiveSnapshotJobCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendLiveSnapshotJobCommandOutcome(SendLiveSnapshotJobCommandResult(outcome.result()));
	else
		return SendLiveSnapshotJobCommandOutcome(outcome.error());
}

void ICEClient::sendLiveSnapshotJobCommandAsync(const SendLiveSnapshotJobCommandRequest& request, const SendLiveSnapshotJobCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendLiveSnapshotJobCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SendLiveSnapshotJobCommandOutcomeCallable ICEClient::sendLiveSnapshotJobCommandCallable(const SendLiveSnapshotJobCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendLiveSnapshotJobCommandOutcome()>>(
			[this, request]()
			{
			return this->sendLiveSnapshotJobCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SendLiveTranscodeJobCommandOutcome ICEClient::sendLiveTranscodeJobCommand(const SendLiveTranscodeJobCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendLiveTranscodeJobCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendLiveTranscodeJobCommandOutcome(SendLiveTranscodeJobCommandResult(outcome.result()));
	else
		return SendLiveTranscodeJobCommandOutcome(outcome.error());
}

void ICEClient::sendLiveTranscodeJobCommandAsync(const SendLiveTranscodeJobCommandRequest& request, const SendLiveTranscodeJobCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendLiveTranscodeJobCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SendLiveTranscodeJobCommandOutcomeCallable ICEClient::sendLiveTranscodeJobCommandCallable(const SendLiveTranscodeJobCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendLiveTranscodeJobCommandOutcome()>>(
			[this, request]()
			{
			return this->sendLiveTranscodeJobCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SetContentAnalyzeConfigOutcome ICEClient::setContentAnalyzeConfig(const SetContentAnalyzeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetContentAnalyzeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetContentAnalyzeConfigOutcome(SetContentAnalyzeConfigResult(outcome.result()));
	else
		return SetContentAnalyzeConfigOutcome(outcome.error());
}

void ICEClient::setContentAnalyzeConfigAsync(const SetContentAnalyzeConfigRequest& request, const SetContentAnalyzeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setContentAnalyzeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SetContentAnalyzeConfigOutcomeCallable ICEClient::setContentAnalyzeConfigCallable(const SetContentAnalyzeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetContentAnalyzeConfigOutcome()>>(
			[this, request]()
			{
			return this->setContentAnalyzeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SetDefaultCustomTemplateOutcome ICEClient::setDefaultCustomTemplate(const SetDefaultCustomTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDefaultCustomTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDefaultCustomTemplateOutcome(SetDefaultCustomTemplateResult(outcome.result()));
	else
		return SetDefaultCustomTemplateOutcome(outcome.error());
}

void ICEClient::setDefaultCustomTemplateAsync(const SetDefaultCustomTemplateRequest& request, const SetDefaultCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultCustomTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SetDefaultCustomTemplateOutcomeCallable ICEClient::setDefaultCustomTemplateCallable(const SetDefaultCustomTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultCustomTemplateOutcome()>>(
			[this, request]()
			{
			return this->setDefaultCustomTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SetDefaultStorageLocationOutcome ICEClient::setDefaultStorageLocation(const SetDefaultStorageLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDefaultStorageLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDefaultStorageLocationOutcome(SetDefaultStorageLocationResult(outcome.result()));
	else
		return SetDefaultStorageLocationOutcome(outcome.error());
}

void ICEClient::setDefaultStorageLocationAsync(const SetDefaultStorageLocationRequest& request, const SetDefaultStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultStorageLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SetDefaultStorageLocationOutcomeCallable ICEClient::setDefaultStorageLocationCallable(const SetDefaultStorageLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultStorageLocationOutcome()>>(
			[this, request]()
			{
			return this->setDefaultStorageLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SetEventCallbackOutcome ICEClient::setEventCallback(const SetEventCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetEventCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetEventCallbackOutcome(SetEventCallbackResult(outcome.result()));
	else
		return SetEventCallbackOutcome(outcome.error());
}

void ICEClient::setEventCallbackAsync(const SetEventCallbackRequest& request, const SetEventCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setEventCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SetEventCallbackOutcomeCallable ICEClient::setEventCallbackCallable(const SetEventCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetEventCallbackOutcome()>>(
			[this, request]()
			{
			return this->setEventCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::StartWorkflowOutcome ICEClient::startWorkflow(const StartWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartWorkflowOutcome(StartWorkflowResult(outcome.result()));
	else
		return StartWorkflowOutcome(outcome.error());
}

void ICEClient::startWorkflowAsync(const StartWorkflowRequest& request, const StartWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::StartWorkflowOutcomeCallable ICEClient::startWorkflowCallable(const StartWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartWorkflowOutcome()>>(
			[this, request]()
			{
			return this->startWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitASRJobOutcome ICEClient::submitASRJob(const SubmitASRJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitASRJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitASRJobOutcome(SubmitASRJobResult(outcome.result()));
	else
		return SubmitASRJobOutcome(outcome.error());
}

void ICEClient::submitASRJobAsync(const SubmitASRJobRequest& request, const SubmitASRJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitASRJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitASRJobOutcomeCallable ICEClient::submitASRJobCallable(const SubmitASRJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitASRJobOutcome()>>(
			[this, request]()
			{
			return this->submitASRJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitAudioProduceJobOutcome ICEClient::submitAudioProduceJob(const SubmitAudioProduceJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAudioProduceJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAudioProduceJobOutcome(SubmitAudioProduceJobResult(outcome.result()));
	else
		return SubmitAudioProduceJobOutcome(outcome.error());
}

void ICEClient::submitAudioProduceJobAsync(const SubmitAudioProduceJobRequest& request, const SubmitAudioProduceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAudioProduceJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitAudioProduceJobOutcomeCallable ICEClient::submitAudioProduceJobCallable(const SubmitAudioProduceJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAudioProduceJobOutcome()>>(
			[this, request]()
			{
			return this->submitAudioProduceJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitAvatarVideoJobOutcome ICEClient::submitAvatarVideoJob(const SubmitAvatarVideoJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAvatarVideoJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAvatarVideoJobOutcome(SubmitAvatarVideoJobResult(outcome.result()));
	else
		return SubmitAvatarVideoJobOutcome(outcome.error());
}

void ICEClient::submitAvatarVideoJobAsync(const SubmitAvatarVideoJobRequest& request, const SubmitAvatarVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAvatarVideoJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitAvatarVideoJobOutcomeCallable ICEClient::submitAvatarVideoJobCallable(const SubmitAvatarVideoJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAvatarVideoJobOutcome()>>(
			[this, request]()
			{
			return this->submitAvatarVideoJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitDNAJobOutcome ICEClient::submitDNAJob(const SubmitDNAJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitDNAJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitDNAJobOutcome(SubmitDNAJobResult(outcome.result()));
	else
		return SubmitDNAJobOutcome(outcome.error());
}

void ICEClient::submitDNAJobAsync(const SubmitDNAJobRequest& request, const SubmitDNAJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitDNAJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitDNAJobOutcomeCallable ICEClient::submitDNAJobCallable(const SubmitDNAJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitDNAJobOutcome()>>(
			[this, request]()
			{
			return this->submitDNAJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitDynamicChartJobOutcome ICEClient::submitDynamicChartJob(const SubmitDynamicChartJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitDynamicChartJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitDynamicChartJobOutcome(SubmitDynamicChartJobResult(outcome.result()));
	else
		return SubmitDynamicChartJobOutcome(outcome.error());
}

void ICEClient::submitDynamicChartJobAsync(const SubmitDynamicChartJobRequest& request, const SubmitDynamicChartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitDynamicChartJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitDynamicChartJobOutcomeCallable ICEClient::submitDynamicChartJobCallable(const SubmitDynamicChartJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitDynamicChartJobOutcome()>>(
			[this, request]()
			{
			return this->submitDynamicChartJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitDynamicImageJobOutcome ICEClient::submitDynamicImageJob(const SubmitDynamicImageJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitDynamicImageJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitDynamicImageJobOutcome(SubmitDynamicImageJobResult(outcome.result()));
	else
		return SubmitDynamicImageJobOutcome(outcome.error());
}

void ICEClient::submitDynamicImageJobAsync(const SubmitDynamicImageJobRequest& request, const SubmitDynamicImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitDynamicImageJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitDynamicImageJobOutcomeCallable ICEClient::submitDynamicImageJobCallable(const SubmitDynamicImageJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitDynamicImageJobOutcome()>>(
			[this, request]()
			{
			return this->submitDynamicImageJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitIProductionJobOutcome ICEClient::submitIProductionJob(const SubmitIProductionJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitIProductionJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitIProductionJobOutcome(SubmitIProductionJobResult(outcome.result()));
	else
		return SubmitIProductionJobOutcome(outcome.error());
}

void ICEClient::submitIProductionJobAsync(const SubmitIProductionJobRequest& request, const SubmitIProductionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitIProductionJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitIProductionJobOutcomeCallable ICEClient::submitIProductionJobCallable(const SubmitIProductionJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitIProductionJobOutcome()>>(
			[this, request]()
			{
			return this->submitIProductionJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitLiveEditingJobOutcome ICEClient::submitLiveEditingJob(const SubmitLiveEditingJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitLiveEditingJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitLiveEditingJobOutcome(SubmitLiveEditingJobResult(outcome.result()));
	else
		return SubmitLiveEditingJobOutcome(outcome.error());
}

void ICEClient::submitLiveEditingJobAsync(const SubmitLiveEditingJobRequest& request, const SubmitLiveEditingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitLiveEditingJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitLiveEditingJobOutcomeCallable ICEClient::submitLiveEditingJobCallable(const SubmitLiveEditingJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitLiveEditingJobOutcome()>>(
			[this, request]()
			{
			return this->submitLiveEditingJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitLiveRecordJobOutcome ICEClient::submitLiveRecordJob(const SubmitLiveRecordJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitLiveRecordJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitLiveRecordJobOutcome(SubmitLiveRecordJobResult(outcome.result()));
	else
		return SubmitLiveRecordJobOutcome(outcome.error());
}

void ICEClient::submitLiveRecordJobAsync(const SubmitLiveRecordJobRequest& request, const SubmitLiveRecordJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitLiveRecordJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitLiveRecordJobOutcomeCallable ICEClient::submitLiveRecordJobCallable(const SubmitLiveRecordJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitLiveRecordJobOutcome()>>(
			[this, request]()
			{
			return this->submitLiveRecordJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitLiveSnapshotJobOutcome ICEClient::submitLiveSnapshotJob(const SubmitLiveSnapshotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitLiveSnapshotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitLiveSnapshotJobOutcome(SubmitLiveSnapshotJobResult(outcome.result()));
	else
		return SubmitLiveSnapshotJobOutcome(outcome.error());
}

void ICEClient::submitLiveSnapshotJobAsync(const SubmitLiveSnapshotJobRequest& request, const SubmitLiveSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitLiveSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitLiveSnapshotJobOutcomeCallable ICEClient::submitLiveSnapshotJobCallable(const SubmitLiveSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitLiveSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->submitLiveSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitLiveTranscodeJobOutcome ICEClient::submitLiveTranscodeJob(const SubmitLiveTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitLiveTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitLiveTranscodeJobOutcome(SubmitLiveTranscodeJobResult(outcome.result()));
	else
		return SubmitLiveTranscodeJobOutcome(outcome.error());
}

void ICEClient::submitLiveTranscodeJobAsync(const SubmitLiveTranscodeJobRequest& request, const SubmitLiveTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitLiveTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitLiveTranscodeJobOutcomeCallable ICEClient::submitLiveTranscodeJobCallable(const SubmitLiveTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitLiveTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->submitLiveTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitMediaCensorJobOutcome ICEClient::submitMediaCensorJob(const SubmitMediaCensorJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitMediaCensorJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitMediaCensorJobOutcome(SubmitMediaCensorJobResult(outcome.result()));
	else
		return SubmitMediaCensorJobOutcome(outcome.error());
}

void ICEClient::submitMediaCensorJobAsync(const SubmitMediaCensorJobRequest& request, const SubmitMediaCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitMediaCensorJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitMediaCensorJobOutcomeCallable ICEClient::submitMediaCensorJobCallable(const SubmitMediaCensorJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitMediaCensorJobOutcome()>>(
			[this, request]()
			{
			return this->submitMediaCensorJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitMediaInfoJobOutcome ICEClient::submitMediaInfoJob(const SubmitMediaInfoJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitMediaInfoJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitMediaInfoJobOutcome(SubmitMediaInfoJobResult(outcome.result()));
	else
		return SubmitMediaInfoJobOutcome(outcome.error());
}

void ICEClient::submitMediaInfoJobAsync(const SubmitMediaInfoJobRequest& request, const SubmitMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitMediaInfoJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitMediaInfoJobOutcomeCallable ICEClient::submitMediaInfoJobCallable(const SubmitMediaInfoJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitMediaInfoJobOutcome()>>(
			[this, request]()
			{
			return this->submitMediaInfoJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitMediaProducingJobOutcome ICEClient::submitMediaProducingJob(const SubmitMediaProducingJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitMediaProducingJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitMediaProducingJobOutcome(SubmitMediaProducingJobResult(outcome.result()));
	else
		return SubmitMediaProducingJobOutcome(outcome.error());
}

void ICEClient::submitMediaProducingJobAsync(const SubmitMediaProducingJobRequest& request, const SubmitMediaProducingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitMediaProducingJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitMediaProducingJobOutcomeCallable ICEClient::submitMediaProducingJobCallable(const SubmitMediaProducingJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitMediaProducingJobOutcome()>>(
			[this, request]()
			{
			return this->submitMediaProducingJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitPackageJobOutcome ICEClient::submitPackageJob(const SubmitPackageJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitPackageJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitPackageJobOutcome(SubmitPackageJobResult(outcome.result()));
	else
		return SubmitPackageJobOutcome(outcome.error());
}

void ICEClient::submitPackageJobAsync(const SubmitPackageJobRequest& request, const SubmitPackageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitPackageJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitPackageJobOutcomeCallable ICEClient::submitPackageJobCallable(const SubmitPackageJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitPackageJobOutcome()>>(
			[this, request]()
			{
			return this->submitPackageJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitSmarttagJobOutcome ICEClient::submitSmarttagJob(const SubmitSmarttagJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSmarttagJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSmarttagJobOutcome(SubmitSmarttagJobResult(outcome.result()));
	else
		return SubmitSmarttagJobOutcome(outcome.error());
}

void ICEClient::submitSmarttagJobAsync(const SubmitSmarttagJobRequest& request, const SubmitSmarttagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSmarttagJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitSmarttagJobOutcomeCallable ICEClient::submitSmarttagJobCallable(const SubmitSmarttagJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSmarttagJobOutcome()>>(
			[this, request]()
			{
			return this->submitSmarttagJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitSnapshotJobOutcome ICEClient::submitSnapshotJob(const SubmitSnapshotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSnapshotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSnapshotJobOutcome(SubmitSnapshotJobResult(outcome.result()));
	else
		return SubmitSnapshotJobOutcome(outcome.error());
}

void ICEClient::submitSnapshotJobAsync(const SubmitSnapshotJobRequest& request, const SubmitSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitSnapshotJobOutcomeCallable ICEClient::submitSnapshotJobCallable(const SubmitSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->submitSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitSubtitleProduceJobOutcome ICEClient::submitSubtitleProduceJob(const SubmitSubtitleProduceJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSubtitleProduceJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSubtitleProduceJobOutcome(SubmitSubtitleProduceJobResult(outcome.result()));
	else
		return SubmitSubtitleProduceJobOutcome(outcome.error());
}

void ICEClient::submitSubtitleProduceJobAsync(const SubmitSubtitleProduceJobRequest& request, const SubmitSubtitleProduceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSubtitleProduceJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitSubtitleProduceJobOutcomeCallable ICEClient::submitSubtitleProduceJobCallable(const SubmitSubtitleProduceJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSubtitleProduceJobOutcome()>>(
			[this, request]()
			{
			return this->submitSubtitleProduceJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitSyncMediaInfoJobOutcome ICEClient::submitSyncMediaInfoJob(const SubmitSyncMediaInfoJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSyncMediaInfoJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSyncMediaInfoJobOutcome(SubmitSyncMediaInfoJobResult(outcome.result()));
	else
		return SubmitSyncMediaInfoJobOutcome(outcome.error());
}

void ICEClient::submitSyncMediaInfoJobAsync(const SubmitSyncMediaInfoJobRequest& request, const SubmitSyncMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSyncMediaInfoJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitSyncMediaInfoJobOutcomeCallable ICEClient::submitSyncMediaInfoJobCallable(const SubmitSyncMediaInfoJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSyncMediaInfoJobOutcome()>>(
			[this, request]()
			{
			return this->submitSyncMediaInfoJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::SubmitTranscodeJobOutcome ICEClient::submitTranscodeJob(const SubmitTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTranscodeJobOutcome(SubmitTranscodeJobResult(outcome.result()));
	else
		return SubmitTranscodeJobOutcome(outcome.error());
}

void ICEClient::submitTranscodeJobAsync(const SubmitTranscodeJobRequest& request, const SubmitTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::SubmitTranscodeJobOutcomeCallable ICEClient::submitTranscodeJobCallable(const SubmitTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->submitTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateCategoryOutcome ICEClient::updateCategory(const UpdateCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCategoryOutcome(UpdateCategoryResult(outcome.result()));
	else
		return UpdateCategoryOutcome(outcome.error());
}

void ICEClient::updateCategoryAsync(const UpdateCategoryRequest& request, const UpdateCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateCategoryOutcomeCallable ICEClient::updateCategoryCallable(const UpdateCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCategoryOutcome()>>(
			[this, request]()
			{
			return this->updateCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateCustomTemplateOutcome ICEClient::updateCustomTemplate(const UpdateCustomTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomTemplateOutcome(UpdateCustomTemplateResult(outcome.result()));
	else
		return UpdateCustomTemplateOutcome(outcome.error());
}

void ICEClient::updateCustomTemplateAsync(const UpdateCustomTemplateRequest& request, const UpdateCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateCustomTemplateOutcomeCallable ICEClient::updateCustomTemplateCallable(const UpdateCustomTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateCustomTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateEditingProjectOutcome ICEClient::updateEditingProject(const UpdateEditingProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEditingProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEditingProjectOutcome(UpdateEditingProjectResult(outcome.result()));
	else
		return UpdateEditingProjectOutcome(outcome.error());
}

void ICEClient::updateEditingProjectAsync(const UpdateEditingProjectRequest& request, const UpdateEditingProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEditingProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateEditingProjectOutcomeCallable ICEClient::updateEditingProjectCallable(const UpdateEditingProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEditingProjectOutcome()>>(
			[this, request]()
			{
			return this->updateEditingProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateLiveRecordTemplateOutcome ICEClient::updateLiveRecordTemplate(const UpdateLiveRecordTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveRecordTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveRecordTemplateOutcome(UpdateLiveRecordTemplateResult(outcome.result()));
	else
		return UpdateLiveRecordTemplateOutcome(outcome.error());
}

void ICEClient::updateLiveRecordTemplateAsync(const UpdateLiveRecordTemplateRequest& request, const UpdateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveRecordTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateLiveRecordTemplateOutcomeCallable ICEClient::updateLiveRecordTemplateCallable(const UpdateLiveRecordTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveRecordTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateLiveRecordTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateLiveSnapshotTemplateOutcome ICEClient::updateLiveSnapshotTemplate(const UpdateLiveSnapshotTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveSnapshotTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveSnapshotTemplateOutcome(UpdateLiveSnapshotTemplateResult(outcome.result()));
	else
		return UpdateLiveSnapshotTemplateOutcome(outcome.error());
}

void ICEClient::updateLiveSnapshotTemplateAsync(const UpdateLiveSnapshotTemplateRequest& request, const UpdateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveSnapshotTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateLiveSnapshotTemplateOutcomeCallable ICEClient::updateLiveSnapshotTemplateCallable(const UpdateLiveSnapshotTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveSnapshotTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateLiveSnapshotTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateLiveTranscodeJobOutcome ICEClient::updateLiveTranscodeJob(const UpdateLiveTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveTranscodeJobOutcome(UpdateLiveTranscodeJobResult(outcome.result()));
	else
		return UpdateLiveTranscodeJobOutcome(outcome.error());
}

void ICEClient::updateLiveTranscodeJobAsync(const UpdateLiveTranscodeJobRequest& request, const UpdateLiveTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateLiveTranscodeJobOutcomeCallable ICEClient::updateLiveTranscodeJobCallable(const UpdateLiveTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->updateLiveTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateLiveTranscodeTemplateOutcome ICEClient::updateLiveTranscodeTemplate(const UpdateLiveTranscodeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveTranscodeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveTranscodeTemplateOutcome(UpdateLiveTranscodeTemplateResult(outcome.result()));
	else
		return UpdateLiveTranscodeTemplateOutcome(outcome.error());
}

void ICEClient::updateLiveTranscodeTemplateAsync(const UpdateLiveTranscodeTemplateRequest& request, const UpdateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveTranscodeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateLiveTranscodeTemplateOutcomeCallable ICEClient::updateLiveTranscodeTemplateCallable(const UpdateLiveTranscodeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveTranscodeTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateLiveTranscodeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateMediaInfoOutcome ICEClient::updateMediaInfo(const UpdateMediaInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMediaInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMediaInfoOutcome(UpdateMediaInfoResult(outcome.result()));
	else
		return UpdateMediaInfoOutcome(outcome.error());
}

void ICEClient::updateMediaInfoAsync(const UpdateMediaInfoRequest& request, const UpdateMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMediaInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateMediaInfoOutcomeCallable ICEClient::updateMediaInfoCallable(const UpdateMediaInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMediaInfoOutcome()>>(
			[this, request]()
			{
			return this->updateMediaInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateMediaMarksOutcome ICEClient::updateMediaMarks(const UpdateMediaMarksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMediaMarksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMediaMarksOutcome(UpdateMediaMarksResult(outcome.result()));
	else
		return UpdateMediaMarksOutcome(outcome.error());
}

void ICEClient::updateMediaMarksAsync(const UpdateMediaMarksRequest& request, const UpdateMediaMarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMediaMarks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateMediaMarksOutcomeCallable ICEClient::updateMediaMarksCallable(const UpdateMediaMarksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMediaMarksOutcome()>>(
			[this, request]()
			{
			return this->updateMediaMarks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdatePipelineOutcome ICEClient::updatePipeline(const UpdatePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePipelineOutcome(UpdatePipelineResult(outcome.result()));
	else
		return UpdatePipelineOutcome(outcome.error());
}

void ICEClient::updatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdatePipelineOutcomeCallable ICEClient::updatePipelineCallable(const UpdatePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelineOutcome()>>(
			[this, request]()
			{
			return this->updatePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateSmartJobOutcome ICEClient::updateSmartJob(const UpdateSmartJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSmartJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSmartJobOutcome(UpdateSmartJobResult(outcome.result()));
	else
		return UpdateSmartJobOutcome(outcome.error());
}

void ICEClient::updateSmartJobAsync(const UpdateSmartJobRequest& request, const UpdateSmartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSmartJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateSmartJobOutcomeCallable ICEClient::updateSmartJobCallable(const UpdateSmartJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSmartJobOutcome()>>(
			[this, request]()
			{
			return this->updateSmartJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UpdateTemplateOutcome ICEClient::updateTemplate(const UpdateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTemplateOutcome(UpdateTemplateResult(outcome.result()));
	else
		return UpdateTemplateOutcome(outcome.error());
}

void ICEClient::updateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UpdateTemplateOutcomeCallable ICEClient::updateTemplateCallable(const UpdateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UploadMediaByURLOutcome ICEClient::uploadMediaByURL(const UploadMediaByURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadMediaByURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadMediaByURLOutcome(UploadMediaByURLResult(outcome.result()));
	else
		return UploadMediaByURLOutcome(outcome.error());
}

void ICEClient::uploadMediaByURLAsync(const UploadMediaByURLRequest& request, const UploadMediaByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadMediaByURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UploadMediaByURLOutcomeCallable ICEClient::uploadMediaByURLCallable(const UploadMediaByURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadMediaByURLOutcome()>>(
			[this, request]()
			{
			return this->uploadMediaByURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ICEClient::UploadStreamByURLOutcome ICEClient::uploadStreamByURL(const UploadStreamByURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadStreamByURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadStreamByURLOutcome(UploadStreamByURLResult(outcome.result()));
	else
		return UploadStreamByURLOutcome(outcome.error());
}

void ICEClient::uploadStreamByURLAsync(const UploadStreamByURLRequest& request, const UploadStreamByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadStreamByURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ICEClient::UploadStreamByURLOutcomeCallable ICEClient::uploadStreamByURLCallable(const UploadStreamByURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadStreamByURLOutcome()>>(
			[this, request]()
			{
			return this->uploadStreamByURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

