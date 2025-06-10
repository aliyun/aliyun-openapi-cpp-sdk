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

#include <alibabacloud/schedulerx2/Schedulerx2Client.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

namespace
{
	const std::string SERVICE_NAME = "schedulerx2";
}

Schedulerx2Client::Schedulerx2Client(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "schedulerx2");
}

Schedulerx2Client::Schedulerx2Client(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "schedulerx2");
}

Schedulerx2Client::Schedulerx2Client(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "schedulerx2");
}

Schedulerx2Client::~Schedulerx2Client()
{}

Schedulerx2Client::BatchDeleteJobsOutcome Schedulerx2Client::batchDeleteJobs(const BatchDeleteJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteJobsOutcome(BatchDeleteJobsResult(outcome.result()));
	else
		return BatchDeleteJobsOutcome(outcome.error());
}

void Schedulerx2Client::batchDeleteJobsAsync(const BatchDeleteJobsRequest& request, const BatchDeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::BatchDeleteJobsOutcomeCallable Schedulerx2Client::batchDeleteJobsCallable(const BatchDeleteJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteJobsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::BatchDeleteRouteStrategyOutcome Schedulerx2Client::batchDeleteRouteStrategy(const BatchDeleteRouteStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteRouteStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteRouteStrategyOutcome(BatchDeleteRouteStrategyResult(outcome.result()));
	else
		return BatchDeleteRouteStrategyOutcome(outcome.error());
}

void Schedulerx2Client::batchDeleteRouteStrategyAsync(const BatchDeleteRouteStrategyRequest& request, const BatchDeleteRouteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteRouteStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::BatchDeleteRouteStrategyOutcomeCallable Schedulerx2Client::batchDeleteRouteStrategyCallable(const BatchDeleteRouteStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteRouteStrategyOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteRouteStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::BatchDisableJobsOutcome Schedulerx2Client::batchDisableJobs(const BatchDisableJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDisableJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDisableJobsOutcome(BatchDisableJobsResult(outcome.result()));
	else
		return BatchDisableJobsOutcome(outcome.error());
}

void Schedulerx2Client::batchDisableJobsAsync(const BatchDisableJobsRequest& request, const BatchDisableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDisableJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::BatchDisableJobsOutcomeCallable Schedulerx2Client::batchDisableJobsCallable(const BatchDisableJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDisableJobsOutcome()>>(
			[this, request]()
			{
			return this->batchDisableJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::BatchEnableJobsOutcome Schedulerx2Client::batchEnableJobs(const BatchEnableJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchEnableJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchEnableJobsOutcome(BatchEnableJobsResult(outcome.result()));
	else
		return BatchEnableJobsOutcome(outcome.error());
}

void Schedulerx2Client::batchEnableJobsAsync(const BatchEnableJobsRequest& request, const BatchEnableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchEnableJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::BatchEnableJobsOutcomeCallable Schedulerx2Client::batchEnableJobsCallable(const BatchEnableJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchEnableJobsOutcome()>>(
			[this, request]()
			{
			return this->batchEnableJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::CreateAppGroupOutcome Schedulerx2Client::createAppGroup(const CreateAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppGroupOutcome(CreateAppGroupResult(outcome.result()));
	else
		return CreateAppGroupOutcome(outcome.error());
}

void Schedulerx2Client::createAppGroupAsync(const CreateAppGroupRequest& request, const CreateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::CreateAppGroupOutcomeCallable Schedulerx2Client::createAppGroupCallable(const CreateAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppGroupOutcome()>>(
			[this, request]()
			{
			return this->createAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::CreateJobOutcome Schedulerx2Client::createJob(const CreateJobRequest &request) const
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

void Schedulerx2Client::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::CreateJobOutcomeCallable Schedulerx2Client::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::CreateNamespaceOutcome Schedulerx2Client::createNamespace(const CreateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNamespaceOutcome(CreateNamespaceResult(outcome.result()));
	else
		return CreateNamespaceOutcome(outcome.error());
}

void Schedulerx2Client::createNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::CreateNamespaceOutcomeCallable Schedulerx2Client::createNamespaceCallable(const CreateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->createNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::CreateRouteStrategyOutcome Schedulerx2Client::createRouteStrategy(const CreateRouteStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRouteStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRouteStrategyOutcome(CreateRouteStrategyResult(outcome.result()));
	else
		return CreateRouteStrategyOutcome(outcome.error());
}

void Schedulerx2Client::createRouteStrategyAsync(const CreateRouteStrategyRequest& request, const CreateRouteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRouteStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::CreateRouteStrategyOutcomeCallable Schedulerx2Client::createRouteStrategyCallable(const CreateRouteStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRouteStrategyOutcome()>>(
			[this, request]()
			{
			return this->createRouteStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::CreateWorkflowOutcome Schedulerx2Client::createWorkflow(const CreateWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWorkflowOutcome(CreateWorkflowResult(outcome.result()));
	else
		return CreateWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::createWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::CreateWorkflowOutcomeCallable Schedulerx2Client::createWorkflowCallable(const CreateWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWorkflowOutcome()>>(
			[this, request]()
			{
			return this->createWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DeleteAppGroupOutcome Schedulerx2Client::deleteAppGroup(const DeleteAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppGroupOutcome(DeleteAppGroupResult(outcome.result()));
	else
		return DeleteAppGroupOutcome(outcome.error());
}

void Schedulerx2Client::deleteAppGroupAsync(const DeleteAppGroupRequest& request, const DeleteAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DeleteAppGroupOutcomeCallable Schedulerx2Client::deleteAppGroupCallable(const DeleteAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DeleteJobOutcome Schedulerx2Client::deleteJob(const DeleteJobRequest &request) const
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

void Schedulerx2Client::deleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DeleteJobOutcomeCallable Schedulerx2Client::deleteJobCallable(const DeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobOutcome()>>(
			[this, request]()
			{
			return this->deleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DeleteNamespaceOutcome Schedulerx2Client::deleteNamespace(const DeleteNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNamespaceOutcome(DeleteNamespaceResult(outcome.result()));
	else
		return DeleteNamespaceOutcome(outcome.error());
}

void Schedulerx2Client::deleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DeleteNamespaceOutcomeCallable Schedulerx2Client::deleteNamespaceCallable(const DeleteNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DeleteRouteStrategyOutcome Schedulerx2Client::deleteRouteStrategy(const DeleteRouteStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouteStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouteStrategyOutcome(DeleteRouteStrategyResult(outcome.result()));
	else
		return DeleteRouteStrategyOutcome(outcome.error());
}

void Schedulerx2Client::deleteRouteStrategyAsync(const DeleteRouteStrategyRequest& request, const DeleteRouteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouteStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DeleteRouteStrategyOutcomeCallable Schedulerx2Client::deleteRouteStrategyCallable(const DeleteRouteStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouteStrategyOutcome()>>(
			[this, request]()
			{
			return this->deleteRouteStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DeleteWorkflowOutcome Schedulerx2Client::deleteWorkflow(const DeleteWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWorkflowOutcome(DeleteWorkflowResult(outcome.result()));
	else
		return DeleteWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::deleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DeleteWorkflowOutcomeCallable Schedulerx2Client::deleteWorkflowCallable(const DeleteWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWorkflowOutcome()>>(
			[this, request]()
			{
			return this->deleteWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DescribeRegionsOutcome Schedulerx2Client::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void Schedulerx2Client::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DescribeRegionsOutcomeCallable Schedulerx2Client::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DesignateWorkersOutcome Schedulerx2Client::designateWorkers(const DesignateWorkersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DesignateWorkersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DesignateWorkersOutcome(DesignateWorkersResult(outcome.result()));
	else
		return DesignateWorkersOutcome(outcome.error());
}

void Schedulerx2Client::designateWorkersAsync(const DesignateWorkersRequest& request, const DesignateWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, designateWorkers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DesignateWorkersOutcomeCallable Schedulerx2Client::designateWorkersCallable(const DesignateWorkersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DesignateWorkersOutcome()>>(
			[this, request]()
			{
			return this->designateWorkers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DisableJobOutcome Schedulerx2Client::disableJob(const DisableJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableJobOutcome(DisableJobResult(outcome.result()));
	else
		return DisableJobOutcome(outcome.error());
}

void Schedulerx2Client::disableJobAsync(const DisableJobRequest& request, const DisableJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DisableJobOutcomeCallable Schedulerx2Client::disableJobCallable(const DisableJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableJobOutcome()>>(
			[this, request]()
			{
			return this->disableJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DisableWorkflowOutcome Schedulerx2Client::disableWorkflow(const DisableWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableWorkflowOutcome(DisableWorkflowResult(outcome.result()));
	else
		return DisableWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::disableWorkflowAsync(const DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DisableWorkflowOutcomeCallable Schedulerx2Client::disableWorkflowCallable(const DisableWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableWorkflowOutcome()>>(
			[this, request]()
			{
			return this->disableWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::EnableJobOutcome Schedulerx2Client::enableJob(const EnableJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableJobOutcome(EnableJobResult(outcome.result()));
	else
		return EnableJobOutcome(outcome.error());
}

void Schedulerx2Client::enableJobAsync(const EnableJobRequest& request, const EnableJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::EnableJobOutcomeCallable Schedulerx2Client::enableJobCallable(const EnableJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableJobOutcome()>>(
			[this, request]()
			{
			return this->enableJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::EnableWorkflowOutcome Schedulerx2Client::enableWorkflow(const EnableWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableWorkflowOutcome(EnableWorkflowResult(outcome.result()));
	else
		return EnableWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::enableWorkflowAsync(const EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::EnableWorkflowOutcomeCallable Schedulerx2Client::enableWorkflowCallable(const EnableWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableWorkflowOutcome()>>(
			[this, request]()
			{
			return this->enableWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ExecuteJobOutcome Schedulerx2Client::executeJob(const ExecuteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteJobOutcome(ExecuteJobResult(outcome.result()));
	else
		return ExecuteJobOutcome(outcome.error());
}

void Schedulerx2Client::executeJobAsync(const ExecuteJobRequest& request, const ExecuteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ExecuteJobOutcomeCallable Schedulerx2Client::executeJobCallable(const ExecuteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteJobOutcome()>>(
			[this, request]()
			{
			return this->executeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ExecuteWorkflowOutcome Schedulerx2Client::executeWorkflow(const ExecuteWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteWorkflowOutcome(ExecuteWorkflowResult(outcome.result()));
	else
		return ExecuteWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::executeWorkflowAsync(const ExecuteWorkflowRequest& request, const ExecuteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ExecuteWorkflowOutcomeCallable Schedulerx2Client::executeWorkflowCallable(const ExecuteWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteWorkflowOutcome()>>(
			[this, request]()
			{
			return this->executeWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetAppGroupOutcome Schedulerx2Client::getAppGroup(const GetAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppGroupOutcome(GetAppGroupResult(outcome.result()));
	else
		return GetAppGroupOutcome(outcome.error());
}

void Schedulerx2Client::getAppGroupAsync(const GetAppGroupRequest& request, const GetAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetAppGroupOutcomeCallable Schedulerx2Client::getAppGroupCallable(const GetAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppGroupOutcome()>>(
			[this, request]()
			{
			return this->getAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetJobInfoOutcome Schedulerx2Client::getJobInfo(const GetJobInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobInfoOutcome(GetJobInfoResult(outcome.result()));
	else
		return GetJobInfoOutcome(outcome.error());
}

void Schedulerx2Client::getJobInfoAsync(const GetJobInfoRequest& request, const GetJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetJobInfoOutcomeCallable Schedulerx2Client::getJobInfoCallable(const GetJobInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobInfoOutcome()>>(
			[this, request]()
			{
			return this->getJobInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetJobInstanceOutcome Schedulerx2Client::getJobInstance(const GetJobInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobInstanceOutcome(GetJobInstanceResult(outcome.result()));
	else
		return GetJobInstanceOutcome(outcome.error());
}

void Schedulerx2Client::getJobInstanceAsync(const GetJobInstanceRequest& request, const GetJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetJobInstanceOutcomeCallable Schedulerx2Client::getJobInstanceCallable(const GetJobInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobInstanceOutcome()>>(
			[this, request]()
			{
			return this->getJobInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetJobInstanceListOutcome Schedulerx2Client::getJobInstanceList(const GetJobInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobInstanceListOutcome(GetJobInstanceListResult(outcome.result()));
	else
		return GetJobInstanceListOutcome(outcome.error());
}

void Schedulerx2Client::getJobInstanceListAsync(const GetJobInstanceListRequest& request, const GetJobInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetJobInstanceListOutcomeCallable Schedulerx2Client::getJobInstanceListCallable(const GetJobInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobInstanceListOutcome()>>(
			[this, request]()
			{
			return this->getJobInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetLogOutcome Schedulerx2Client::getLog(const GetLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLogOutcome(GetLogResult(outcome.result()));
	else
		return GetLogOutcome(outcome.error());
}

void Schedulerx2Client::getLogAsync(const GetLogRequest& request, const GetLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetLogOutcomeCallable Schedulerx2Client::getLogCallable(const GetLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLogOutcome()>>(
			[this, request]()
			{
			return this->getLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetOverviewOutcome Schedulerx2Client::getOverview(const GetOverviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOverviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOverviewOutcome(GetOverviewResult(outcome.result()));
	else
		return GetOverviewOutcome(outcome.error());
}

void Schedulerx2Client::getOverviewAsync(const GetOverviewRequest& request, const GetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOverview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetOverviewOutcomeCallable Schedulerx2Client::getOverviewCallable(const GetOverviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOverviewOutcome()>>(
			[this, request]()
			{
			return this->getOverview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetWorkFlowOutcome Schedulerx2Client::getWorkFlow(const GetWorkFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkFlowOutcome(GetWorkFlowResult(outcome.result()));
	else
		return GetWorkFlowOutcome(outcome.error());
}

void Schedulerx2Client::getWorkFlowAsync(const GetWorkFlowRequest& request, const GetWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetWorkFlowOutcomeCallable Schedulerx2Client::getWorkFlowCallable(const GetWorkFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkFlowOutcome()>>(
			[this, request]()
			{
			return this->getWorkFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetWorkerListOutcome Schedulerx2Client::getWorkerList(const GetWorkerListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkerListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkerListOutcome(GetWorkerListResult(outcome.result()));
	else
		return GetWorkerListOutcome(outcome.error());
}

void Schedulerx2Client::getWorkerListAsync(const GetWorkerListRequest& request, const GetWorkerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkerList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetWorkerListOutcomeCallable Schedulerx2Client::getWorkerListCallable(const GetWorkerListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkerListOutcome()>>(
			[this, request]()
			{
			return this->getWorkerList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetWorkflowInstanceOutcome Schedulerx2Client::getWorkflowInstance(const GetWorkflowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkflowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkflowInstanceOutcome(GetWorkflowInstanceResult(outcome.result()));
	else
		return GetWorkflowInstanceOutcome(outcome.error());
}

void Schedulerx2Client::getWorkflowInstanceAsync(const GetWorkflowInstanceRequest& request, const GetWorkflowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkflowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetWorkflowInstanceOutcomeCallable Schedulerx2Client::getWorkflowInstanceCallable(const GetWorkflowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkflowInstanceOutcome()>>(
			[this, request]()
			{
			return this->getWorkflowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GrantPermissionOutcome Schedulerx2Client::grantPermission(const GrantPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantPermissionOutcome(GrantPermissionResult(outcome.result()));
	else
		return GrantPermissionOutcome(outcome.error());
}

void Schedulerx2Client::grantPermissionAsync(const GrantPermissionRequest& request, const GrantPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GrantPermissionOutcomeCallable Schedulerx2Client::grantPermissionCallable(const GrantPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantPermissionOutcome()>>(
			[this, request]()
			{
			return this->grantPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ListGroupsOutcome Schedulerx2Client::listGroups(const ListGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupsOutcome(ListGroupsResult(outcome.result()));
	else
		return ListGroupsOutcome(outcome.error());
}

void Schedulerx2Client::listGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ListGroupsOutcomeCallable Schedulerx2Client::listGroupsCallable(const ListGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
			[this, request]()
			{
			return this->listGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ListJobScriptHistoryOutcome Schedulerx2Client::listJobScriptHistory(const ListJobScriptHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobScriptHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobScriptHistoryOutcome(ListJobScriptHistoryResult(outcome.result()));
	else
		return ListJobScriptHistoryOutcome(outcome.error());
}

void Schedulerx2Client::listJobScriptHistoryAsync(const ListJobScriptHistoryRequest& request, const ListJobScriptHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobScriptHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ListJobScriptHistoryOutcomeCallable Schedulerx2Client::listJobScriptHistoryCallable(const ListJobScriptHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobScriptHistoryOutcome()>>(
			[this, request]()
			{
			return this->listJobScriptHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ListJobsOutcome Schedulerx2Client::listJobs(const ListJobsRequest &request) const
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

void Schedulerx2Client::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ListJobsOutcomeCallable Schedulerx2Client::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ListNamespacesOutcome Schedulerx2Client::listNamespaces(const ListNamespacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNamespacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNamespacesOutcome(ListNamespacesResult(outcome.result()));
	else
		return ListNamespacesOutcome(outcome.error());
}

void Schedulerx2Client::listNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ListNamespacesOutcomeCallable Schedulerx2Client::listNamespacesCallable(const ListNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNamespacesOutcome()>>(
			[this, request]()
			{
			return this->listNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ListWorkflowInstanceOutcome Schedulerx2Client::listWorkflowInstance(const ListWorkflowInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkflowInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkflowInstanceOutcome(ListWorkflowInstanceResult(outcome.result()));
	else
		return ListWorkflowInstanceOutcome(outcome.error());
}

void Schedulerx2Client::listWorkflowInstanceAsync(const ListWorkflowInstanceRequest& request, const ListWorkflowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkflowInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ListWorkflowInstanceOutcomeCallable Schedulerx2Client::listWorkflowInstanceCallable(const ListWorkflowInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkflowInstanceOutcome()>>(
			[this, request]()
			{
			return this->listWorkflowInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ReadSchedulerxDesignateDetailOutcome Schedulerx2Client::readSchedulerxDesignateDetail(const ReadSchedulerxDesignateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReadSchedulerxDesignateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReadSchedulerxDesignateDetailOutcome(ReadSchedulerxDesignateDetailResult(outcome.result()));
	else
		return ReadSchedulerxDesignateDetailOutcome(outcome.error());
}

void Schedulerx2Client::readSchedulerxDesignateDetailAsync(const ReadSchedulerxDesignateDetailRequest& request, const ReadSchedulerxDesignateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, readSchedulerxDesignateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ReadSchedulerxDesignateDetailOutcomeCallable Schedulerx2Client::readSchedulerxDesignateDetailCallable(const ReadSchedulerxDesignateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReadSchedulerxDesignateDetailOutcome()>>(
			[this, request]()
			{
			return this->readSchedulerxDesignateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ReadSchedulerxDesignateInfoOutcome Schedulerx2Client::readSchedulerxDesignateInfo(const ReadSchedulerxDesignateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReadSchedulerxDesignateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReadSchedulerxDesignateInfoOutcome(ReadSchedulerxDesignateInfoResult(outcome.result()));
	else
		return ReadSchedulerxDesignateInfoOutcome(outcome.error());
}

void Schedulerx2Client::readSchedulerxDesignateInfoAsync(const ReadSchedulerxDesignateInfoRequest& request, const ReadSchedulerxDesignateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, readSchedulerxDesignateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ReadSchedulerxDesignateInfoOutcomeCallable Schedulerx2Client::readSchedulerxDesignateInfoCallable(const ReadSchedulerxDesignateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReadSchedulerxDesignateInfoOutcome()>>(
			[this, request]()
			{
			return this->readSchedulerxDesignateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::RerunJobOutcome Schedulerx2Client::rerunJob(const RerunJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RerunJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RerunJobOutcome(RerunJobResult(outcome.result()));
	else
		return RerunJobOutcome(outcome.error());
}

void Schedulerx2Client::rerunJobAsync(const RerunJobRequest& request, const RerunJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rerunJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::RerunJobOutcomeCallable Schedulerx2Client::rerunJobCallable(const RerunJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RerunJobOutcome()>>(
			[this, request]()
			{
			return this->rerunJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::RetryJobInstanceOutcome Schedulerx2Client::retryJobInstance(const RetryJobInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryJobInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryJobInstanceOutcome(RetryJobInstanceResult(outcome.result()));
	else
		return RetryJobInstanceOutcome(outcome.error());
}

void Schedulerx2Client::retryJobInstanceAsync(const RetryJobInstanceRequest& request, const RetryJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryJobInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::RetryJobInstanceOutcomeCallable Schedulerx2Client::retryJobInstanceCallable(const RetryJobInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryJobInstanceOutcome()>>(
			[this, request]()
			{
			return this->retryJobInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::RevokePermissionOutcome Schedulerx2Client::revokePermission(const RevokePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokePermissionOutcome(RevokePermissionResult(outcome.result()));
	else
		return RevokePermissionOutcome(outcome.error());
}

void Schedulerx2Client::revokePermissionAsync(const RevokePermissionRequest& request, const RevokePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::RevokePermissionOutcomeCallable Schedulerx2Client::revokePermissionCallable(const RevokePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokePermissionOutcome()>>(
			[this, request]()
			{
			return this->revokePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::SetJobInstanceSuccessOutcome Schedulerx2Client::setJobInstanceSuccess(const SetJobInstanceSuccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetJobInstanceSuccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetJobInstanceSuccessOutcome(SetJobInstanceSuccessResult(outcome.result()));
	else
		return SetJobInstanceSuccessOutcome(outcome.error());
}

void Schedulerx2Client::setJobInstanceSuccessAsync(const SetJobInstanceSuccessRequest& request, const SetJobInstanceSuccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setJobInstanceSuccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::SetJobInstanceSuccessOutcomeCallable Schedulerx2Client::setJobInstanceSuccessCallable(const SetJobInstanceSuccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetJobInstanceSuccessOutcome()>>(
			[this, request]()
			{
			return this->setJobInstanceSuccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::SetWfInstanceSuccessOutcome Schedulerx2Client::setWfInstanceSuccess(const SetWfInstanceSuccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetWfInstanceSuccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetWfInstanceSuccessOutcome(SetWfInstanceSuccessResult(outcome.result()));
	else
		return SetWfInstanceSuccessOutcome(outcome.error());
}

void Schedulerx2Client::setWfInstanceSuccessAsync(const SetWfInstanceSuccessRequest& request, const SetWfInstanceSuccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setWfInstanceSuccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::SetWfInstanceSuccessOutcomeCallable Schedulerx2Client::setWfInstanceSuccessCallable(const SetWfInstanceSuccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetWfInstanceSuccessOutcome()>>(
			[this, request]()
			{
			return this->setWfInstanceSuccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::StopInstanceOutcome Schedulerx2Client::stopInstance(const StopInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstanceOutcome(StopInstanceResult(outcome.result()));
	else
		return StopInstanceOutcome(outcome.error());
}

void Schedulerx2Client::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::StopInstanceOutcomeCallable Schedulerx2Client::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::UpdateAppGroupOutcome Schedulerx2Client::updateAppGroup(const UpdateAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppGroupOutcome(UpdateAppGroupResult(outcome.result()));
	else
		return UpdateAppGroupOutcome(outcome.error());
}

void Schedulerx2Client::updateAppGroupAsync(const UpdateAppGroupRequest& request, const UpdateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::UpdateAppGroupOutcomeCallable Schedulerx2Client::updateAppGroupCallable(const UpdateAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppGroupOutcome()>>(
			[this, request]()
			{
			return this->updateAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::UpdateJobOutcome Schedulerx2Client::updateJob(const UpdateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateJobOutcome(UpdateJobResult(outcome.result()));
	else
		return UpdateJobOutcome(outcome.error());
}

void Schedulerx2Client::updateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::UpdateJobOutcomeCallable Schedulerx2Client::updateJobCallable(const UpdateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJobOutcome()>>(
			[this, request]()
			{
			return this->updateJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::UpdateJobScriptOutcome Schedulerx2Client::updateJobScript(const UpdateJobScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateJobScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateJobScriptOutcome(UpdateJobScriptResult(outcome.result()));
	else
		return UpdateJobScriptOutcome(outcome.error());
}

void Schedulerx2Client::updateJobScriptAsync(const UpdateJobScriptRequest& request, const UpdateJobScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJobScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::UpdateJobScriptOutcomeCallable Schedulerx2Client::updateJobScriptCallable(const UpdateJobScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJobScriptOutcome()>>(
			[this, request]()
			{
			return this->updateJobScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::UpdateNamespaceOutcome Schedulerx2Client::updateNamespace(const UpdateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNamespaceOutcome(UpdateNamespaceResult(outcome.result()));
	else
		return UpdateNamespaceOutcome(outcome.error());
}

void Schedulerx2Client::updateNamespaceAsync(const UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::UpdateNamespaceOutcomeCallable Schedulerx2Client::updateNamespaceCallable(const UpdateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->updateNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::UpdateWorkflowOutcome Schedulerx2Client::updateWorkflow(const UpdateWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkflowOutcome(UpdateWorkflowResult(outcome.result()));
	else
		return UpdateWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::updateWorkflowAsync(const UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::UpdateWorkflowOutcomeCallable Schedulerx2Client::updateWorkflowCallable(const UpdateWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkflowOutcome()>>(
			[this, request]()
			{
			return this->updateWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::UpdateWorkflowDagOutcome Schedulerx2Client::updateWorkflowDag(const UpdateWorkflowDagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkflowDagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkflowDagOutcome(UpdateWorkflowDagResult(outcome.result()));
	else
		return UpdateWorkflowDagOutcome(outcome.error());
}

void Schedulerx2Client::updateWorkflowDagAsync(const UpdateWorkflowDagRequest& request, const UpdateWorkflowDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkflowDag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::UpdateWorkflowDagOutcomeCallable Schedulerx2Client::updateWorkflowDagCallable(const UpdateWorkflowDagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkflowDagOutcome()>>(
			[this, request]()
			{
			return this->updateWorkflowDag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

