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

#ifndef ALIBABACLOUD_SCHEDULERX3_SCHEDULERX3CLIENT_H_
#define ALIBABACLOUD_SCHEDULERX3_SCHEDULERX3CLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SchedulerX3Export.h"
#include "model/CreateAppRequest.h"
#include "model/CreateAppResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/DeleteAppRequest.h"
#include "model/DeleteAppResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteJobsRequest.h"
#include "model/DeleteJobsResult.h"
#include "model/ExportJobsRequest.h"
#include "model/ExportJobsResult.h"
#include "model/GetClusterRequest.h"
#include "model/GetClusterResult.h"
#include "model/GetDesigateInfoRequest.h"
#include "model/GetDesigateInfoResult.h"
#include "model/GetJobExecutionProgressRequest.h"
#include "model/GetJobExecutionProgressResult.h"
#include "model/GetLogRequest.h"
#include "model/GetLogResult.h"
#include "model/ImportCalendarRequest.h"
#include "model/ImportCalendarResult.h"
#include "model/ImportJobsRequest.h"
#include "model/ImportJobsResult.h"
#include "model/ListAlarmEventRequest.h"
#include "model/ListAlarmEventResult.h"
#include "model/ListAppNamesRequest.h"
#include "model/ListAppNamesResult.h"
#include "model/ListAppsRequest.h"
#include "model/ListAppsResult.h"
#include "model/ListCalendarNamesRequest.h"
#include "model/ListCalendarNamesResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/ListExecutorsRequest.h"
#include "model/ListExecutorsResult.h"
#include "model/ListJobExecutionsRequest.h"
#include "model/ListJobExecutionsResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListLablesRequest.h"
#include "model/ListLablesResult.h"
#include "model/ListRegionZoneRequest.h"
#include "model/ListRegionZoneResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/ListScheduleEventRequest.h"
#include "model/ListScheduleEventResult.h"
#include "model/ListScheduleTimesRequest.h"
#include "model/ListScheduleTimesResult.h"
#include "model/OperateDesignateExecutorsRequest.h"
#include "model/OperateDesignateExecutorsResult.h"
#include "model/OperateDisableJobsRequest.h"
#include "model/OperateDisableJobsResult.h"
#include "model/OperateEnableJobsRequest.h"
#include "model/OperateEnableJobsResult.h"
#include "model/OperateExecuteJobRequest.h"
#include "model/OperateExecuteJobResult.h"
#include "model/OperateRerunJobRequest.h"
#include "model/OperateRerunJobResult.h"
#include "model/OperateRetryJobExecutionRequest.h"
#include "model/OperateRetryJobExecutionResult.h"
#include "model/OperateStopJobExecutionRequest.h"
#include "model/OperateStopJobExecutionResult.h"
#include "model/UpdateAppRequest.h"
#include "model/UpdateAppResult.h"
#include "model/UpdateClusterRequest.h"
#include "model/UpdateClusterResult.h"
#include "model/UpdateJobRequest.h"
#include "model/UpdateJobResult.h"


namespace AlibabaCloud
{
	namespace SchedulerX3
	{
		class ALIBABACLOUD_SCHEDULERX3_EXPORT SchedulerX3Client : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAppResult> CreateAppOutcome;
			typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::CreateAppRequest&, const CreateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppResult> DeleteAppOutcome;
			typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::DeleteAppRequest&, const DeleteAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobsResult> DeleteJobsOutcome;
			typedef std::future<DeleteJobsOutcome> DeleteJobsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::DeleteJobsRequest&, const DeleteJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobsAsyncHandler;
			typedef Outcome<Error, Model::ExportJobsResult> ExportJobsOutcome;
			typedef std::future<ExportJobsOutcome> ExportJobsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ExportJobsRequest&, const ExportJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportJobsAsyncHandler;
			typedef Outcome<Error, Model::GetClusterResult> GetClusterOutcome;
			typedef std::future<GetClusterOutcome> GetClusterOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::GetClusterRequest&, const GetClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterAsyncHandler;
			typedef Outcome<Error, Model::GetDesigateInfoResult> GetDesigateInfoOutcome;
			typedef std::future<GetDesigateInfoOutcome> GetDesigateInfoOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::GetDesigateInfoRequest&, const GetDesigateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDesigateInfoAsyncHandler;
			typedef Outcome<Error, Model::GetJobExecutionProgressResult> GetJobExecutionProgressOutcome;
			typedef std::future<GetJobExecutionProgressOutcome> GetJobExecutionProgressOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::GetJobExecutionProgressRequest&, const GetJobExecutionProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobExecutionProgressAsyncHandler;
			typedef Outcome<Error, Model::GetLogResult> GetLogOutcome;
			typedef std::future<GetLogOutcome> GetLogOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::GetLogRequest&, const GetLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLogAsyncHandler;
			typedef Outcome<Error, Model::ImportCalendarResult> ImportCalendarOutcome;
			typedef std::future<ImportCalendarOutcome> ImportCalendarOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ImportCalendarRequest&, const ImportCalendarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportCalendarAsyncHandler;
			typedef Outcome<Error, Model::ImportJobsResult> ImportJobsOutcome;
			typedef std::future<ImportJobsOutcome> ImportJobsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ImportJobsRequest&, const ImportJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportJobsAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmEventResult> ListAlarmEventOutcome;
			typedef std::future<ListAlarmEventOutcome> ListAlarmEventOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListAlarmEventRequest&, const ListAlarmEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmEventAsyncHandler;
			typedef Outcome<Error, Model::ListAppNamesResult> ListAppNamesOutcome;
			typedef std::future<ListAppNamesOutcome> ListAppNamesOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListAppNamesRequest&, const ListAppNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppNamesAsyncHandler;
			typedef Outcome<Error, Model::ListAppsResult> ListAppsOutcome;
			typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListAppsRequest&, const ListAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppsAsyncHandler;
			typedef Outcome<Error, Model::ListCalendarNamesResult> ListCalendarNamesOutcome;
			typedef std::future<ListCalendarNamesOutcome> ListCalendarNamesOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListCalendarNamesRequest&, const ListCalendarNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCalendarNamesAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::ListExecutorsResult> ListExecutorsOutcome;
			typedef std::future<ListExecutorsOutcome> ListExecutorsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListExecutorsRequest&, const ListExecutorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutorsAsyncHandler;
			typedef Outcome<Error, Model::ListJobExecutionsResult> ListJobExecutionsOutcome;
			typedef std::future<ListJobExecutionsOutcome> ListJobExecutionsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListJobExecutionsRequest&, const ListJobExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobExecutionsAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListLablesResult> ListLablesOutcome;
			typedef std::future<ListLablesOutcome> ListLablesOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListLablesRequest&, const ListLablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLablesAsyncHandler;
			typedef Outcome<Error, Model::ListRegionZoneResult> ListRegionZoneOutcome;
			typedef std::future<ListRegionZoneOutcome> ListRegionZoneOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListRegionZoneRequest&, const ListRegionZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionZoneAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListScheduleEventResult> ListScheduleEventOutcome;
			typedef std::future<ListScheduleEventOutcome> ListScheduleEventOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListScheduleEventRequest&, const ListScheduleEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScheduleEventAsyncHandler;
			typedef Outcome<Error, Model::ListScheduleTimesResult> ListScheduleTimesOutcome;
			typedef std::future<ListScheduleTimesOutcome> ListScheduleTimesOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::ListScheduleTimesRequest&, const ListScheduleTimesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScheduleTimesAsyncHandler;
			typedef Outcome<Error, Model::OperateDesignateExecutorsResult> OperateDesignateExecutorsOutcome;
			typedef std::future<OperateDesignateExecutorsOutcome> OperateDesignateExecutorsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::OperateDesignateExecutorsRequest&, const OperateDesignateExecutorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateDesignateExecutorsAsyncHandler;
			typedef Outcome<Error, Model::OperateDisableJobsResult> OperateDisableJobsOutcome;
			typedef std::future<OperateDisableJobsOutcome> OperateDisableJobsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::OperateDisableJobsRequest&, const OperateDisableJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateDisableJobsAsyncHandler;
			typedef Outcome<Error, Model::OperateEnableJobsResult> OperateEnableJobsOutcome;
			typedef std::future<OperateEnableJobsOutcome> OperateEnableJobsOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::OperateEnableJobsRequest&, const OperateEnableJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateEnableJobsAsyncHandler;
			typedef Outcome<Error, Model::OperateExecuteJobResult> OperateExecuteJobOutcome;
			typedef std::future<OperateExecuteJobOutcome> OperateExecuteJobOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::OperateExecuteJobRequest&, const OperateExecuteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateExecuteJobAsyncHandler;
			typedef Outcome<Error, Model::OperateRerunJobResult> OperateRerunJobOutcome;
			typedef std::future<OperateRerunJobOutcome> OperateRerunJobOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::OperateRerunJobRequest&, const OperateRerunJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateRerunJobAsyncHandler;
			typedef Outcome<Error, Model::OperateRetryJobExecutionResult> OperateRetryJobExecutionOutcome;
			typedef std::future<OperateRetryJobExecutionOutcome> OperateRetryJobExecutionOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::OperateRetryJobExecutionRequest&, const OperateRetryJobExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateRetryJobExecutionAsyncHandler;
			typedef Outcome<Error, Model::OperateStopJobExecutionResult> OperateStopJobExecutionOutcome;
			typedef std::future<OperateStopJobExecutionOutcome> OperateStopJobExecutionOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::OperateStopJobExecutionRequest&, const OperateStopJobExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateStopJobExecutionAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppResult> UpdateAppOutcome;
			typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::UpdateAppRequest&, const UpdateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterResult> UpdateClusterOutcome;
			typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::UpdateClusterRequest&, const UpdateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterAsyncHandler;
			typedef Outcome<Error, Model::UpdateJobResult> UpdateJobOutcome;
			typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
			typedef std::function<void(const SchedulerX3Client*, const Model::UpdateJobRequest&, const UpdateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobAsyncHandler;

			SchedulerX3Client(const Credentials &credentials, const ClientConfiguration &configuration);
			SchedulerX3Client(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SchedulerX3Client(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SchedulerX3Client();
			CreateAppOutcome createApp(const Model::CreateAppRequest &request)const;
			void createAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppOutcomeCallable createAppCallable(const Model::CreateAppRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			DeleteAppOutcome deleteApp(const Model::DeleteAppRequest &request)const;
			void deleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppOutcomeCallable deleteAppCallable(const Model::DeleteAppRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteJobsOutcome deleteJobs(const Model::DeleteJobsRequest &request)const;
			void deleteJobsAsync(const Model::DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobsOutcomeCallable deleteJobsCallable(const Model::DeleteJobsRequest& request) const;
			ExportJobsOutcome exportJobs(const Model::ExportJobsRequest &request)const;
			void exportJobsAsync(const Model::ExportJobsRequest& request, const ExportJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportJobsOutcomeCallable exportJobsCallable(const Model::ExportJobsRequest& request) const;
			GetClusterOutcome getCluster(const Model::GetClusterRequest &request)const;
			void getClusterAsync(const Model::GetClusterRequest& request, const GetClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterOutcomeCallable getClusterCallable(const Model::GetClusterRequest& request) const;
			GetDesigateInfoOutcome getDesigateInfo(const Model::GetDesigateInfoRequest &request)const;
			void getDesigateInfoAsync(const Model::GetDesigateInfoRequest& request, const GetDesigateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDesigateInfoOutcomeCallable getDesigateInfoCallable(const Model::GetDesigateInfoRequest& request) const;
			GetJobExecutionProgressOutcome getJobExecutionProgress(const Model::GetJobExecutionProgressRequest &request)const;
			void getJobExecutionProgressAsync(const Model::GetJobExecutionProgressRequest& request, const GetJobExecutionProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobExecutionProgressOutcomeCallable getJobExecutionProgressCallable(const Model::GetJobExecutionProgressRequest& request) const;
			GetLogOutcome getLog(const Model::GetLogRequest &request)const;
			void getLogAsync(const Model::GetLogRequest& request, const GetLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLogOutcomeCallable getLogCallable(const Model::GetLogRequest& request) const;
			ImportCalendarOutcome importCalendar(const Model::ImportCalendarRequest &request)const;
			void importCalendarAsync(const Model::ImportCalendarRequest& request, const ImportCalendarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportCalendarOutcomeCallable importCalendarCallable(const Model::ImportCalendarRequest& request) const;
			ImportJobsOutcome importJobs(const Model::ImportJobsRequest &request)const;
			void importJobsAsync(const Model::ImportJobsRequest& request, const ImportJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportJobsOutcomeCallable importJobsCallable(const Model::ImportJobsRequest& request) const;
			ListAlarmEventOutcome listAlarmEvent(const Model::ListAlarmEventRequest &request)const;
			void listAlarmEventAsync(const Model::ListAlarmEventRequest& request, const ListAlarmEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlarmEventOutcomeCallable listAlarmEventCallable(const Model::ListAlarmEventRequest& request) const;
			ListAppNamesOutcome listAppNames(const Model::ListAppNamesRequest &request)const;
			void listAppNamesAsync(const Model::ListAppNamesRequest& request, const ListAppNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppNamesOutcomeCallable listAppNamesCallable(const Model::ListAppNamesRequest& request) const;
			ListAppsOutcome listApps(const Model::ListAppsRequest &request)const;
			void listAppsAsync(const Model::ListAppsRequest& request, const ListAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppsOutcomeCallable listAppsCallable(const Model::ListAppsRequest& request) const;
			ListCalendarNamesOutcome listCalendarNames(const Model::ListCalendarNamesRequest &request)const;
			void listCalendarNamesAsync(const Model::ListCalendarNamesRequest& request, const ListCalendarNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCalendarNamesOutcomeCallable listCalendarNamesCallable(const Model::ListCalendarNamesRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			ListExecutorsOutcome listExecutors(const Model::ListExecutorsRequest &request)const;
			void listExecutorsAsync(const Model::ListExecutorsRequest& request, const ListExecutorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutorsOutcomeCallable listExecutorsCallable(const Model::ListExecutorsRequest& request) const;
			ListJobExecutionsOutcome listJobExecutions(const Model::ListJobExecutionsRequest &request)const;
			void listJobExecutionsAsync(const Model::ListJobExecutionsRequest& request, const ListJobExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobExecutionsOutcomeCallable listJobExecutionsCallable(const Model::ListJobExecutionsRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListLablesOutcome listLables(const Model::ListLablesRequest &request)const;
			void listLablesAsync(const Model::ListLablesRequest& request, const ListLablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLablesOutcomeCallable listLablesCallable(const Model::ListLablesRequest& request) const;
			ListRegionZoneOutcome listRegionZone(const Model::ListRegionZoneRequest &request)const;
			void listRegionZoneAsync(const Model::ListRegionZoneRequest& request, const ListRegionZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionZoneOutcomeCallable listRegionZoneCallable(const Model::ListRegionZoneRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			ListScheduleEventOutcome listScheduleEvent(const Model::ListScheduleEventRequest &request)const;
			void listScheduleEventAsync(const Model::ListScheduleEventRequest& request, const ListScheduleEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScheduleEventOutcomeCallable listScheduleEventCallable(const Model::ListScheduleEventRequest& request) const;
			ListScheduleTimesOutcome listScheduleTimes(const Model::ListScheduleTimesRequest &request)const;
			void listScheduleTimesAsync(const Model::ListScheduleTimesRequest& request, const ListScheduleTimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScheduleTimesOutcomeCallable listScheduleTimesCallable(const Model::ListScheduleTimesRequest& request) const;
			OperateDesignateExecutorsOutcome operateDesignateExecutors(const Model::OperateDesignateExecutorsRequest &request)const;
			void operateDesignateExecutorsAsync(const Model::OperateDesignateExecutorsRequest& request, const OperateDesignateExecutorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateDesignateExecutorsOutcomeCallable operateDesignateExecutorsCallable(const Model::OperateDesignateExecutorsRequest& request) const;
			OperateDisableJobsOutcome operateDisableJobs(const Model::OperateDisableJobsRequest &request)const;
			void operateDisableJobsAsync(const Model::OperateDisableJobsRequest& request, const OperateDisableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateDisableJobsOutcomeCallable operateDisableJobsCallable(const Model::OperateDisableJobsRequest& request) const;
			OperateEnableJobsOutcome operateEnableJobs(const Model::OperateEnableJobsRequest &request)const;
			void operateEnableJobsAsync(const Model::OperateEnableJobsRequest& request, const OperateEnableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateEnableJobsOutcomeCallable operateEnableJobsCallable(const Model::OperateEnableJobsRequest& request) const;
			OperateExecuteJobOutcome operateExecuteJob(const Model::OperateExecuteJobRequest &request)const;
			void operateExecuteJobAsync(const Model::OperateExecuteJobRequest& request, const OperateExecuteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateExecuteJobOutcomeCallable operateExecuteJobCallable(const Model::OperateExecuteJobRequest& request) const;
			OperateRerunJobOutcome operateRerunJob(const Model::OperateRerunJobRequest &request)const;
			void operateRerunJobAsync(const Model::OperateRerunJobRequest& request, const OperateRerunJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateRerunJobOutcomeCallable operateRerunJobCallable(const Model::OperateRerunJobRequest& request) const;
			OperateRetryJobExecutionOutcome operateRetryJobExecution(const Model::OperateRetryJobExecutionRequest &request)const;
			void operateRetryJobExecutionAsync(const Model::OperateRetryJobExecutionRequest& request, const OperateRetryJobExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateRetryJobExecutionOutcomeCallable operateRetryJobExecutionCallable(const Model::OperateRetryJobExecutionRequest& request) const;
			OperateStopJobExecutionOutcome operateStopJobExecution(const Model::OperateStopJobExecutionRequest &request)const;
			void operateStopJobExecutionAsync(const Model::OperateStopJobExecutionRequest& request, const OperateStopJobExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateStopJobExecutionOutcomeCallable operateStopJobExecutionCallable(const Model::OperateStopJobExecutionRequest& request) const;
			UpdateAppOutcome updateApp(const Model::UpdateAppRequest &request)const;
			void updateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppOutcomeCallable updateAppCallable(const Model::UpdateAppRequest& request) const;
			UpdateClusterOutcome updateCluster(const Model::UpdateClusterRequest &request)const;
			void updateClusterAsync(const Model::UpdateClusterRequest& request, const UpdateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterOutcomeCallable updateClusterCallable(const Model::UpdateClusterRequest& request) const;
			UpdateJobOutcome updateJob(const Model::UpdateJobRequest &request)const;
			void updateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJobOutcomeCallable updateJobCallable(const Model::UpdateJobRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SCHEDULERX3_SCHEDULERX3CLIENT_H_
