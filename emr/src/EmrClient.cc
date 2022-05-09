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

#include <alibabacloud/emr/EmrClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

namespace
{
	const std::string SERVICE_NAME = "Emr";
}

EmrClient::EmrClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::EmrClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::EmrClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "emr");
}

EmrClient::~EmrClient()
{}

EmrClient::AddClusterServiceOutcome EmrClient::addClusterService(const AddClusterServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddClusterServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddClusterServiceOutcome(AddClusterServiceResult(outcome.result()));
	else
		return AddClusterServiceOutcome(outcome.error());
}

void EmrClient::addClusterServiceAsync(const AddClusterServiceRequest& request, const AddClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addClusterService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddClusterServiceOutcomeCallable EmrClient::addClusterServiceCallable(const AddClusterServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddClusterServiceOutcome()>>(
			[this, request]()
			{
			return this->addClusterService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::AddScalingConfigItemV2Outcome EmrClient::addScalingConfigItemV2(const AddScalingConfigItemV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddScalingConfigItemV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddScalingConfigItemV2Outcome(AddScalingConfigItemV2Result(outcome.result()));
	else
		return AddScalingConfigItemV2Outcome(outcome.error());
}

void EmrClient::addScalingConfigItemV2Async(const AddScalingConfigItemV2Request& request, const AddScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addScalingConfigItemV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AddScalingConfigItemV2OutcomeCallable EmrClient::addScalingConfigItemV2Callable(const AddScalingConfigItemV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<AddScalingConfigItemV2Outcome()>>(
			[this, request]()
			{
			return this->addScalingConfigItemV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CloneFlowOutcome EmrClient::cloneFlow(const CloneFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneFlowOutcome(CloneFlowResult(outcome.result()));
	else
		return CloneFlowOutcome(outcome.error());
}

void EmrClient::cloneFlowAsync(const CloneFlowRequest& request, const CloneFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CloneFlowOutcomeCallable EmrClient::cloneFlowCallable(const CloneFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneFlowOutcome()>>(
			[this, request]()
			{
			return this->cloneFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CloneFlowJobOutcome EmrClient::cloneFlowJob(const CloneFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneFlowJobOutcome(CloneFlowJobResult(outcome.result()));
	else
		return CloneFlowJobOutcome(outcome.error());
}

void EmrClient::cloneFlowJobAsync(const CloneFlowJobRequest& request, const CloneFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CloneFlowJobOutcomeCallable EmrClient::cloneFlowJobCallable(const CloneFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneFlowJobOutcome()>>(
			[this, request]()
			{
			return this->cloneFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterTemplateOutcome EmrClient::createClusterTemplate(const CreateClusterTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterTemplateOutcome(CreateClusterTemplateResult(outcome.result()));
	else
		return CreateClusterTemplateOutcome(outcome.error());
}

void EmrClient::createClusterTemplateAsync(const CreateClusterTemplateRequest& request, const CreateClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterTemplateOutcomeCallable EmrClient::createClusterTemplateCallable(const CreateClusterTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterTemplateOutcome()>>(
			[this, request]()
			{
			return this->createClusterTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterV2Outcome EmrClient::createClusterV2(const CreateClusterV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterV2Outcome(CreateClusterV2Result(outcome.result()));
	else
		return CreateClusterV2Outcome(outcome.error());
}

void EmrClient::createClusterV2Async(const CreateClusterV2Request& request, const CreateClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterV2OutcomeCallable EmrClient::createClusterV2Callable(const CreateClusterV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterV2Outcome()>>(
			[this, request]()
			{
			return this->createClusterV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterWithTemplateOutcome EmrClient::createClusterWithTemplate(const CreateClusterWithTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterWithTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterWithTemplateOutcome(CreateClusterWithTemplateResult(outcome.result()));
	else
		return CreateClusterWithTemplateOutcome(outcome.error());
}

void EmrClient::createClusterWithTemplateAsync(const CreateClusterWithTemplateRequest& request, const CreateClusterWithTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterWithTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterWithTemplateOutcomeCallable EmrClient::createClusterWithTemplateCallable(const CreateClusterWithTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterWithTemplateOutcome()>>(
			[this, request]()
			{
			return this->createClusterWithTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowOutcome EmrClient::createFlow(const CreateFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowOutcome(CreateFlowResult(outcome.result()));
	else
		return CreateFlowOutcome(outcome.error());
}

void EmrClient::createFlowAsync(const CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowOutcomeCallable EmrClient::createFlowCallable(const CreateFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowOutcome()>>(
			[this, request]()
			{
			return this->createFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowCategoryOutcome EmrClient::createFlowCategory(const CreateFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowCategoryOutcome(CreateFlowCategoryResult(outcome.result()));
	else
		return CreateFlowCategoryOutcome(outcome.error());
}

void EmrClient::createFlowCategoryAsync(const CreateFlowCategoryRequest& request, const CreateFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowCategoryOutcomeCallable EmrClient::createFlowCategoryCallable(const CreateFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->createFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowForWebOutcome EmrClient::createFlowForWeb(const CreateFlowForWebRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowForWebOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowForWebOutcome(CreateFlowForWebResult(outcome.result()));
	else
		return CreateFlowForWebOutcome(outcome.error());
}

void EmrClient::createFlowForWebAsync(const CreateFlowForWebRequest& request, const CreateFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowForWeb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowForWebOutcomeCallable EmrClient::createFlowForWebCallable(const CreateFlowForWebRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowForWebOutcome()>>(
			[this, request]()
			{
			return this->createFlowForWeb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowJobOutcome EmrClient::createFlowJob(const CreateFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowJobOutcome(CreateFlowJobResult(outcome.result()));
	else
		return CreateFlowJobOutcome(outcome.error());
}

void EmrClient::createFlowJobAsync(const CreateFlowJobRequest& request, const CreateFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowJobOutcomeCallable EmrClient::createFlowJobCallable(const CreateFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowJobOutcome()>>(
			[this, request]()
			{
			return this->createFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowProjectOutcome EmrClient::createFlowProject(const CreateFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowProjectOutcome(CreateFlowProjectResult(outcome.result()));
	else
		return CreateFlowProjectOutcome(outcome.error());
}

void EmrClient::createFlowProjectAsync(const CreateFlowProjectRequest& request, const CreateFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowProjectOutcomeCallable EmrClient::createFlowProjectCallable(const CreateFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->createFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowProjectClusterSettingOutcome EmrClient::createFlowProjectClusterSetting(const CreateFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowProjectClusterSettingOutcome(CreateFlowProjectClusterSettingResult(outcome.result()));
	else
		return CreateFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::createFlowProjectClusterSettingAsync(const CreateFlowProjectClusterSettingRequest& request, const CreateFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowProjectClusterSettingOutcomeCallable EmrClient::createFlowProjectClusterSettingCallable(const CreateFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->createFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateFlowProjectUserOutcome EmrClient::createFlowProjectUser(const CreateFlowProjectUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowProjectUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowProjectUserOutcome(CreateFlowProjectUserResult(outcome.result()));
	else
		return CreateFlowProjectUserOutcome(outcome.error());
}

void EmrClient::createFlowProjectUserAsync(const CreateFlowProjectUserRequest& request, const CreateFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowProjectUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowProjectUserOutcomeCallable EmrClient::createFlowProjectUserCallable(const CreateFlowProjectUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowProjectUserOutcome()>>(
			[this, request]()
			{
			return this->createFlowProjectUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateResourcePoolOutcome EmrClient::createResourcePool(const CreateResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourcePoolOutcome(CreateResourcePoolResult(outcome.result()));
	else
		return CreateResourcePoolOutcome(outcome.error());
}

void EmrClient::createResourcePoolAsync(const CreateResourcePoolRequest& request, const CreateResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateResourcePoolOutcomeCallable EmrClient::createResourcePoolCallable(const CreateResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->createResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateResourceQueueOutcome EmrClient::createResourceQueue(const CreateResourceQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceQueueOutcome(CreateResourceQueueResult(outcome.result()));
	else
		return CreateResourceQueueOutcome(outcome.error());
}

void EmrClient::createResourceQueueAsync(const CreateResourceQueueRequest& request, const CreateResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateResourceQueueOutcomeCallable EmrClient::createResourceQueueCallable(const CreateResourceQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceQueueOutcome()>>(
			[this, request]()
			{
			return this->createResourceQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateScalingGroupV2Outcome EmrClient::createScalingGroupV2(const CreateScalingGroupV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingGroupV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingGroupV2Outcome(CreateScalingGroupV2Result(outcome.result()));
	else
		return CreateScalingGroupV2Outcome(outcome.error());
}

void EmrClient::createScalingGroupV2Async(const CreateScalingGroupV2Request& request, const CreateScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingGroupV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateScalingGroupV2OutcomeCallable EmrClient::createScalingGroupV2Callable(const CreateScalingGroupV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingGroupV2Outcome()>>(
			[this, request]()
			{
			return this->createScalingGroupV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteClusterTemplateOutcome EmrClient::deleteClusterTemplate(const DeleteClusterTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterTemplateOutcome(DeleteClusterTemplateResult(outcome.result()));
	else
		return DeleteClusterTemplateOutcome(outcome.error());
}

void EmrClient::deleteClusterTemplateAsync(const DeleteClusterTemplateRequest& request, const DeleteClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClusterTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteClusterTemplateOutcomeCallable EmrClient::deleteClusterTemplateCallable(const DeleteClusterTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteClusterTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowOutcome EmrClient::deleteFlow(const DeleteFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowOutcome(DeleteFlowResult(outcome.result()));
	else
		return DeleteFlowOutcome(outcome.error());
}

void EmrClient::deleteFlowAsync(const DeleteFlowRequest& request, const DeleteFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowOutcomeCallable EmrClient::deleteFlowCallable(const DeleteFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowOutcome()>>(
			[this, request]()
			{
			return this->deleteFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowCategoryOutcome EmrClient::deleteFlowCategory(const DeleteFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowCategoryOutcome(DeleteFlowCategoryResult(outcome.result()));
	else
		return DeleteFlowCategoryOutcome(outcome.error());
}

void EmrClient::deleteFlowCategoryAsync(const DeleteFlowCategoryRequest& request, const DeleteFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowCategoryOutcomeCallable EmrClient::deleteFlowCategoryCallable(const DeleteFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowJobOutcome EmrClient::deleteFlowJob(const DeleteFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowJobOutcome(DeleteFlowJobResult(outcome.result()));
	else
		return DeleteFlowJobOutcome(outcome.error());
}

void EmrClient::deleteFlowJobAsync(const DeleteFlowJobRequest& request, const DeleteFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowJobOutcomeCallable EmrClient::deleteFlowJobCallable(const DeleteFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowJobOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowProjectOutcome EmrClient::deleteFlowProject(const DeleteFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowProjectOutcome(DeleteFlowProjectResult(outcome.result()));
	else
		return DeleteFlowProjectOutcome(outcome.error());
}

void EmrClient::deleteFlowProjectAsync(const DeleteFlowProjectRequest& request, const DeleteFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowProjectOutcomeCallable EmrClient::deleteFlowProjectCallable(const DeleteFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowProjectClusterSettingOutcome EmrClient::deleteFlowProjectClusterSetting(const DeleteFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowProjectClusterSettingOutcome(DeleteFlowProjectClusterSettingResult(outcome.result()));
	else
		return DeleteFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::deleteFlowProjectClusterSettingAsync(const DeleteFlowProjectClusterSettingRequest& request, const DeleteFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowProjectClusterSettingOutcomeCallable EmrClient::deleteFlowProjectClusterSettingCallable(const DeleteFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteFlowProjectUserOutcome EmrClient::deleteFlowProjectUser(const DeleteFlowProjectUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowProjectUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowProjectUserOutcome(DeleteFlowProjectUserResult(outcome.result()));
	else
		return DeleteFlowProjectUserOutcome(outcome.error());
}

void EmrClient::deleteFlowProjectUserAsync(const DeleteFlowProjectUserRequest& request, const DeleteFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowProjectUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowProjectUserOutcomeCallable EmrClient::deleteFlowProjectUserCallable(const DeleteFlowProjectUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowProjectUserOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowProjectUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteResourcePoolOutcome EmrClient::deleteResourcePool(const DeleteResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourcePoolOutcome(DeleteResourcePoolResult(outcome.result()));
	else
		return DeleteResourcePoolOutcome(outcome.error());
}

void EmrClient::deleteResourcePoolAsync(const DeleteResourcePoolRequest& request, const DeleteResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteResourcePoolOutcomeCallable EmrClient::deleteResourcePoolCallable(const DeleteResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->deleteResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteResourceQueueOutcome EmrClient::deleteResourceQueue(const DeleteResourceQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceQueueOutcome(DeleteResourceQueueResult(outcome.result()));
	else
		return DeleteResourceQueueOutcome(outcome.error());
}

void EmrClient::deleteResourceQueueAsync(const DeleteResourceQueueRequest& request, const DeleteResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteResourceQueueOutcomeCallable EmrClient::deleteResourceQueueCallable(const DeleteResourceQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceQueueOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterBasicInfoOutcome EmrClient::describeClusterBasicInfo(const DescribeClusterBasicInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterBasicInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterBasicInfoOutcome(DescribeClusterBasicInfoResult(outcome.result()));
	else
		return DescribeClusterBasicInfoOutcome(outcome.error());
}

void EmrClient::describeClusterBasicInfoAsync(const DescribeClusterBasicInfoRequest& request, const DescribeClusterBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterBasicInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterBasicInfoOutcomeCallable EmrClient::describeClusterBasicInfoCallable(const DescribeClusterBasicInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterBasicInfoOutcome()>>(
			[this, request]()
			{
			return this->describeClusterBasicInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterOperationHostTaskLogOutcome EmrClient::describeClusterOperationHostTaskLog(const DescribeClusterOperationHostTaskLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterOperationHostTaskLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterOperationHostTaskLogOutcome(DescribeClusterOperationHostTaskLogResult(outcome.result()));
	else
		return DescribeClusterOperationHostTaskLogOutcome(outcome.error());
}

void EmrClient::describeClusterOperationHostTaskLogAsync(const DescribeClusterOperationHostTaskLogRequest& request, const DescribeClusterOperationHostTaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterOperationHostTaskLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterOperationHostTaskLogOutcomeCallable EmrClient::describeClusterOperationHostTaskLogCallable(const DescribeClusterOperationHostTaskLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterOperationHostTaskLogOutcome()>>(
			[this, request]()
			{
			return this->describeClusterOperationHostTaskLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterResourcePoolSchedulerTypeOutcome EmrClient::describeClusterResourcePoolSchedulerType(const DescribeClusterResourcePoolSchedulerTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterResourcePoolSchedulerTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterResourcePoolSchedulerTypeOutcome(DescribeClusterResourcePoolSchedulerTypeResult(outcome.result()));
	else
		return DescribeClusterResourcePoolSchedulerTypeOutcome(outcome.error());
}

void EmrClient::describeClusterResourcePoolSchedulerTypeAsync(const DescribeClusterResourcePoolSchedulerTypeRequest& request, const DescribeClusterResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterResourcePoolSchedulerType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterResourcePoolSchedulerTypeOutcomeCallable EmrClient::describeClusterResourcePoolSchedulerTypeCallable(const DescribeClusterResourcePoolSchedulerTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterResourcePoolSchedulerTypeOutcome()>>(
			[this, request]()
			{
			return this->describeClusterResourcePoolSchedulerType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceOutcome EmrClient::describeClusterService(const DescribeClusterServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceOutcome(DescribeClusterServiceResult(outcome.result()));
	else
		return DescribeClusterServiceOutcome(outcome.error());
}

void EmrClient::describeClusterServiceAsync(const DescribeClusterServiceRequest& request, const DescribeClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceOutcomeCallable EmrClient::describeClusterServiceCallable(const DescribeClusterServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceOutcome()>>(
			[this, request]()
			{
			return this->describeClusterService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceConfigOutcome EmrClient::describeClusterServiceConfig(const DescribeClusterServiceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceConfigOutcome(DescribeClusterServiceConfigResult(outcome.result()));
	else
		return DescribeClusterServiceConfigOutcome(outcome.error());
}

void EmrClient::describeClusterServiceConfigAsync(const DescribeClusterServiceConfigRequest& request, const DescribeClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServiceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceConfigOutcomeCallable EmrClient::describeClusterServiceConfigCallable(const DescribeClusterServiceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceConfigOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServiceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterServiceConfigTagOutcome EmrClient::describeClusterServiceConfigTag(const DescribeClusterServiceConfigTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceConfigTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceConfigTagOutcome(DescribeClusterServiceConfigTagResult(outcome.result()));
	else
		return DescribeClusterServiceConfigTagOutcome(outcome.error());
}

void EmrClient::describeClusterServiceConfigTagAsync(const DescribeClusterServiceConfigTagRequest& request, const DescribeClusterServiceConfigTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServiceConfigTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceConfigTagOutcomeCallable EmrClient::describeClusterServiceConfigTagCallable(const DescribeClusterServiceConfigTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceConfigTagOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServiceConfigTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterTemplateOutcome EmrClient::describeClusterTemplate(const DescribeClusterTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterTemplateOutcome(DescribeClusterTemplateResult(outcome.result()));
	else
		return DescribeClusterTemplateOutcome(outcome.error());
}

void EmrClient::describeClusterTemplateAsync(const DescribeClusterTemplateRequest& request, const DescribeClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterTemplateOutcomeCallable EmrClient::describeClusterTemplateCallable(const DescribeClusterTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeClusterTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeClusterV2Outcome EmrClient::describeClusterV2(const DescribeClusterV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterV2Outcome(DescribeClusterV2Result(outcome.result()));
	else
		return DescribeClusterV2Outcome(outcome.error());
}

void EmrClient::describeClusterV2Async(const DescribeClusterV2Request& request, const DescribeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterV2OutcomeCallable EmrClient::describeClusterV2Callable(const DescribeClusterV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterV2Outcome()>>(
			[this, request]()
			{
			return this->describeClusterV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowOutcome EmrClient::describeFlow(const DescribeFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowOutcome(DescribeFlowResult(outcome.result()));
	else
		return DescribeFlowOutcome(outcome.error());
}

void EmrClient::describeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowOutcomeCallable EmrClient::describeFlowCallable(const DescribeFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowOutcome()>>(
			[this, request]()
			{
			return this->describeFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowCategoryOutcome EmrClient::describeFlowCategory(const DescribeFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowCategoryOutcome(DescribeFlowCategoryResult(outcome.result()));
	else
		return DescribeFlowCategoryOutcome(outcome.error());
}

void EmrClient::describeFlowCategoryAsync(const DescribeFlowCategoryRequest& request, const DescribeFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowCategoryOutcomeCallable EmrClient::describeFlowCategoryCallable(const DescribeFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->describeFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowCategoryTreeOutcome EmrClient::describeFlowCategoryTree(const DescribeFlowCategoryTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowCategoryTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowCategoryTreeOutcome(DescribeFlowCategoryTreeResult(outcome.result()));
	else
		return DescribeFlowCategoryTreeOutcome(outcome.error());
}

void EmrClient::describeFlowCategoryTreeAsync(const DescribeFlowCategoryTreeRequest& request, const DescribeFlowCategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowCategoryTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowCategoryTreeOutcomeCallable EmrClient::describeFlowCategoryTreeCallable(const DescribeFlowCategoryTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowCategoryTreeOutcome()>>(
			[this, request]()
			{
			return this->describeFlowCategoryTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowInstanceOutcome EmrClient::describeFlowInstance(const DescribeFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowInstanceOutcome(DescribeFlowInstanceResult(outcome.result()));
	else
		return DescribeFlowInstanceOutcome(outcome.error());
}

void EmrClient::describeFlowInstanceAsync(const DescribeFlowInstanceRequest& request, const DescribeFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowInstanceOutcomeCallable EmrClient::describeFlowInstanceCallable(const DescribeFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowJobOutcome EmrClient::describeFlowJob(const DescribeFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowJobOutcome(DescribeFlowJobResult(outcome.result()));
	else
		return DescribeFlowJobOutcome(outcome.error());
}

void EmrClient::describeFlowJobAsync(const DescribeFlowJobRequest& request, const DescribeFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowJobOutcomeCallable EmrClient::describeFlowJobCallable(const DescribeFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowJobOutcome()>>(
			[this, request]()
			{
			return this->describeFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowNodeInstanceOutcome EmrClient::describeFlowNodeInstance(const DescribeFlowNodeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowNodeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowNodeInstanceOutcome(DescribeFlowNodeInstanceResult(outcome.result()));
	else
		return DescribeFlowNodeInstanceOutcome(outcome.error());
}

void EmrClient::describeFlowNodeInstanceAsync(const DescribeFlowNodeInstanceRequest& request, const DescribeFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowNodeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowNodeInstanceOutcomeCallable EmrClient::describeFlowNodeInstanceCallable(const DescribeFlowNodeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowNodeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeFlowNodeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowNodeInstanceContainerLogOutcome EmrClient::describeFlowNodeInstanceContainerLog(const DescribeFlowNodeInstanceContainerLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowNodeInstanceContainerLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowNodeInstanceContainerLogOutcome(DescribeFlowNodeInstanceContainerLogResult(outcome.result()));
	else
		return DescribeFlowNodeInstanceContainerLogOutcome(outcome.error());
}

void EmrClient::describeFlowNodeInstanceContainerLogAsync(const DescribeFlowNodeInstanceContainerLogRequest& request, const DescribeFlowNodeInstanceContainerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowNodeInstanceContainerLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowNodeInstanceContainerLogOutcomeCallable EmrClient::describeFlowNodeInstanceContainerLogCallable(const DescribeFlowNodeInstanceContainerLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowNodeInstanceContainerLogOutcome()>>(
			[this, request]()
			{
			return this->describeFlowNodeInstanceContainerLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowNodeInstanceLauncherLogOutcome EmrClient::describeFlowNodeInstanceLauncherLog(const DescribeFlowNodeInstanceLauncherLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowNodeInstanceLauncherLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowNodeInstanceLauncherLogOutcome(DescribeFlowNodeInstanceLauncherLogResult(outcome.result()));
	else
		return DescribeFlowNodeInstanceLauncherLogOutcome(outcome.error());
}

void EmrClient::describeFlowNodeInstanceLauncherLogAsync(const DescribeFlowNodeInstanceLauncherLogRequest& request, const DescribeFlowNodeInstanceLauncherLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowNodeInstanceLauncherLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowNodeInstanceLauncherLogOutcomeCallable EmrClient::describeFlowNodeInstanceLauncherLogCallable(const DescribeFlowNodeInstanceLauncherLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowNodeInstanceLauncherLogOutcome()>>(
			[this, request]()
			{
			return this->describeFlowNodeInstanceLauncherLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowProjectOutcome EmrClient::describeFlowProject(const DescribeFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowProjectOutcome(DescribeFlowProjectResult(outcome.result()));
	else
		return DescribeFlowProjectOutcome(outcome.error());
}

void EmrClient::describeFlowProjectAsync(const DescribeFlowProjectRequest& request, const DescribeFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowProjectOutcomeCallable EmrClient::describeFlowProjectCallable(const DescribeFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->describeFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowProjectClusterSettingOutcome EmrClient::describeFlowProjectClusterSetting(const DescribeFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowProjectClusterSettingOutcome(DescribeFlowProjectClusterSettingResult(outcome.result()));
	else
		return DescribeFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::describeFlowProjectClusterSettingAsync(const DescribeFlowProjectClusterSettingRequest& request, const DescribeFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowProjectClusterSettingOutcomeCallable EmrClient::describeFlowProjectClusterSettingCallable(const DescribeFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->describeFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeScalingConfigItemV2Outcome EmrClient::describeScalingConfigItemV2(const DescribeScalingConfigItemV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingConfigItemV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingConfigItemV2Outcome(DescribeScalingConfigItemV2Result(outcome.result()));
	else
		return DescribeScalingConfigItemV2Outcome(outcome.error());
}

void EmrClient::describeScalingConfigItemV2Async(const DescribeScalingConfigItemV2Request& request, const DescribeScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingConfigItemV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingConfigItemV2OutcomeCallable EmrClient::describeScalingConfigItemV2Callable(const DescribeScalingConfigItemV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingConfigItemV2Outcome()>>(
			[this, request]()
			{
			return this->describeScalingConfigItemV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeScalingGroupInstanceV2Outcome EmrClient::describeScalingGroupInstanceV2(const DescribeScalingGroupInstanceV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingGroupInstanceV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingGroupInstanceV2Outcome(DescribeScalingGroupInstanceV2Result(outcome.result()));
	else
		return DescribeScalingGroupInstanceV2Outcome(outcome.error());
}

void EmrClient::describeScalingGroupInstanceV2Async(const DescribeScalingGroupInstanceV2Request& request, const DescribeScalingGroupInstanceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingGroupInstanceV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingGroupInstanceV2OutcomeCallable EmrClient::describeScalingGroupInstanceV2Callable(const DescribeScalingGroupInstanceV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingGroupInstanceV2Outcome()>>(
			[this, request]()
			{
			return this->describeScalingGroupInstanceV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeScalingGroupV2Outcome EmrClient::describeScalingGroupV2(const DescribeScalingGroupV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingGroupV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingGroupV2Outcome(DescribeScalingGroupV2Result(outcome.result()));
	else
		return DescribeScalingGroupV2Outcome(outcome.error());
}

void EmrClient::describeScalingGroupV2Async(const DescribeScalingGroupV2Request& request, const DescribeScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingGroupV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingGroupV2OutcomeCallable EmrClient::describeScalingGroupV2Callable(const DescribeScalingGroupV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingGroupV2Outcome()>>(
			[this, request]()
			{
			return this->describeScalingGroupV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::JoinResourceGroupOutcome EmrClient::joinResourceGroup(const JoinResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinResourceGroupOutcome(JoinResourceGroupResult(outcome.result()));
	else
		return JoinResourceGroupOutcome(outcome.error());
}

void EmrClient::joinResourceGroupAsync(const JoinResourceGroupRequest& request, const JoinResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::JoinResourceGroupOutcomeCallable EmrClient::joinResourceGroupCallable(const JoinResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->joinResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::KillFlowJobOutcome EmrClient::killFlowJob(const KillFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillFlowJobOutcome(KillFlowJobResult(outcome.result()));
	else
		return KillFlowJobOutcome(outcome.error());
}

void EmrClient::killFlowJobAsync(const KillFlowJobRequest& request, const KillFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::KillFlowJobOutcomeCallable EmrClient::killFlowJobCallable(const KillFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillFlowJobOutcome()>>(
			[this, request]()
			{
			return this->killFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterHostOutcome EmrClient::listClusterHost(const ListClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterHostOutcome(ListClusterHostResult(outcome.result()));
	else
		return ListClusterHostOutcome(outcome.error());
}

void EmrClient::listClusterHostAsync(const ListClusterHostRequest& request, const ListClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterHostOutcomeCallable EmrClient::listClusterHostCallable(const ListClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterHostOutcome()>>(
			[this, request]()
			{
			return this->listClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterHostComponentOutcome EmrClient::listClusterHostComponent(const ListClusterHostComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterHostComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterHostComponentOutcome(ListClusterHostComponentResult(outcome.result()));
	else
		return ListClusterHostComponentOutcome(outcome.error());
}

void EmrClient::listClusterHostComponentAsync(const ListClusterHostComponentRequest& request, const ListClusterHostComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterHostComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterHostComponentOutcomeCallable EmrClient::listClusterHostComponentCallable(const ListClusterHostComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterHostComponentOutcome()>>(
			[this, request]()
			{
			return this->listClusterHostComponent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterHostGroupOutcome EmrClient::listClusterHostGroup(const ListClusterHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterHostGroupOutcome(ListClusterHostGroupResult(outcome.result()));
	else
		return ListClusterHostGroupOutcome(outcome.error());
}

void EmrClient::listClusterHostGroupAsync(const ListClusterHostGroupRequest& request, const ListClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterHostGroupOutcomeCallable EmrClient::listClusterHostGroupCallable(const ListClusterHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterHostGroupOutcome()>>(
			[this, request]()
			{
			return this->listClusterHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterInstalledServiceOutcome EmrClient::listClusterInstalledService(const ListClusterInstalledServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterInstalledServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterInstalledServiceOutcome(ListClusterInstalledServiceResult(outcome.result()));
	else
		return ListClusterInstalledServiceOutcome(outcome.error());
}

void EmrClient::listClusterInstalledServiceAsync(const ListClusterInstalledServiceRequest& request, const ListClusterInstalledServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterInstalledService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterInstalledServiceOutcomeCallable EmrClient::listClusterInstalledServiceCallable(const ListClusterInstalledServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterInstalledServiceOutcome()>>(
			[this, request]()
			{
			return this->listClusterInstalledService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterOperationOutcome EmrClient::listClusterOperation(const ListClusterOperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOperationOutcome(ListClusterOperationResult(outcome.result()));
	else
		return ListClusterOperationOutcome(outcome.error());
}

void EmrClient::listClusterOperationAsync(const ListClusterOperationRequest& request, const ListClusterOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterOperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterOperationOutcomeCallable EmrClient::listClusterOperationCallable(const ListClusterOperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOperationOutcome()>>(
			[this, request]()
			{
			return this->listClusterOperation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterOperationHostOutcome EmrClient::listClusterOperationHost(const ListClusterOperationHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOperationHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOperationHostOutcome(ListClusterOperationHostResult(outcome.result()));
	else
		return ListClusterOperationHostOutcome(outcome.error());
}

void EmrClient::listClusterOperationHostAsync(const ListClusterOperationHostRequest& request, const ListClusterOperationHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterOperationHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterOperationHostOutcomeCallable EmrClient::listClusterOperationHostCallable(const ListClusterOperationHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOperationHostOutcome()>>(
			[this, request]()
			{
			return this->listClusterOperationHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterOperationHostTaskOutcome EmrClient::listClusterOperationHostTask(const ListClusterOperationHostTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOperationHostTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOperationHostTaskOutcome(ListClusterOperationHostTaskResult(outcome.result()));
	else
		return ListClusterOperationHostTaskOutcome(outcome.error());
}

void EmrClient::listClusterOperationHostTaskAsync(const ListClusterOperationHostTaskRequest& request, const ListClusterOperationHostTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterOperationHostTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterOperationHostTaskOutcomeCallable EmrClient::listClusterOperationHostTaskCallable(const ListClusterOperationHostTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOperationHostTaskOutcome()>>(
			[this, request]()
			{
			return this->listClusterOperationHostTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterOperationTaskOutcome EmrClient::listClusterOperationTask(const ListClusterOperationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOperationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOperationTaskOutcome(ListClusterOperationTaskResult(outcome.result()));
	else
		return ListClusterOperationTaskOutcome(outcome.error());
}

void EmrClient::listClusterOperationTaskAsync(const ListClusterOperationTaskRequest& request, const ListClusterOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterOperationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterOperationTaskOutcomeCallable EmrClient::listClusterOperationTaskCallable(const ListClusterOperationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOperationTaskOutcome()>>(
			[this, request]()
			{
			return this->listClusterOperationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceOutcome EmrClient::listClusterService(const ListClusterServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceOutcome(ListClusterServiceResult(outcome.result()));
	else
		return ListClusterServiceOutcome(outcome.error());
}

void EmrClient::listClusterServiceAsync(const ListClusterServiceRequest& request, const ListClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceOutcomeCallable EmrClient::listClusterServiceCallable(const ListClusterServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceOutcome()>>(
			[this, request]()
			{
			return this->listClusterService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceComponentHealthInfoOutcome EmrClient::listClusterServiceComponentHealthInfo(const ListClusterServiceComponentHealthInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceComponentHealthInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceComponentHealthInfoOutcome(ListClusterServiceComponentHealthInfoResult(outcome.result()));
	else
		return ListClusterServiceComponentHealthInfoOutcome(outcome.error());
}

void EmrClient::listClusterServiceComponentHealthInfoAsync(const ListClusterServiceComponentHealthInfoRequest& request, const ListClusterServiceComponentHealthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceComponentHealthInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceComponentHealthInfoOutcomeCallable EmrClient::listClusterServiceComponentHealthInfoCallable(const ListClusterServiceComponentHealthInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceComponentHealthInfoOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceComponentHealthInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceConfigHistoryOutcome EmrClient::listClusterServiceConfigHistory(const ListClusterServiceConfigHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceConfigHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceConfigHistoryOutcome(ListClusterServiceConfigHistoryResult(outcome.result()));
	else
		return ListClusterServiceConfigHistoryOutcome(outcome.error());
}

void EmrClient::listClusterServiceConfigHistoryAsync(const ListClusterServiceConfigHistoryRequest& request, const ListClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceConfigHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceConfigHistoryOutcomeCallable EmrClient::listClusterServiceConfigHistoryCallable(const ListClusterServiceConfigHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceConfigHistoryOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceConfigHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterServiceQuickLinkOutcome EmrClient::listClusterServiceQuickLink(const ListClusterServiceQuickLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceQuickLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceQuickLinkOutcome(ListClusterServiceQuickLinkResult(outcome.result()));
	else
		return ListClusterServiceQuickLinkOutcome(outcome.error());
}

void EmrClient::listClusterServiceQuickLinkAsync(const ListClusterServiceQuickLinkRequest& request, const ListClusterServiceQuickLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceQuickLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceQuickLinkOutcomeCallable EmrClient::listClusterServiceQuickLinkCallable(const ListClusterServiceQuickLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceQuickLinkOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceQuickLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClusterTemplatesOutcome EmrClient::listClusterTemplates(const ListClusterTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterTemplatesOutcome(ListClusterTemplatesResult(outcome.result()));
	else
		return ListClusterTemplatesOutcome(outcome.error());
}

void EmrClient::listClusterTemplatesAsync(const ListClusterTemplatesRequest& request, const ListClusterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterTemplatesOutcomeCallable EmrClient::listClusterTemplatesCallable(const ListClusterTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listClusterTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListClustersOutcome EmrClient::listClusters(const ListClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClustersOutcome(ListClustersResult(outcome.result()));
	else
		return ListClustersOutcome(outcome.error());
}

void EmrClient::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClustersOutcomeCallable EmrClient::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListEmrAvailableConfigOutcome EmrClient::listEmrAvailableConfig(const ListEmrAvailableConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrAvailableConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrAvailableConfigOutcome(ListEmrAvailableConfigResult(outcome.result()));
	else
		return ListEmrAvailableConfigOutcome(outcome.error());
}

void EmrClient::listEmrAvailableConfigAsync(const ListEmrAvailableConfigRequest& request, const ListEmrAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrAvailableConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListEmrAvailableConfigOutcomeCallable EmrClient::listEmrAvailableConfigCallable(const ListEmrAvailableConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrAvailableConfigOutcome()>>(
			[this, request]()
			{
			return this->listEmrAvailableConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListEmrAvailableResourceOutcome EmrClient::listEmrAvailableResource(const ListEmrAvailableResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrAvailableResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrAvailableResourceOutcome(ListEmrAvailableResourceResult(outcome.result()));
	else
		return ListEmrAvailableResourceOutcome(outcome.error());
}

void EmrClient::listEmrAvailableResourceAsync(const ListEmrAvailableResourceRequest& request, const ListEmrAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrAvailableResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListEmrAvailableResourceOutcomeCallable EmrClient::listEmrAvailableResourceCallable(const ListEmrAvailableResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrAvailableResourceOutcome()>>(
			[this, request]()
			{
			return this->listEmrAvailableResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListEmrMainVersionOutcome EmrClient::listEmrMainVersion(const ListEmrMainVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmrMainVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmrMainVersionOutcome(ListEmrMainVersionResult(outcome.result()));
	else
		return ListEmrMainVersionOutcome(outcome.error());
}

void EmrClient::listEmrMainVersionAsync(const ListEmrMainVersionRequest& request, const ListEmrMainVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmrMainVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListEmrMainVersionOutcomeCallable EmrClient::listEmrMainVersionCallable(const ListEmrMainVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmrMainVersionOutcome()>>(
			[this, request]()
			{
			return this->listEmrMainVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowOutcome EmrClient::listFlow(const ListFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowOutcome(ListFlowResult(outcome.result()));
	else
		return ListFlowOutcome(outcome.error());
}

void EmrClient::listFlowAsync(const ListFlowRequest& request, const ListFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowOutcomeCallable EmrClient::listFlowCallable(const ListFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowOutcome()>>(
			[this, request]()
			{
			return this->listFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowCategoryOutcome EmrClient::listFlowCategory(const ListFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowCategoryOutcome(ListFlowCategoryResult(outcome.result()));
	else
		return ListFlowCategoryOutcome(outcome.error());
}

void EmrClient::listFlowCategoryAsync(const ListFlowCategoryRequest& request, const ListFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowCategoryOutcomeCallable EmrClient::listFlowCategoryCallable(const ListFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->listFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowClusterOutcome EmrClient::listFlowCluster(const ListFlowClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowClusterOutcome(ListFlowClusterResult(outcome.result()));
	else
		return ListFlowClusterOutcome(outcome.error());
}

void EmrClient::listFlowClusterAsync(const ListFlowClusterRequest& request, const ListFlowClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowClusterOutcomeCallable EmrClient::listFlowClusterCallable(const ListFlowClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowClusterOutcome()>>(
			[this, request]()
			{
			return this->listFlowCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowClusterAllOutcome EmrClient::listFlowClusterAll(const ListFlowClusterAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowClusterAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowClusterAllOutcome(ListFlowClusterAllResult(outcome.result()));
	else
		return ListFlowClusterAllOutcome(outcome.error());
}

void EmrClient::listFlowClusterAllAsync(const ListFlowClusterAllRequest& request, const ListFlowClusterAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowClusterAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowClusterAllOutcomeCallable EmrClient::listFlowClusterAllCallable(const ListFlowClusterAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowClusterAllOutcome()>>(
			[this, request]()
			{
			return this->listFlowClusterAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowClusterAllHostsOutcome EmrClient::listFlowClusterAllHosts(const ListFlowClusterAllHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowClusterAllHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowClusterAllHostsOutcome(ListFlowClusterAllHostsResult(outcome.result()));
	else
		return ListFlowClusterAllHostsOutcome(outcome.error());
}

void EmrClient::listFlowClusterAllHostsAsync(const ListFlowClusterAllHostsRequest& request, const ListFlowClusterAllHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowClusterAllHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowClusterAllHostsOutcomeCallable EmrClient::listFlowClusterAllHostsCallable(const ListFlowClusterAllHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowClusterAllHostsOutcome()>>(
			[this, request]()
			{
			return this->listFlowClusterAllHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowClusterHostOutcome EmrClient::listFlowClusterHost(const ListFlowClusterHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowClusterHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowClusterHostOutcome(ListFlowClusterHostResult(outcome.result()));
	else
		return ListFlowClusterHostOutcome(outcome.error());
}

void EmrClient::listFlowClusterHostAsync(const ListFlowClusterHostRequest& request, const ListFlowClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowClusterHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowClusterHostOutcomeCallable EmrClient::listFlowClusterHostCallable(const ListFlowClusterHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowClusterHostOutcome()>>(
			[this, request]()
			{
			return this->listFlowClusterHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowInstanceOutcome EmrClient::listFlowInstance(const ListFlowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowInstanceOutcome(ListFlowInstanceResult(outcome.result()));
	else
		return ListFlowInstanceOutcome(outcome.error());
}

void EmrClient::listFlowInstanceAsync(const ListFlowInstanceRequest& request, const ListFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowInstanceOutcomeCallable EmrClient::listFlowInstanceCallable(const ListFlowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowInstanceOutcome()>>(
			[this, request]()
			{
			return this->listFlowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowJobOutcome EmrClient::listFlowJob(const ListFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowJobOutcome(ListFlowJobResult(outcome.result()));
	else
		return ListFlowJobOutcome(outcome.error());
}

void EmrClient::listFlowJobAsync(const ListFlowJobRequest& request, const ListFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowJobOutcomeCallable EmrClient::listFlowJobCallable(const ListFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowJobOutcome()>>(
			[this, request]()
			{
			return this->listFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowJobHistoryOutcome EmrClient::listFlowJobHistory(const ListFlowJobHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowJobHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowJobHistoryOutcome(ListFlowJobHistoryResult(outcome.result()));
	else
		return ListFlowJobHistoryOutcome(outcome.error());
}

void EmrClient::listFlowJobHistoryAsync(const ListFlowJobHistoryRequest& request, const ListFlowJobHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowJobHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowJobHistoryOutcomeCallable EmrClient::listFlowJobHistoryCallable(const ListFlowJobHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowJobHistoryOutcome()>>(
			[this, request]()
			{
			return this->listFlowJobHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowNodeInstanceOutcome EmrClient::listFlowNodeInstance(const ListFlowNodeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowNodeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowNodeInstanceOutcome(ListFlowNodeInstanceResult(outcome.result()));
	else
		return ListFlowNodeInstanceOutcome(outcome.error());
}

void EmrClient::listFlowNodeInstanceAsync(const ListFlowNodeInstanceRequest& request, const ListFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowNodeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowNodeInstanceOutcomeCallable EmrClient::listFlowNodeInstanceCallable(const ListFlowNodeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowNodeInstanceOutcome()>>(
			[this, request]()
			{
			return this->listFlowNodeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowNodeInstanceContainerStatusOutcome EmrClient::listFlowNodeInstanceContainerStatus(const ListFlowNodeInstanceContainerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowNodeInstanceContainerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowNodeInstanceContainerStatusOutcome(ListFlowNodeInstanceContainerStatusResult(outcome.result()));
	else
		return ListFlowNodeInstanceContainerStatusOutcome(outcome.error());
}

void EmrClient::listFlowNodeInstanceContainerStatusAsync(const ListFlowNodeInstanceContainerStatusRequest& request, const ListFlowNodeInstanceContainerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowNodeInstanceContainerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowNodeInstanceContainerStatusOutcomeCallable EmrClient::listFlowNodeInstanceContainerStatusCallable(const ListFlowNodeInstanceContainerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowNodeInstanceContainerStatusOutcome()>>(
			[this, request]()
			{
			return this->listFlowNodeInstanceContainerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowNodeSqlResultOutcome EmrClient::listFlowNodeSqlResult(const ListFlowNodeSqlResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowNodeSqlResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowNodeSqlResultOutcome(ListFlowNodeSqlResultResult(outcome.result()));
	else
		return ListFlowNodeSqlResultOutcome(outcome.error());
}

void EmrClient::listFlowNodeSqlResultAsync(const ListFlowNodeSqlResultRequest& request, const ListFlowNodeSqlResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowNodeSqlResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowNodeSqlResultOutcomeCallable EmrClient::listFlowNodeSqlResultCallable(const ListFlowNodeSqlResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowNodeSqlResultOutcome()>>(
			[this, request]()
			{
			return this->listFlowNodeSqlResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowProjectOutcome EmrClient::listFlowProject(const ListFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowProjectOutcome(ListFlowProjectResult(outcome.result()));
	else
		return ListFlowProjectOutcome(outcome.error());
}

void EmrClient::listFlowProjectAsync(const ListFlowProjectRequest& request, const ListFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowProjectOutcomeCallable EmrClient::listFlowProjectCallable(const ListFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->listFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowProjectClusterSettingOutcome EmrClient::listFlowProjectClusterSetting(const ListFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowProjectClusterSettingOutcome(ListFlowProjectClusterSettingResult(outcome.result()));
	else
		return ListFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::listFlowProjectClusterSettingAsync(const ListFlowProjectClusterSettingRequest& request, const ListFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowProjectClusterSettingOutcomeCallable EmrClient::listFlowProjectClusterSettingCallable(const ListFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->listFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListFlowProjectUserOutcome EmrClient::listFlowProjectUser(const ListFlowProjectUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowProjectUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowProjectUserOutcome(ListFlowProjectUserResult(outcome.result()));
	else
		return ListFlowProjectUserOutcome(outcome.error());
}

void EmrClient::listFlowProjectUserAsync(const ListFlowProjectUserRequest& request, const ListFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowProjectUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowProjectUserOutcomeCallable EmrClient::listFlowProjectUserCallable(const ListFlowProjectUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowProjectUserOutcome()>>(
			[this, request]()
			{
			return this->listFlowProjectUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListResourcePoolOutcome EmrClient::listResourcePool(const ListResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourcePoolOutcome(ListResourcePoolResult(outcome.result()));
	else
		return ListResourcePoolOutcome(outcome.error());
}

void EmrClient::listResourcePoolAsync(const ListResourcePoolRequest& request, const ListResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListResourcePoolOutcomeCallable EmrClient::listResourcePoolCallable(const ListResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->listResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingActivityV2Outcome EmrClient::listScalingActivityV2(const ListScalingActivityV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingActivityV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingActivityV2Outcome(ListScalingActivityV2Result(outcome.result()));
	else
		return ListScalingActivityV2Outcome(outcome.error());
}

void EmrClient::listScalingActivityV2Async(const ListScalingActivityV2Request& request, const ListScalingActivityV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingActivityV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingActivityV2OutcomeCallable EmrClient::listScalingActivityV2Callable(const ListScalingActivityV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingActivityV2Outcome()>>(
			[this, request]()
			{
			return this->listScalingActivityV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingConfigItemV2Outcome EmrClient::listScalingConfigItemV2(const ListScalingConfigItemV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingConfigItemV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingConfigItemV2Outcome(ListScalingConfigItemV2Result(outcome.result()));
	else
		return ListScalingConfigItemV2Outcome(outcome.error());
}

void EmrClient::listScalingConfigItemV2Async(const ListScalingConfigItemV2Request& request, const ListScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingConfigItemV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingConfigItemV2OutcomeCallable EmrClient::listScalingConfigItemV2Callable(const ListScalingConfigItemV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingConfigItemV2Outcome()>>(
			[this, request]()
			{
			return this->listScalingConfigItemV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListScalingGroupV2Outcome EmrClient::listScalingGroupV2(const ListScalingGroupV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScalingGroupV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScalingGroupV2Outcome(ListScalingGroupV2Result(outcome.result()));
	else
		return ListScalingGroupV2Outcome(outcome.error());
}

void EmrClient::listScalingGroupV2Async(const ListScalingGroupV2Request& request, const ListScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScalingGroupV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListScalingGroupV2OutcomeCallable EmrClient::listScalingGroupV2Callable(const ListScalingGroupV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScalingGroupV2Outcome()>>(
			[this, request]()
			{
			return this->listScalingGroupV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListTagResourcesOutcome EmrClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void EmrClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListTagResourcesOutcomeCallable EmrClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterNameOutcome EmrClient::modifyClusterName(const ModifyClusterNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterNameOutcome(ModifyClusterNameResult(outcome.result()));
	else
		return ModifyClusterNameOutcome(outcome.error());
}

void EmrClient::modifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterNameOutcomeCallable EmrClient::modifyClusterNameCallable(const ModifyClusterNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterNameOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterServiceConfigOutcome EmrClient::modifyClusterServiceConfig(const ModifyClusterServiceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterServiceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterServiceConfigOutcome(ModifyClusterServiceConfigResult(outcome.result()));
	else
		return ModifyClusterServiceConfigOutcome(outcome.error());
}

void EmrClient::modifyClusterServiceConfigAsync(const ModifyClusterServiceConfigRequest& request, const ModifyClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterServiceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterServiceConfigOutcomeCallable EmrClient::modifyClusterServiceConfigCallable(const ModifyClusterServiceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterServiceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterServiceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterTemplateOutcome EmrClient::modifyClusterTemplate(const ModifyClusterTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterTemplateOutcome(ModifyClusterTemplateResult(outcome.result()));
	else
		return ModifyClusterTemplateOutcome(outcome.error());
}

void EmrClient::modifyClusterTemplateAsync(const ModifyClusterTemplateRequest& request, const ModifyClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterTemplateOutcomeCallable EmrClient::modifyClusterTemplateCallable(const ModifyClusterTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterTemplateOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowCategoryOutcome EmrClient::modifyFlowCategory(const ModifyFlowCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowCategoryOutcome(ModifyFlowCategoryResult(outcome.result()));
	else
		return ModifyFlowCategoryOutcome(outcome.error());
}

void EmrClient::modifyFlowCategoryAsync(const ModifyFlowCategoryRequest& request, const ModifyFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowCategoryOutcomeCallable EmrClient::modifyFlowCategoryCallable(const ModifyFlowCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowCategoryOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowForWebOutcome EmrClient::modifyFlowForWeb(const ModifyFlowForWebRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowForWebOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowForWebOutcome(ModifyFlowForWebResult(outcome.result()));
	else
		return ModifyFlowForWebOutcome(outcome.error());
}

void EmrClient::modifyFlowForWebAsync(const ModifyFlowForWebRequest& request, const ModifyFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowForWeb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowForWebOutcomeCallable EmrClient::modifyFlowForWebCallable(const ModifyFlowForWebRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowForWebOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowForWeb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowProjectOutcome EmrClient::modifyFlowProject(const ModifyFlowProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowProjectOutcome(ModifyFlowProjectResult(outcome.result()));
	else
		return ModifyFlowProjectOutcome(outcome.error());
}

void EmrClient::modifyFlowProjectAsync(const ModifyFlowProjectRequest& request, const ModifyFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowProjectOutcomeCallable EmrClient::modifyFlowProjectCallable(const ModifyFlowProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowProjectOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowProjectClusterSettingOutcome EmrClient::modifyFlowProjectClusterSetting(const ModifyFlowProjectClusterSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowProjectClusterSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowProjectClusterSettingOutcome(ModifyFlowProjectClusterSettingResult(outcome.result()));
	else
		return ModifyFlowProjectClusterSettingOutcome(outcome.error());
}

void EmrClient::modifyFlowProjectClusterSettingAsync(const ModifyFlowProjectClusterSettingRequest& request, const ModifyFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowProjectClusterSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowProjectClusterSettingOutcomeCallable EmrClient::modifyFlowProjectClusterSettingCallable(const ModifyFlowProjectClusterSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowProjectClusterSettingOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowProjectClusterSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyResourcePoolOutcome EmrClient::modifyResourcePool(const ModifyResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourcePoolOutcome(ModifyResourcePoolResult(outcome.result()));
	else
		return ModifyResourcePoolOutcome(outcome.error());
}

void EmrClient::modifyResourcePoolAsync(const ModifyResourcePoolRequest& request, const ModifyResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyResourcePoolOutcomeCallable EmrClient::modifyResourcePoolCallable(const ModifyResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->modifyResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyResourcePoolSchedulerTypeOutcome EmrClient::modifyResourcePoolSchedulerType(const ModifyResourcePoolSchedulerTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourcePoolSchedulerTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourcePoolSchedulerTypeOutcome(ModifyResourcePoolSchedulerTypeResult(outcome.result()));
	else
		return ModifyResourcePoolSchedulerTypeOutcome(outcome.error());
}

void EmrClient::modifyResourcePoolSchedulerTypeAsync(const ModifyResourcePoolSchedulerTypeRequest& request, const ModifyResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourcePoolSchedulerType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyResourcePoolSchedulerTypeOutcomeCallable EmrClient::modifyResourcePoolSchedulerTypeCallable(const ModifyResourcePoolSchedulerTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourcePoolSchedulerTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyResourcePoolSchedulerType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyResourceQueueOutcome EmrClient::modifyResourceQueue(const ModifyResourceQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyResourceQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyResourceQueueOutcome(ModifyResourceQueueResult(outcome.result()));
	else
		return ModifyResourceQueueOutcome(outcome.error());
}

void EmrClient::modifyResourceQueueAsync(const ModifyResourceQueueRequest& request, const ModifyResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyResourceQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyResourceQueueOutcomeCallable EmrClient::modifyResourceQueueCallable(const ModifyResourceQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyResourceQueueOutcome()>>(
			[this, request]()
			{
			return this->modifyResourceQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyScalingConfigItemV2Outcome EmrClient::modifyScalingConfigItemV2(const ModifyScalingConfigItemV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingConfigItemV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingConfigItemV2Outcome(ModifyScalingConfigItemV2Result(outcome.result()));
	else
		return ModifyScalingConfigItemV2Outcome(outcome.error());
}

void EmrClient::modifyScalingConfigItemV2Async(const ModifyScalingConfigItemV2Request& request, const ModifyScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingConfigItemV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyScalingConfigItemV2OutcomeCallable EmrClient::modifyScalingConfigItemV2Callable(const ModifyScalingConfigItemV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingConfigItemV2Outcome()>>(
			[this, request]()
			{
			return this->modifyScalingConfigItemV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyScalingGroupV2Outcome EmrClient::modifyScalingGroupV2(const ModifyScalingGroupV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingGroupV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingGroupV2Outcome(ModifyScalingGroupV2Result(outcome.result()));
	else
		return ModifyScalingGroupV2Outcome(outcome.error());
}

void EmrClient::modifyScalingGroupV2Async(const ModifyScalingGroupV2Request& request, const ModifyScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingGroupV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyScalingGroupV2OutcomeCallable EmrClient::modifyScalingGroupV2Callable(const ModifyScalingGroupV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingGroupV2Outcome()>>(
			[this, request]()
			{
			return this->modifyScalingGroupV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RefreshClusterResourcePoolOutcome EmrClient::refreshClusterResourcePool(const RefreshClusterResourcePoolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshClusterResourcePoolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshClusterResourcePoolOutcome(RefreshClusterResourcePoolResult(outcome.result()));
	else
		return RefreshClusterResourcePoolOutcome(outcome.error());
}

void EmrClient::refreshClusterResourcePoolAsync(const RefreshClusterResourcePoolRequest& request, const RefreshClusterResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshClusterResourcePool(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RefreshClusterResourcePoolOutcomeCallable EmrClient::refreshClusterResourcePoolCallable(const RefreshClusterResourcePoolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshClusterResourcePoolOutcome()>>(
			[this, request]()
			{
			return this->refreshClusterResourcePool(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ReleaseClusterOutcome EmrClient::releaseCluster(const ReleaseClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseClusterOutcome(ReleaseClusterResult(outcome.result()));
	else
		return ReleaseClusterOutcome(outcome.error());
}

void EmrClient::releaseClusterAsync(const ReleaseClusterRequest& request, const ReleaseClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ReleaseClusterOutcomeCallable EmrClient::releaseClusterCallable(const ReleaseClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseClusterOutcome()>>(
			[this, request]()
			{
			return this->releaseCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ReleaseClusterHostGroupOutcome EmrClient::releaseClusterHostGroup(const ReleaseClusterHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseClusterHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseClusterHostGroupOutcome(ReleaseClusterHostGroupResult(outcome.result()));
	else
		return ReleaseClusterHostGroupOutcome(outcome.error());
}

void EmrClient::releaseClusterHostGroupAsync(const ReleaseClusterHostGroupRequest& request, const ReleaseClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseClusterHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ReleaseClusterHostGroupOutcomeCallable EmrClient::releaseClusterHostGroupCallable(const ReleaseClusterHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseClusterHostGroupOutcome()>>(
			[this, request]()
			{
			return this->releaseClusterHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RemoveScalingConfigItemV2Outcome EmrClient::removeScalingConfigItemV2(const RemoveScalingConfigItemV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveScalingConfigItemV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveScalingConfigItemV2Outcome(RemoveScalingConfigItemV2Result(outcome.result()));
	else
		return RemoveScalingConfigItemV2Outcome(outcome.error());
}

void EmrClient::removeScalingConfigItemV2Async(const RemoveScalingConfigItemV2Request& request, const RemoveScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeScalingConfigItemV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RemoveScalingConfigItemV2OutcomeCallable EmrClient::removeScalingConfigItemV2Callable(const RemoveScalingConfigItemV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveScalingConfigItemV2Outcome()>>(
			[this, request]()
			{
			return this->removeScalingConfigItemV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RerunFlowOutcome EmrClient::rerunFlow(const RerunFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RerunFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RerunFlowOutcome(RerunFlowResult(outcome.result()));
	else
		return RerunFlowOutcome(outcome.error());
}

void EmrClient::rerunFlowAsync(const RerunFlowRequest& request, const RerunFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rerunFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RerunFlowOutcomeCallable EmrClient::rerunFlowCallable(const RerunFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RerunFlowOutcome()>>(
			[this, request]()
			{
			return this->rerunFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResizeClusterV2Outcome EmrClient::resizeClusterV2(const ResizeClusterV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeClusterV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeClusterV2Outcome(ResizeClusterV2Result(outcome.result()));
	else
		return ResizeClusterV2Outcome(outcome.error());
}

void EmrClient::resizeClusterV2Async(const ResizeClusterV2Request& request, const ResizeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeClusterV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResizeClusterV2OutcomeCallable EmrClient::resizeClusterV2Callable(const ResizeClusterV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeClusterV2Outcome()>>(
			[this, request]()
			{
			return this->resizeClusterV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResumeFlowOutcome EmrClient::resumeFlow(const ResumeFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeFlowOutcome(ResumeFlowResult(outcome.result()));
	else
		return ResumeFlowOutcome(outcome.error());
}

void EmrClient::resumeFlowAsync(const ResumeFlowRequest& request, const ResumeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResumeFlowOutcomeCallable EmrClient::resumeFlowCallable(const ResumeFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeFlowOutcome()>>(
			[this, request]()
			{
			return this->resumeFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunClusterServiceActionOutcome EmrClient::runClusterServiceAction(const RunClusterServiceActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunClusterServiceActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunClusterServiceActionOutcome(RunClusterServiceActionResult(outcome.result()));
	else
		return RunClusterServiceActionOutcome(outcome.error());
}

void EmrClient::runClusterServiceActionAsync(const RunClusterServiceActionRequest& request, const RunClusterServiceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runClusterServiceAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunClusterServiceActionOutcomeCallable EmrClient::runClusterServiceActionCallable(const RunClusterServiceActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunClusterServiceActionOutcome()>>(
			[this, request]()
			{
			return this->runClusterServiceAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RunScalingActionV2Outcome EmrClient::runScalingActionV2(const RunScalingActionV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunScalingActionV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunScalingActionV2Outcome(RunScalingActionV2Result(outcome.result()));
	else
		return RunScalingActionV2Outcome(outcome.error());
}

void EmrClient::runScalingActionV2Async(const RunScalingActionV2Request& request, const RunScalingActionV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runScalingActionV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunScalingActionV2OutcomeCallable EmrClient::runScalingActionV2Callable(const RunScalingActionV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<RunScalingActionV2Outcome()>>(
			[this, request]()
			{
			return this->runScalingActionV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::StartFlowOutcome EmrClient::startFlow(const StartFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartFlowOutcome(StartFlowResult(outcome.result()));
	else
		return StartFlowOutcome(outcome.error());
}

void EmrClient::startFlowAsync(const StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::StartFlowOutcomeCallable EmrClient::startFlowCallable(const StartFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartFlowOutcome()>>(
			[this, request]()
			{
			return this->startFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SubmitFlowOutcome EmrClient::submitFlow(const SubmitFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFlowOutcome(SubmitFlowResult(outcome.result()));
	else
		return SubmitFlowOutcome(outcome.error());
}

void EmrClient::submitFlowAsync(const SubmitFlowRequest& request, const SubmitFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SubmitFlowOutcomeCallable EmrClient::submitFlowCallable(const SubmitFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFlowOutcome()>>(
			[this, request]()
			{
			return this->submitFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SubmitFlowJobOutcome EmrClient::submitFlowJob(const SubmitFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFlowJobOutcome(SubmitFlowJobResult(outcome.result()));
	else
		return SubmitFlowJobOutcome(outcome.error());
}

void EmrClient::submitFlowJobAsync(const SubmitFlowJobRequest& request, const SubmitFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SubmitFlowJobOutcomeCallable EmrClient::submitFlowJobCallable(const SubmitFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFlowJobOutcome()>>(
			[this, request]()
			{
			return this->submitFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::SuspendFlowOutcome EmrClient::suspendFlow(const SuspendFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendFlowOutcome(SuspendFlowResult(outcome.result()));
	else
		return SuspendFlowOutcome(outcome.error());
}

void EmrClient::suspendFlowAsync(const SuspendFlowRequest& request, const SuspendFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SuspendFlowOutcomeCallable EmrClient::suspendFlowCallable(const SuspendFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendFlowOutcome()>>(
			[this, request]()
			{
			return this->suspendFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::TagResourcesOutcome EmrClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void EmrClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::TagResourcesOutcomeCallable EmrClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UntagResourcesOutcome EmrClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void EmrClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UntagResourcesOutcomeCallable EmrClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

