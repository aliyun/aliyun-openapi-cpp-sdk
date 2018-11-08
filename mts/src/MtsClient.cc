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

MtsClient::QueryAuthConfigOutcome MtsClient::queryAuthConfig(const QueryAuthConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAuthConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAuthConfigOutcome(QueryAuthConfigResult(outcome.result()));
	else
		return QueryAuthConfigOutcome(outcome.error());
}

void MtsClient::queryAuthConfigAsync(const QueryAuthConfigRequest& request, const QueryAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAuthConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryAuthConfigOutcomeCallable MtsClient::queryAuthConfigCallable(const QueryAuthConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAuthConfigOutcome()>>(
			[this, request]()
			{
			return this->queryAuthConfig(request);
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

MtsClient::DeleteCategoryOutcome MtsClient::deleteCategory(const DeleteCategoryRequest &request) const
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

void MtsClient::deleteCategoryAsync(const DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DeleteCategoryOutcomeCallable MtsClient::deleteCategoryCallable(const DeleteCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryTagJobListOutcome MtsClient::queryTagJobList(const QueryTagJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTagJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTagJobListOutcome(QueryTagJobListResult(outcome.result()));
	else
		return QueryTagJobListOutcome(outcome.error());
}

void MtsClient::queryTagJobListAsync(const QueryTagJobListRequest& request, const QueryTagJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTagJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryTagJobListOutcomeCallable MtsClient::queryTagJobListCallable(const QueryTagJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTagJobListOutcome()>>(
			[this, request]()
			{
			return this->queryTagJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryAsrPipelineListOutcome MtsClient::queryAsrPipelineList(const QueryAsrPipelineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAsrPipelineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAsrPipelineListOutcome(QueryAsrPipelineListResult(outcome.result()));
	else
		return QueryAsrPipelineListOutcome(outcome.error());
}

void MtsClient::queryAsrPipelineListAsync(const QueryAsrPipelineListRequest& request, const QueryAsrPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAsrPipelineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryAsrPipelineListOutcomeCallable MtsClient::queryAsrPipelineListCallable(const QueryAsrPipelineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAsrPipelineListOutcome()>>(
			[this, request]()
			{
			return this->queryAsrPipelineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::CreateSessionOutcome MtsClient::createSession(const CreateSessionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSessionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSessionOutcome(CreateSessionResult(outcome.result()));
	else
		return CreateSessionOutcome(outcome.error());
}

void MtsClient::createSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSession(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::CreateSessionOutcomeCallable MtsClient::createSessionCallable(const CreateSessionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSessionOutcome()>>(
			[this, request]()
			{
			return this->createSession(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListAsrPipelineOutcome MtsClient::listAsrPipeline(const ListAsrPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAsrPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAsrPipelineOutcome(ListAsrPipelineResult(outcome.result()));
	else
		return ListAsrPipelineOutcome(outcome.error());
}

void MtsClient::listAsrPipelineAsync(const ListAsrPipelineRequest& request, const ListAsrPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAsrPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListAsrPipelineOutcomeCallable MtsClient::listAsrPipelineCallable(const ListAsrPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAsrPipelineOutcome()>>(
			[this, request]()
			{
			return this->listAsrPipeline(request);
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

MtsClient::SubmitComplexJobOutcome MtsClient::submitComplexJob(const SubmitComplexJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitComplexJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitComplexJobOutcome(SubmitComplexJobResult(outcome.result()));
	else
		return SubmitComplexJobOutcome(outcome.error());
}

void MtsClient::submitComplexJobAsync(const SubmitComplexJobRequest& request, const SubmitComplexJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitComplexJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitComplexJobOutcomeCallable MtsClient::submitComplexJobCallable(const SubmitComplexJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitComplexJobOutcome()>>(
			[this, request]()
			{
			return this->submitComplexJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddAsrPipelineOutcome MtsClient::addAsrPipeline(const AddAsrPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAsrPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAsrPipelineOutcome(AddAsrPipelineResult(outcome.result()));
	else
		return AddAsrPipelineOutcome(outcome.error());
}

void MtsClient::addAsrPipelineAsync(const AddAsrPipelineRequest& request, const AddAsrPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAsrPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddAsrPipelineOutcomeCallable MtsClient::addAsrPipelineCallable(const AddAsrPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAsrPipelineOutcome()>>(
			[this, request]()
			{
			return this->addAsrPipeline(request);
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

MtsClient::ReportCensorJobResultOutcome MtsClient::reportCensorJobResult(const ReportCensorJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportCensorJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportCensorJobResultOutcome(ReportCensorJobResultResult(outcome.result()));
	else
		return ReportCensorJobResultOutcome(outcome.error());
}

void MtsClient::reportCensorJobResultAsync(const ReportCensorJobResultRequest& request, const ReportCensorJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportCensorJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportCensorJobResultOutcomeCallable MtsClient::reportCensorJobResultCallable(const ReportCensorJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportCensorJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportCensorJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListAllCategoryOutcome MtsClient::listAllCategory(const ListAllCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllCategoryOutcome(ListAllCategoryResult(outcome.result()));
	else
		return ListAllCategoryOutcome(outcome.error());
}

void MtsClient::listAllCategoryAsync(const ListAllCategoryRequest& request, const ListAllCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListAllCategoryOutcomeCallable MtsClient::listAllCategoryCallable(const ListAllCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllCategoryOutcome()>>(
			[this, request]()
			{
			return this->listAllCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::CheckResourceOutcome MtsClient::checkResource(const CheckResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckResourceOutcome(CheckResourceResult(outcome.result()));
	else
		return CheckResourceOutcome(outcome.error());
}

void MtsClient::checkResourceAsync(const CheckResourceRequest& request, const CheckResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::CheckResourceOutcomeCallable MtsClient::checkResourceCallable(const CheckResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckResourceOutcome()>>(
			[this, request]()
			{
			return this->checkResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListTerrorismPipelineOutcome MtsClient::listTerrorismPipeline(const ListTerrorismPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTerrorismPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTerrorismPipelineOutcome(ListTerrorismPipelineResult(outcome.result()));
	else
		return ListTerrorismPipelineOutcome(outcome.error());
}

void MtsClient::listTerrorismPipelineAsync(const ListTerrorismPipelineRequest& request, const ListTerrorismPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTerrorismPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListTerrorismPipelineOutcomeCallable MtsClient::listTerrorismPipelineCallable(const ListTerrorismPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTerrorismPipelineOutcome()>>(
			[this, request]()
			{
			return this->listTerrorismPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ReportTerrorismJobResultOutcome MtsClient::reportTerrorismJobResult(const ReportTerrorismJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportTerrorismJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportTerrorismJobResultOutcome(ReportTerrorismJobResultResult(outcome.result()));
	else
		return ReportTerrorismJobResultOutcome(outcome.error());
}

void MtsClient::reportTerrorismJobResultAsync(const ReportTerrorismJobResultRequest& request, const ReportTerrorismJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportTerrorismJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportTerrorismJobResultOutcomeCallable MtsClient::reportTerrorismJobResultCallable(const ReportTerrorismJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportTerrorismJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportTerrorismJobResult(request);
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

MtsClient::QueryComplexJobListOutcome MtsClient::queryComplexJobList(const QueryComplexJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryComplexJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryComplexJobListOutcome(QueryComplexJobListResult(outcome.result()));
	else
		return QueryComplexJobListOutcome(outcome.error());
}

void MtsClient::queryComplexJobListAsync(const QueryComplexJobListRequest& request, const QueryComplexJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryComplexJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryComplexJobListOutcomeCallable MtsClient::queryComplexJobListCallable(const QueryComplexJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryComplexJobListOutcome()>>(
			[this, request]()
			{
			return this->queryComplexJobList(request);
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

MtsClient::LogicalDeleteResourceOutcome MtsClient::logicalDeleteResource(const LogicalDeleteResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LogicalDeleteResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LogicalDeleteResourceOutcome(LogicalDeleteResourceResult(outcome.result()));
	else
		return LogicalDeleteResourceOutcome(outcome.error());
}

void MtsClient::logicalDeleteResourceAsync(const LogicalDeleteResourceRequest& request, const LogicalDeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, logicalDeleteResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::LogicalDeleteResourceOutcomeCallable MtsClient::logicalDeleteResourceCallable(const LogicalDeleteResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LogicalDeleteResourceOutcome()>>(
			[this, request]()
			{
			return this->logicalDeleteResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryCoverPipelineListOutcome MtsClient::queryCoverPipelineList(const QueryCoverPipelineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCoverPipelineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCoverPipelineListOutcome(QueryCoverPipelineListResult(outcome.result()));
	else
		return QueryCoverPipelineListOutcome(outcome.error());
}

void MtsClient::queryCoverPipelineListAsync(const QueryCoverPipelineListRequest& request, const QueryCoverPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCoverPipelineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryCoverPipelineListOutcomeCallable MtsClient::queryCoverPipelineListCallable(const QueryCoverPipelineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCoverPipelineListOutcome()>>(
			[this, request]()
			{
			return this->queryCoverPipelineList(request);
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

MtsClient::UpdateAsrPipelineOutcome MtsClient::updateAsrPipeline(const UpdateAsrPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAsrPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAsrPipelineOutcome(UpdateAsrPipelineResult(outcome.result()));
	else
		return UpdateAsrPipelineOutcome(outcome.error());
}

void MtsClient::updateAsrPipelineAsync(const UpdateAsrPipelineRequest& request, const UpdateAsrPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAsrPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateAsrPipelineOutcomeCallable MtsClient::updateAsrPipelineCallable(const UpdateAsrPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAsrPipelineOutcome()>>(
			[this, request]()
			{
			return this->updateAsrPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryMediaDetailJobListOutcome MtsClient::queryMediaDetailJobList(const QueryMediaDetailJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMediaDetailJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMediaDetailJobListOutcome(QueryMediaDetailJobListResult(outcome.result()));
	else
		return QueryMediaDetailJobListOutcome(outcome.error());
}

void MtsClient::queryMediaDetailJobListAsync(const QueryMediaDetailJobListRequest& request, const QueryMediaDetailJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMediaDetailJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryMediaDetailJobListOutcomeCallable MtsClient::queryMediaDetailJobListCallable(const QueryMediaDetailJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMediaDetailJobListOutcome()>>(
			[this, request]()
			{
			return this->queryMediaDetailJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdatePornPipelineOutcome MtsClient::updatePornPipeline(const UpdatePornPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePornPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePornPipelineOutcome(UpdatePornPipelineResult(outcome.result()));
	else
		return UpdatePornPipelineOutcome(outcome.error());
}

void MtsClient::updatePornPipelineAsync(const UpdatePornPipelineRequest& request, const UpdatePornPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePornPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdatePornPipelineOutcomeCallable MtsClient::updatePornPipelineCallable(const UpdatePornPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePornPipelineOutcome()>>(
			[this, request]()
			{
			return this->updatePornPipeline(request);
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

MtsClient::DecryptKeyOutcome MtsClient::decryptKey(const DecryptKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecryptKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecryptKeyOutcome(DecryptKeyResult(outcome.result()));
	else
		return DecryptKeyOutcome(outcome.error());
}

void MtsClient::decryptKeyAsync(const DecryptKeyRequest& request, const DecryptKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decryptKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::DecryptKeyOutcomeCallable MtsClient::decryptKeyCallable(const DecryptKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecryptKeyOutcome()>>(
			[this, request]()
			{
			return this->decryptKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddCoverPipelineOutcome MtsClient::addCoverPipeline(const AddCoverPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCoverPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCoverPipelineOutcome(AddCoverPipelineResult(outcome.result()));
	else
		return AddCoverPipelineOutcome(outcome.error());
}

void MtsClient::addCoverPipelineAsync(const AddCoverPipelineRequest& request, const AddCoverPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCoverPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddCoverPipelineOutcomeCallable MtsClient::addCoverPipelineCallable(const AddCoverPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCoverPipelineOutcome()>>(
			[this, request]()
			{
			return this->addCoverPipeline(request);
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

MtsClient::ReportFacerecogJobResultOutcome MtsClient::reportFacerecogJobResult(const ReportFacerecogJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportFacerecogJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportFacerecogJobResultOutcome(ReportFacerecogJobResultResult(outcome.result()));
	else
		return ReportFacerecogJobResultOutcome(outcome.error());
}

void MtsClient::reportFacerecogJobResultAsync(const ReportFacerecogJobResultRequest& request, const ReportFacerecogJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportFacerecogJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportFacerecogJobResultOutcomeCallable MtsClient::reportFacerecogJobResultCallable(const ReportFacerecogJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportFacerecogJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportFacerecogJobResult(request);
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

MtsClient::ListCensorPipelineOutcome MtsClient::listCensorPipeline(const ListCensorPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCensorPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCensorPipelineOutcome(ListCensorPipelineResult(outcome.result()));
	else
		return ListCensorPipelineOutcome(outcome.error());
}

void MtsClient::listCensorPipelineAsync(const ListCensorPipelineRequest& request, const ListCensorPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCensorPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListCensorPipelineOutcomeCallable MtsClient::listCensorPipelineCallable(const ListCensorPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCensorPipelineOutcome()>>(
			[this, request]()
			{
			return this->listCensorPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QuerySubtitleJobListOutcome MtsClient::querySubtitleJobList(const QuerySubtitleJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySubtitleJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySubtitleJobListOutcome(QuerySubtitleJobListResult(outcome.result()));
	else
		return QuerySubtitleJobListOutcome(outcome.error());
}

void MtsClient::querySubtitleJobListAsync(const QuerySubtitleJobListRequest& request, const QuerySubtitleJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySubtitleJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QuerySubtitleJobListOutcomeCallable MtsClient::querySubtitleJobListCallable(const QuerySubtitleJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySubtitleJobListOutcome()>>(
			[this, request]()
			{
			return this->querySubtitleJobList(request);
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

MtsClient::QueryVideoGifJobListOutcome MtsClient::queryVideoGifJobList(const QueryVideoGifJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryVideoGifJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryVideoGifJobListOutcome(QueryVideoGifJobListResult(outcome.result()));
	else
		return QueryVideoGifJobListOutcome(outcome.error());
}

void MtsClient::queryVideoGifJobListAsync(const QueryVideoGifJobListRequest& request, const QueryVideoGifJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryVideoGifJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryVideoGifJobListOutcomeCallable MtsClient::queryVideoGifJobListCallable(const QueryVideoGifJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryVideoGifJobListOutcome()>>(
			[this, request]()
			{
			return this->queryVideoGifJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::PhysicalDeleteResourceOutcome MtsClient::physicalDeleteResource(const PhysicalDeleteResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhysicalDeleteResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhysicalDeleteResourceOutcome(PhysicalDeleteResourceResult(outcome.result()));
	else
		return PhysicalDeleteResourceOutcome(outcome.error());
}

void MtsClient::physicalDeleteResourceAsync(const PhysicalDeleteResourceRequest& request, const PhysicalDeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, physicalDeleteResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::PhysicalDeleteResourceOutcomeCallable MtsClient::physicalDeleteResourceCallable(const PhysicalDeleteResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhysicalDeleteResourceOutcome()>>(
			[this, request]()
			{
			return this->physicalDeleteResource(request);
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

MtsClient::QueryEditingJobListOutcome MtsClient::queryEditingJobList(const QueryEditingJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEditingJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEditingJobListOutcome(QueryEditingJobListResult(outcome.result()));
	else
		return QueryEditingJobListOutcome(outcome.error());
}

void MtsClient::queryEditingJobListAsync(const QueryEditingJobListRequest& request, const QueryEditingJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEditingJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryEditingJobListOutcomeCallable MtsClient::queryEditingJobListCallable(const QueryEditingJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEditingJobListOutcome()>>(
			[this, request]()
			{
			return this->queryEditingJobList(request);
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

MtsClient::SubmitImageQualityJobOutcome MtsClient::submitImageQualityJob(const SubmitImageQualityJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitImageQualityJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitImageQualityJobOutcome(SubmitImageQualityJobResult(outcome.result()));
	else
		return SubmitImageQualityJobOutcome(outcome.error());
}

void MtsClient::submitImageQualityJobAsync(const SubmitImageQualityJobRequest& request, const SubmitImageQualityJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitImageQualityJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitImageQualityJobOutcomeCallable MtsClient::submitImageQualityJobCallable(const SubmitImageQualityJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitImageQualityJobOutcome()>>(
			[this, request]()
			{
			return this->submitImageQualityJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ReportCoverJobResultOutcome MtsClient::reportCoverJobResult(const ReportCoverJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportCoverJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportCoverJobResultOutcome(ReportCoverJobResultResult(outcome.result()));
	else
		return ReportCoverJobResultOutcome(outcome.error());
}

void MtsClient::reportCoverJobResultAsync(const ReportCoverJobResultRequest& request, const ReportCoverJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportCoverJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportCoverJobResultOutcomeCallable MtsClient::reportCoverJobResultCallable(const ReportCoverJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportCoverJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportCoverJobResult(request);
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

MtsClient::SubmitFacerecogJobOutcome MtsClient::submitFacerecogJob(const SubmitFacerecogJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFacerecogJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFacerecogJobOutcome(SubmitFacerecogJobResult(outcome.result()));
	else
		return SubmitFacerecogJobOutcome(outcome.error());
}

void MtsClient::submitFacerecogJobAsync(const SubmitFacerecogJobRequest& request, const SubmitFacerecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFacerecogJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitFacerecogJobOutcomeCallable MtsClient::submitFacerecogJobCallable(const SubmitFacerecogJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFacerecogJobOutcome()>>(
			[this, request]()
			{
			return this->submitFacerecogJob(request);
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

MtsClient::SubmitEditingJobsOutcome MtsClient::submitEditingJobs(const SubmitEditingJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitEditingJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitEditingJobsOutcome(SubmitEditingJobsResult(outcome.result()));
	else
		return SubmitEditingJobsOutcome(outcome.error());
}

void MtsClient::submitEditingJobsAsync(const SubmitEditingJobsRequest& request, const SubmitEditingJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitEditingJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitEditingJobsOutcomeCallable MtsClient::submitEditingJobsCallable(const SubmitEditingJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitEditingJobsOutcome()>>(
			[this, request]()
			{
			return this->submitEditingJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ReportVideoSplitJobResultOutcome MtsClient::reportVideoSplitJobResult(const ReportVideoSplitJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportVideoSplitJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportVideoSplitJobResultOutcome(ReportVideoSplitJobResultResult(outcome.result()));
	else
		return ReportVideoSplitJobResultOutcome(outcome.error());
}

void MtsClient::reportVideoSplitJobResultAsync(const ReportVideoSplitJobResultRequest& request, const ReportVideoSplitJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportVideoSplitJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportVideoSplitJobResultOutcomeCallable MtsClient::reportVideoSplitJobResultCallable(const ReportVideoSplitJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportVideoSplitJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportVideoSplitJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateCategoryNameOutcome MtsClient::updateCategoryName(const UpdateCategoryNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCategoryNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCategoryNameOutcome(UpdateCategoryNameResult(outcome.result()));
	else
		return UpdateCategoryNameOutcome(outcome.error());
}

void MtsClient::updateCategoryNameAsync(const UpdateCategoryNameRequest& request, const UpdateCategoryNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCategoryName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateCategoryNameOutcomeCallable MtsClient::updateCategoryNameCallable(const UpdateCategoryNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCategoryNameOutcome()>>(
			[this, request]()
			{
			return this->updateCategoryName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryPornJobListOutcome MtsClient::queryPornJobList(const QueryPornJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPornJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPornJobListOutcome(QueryPornJobListResult(outcome.result()));
	else
		return QueryPornJobListOutcome(outcome.error());
}

void MtsClient::queryPornJobListAsync(const QueryPornJobListRequest& request, const QueryPornJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPornJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryPornJobListOutcomeCallable MtsClient::queryPornJobListCallable(const QueryPornJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPornJobListOutcome()>>(
			[this, request]()
			{
			return this->queryPornJobList(request);
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

MtsClient::ListCoverPipelineOutcome MtsClient::listCoverPipeline(const ListCoverPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCoverPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCoverPipelineOutcome(ListCoverPipelineResult(outcome.result()));
	else
		return ListCoverPipelineOutcome(outcome.error());
}

void MtsClient::listCoverPipelineAsync(const ListCoverPipelineRequest& request, const ListCoverPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCoverPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListCoverPipelineOutcomeCallable MtsClient::listCoverPipelineCallable(const ListCoverPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCoverPipelineOutcome()>>(
			[this, request]()
			{
			return this->listCoverPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitVideoSummaryJobOutcome MtsClient::submitVideoSummaryJob(const SubmitVideoSummaryJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitVideoSummaryJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitVideoSummaryJobOutcome(SubmitVideoSummaryJobResult(outcome.result()));
	else
		return SubmitVideoSummaryJobOutcome(outcome.error());
}

void MtsClient::submitVideoSummaryJobAsync(const SubmitVideoSummaryJobRequest& request, const SubmitVideoSummaryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitVideoSummaryJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitVideoSummaryJobOutcomeCallable MtsClient::submitVideoSummaryJobCallable(const SubmitVideoSummaryJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitVideoSummaryJobOutcome()>>(
			[this, request]()
			{
			return this->submitVideoSummaryJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ReportFpShotJobResultOutcome MtsClient::reportFpShotJobResult(const ReportFpShotJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportFpShotJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportFpShotJobResultOutcome(ReportFpShotJobResultResult(outcome.result()));
	else
		return ReportFpShotJobResultOutcome(outcome.error());
}

void MtsClient::reportFpShotJobResultAsync(const ReportFpShotJobResultRequest& request, const ReportFpShotJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportFpShotJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportFpShotJobResultOutcomeCallable MtsClient::reportFpShotJobResultCallable(const ReportFpShotJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportFpShotJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportFpShotJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitVideoGifJobOutcome MtsClient::submitVideoGifJob(const SubmitVideoGifJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitVideoGifJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitVideoGifJobOutcome(SubmitVideoGifJobResult(outcome.result()));
	else
		return SubmitVideoGifJobOutcome(outcome.error());
}

void MtsClient::submitVideoGifJobAsync(const SubmitVideoGifJobRequest& request, const SubmitVideoGifJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitVideoGifJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitVideoGifJobOutcomeCallable MtsClient::submitVideoGifJobCallable(const SubmitVideoGifJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitVideoGifJobOutcome()>>(
			[this, request]()
			{
			return this->submitVideoGifJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryAnnotationJobListOutcome MtsClient::queryAnnotationJobList(const QueryAnnotationJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAnnotationJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAnnotationJobListOutcome(QueryAnnotationJobListResult(outcome.result()));
	else
		return QueryAnnotationJobListOutcome(outcome.error());
}

void MtsClient::queryAnnotationJobListAsync(const QueryAnnotationJobListRequest& request, const QueryAnnotationJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAnnotationJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryAnnotationJobListOutcomeCallable MtsClient::queryAnnotationJobListCallable(const QueryAnnotationJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAnnotationJobListOutcome()>>(
			[this, request]()
			{
			return this->queryAnnotationJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitMediaDetailJobOutcome MtsClient::submitMediaDetailJob(const SubmitMediaDetailJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitMediaDetailJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitMediaDetailJobOutcome(SubmitMediaDetailJobResult(outcome.result()));
	else
		return SubmitMediaDetailJobOutcome(outcome.error());
}

void MtsClient::submitMediaDetailJobAsync(const SubmitMediaDetailJobRequest& request, const SubmitMediaDetailJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitMediaDetailJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitMediaDetailJobOutcomeCallable MtsClient::submitMediaDetailJobCallable(const SubmitMediaDetailJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitMediaDetailJobOutcome()>>(
			[this, request]()
			{
			return this->submitMediaDetailJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitPornJobOutcome MtsClient::submitPornJob(const SubmitPornJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitPornJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitPornJobOutcome(SubmitPornJobResult(outcome.result()));
	else
		return SubmitPornJobOutcome(outcome.error());
}

void MtsClient::submitPornJobAsync(const SubmitPornJobRequest& request, const SubmitPornJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitPornJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitPornJobOutcomeCallable MtsClient::submitPornJobCallable(const SubmitPornJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitPornJobOutcome()>>(
			[this, request]()
			{
			return this->submitPornJob(request);
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

MtsClient::ReportPornJobResultOutcome MtsClient::reportPornJobResult(const ReportPornJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportPornJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportPornJobResultOutcome(ReportPornJobResultResult(outcome.result()));
	else
		return ReportPornJobResultOutcome(outcome.error());
}

void MtsClient::reportPornJobResultAsync(const ReportPornJobResultRequest& request, const ReportPornJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportPornJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportPornJobResultOutcomeCallable MtsClient::reportPornJobResultCallable(const ReportPornJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportPornJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportPornJobResult(request);
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

MtsClient::ReportTagJobResultOutcome MtsClient::reportTagJobResult(const ReportTagJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportTagJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportTagJobResultOutcome(ReportTagJobResultResult(outcome.result()));
	else
		return ReportTagJobResultOutcome(outcome.error());
}

void MtsClient::reportTagJobResultAsync(const ReportTagJobResultRequest& request, const ReportTagJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportTagJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportTagJobResultOutcomeCallable MtsClient::reportTagJobResultCallable(const ReportTagJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportTagJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportTagJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddPornPipelineOutcome MtsClient::addPornPipeline(const AddPornPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPornPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPornPipelineOutcome(AddPornPipelineResult(outcome.result()));
	else
		return AddPornPipelineOutcome(outcome.error());
}

void MtsClient::addPornPipelineAsync(const AddPornPipelineRequest& request, const AddPornPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPornPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddPornPipelineOutcomeCallable MtsClient::addPornPipelineCallable(const AddPornPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPornPipelineOutcome()>>(
			[this, request]()
			{
			return this->addPornPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::GetLicenseOutcome MtsClient::getLicense(const GetLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLicenseOutcome(GetLicenseResult(outcome.result()));
	else
		return GetLicenseOutcome(outcome.error());
}

void MtsClient::getLicenseAsync(const GetLicenseRequest& request, const GetLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::GetLicenseOutcomeCallable MtsClient::getLicenseCallable(const GetLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLicenseOutcome()>>(
			[this, request]()
			{
			return this->getLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryPornPipelineListOutcome MtsClient::queryPornPipelineList(const QueryPornPipelineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPornPipelineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPornPipelineListOutcome(QueryPornPipelineListResult(outcome.result()));
	else
		return QueryPornPipelineListOutcome(outcome.error());
}

void MtsClient::queryPornPipelineListAsync(const QueryPornPipelineListRequest& request, const QueryPornPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPornPipelineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryPornPipelineListOutcomeCallable MtsClient::queryPornPipelineListCallable(const QueryPornPipelineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPornPipelineListOutcome()>>(
			[this, request]()
			{
			return this->queryPornPipelineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryVideoSummaryJobListOutcome MtsClient::queryVideoSummaryJobList(const QueryVideoSummaryJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryVideoSummaryJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryVideoSummaryJobListOutcome(QueryVideoSummaryJobListResult(outcome.result()));
	else
		return QueryVideoSummaryJobListOutcome(outcome.error());
}

void MtsClient::queryVideoSummaryJobListAsync(const QueryVideoSummaryJobListRequest& request, const QueryVideoSummaryJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryVideoSummaryJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryVideoSummaryJobListOutcomeCallable MtsClient::queryVideoSummaryJobListCallable(const QueryVideoSummaryJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryVideoSummaryJobListOutcome()>>(
			[this, request]()
			{
			return this->queryVideoSummaryJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitCensorJobOutcome MtsClient::submitCensorJob(const SubmitCensorJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCensorJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCensorJobOutcome(SubmitCensorJobResult(outcome.result()));
	else
		return SubmitCensorJobOutcome(outcome.error());
}

void MtsClient::submitCensorJobAsync(const SubmitCensorJobRequest& request, const SubmitCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCensorJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitCensorJobOutcomeCallable MtsClient::submitCensorJobCallable(const SubmitCensorJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCensorJobOutcome()>>(
			[this, request]()
			{
			return this->submitCensorJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryTerrorismJobListOutcome MtsClient::queryTerrorismJobList(const QueryTerrorismJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTerrorismJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTerrorismJobListOutcome(QueryTerrorismJobListResult(outcome.result()));
	else
		return QueryTerrorismJobListOutcome(outcome.error());
}

void MtsClient::queryTerrorismJobListAsync(const QueryTerrorismJobListRequest& request, const QueryTerrorismJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTerrorismJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryTerrorismJobListOutcomeCallable MtsClient::queryTerrorismJobListCallable(const QueryTerrorismJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTerrorismJobListOutcome()>>(
			[this, request]()
			{
			return this->queryTerrorismJobList(request);
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

MtsClient::ListMediaOutcome MtsClient::listMedia(const ListMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMediaOutcome(ListMediaResult(outcome.result()));
	else
		return ListMediaOutcome(outcome.error());
}

void MtsClient::listMediaAsync(const ListMediaRequest& request, const ListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListMediaOutcomeCallable MtsClient::listMediaCallable(const ListMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMediaOutcome()>>(
			[this, request]()
			{
			return this->listMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::RefreshCdnDomainConfigsCacheOutcome MtsClient::refreshCdnDomainConfigsCache(const RefreshCdnDomainConfigsCacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshCdnDomainConfigsCacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshCdnDomainConfigsCacheOutcome(RefreshCdnDomainConfigsCacheResult(outcome.result()));
	else
		return RefreshCdnDomainConfigsCacheOutcome(outcome.error());
}

void MtsClient::refreshCdnDomainConfigsCacheAsync(const RefreshCdnDomainConfigsCacheRequest& request, const RefreshCdnDomainConfigsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshCdnDomainConfigsCache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::RefreshCdnDomainConfigsCacheOutcomeCallable MtsClient::refreshCdnDomainConfigsCacheCallable(const RefreshCdnDomainConfigsCacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshCdnDomainConfigsCacheOutcome()>>(
			[this, request]()
			{
			return this->refreshCdnDomainConfigsCache(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::GetPackageOutcome MtsClient::getPackage(const GetPackageRequest &request) const
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

void MtsClient::getPackageAsync(const GetPackageRequest& request, const GetPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::GetPackageOutcomeCallable MtsClient::getPackageCallable(const GetPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPackageOutcome()>>(
			[this, request]()
			{
			return this->getPackage(request);
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

MtsClient::SearchMediaOutcome MtsClient::searchMedia(const SearchMediaRequest &request) const
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

void MtsClient::searchMediaAsync(const SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SearchMediaOutcomeCallable MtsClient::searchMediaCallable(const SearchMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMediaOutcome()>>(
			[this, request]()
			{
			return this->searchMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

MtsClient::SubmitTerrorismJobOutcome MtsClient::submitTerrorismJob(const SubmitTerrorismJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTerrorismJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTerrorismJobOutcome(SubmitTerrorismJobResult(outcome.result()));
	else
		return SubmitTerrorismJobOutcome(outcome.error());
}

void MtsClient::submitTerrorismJobAsync(const SubmitTerrorismJobRequest& request, const SubmitTerrorismJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTerrorismJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitTerrorismJobOutcomeCallable MtsClient::submitTerrorismJobCallable(const SubmitTerrorismJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTerrorismJobOutcome()>>(
			[this, request]()
			{
			return this->submitTerrorismJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SetAuthConfigOutcome MtsClient::setAuthConfig(const SetAuthConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAuthConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAuthConfigOutcome(SetAuthConfigResult(outcome.result()));
	else
		return SetAuthConfigOutcome(outcome.error());
}

void MtsClient::setAuthConfigAsync(const SetAuthConfigRequest& request, const SetAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAuthConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SetAuthConfigOutcomeCallable MtsClient::setAuthConfigCallable(const SetAuthConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAuthConfigOutcome()>>(
			[this, request]()
			{
			return this->setAuthConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateCensorPipelineOutcome MtsClient::updateCensorPipeline(const UpdateCensorPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCensorPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCensorPipelineOutcome(UpdateCensorPipelineResult(outcome.result()));
	else
		return UpdateCensorPipelineOutcome(outcome.error());
}

void MtsClient::updateCensorPipelineAsync(const UpdateCensorPipelineRequest& request, const UpdateCensorPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCensorPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateCensorPipelineOutcomeCallable MtsClient::updateCensorPipelineCallable(const UpdateCensorPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCensorPipelineOutcome()>>(
			[this, request]()
			{
			return this->updateCensorPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddCategoryOutcome MtsClient::addCategory(const AddCategoryRequest &request) const
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

void MtsClient::addCategoryAsync(const AddCategoryRequest& request, const AddCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddCategoryOutcomeCallable MtsClient::addCategoryCallable(const AddCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCategoryOutcome()>>(
			[this, request]()
			{
			return this->addCategory(request);
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

MtsClient::QueryTerrorismPipelineListOutcome MtsClient::queryTerrorismPipelineList(const QueryTerrorismPipelineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTerrorismPipelineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTerrorismPipelineListOutcome(QueryTerrorismPipelineListResult(outcome.result()));
	else
		return QueryTerrorismPipelineListOutcome(outcome.error());
}

void MtsClient::queryTerrorismPipelineListAsync(const QueryTerrorismPipelineListRequest& request, const QueryTerrorismPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTerrorismPipelineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryTerrorismPipelineListOutcomeCallable MtsClient::queryTerrorismPipelineListCallable(const QueryTerrorismPipelineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTerrorismPipelineListOutcome()>>(
			[this, request]()
			{
			return this->queryTerrorismPipelineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryFacerecogJobListOutcome MtsClient::queryFacerecogJobList(const QueryFacerecogJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFacerecogJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFacerecogJobListOutcome(QueryFacerecogJobListResult(outcome.result()));
	else
		return QueryFacerecogJobListOutcome(outcome.error());
}

void MtsClient::queryFacerecogJobListAsync(const QueryFacerecogJobListRequest& request, const QueryFacerecogJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFacerecogJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryFacerecogJobListOutcomeCallable MtsClient::queryFacerecogJobListCallable(const QueryFacerecogJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFacerecogJobListOutcome()>>(
			[this, request]()
			{
			return this->queryFacerecogJobList(request);
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

MtsClient::SubmitAnnotationJobOutcome MtsClient::submitAnnotationJob(const SubmitAnnotationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAnnotationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAnnotationJobOutcome(SubmitAnnotationJobResult(outcome.result()));
	else
		return SubmitAnnotationJobOutcome(outcome.error());
}

void MtsClient::submitAnnotationJobAsync(const SubmitAnnotationJobRequest& request, const SubmitAnnotationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAnnotationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitAnnotationJobOutcomeCallable MtsClient::submitAnnotationJobCallable(const SubmitAnnotationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAnnotationJobOutcome()>>(
			[this, request]()
			{
			return this->submitAnnotationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ReportMediaDetailJobResultOutcome MtsClient::reportMediaDetailJobResult(const ReportMediaDetailJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportMediaDetailJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportMediaDetailJobResultOutcome(ReportMediaDetailJobResultResult(outcome.result()));
	else
		return ReportMediaDetailJobResultOutcome(outcome.error());
}

void MtsClient::reportMediaDetailJobResultAsync(const ReportMediaDetailJobResultRequest& request, const ReportMediaDetailJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportMediaDetailJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportMediaDetailJobResultOutcomeCallable MtsClient::reportMediaDetailJobResultCallable(const ReportMediaDetailJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportMediaDetailJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportMediaDetailJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::RegisterMediaDetailScenarioOutcome MtsClient::registerMediaDetailScenario(const RegisterMediaDetailScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterMediaDetailScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterMediaDetailScenarioOutcome(RegisterMediaDetailScenarioResult(outcome.result()));
	else
		return RegisterMediaDetailScenarioOutcome(outcome.error());
}

void MtsClient::registerMediaDetailScenarioAsync(const RegisterMediaDetailScenarioRequest& request, const RegisterMediaDetailScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerMediaDetailScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::RegisterMediaDetailScenarioOutcomeCallable MtsClient::registerMediaDetailScenarioCallable(const RegisterMediaDetailScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterMediaDetailScenarioOutcome()>>(
			[this, request]()
			{
			return this->registerMediaDetailScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryVideoSplitJobListOutcome MtsClient::queryVideoSplitJobList(const QueryVideoSplitJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryVideoSplitJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryVideoSplitJobListOutcome(QueryVideoSplitJobListResult(outcome.result()));
	else
		return QueryVideoSplitJobListOutcome(outcome.error());
}

void MtsClient::queryVideoSplitJobListAsync(const QueryVideoSplitJobListRequest& request, const QueryVideoSplitJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryVideoSplitJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryVideoSplitJobListOutcomeCallable MtsClient::queryVideoSplitJobListCallable(const QueryVideoSplitJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryVideoSplitJobListOutcome()>>(
			[this, request]()
			{
			return this->queryVideoSplitJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ReportAnnotationJobResultOutcome MtsClient::reportAnnotationJobResult(const ReportAnnotationJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportAnnotationJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportAnnotationJobResultOutcome(ReportAnnotationJobResultResult(outcome.result()));
	else
		return ReportAnnotationJobResultOutcome(outcome.error());
}

void MtsClient::reportAnnotationJobResultAsync(const ReportAnnotationJobResultRequest& request, const ReportAnnotationJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportAnnotationJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ReportAnnotationJobResultOutcomeCallable MtsClient::reportAnnotationJobResultCallable(const ReportAnnotationJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportAnnotationJobResultOutcome()>>(
			[this, request]()
			{
			return this->reportAnnotationJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::ListPornPipelineOutcome MtsClient::listPornPipeline(const ListPornPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPornPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPornPipelineOutcome(ListPornPipelineResult(outcome.result()));
	else
		return ListPornPipelineOutcome(outcome.error());
}

void MtsClient::listPornPipelineAsync(const ListPornPipelineRequest& request, const ListPornPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPornPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::ListPornPipelineOutcomeCallable MtsClient::listPornPipelineCallable(const ListPornPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPornPipelineOutcome()>>(
			[this, request]()
			{
			return this->listPornPipeline(request);
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

MtsClient::AddTerrorismPipelineOutcome MtsClient::addTerrorismPipeline(const AddTerrorismPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTerrorismPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTerrorismPipelineOutcome(AddTerrorismPipelineResult(outcome.result()));
	else
		return AddTerrorismPipelineOutcome(outcome.error());
}

void MtsClient::addTerrorismPipelineAsync(const AddTerrorismPipelineRequest& request, const AddTerrorismPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTerrorismPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddTerrorismPipelineOutcomeCallable MtsClient::addTerrorismPipelineCallable(const AddTerrorismPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTerrorismPipelineOutcome()>>(
			[this, request]()
			{
			return this->addTerrorismPipeline(request);
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

MtsClient::UpdateCoverPipelineOutcome MtsClient::updateCoverPipeline(const UpdateCoverPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCoverPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCoverPipelineOutcome(UpdateCoverPipelineResult(outcome.result()));
	else
		return UpdateCoverPipelineOutcome(outcome.error());
}

void MtsClient::updateCoverPipelineAsync(const UpdateCoverPipelineRequest& request, const UpdateCoverPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCoverPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateCoverPipelineOutcomeCallable MtsClient::updateCoverPipelineCallable(const UpdateCoverPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCoverPipelineOutcome()>>(
			[this, request]()
			{
			return this->updateCoverPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::UpdateTerrorismPipelineOutcome MtsClient::updateTerrorismPipeline(const UpdateTerrorismPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTerrorismPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTerrorismPipelineOutcome(UpdateTerrorismPipelineResult(outcome.result()));
	else
		return UpdateTerrorismPipelineOutcome(outcome.error());
}

void MtsClient::updateTerrorismPipelineAsync(const UpdateTerrorismPipelineRequest& request, const UpdateTerrorismPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTerrorismPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::UpdateTerrorismPipelineOutcomeCallable MtsClient::updateTerrorismPipelineCallable(const UpdateTerrorismPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTerrorismPipelineOutcome()>>(
			[this, request]()
			{
			return this->updateTerrorismPipeline(request);
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

MtsClient::QueryCensorPipelineListOutcome MtsClient::queryCensorPipelineList(const QueryCensorPipelineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCensorPipelineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCensorPipelineListOutcome(QueryCensorPipelineListResult(outcome.result()));
	else
		return QueryCensorPipelineListOutcome(outcome.error());
}

void MtsClient::queryCensorPipelineListAsync(const QueryCensorPipelineListRequest& request, const QueryCensorPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCensorPipelineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryCensorPipelineListOutcomeCallable MtsClient::queryCensorPipelineListCallable(const QueryCensorPipelineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCensorPipelineListOutcome()>>(
			[this, request]()
			{
			return this->queryCensorPipelineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitVideoSplitJobOutcome MtsClient::submitVideoSplitJob(const SubmitVideoSplitJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitVideoSplitJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitVideoSplitJobOutcome(SubmitVideoSplitJobResult(outcome.result()));
	else
		return SubmitVideoSplitJobOutcome(outcome.error());
}

void MtsClient::submitVideoSplitJobAsync(const SubmitVideoSplitJobRequest& request, const SubmitVideoSplitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitVideoSplitJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitVideoSplitJobOutcomeCallable MtsClient::submitVideoSplitJobCallable(const SubmitVideoSplitJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitVideoSplitJobOutcome()>>(
			[this, request]()
			{
			return this->submitVideoSplitJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::CategoryTreeOutcome MtsClient::categoryTree(const CategoryTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CategoryTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CategoryTreeOutcome(CategoryTreeResult(outcome.result()));
	else
		return CategoryTreeOutcome(outcome.error());
}

void MtsClient::categoryTreeAsync(const CategoryTreeRequest& request, const CategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, categoryTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::CategoryTreeOutcomeCallable MtsClient::categoryTreeCallable(const CategoryTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CategoryTreeOutcome()>>(
			[this, request]()
			{
			return this->categoryTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitTagJobOutcome MtsClient::submitTagJob(const SubmitTagJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTagJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTagJobOutcome(SubmitTagJobResult(outcome.result()));
	else
		return SubmitTagJobOutcome(outcome.error());
}

void MtsClient::submitTagJobAsync(const SubmitTagJobRequest& request, const SubmitTagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTagJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitTagJobOutcomeCallable MtsClient::submitTagJobCallable(const SubmitTagJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTagJobOutcome()>>(
			[this, request]()
			{
			return this->submitTagJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitCoverJobOutcome MtsClient::submitCoverJob(const SubmitCoverJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCoverJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCoverJobOutcome(SubmitCoverJobResult(outcome.result()));
	else
		return SubmitCoverJobOutcome(outcome.error());
}

void MtsClient::submitCoverJobAsync(const SubmitCoverJobRequest& request, const SubmitCoverJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCoverJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitCoverJobOutcomeCallable MtsClient::submitCoverJobCallable(const SubmitCoverJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCoverJobOutcome()>>(
			[this, request]()
			{
			return this->submitCoverJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::PlayInfoOutcome MtsClient::playInfo(const PlayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PlayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PlayInfoOutcome(PlayInfoResult(outcome.result()));
	else
		return PlayInfoOutcome(outcome.error());
}

void MtsClient::playInfoAsync(const PlayInfoRequest& request, const PlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, playInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::PlayInfoOutcomeCallable MtsClient::playInfoCallable(const PlayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PlayInfoOutcome()>>(
			[this, request]()
			{
			return this->playInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::AddCensorPipelineOutcome MtsClient::addCensorPipeline(const AddCensorPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCensorPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCensorPipelineOutcome(AddCensorPipelineResult(outcome.result()));
	else
		return AddCensorPipelineOutcome(outcome.error());
}

void MtsClient::addCensorPipelineAsync(const AddCensorPipelineRequest& request, const AddCensorPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCensorPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::AddCensorPipelineOutcomeCallable MtsClient::addCensorPipelineCallable(const AddCensorPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCensorPipelineOutcome()>>(
			[this, request]()
			{
			return this->addCensorPipeline(request);
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

MtsClient::SubmitAsrJobOutcome MtsClient::submitAsrJob(const SubmitAsrJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAsrJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAsrJobOutcome(SubmitAsrJobResult(outcome.result()));
	else
		return SubmitAsrJobOutcome(outcome.error());
}

void MtsClient::submitAsrJobAsync(const SubmitAsrJobRequest& request, const SubmitAsrJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAsrJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitAsrJobOutcomeCallable MtsClient::submitAsrJobCallable(const SubmitAsrJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAsrJobOutcome()>>(
			[this, request]()
			{
			return this->submitAsrJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::SubmitSubtitleJobOutcome MtsClient::submitSubtitleJob(const SubmitSubtitleJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSubtitleJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSubtitleJobOutcome(SubmitSubtitleJobResult(outcome.result()));
	else
		return SubmitSubtitleJobOutcome(outcome.error());
}

void MtsClient::submitSubtitleJobAsync(const SubmitSubtitleJobRequest& request, const SubmitSubtitleJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSubtitleJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::SubmitSubtitleJobOutcomeCallable MtsClient::submitSubtitleJobCallable(const SubmitSubtitleJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSubtitleJobOutcome()>>(
			[this, request]()
			{
			return this->submitSubtitleJob(request);
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

MtsClient::QueryCoverJobListOutcome MtsClient::queryCoverJobList(const QueryCoverJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCoverJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCoverJobListOutcome(QueryCoverJobListResult(outcome.result()));
	else
		return QueryCoverJobListOutcome(outcome.error());
}

void MtsClient::queryCoverJobListAsync(const QueryCoverJobListRequest& request, const QueryCoverJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCoverJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryCoverJobListOutcomeCallable MtsClient::queryCoverJobListCallable(const QueryCoverJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCoverJobListOutcome()>>(
			[this, request]()
			{
			return this->queryCoverJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryAsrJobListOutcome MtsClient::queryAsrJobList(const QueryAsrJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAsrJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAsrJobListOutcome(QueryAsrJobListResult(outcome.result()));
	else
		return QueryAsrJobListOutcome(outcome.error());
}

void MtsClient::queryAsrJobListAsync(const QueryAsrJobListRequest& request, const QueryAsrJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAsrJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryAsrJobListOutcomeCallable MtsClient::queryAsrJobListCallable(const QueryAsrJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAsrJobListOutcome()>>(
			[this, request]()
			{
			return this->queryAsrJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::PlayerAuthOutcome MtsClient::playerAuth(const PlayerAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PlayerAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PlayerAuthOutcome(PlayerAuthResult(outcome.result()));
	else
		return PlayerAuthOutcome(outcome.error());
}

void MtsClient::playerAuthAsync(const PlayerAuthRequest& request, const PlayerAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, playerAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::PlayerAuthOutcomeCallable MtsClient::playerAuthCallable(const PlayerAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PlayerAuthOutcome()>>(
			[this, request]()
			{
			return this->playerAuth(request);
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

MtsClient::RegisterMediaDetailPersonOutcome MtsClient::registerMediaDetailPerson(const RegisterMediaDetailPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterMediaDetailPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterMediaDetailPersonOutcome(RegisterMediaDetailPersonResult(outcome.result()));
	else
		return RegisterMediaDetailPersonOutcome(outcome.error());
}

void MtsClient::registerMediaDetailPersonAsync(const RegisterMediaDetailPersonRequest& request, const RegisterMediaDetailPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerMediaDetailPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::RegisterMediaDetailPersonOutcomeCallable MtsClient::registerMediaDetailPersonCallable(const RegisterMediaDetailPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterMediaDetailPersonOutcome()>>(
			[this, request]()
			{
			return this->registerMediaDetailPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MtsClient::QueryCensorJobListOutcome MtsClient::queryCensorJobList(const QueryCensorJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCensorJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCensorJobListOutcome(QueryCensorJobListResult(outcome.result()));
	else
		return QueryCensorJobListOutcome(outcome.error());
}

void MtsClient::queryCensorJobListAsync(const QueryCensorJobListRequest& request, const QueryCensorJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCensorJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MtsClient::QueryCensorJobListOutcomeCallable MtsClient::queryCensorJobListCallable(const QueryCensorJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCensorJobListOutcome()>>(
			[this, request]()
			{
			return this->queryCensorJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

