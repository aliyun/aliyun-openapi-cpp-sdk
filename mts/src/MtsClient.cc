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

#include <alibabacloud/mts/MtsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

namespace
{
	const std::string SERVICE_NAME = "Mts";
}

MtsClient::MtsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mts");
}

MtsClient::MtsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mts");
}

MtsClient::MtsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "mts");
}

MtsClient::~MtsClient()
{}

MtsClient::ActivateMediaWorkflowOutcome MtsClient::activateMediaWorkflow(const ActivateMediaWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateMediaWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateMediaWorkflowOutcome(ActivateMediaWorkflowResult(outcome.result()));
	else
		return ActivateMediaWorkflowOutcome(outcome.error());
}

void MtsClient::activateMediaWorkflowAsync(const ActivateMediaWorkflowRequest& request, const ActivateMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateMediaWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ActivateMediaWorkflowOutcomeCallable MtsClient::activateMediaWorkflowCallable(const ActivateMediaWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateMediaWorkflowOutcome()>>(
			[this, request]()
			{
			return this->activateMediaWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddMediaOutcome MtsClient::addMedia(const AddMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMediaOutcome(AddMediaResult(outcome.result()));
	else
		return AddMediaOutcome(outcome.error());
}

void MtsClient::addMediaAsync(const AddMediaRequest& request, const AddMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddMediaOutcomeCallable MtsClient::addMediaCallable(const AddMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMediaOutcome()>>(
			[this, request]()
			{
			return this->addMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddMediaTagOutcome MtsClient::addMediaTag(const AddMediaTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMediaTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMediaTagOutcome(AddMediaTagResult(outcome.result()));
	else
		return AddMediaTagOutcome(outcome.error());
}

void MtsClient::addMediaTagAsync(const AddMediaTagRequest& request, const AddMediaTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMediaTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddMediaTagOutcomeCallable MtsClient::addMediaTagCallable(const AddMediaTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMediaTagOutcome()>>(
			[this, request]()
			{
			return this->addMediaTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddMediaWorkflowOutcome MtsClient::addMediaWorkflow(const AddMediaWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMediaWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMediaWorkflowOutcome(AddMediaWorkflowResult(outcome.result()));
	else
		return AddMediaWorkflowOutcome(outcome.error());
}

void MtsClient::addMediaWorkflowAsync(const AddMediaWorkflowRequest& request, const AddMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMediaWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddMediaWorkflowOutcomeCallable MtsClient::addMediaWorkflowCallable(const AddMediaWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMediaWorkflowOutcome()>>(
			[this, request]()
			{
			return this->addMediaWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddPipelineOutcome MtsClient::addPipeline(const AddPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPipelineOutcome(AddPipelineResult(outcome.result()));
	else
		return AddPipelineOutcome(outcome.error());
}

void MtsClient::addPipelineAsync(const AddPipelineRequest& request, const AddPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddPipelineOutcomeCallable MtsClient::addPipelineCallable(const AddPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPipelineOutcome()>>(
			[this, request]()
			{
			return this->addPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddSmarttagTemplateOutcome MtsClient::addSmarttagTemplate(const AddSmarttagTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSmarttagTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSmarttagTemplateOutcome(AddSmarttagTemplateResult(outcome.result()));
	else
		return AddSmarttagTemplateOutcome(outcome.error());
}

void MtsClient::addSmarttagTemplateAsync(const AddSmarttagTemplateRequest& request, const AddSmarttagTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSmarttagTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddSmarttagTemplateOutcomeCallable MtsClient::addSmarttagTemplateCallable(const AddSmarttagTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSmarttagTemplateOutcome()>>(
			[this, request]()
			{
			return this->addSmarttagTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddTemplateOutcome MtsClient::addTemplate(const AddTemplateRequest &request) const
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

void MtsClient::addTemplateAsync(const AddTemplateRequest& request, const AddTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddTemplateOutcomeCallable MtsClient::addTemplateCallable(const AddTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTemplateOutcome()>>(
			[this, request]()
			{
			return this->addTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddWaterMarkTemplateOutcome MtsClient::addWaterMarkTemplate(const AddWaterMarkTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddWaterMarkTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddWaterMarkTemplateOutcome(AddWaterMarkTemplateResult(outcome.result()));
	else
		return AddWaterMarkTemplateOutcome(outcome.error());
}

void MtsClient::addWaterMarkTemplateAsync(const AddWaterMarkTemplateRequest& request, const AddWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addWaterMarkTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddWaterMarkTemplateOutcomeCallable MtsClient::addWaterMarkTemplateCallable(const AddWaterMarkTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddWaterMarkTemplateOutcome()>>(
			[this, request]()
			{
			return this->addWaterMarkTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::BindInputBucketOutcome MtsClient::bindInputBucket(const BindInputBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindInputBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindInputBucketOutcome(BindInputBucketResult(outcome.result()));
	else
		return BindInputBucketOutcome(outcome.error());
}

void MtsClient::bindInputBucketAsync(const BindInputBucketRequest& request, const BindInputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindInputBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::BindInputBucketOutcomeCallable MtsClient::bindInputBucketCallable(const BindInputBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindInputBucketOutcome()>>(
			[this, request]()
			{
			return this->bindInputBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::BindOutputBucketOutcome MtsClient::bindOutputBucket(const BindOutputBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindOutputBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindOutputBucketOutcome(BindOutputBucketResult(outcome.result()));
	else
		return BindOutputBucketOutcome(outcome.error());
}

void MtsClient::bindOutputBucketAsync(const BindOutputBucketRequest& request, const BindOutputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindOutputBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::BindOutputBucketOutcomeCallable MtsClient::bindOutputBucketCallable(const BindOutputBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindOutputBucketOutcome()>>(
			[this, request]()
			{
			return this->bindOutputBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::CancelJobOutcome MtsClient::cancelJob(const CancelJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelJobOutcome(CancelJobResult(outcome.result()));
	else
		return CancelJobOutcome(outcome.error());
}

void MtsClient::cancelJobAsync(const CancelJobRequest& request, const CancelJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::CancelJobOutcomeCallable MtsClient::cancelJobCallable(const CancelJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelJobOutcome()>>(
			[this, request]()
			{
			return this->cancelJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::CreateCustomEntityOutcome MtsClient::createCustomEntity(const CreateCustomEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomEntityOutcome(CreateCustomEntityResult(outcome.result()));
	else
		return CreateCustomEntityOutcome(outcome.error());
}

void MtsClient::createCustomEntityAsync(const CreateCustomEntityRequest& request, const CreateCustomEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::CreateCustomEntityOutcomeCallable MtsClient::createCustomEntityCallable(const CreateCustomEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomEntityOutcome()>>(
			[this, request]()
			{
			return this->createCustomEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::CreateCustomGroupOutcome MtsClient::createCustomGroup(const CreateCustomGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomGroupOutcome(CreateCustomGroupResult(outcome.result()));
	else
		return CreateCustomGroupOutcome(outcome.error());
}

void MtsClient::createCustomGroupAsync(const CreateCustomGroupRequest& request, const CreateCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::CreateCustomGroupOutcomeCallable MtsClient::createCustomGroupCallable(const CreateCustomGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomGroupOutcome()>>(
			[this, request]()
			{
			return this->createCustomGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::CreateFpShotDBOutcome MtsClient::createFpShotDB(const CreateFpShotDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFpShotDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFpShotDBOutcome(CreateFpShotDBResult(outcome.result()));
	else
		return CreateFpShotDBOutcome(outcome.error());
}

void MtsClient::createFpShotDBAsync(const CreateFpShotDBRequest& request, const CreateFpShotDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFpShotDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::CreateFpShotDBOutcomeCallable MtsClient::createFpShotDBCallable(const CreateFpShotDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFpShotDBOutcome()>>(
			[this, request]()
			{
			return this->createFpShotDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeactivateMediaWorkflowOutcome MtsClient::deactivateMediaWorkflow(const DeactivateMediaWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeactivateMediaWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactivateMediaWorkflowOutcome(DeactivateMediaWorkflowResult(outcome.result()));
	else
		return DeactivateMediaWorkflowOutcome(outcome.error());
}

void MtsClient::deactivateMediaWorkflowAsync(const DeactivateMediaWorkflowRequest& request, const DeactivateMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactivateMediaWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeactivateMediaWorkflowOutcomeCallable MtsClient::deactivateMediaWorkflowCallable(const DeactivateMediaWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactivateMediaWorkflowOutcome()>>(
			[this, request]()
			{
			return this->deactivateMediaWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteCustomEntityOutcome MtsClient::deleteCustomEntity(const DeleteCustomEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomEntityOutcome(DeleteCustomEntityResult(outcome.result()));
	else
		return DeleteCustomEntityOutcome(outcome.error());
}

void MtsClient::deleteCustomEntityAsync(const DeleteCustomEntityRequest& request, const DeleteCustomEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteCustomEntityOutcomeCallable MtsClient::deleteCustomEntityCallable(const DeleteCustomEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomEntityOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteCustomGroupOutcome MtsClient::deleteCustomGroup(const DeleteCustomGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomGroupOutcome(DeleteCustomGroupResult(outcome.result()));
	else
		return DeleteCustomGroupOutcome(outcome.error());
}

void MtsClient::deleteCustomGroupAsync(const DeleteCustomGroupRequest& request, const DeleteCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteCustomGroupOutcomeCallable MtsClient::deleteCustomGroupCallable(const DeleteCustomGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteCustomViewOutcome MtsClient::deleteCustomView(const DeleteCustomViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomViewOutcome(DeleteCustomViewResult(outcome.result()));
	else
		return DeleteCustomViewOutcome(outcome.error());
}

void MtsClient::deleteCustomViewAsync(const DeleteCustomViewRequest& request, const DeleteCustomViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteCustomViewOutcomeCallable MtsClient::deleteCustomViewCallable(const DeleteCustomViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomViewOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteMediaOutcome MtsClient::deleteMedia(const DeleteMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMediaOutcome(DeleteMediaResult(outcome.result()));
	else
		return DeleteMediaOutcome(outcome.error());
}

void MtsClient::deleteMediaAsync(const DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteMediaOutcomeCallable MtsClient::deleteMediaCallable(const DeleteMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMediaOutcome()>>(
			[this, request]()
			{
			return this->deleteMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteMediaTagOutcome MtsClient::deleteMediaTag(const DeleteMediaTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMediaTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMediaTagOutcome(DeleteMediaTagResult(outcome.result()));
	else
		return DeleteMediaTagOutcome(outcome.error());
}

void MtsClient::deleteMediaTagAsync(const DeleteMediaTagRequest& request, const DeleteMediaTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMediaTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteMediaTagOutcomeCallable MtsClient::deleteMediaTagCallable(const DeleteMediaTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMediaTagOutcome()>>(
			[this, request]()
			{
			return this->deleteMediaTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteMediaWorkflowOutcome MtsClient::deleteMediaWorkflow(const DeleteMediaWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMediaWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMediaWorkflowOutcome(DeleteMediaWorkflowResult(outcome.result()));
	else
		return DeleteMediaWorkflowOutcome(outcome.error());
}

void MtsClient::deleteMediaWorkflowAsync(const DeleteMediaWorkflowRequest& request, const DeleteMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMediaWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteMediaWorkflowOutcomeCallable MtsClient::deleteMediaWorkflowCallable(const DeleteMediaWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMediaWorkflowOutcome()>>(
			[this, request]()
			{
			return this->deleteMediaWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeletePipelineOutcome MtsClient::deletePipeline(const DeletePipelineRequest &request) const
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

void MtsClient::deletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeletePipelineOutcomeCallable MtsClient::deletePipelineCallable(const DeletePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePipelineOutcome()>>(
			[this, request]()
			{
			return this->deletePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteSmarttagTemplateOutcome MtsClient::deleteSmarttagTemplate(const DeleteSmarttagTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSmarttagTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSmarttagTemplateOutcome(DeleteSmarttagTemplateResult(outcome.result()));
	else
		return DeleteSmarttagTemplateOutcome(outcome.error());
}

void MtsClient::deleteSmarttagTemplateAsync(const DeleteSmarttagTemplateRequest& request, const DeleteSmarttagTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSmarttagTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteSmarttagTemplateOutcomeCallable MtsClient::deleteSmarttagTemplateCallable(const DeleteSmarttagTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSmarttagTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteSmarttagTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteTemplateOutcome MtsClient::deleteTemplate(const DeleteTemplateRequest &request) const
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

void MtsClient::deleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteTemplateOutcomeCallable MtsClient::deleteTemplateCallable(const DeleteTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::DeleteWaterMarkTemplateOutcome MtsClient::deleteWaterMarkTemplate(const DeleteWaterMarkTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWaterMarkTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWaterMarkTemplateOutcome(DeleteWaterMarkTemplateResult(outcome.result()));
	else
		return DeleteWaterMarkTemplateOutcome(outcome.error());
}

void MtsClient::deleteWaterMarkTemplateAsync(const DeleteWaterMarkTemplateRequest& request, const DeleteWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWaterMarkTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteWaterMarkTemplateOutcomeCallable MtsClient::deleteWaterMarkTemplateCallable(const DeleteWaterMarkTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWaterMarkTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteWaterMarkTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ImAuditOutcome MtsClient::imAudit(const ImAuditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImAuditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImAuditOutcome(ImAuditResult(outcome.result()));
	else
		return ImAuditOutcome(outcome.error());
}

void MtsClient::imAuditAsync(const ImAuditRequest& request, const ImAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ImAuditOutcomeCallable MtsClient::imAuditCallable(const ImAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImAuditOutcome()>>(
			[this, request]()
			{
			return this->imAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ImportFpShotJobOutcome MtsClient::importFpShotJob(const ImportFpShotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportFpShotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportFpShotJobOutcome(ImportFpShotJobResult(outcome.result()));
	else
		return ImportFpShotJobOutcome(outcome.error());
}

void MtsClient::importFpShotJobAsync(const ImportFpShotJobRequest& request, const ImportFpShotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importFpShotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ImportFpShotJobOutcomeCallable MtsClient::importFpShotJobCallable(const ImportFpShotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportFpShotJobOutcome()>>(
			[this, request]()
			{
			return this->importFpShotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListAllMediaBucketOutcome MtsClient::listAllMediaBucket(const ListAllMediaBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllMediaBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllMediaBucketOutcome(ListAllMediaBucketResult(outcome.result()));
	else
		return ListAllMediaBucketOutcome(outcome.error());
}

void MtsClient::listAllMediaBucketAsync(const ListAllMediaBucketRequest& request, const ListAllMediaBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllMediaBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListAllMediaBucketOutcomeCallable MtsClient::listAllMediaBucketCallable(const ListAllMediaBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllMediaBucketOutcome()>>(
			[this, request]()
			{
			return this->listAllMediaBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListCustomEntitiesOutcome MtsClient::listCustomEntities(const ListCustomEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomEntitiesOutcome(ListCustomEntitiesResult(outcome.result()));
	else
		return ListCustomEntitiesOutcome(outcome.error());
}

void MtsClient::listCustomEntitiesAsync(const ListCustomEntitiesRequest& request, const ListCustomEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListCustomEntitiesOutcomeCallable MtsClient::listCustomEntitiesCallable(const ListCustomEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomEntitiesOutcome()>>(
			[this, request]()
			{
			return this->listCustomEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListCustomGroupsOutcome MtsClient::listCustomGroups(const ListCustomGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomGroupsOutcome(ListCustomGroupsResult(outcome.result()));
	else
		return ListCustomGroupsOutcome(outcome.error());
}

void MtsClient::listCustomGroupsAsync(const ListCustomGroupsRequest& request, const ListCustomGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListCustomGroupsOutcomeCallable MtsClient::listCustomGroupsCallable(const ListCustomGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomGroupsOutcome()>>(
			[this, request]()
			{
			return this->listCustomGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListCustomPersonsOutcome MtsClient::listCustomPersons(const ListCustomPersonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomPersonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomPersonsOutcome(ListCustomPersonsResult(outcome.result()));
	else
		return ListCustomPersonsOutcome(outcome.error());
}

void MtsClient::listCustomPersonsAsync(const ListCustomPersonsRequest& request, const ListCustomPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomPersons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListCustomPersonsOutcomeCallable MtsClient::listCustomPersonsCallable(const ListCustomPersonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomPersonsOutcome()>>(
			[this, request]()
			{
			return this->listCustomPersons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListCustomViewsOutcome MtsClient::listCustomViews(const ListCustomViewsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomViewsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomViewsOutcome(ListCustomViewsResult(outcome.result()));
	else
		return ListCustomViewsOutcome(outcome.error());
}

void MtsClient::listCustomViewsAsync(const ListCustomViewsRequest& request, const ListCustomViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomViews(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListCustomViewsOutcomeCallable MtsClient::listCustomViewsCallable(const ListCustomViewsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomViewsOutcome()>>(
			[this, request]()
			{
			return this->listCustomViews(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListFpShotDBOutcome MtsClient::listFpShotDB(const ListFpShotDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFpShotDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFpShotDBOutcome(ListFpShotDBResult(outcome.result()));
	else
		return ListFpShotDBOutcome(outcome.error());
}

void MtsClient::listFpShotDBAsync(const ListFpShotDBRequest& request, const ListFpShotDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFpShotDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListFpShotDBOutcomeCallable MtsClient::listFpShotDBCallable(const ListFpShotDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFpShotDBOutcome()>>(
			[this, request]()
			{
			return this->listFpShotDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListFpShotFilesOutcome MtsClient::listFpShotFiles(const ListFpShotFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFpShotFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFpShotFilesOutcome(ListFpShotFilesResult(outcome.result()));
	else
		return ListFpShotFilesOutcome(outcome.error());
}

void MtsClient::listFpShotFilesAsync(const ListFpShotFilesRequest& request, const ListFpShotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFpShotFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListFpShotFilesOutcomeCallable MtsClient::listFpShotFilesCallable(const ListFpShotFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFpShotFilesOutcome()>>(
			[this, request]()
			{
			return this->listFpShotFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListFpShotImportJobOutcome MtsClient::listFpShotImportJob(const ListFpShotImportJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFpShotImportJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFpShotImportJobOutcome(ListFpShotImportJobResult(outcome.result()));
	else
		return ListFpShotImportJobOutcome(outcome.error());
}

void MtsClient::listFpShotImportJobAsync(const ListFpShotImportJobRequest& request, const ListFpShotImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFpShotImportJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListFpShotImportJobOutcomeCallable MtsClient::listFpShotImportJobCallable(const ListFpShotImportJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFpShotImportJobOutcome()>>(
			[this, request]()
			{
			return this->listFpShotImportJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListJobOutcome MtsClient::listJob(const ListJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobOutcome(ListJobResult(outcome.result()));
	else
		return ListJobOutcome(outcome.error());
}

void MtsClient::listJobAsync(const ListJobRequest& request, const ListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListJobOutcomeCallable MtsClient::listJobCallable(const ListJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobOutcome()>>(
			[this, request]()
			{
			return this->listJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListMediaWorkflowExecutionsOutcome MtsClient::listMediaWorkflowExecutions(const ListMediaWorkflowExecutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMediaWorkflowExecutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMediaWorkflowExecutionsOutcome(ListMediaWorkflowExecutionsResult(outcome.result()));
	else
		return ListMediaWorkflowExecutionsOutcome(outcome.error());
}

void MtsClient::listMediaWorkflowExecutionsAsync(const ListMediaWorkflowExecutionsRequest& request, const ListMediaWorkflowExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMediaWorkflowExecutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListMediaWorkflowExecutionsOutcomeCallable MtsClient::listMediaWorkflowExecutionsCallable(const ListMediaWorkflowExecutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMediaWorkflowExecutionsOutcome()>>(
			[this, request]()
			{
			return this->listMediaWorkflowExecutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryAnalysisJobListOutcome MtsClient::queryAnalysisJobList(const QueryAnalysisJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAnalysisJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAnalysisJobListOutcome(QueryAnalysisJobListResult(outcome.result()));
	else
		return QueryAnalysisJobListOutcome(outcome.error());
}

void MtsClient::queryAnalysisJobListAsync(const QueryAnalysisJobListRequest& request, const QueryAnalysisJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAnalysisJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryAnalysisJobListOutcomeCallable MtsClient::queryAnalysisJobListCallable(const QueryAnalysisJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAnalysisJobListOutcome()>>(
			[this, request]()
			{
			return this->queryAnalysisJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryCopyrightExtractJobOutcome MtsClient::queryCopyrightExtractJob(const QueryCopyrightExtractJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCopyrightExtractJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCopyrightExtractJobOutcome(QueryCopyrightExtractJobResult(outcome.result()));
	else
		return QueryCopyrightExtractJobOutcome(outcome.error());
}

void MtsClient::queryCopyrightExtractJobAsync(const QueryCopyrightExtractJobRequest& request, const QueryCopyrightExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCopyrightExtractJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryCopyrightExtractJobOutcomeCallable MtsClient::queryCopyrightExtractJobCallable(const QueryCopyrightExtractJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCopyrightExtractJobOutcome()>>(
			[this, request]()
			{
			return this->queryCopyrightExtractJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryCopyrightJobOutcome MtsClient::queryCopyrightJob(const QueryCopyrightJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCopyrightJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCopyrightJobOutcome(QueryCopyrightJobResult(outcome.result()));
	else
		return QueryCopyrightJobOutcome(outcome.error());
}

void MtsClient::queryCopyrightJobAsync(const QueryCopyrightJobRequest& request, const QueryCopyrightJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCopyrightJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryCopyrightJobOutcomeCallable MtsClient::queryCopyrightJobCallable(const QueryCopyrightJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCopyrightJobOutcome()>>(
			[this, request]()
			{
			return this->queryCopyrightJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryFpDBDeleteJobListOutcome MtsClient::queryFpDBDeleteJobList(const QueryFpDBDeleteJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFpDBDeleteJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFpDBDeleteJobListOutcome(QueryFpDBDeleteJobListResult(outcome.result()));
	else
		return QueryFpDBDeleteJobListOutcome(outcome.error());
}

void MtsClient::queryFpDBDeleteJobListAsync(const QueryFpDBDeleteJobListRequest& request, const QueryFpDBDeleteJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFpDBDeleteJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryFpDBDeleteJobListOutcomeCallable MtsClient::queryFpDBDeleteJobListCallable(const QueryFpDBDeleteJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFpDBDeleteJobListOutcome()>>(
			[this, request]()
			{
			return this->queryFpDBDeleteJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryFpFileDeleteJobListOutcome MtsClient::queryFpFileDeleteJobList(const QueryFpFileDeleteJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFpFileDeleteJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFpFileDeleteJobListOutcome(QueryFpFileDeleteJobListResult(outcome.result()));
	else
		return QueryFpFileDeleteJobListOutcome(outcome.error());
}

void MtsClient::queryFpFileDeleteJobListAsync(const QueryFpFileDeleteJobListRequest& request, const QueryFpFileDeleteJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFpFileDeleteJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryFpFileDeleteJobListOutcomeCallable MtsClient::queryFpFileDeleteJobListCallable(const QueryFpFileDeleteJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFpFileDeleteJobListOutcome()>>(
			[this, request]()
			{
			return this->queryFpFileDeleteJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryFpShotJobListOutcome MtsClient::queryFpShotJobList(const QueryFpShotJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFpShotJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFpShotJobListOutcome(QueryFpShotJobListResult(outcome.result()));
	else
		return QueryFpShotJobListOutcome(outcome.error());
}

void MtsClient::queryFpShotJobListAsync(const QueryFpShotJobListRequest& request, const QueryFpShotJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFpShotJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryFpShotJobListOutcomeCallable MtsClient::queryFpShotJobListCallable(const QueryFpShotJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFpShotJobListOutcome()>>(
			[this, request]()
			{
			return this->queryFpShotJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryIProductionJobOutcome MtsClient::queryIProductionJob(const QueryIProductionJobRequest &request) const
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

void MtsClient::queryIProductionJobAsync(const QueryIProductionJobRequest& request, const QueryIProductionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIProductionJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryIProductionJobOutcomeCallable MtsClient::queryIProductionJobCallable(const QueryIProductionJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIProductionJobOutcome()>>(
			[this, request]()
			{
			return this->queryIProductionJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryJobListOutcome MtsClient::queryJobList(const QueryJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryJobListOutcome(QueryJobListResult(outcome.result()));
	else
		return QueryJobListOutcome(outcome.error());
}

void MtsClient::queryJobListAsync(const QueryJobListRequest& request, const QueryJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryJobListOutcomeCallable MtsClient::queryJobListCallable(const QueryJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryJobListOutcome()>>(
			[this, request]()
			{
			return this->queryJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryMediaCensorJobDetailOutcome MtsClient::queryMediaCensorJobDetail(const QueryMediaCensorJobDetailRequest &request) const
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

void MtsClient::queryMediaCensorJobDetailAsync(const QueryMediaCensorJobDetailRequest& request, const QueryMediaCensorJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaCensorJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryMediaCensorJobDetailOutcomeCallable MtsClient::queryMediaCensorJobDetailCallable(const QueryMediaCensorJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaCensorJobDetailOutcome()>>(
			[this, request]()
			{
			return this->queryMediaCensorJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryMediaCensorJobListOutcome MtsClient::queryMediaCensorJobList(const QueryMediaCensorJobListRequest &request) const
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

void MtsClient::queryMediaCensorJobListAsync(const QueryMediaCensorJobListRequest& request, const QueryMediaCensorJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaCensorJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryMediaCensorJobListOutcomeCallable MtsClient::queryMediaCensorJobListCallable(const QueryMediaCensorJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaCensorJobListOutcome()>>(
			[this, request]()
			{
			return this->queryMediaCensorJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryMediaInfoJobListOutcome MtsClient::queryMediaInfoJobList(const QueryMediaInfoJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMediaInfoJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMediaInfoJobListOutcome(QueryMediaInfoJobListResult(outcome.result()));
	else
		return QueryMediaInfoJobListOutcome(outcome.error());
}

void MtsClient::queryMediaInfoJobListAsync(const QueryMediaInfoJobListRequest& request, const QueryMediaInfoJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaInfoJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryMediaInfoJobListOutcomeCallable MtsClient::queryMediaInfoJobListCallable(const QueryMediaInfoJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaInfoJobListOutcome()>>(
			[this, request]()
			{
			return this->queryMediaInfoJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryMediaListOutcome MtsClient::queryMediaList(const QueryMediaListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMediaListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMediaListOutcome(QueryMediaListResult(outcome.result()));
	else
		return QueryMediaListOutcome(outcome.error());
}

void MtsClient::queryMediaListAsync(const QueryMediaListRequest& request, const QueryMediaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryMediaListOutcomeCallable MtsClient::queryMediaListCallable(const QueryMediaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaListOutcome()>>(
			[this, request]()
			{
			return this->queryMediaList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryMediaListByURLOutcome MtsClient::queryMediaListByURL(const QueryMediaListByURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMediaListByURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMediaListByURLOutcome(QueryMediaListByURLResult(outcome.result()));
	else
		return QueryMediaListByURLOutcome(outcome.error());
}

void MtsClient::queryMediaListByURLAsync(const QueryMediaListByURLRequest& request, const QueryMediaListByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaListByURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryMediaListByURLOutcomeCallable MtsClient::queryMediaListByURLCallable(const QueryMediaListByURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaListByURLOutcome()>>(
			[this, request]()
			{
			return this->queryMediaListByURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryMediaWorkflowExecutionListOutcome MtsClient::queryMediaWorkflowExecutionList(const QueryMediaWorkflowExecutionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMediaWorkflowExecutionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMediaWorkflowExecutionListOutcome(QueryMediaWorkflowExecutionListResult(outcome.result()));
	else
		return QueryMediaWorkflowExecutionListOutcome(outcome.error());
}

void MtsClient::queryMediaWorkflowExecutionListAsync(const QueryMediaWorkflowExecutionListRequest& request, const QueryMediaWorkflowExecutionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaWorkflowExecutionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryMediaWorkflowExecutionListOutcomeCallable MtsClient::queryMediaWorkflowExecutionListCallable(const QueryMediaWorkflowExecutionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaWorkflowExecutionListOutcome()>>(
			[this, request]()
			{
			return this->queryMediaWorkflowExecutionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryMediaWorkflowListOutcome MtsClient::queryMediaWorkflowList(const QueryMediaWorkflowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMediaWorkflowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMediaWorkflowListOutcome(QueryMediaWorkflowListResult(outcome.result()));
	else
		return QueryMediaWorkflowListOutcome(outcome.error());
}

void MtsClient::queryMediaWorkflowListAsync(const QueryMediaWorkflowListRequest& request, const QueryMediaWorkflowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaWorkflowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryMediaWorkflowListOutcomeCallable MtsClient::queryMediaWorkflowListCallable(const QueryMediaWorkflowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaWorkflowListOutcome()>>(
			[this, request]()
			{
			return this->queryMediaWorkflowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryPipelineListOutcome MtsClient::queryPipelineList(const QueryPipelineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPipelineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPipelineListOutcome(QueryPipelineListResult(outcome.result()));
	else
		return QueryPipelineListOutcome(outcome.error());
}

void MtsClient::queryPipelineListAsync(const QueryPipelineListRequest& request, const QueryPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPipelineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryPipelineListOutcomeCallable MtsClient::queryPipelineListCallable(const QueryPipelineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPipelineListOutcome()>>(
			[this, request]()
			{
			return this->queryPipelineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QuerySmarttagJobOutcome MtsClient::querySmarttagJob(const QuerySmarttagJobRequest &request) const
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

void MtsClient::querySmarttagJobAsync(const QuerySmarttagJobRequest& request, const QuerySmarttagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySmarttagJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QuerySmarttagJobOutcomeCallable MtsClient::querySmarttagJobCallable(const QuerySmarttagJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySmarttagJobOutcome()>>(
			[this, request]()
			{
			return this->querySmarttagJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QuerySmarttagTemplateListOutcome MtsClient::querySmarttagTemplateList(const QuerySmarttagTemplateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySmarttagTemplateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySmarttagTemplateListOutcome(QuerySmarttagTemplateListResult(outcome.result()));
	else
		return QuerySmarttagTemplateListOutcome(outcome.error());
}

void MtsClient::querySmarttagTemplateListAsync(const QuerySmarttagTemplateListRequest& request, const QuerySmarttagTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySmarttagTemplateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QuerySmarttagTemplateListOutcomeCallable MtsClient::querySmarttagTemplateListCallable(const QuerySmarttagTemplateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySmarttagTemplateListOutcome()>>(
			[this, request]()
			{
			return this->querySmarttagTemplateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QuerySnapshotJobListOutcome MtsClient::querySnapshotJobList(const QuerySnapshotJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySnapshotJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySnapshotJobListOutcome(QuerySnapshotJobListResult(outcome.result()));
	else
		return QuerySnapshotJobListOutcome(outcome.error());
}

void MtsClient::querySnapshotJobListAsync(const QuerySnapshotJobListRequest& request, const QuerySnapshotJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySnapshotJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QuerySnapshotJobListOutcomeCallable MtsClient::querySnapshotJobListCallable(const QuerySnapshotJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySnapshotJobListOutcome()>>(
			[this, request]()
			{
			return this->querySnapshotJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryTemplateListOutcome MtsClient::queryTemplateList(const QueryTemplateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTemplateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTemplateListOutcome(QueryTemplateListResult(outcome.result()));
	else
		return QueryTemplateListOutcome(outcome.error());
}

void MtsClient::queryTemplateListAsync(const QueryTemplateListRequest& request, const QueryTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTemplateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryTemplateListOutcomeCallable MtsClient::queryTemplateListCallable(const QueryTemplateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTemplateListOutcome()>>(
			[this, request]()
			{
			return this->queryTemplateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryTraceAbJobOutcome MtsClient::queryTraceAbJob(const QueryTraceAbJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTraceAbJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTraceAbJobOutcome(QueryTraceAbJobResult(outcome.result()));
	else
		return QueryTraceAbJobOutcome(outcome.error());
}

void MtsClient::queryTraceAbJobAsync(const QueryTraceAbJobRequest& request, const QueryTraceAbJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTraceAbJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryTraceAbJobOutcomeCallable MtsClient::queryTraceAbJobCallable(const QueryTraceAbJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTraceAbJobOutcome()>>(
			[this, request]()
			{
			return this->queryTraceAbJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryTraceExtractJobOutcome MtsClient::queryTraceExtractJob(const QueryTraceExtractJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTraceExtractJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTraceExtractJobOutcome(QueryTraceExtractJobResult(outcome.result()));
	else
		return QueryTraceExtractJobOutcome(outcome.error());
}

void MtsClient::queryTraceExtractJobAsync(const QueryTraceExtractJobRequest& request, const QueryTraceExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTraceExtractJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryTraceExtractJobOutcomeCallable MtsClient::queryTraceExtractJobCallable(const QueryTraceExtractJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTraceExtractJobOutcome()>>(
			[this, request]()
			{
			return this->queryTraceExtractJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryTraceM3u8JobOutcome MtsClient::queryTraceM3u8Job(const QueryTraceM3u8JobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTraceM3u8JobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTraceM3u8JobOutcome(QueryTraceM3u8JobResult(outcome.result()));
	else
		return QueryTraceM3u8JobOutcome(outcome.error());
}

void MtsClient::queryTraceM3u8JobAsync(const QueryTraceM3u8JobRequest& request, const QueryTraceM3u8JobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTraceM3u8Job(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryTraceM3u8JobOutcomeCallable MtsClient::queryTraceM3u8JobCallable(const QueryTraceM3u8JobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTraceM3u8JobOutcome()>>(
			[this, request]()
			{
			return this->queryTraceM3u8Job(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryWaterMarkTemplateListOutcome MtsClient::queryWaterMarkTemplateList(const QueryWaterMarkTemplateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryWaterMarkTemplateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryWaterMarkTemplateListOutcome(QueryWaterMarkTemplateListResult(outcome.result()));
	else
		return QueryWaterMarkTemplateListOutcome(outcome.error());
}

void MtsClient::queryWaterMarkTemplateListAsync(const QueryWaterMarkTemplateListRequest& request, const QueryWaterMarkTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryWaterMarkTemplateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryWaterMarkTemplateListOutcomeCallable MtsClient::queryWaterMarkTemplateListCallable(const QueryWaterMarkTemplateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryWaterMarkTemplateListOutcome()>>(
			[this, request]()
			{
			return this->queryWaterMarkTemplateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::RegisterCustomFaceOutcome MtsClient::registerCustomFace(const RegisterCustomFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterCustomFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterCustomFaceOutcome(RegisterCustomFaceResult(outcome.result()));
	else
		return RegisterCustomFaceOutcome(outcome.error());
}

void MtsClient::registerCustomFaceAsync(const RegisterCustomFaceRequest& request, const RegisterCustomFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerCustomFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::RegisterCustomFaceOutcomeCallable MtsClient::registerCustomFaceCallable(const RegisterCustomFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterCustomFaceOutcome()>>(
			[this, request]()
			{
			return this->registerCustomFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::RegisterCustomViewOutcome MtsClient::registerCustomView(const RegisterCustomViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterCustomViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterCustomViewOutcome(RegisterCustomViewResult(outcome.result()));
	else
		return RegisterCustomViewOutcome(outcome.error());
}

void MtsClient::registerCustomViewAsync(const RegisterCustomViewRequest& request, const RegisterCustomViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerCustomView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::RegisterCustomViewOutcomeCallable MtsClient::registerCustomViewCallable(const RegisterCustomViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterCustomViewOutcome()>>(
			[this, request]()
			{
			return this->registerCustomView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SearchMediaWorkflowOutcome MtsClient::searchMediaWorkflow(const SearchMediaWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMediaWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMediaWorkflowOutcome(SearchMediaWorkflowResult(outcome.result()));
	else
		return SearchMediaWorkflowOutcome(outcome.error());
}

void MtsClient::searchMediaWorkflowAsync(const SearchMediaWorkflowRequest& request, const SearchMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMediaWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SearchMediaWorkflowOutcomeCallable MtsClient::searchMediaWorkflowCallable(const SearchMediaWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMediaWorkflowOutcome()>>(
			[this, request]()
			{
			return this->searchMediaWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SearchPipelineOutcome MtsClient::searchPipeline(const SearchPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchPipelineOutcome(SearchPipelineResult(outcome.result()));
	else
		return SearchPipelineOutcome(outcome.error());
}

void MtsClient::searchPipelineAsync(const SearchPipelineRequest& request, const SearchPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SearchPipelineOutcomeCallable MtsClient::searchPipelineCallable(const SearchPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchPipelineOutcome()>>(
			[this, request]()
			{
			return this->searchPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SearchTemplateOutcome MtsClient::searchTemplate(const SearchTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTemplateOutcome(SearchTemplateResult(outcome.result()));
	else
		return SearchTemplateOutcome(outcome.error());
}

void MtsClient::searchTemplateAsync(const SearchTemplateRequest& request, const SearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SearchTemplateOutcomeCallable MtsClient::searchTemplateCallable(const SearchTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTemplateOutcome()>>(
			[this, request]()
			{
			return this->searchTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SearchWaterMarkTemplateOutcome MtsClient::searchWaterMarkTemplate(const SearchWaterMarkTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchWaterMarkTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchWaterMarkTemplateOutcome(SearchWaterMarkTemplateResult(outcome.result()));
	else
		return SearchWaterMarkTemplateOutcome(outcome.error());
}

void MtsClient::searchWaterMarkTemplateAsync(const SearchWaterMarkTemplateRequest& request, const SearchWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchWaterMarkTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SearchWaterMarkTemplateOutcomeCallable MtsClient::searchWaterMarkTemplateCallable(const SearchWaterMarkTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchWaterMarkTemplateOutcome()>>(
			[this, request]()
			{
			return this->searchWaterMarkTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitAnalysisJobOutcome MtsClient::submitAnalysisJob(const SubmitAnalysisJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAnalysisJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAnalysisJobOutcome(SubmitAnalysisJobResult(outcome.result()));
	else
		return SubmitAnalysisJobOutcome(outcome.error());
}

void MtsClient::submitAnalysisJobAsync(const SubmitAnalysisJobRequest& request, const SubmitAnalysisJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAnalysisJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitAnalysisJobOutcomeCallable MtsClient::submitAnalysisJobCallable(const SubmitAnalysisJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAnalysisJobOutcome()>>(
			[this, request]()
			{
			return this->submitAnalysisJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitCopyrightExtractJobOutcome MtsClient::submitCopyrightExtractJob(const SubmitCopyrightExtractJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCopyrightExtractJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCopyrightExtractJobOutcome(SubmitCopyrightExtractJobResult(outcome.result()));
	else
		return SubmitCopyrightExtractJobOutcome(outcome.error());
}

void MtsClient::submitCopyrightExtractJobAsync(const SubmitCopyrightExtractJobRequest& request, const SubmitCopyrightExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCopyrightExtractJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitCopyrightExtractJobOutcomeCallable MtsClient::submitCopyrightExtractJobCallable(const SubmitCopyrightExtractJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCopyrightExtractJobOutcome()>>(
			[this, request]()
			{
			return this->submitCopyrightExtractJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitCopyrightJobOutcome MtsClient::submitCopyrightJob(const SubmitCopyrightJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCopyrightJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCopyrightJobOutcome(SubmitCopyrightJobResult(outcome.result()));
	else
		return SubmitCopyrightJobOutcome(outcome.error());
}

void MtsClient::submitCopyrightJobAsync(const SubmitCopyrightJobRequest& request, const SubmitCopyrightJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCopyrightJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitCopyrightJobOutcomeCallable MtsClient::submitCopyrightJobCallable(const SubmitCopyrightJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCopyrightJobOutcome()>>(
			[this, request]()
			{
			return this->submitCopyrightJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitFpDBDeleteJobOutcome MtsClient::submitFpDBDeleteJob(const SubmitFpDBDeleteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFpDBDeleteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFpDBDeleteJobOutcome(SubmitFpDBDeleteJobResult(outcome.result()));
	else
		return SubmitFpDBDeleteJobOutcome(outcome.error());
}

void MtsClient::submitFpDBDeleteJobAsync(const SubmitFpDBDeleteJobRequest& request, const SubmitFpDBDeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFpDBDeleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitFpDBDeleteJobOutcomeCallable MtsClient::submitFpDBDeleteJobCallable(const SubmitFpDBDeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFpDBDeleteJobOutcome()>>(
			[this, request]()
			{
			return this->submitFpDBDeleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitFpFileDeleteJobOutcome MtsClient::submitFpFileDeleteJob(const SubmitFpFileDeleteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFpFileDeleteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFpFileDeleteJobOutcome(SubmitFpFileDeleteJobResult(outcome.result()));
	else
		return SubmitFpFileDeleteJobOutcome(outcome.error());
}

void MtsClient::submitFpFileDeleteJobAsync(const SubmitFpFileDeleteJobRequest& request, const SubmitFpFileDeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFpFileDeleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitFpFileDeleteJobOutcomeCallable MtsClient::submitFpFileDeleteJobCallable(const SubmitFpFileDeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFpFileDeleteJobOutcome()>>(
			[this, request]()
			{
			return this->submitFpFileDeleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitFpShotJobOutcome MtsClient::submitFpShotJob(const SubmitFpShotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFpShotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFpShotJobOutcome(SubmitFpShotJobResult(outcome.result()));
	else
		return SubmitFpShotJobOutcome(outcome.error());
}

void MtsClient::submitFpShotJobAsync(const SubmitFpShotJobRequest& request, const SubmitFpShotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFpShotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitFpShotJobOutcomeCallable MtsClient::submitFpShotJobCallable(const SubmitFpShotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFpShotJobOutcome()>>(
			[this, request]()
			{
			return this->submitFpShotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitIProductionJobOutcome MtsClient::submitIProductionJob(const SubmitIProductionJobRequest &request) const
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

void MtsClient::submitIProductionJobAsync(const SubmitIProductionJobRequest& request, const SubmitIProductionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitIProductionJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitIProductionJobOutcomeCallable MtsClient::submitIProductionJobCallable(const SubmitIProductionJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitIProductionJobOutcome()>>(
			[this, request]()
			{
			return this->submitIProductionJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitImageCopyrightOutcome MtsClient::submitImageCopyright(const SubmitImageCopyrightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitImageCopyrightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitImageCopyrightOutcome(SubmitImageCopyrightResult(outcome.result()));
	else
		return SubmitImageCopyrightOutcome(outcome.error());
}

void MtsClient::submitImageCopyrightAsync(const SubmitImageCopyrightRequest& request, const SubmitImageCopyrightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitImageCopyright(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitImageCopyrightOutcomeCallable MtsClient::submitImageCopyrightCallable(const SubmitImageCopyrightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitImageCopyrightOutcome()>>(
			[this, request]()
			{
			return this->submitImageCopyright(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitJobsOutcome MtsClient::submitJobs(const SubmitJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitJobsOutcome(SubmitJobsResult(outcome.result()));
	else
		return SubmitJobsOutcome(outcome.error());
}

void MtsClient::submitJobsAsync(const SubmitJobsRequest& request, const SubmitJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitJobsOutcomeCallable MtsClient::submitJobsCallable(const SubmitJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitJobsOutcome()>>(
			[this, request]()
			{
			return this->submitJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitMediaCensorJobOutcome MtsClient::submitMediaCensorJob(const SubmitMediaCensorJobRequest &request) const
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

void MtsClient::submitMediaCensorJobAsync(const SubmitMediaCensorJobRequest& request, const SubmitMediaCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitMediaCensorJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitMediaCensorJobOutcomeCallable MtsClient::submitMediaCensorJobCallable(const SubmitMediaCensorJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitMediaCensorJobOutcome()>>(
			[this, request]()
			{
			return this->submitMediaCensorJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitMediaInfoJobOutcome MtsClient::submitMediaInfoJob(const SubmitMediaInfoJobRequest &request) const
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

void MtsClient::submitMediaInfoJobAsync(const SubmitMediaInfoJobRequest& request, const SubmitMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitMediaInfoJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitMediaInfoJobOutcomeCallable MtsClient::submitMediaInfoJobCallable(const SubmitMediaInfoJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitMediaInfoJobOutcome()>>(
			[this, request]()
			{
			return this->submitMediaInfoJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitSmarttagJobOutcome MtsClient::submitSmarttagJob(const SubmitSmarttagJobRequest &request) const
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

void MtsClient::submitSmarttagJobAsync(const SubmitSmarttagJobRequest& request, const SubmitSmarttagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSmarttagJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitSmarttagJobOutcomeCallable MtsClient::submitSmarttagJobCallable(const SubmitSmarttagJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSmarttagJobOutcome()>>(
			[this, request]()
			{
			return this->submitSmarttagJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitSnapshotJobOutcome MtsClient::submitSnapshotJob(const SubmitSnapshotJobRequest &request) const
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

void MtsClient::submitSnapshotJobAsync(const SubmitSnapshotJobRequest& request, const SubmitSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitSnapshotJobOutcomeCallable MtsClient::submitSnapshotJobCallable(const SubmitSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->submitSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitTraceAbJobOutcome MtsClient::submitTraceAbJob(const SubmitTraceAbJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTraceAbJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTraceAbJobOutcome(SubmitTraceAbJobResult(outcome.result()));
	else
		return SubmitTraceAbJobOutcome(outcome.error());
}

void MtsClient::submitTraceAbJobAsync(const SubmitTraceAbJobRequest& request, const SubmitTraceAbJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTraceAbJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitTraceAbJobOutcomeCallable MtsClient::submitTraceAbJobCallable(const SubmitTraceAbJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTraceAbJobOutcome()>>(
			[this, request]()
			{
			return this->submitTraceAbJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitTraceExtractJobOutcome MtsClient::submitTraceExtractJob(const SubmitTraceExtractJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTraceExtractJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTraceExtractJobOutcome(SubmitTraceExtractJobResult(outcome.result()));
	else
		return SubmitTraceExtractJobOutcome(outcome.error());
}

void MtsClient::submitTraceExtractJobAsync(const SubmitTraceExtractJobRequest& request, const SubmitTraceExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTraceExtractJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitTraceExtractJobOutcomeCallable MtsClient::submitTraceExtractJobCallable(const SubmitTraceExtractJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTraceExtractJobOutcome()>>(
			[this, request]()
			{
			return this->submitTraceExtractJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitTraceM3u8JobOutcome MtsClient::submitTraceM3u8Job(const SubmitTraceM3u8JobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTraceM3u8JobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTraceM3u8JobOutcome(SubmitTraceM3u8JobResult(outcome.result()));
	else
		return SubmitTraceM3u8JobOutcome(outcome.error());
}

void MtsClient::submitTraceM3u8JobAsync(const SubmitTraceM3u8JobRequest& request, const SubmitTraceM3u8JobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTraceM3u8Job(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitTraceM3u8JobOutcomeCallable MtsClient::submitTraceM3u8JobCallable(const SubmitTraceM3u8JobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTraceM3u8JobOutcome()>>(
			[this, request]()
			{
			return this->submitTraceM3u8Job(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::TagCustomPersonOutcome MtsClient::tagCustomPerson(const TagCustomPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagCustomPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagCustomPersonOutcome(TagCustomPersonResult(outcome.result()));
	else
		return TagCustomPersonOutcome(outcome.error());
}

void MtsClient::tagCustomPersonAsync(const TagCustomPersonRequest& request, const TagCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagCustomPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::TagCustomPersonOutcomeCallable MtsClient::tagCustomPersonCallable(const TagCustomPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagCustomPersonOutcome()>>(
			[this, request]()
			{
			return this->tagCustomPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UnbindInputBucketOutcome MtsClient::unbindInputBucket(const UnbindInputBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindInputBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindInputBucketOutcome(UnbindInputBucketResult(outcome.result()));
	else
		return UnbindInputBucketOutcome(outcome.error());
}

void MtsClient::unbindInputBucketAsync(const UnbindInputBucketRequest& request, const UnbindInputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindInputBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UnbindInputBucketOutcomeCallable MtsClient::unbindInputBucketCallable(const UnbindInputBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindInputBucketOutcome()>>(
			[this, request]()
			{
			return this->unbindInputBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UnbindOutputBucketOutcome MtsClient::unbindOutputBucket(const UnbindOutputBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindOutputBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindOutputBucketOutcome(UnbindOutputBucketResult(outcome.result()));
	else
		return UnbindOutputBucketOutcome(outcome.error());
}

void MtsClient::unbindOutputBucketAsync(const UnbindOutputBucketRequest& request, const UnbindOutputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindOutputBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UnbindOutputBucketOutcomeCallable MtsClient::unbindOutputBucketCallable(const UnbindOutputBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindOutputBucketOutcome()>>(
			[this, request]()
			{
			return this->unbindOutputBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UnregisterCustomFaceOutcome MtsClient::unregisterCustomFace(const UnregisterCustomFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnregisterCustomFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnregisterCustomFaceOutcome(UnregisterCustomFaceResult(outcome.result()));
	else
		return UnregisterCustomFaceOutcome(outcome.error());
}

void MtsClient::unregisterCustomFaceAsync(const UnregisterCustomFaceRequest& request, const UnregisterCustomFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unregisterCustomFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UnregisterCustomFaceOutcomeCallable MtsClient::unregisterCustomFaceCallable(const UnregisterCustomFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnregisterCustomFaceOutcome()>>(
			[this, request]()
			{
			return this->unregisterCustomFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateMediaOutcome MtsClient::updateMedia(const UpdateMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMediaOutcome(UpdateMediaResult(outcome.result()));
	else
		return UpdateMediaOutcome(outcome.error());
}

void MtsClient::updateMediaAsync(const UpdateMediaRequest& request, const UpdateMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateMediaOutcomeCallable MtsClient::updateMediaCallable(const UpdateMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMediaOutcome()>>(
			[this, request]()
			{
			return this->updateMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateMediaCategoryOutcome MtsClient::updateMediaCategory(const UpdateMediaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMediaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMediaCategoryOutcome(UpdateMediaCategoryResult(outcome.result()));
	else
		return UpdateMediaCategoryOutcome(outcome.error());
}

void MtsClient::updateMediaCategoryAsync(const UpdateMediaCategoryRequest& request, const UpdateMediaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMediaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateMediaCategoryOutcomeCallable MtsClient::updateMediaCategoryCallable(const UpdateMediaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMediaCategoryOutcome()>>(
			[this, request]()
			{
			return this->updateMediaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateMediaCoverOutcome MtsClient::updateMediaCover(const UpdateMediaCoverRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMediaCoverOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMediaCoverOutcome(UpdateMediaCoverResult(outcome.result()));
	else
		return UpdateMediaCoverOutcome(outcome.error());
}

void MtsClient::updateMediaCoverAsync(const UpdateMediaCoverRequest& request, const UpdateMediaCoverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMediaCover(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateMediaCoverOutcomeCallable MtsClient::updateMediaCoverCallable(const UpdateMediaCoverRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMediaCoverOutcome()>>(
			[this, request]()
			{
			return this->updateMediaCover(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateMediaPublishStateOutcome MtsClient::updateMediaPublishState(const UpdateMediaPublishStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMediaPublishStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMediaPublishStateOutcome(UpdateMediaPublishStateResult(outcome.result()));
	else
		return UpdateMediaPublishStateOutcome(outcome.error());
}

void MtsClient::updateMediaPublishStateAsync(const UpdateMediaPublishStateRequest& request, const UpdateMediaPublishStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMediaPublishState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateMediaPublishStateOutcomeCallable MtsClient::updateMediaPublishStateCallable(const UpdateMediaPublishStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMediaPublishStateOutcome()>>(
			[this, request]()
			{
			return this->updateMediaPublishState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateMediaWorkflowOutcome MtsClient::updateMediaWorkflow(const UpdateMediaWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMediaWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMediaWorkflowOutcome(UpdateMediaWorkflowResult(outcome.result()));
	else
		return UpdateMediaWorkflowOutcome(outcome.error());
}

void MtsClient::updateMediaWorkflowAsync(const UpdateMediaWorkflowRequest& request, const UpdateMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMediaWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateMediaWorkflowOutcomeCallable MtsClient::updateMediaWorkflowCallable(const UpdateMediaWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMediaWorkflowOutcome()>>(
			[this, request]()
			{
			return this->updateMediaWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateMediaWorkflowTriggerModeOutcome MtsClient::updateMediaWorkflowTriggerMode(const UpdateMediaWorkflowTriggerModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMediaWorkflowTriggerModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMediaWorkflowTriggerModeOutcome(UpdateMediaWorkflowTriggerModeResult(outcome.result()));
	else
		return UpdateMediaWorkflowTriggerModeOutcome(outcome.error());
}

void MtsClient::updateMediaWorkflowTriggerModeAsync(const UpdateMediaWorkflowTriggerModeRequest& request, const UpdateMediaWorkflowTriggerModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMediaWorkflowTriggerMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateMediaWorkflowTriggerModeOutcomeCallable MtsClient::updateMediaWorkflowTriggerModeCallable(const UpdateMediaWorkflowTriggerModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMediaWorkflowTriggerModeOutcome()>>(
			[this, request]()
			{
			return this->updateMediaWorkflowTriggerMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdatePipelineOutcome MtsClient::updatePipeline(const UpdatePipelineRequest &request) const
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

void MtsClient::updatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdatePipelineOutcomeCallable MtsClient::updatePipelineCallable(const UpdatePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelineOutcome()>>(
			[this, request]()
			{
			return this->updatePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateSmarttagTemplateOutcome MtsClient::updateSmarttagTemplate(const UpdateSmarttagTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSmarttagTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSmarttagTemplateOutcome(UpdateSmarttagTemplateResult(outcome.result()));
	else
		return UpdateSmarttagTemplateOutcome(outcome.error());
}

void MtsClient::updateSmarttagTemplateAsync(const UpdateSmarttagTemplateRequest& request, const UpdateSmarttagTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSmarttagTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateSmarttagTemplateOutcomeCallable MtsClient::updateSmarttagTemplateCallable(const UpdateSmarttagTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSmarttagTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateSmarttagTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateTemplateOutcome MtsClient::updateTemplate(const UpdateTemplateRequest &request) const
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

void MtsClient::updateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateTemplateOutcomeCallable MtsClient::updateTemplateCallable(const UpdateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateWaterMarkTemplateOutcome MtsClient::updateWaterMarkTemplate(const UpdateWaterMarkTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWaterMarkTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWaterMarkTemplateOutcome(UpdateWaterMarkTemplateResult(outcome.result()));
	else
		return UpdateWaterMarkTemplateOutcome(outcome.error());
}

void MtsClient::updateWaterMarkTemplateAsync(const UpdateWaterMarkTemplateRequest& request, const UpdateWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWaterMarkTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateWaterMarkTemplateOutcomeCallable MtsClient::updateWaterMarkTemplateCallable(const UpdateWaterMarkTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWaterMarkTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateWaterMarkTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

