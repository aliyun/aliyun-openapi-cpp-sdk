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

#include <alibabacloud/schedulerx3/SchedulerX3Client.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

namespace
{
	const std::string SERVICE_NAME = "SchedulerX3";
}

SchedulerX3Client::SchedulerX3Client(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SchedulerX3Client::SchedulerX3Client(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SchedulerX3Client::SchedulerX3Client(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SchedulerX3Client::~SchedulerX3Client()
{}

SchedulerX3Client::CreateAppOutcome SchedulerX3Client::createApp(const CreateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppOutcome(CreateAppResult(outcome.result()));
	else
		return CreateAppOutcome(outcome.error());
}

void SchedulerX3Client::createAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::CreateAppOutcomeCallable SchedulerX3Client::createAppCallable(const CreateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
			[this, request]()
			{
			return this->createApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::CreateClusterOutcome SchedulerX3Client::createCluster(const CreateClusterRequest &request) const
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

void SchedulerX3Client::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::CreateClusterOutcomeCallable SchedulerX3Client::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::CreateJobOutcome SchedulerX3Client::createJob(const CreateJobRequest &request) const
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

void SchedulerX3Client::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::CreateJobOutcomeCallable SchedulerX3Client::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::DeleteAppOutcome SchedulerX3Client::deleteApp(const DeleteAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppOutcome(DeleteAppResult(outcome.result()));
	else
		return DeleteAppOutcome(outcome.error());
}

void SchedulerX3Client::deleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::DeleteAppOutcomeCallable SchedulerX3Client::deleteAppCallable(const DeleteAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppOutcome()>>(
			[this, request]()
			{
			return this->deleteApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::DeleteClusterOutcome SchedulerX3Client::deleteCluster(const DeleteClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterOutcome(DeleteClusterResult(outcome.result()));
	else
		return DeleteClusterOutcome(outcome.error());
}

void SchedulerX3Client::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::DeleteClusterOutcomeCallable SchedulerX3Client::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::DeleteJobsOutcome SchedulerX3Client::deleteJobs(const DeleteJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobsOutcome(DeleteJobsResult(outcome.result()));
	else
		return DeleteJobsOutcome(outcome.error());
}

void SchedulerX3Client::deleteJobsAsync(const DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::DeleteJobsOutcomeCallable SchedulerX3Client::deleteJobsCallable(const DeleteJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobsOutcome()>>(
			[this, request]()
			{
			return this->deleteJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ExportJobsOutcome SchedulerX3Client::exportJobs(const ExportJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportJobsOutcome(ExportJobsResult(outcome.result()));
	else
		return ExportJobsOutcome(outcome.error());
}

void SchedulerX3Client::exportJobsAsync(const ExportJobsRequest& request, const ExportJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ExportJobsOutcomeCallable SchedulerX3Client::exportJobsCallable(const ExportJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportJobsOutcome()>>(
			[this, request]()
			{
			return this->exportJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::GetClusterOutcome SchedulerX3Client::getCluster(const GetClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterOutcome(GetClusterResult(outcome.result()));
	else
		return GetClusterOutcome(outcome.error());
}

void SchedulerX3Client::getClusterAsync(const GetClusterRequest& request, const GetClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::GetClusterOutcomeCallable SchedulerX3Client::getClusterCallable(const GetClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterOutcome()>>(
			[this, request]()
			{
			return this->getCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::GetDesigateInfoOutcome SchedulerX3Client::getDesigateInfo(const GetDesigateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDesigateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDesigateInfoOutcome(GetDesigateInfoResult(outcome.result()));
	else
		return GetDesigateInfoOutcome(outcome.error());
}

void SchedulerX3Client::getDesigateInfoAsync(const GetDesigateInfoRequest& request, const GetDesigateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDesigateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::GetDesigateInfoOutcomeCallable SchedulerX3Client::getDesigateInfoCallable(const GetDesigateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDesigateInfoOutcome()>>(
			[this, request]()
			{
			return this->getDesigateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::GetJobExecutionProgressOutcome SchedulerX3Client::getJobExecutionProgress(const GetJobExecutionProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobExecutionProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobExecutionProgressOutcome(GetJobExecutionProgressResult(outcome.result()));
	else
		return GetJobExecutionProgressOutcome(outcome.error());
}

void SchedulerX3Client::getJobExecutionProgressAsync(const GetJobExecutionProgressRequest& request, const GetJobExecutionProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobExecutionProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::GetJobExecutionProgressOutcomeCallable SchedulerX3Client::getJobExecutionProgressCallable(const GetJobExecutionProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobExecutionProgressOutcome()>>(
			[this, request]()
			{
			return this->getJobExecutionProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::GetLogOutcome SchedulerX3Client::getLog(const GetLogRequest &request) const
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

void SchedulerX3Client::getLogAsync(const GetLogRequest& request, const GetLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::GetLogOutcomeCallable SchedulerX3Client::getLogCallable(const GetLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLogOutcome()>>(
			[this, request]()
			{
			return this->getLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ImportCalendarOutcome SchedulerX3Client::importCalendar(const ImportCalendarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportCalendarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportCalendarOutcome(ImportCalendarResult(outcome.result()));
	else
		return ImportCalendarOutcome(outcome.error());
}

void SchedulerX3Client::importCalendarAsync(const ImportCalendarRequest& request, const ImportCalendarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importCalendar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ImportCalendarOutcomeCallable SchedulerX3Client::importCalendarCallable(const ImportCalendarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportCalendarOutcome()>>(
			[this, request]()
			{
			return this->importCalendar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ImportJobsOutcome SchedulerX3Client::importJobs(const ImportJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportJobsOutcome(ImportJobsResult(outcome.result()));
	else
		return ImportJobsOutcome(outcome.error());
}

void SchedulerX3Client::importJobsAsync(const ImportJobsRequest& request, const ImportJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ImportJobsOutcomeCallable SchedulerX3Client::importJobsCallable(const ImportJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportJobsOutcome()>>(
			[this, request]()
			{
			return this->importJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListAlarmEventOutcome SchedulerX3Client::listAlarmEvent(const ListAlarmEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlarmEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlarmEventOutcome(ListAlarmEventResult(outcome.result()));
	else
		return ListAlarmEventOutcome(outcome.error());
}

void SchedulerX3Client::listAlarmEventAsync(const ListAlarmEventRequest& request, const ListAlarmEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlarmEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListAlarmEventOutcomeCallable SchedulerX3Client::listAlarmEventCallable(const ListAlarmEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlarmEventOutcome()>>(
			[this, request]()
			{
			return this->listAlarmEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListAppNamesOutcome SchedulerX3Client::listAppNames(const ListAppNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppNamesOutcome(ListAppNamesResult(outcome.result()));
	else
		return ListAppNamesOutcome(outcome.error());
}

void SchedulerX3Client::listAppNamesAsync(const ListAppNamesRequest& request, const ListAppNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListAppNamesOutcomeCallable SchedulerX3Client::listAppNamesCallable(const ListAppNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppNamesOutcome()>>(
			[this, request]()
			{
			return this->listAppNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListAppsOutcome SchedulerX3Client::listApps(const ListAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppsOutcome(ListAppsResult(outcome.result()));
	else
		return ListAppsOutcome(outcome.error());
}

void SchedulerX3Client::listAppsAsync(const ListAppsRequest& request, const ListAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListAppsOutcomeCallable SchedulerX3Client::listAppsCallable(const ListAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppsOutcome()>>(
			[this, request]()
			{
			return this->listApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListCalendarNamesOutcome SchedulerX3Client::listCalendarNames(const ListCalendarNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCalendarNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCalendarNamesOutcome(ListCalendarNamesResult(outcome.result()));
	else
		return ListCalendarNamesOutcome(outcome.error());
}

void SchedulerX3Client::listCalendarNamesAsync(const ListCalendarNamesRequest& request, const ListCalendarNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCalendarNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListCalendarNamesOutcomeCallable SchedulerX3Client::listCalendarNamesCallable(const ListCalendarNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCalendarNamesOutcome()>>(
			[this, request]()
			{
			return this->listCalendarNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListClustersOutcome SchedulerX3Client::listClusters(const ListClustersRequest &request) const
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

void SchedulerX3Client::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListClustersOutcomeCallable SchedulerX3Client::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListExecutorsOutcome SchedulerX3Client::listExecutors(const ListExecutorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutorsOutcome(ListExecutorsResult(outcome.result()));
	else
		return ListExecutorsOutcome(outcome.error());
}

void SchedulerX3Client::listExecutorsAsync(const ListExecutorsRequest& request, const ListExecutorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListExecutorsOutcomeCallable SchedulerX3Client::listExecutorsCallable(const ListExecutorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutorsOutcome()>>(
			[this, request]()
			{
			return this->listExecutors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListJobExecutionsOutcome SchedulerX3Client::listJobExecutions(const ListJobExecutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobExecutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobExecutionsOutcome(ListJobExecutionsResult(outcome.result()));
	else
		return ListJobExecutionsOutcome(outcome.error());
}

void SchedulerX3Client::listJobExecutionsAsync(const ListJobExecutionsRequest& request, const ListJobExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobExecutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListJobExecutionsOutcomeCallable SchedulerX3Client::listJobExecutionsCallable(const ListJobExecutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobExecutionsOutcome()>>(
			[this, request]()
			{
			return this->listJobExecutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListJobsOutcome SchedulerX3Client::listJobs(const ListJobsRequest &request) const
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

void SchedulerX3Client::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListJobsOutcomeCallable SchedulerX3Client::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListLablesOutcome SchedulerX3Client::listLables(const ListLablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLablesOutcome(ListLablesResult(outcome.result()));
	else
		return ListLablesOutcome(outcome.error());
}

void SchedulerX3Client::listLablesAsync(const ListLablesRequest& request, const ListLablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListLablesOutcomeCallable SchedulerX3Client::listLablesCallable(const ListLablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLablesOutcome()>>(
			[this, request]()
			{
			return this->listLables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListRegionZoneOutcome SchedulerX3Client::listRegionZone(const ListRegionZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRegionZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRegionZoneOutcome(ListRegionZoneResult(outcome.result()));
	else
		return ListRegionZoneOutcome(outcome.error());
}

void SchedulerX3Client::listRegionZoneAsync(const ListRegionZoneRequest& request, const ListRegionZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegionZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListRegionZoneOutcomeCallable SchedulerX3Client::listRegionZoneCallable(const ListRegionZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionZoneOutcome()>>(
			[this, request]()
			{
			return this->listRegionZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListRegionsOutcome SchedulerX3Client::listRegions(const ListRegionsRequest &request) const
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

void SchedulerX3Client::listRegionsAsync(const ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListRegionsOutcomeCallable SchedulerX3Client::listRegionsCallable(const ListRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRegionsOutcome()>>(
			[this, request]()
			{
			return this->listRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListScheduleEventOutcome SchedulerX3Client::listScheduleEvent(const ListScheduleEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScheduleEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScheduleEventOutcome(ListScheduleEventResult(outcome.result()));
	else
		return ListScheduleEventOutcome(outcome.error());
}

void SchedulerX3Client::listScheduleEventAsync(const ListScheduleEventRequest& request, const ListScheduleEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScheduleEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListScheduleEventOutcomeCallable SchedulerX3Client::listScheduleEventCallable(const ListScheduleEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScheduleEventOutcome()>>(
			[this, request]()
			{
			return this->listScheduleEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::ListScheduleTimesOutcome SchedulerX3Client::listScheduleTimes(const ListScheduleTimesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScheduleTimesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScheduleTimesOutcome(ListScheduleTimesResult(outcome.result()));
	else
		return ListScheduleTimesOutcome(outcome.error());
}

void SchedulerX3Client::listScheduleTimesAsync(const ListScheduleTimesRequest& request, const ListScheduleTimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScheduleTimes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::ListScheduleTimesOutcomeCallable SchedulerX3Client::listScheduleTimesCallable(const ListScheduleTimesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScheduleTimesOutcome()>>(
			[this, request]()
			{
			return this->listScheduleTimes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::OperateDesignateExecutorsOutcome SchedulerX3Client::operateDesignateExecutors(const OperateDesignateExecutorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateDesignateExecutorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateDesignateExecutorsOutcome(OperateDesignateExecutorsResult(outcome.result()));
	else
		return OperateDesignateExecutorsOutcome(outcome.error());
}

void SchedulerX3Client::operateDesignateExecutorsAsync(const OperateDesignateExecutorsRequest& request, const OperateDesignateExecutorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateDesignateExecutors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::OperateDesignateExecutorsOutcomeCallable SchedulerX3Client::operateDesignateExecutorsCallable(const OperateDesignateExecutorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateDesignateExecutorsOutcome()>>(
			[this, request]()
			{
			return this->operateDesignateExecutors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::OperateDisableJobsOutcome SchedulerX3Client::operateDisableJobs(const OperateDisableJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateDisableJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateDisableJobsOutcome(OperateDisableJobsResult(outcome.result()));
	else
		return OperateDisableJobsOutcome(outcome.error());
}

void SchedulerX3Client::operateDisableJobsAsync(const OperateDisableJobsRequest& request, const OperateDisableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateDisableJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::OperateDisableJobsOutcomeCallable SchedulerX3Client::operateDisableJobsCallable(const OperateDisableJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateDisableJobsOutcome()>>(
			[this, request]()
			{
			return this->operateDisableJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::OperateEnableJobsOutcome SchedulerX3Client::operateEnableJobs(const OperateEnableJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateEnableJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateEnableJobsOutcome(OperateEnableJobsResult(outcome.result()));
	else
		return OperateEnableJobsOutcome(outcome.error());
}

void SchedulerX3Client::operateEnableJobsAsync(const OperateEnableJobsRequest& request, const OperateEnableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateEnableJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::OperateEnableJobsOutcomeCallable SchedulerX3Client::operateEnableJobsCallable(const OperateEnableJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateEnableJobsOutcome()>>(
			[this, request]()
			{
			return this->operateEnableJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::OperateExecuteJobOutcome SchedulerX3Client::operateExecuteJob(const OperateExecuteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateExecuteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateExecuteJobOutcome(OperateExecuteJobResult(outcome.result()));
	else
		return OperateExecuteJobOutcome(outcome.error());
}

void SchedulerX3Client::operateExecuteJobAsync(const OperateExecuteJobRequest& request, const OperateExecuteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateExecuteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::OperateExecuteJobOutcomeCallable SchedulerX3Client::operateExecuteJobCallable(const OperateExecuteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateExecuteJobOutcome()>>(
			[this, request]()
			{
			return this->operateExecuteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::OperateRerunJobOutcome SchedulerX3Client::operateRerunJob(const OperateRerunJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateRerunJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateRerunJobOutcome(OperateRerunJobResult(outcome.result()));
	else
		return OperateRerunJobOutcome(outcome.error());
}

void SchedulerX3Client::operateRerunJobAsync(const OperateRerunJobRequest& request, const OperateRerunJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateRerunJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::OperateRerunJobOutcomeCallable SchedulerX3Client::operateRerunJobCallable(const OperateRerunJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateRerunJobOutcome()>>(
			[this, request]()
			{
			return this->operateRerunJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::OperateRetryJobExecutionOutcome SchedulerX3Client::operateRetryJobExecution(const OperateRetryJobExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateRetryJobExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateRetryJobExecutionOutcome(OperateRetryJobExecutionResult(outcome.result()));
	else
		return OperateRetryJobExecutionOutcome(outcome.error());
}

void SchedulerX3Client::operateRetryJobExecutionAsync(const OperateRetryJobExecutionRequest& request, const OperateRetryJobExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateRetryJobExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::OperateRetryJobExecutionOutcomeCallable SchedulerX3Client::operateRetryJobExecutionCallable(const OperateRetryJobExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateRetryJobExecutionOutcome()>>(
			[this, request]()
			{
			return this->operateRetryJobExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::OperateStopJobExecutionOutcome SchedulerX3Client::operateStopJobExecution(const OperateStopJobExecutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateStopJobExecutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateStopJobExecutionOutcome(OperateStopJobExecutionResult(outcome.result()));
	else
		return OperateStopJobExecutionOutcome(outcome.error());
}

void SchedulerX3Client::operateStopJobExecutionAsync(const OperateStopJobExecutionRequest& request, const OperateStopJobExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateStopJobExecution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::OperateStopJobExecutionOutcomeCallable SchedulerX3Client::operateStopJobExecutionCallable(const OperateStopJobExecutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateStopJobExecutionOutcome()>>(
			[this, request]()
			{
			return this->operateStopJobExecution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::UpdateAppOutcome SchedulerX3Client::updateApp(const UpdateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppOutcome(UpdateAppResult(outcome.result()));
	else
		return UpdateAppOutcome(outcome.error());
}

void SchedulerX3Client::updateAppAsync(const UpdateAppRequest& request, const UpdateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::UpdateAppOutcomeCallable SchedulerX3Client::updateAppCallable(const UpdateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppOutcome()>>(
			[this, request]()
			{
			return this->updateApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::UpdateClusterOutcome SchedulerX3Client::updateCluster(const UpdateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterOutcome(UpdateClusterResult(outcome.result()));
	else
		return UpdateClusterOutcome(outcome.error());
}

void SchedulerX3Client::updateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::UpdateClusterOutcomeCallable SchedulerX3Client::updateClusterCallable(const UpdateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterOutcome()>>(
			[this, request]()
			{
			return this->updateCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SchedulerX3Client::UpdateJobOutcome SchedulerX3Client::updateJob(const UpdateJobRequest &request) const
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

void SchedulerX3Client::updateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SchedulerX3Client::UpdateJobOutcomeCallable SchedulerX3Client::updateJobCallable(const UpdateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJobOutcome()>>(
			[this, request]()
			{
			return this->updateJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

