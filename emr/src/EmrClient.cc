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

EmrClient::AuthorizeSecurityGroupOutcome EmrClient::authorizeSecurityGroup(const AuthorizeSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeSecurityGroupOutcome(AuthorizeSecurityGroupResult(outcome.result()));
	else
		return AuthorizeSecurityGroupOutcome(outcome.error());
}

void EmrClient::authorizeSecurityGroupAsync(const AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::AuthorizeSecurityGroupOutcomeCallable EmrClient::authorizeSecurityGroupCallable(const AuthorizeSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->authorizeSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CancelOrderOutcome EmrClient::cancelOrder(const CancelOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOrderOutcome(CancelOrderResult(outcome.result()));
	else
		return CancelOrderOutcome(outcome.error());
}

void EmrClient::cancelOrderAsync(const CancelOrderRequest& request, const CancelOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CancelOrderOutcomeCallable EmrClient::cancelOrderCallable(const CancelOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOrderOutcome()>>(
			[this, request]()
			{
			return this->cancelOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CleanupFlowEntitySnapshotOutcome EmrClient::cleanupFlowEntitySnapshot(const CleanupFlowEntitySnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CleanupFlowEntitySnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CleanupFlowEntitySnapshotOutcome(CleanupFlowEntitySnapshotResult(outcome.result()));
	else
		return CleanupFlowEntitySnapshotOutcome(outcome.error());
}

void EmrClient::cleanupFlowEntitySnapshotAsync(const CleanupFlowEntitySnapshotRequest& request, const CleanupFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cleanupFlowEntitySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CleanupFlowEntitySnapshotOutcomeCallable EmrClient::cleanupFlowEntitySnapshotCallable(const CleanupFlowEntitySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CleanupFlowEntitySnapshotOutcome()>>(
			[this, request]()
			{
			return this->cleanupFlowEntitySnapshot(request);
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

EmrClient::CommitFlowEntitySnapshotOutcome EmrClient::commitFlowEntitySnapshot(const CommitFlowEntitySnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitFlowEntitySnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitFlowEntitySnapshotOutcome(CommitFlowEntitySnapshotResult(outcome.result()));
	else
		return CommitFlowEntitySnapshotOutcome(outcome.error());
}

void EmrClient::commitFlowEntitySnapshotAsync(const CommitFlowEntitySnapshotRequest& request, const CommitFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitFlowEntitySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CommitFlowEntitySnapshotOutcomeCallable EmrClient::commitFlowEntitySnapshotCallable(const CommitFlowEntitySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitFlowEntitySnapshotOutcome()>>(
			[this, request]()
			{
			return this->commitFlowEntitySnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateBackupOutcome EmrClient::createBackup(const CreateBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupOutcome(CreateBackupResult(outcome.result()));
	else
		return CreateBackupOutcome(outcome.error());
}

void EmrClient::createBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateBackupOutcomeCallable EmrClient::createBackupCallable(const CreateBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
			[this, request]()
			{
			return this->createBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateBackupPlanOutcome EmrClient::createBackupPlan(const CreateBackupPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupPlanOutcome(CreateBackupPlanResult(outcome.result()));
	else
		return CreateBackupPlanOutcome(outcome.error());
}

void EmrClient::createBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateBackupPlanOutcomeCallable EmrClient::createBackupPlanCallable(const CreateBackupPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupPlanOutcome()>>(
			[this, request]()
			{
			return this->createBackupPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateClusterBootstrapActionOutcome EmrClient::createClusterBootstrapAction(const CreateClusterBootstrapActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterBootstrapActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterBootstrapActionOutcome(CreateClusterBootstrapActionResult(outcome.result()));
	else
		return CreateClusterBootstrapActionOutcome(outcome.error());
}

void EmrClient::createClusterBootstrapActionAsync(const CreateClusterBootstrapActionRequest& request, const CreateClusterBootstrapActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClusterBootstrapAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateClusterBootstrapActionOutcomeCallable EmrClient::createClusterBootstrapActionCallable(const CreateClusterBootstrapActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterBootstrapActionOutcome()>>(
			[this, request]()
			{
			return this->createClusterBootstrapAction(request);
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

EmrClient::CreateDataSourceOutcome EmrClient::createDataSource(const CreateDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataSourceOutcome(CreateDataSourceResult(outcome.result()));
	else
		return CreateDataSourceOutcome(outcome.error());
}

void EmrClient::createDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateDataSourceOutcomeCallable EmrClient::createDataSourceCallable(const CreateDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateExecutionPlanOutcome EmrClient::createExecutionPlan(const CreateExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateExecutionPlanOutcome(CreateExecutionPlanResult(outcome.result()));
	else
		return CreateExecutionPlanOutcome(outcome.error());
}

void EmrClient::createExecutionPlanAsync(const CreateExecutionPlanRequest& request, const CreateExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateExecutionPlanOutcomeCallable EmrClient::createExecutionPlanCallable(const CreateExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->createExecutionPlan(request);
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

EmrClient::CreateFlowEditLockOutcome EmrClient::createFlowEditLock(const CreateFlowEditLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowEditLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowEditLockOutcome(CreateFlowEditLockResult(outcome.result()));
	else
		return CreateFlowEditLockOutcome(outcome.error());
}

void EmrClient::createFlowEditLockAsync(const CreateFlowEditLockRequest& request, const CreateFlowEditLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowEditLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateFlowEditLockOutcomeCallable EmrClient::createFlowEditLockCallable(const CreateFlowEditLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowEditLockOutcome()>>(
			[this, request]()
			{
			return this->createFlowEditLock(request);
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

EmrClient::CreateJobOutcome EmrClient::createJob(const CreateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobOutcome(CreateJobResult(outcome.result()));
	else
		return CreateJobOutcome(outcome.error());
}

void EmrClient::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateJobOutcomeCallable EmrClient::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateLibraryOutcome EmrClient::createLibrary(const CreateLibraryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLibraryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLibraryOutcome(CreateLibraryResult(outcome.result()));
	else
		return CreateLibraryOutcome(outcome.error());
}

void EmrClient::createLibraryAsync(const CreateLibraryRequest& request, const CreateLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLibrary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateLibraryOutcomeCallable EmrClient::createLibraryCallable(const CreateLibraryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLibraryOutcome()>>(
			[this, request]()
			{
			return this->createLibrary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateMetaTablePreviewTaskOutcome EmrClient::createMetaTablePreviewTask(const CreateMetaTablePreviewTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMetaTablePreviewTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMetaTablePreviewTaskOutcome(CreateMetaTablePreviewTaskResult(outcome.result()));
	else
		return CreateMetaTablePreviewTaskOutcome(outcome.error());
}

void EmrClient::createMetaTablePreviewTaskAsync(const CreateMetaTablePreviewTaskRequest& request, const CreateMetaTablePreviewTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMetaTablePreviewTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateMetaTablePreviewTaskOutcomeCallable EmrClient::createMetaTablePreviewTaskCallable(const CreateMetaTablePreviewTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMetaTablePreviewTaskOutcome()>>(
			[this, request]()
			{
			return this->createMetaTablePreviewTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateNoteOutcome EmrClient::createNote(const CreateNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNoteOutcome(CreateNoteResult(outcome.result()));
	else
		return CreateNoteOutcome(outcome.error());
}

void EmrClient::createNoteAsync(const CreateNoteRequest& request, const CreateNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateNoteOutcomeCallable EmrClient::createNoteCallable(const CreateNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNoteOutcome()>>(
			[this, request]()
			{
			return this->createNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateParagraphOutcome EmrClient::createParagraph(const CreateParagraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateParagraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateParagraphOutcome(CreateParagraphResult(outcome.result()));
	else
		return CreateParagraphOutcome(outcome.error());
}

void EmrClient::createParagraphAsync(const CreateParagraphRequest& request, const CreateParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParagraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateParagraphOutcomeCallable EmrClient::createParagraphCallable(const CreateParagraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParagraphOutcome()>>(
			[this, request]()
			{
			return this->createParagraph(request);
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

EmrClient::CreateScalingRuleOutcome EmrClient::createScalingRule(const CreateScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScalingRuleOutcome(CreateScalingRuleResult(outcome.result()));
	else
		return CreateScalingRuleOutcome(outcome.error());
}

void EmrClient::createScalingRuleAsync(const CreateScalingRuleRequest& request, const CreateScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateScalingRuleOutcomeCallable EmrClient::createScalingRuleCallable(const CreateScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->createScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateTagOutcome EmrClient::createTag(const CreateTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTagOutcome(CreateTagResult(outcome.result()));
	else
		return CreateTagOutcome(outcome.error());
}

void EmrClient::createTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateTagOutcomeCallable EmrClient::createTagCallable(const CreateTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagOutcome()>>(
			[this, request]()
			{
			return this->createTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateUserOutcome EmrClient::createUser(const CreateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserOutcome(CreateUserResult(outcome.result()));
	else
		return CreateUserOutcome(outcome.error());
}

void EmrClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateUserOutcomeCallable EmrClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::CreateUsersOutcome EmrClient::createUsers(const CreateUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUsersOutcome(CreateUsersResult(outcome.result()));
	else
		return CreateUsersOutcome(outcome.error());
}

void EmrClient::createUsersAsync(const CreateUsersRequest& request, const CreateUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::CreateUsersOutcomeCallable EmrClient::createUsersCallable(const CreateUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUsersOutcome()>>(
			[this, request]()
			{
			return this->createUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DecommissionHostComponentOutcome EmrClient::decommissionHostComponent(const DecommissionHostComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecommissionHostComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecommissionHostComponentOutcome(DecommissionHostComponentResult(outcome.result()));
	else
		return DecommissionHostComponentOutcome(outcome.error());
}

void EmrClient::decommissionHostComponentAsync(const DecommissionHostComponentRequest& request, const DecommissionHostComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decommissionHostComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DecommissionHostComponentOutcomeCallable EmrClient::decommissionHostComponentCallable(const DecommissionHostComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecommissionHostComponentOutcome()>>(
			[this, request]()
			{
			return this->decommissionHostComponent(request);
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

EmrClient::DeleteExecutionPlanOutcome EmrClient::deleteExecutionPlan(const DeleteExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExecutionPlanOutcome(DeleteExecutionPlanResult(outcome.result()));
	else
		return DeleteExecutionPlanOutcome(outcome.error());
}

void EmrClient::deleteExecutionPlanAsync(const DeleteExecutionPlanRequest& request, const DeleteExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteExecutionPlanOutcomeCallable EmrClient::deleteExecutionPlanCallable(const DeleteExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->deleteExecutionPlan(request);
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

EmrClient::DeleteFlowEditLockOutcome EmrClient::deleteFlowEditLock(const DeleteFlowEditLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowEditLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowEditLockOutcome(DeleteFlowEditLockResult(outcome.result()));
	else
		return DeleteFlowEditLockOutcome(outcome.error());
}

void EmrClient::deleteFlowEditLockAsync(const DeleteFlowEditLockRequest& request, const DeleteFlowEditLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowEditLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteFlowEditLockOutcomeCallable EmrClient::deleteFlowEditLockCallable(const DeleteFlowEditLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowEditLockOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowEditLock(request);
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

EmrClient::DeleteJobOutcome EmrClient::deleteJob(const DeleteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobOutcome(DeleteJobResult(outcome.result()));
	else
		return DeleteJobOutcome(outcome.error());
}

void EmrClient::deleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteJobOutcomeCallable EmrClient::deleteJobCallable(const DeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobOutcome()>>(
			[this, request]()
			{
			return this->deleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteLibrariesOutcome EmrClient::deleteLibraries(const DeleteLibrariesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLibrariesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLibrariesOutcome(DeleteLibrariesResult(outcome.result()));
	else
		return DeleteLibrariesOutcome(outcome.error());
}

void EmrClient::deleteLibrariesAsync(const DeleteLibrariesRequest& request, const DeleteLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLibraries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteLibrariesOutcomeCallable EmrClient::deleteLibrariesCallable(const DeleteLibrariesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLibrariesOutcome()>>(
			[this, request]()
			{
			return this->deleteLibraries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteNoteOutcome EmrClient::deleteNote(const DeleteNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNoteOutcome(DeleteNoteResult(outcome.result()));
	else
		return DeleteNoteOutcome(outcome.error());
}

void EmrClient::deleteNoteAsync(const DeleteNoteRequest& request, const DeleteNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteNoteOutcomeCallable EmrClient::deleteNoteCallable(const DeleteNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNoteOutcome()>>(
			[this, request]()
			{
			return this->deleteNote(request);
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

EmrClient::DeleteScalingRuleOutcome EmrClient::deleteScalingRule(const DeleteScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScalingRuleOutcome(DeleteScalingRuleResult(outcome.result()));
	else
		return DeleteScalingRuleOutcome(outcome.error());
}

void EmrClient::deleteScalingRuleAsync(const DeleteScalingRuleRequest& request, const DeleteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteScalingRuleOutcomeCallable EmrClient::deleteScalingRuleCallable(const DeleteScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteTagOutcome EmrClient::deleteTag(const DeleteTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagOutcome(DeleteTagResult(outcome.result()));
	else
		return DeleteTagOutcome(outcome.error());
}

void EmrClient::deleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteTagOutcomeCallable EmrClient::deleteTagCallable(const DeleteTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagOutcome()>>(
			[this, request]()
			{
			return this->deleteTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DeleteUserOutcome EmrClient::deleteUser(const DeleteUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserOutcome(DeleteUserResult(outcome.result()));
	else
		return DeleteUserOutcome(outcome.error());
}

void EmrClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DeleteUserOutcomeCallable EmrClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
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

EmrClient::DescribeClusterMetaCollectOutcome EmrClient::describeClusterMetaCollect(const DescribeClusterMetaCollectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterMetaCollectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterMetaCollectOutcome(DescribeClusterMetaCollectResult(outcome.result()));
	else
		return DescribeClusterMetaCollectOutcome(outcome.error());
}

void EmrClient::describeClusterMetaCollectAsync(const DescribeClusterMetaCollectRequest& request, const DescribeClusterMetaCollectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterMetaCollect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterMetaCollectOutcomeCallable EmrClient::describeClusterMetaCollectCallable(const DescribeClusterMetaCollectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterMetaCollectOutcome()>>(
			[this, request]()
			{
			return this->describeClusterMetaCollect(request);
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

EmrClient::DescribeClusterServiceConfigHistoryOutcome EmrClient::describeClusterServiceConfigHistory(const DescribeClusterServiceConfigHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterServiceConfigHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterServiceConfigHistoryOutcome(DescribeClusterServiceConfigHistoryResult(outcome.result()));
	else
		return DescribeClusterServiceConfigHistoryOutcome(outcome.error());
}

void EmrClient::describeClusterServiceConfigHistoryAsync(const DescribeClusterServiceConfigHistoryRequest& request, const DescribeClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterServiceConfigHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeClusterServiceConfigHistoryOutcomeCallable EmrClient::describeClusterServiceConfigHistoryCallable(const DescribeClusterServiceConfigHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterServiceConfigHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeClusterServiceConfigHistory(request);
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

EmrClient::DescribeDataSourceOutcome EmrClient::describeDataSource(const DescribeDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSourceOutcome(DescribeDataSourceResult(outcome.result()));
	else
		return DescribeDataSourceOutcome(outcome.error());
}

void EmrClient::describeDataSourceAsync(const DescribeDataSourceRequest& request, const DescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeDataSourceOutcomeCallable EmrClient::describeDataSourceCallable(const DescribeDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSourceOutcome()>>(
			[this, request]()
			{
			return this->describeDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeExecutionPlanOutcome EmrClient::describeExecutionPlan(const DescribeExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExecutionPlanOutcome(DescribeExecutionPlanResult(outcome.result()));
	else
		return DescribeExecutionPlanOutcome(outcome.error());
}

void EmrClient::describeExecutionPlanAsync(const DescribeExecutionPlanRequest& request, const DescribeExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeExecutionPlanOutcomeCallable EmrClient::describeExecutionPlanCallable(const DescribeExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->describeExecutionPlan(request);
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

EmrClient::DescribeFlowAgentTokenOutcome EmrClient::describeFlowAgentToken(const DescribeFlowAgentTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowAgentTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowAgentTokenOutcome(DescribeFlowAgentTokenResult(outcome.result()));
	else
		return DescribeFlowAgentTokenOutcome(outcome.error());
}

void EmrClient::describeFlowAgentTokenAsync(const DescribeFlowAgentTokenRequest& request, const DescribeFlowAgentTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowAgentToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowAgentTokenOutcomeCallable EmrClient::describeFlowAgentTokenCallable(const DescribeFlowAgentTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowAgentTokenOutcome()>>(
			[this, request]()
			{
			return this->describeFlowAgentToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeFlowAgentUserOutcome EmrClient::describeFlowAgentUser(const DescribeFlowAgentUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowAgentUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowAgentUserOutcome(DescribeFlowAgentUserResult(outcome.result()));
	else
		return DescribeFlowAgentUserOutcome(outcome.error());
}

void EmrClient::describeFlowAgentUserAsync(const DescribeFlowAgentUserRequest& request, const DescribeFlowAgentUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowAgentUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowAgentUserOutcomeCallable EmrClient::describeFlowAgentUserCallable(const DescribeFlowAgentUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowAgentUserOutcome()>>(
			[this, request]()
			{
			return this->describeFlowAgentUser(request);
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

EmrClient::DescribeFlowEntitySnapshotOutcome EmrClient::describeFlowEntitySnapshot(const DescribeFlowEntitySnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFlowEntitySnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFlowEntitySnapshotOutcome(DescribeFlowEntitySnapshotResult(outcome.result()));
	else
		return DescribeFlowEntitySnapshotOutcome(outcome.error());
}

void EmrClient::describeFlowEntitySnapshotAsync(const DescribeFlowEntitySnapshotRequest& request, const DescribeFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFlowEntitySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeFlowEntitySnapshotOutcomeCallable EmrClient::describeFlowEntitySnapshotCallable(const DescribeFlowEntitySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFlowEntitySnapshotOutcome()>>(
			[this, request]()
			{
			return this->describeFlowEntitySnapshot(request);
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

EmrClient::DescribeJobOutcome EmrClient::describeJob(const DescribeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobOutcome(DescribeJobResult(outcome.result()));
	else
		return DescribeJobOutcome(outcome.error());
}

void EmrClient::describeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeJobOutcomeCallable EmrClient::describeJobCallable(const DescribeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobOutcome()>>(
			[this, request]()
			{
			return this->describeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeLibraryDetailOutcome EmrClient::describeLibraryDetail(const DescribeLibraryDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLibraryDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLibraryDetailOutcome(DescribeLibraryDetailResult(outcome.result()));
	else
		return DescribeLibraryDetailOutcome(outcome.error());
}

void EmrClient::describeLibraryDetailAsync(const DescribeLibraryDetailRequest& request, const DescribeLibraryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLibraryDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeLibraryDetailOutcomeCallable EmrClient::describeLibraryDetailCallable(const DescribeLibraryDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLibraryDetailOutcome()>>(
			[this, request]()
			{
			return this->describeLibraryDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeLibraryInstallTaskDetailOutcome EmrClient::describeLibraryInstallTaskDetail(const DescribeLibraryInstallTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLibraryInstallTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLibraryInstallTaskDetailOutcome(DescribeLibraryInstallTaskDetailResult(outcome.result()));
	else
		return DescribeLibraryInstallTaskDetailOutcome(outcome.error());
}

void EmrClient::describeLibraryInstallTaskDetailAsync(const DescribeLibraryInstallTaskDetailRequest& request, const DescribeLibraryInstallTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLibraryInstallTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeLibraryInstallTaskDetailOutcomeCallable EmrClient::describeLibraryInstallTaskDetailCallable(const DescribeLibraryInstallTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLibraryInstallTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->describeLibraryInstallTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeMetaTablePreviewTaskOutcome EmrClient::describeMetaTablePreviewTask(const DescribeMetaTablePreviewTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetaTablePreviewTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetaTablePreviewTaskOutcome(DescribeMetaTablePreviewTaskResult(outcome.result()));
	else
		return DescribeMetaTablePreviewTaskOutcome(outcome.error());
}

void EmrClient::describeMetaTablePreviewTaskAsync(const DescribeMetaTablePreviewTaskRequest& request, const DescribeMetaTablePreviewTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetaTablePreviewTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeMetaTablePreviewTaskOutcomeCallable EmrClient::describeMetaTablePreviewTaskCallable(const DescribeMetaTablePreviewTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetaTablePreviewTaskOutcome()>>(
			[this, request]()
			{
			return this->describeMetaTablePreviewTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeScalingActivityOutcome EmrClient::describeScalingActivity(const DescribeScalingActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingActivityOutcome(DescribeScalingActivityResult(outcome.result()));
	else
		return DescribeScalingActivityOutcome(outcome.error());
}

void EmrClient::describeScalingActivityAsync(const DescribeScalingActivityRequest& request, const DescribeScalingActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingActivityOutcomeCallable EmrClient::describeScalingActivityCallable(const DescribeScalingActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingActivityOutcome()>>(
			[this, request]()
			{
			return this->describeScalingActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeScalingCommonConfigOutcome EmrClient::describeScalingCommonConfig(const DescribeScalingCommonConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingCommonConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingCommonConfigOutcome(DescribeScalingCommonConfigResult(outcome.result()));
	else
		return DescribeScalingCommonConfigOutcome(outcome.error());
}

void EmrClient::describeScalingCommonConfigAsync(const DescribeScalingCommonConfigRequest& request, const DescribeScalingCommonConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingCommonConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingCommonConfigOutcomeCallable EmrClient::describeScalingCommonConfigCallable(const DescribeScalingCommonConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingCommonConfigOutcome()>>(
			[this, request]()
			{
			return this->describeScalingCommonConfig(request);
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

EmrClient::DescribeScalingRuleOutcome EmrClient::describeScalingRule(const DescribeScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScalingRuleOutcome(DescribeScalingRuleResult(outcome.result()));
	else
		return DescribeScalingRuleOutcome(outcome.error());
}

void EmrClient::describeScalingRuleAsync(const DescribeScalingRuleRequest& request, const DescribeScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeScalingRuleOutcomeCallable EmrClient::describeScalingRuleCallable(const DescribeScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->describeScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DescribeSecurityGroupAttributeOutcome EmrClient::describeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityGroupAttributeOutcome(DescribeSecurityGroupAttributeResult(outcome.result()));
	else
		return DescribeSecurityGroupAttributeOutcome(outcome.error());
}

void EmrClient::describeSecurityGroupAttributeAsync(const DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DescribeSecurityGroupAttributeOutcomeCallable EmrClient::describeSecurityGroupAttributeCallable(const DescribeSecurityGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DetachAndReleaseClusterEniOutcome EmrClient::detachAndReleaseClusterEni(const DetachAndReleaseClusterEniRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachAndReleaseClusterEniOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachAndReleaseClusterEniOutcome(DetachAndReleaseClusterEniResult(outcome.result()));
	else
		return DetachAndReleaseClusterEniOutcome(outcome.error());
}

void EmrClient::detachAndReleaseClusterEniAsync(const DetachAndReleaseClusterEniRequest& request, const DetachAndReleaseClusterEniAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachAndReleaseClusterEni(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DetachAndReleaseClusterEniOutcomeCallable EmrClient::detachAndReleaseClusterEniCallable(const DetachAndReleaseClusterEniRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachAndReleaseClusterEniOutcome()>>(
			[this, request]()
			{
			return this->detachAndReleaseClusterEni(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DiffFlowEntitySnapshotOutcome EmrClient::diffFlowEntitySnapshot(const DiffFlowEntitySnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DiffFlowEntitySnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DiffFlowEntitySnapshotOutcome(DiffFlowEntitySnapshotResult(outcome.result()));
	else
		return DiffFlowEntitySnapshotOutcome(outcome.error());
}

void EmrClient::diffFlowEntitySnapshotAsync(const DiffFlowEntitySnapshotRequest& request, const DiffFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, diffFlowEntitySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DiffFlowEntitySnapshotOutcomeCallable EmrClient::diffFlowEntitySnapshotCallable(const DiffFlowEntitySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DiffFlowEntitySnapshotOutcome()>>(
			[this, request]()
			{
			return this->diffFlowEntitySnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::DumpMetaDataSourceForOuterOutcome EmrClient::dumpMetaDataSourceForOuter(const DumpMetaDataSourceForOuterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DumpMetaDataSourceForOuterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DumpMetaDataSourceForOuterOutcome(DumpMetaDataSourceForOuterResult(outcome.result()));
	else
		return DumpMetaDataSourceForOuterOutcome(outcome.error());
}

void EmrClient::dumpMetaDataSourceForOuterAsync(const DumpMetaDataSourceForOuterRequest& request, const DumpMetaDataSourceForOuterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dumpMetaDataSourceForOuter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::DumpMetaDataSourceForOuterOutcomeCallable EmrClient::dumpMetaDataSourceForOuterCallable(const DumpMetaDataSourceForOuterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DumpMetaDataSourceForOuterOutcome()>>(
			[this, request]()
			{
			return this->dumpMetaDataSourceForOuter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetFlowEntityRelationGraphOutcome EmrClient::getFlowEntityRelationGraph(const GetFlowEntityRelationGraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFlowEntityRelationGraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFlowEntityRelationGraphOutcome(GetFlowEntityRelationGraphResult(outcome.result()));
	else
		return GetFlowEntityRelationGraphOutcome(outcome.error());
}

void EmrClient::getFlowEntityRelationGraphAsync(const GetFlowEntityRelationGraphRequest& request, const GetFlowEntityRelationGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFlowEntityRelationGraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetFlowEntityRelationGraphOutcomeCallable EmrClient::getFlowEntityRelationGraphCallable(const GetFlowEntityRelationGraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFlowEntityRelationGraphOutcome()>>(
			[this, request]()
			{
			return this->getFlowEntityRelationGraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetHdfsCapacityStatisticInfoOutcome EmrClient::getHdfsCapacityStatisticInfo(const GetHdfsCapacityStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHdfsCapacityStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHdfsCapacityStatisticInfoOutcome(GetHdfsCapacityStatisticInfoResult(outcome.result()));
	else
		return GetHdfsCapacityStatisticInfoOutcome(outcome.error());
}

void EmrClient::getHdfsCapacityStatisticInfoAsync(const GetHdfsCapacityStatisticInfoRequest& request, const GetHdfsCapacityStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHdfsCapacityStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetHdfsCapacityStatisticInfoOutcomeCallable EmrClient::getHdfsCapacityStatisticInfoCallable(const GetHdfsCapacityStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHdfsCapacityStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getHdfsCapacityStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetJobInputStatisticInfoOutcome EmrClient::getJobInputStatisticInfo(const GetJobInputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobInputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobInputStatisticInfoOutcome(GetJobInputStatisticInfoResult(outcome.result()));
	else
		return GetJobInputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getJobInputStatisticInfoAsync(const GetJobInputStatisticInfoRequest& request, const GetJobInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobInputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetJobInputStatisticInfoOutcomeCallable EmrClient::getJobInputStatisticInfoCallable(const GetJobInputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobInputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getJobInputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetJobOutputStatisticInfoOutcome EmrClient::getJobOutputStatisticInfo(const GetJobOutputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobOutputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobOutputStatisticInfoOutcome(GetJobOutputStatisticInfoResult(outcome.result()));
	else
		return GetJobOutputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getJobOutputStatisticInfoAsync(const GetJobOutputStatisticInfoRequest& request, const GetJobOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobOutputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetJobOutputStatisticInfoOutcomeCallable EmrClient::getJobOutputStatisticInfoCallable(const GetJobOutputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobOutputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getJobOutputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetJobRunningTimeStatisticInfoOutcome EmrClient::getJobRunningTimeStatisticInfo(const GetJobRunningTimeStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobRunningTimeStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobRunningTimeStatisticInfoOutcome(GetJobRunningTimeStatisticInfoResult(outcome.result()));
	else
		return GetJobRunningTimeStatisticInfoOutcome(outcome.error());
}

void EmrClient::getJobRunningTimeStatisticInfoAsync(const GetJobRunningTimeStatisticInfoRequest& request, const GetJobRunningTimeStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobRunningTimeStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetJobRunningTimeStatisticInfoOutcomeCallable EmrClient::getJobRunningTimeStatisticInfoCallable(const GetJobRunningTimeStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobRunningTimeStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getJobRunningTimeStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetQueueInputStatisticInfoOutcome EmrClient::getQueueInputStatisticInfo(const GetQueueInputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQueueInputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQueueInputStatisticInfoOutcome(GetQueueInputStatisticInfoResult(outcome.result()));
	else
		return GetQueueInputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getQueueInputStatisticInfoAsync(const GetQueueInputStatisticInfoRequest& request, const GetQueueInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQueueInputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetQueueInputStatisticInfoOutcomeCallable EmrClient::getQueueInputStatisticInfoCallable(const GetQueueInputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQueueInputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getQueueInputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetQueueOutputStatisticInfoOutcome EmrClient::getQueueOutputStatisticInfo(const GetQueueOutputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQueueOutputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQueueOutputStatisticInfoOutcome(GetQueueOutputStatisticInfoResult(outcome.result()));
	else
		return GetQueueOutputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getQueueOutputStatisticInfoAsync(const GetQueueOutputStatisticInfoRequest& request, const GetQueueOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQueueOutputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetQueueOutputStatisticInfoOutcomeCallable EmrClient::getQueueOutputStatisticInfoCallable(const GetQueueOutputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQueueOutputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getQueueOutputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetQueueSubmissionStatisticInfoOutcome EmrClient::getQueueSubmissionStatisticInfo(const GetQueueSubmissionStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQueueSubmissionStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQueueSubmissionStatisticInfoOutcome(GetQueueSubmissionStatisticInfoResult(outcome.result()));
	else
		return GetQueueSubmissionStatisticInfoOutcome(outcome.error());
}

void EmrClient::getQueueSubmissionStatisticInfoAsync(const GetQueueSubmissionStatisticInfoRequest& request, const GetQueueSubmissionStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQueueSubmissionStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetQueueSubmissionStatisticInfoOutcomeCallable EmrClient::getQueueSubmissionStatisticInfoCallable(const GetQueueSubmissionStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQueueSubmissionStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getQueueSubmissionStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetUserInputStatisticInfoOutcome EmrClient::getUserInputStatisticInfo(const GetUserInputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserInputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserInputStatisticInfoOutcome(GetUserInputStatisticInfoResult(outcome.result()));
	else
		return GetUserInputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getUserInputStatisticInfoAsync(const GetUserInputStatisticInfoRequest& request, const GetUserInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserInputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetUserInputStatisticInfoOutcomeCallable EmrClient::getUserInputStatisticInfoCallable(const GetUserInputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserInputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserInputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetUserOutputStatisticInfoOutcome EmrClient::getUserOutputStatisticInfo(const GetUserOutputStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutputStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutputStatisticInfoOutcome(GetUserOutputStatisticInfoResult(outcome.result()));
	else
		return GetUserOutputStatisticInfoOutcome(outcome.error());
}

void EmrClient::getUserOutputStatisticInfoAsync(const GetUserOutputStatisticInfoRequest& request, const GetUserOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserOutputStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetUserOutputStatisticInfoOutcomeCallable EmrClient::getUserOutputStatisticInfoCallable(const GetUserOutputStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutputStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserOutputStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::GetUserSubmissionStatisticInfoOutcome EmrClient::getUserSubmissionStatisticInfo(const GetUserSubmissionStatisticInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserSubmissionStatisticInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserSubmissionStatisticInfoOutcome(GetUserSubmissionStatisticInfoResult(outcome.result()));
	else
		return GetUserSubmissionStatisticInfoOutcome(outcome.error());
}

void EmrClient::getUserSubmissionStatisticInfoAsync(const GetUserSubmissionStatisticInfoRequest& request, const GetUserSubmissionStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserSubmissionStatisticInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::GetUserSubmissionStatisticInfoOutcomeCallable EmrClient::getUserSubmissionStatisticInfoCallable(const GetUserSubmissionStatisticInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserSubmissionStatisticInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserSubmissionStatisticInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::InstallLibrariesOutcome EmrClient::installLibraries(const InstallLibrariesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallLibrariesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallLibrariesOutcome(InstallLibrariesResult(outcome.result()));
	else
		return InstallLibrariesOutcome(outcome.error());
}

void EmrClient::installLibrariesAsync(const InstallLibrariesRequest& request, const InstallLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installLibraries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::InstallLibrariesOutcomeCallable EmrClient::installLibrariesCallable(const InstallLibrariesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallLibrariesOutcome()>>(
			[this, request]()
			{
			return this->installLibraries(request);
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

EmrClient::KillExecutionJobInstanceOutcome EmrClient::killExecutionJobInstance(const KillExecutionJobInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillExecutionJobInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillExecutionJobInstanceOutcome(KillExecutionJobInstanceResult(outcome.result()));
	else
		return KillExecutionJobInstanceOutcome(outcome.error());
}

void EmrClient::killExecutionJobInstanceAsync(const KillExecutionJobInstanceRequest& request, const KillExecutionJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killExecutionJobInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::KillExecutionJobInstanceOutcomeCallable EmrClient::killExecutionJobInstanceCallable(const KillExecutionJobInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillExecutionJobInstanceOutcome()>>(
			[this, request]()
			{
			return this->killExecutionJobInstance(request);
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

EmrClient::ListAdviceActionOutcome EmrClient::listAdviceAction(const ListAdviceActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAdviceActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAdviceActionOutcome(ListAdviceActionResult(outcome.result()));
	else
		return ListAdviceActionOutcome(outcome.error());
}

void EmrClient::listAdviceActionAsync(const ListAdviceActionRequest& request, const ListAdviceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAdviceAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListAdviceActionOutcomeCallable EmrClient::listAdviceActionCallable(const ListAdviceActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAdviceActionOutcome()>>(
			[this, request]()
			{
			return this->listAdviceAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListApmApplicationOutcome EmrClient::listApmApplication(const ListApmApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApmApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApmApplicationOutcome(ListApmApplicationResult(outcome.result()));
	else
		return ListApmApplicationOutcome(outcome.error());
}

void EmrClient::listApmApplicationAsync(const ListApmApplicationRequest& request, const ListApmApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApmApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListApmApplicationOutcomeCallable EmrClient::listApmApplicationCallable(const ListApmApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApmApplicationOutcome()>>(
			[this, request]()
			{
			return this->listApmApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListBackupsOutcome EmrClient::listBackups(const ListBackupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBackupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBackupsOutcome(ListBackupsResult(outcome.result()));
	else
		return ListBackupsOutcome(outcome.error());
}

void EmrClient::listBackupsAsync(const ListBackupsRequest& request, const ListBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBackups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListBackupsOutcomeCallable EmrClient::listBackupsCallable(const ListBackupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBackupsOutcome()>>(
			[this, request]()
			{
			return this->listBackups(request);
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

EmrClient::ListClusterServiceComponentOutcome EmrClient::listClusterServiceComponent(const ListClusterServiceComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterServiceComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterServiceComponentOutcome(ListClusterServiceComponentResult(outcome.result()));
	else
		return ListClusterServiceComponentOutcome(outcome.error());
}

void EmrClient::listClusterServiceComponentAsync(const ListClusterServiceComponentRequest& request, const ListClusterServiceComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterServiceComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListClusterServiceComponentOutcomeCallable EmrClient::listClusterServiceComponentCallable(const ListClusterServiceComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterServiceComponentOutcome()>>(
			[this, request]()
			{
			return this->listClusterServiceComponent(request);
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

EmrClient::ListDataSourceOutcome EmrClient::listDataSource(const ListDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceOutcome(ListDataSourceResult(outcome.result()));
	else
		return ListDataSourceOutcome(outcome.error());
}

void EmrClient::listDataSourceAsync(const ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListDataSourceOutcomeCallable EmrClient::listDataSourceCallable(const ListDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceOutcome()>>(
			[this, request]()
			{
			return this->listDataSource(request);
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

EmrClient::ListExecutionPlanInstancesOutcome EmrClient::listExecutionPlanInstances(const ListExecutionPlanInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionPlanInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionPlanInstancesOutcome(ListExecutionPlanInstancesResult(outcome.result()));
	else
		return ListExecutionPlanInstancesOutcome(outcome.error());
}

void EmrClient::listExecutionPlanInstancesAsync(const ListExecutionPlanInstancesRequest& request, const ListExecutionPlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutionPlanInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListExecutionPlanInstancesOutcomeCallable EmrClient::listExecutionPlanInstancesCallable(const ListExecutionPlanInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionPlanInstancesOutcome()>>(
			[this, request]()
			{
			return this->listExecutionPlanInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListExecutionPlansOutcome EmrClient::listExecutionPlans(const ListExecutionPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutionPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutionPlansOutcome(ListExecutionPlansResult(outcome.result()));
	else
		return ListExecutionPlansOutcome(outcome.error());
}

void EmrClient::listExecutionPlansAsync(const ListExecutionPlansRequest& request, const ListExecutionPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutionPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListExecutionPlansOutcomeCallable EmrClient::listExecutionPlansCallable(const ListExecutionPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutionPlansOutcome()>>(
			[this, request]()
			{
			return this->listExecutionPlans(request);
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

EmrClient::ListFlowEntitySnapshotOutcome EmrClient::listFlowEntitySnapshot(const ListFlowEntitySnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowEntitySnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowEntitySnapshotOutcome(ListFlowEntitySnapshotResult(outcome.result()));
	else
		return ListFlowEntitySnapshotOutcome(outcome.error());
}

void EmrClient::listFlowEntitySnapshotAsync(const ListFlowEntitySnapshotRequest& request, const ListFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowEntitySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListFlowEntitySnapshotOutcomeCallable EmrClient::listFlowEntitySnapshotCallable(const ListFlowEntitySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowEntitySnapshotOutcome()>>(
			[this, request]()
			{
			return this->listFlowEntitySnapshot(request);
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

EmrClient::ListJobExecutionInstancesOutcome EmrClient::listJobExecutionInstances(const ListJobExecutionInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobExecutionInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobExecutionInstancesOutcome(ListJobExecutionInstancesResult(outcome.result()));
	else
		return ListJobExecutionInstancesOutcome(outcome.error());
}

void EmrClient::listJobExecutionInstancesAsync(const ListJobExecutionInstancesRequest& request, const ListJobExecutionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobExecutionInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobExecutionInstancesOutcomeCallable EmrClient::listJobExecutionInstancesCallable(const ListJobExecutionInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobExecutionInstancesOutcome()>>(
			[this, request]()
			{
			return this->listJobExecutionInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobInstanceWorkersOutcome EmrClient::listJobInstanceWorkers(const ListJobInstanceWorkersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobInstanceWorkersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobInstanceWorkersOutcome(ListJobInstanceWorkersResult(outcome.result()));
	else
		return ListJobInstanceWorkersOutcome(outcome.error());
}

void EmrClient::listJobInstanceWorkersAsync(const ListJobInstanceWorkersRequest& request, const ListJobInstanceWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobInstanceWorkers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobInstanceWorkersOutcomeCallable EmrClient::listJobInstanceWorkersCallable(const ListJobInstanceWorkersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobInstanceWorkersOutcome()>>(
			[this, request]()
			{
			return this->listJobInstanceWorkers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListJobsOutcome EmrClient::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void EmrClient::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListJobsOutcomeCallable EmrClient::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListLibrariesOutcome EmrClient::listLibraries(const ListLibrariesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLibrariesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLibrariesOutcome(ListLibrariesResult(outcome.result()));
	else
		return ListLibrariesOutcome(outcome.error());
}

void EmrClient::listLibrariesAsync(const ListLibrariesRequest& request, const ListLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLibraries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListLibrariesOutcomeCallable EmrClient::listLibrariesCallable(const ListLibrariesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLibrariesOutcome()>>(
			[this, request]()
			{
			return this->listLibraries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListLibraryInstallTasksOutcome EmrClient::listLibraryInstallTasks(const ListLibraryInstallTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLibraryInstallTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLibraryInstallTasksOutcome(ListLibraryInstallTasksResult(outcome.result()));
	else
		return ListLibraryInstallTasksOutcome(outcome.error());
}

void EmrClient::listLibraryInstallTasksAsync(const ListLibraryInstallTasksRequest& request, const ListLibraryInstallTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLibraryInstallTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListLibraryInstallTasksOutcomeCallable EmrClient::listLibraryInstallTasksCallable(const ListLibraryInstallTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLibraryInstallTasksOutcome()>>(
			[this, request]()
			{
			return this->listLibraryInstallTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListLibraryStatusOutcome EmrClient::listLibraryStatus(const ListLibraryStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLibraryStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLibraryStatusOutcome(ListLibraryStatusResult(outcome.result()));
	else
		return ListLibraryStatusOutcome(outcome.error());
}

void EmrClient::listLibraryStatusAsync(const ListLibraryStatusRequest& request, const ListLibraryStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLibraryStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListLibraryStatusOutcomeCallable EmrClient::listLibraryStatusCallable(const ListLibraryStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLibraryStatusOutcome()>>(
			[this, request]()
			{
			return this->listLibraryStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListMetaClusterOutcome EmrClient::listMetaCluster(const ListMetaClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMetaClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMetaClusterOutcome(ListMetaClusterResult(outcome.result()));
	else
		return ListMetaClusterOutcome(outcome.error());
}

void EmrClient::listMetaClusterAsync(const ListMetaClusterRequest& request, const ListMetaClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMetaCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListMetaClusterOutcomeCallable EmrClient::listMetaClusterCallable(const ListMetaClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMetaClusterOutcome()>>(
			[this, request]()
			{
			return this->listMetaCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListMetaDataSourceClusterForOuterOutcome EmrClient::listMetaDataSourceClusterForOuter(const ListMetaDataSourceClusterForOuterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMetaDataSourceClusterForOuterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMetaDataSourceClusterForOuterOutcome(ListMetaDataSourceClusterForOuterResult(outcome.result()));
	else
		return ListMetaDataSourceClusterForOuterOutcome(outcome.error());
}

void EmrClient::listMetaDataSourceClusterForOuterAsync(const ListMetaDataSourceClusterForOuterRequest& request, const ListMetaDataSourceClusterForOuterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMetaDataSourceClusterForOuter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListMetaDataSourceClusterForOuterOutcomeCallable EmrClient::listMetaDataSourceClusterForOuterCallable(const ListMetaDataSourceClusterForOuterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMetaDataSourceClusterForOuterOutcome()>>(
			[this, request]()
			{
			return this->listMetaDataSourceClusterForOuter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListNotesOutcome EmrClient::listNotes(const ListNotesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNotesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNotesOutcome(ListNotesResult(outcome.result()));
	else
		return ListNotesOutcome(outcome.error());
}

void EmrClient::listNotesAsync(const ListNotesRequest& request, const ListNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNotes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListNotesOutcomeCallable EmrClient::listNotesCallable(const ListNotesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNotesOutcome()>>(
			[this, request]()
			{
			return this->listNotes(request);
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

EmrClient::ListRolesOutcome EmrClient::listRoles(const ListRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRolesOutcome(ListRolesResult(outcome.result()));
	else
		return ListRolesOutcome(outcome.error());
}

void EmrClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListRolesOutcomeCallable EmrClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
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

EmrClient::ListSecurityGroupOutcome EmrClient::listSecurityGroup(const ListSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecurityGroupOutcome(ListSecurityGroupResult(outcome.result()));
	else
		return ListSecurityGroupOutcome(outcome.error());
}

void EmrClient::listSecurityGroupAsync(const ListSecurityGroupRequest& request, const ListSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListSecurityGroupOutcomeCallable EmrClient::listSecurityGroupCallable(const ListSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->listSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListStackOutcome EmrClient::listStack(const ListStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStackOutcome(ListStackResult(outcome.result()));
	else
		return ListStackOutcome(outcome.error());
}

void EmrClient::listStackAsync(const ListStackRequest& request, const ListStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListStackOutcomeCallable EmrClient::listStackCallable(const ListStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStackOutcome()>>(
			[this, request]()
			{
			return this->listStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListTagKeysOutcome EmrClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void EmrClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListTagKeysOutcomeCallable EmrClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
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

EmrClient::ListTagValuesOutcome EmrClient::listTagValues(const ListTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagValuesOutcome(ListTagValuesResult(outcome.result()));
	else
		return ListTagValuesOutcome(outcome.error());
}

void EmrClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListTagValuesOutcomeCallable EmrClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListUsersOutcome EmrClient::listUsers(const ListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOutcome(ListUsersResult(outcome.result()));
	else
		return ListUsersOutcome(outcome.error());
}

void EmrClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListUsersOutcomeCallable EmrClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ListVswitchOutcome EmrClient::listVswitch(const ListVswitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVswitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVswitchOutcome(ListVswitchResult(outcome.result()));
	else
		return ListVswitchOutcome(outcome.error());
}

void EmrClient::listVswitchAsync(const ListVswitchRequest& request, const ListVswitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVswitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ListVswitchOutcomeCallable EmrClient::listVswitchCallable(const ListVswitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVswitchOutcome()>>(
			[this, request]()
			{
			return this->listVswitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterBootstrapActionOutcome EmrClient::modifyClusterBootstrapAction(const ModifyClusterBootstrapActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterBootstrapActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterBootstrapActionOutcome(ModifyClusterBootstrapActionResult(outcome.result()));
	else
		return ModifyClusterBootstrapActionOutcome(outcome.error());
}

void EmrClient::modifyClusterBootstrapActionAsync(const ModifyClusterBootstrapActionRequest& request, const ModifyClusterBootstrapActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterBootstrapAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterBootstrapActionOutcomeCallable EmrClient::modifyClusterBootstrapActionCallable(const ModifyClusterBootstrapActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterBootstrapActionOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterBootstrapAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterHostGroupOutcome EmrClient::modifyClusterHostGroup(const ModifyClusterHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterHostGroupOutcome(ModifyClusterHostGroupResult(outcome.result()));
	else
		return ModifyClusterHostGroupOutcome(outcome.error());
}

void EmrClient::modifyClusterHostGroupAsync(const ModifyClusterHostGroupRequest& request, const ModifyClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterHostGroupOutcomeCallable EmrClient::modifyClusterHostGroupCallable(const ModifyClusterHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterHostGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyClusterMetaCollectOutcome EmrClient::modifyClusterMetaCollect(const ModifyClusterMetaCollectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterMetaCollectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterMetaCollectOutcome(ModifyClusterMetaCollectResult(outcome.result()));
	else
		return ModifyClusterMetaCollectOutcome(outcome.error());
}

void EmrClient::modifyClusterMetaCollectAsync(const ModifyClusterMetaCollectRequest& request, const ModifyClusterMetaCollectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterMetaCollect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterMetaCollectOutcomeCallable EmrClient::modifyClusterMetaCollectCallable(const ModifyClusterMetaCollectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterMetaCollectOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterMetaCollect(request);
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

EmrClient::ModifyClusterSecurityGroupRuleOutcome EmrClient::modifyClusterSecurityGroupRule(const ModifyClusterSecurityGroupRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterSecurityGroupRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterSecurityGroupRuleOutcome(ModifyClusterSecurityGroupRuleResult(outcome.result()));
	else
		return ModifyClusterSecurityGroupRuleOutcome(outcome.error());
}

void EmrClient::modifyClusterSecurityGroupRuleAsync(const ModifyClusterSecurityGroupRuleRequest& request, const ModifyClusterSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterSecurityGroupRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyClusterSecurityGroupRuleOutcomeCallable EmrClient::modifyClusterSecurityGroupRuleCallable(const ModifyClusterSecurityGroupRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterSecurityGroupRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterSecurityGroupRule(request);
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

EmrClient::ModifyExecutionPlanOutcome EmrClient::modifyExecutionPlan(const ModifyExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyExecutionPlanOutcome(ModifyExecutionPlanResult(outcome.result()));
	else
		return ModifyExecutionPlanOutcome(outcome.error());
}

void EmrClient::modifyExecutionPlanAsync(const ModifyExecutionPlanRequest& request, const ModifyExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyExecutionPlanOutcomeCallable EmrClient::modifyExecutionPlanCallable(const ModifyExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->modifyExecutionPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyFlowOutcome EmrClient::modifyFlow(const ModifyFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowOutcome(ModifyFlowResult(outcome.result()));
	else
		return ModifyFlowOutcome(outcome.error());
}

void EmrClient::modifyFlowAsync(const ModifyFlowRequest& request, const ModifyFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowOutcomeCallable EmrClient::modifyFlowCallable(const ModifyFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowOutcome()>>(
			[this, request]()
			{
			return this->modifyFlow(request);
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

EmrClient::ModifyFlowJobOutcome EmrClient::modifyFlowJob(const ModifyFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFlowJobOutcome(ModifyFlowJobResult(outcome.result()));
	else
		return ModifyFlowJobOutcome(outcome.error());
}

void EmrClient::modifyFlowJobAsync(const ModifyFlowJobRequest& request, const ModifyFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyFlowJobOutcomeCallable EmrClient::modifyFlowJobCallable(const ModifyFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFlowJobOutcome()>>(
			[this, request]()
			{
			return this->modifyFlowJob(request);
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

EmrClient::ModifyJobOutcome EmrClient::modifyJob(const ModifyJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyJobOutcome(ModifyJobResult(outcome.result()));
	else
		return ModifyJobOutcome(outcome.error());
}

void EmrClient::modifyJobAsync(const ModifyJobRequest& request, const ModifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyJobOutcomeCallable EmrClient::modifyJobCallable(const ModifyJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyJobOutcome()>>(
			[this, request]()
			{
			return this->modifyJob(request);
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

EmrClient::ModifyScalingRuleOutcome EmrClient::modifyScalingRule(const ModifyScalingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingRuleOutcome(ModifyScalingRuleResult(outcome.result()));
	else
		return ModifyScalingRuleOutcome(outcome.error());
}

void EmrClient::modifyScalingRuleAsync(const ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyScalingRuleOutcomeCallable EmrClient::modifyScalingRuleCallable(const ModifyScalingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ModifyScalingTaskGroupOutcome EmrClient::modifyScalingTaskGroup(const ModifyScalingTaskGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScalingTaskGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScalingTaskGroupOutcome(ModifyScalingTaskGroupResult(outcome.result()));
	else
		return ModifyScalingTaskGroupOutcome(outcome.error());
}

void EmrClient::modifyScalingTaskGroupAsync(const ModifyScalingTaskGroupRequest& request, const ModifyScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScalingTaskGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ModifyScalingTaskGroupOutcomeCallable EmrClient::modifyScalingTaskGroupCallable(const ModifyScalingTaskGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScalingTaskGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyScalingTaskGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryAlarmHistoryOutcome EmrClient::queryAlarmHistory(const QueryAlarmHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAlarmHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAlarmHistoryOutcome(QueryAlarmHistoryResult(outcome.result()));
	else
		return QueryAlarmHistoryOutcome(outcome.error());
}

void EmrClient::queryAlarmHistoryAsync(const QueryAlarmHistoryRequest& request, const QueryAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAlarmHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryAlarmHistoryOutcomeCallable EmrClient::queryAlarmHistoryCallable(const QueryAlarmHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAlarmHistoryOutcome()>>(
			[this, request]()
			{
			return this->queryAlarmHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryEntityOutcome EmrClient::queryEntity(const QueryEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEntityOutcome(QueryEntityResult(outcome.result()));
	else
		return QueryEntityOutcome(outcome.error());
}

void EmrClient::queryEntityAsync(const QueryEntityRequest& request, const QueryEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryEntityOutcomeCallable EmrClient::queryEntityCallable(const QueryEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEntityOutcome()>>(
			[this, request]()
			{
			return this->queryEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryTableDataOutcome EmrClient::queryTableData(const QueryTableDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTableDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTableDataOutcome(QueryTableDataResult(outcome.result()));
	else
		return QueryTableDataOutcome(outcome.error());
}

void EmrClient::queryTableDataAsync(const QueryTableDataRequest& request, const QueryTableDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTableData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryTableDataOutcomeCallable EmrClient::queryTableDataCallable(const QueryTableDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTableDataOutcome()>>(
			[this, request]()
			{
			return this->queryTableData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryTagOutcome EmrClient::queryTag(const QueryTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTagOutcome(QueryTagResult(outcome.result()));
	else
		return QueryTagOutcome(outcome.error());
}

void EmrClient::queryTagAsync(const QueryTagRequest& request, const QueryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryTagOutcomeCallable EmrClient::queryTagCallable(const QueryTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTagOutcome()>>(
			[this, request]()
			{
			return this->queryTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::QueryTrendDataOutcome EmrClient::queryTrendData(const QueryTrendDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTrendDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTrendDataOutcome(QueryTrendDataResult(outcome.result()));
	else
		return QueryTrendDataOutcome(outcome.error());
}

void EmrClient::queryTrendDataAsync(const QueryTrendDataRequest& request, const QueryTrendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTrendData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::QueryTrendDataOutcomeCallable EmrClient::queryTrendDataCallable(const QueryTrendDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTrendDataOutcome()>>(
			[this, request]()
			{
			return this->queryTrendData(request);
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

EmrClient::ReleaseClusterByTemplateTagForInternalOutcome EmrClient::releaseClusterByTemplateTagForInternal(const ReleaseClusterByTemplateTagForInternalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseClusterByTemplateTagForInternalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseClusterByTemplateTagForInternalOutcome(ReleaseClusterByTemplateTagForInternalResult(outcome.result()));
	else
		return ReleaseClusterByTemplateTagForInternalOutcome(outcome.error());
}

void EmrClient::releaseClusterByTemplateTagForInternalAsync(const ReleaseClusterByTemplateTagForInternalRequest& request, const ReleaseClusterByTemplateTagForInternalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseClusterByTemplateTagForInternal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ReleaseClusterByTemplateTagForInternalOutcomeCallable EmrClient::releaseClusterByTemplateTagForInternalCallable(const ReleaseClusterByTemplateTagForInternalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseClusterByTemplateTagForInternalOutcome()>>(
			[this, request]()
			{
			return this->releaseClusterByTemplateTagForInternal(request);
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

EmrClient::RestoreBackupOutcome EmrClient::restoreBackup(const RestoreBackupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreBackupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreBackupOutcome(RestoreBackupResult(outcome.result()));
	else
		return RestoreBackupOutcome(outcome.error());
}

void EmrClient::restoreBackupAsync(const RestoreBackupRequest& request, const RestoreBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreBackup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RestoreBackupOutcomeCallable EmrClient::restoreBackupCallable(const RestoreBackupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreBackupOutcome()>>(
			[this, request]()
			{
			return this->restoreBackup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::RestoreFlowEntitySnapshotOutcome EmrClient::restoreFlowEntitySnapshot(const RestoreFlowEntitySnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreFlowEntitySnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreFlowEntitySnapshotOutcome(RestoreFlowEntitySnapshotResult(outcome.result()));
	else
		return RestoreFlowEntitySnapshotOutcome(outcome.error());
}

void EmrClient::restoreFlowEntitySnapshotAsync(const RestoreFlowEntitySnapshotRequest& request, const RestoreFlowEntitySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreFlowEntitySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RestoreFlowEntitySnapshotOutcomeCallable EmrClient::restoreFlowEntitySnapshotCallable(const RestoreFlowEntitySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreFlowEntitySnapshotOutcome()>>(
			[this, request]()
			{
			return this->restoreFlowEntitySnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::ResumeExecutionPlanSchedulerOutcome EmrClient::resumeExecutionPlanScheduler(const ResumeExecutionPlanSchedulerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeExecutionPlanSchedulerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeExecutionPlanSchedulerOutcome(ResumeExecutionPlanSchedulerResult(outcome.result()));
	else
		return ResumeExecutionPlanSchedulerOutcome(outcome.error());
}

void EmrClient::resumeExecutionPlanSchedulerAsync(const ResumeExecutionPlanSchedulerRequest& request, const ResumeExecutionPlanSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeExecutionPlanScheduler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::ResumeExecutionPlanSchedulerOutcomeCallable EmrClient::resumeExecutionPlanSchedulerCallable(const ResumeExecutionPlanSchedulerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeExecutionPlanSchedulerOutcome()>>(
			[this, request]()
			{
			return this->resumeExecutionPlanScheduler(request);
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

EmrClient::RetryOperationOutcome EmrClient::retryOperation(const RetryOperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryOperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryOperationOutcome(RetryOperationResult(outcome.result()));
	else
		return RetryOperationOutcome(outcome.error());
}

void EmrClient::retryOperationAsync(const RetryOperationRequest& request, const RetryOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryOperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RetryOperationOutcomeCallable EmrClient::retryOperationCallable(const RetryOperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryOperationOutcome()>>(
			[this, request]()
			{
			return this->retryOperation(request);
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

EmrClient::RunExecutionPlanOutcome EmrClient::runExecutionPlan(const RunExecutionPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunExecutionPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunExecutionPlanOutcome(RunExecutionPlanResult(outcome.result()));
	else
		return RunExecutionPlanOutcome(outcome.error());
}

void EmrClient::runExecutionPlanAsync(const RunExecutionPlanRequest& request, const RunExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runExecutionPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::RunExecutionPlanOutcomeCallable EmrClient::runExecutionPlanCallable(const RunExecutionPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunExecutionPlanOutcome()>>(
			[this, request]()
			{
			return this->runExecutionPlan(request);
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

EmrClient::SearchLogOutcome EmrClient::searchLog(const SearchLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchLogOutcome(SearchLogResult(outcome.result()));
	else
		return SearchLogOutcome(outcome.error());
}

void EmrClient::searchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SearchLogOutcomeCallable EmrClient::searchLogCallable(const SearchLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchLogOutcome()>>(
			[this, request]()
			{
			return this->searchLog(request);
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

EmrClient::SuspendExecutionPlanSchedulerOutcome EmrClient::suspendExecutionPlanScheduler(const SuspendExecutionPlanSchedulerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendExecutionPlanSchedulerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendExecutionPlanSchedulerOutcome(SuspendExecutionPlanSchedulerResult(outcome.result()));
	else
		return SuspendExecutionPlanSchedulerOutcome(outcome.error());
}

void EmrClient::suspendExecutionPlanSchedulerAsync(const SuspendExecutionPlanSchedulerRequest& request, const SuspendExecutionPlanSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendExecutionPlanScheduler(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::SuspendExecutionPlanSchedulerOutcomeCallable EmrClient::suspendExecutionPlanSchedulerCallable(const SuspendExecutionPlanSchedulerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendExecutionPlanSchedulerOutcome()>>(
			[this, request]()
			{
			return this->suspendExecutionPlanScheduler(request);
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

EmrClient::TagResourcesSystemTagsOutcome EmrClient::tagResourcesSystemTags(const TagResourcesSystemTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesSystemTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesSystemTagsOutcome(TagResourcesSystemTagsResult(outcome.result()));
	else
		return TagResourcesSystemTagsOutcome(outcome.error());
}

void EmrClient::tagResourcesSystemTagsAsync(const TagResourcesSystemTagsRequest& request, const TagResourcesSystemTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResourcesSystemTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::TagResourcesSystemTagsOutcomeCallable EmrClient::tagResourcesSystemTagsCallable(const TagResourcesSystemTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesSystemTagsOutcome()>>(
			[this, request]()
			{
			return this->tagResourcesSystemTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UninstallLibrariesOutcome EmrClient::uninstallLibraries(const UninstallLibrariesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallLibrariesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallLibrariesOutcome(UninstallLibrariesResult(outcome.result()));
	else
		return UninstallLibrariesOutcome(outcome.error());
}

void EmrClient::uninstallLibrariesAsync(const UninstallLibrariesRequest& request, const UninstallLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallLibraries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UninstallLibrariesOutcomeCallable EmrClient::uninstallLibrariesCallable(const UninstallLibrariesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallLibrariesOutcome()>>(
			[this, request]()
			{
			return this->uninstallLibraries(request);
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

EmrClient::UntagResourcesSystemTagsOutcome EmrClient::untagResourcesSystemTags(const UntagResourcesSystemTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesSystemTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesSystemTagsOutcome(UntagResourcesSystemTagsResult(outcome.result()));
	else
		return UntagResourcesSystemTagsOutcome(outcome.error());
}

void EmrClient::untagResourcesSystemTagsAsync(const UntagResourcesSystemTagsRequest& request, const UntagResourcesSystemTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResourcesSystemTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UntagResourcesSystemTagsOutcomeCallable EmrClient::untagResourcesSystemTagsCallable(const UntagResourcesSystemTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesSystemTagsOutcome()>>(
			[this, request]()
			{
			return this->untagResourcesSystemTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateDataSourceOutcome EmrClient::updateDataSource(const UpdateDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataSourceOutcome(UpdateDataSourceResult(outcome.result()));
	else
		return UpdateDataSourceOutcome(outcome.error());
}

void EmrClient::updateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateDataSourceOutcomeCallable EmrClient::updateDataSourceCallable(const UpdateDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataSourceOutcome()>>(
			[this, request]()
			{
			return this->updateDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateLibraryInstallTaskStatusOutcome EmrClient::updateLibraryInstallTaskStatus(const UpdateLibraryInstallTaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLibraryInstallTaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLibraryInstallTaskStatusOutcome(UpdateLibraryInstallTaskStatusResult(outcome.result()));
	else
		return UpdateLibraryInstallTaskStatusOutcome(outcome.error());
}

void EmrClient::updateLibraryInstallTaskStatusAsync(const UpdateLibraryInstallTaskStatusRequest& request, const UpdateLibraryInstallTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLibraryInstallTaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateLibraryInstallTaskStatusOutcomeCallable EmrClient::updateLibraryInstallTaskStatusCallable(const UpdateLibraryInstallTaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLibraryInstallTaskStatusOutcome()>>(
			[this, request]()
			{
			return this->updateLibraryInstallTaskStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateTagOutcome EmrClient::updateTag(const UpdateTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTagOutcome(UpdateTagResult(outcome.result()));
	else
		return UpdateTagOutcome(outcome.error());
}

void EmrClient::updateTagAsync(const UpdateTagRequest& request, const UpdateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateTagOutcomeCallable EmrClient::updateTagCallable(const UpdateTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTagOutcome()>>(
			[this, request]()
			{
			return this->updateTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EmrClient::UpdateUserOutcome EmrClient::updateUser(const UpdateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserOutcome(UpdateUserResult(outcome.result()));
	else
		return UpdateUserOutcome(outcome.error());
}

void EmrClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EmrClient::UpdateUserOutcomeCallable EmrClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

