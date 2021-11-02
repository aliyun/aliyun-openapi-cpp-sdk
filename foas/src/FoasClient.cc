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

#include <alibabacloud/foas/FoasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

namespace
{
	const std::string SERVICE_NAME = "foas";
}

FoasClient::FoasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "foas");
}

FoasClient::FoasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "foas");
}

FoasClient::FoasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "foas");
}

FoasClient::~FoasClient()
{}

FoasClient::BatchGetInstanceRunSummaryOutcome FoasClient::batchGetInstanceRunSummary(const BatchGetInstanceRunSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetInstanceRunSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetInstanceRunSummaryOutcome(BatchGetInstanceRunSummaryResult(outcome.result()));
	else
		return BatchGetInstanceRunSummaryOutcome(outcome.error());
}

void FoasClient::batchGetInstanceRunSummaryAsync(const BatchGetInstanceRunSummaryRequest& request, const BatchGetInstanceRunSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetInstanceRunSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::BatchGetInstanceRunSummaryOutcomeCallable FoasClient::batchGetInstanceRunSummaryCallable(const BatchGetInstanceRunSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetInstanceRunSummaryOutcome()>>(
			[this, request]()
			{
			return this->batchGetInstanceRunSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::BindQueueOutcome FoasClient::bindQueue(const BindQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindQueueOutcome(BindQueueResult(outcome.result()));
	else
		return BindQueueOutcome(outcome.error());
}

void FoasClient::bindQueueAsync(const BindQueueRequest& request, const BindQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::BindQueueOutcomeCallable FoasClient::bindQueueCallable(const BindQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindQueueOutcome()>>(
			[this, request]()
			{
			return this->bindQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CalcPlanJsonResourceOutcome FoasClient::calcPlanJsonResource(const CalcPlanJsonResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CalcPlanJsonResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CalcPlanJsonResourceOutcome(CalcPlanJsonResourceResult(outcome.result()));
	else
		return CalcPlanJsonResourceOutcome(outcome.error());
}

void FoasClient::calcPlanJsonResourceAsync(const CalcPlanJsonResourceRequest& request, const CalcPlanJsonResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, calcPlanJsonResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CalcPlanJsonResourceOutcomeCallable FoasClient::calcPlanJsonResourceCallable(const CalcPlanJsonResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CalcPlanJsonResourceOutcome()>>(
			[this, request]()
			{
			return this->calcPlanJsonResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CheckRawPlanJsonOutcome FoasClient::checkRawPlanJson(const CheckRawPlanJsonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckRawPlanJsonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckRawPlanJsonOutcome(CheckRawPlanJsonResult(outcome.result()));
	else
		return CheckRawPlanJsonOutcome(outcome.error());
}

void FoasClient::checkRawPlanJsonAsync(const CheckRawPlanJsonRequest& request, const CheckRawPlanJsonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkRawPlanJson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CheckRawPlanJsonOutcomeCallable FoasClient::checkRawPlanJsonCallable(const CheckRawPlanJsonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckRawPlanJsonOutcome()>>(
			[this, request]()
			{
			return this->checkRawPlanJson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CommitJobOutcome FoasClient::commitJob(const CommitJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitJobOutcome(CommitJobResult(outcome.result()));
	else
		return CommitJobOutcome(outcome.error());
}

void FoasClient::commitJobAsync(const CommitJobRequest& request, const CommitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CommitJobOutcomeCallable FoasClient::commitJobCallable(const CommitJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitJobOutcome()>>(
			[this, request]()
			{
			return this->commitJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CreateCellClusterOrderOutcome FoasClient::createCellClusterOrder(const CreateCellClusterOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCellClusterOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCellClusterOrderOutcome(CreateCellClusterOrderResult(outcome.result()));
	else
		return CreateCellClusterOrderOutcome(outcome.error());
}

void FoasClient::createCellClusterOrderAsync(const CreateCellClusterOrderRequest& request, const CreateCellClusterOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCellClusterOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CreateCellClusterOrderOutcomeCallable FoasClient::createCellClusterOrderCallable(const CreateCellClusterOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCellClusterOrderOutcome()>>(
			[this, request]()
			{
			return this->createCellClusterOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CreateClusterOutcome FoasClient::createCluster(const CreateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterOutcome(CreateClusterResult(outcome.result()));
	else
		return CreateClusterOutcome(outcome.error());
}

void FoasClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CreateClusterOutcomeCallable FoasClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CreateFolderOutcome FoasClient::createFolder(const CreateFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFolderOutcome(CreateFolderResult(outcome.result()));
	else
		return CreateFolderOutcome(outcome.error());
}

void FoasClient::createFolderAsync(const CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CreateFolderOutcomeCallable FoasClient::createFolderCallable(const CreateFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFolderOutcome()>>(
			[this, request]()
			{
			return this->createFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CreateJobOutcome FoasClient::createJob(const CreateJobRequest &request) const
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

void FoasClient::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CreateJobOutcomeCallable FoasClient::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CreatePackageOutcome FoasClient::createPackage(const CreatePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePackageOutcome(CreatePackageResult(outcome.result()));
	else
		return CreatePackageOutcome(outcome.error());
}

void FoasClient::createPackageAsync(const CreatePackageRequest& request, const CreatePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CreatePackageOutcomeCallable FoasClient::createPackageCallable(const CreatePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePackageOutcome()>>(
			[this, request]()
			{
			return this->createPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CreateProjectOutcome FoasClient::createProject(const CreateProjectRequest &request) const
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

void FoasClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CreateProjectOutcomeCallable FoasClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::CreateQueueOutcome FoasClient::createQueue(const CreateQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQueueOutcome(CreateQueueResult(outcome.result()));
	else
		return CreateQueueOutcome(outcome.error());
}

void FoasClient::createQueueAsync(const CreateQueueRequest& request, const CreateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::CreateQueueOutcomeCallable FoasClient::createQueueCallable(const CreateQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQueueOutcome()>>(
			[this, request]()
			{
			return this->createQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::DeleteFolderOutcome FoasClient::deleteFolder(const DeleteFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFolderOutcome(DeleteFolderResult(outcome.result()));
	else
		return DeleteFolderOutcome(outcome.error());
}

void FoasClient::deleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::DeleteFolderOutcomeCallable FoasClient::deleteFolderCallable(const DeleteFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFolderOutcome()>>(
			[this, request]()
			{
			return this->deleteFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::DeleteJobOutcome FoasClient::deleteJob(const DeleteJobRequest &request) const
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

void FoasClient::deleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::DeleteJobOutcomeCallable FoasClient::deleteJobCallable(const DeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobOutcome()>>(
			[this, request]()
			{
			return this->deleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::DeletePackageOutcome FoasClient::deletePackage(const DeletePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePackageOutcome(DeletePackageResult(outcome.result()));
	else
		return DeletePackageOutcome(outcome.error());
}

void FoasClient::deletePackageAsync(const DeletePackageRequest& request, const DeletePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::DeletePackageOutcomeCallable FoasClient::deletePackageCallable(const DeletePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePackageOutcome()>>(
			[this, request]()
			{
			return this->deletePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::DeleteProjectOutcome FoasClient::deleteProject(const DeleteProjectRequest &request) const
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

void FoasClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::DeleteProjectOutcomeCallable FoasClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::DeleteQueueOutcome FoasClient::deleteQueue(const DeleteQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQueueOutcome(DeleteQueueResult(outcome.result()));
	else
		return DeleteQueueOutcome(outcome.error());
}

void FoasClient::deleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::DeleteQueueOutcomeCallable FoasClient::deleteQueueCallable(const DeleteQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQueueOutcome()>>(
			[this, request]()
			{
			return this->deleteQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::DestroyClusterOutcome FoasClient::destroyCluster(const DestroyClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DestroyClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DestroyClusterOutcome(DestroyClusterResult(outcome.result()));
	else
		return DestroyClusterOutcome(outcome.error());
}

void FoasClient::destroyClusterAsync(const DestroyClusterRequest& request, const DestroyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, destroyCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::DestroyClusterOutcomeCallable FoasClient::destroyClusterCallable(const DestroyClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DestroyClusterOutcome()>>(
			[this, request]()
			{
			return this->destroyCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ExpandClusterOutcome FoasClient::expandCluster(const ExpandClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExpandClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExpandClusterOutcome(ExpandClusterResult(outcome.result()));
	else
		return ExpandClusterOutcome(outcome.error());
}

void FoasClient::expandClusterAsync(const ExpandClusterRequest& request, const ExpandClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, expandCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ExpandClusterOutcomeCallable FoasClient::expandClusterCallable(const ExpandClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExpandClusterOutcome()>>(
			[this, request]()
			{
			return this->expandCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetClusterDetailsOutcome FoasClient::getClusterDetails(const GetClusterDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterDetailsOutcome(GetClusterDetailsResult(outcome.result()));
	else
		return GetClusterDetailsOutcome(outcome.error());
}

void FoasClient::getClusterDetailsAsync(const GetClusterDetailsRequest& request, const GetClusterDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetClusterDetailsOutcomeCallable FoasClient::getClusterDetailsCallable(const GetClusterDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterDetailsOutcome()>>(
			[this, request]()
			{
			return this->getClusterDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetClusterEngineVersionsOutcome FoasClient::getClusterEngineVersions(const GetClusterEngineVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterEngineVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterEngineVersionsOutcome(GetClusterEngineVersionsResult(outcome.result()));
	else
		return GetClusterEngineVersionsOutcome(outcome.error());
}

void FoasClient::getClusterEngineVersionsAsync(const GetClusterEngineVersionsRequest& request, const GetClusterEngineVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterEngineVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetClusterEngineVersionsOutcomeCallable FoasClient::getClusterEngineVersionsCallable(const GetClusterEngineVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterEngineVersionsOutcome()>>(
			[this, request]()
			{
			return this->getClusterEngineVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetClusterMetricsOutcome FoasClient::getClusterMetrics(const GetClusterMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterMetricsOutcome(GetClusterMetricsResult(outcome.result()));
	else
		return GetClusterMetricsOutcome(outcome.error());
}

void FoasClient::getClusterMetricsAsync(const GetClusterMetricsRequest& request, const GetClusterMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetClusterMetricsOutcomeCallable FoasClient::getClusterMetricsCallable(const GetClusterMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterMetricsOutcome()>>(
			[this, request]()
			{
			return this->getClusterMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetClusterQueueInfoOutcome FoasClient::getClusterQueueInfo(const GetClusterQueueInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterQueueInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterQueueInfoOutcome(GetClusterQueueInfoResult(outcome.result()));
	else
		return GetClusterQueueInfoOutcome(outcome.error());
}

void FoasClient::getClusterQueueInfoAsync(const GetClusterQueueInfoRequest& request, const GetClusterQueueInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterQueueInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetClusterQueueInfoOutcomeCallable FoasClient::getClusterQueueInfoCallable(const GetClusterQueueInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterQueueInfoOutcome()>>(
			[this, request]()
			{
			return this->getClusterQueueInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetClusterResourceOutcome FoasClient::getClusterResource(const GetClusterResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterResourceOutcome(GetClusterResourceResult(outcome.result()));
	else
		return GetClusterResourceOutcome(outcome.error());
}

void FoasClient::getClusterResourceAsync(const GetClusterResourceRequest& request, const GetClusterResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetClusterResourceOutcomeCallable FoasClient::getClusterResourceCallable(const GetClusterResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterResourceOutcome()>>(
			[this, request]()
			{
			return this->getClusterResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetFolderOutcome FoasClient::getFolder(const GetFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFolderOutcome(GetFolderResult(outcome.result()));
	else
		return GetFolderOutcome(outcome.error());
}

void FoasClient::getFolderAsync(const GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetFolderOutcomeCallable FoasClient::getFolderCallable(const GetFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFolderOutcome()>>(
			[this, request]()
			{
			return this->getFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceOutcome FoasClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void FoasClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceOutcomeCallable FoasClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceCheckpointOutcome FoasClient::getInstanceCheckpoint(const GetInstanceCheckpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceCheckpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceCheckpointOutcome(GetInstanceCheckpointResult(outcome.result()));
	else
		return GetInstanceCheckpointOutcome(outcome.error());
}

void FoasClient::getInstanceCheckpointAsync(const GetInstanceCheckpointRequest& request, const GetInstanceCheckpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceCheckpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceCheckpointOutcomeCallable FoasClient::getInstanceCheckpointCallable(const GetInstanceCheckpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceCheckpointOutcome()>>(
			[this, request]()
			{
			return this->getInstanceCheckpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceConfigOutcome FoasClient::getInstanceConfig(const GetInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceConfigOutcome(GetInstanceConfigResult(outcome.result()));
	else
		return GetInstanceConfigOutcome(outcome.error());
}

void FoasClient::getInstanceConfigAsync(const GetInstanceConfigRequest& request, const GetInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceConfigOutcomeCallable FoasClient::getInstanceConfigCallable(const GetInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->getInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceDetailOutcome FoasClient::getInstanceDetail(const GetInstanceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceDetailOutcome(GetInstanceDetailResult(outcome.result()));
	else
		return GetInstanceDetailOutcome(outcome.error());
}

void FoasClient::getInstanceDetailAsync(const GetInstanceDetailRequest& request, const GetInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceDetailOutcomeCallable FoasClient::getInstanceDetailCallable(const GetInstanceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceDetailOutcome()>>(
			[this, request]()
			{
			return this->getInstanceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceExceptionsOutcome FoasClient::getInstanceExceptions(const GetInstanceExceptionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceExceptionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceExceptionsOutcome(GetInstanceExceptionsResult(outcome.result()));
	else
		return GetInstanceExceptionsOutcome(outcome.error());
}

void FoasClient::getInstanceExceptionsAsync(const GetInstanceExceptionsRequest& request, const GetInstanceExceptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceExceptions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceExceptionsOutcomeCallable FoasClient::getInstanceExceptionsCallable(const GetInstanceExceptionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceExceptionsOutcome()>>(
			[this, request]()
			{
			return this->getInstanceExceptions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceFinalStateOutcome FoasClient::getInstanceFinalState(const GetInstanceFinalStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceFinalStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceFinalStateOutcome(GetInstanceFinalStateResult(outcome.result()));
	else
		return GetInstanceFinalStateOutcome(outcome.error());
}

void FoasClient::getInstanceFinalStateAsync(const GetInstanceFinalStateRequest& request, const GetInstanceFinalStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceFinalState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceFinalStateOutcomeCallable FoasClient::getInstanceFinalStateCallable(const GetInstanceFinalStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceFinalStateOutcome()>>(
			[this, request]()
			{
			return this->getInstanceFinalState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceHistoryAutoScalePlanContentOutcome FoasClient::getInstanceHistoryAutoScalePlanContent(const GetInstanceHistoryAutoScalePlanContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceHistoryAutoScalePlanContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceHistoryAutoScalePlanContentOutcome(GetInstanceHistoryAutoScalePlanContentResult(outcome.result()));
	else
		return GetInstanceHistoryAutoScalePlanContentOutcome(outcome.error());
}

void FoasClient::getInstanceHistoryAutoScalePlanContentAsync(const GetInstanceHistoryAutoScalePlanContentRequest& request, const GetInstanceHistoryAutoScalePlanContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceHistoryAutoScalePlanContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceHistoryAutoScalePlanContentOutcomeCallable FoasClient::getInstanceHistoryAutoScalePlanContentCallable(const GetInstanceHistoryAutoScalePlanContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceHistoryAutoScalePlanContentOutcome()>>(
			[this, request]()
			{
			return this->getInstanceHistoryAutoScalePlanContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceHistoryAutoScalePlanListOutcome FoasClient::getInstanceHistoryAutoScalePlanList(const GetInstanceHistoryAutoScalePlanListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceHistoryAutoScalePlanListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceHistoryAutoScalePlanListOutcome(GetInstanceHistoryAutoScalePlanListResult(outcome.result()));
	else
		return GetInstanceHistoryAutoScalePlanListOutcome(outcome.error());
}

void FoasClient::getInstanceHistoryAutoScalePlanListAsync(const GetInstanceHistoryAutoScalePlanListRequest& request, const GetInstanceHistoryAutoScalePlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceHistoryAutoScalePlanList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceHistoryAutoScalePlanListOutcomeCallable FoasClient::getInstanceHistoryAutoScalePlanListCallable(const GetInstanceHistoryAutoScalePlanListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceHistoryAutoScalePlanListOutcome()>>(
			[this, request]()
			{
			return this->getInstanceHistoryAutoScalePlanList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceMetricOutcome FoasClient::getInstanceMetric(const GetInstanceMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceMetricOutcome(GetInstanceMetricResult(outcome.result()));
	else
		return GetInstanceMetricOutcome(outcome.error());
}

void FoasClient::getInstanceMetricAsync(const GetInstanceMetricRequest& request, const GetInstanceMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceMetricOutcomeCallable FoasClient::getInstanceMetricCallable(const GetInstanceMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceMetricOutcome()>>(
			[this, request]()
			{
			return this->getInstanceMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceResourceOutcome FoasClient::getInstanceResource(const GetInstanceResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceResourceOutcome(GetInstanceResourceResult(outcome.result()));
	else
		return GetInstanceResourceOutcome(outcome.error());
}

void FoasClient::getInstanceResourceAsync(const GetInstanceResourceRequest& request, const GetInstanceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceResourceOutcomeCallable FoasClient::getInstanceResourceCallable(const GetInstanceResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceResourceOutcome()>>(
			[this, request]()
			{
			return this->getInstanceResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetInstanceRunSummaryOutcome FoasClient::getInstanceRunSummary(const GetInstanceRunSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceRunSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceRunSummaryOutcome(GetInstanceRunSummaryResult(outcome.result()));
	else
		return GetInstanceRunSummaryOutcome(outcome.error());
}

void FoasClient::getInstanceRunSummaryAsync(const GetInstanceRunSummaryRequest& request, const GetInstanceRunSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceRunSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetInstanceRunSummaryOutcomeCallable FoasClient::getInstanceRunSummaryCallable(const GetInstanceRunSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceRunSummaryOutcome()>>(
			[this, request]()
			{
			return this->getInstanceRunSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetJobOutcome FoasClient::getJob(const GetJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobOutcome(GetJobResult(outcome.result()));
	else
		return GetJobOutcome(outcome.error());
}

void FoasClient::getJobAsync(const GetJobRequest& request, const GetJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetJobOutcomeCallable FoasClient::getJobCallable(const GetJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobOutcome()>>(
			[this, request]()
			{
			return this->getJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetJobLatestAutoScalePlanOutcome FoasClient::getJobLatestAutoScalePlan(const GetJobLatestAutoScalePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobLatestAutoScalePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobLatestAutoScalePlanOutcome(GetJobLatestAutoScalePlanResult(outcome.result()));
	else
		return GetJobLatestAutoScalePlanOutcome(outcome.error());
}

void FoasClient::getJobLatestAutoScalePlanAsync(const GetJobLatestAutoScalePlanRequest& request, const GetJobLatestAutoScalePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobLatestAutoScalePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetJobLatestAutoScalePlanOutcomeCallable FoasClient::getJobLatestAutoScalePlanCallable(const GetJobLatestAutoScalePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobLatestAutoScalePlanOutcome()>>(
			[this, request]()
			{
			return this->getJobLatestAutoScalePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetPackageOutcome FoasClient::getPackage(const GetPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPackageOutcome(GetPackageResult(outcome.result()));
	else
		return GetPackageOutcome(outcome.error());
}

void FoasClient::getPackageAsync(const GetPackageRequest& request, const GetPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetPackageOutcomeCallable FoasClient::getPackageCallable(const GetPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPackageOutcome()>>(
			[this, request]()
			{
			return this->getPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetProjectOutcome FoasClient::getProject(const GetProjectRequest &request) const
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

void FoasClient::getProjectAsync(const GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetProjectOutcomeCallable FoasClient::getProjectCallable(const GetProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectOutcome()>>(
			[this, request]()
			{
			return this->getProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetRawPlanJsonOutcome FoasClient::getRawPlanJson(const GetRawPlanJsonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRawPlanJsonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRawPlanJsonOutcome(GetRawPlanJsonResult(outcome.result()));
	else
		return GetRawPlanJsonOutcome(outcome.error());
}

void FoasClient::getRawPlanJsonAsync(const GetRawPlanJsonRequest& request, const GetRawPlanJsonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRawPlanJson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetRawPlanJsonOutcomeCallable FoasClient::getRawPlanJsonCallable(const GetRawPlanJsonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRawPlanJsonOutcome()>>(
			[this, request]()
			{
			return this->getRawPlanJson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::GetRefPackageJobOutcome FoasClient::getRefPackageJob(const GetRefPackageJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRefPackageJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRefPackageJobOutcome(GetRefPackageJobResult(outcome.result()));
	else
		return GetRefPackageJobOutcome(outcome.error());
}

void FoasClient::getRefPackageJobAsync(const GetRefPackageJobRequest& request, const GetRefPackageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRefPackageJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::GetRefPackageJobOutcomeCallable FoasClient::getRefPackageJobCallable(const GetRefPackageJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRefPackageJobOutcome()>>(
			[this, request]()
			{
			return this->getRefPackageJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListChildFolderOutcome FoasClient::listChildFolder(const ListChildFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListChildFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListChildFolderOutcome(ListChildFolderResult(outcome.result()));
	else
		return ListChildFolderOutcome(outcome.error());
}

void FoasClient::listChildFolderAsync(const ListChildFolderRequest& request, const ListChildFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listChildFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListChildFolderOutcomeCallable FoasClient::listChildFolderCallable(const ListChildFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListChildFolderOutcome()>>(
			[this, request]()
			{
			return this->listChildFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListClusterOutcome FoasClient::listCluster(const ListClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterOutcome(ListClusterResult(outcome.result()));
	else
		return ListClusterOutcome(outcome.error());
}

void FoasClient::listClusterAsync(const ListClusterRequest& request, const ListClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListClusterOutcomeCallable FoasClient::listClusterCallable(const ListClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterOutcome()>>(
			[this, request]()
			{
			return this->listCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListInstanceOutcome FoasClient::listInstance(const ListInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceOutcome(ListInstanceResult(outcome.result()));
	else
		return ListInstanceOutcome(outcome.error());
}

void FoasClient::listInstanceAsync(const ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListInstanceOutcomeCallable FoasClient::listInstanceCallable(const ListInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceOutcome()>>(
			[this, request]()
			{
			return this->listInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListJobOutcome FoasClient::listJob(const ListJobRequest &request) const
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

void FoasClient::listJobAsync(const ListJobRequest& request, const ListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListJobOutcomeCallable FoasClient::listJobCallable(const ListJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobOutcome()>>(
			[this, request]()
			{
			return this->listJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListPackageOutcome FoasClient::listPackage(const ListPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPackageOutcome(ListPackageResult(outcome.result()));
	else
		return ListPackageOutcome(outcome.error());
}

void FoasClient::listPackageAsync(const ListPackageRequest& request, const ListPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListPackageOutcomeCallable FoasClient::listPackageCallable(const ListPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPackageOutcome()>>(
			[this, request]()
			{
			return this->listPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListProjectOutcome FoasClient::listProject(const ListProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectOutcome(ListProjectResult(outcome.result()));
	else
		return ListProjectOutcome(outcome.error());
}

void FoasClient::listProjectAsync(const ListProjectRequest& request, const ListProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListProjectOutcomeCallable FoasClient::listProjectCallable(const ListProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectOutcome()>>(
			[this, request]()
			{
			return this->listProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListProjectBindQueueOutcome FoasClient::listProjectBindQueue(const ListProjectBindQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectBindQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectBindQueueOutcome(ListProjectBindQueueResult(outcome.result()));
	else
		return ListProjectBindQueueOutcome(outcome.error());
}

void FoasClient::listProjectBindQueueAsync(const ListProjectBindQueueRequest& request, const ListProjectBindQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectBindQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListProjectBindQueueOutcomeCallable FoasClient::listProjectBindQueueCallable(const ListProjectBindQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectBindQueueOutcome()>>(
			[this, request]()
			{
			return this->listProjectBindQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListProjectBindQueueResourceOutcome FoasClient::listProjectBindQueueResource(const ListProjectBindQueueResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectBindQueueResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectBindQueueResourceOutcome(ListProjectBindQueueResourceResult(outcome.result()));
	else
		return ListProjectBindQueueResourceOutcome(outcome.error());
}

void FoasClient::listProjectBindQueueResourceAsync(const ListProjectBindQueueResourceRequest& request, const ListProjectBindQueueResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectBindQueueResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListProjectBindQueueResourceOutcomeCallable FoasClient::listProjectBindQueueResourceCallable(const ListProjectBindQueueResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectBindQueueResourceOutcome()>>(
			[this, request]()
			{
			return this->listProjectBindQueueResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ListTagResourcesOutcome FoasClient::listTagResources(const ListTagResourcesRequest &request) const
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

void FoasClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ListTagResourcesOutcomeCallable FoasClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::MVFolderOutcome FoasClient::mVFolder(const MVFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MVFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MVFolderOutcome(MVFolderResult(outcome.result()));
	else
		return MVFolderOutcome(outcome.error());
}

void FoasClient::mVFolderAsync(const MVFolderRequest& request, const MVFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mVFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::MVFolderOutcomeCallable FoasClient::mVFolderCallable(const MVFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MVFolderOutcome()>>(
			[this, request]()
			{
			return this->mVFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ModifyInstanceStateOutcome FoasClient::modifyInstanceState(const ModifyInstanceStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceStateOutcome(ModifyInstanceStateResult(outcome.result()));
	else
		return ModifyInstanceStateOutcome(outcome.error());
}

void FoasClient::modifyInstanceStateAsync(const ModifyInstanceStateRequest& request, const ModifyInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ModifyInstanceStateOutcomeCallable FoasClient::modifyInstanceStateCallable(const ModifyInstanceStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceStateOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ModifyMasterSpecOutcome FoasClient::modifyMasterSpec(const ModifyMasterSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMasterSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMasterSpecOutcome(ModifyMasterSpecResult(outcome.result()));
	else
		return ModifyMasterSpecOutcome(outcome.error());
}

void FoasClient::modifyMasterSpecAsync(const ModifyMasterSpecRequest& request, const ModifyMasterSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMasterSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ModifyMasterSpecOutcomeCallable FoasClient::modifyMasterSpecCallable(const ModifyMasterSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMasterSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyMasterSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::OfflineJobOutcome FoasClient::offlineJob(const OfflineJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineJobOutcome(OfflineJobResult(outcome.result()));
	else
		return OfflineJobOutcome(outcome.error());
}

void FoasClient::offlineJobAsync(const OfflineJobRequest& request, const OfflineJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::OfflineJobOutcomeCallable FoasClient::offlineJobCallable(const OfflineJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineJobOutcome()>>(
			[this, request]()
			{
			return this->offlineJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ShrinkClusterOutcome FoasClient::shrinkCluster(const ShrinkClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShrinkClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShrinkClusterOutcome(ShrinkClusterResult(outcome.result()));
	else
		return ShrinkClusterOutcome(outcome.error());
}

void FoasClient::shrinkClusterAsync(const ShrinkClusterRequest& request, const ShrinkClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shrinkCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ShrinkClusterOutcomeCallable FoasClient::shrinkClusterCallable(const ShrinkClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShrinkClusterOutcome()>>(
			[this, request]()
			{
			return this->shrinkCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::StartJobOutcome FoasClient::startJob(const StartJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartJobOutcome(StartJobResult(outcome.result()));
	else
		return StartJobOutcome(outcome.error());
}

void FoasClient::startJobAsync(const StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::StartJobOutcomeCallable FoasClient::startJobCallable(const StartJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartJobOutcome()>>(
			[this, request]()
			{
			return this->startJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::TagResourcesOutcome FoasClient::tagResources(const TagResourcesRequest &request) const
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

void FoasClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::TagResourcesOutcomeCallable FoasClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::UnbindQueueOutcome FoasClient::unbindQueue(const UnbindQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindQueueOutcome(UnbindQueueResult(outcome.result()));
	else
		return UnbindQueueOutcome(outcome.error());
}

void FoasClient::unbindQueueAsync(const UnbindQueueRequest& request, const UnbindQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::UnbindQueueOutcomeCallable FoasClient::unbindQueueCallable(const UnbindQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindQueueOutcome()>>(
			[this, request]()
			{
			return this->unbindQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::UntagResourcesOutcome FoasClient::untagResources(const UntagResourcesRequest &request) const
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

void FoasClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::UntagResourcesOutcomeCallable FoasClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::UpdateAutoScaleConfigOutcome FoasClient::updateAutoScaleConfig(const UpdateAutoScaleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAutoScaleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAutoScaleConfigOutcome(UpdateAutoScaleConfigResult(outcome.result()));
	else
		return UpdateAutoScaleConfigOutcome(outcome.error());
}

void FoasClient::updateAutoScaleConfigAsync(const UpdateAutoScaleConfigRequest& request, const UpdateAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAutoScaleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::UpdateAutoScaleConfigOutcomeCallable FoasClient::updateAutoScaleConfigCallable(const UpdateAutoScaleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAutoScaleConfigOutcome()>>(
			[this, request]()
			{
			return this->updateAutoScaleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::UpdateJobOutcome FoasClient::updateJob(const UpdateJobRequest &request) const
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

void FoasClient::updateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::UpdateJobOutcomeCallable FoasClient::updateJobCallable(const UpdateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJobOutcome()>>(
			[this, request]()
			{
			return this->updateJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::UpdatePackageOutcome FoasClient::updatePackage(const UpdatePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePackageOutcome(UpdatePackageResult(outcome.result()));
	else
		return UpdatePackageOutcome(outcome.error());
}

void FoasClient::updatePackageAsync(const UpdatePackageRequest& request, const UpdatePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::UpdatePackageOutcomeCallable FoasClient::updatePackageCallable(const UpdatePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePackageOutcome()>>(
			[this, request]()
			{
			return this->updatePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::UpdateProjectOutcome FoasClient::updateProject(const UpdateProjectRequest &request) const
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

void FoasClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::UpdateProjectOutcomeCallable FoasClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::UpdateProjectConfigOutcome FoasClient::updateProjectConfig(const UpdateProjectConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectConfigOutcome(UpdateProjectConfigResult(outcome.result()));
	else
		return UpdateProjectConfigOutcome(outcome.error());
}

void FoasClient::updateProjectConfigAsync(const UpdateProjectConfigRequest& request, const UpdateProjectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::UpdateProjectConfigOutcomeCallable FoasClient::updateProjectConfigCallable(const UpdateProjectConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectConfigOutcome()>>(
			[this, request]()
			{
			return this->updateProjectConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::UpdateQueueOutcome FoasClient::updateQueue(const UpdateQueueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateQueueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateQueueOutcome(UpdateQueueResult(outcome.result()));
	else
		return UpdateQueueOutcome(outcome.error());
}

void FoasClient::updateQueueAsync(const UpdateQueueRequest& request, const UpdateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateQueue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::UpdateQueueOutcomeCallable FoasClient::updateQueueCallable(const UpdateQueueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateQueueOutcome()>>(
			[this, request]()
			{
			return this->updateQueue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FoasClient::ValidateJobOutcome FoasClient::validateJob(const ValidateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateJobOutcome(ValidateJobResult(outcome.result()));
	else
		return ValidateJobOutcome(outcome.error());
}

void FoasClient::validateJobAsync(const ValidateJobRequest& request, const ValidateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FoasClient::ValidateJobOutcomeCallable FoasClient::validateJobCallable(const ValidateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateJobOutcome()>>(
			[this, request]()
			{
			return this->validateJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

