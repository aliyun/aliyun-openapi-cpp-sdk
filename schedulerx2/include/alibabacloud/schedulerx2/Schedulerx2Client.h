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

#ifndef ALIBABACLOUD_SCHEDULERX2_SCHEDULERX2CLIENT_H_
#define ALIBABACLOUD_SCHEDULERX2_SCHEDULERX2CLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Schedulerx2Export.h"
#include "model/BatchDeleteJobsRequest.h"
#include "model/BatchDeleteJobsResult.h"
#include "model/BatchDeleteRouteStrategyRequest.h"
#include "model/BatchDeleteRouteStrategyResult.h"
#include "model/BatchDisableJobsRequest.h"
#include "model/BatchDisableJobsResult.h"
#include "model/BatchEnableJobsRequest.h"
#include "model/BatchEnableJobsResult.h"
#include "model/CreateAppGroupRequest.h"
#include "model/CreateAppGroupResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/CreateNamespaceRequest.h"
#include "model/CreateNamespaceResult.h"
#include "model/CreateRouteStrategyRequest.h"
#include "model/CreateRouteStrategyResult.h"
#include "model/CreateWorkflowRequest.h"
#include "model/CreateWorkflowResult.h"
#include "model/DeleteAppGroupRequest.h"
#include "model/DeleteAppGroupResult.h"
#include "model/DeleteJobRequest.h"
#include "model/DeleteJobResult.h"
#include "model/DeleteNamespaceRequest.h"
#include "model/DeleteNamespaceResult.h"
#include "model/DeleteRouteStrategyRequest.h"
#include "model/DeleteRouteStrategyResult.h"
#include "model/DeleteWorkflowRequest.h"
#include "model/DeleteWorkflowResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DesignateWorkersRequest.h"
#include "model/DesignateWorkersResult.h"
#include "model/DisableJobRequest.h"
#include "model/DisableJobResult.h"
#include "model/DisableWorkflowRequest.h"
#include "model/DisableWorkflowResult.h"
#include "model/EnableJobRequest.h"
#include "model/EnableJobResult.h"
#include "model/EnableWorkflowRequest.h"
#include "model/EnableWorkflowResult.h"
#include "model/ExecuteJobRequest.h"
#include "model/ExecuteJobResult.h"
#include "model/ExecuteWorkflowRequest.h"
#include "model/ExecuteWorkflowResult.h"
#include "model/GetAppGroupRequest.h"
#include "model/GetAppGroupResult.h"
#include "model/GetJobInfoRequest.h"
#include "model/GetJobInfoResult.h"
#include "model/GetJobInstanceRequest.h"
#include "model/GetJobInstanceResult.h"
#include "model/GetJobInstanceListRequest.h"
#include "model/GetJobInstanceListResult.h"
#include "model/GetLogRequest.h"
#include "model/GetLogResult.h"
#include "model/GetOverviewRequest.h"
#include "model/GetOverviewResult.h"
#include "model/GetWorkFlowRequest.h"
#include "model/GetWorkFlowResult.h"
#include "model/GetWorkerListRequest.h"
#include "model/GetWorkerListResult.h"
#include "model/GetWorkflowInstanceRequest.h"
#include "model/GetWorkflowInstanceResult.h"
#include "model/GrantPermissionRequest.h"
#include "model/GrantPermissionResult.h"
#include "model/ListGroupsRequest.h"
#include "model/ListGroupsResult.h"
#include "model/ListJobScriptHistoryRequest.h"
#include "model/ListJobScriptHistoryResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListNamespacesRequest.h"
#include "model/ListNamespacesResult.h"
#include "model/ListWorkflowInstanceRequest.h"
#include "model/ListWorkflowInstanceResult.h"
#include "model/ReadSchedulerxDesignateDetailRequest.h"
#include "model/ReadSchedulerxDesignateDetailResult.h"
#include "model/ReadSchedulerxDesignateInfoRequest.h"
#include "model/ReadSchedulerxDesignateInfoResult.h"
#include "model/RerunJobRequest.h"
#include "model/RerunJobResult.h"
#include "model/RetryJobInstanceRequest.h"
#include "model/RetryJobInstanceResult.h"
#include "model/RevokePermissionRequest.h"
#include "model/RevokePermissionResult.h"
#include "model/SetJobInstanceSuccessRequest.h"
#include "model/SetJobInstanceSuccessResult.h"
#include "model/SetWfInstanceSuccessRequest.h"
#include "model/SetWfInstanceSuccessResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/UpdateAppGroupRequest.h"
#include "model/UpdateAppGroupResult.h"
#include "model/UpdateJobRequest.h"
#include "model/UpdateJobResult.h"
#include "model/UpdateJobScriptRequest.h"
#include "model/UpdateJobScriptResult.h"
#include "model/UpdateNamespaceRequest.h"
#include "model/UpdateNamespaceResult.h"
#include "model/UpdateWorkflowRequest.h"
#include "model/UpdateWorkflowResult.h"
#include "model/UpdateWorkflowDagRequest.h"
#include "model/UpdateWorkflowDagResult.h"


namespace AlibabaCloud
{
	namespace Schedulerx2
	{
		class ALIBABACLOUD_SCHEDULERX2_EXPORT Schedulerx2Client : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchDeleteJobsResult> BatchDeleteJobsOutcome;
			typedef std::future<BatchDeleteJobsOutcome> BatchDeleteJobsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::BatchDeleteJobsRequest&, const BatchDeleteJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteJobsAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteRouteStrategyResult> BatchDeleteRouteStrategyOutcome;
			typedef std::future<BatchDeleteRouteStrategyOutcome> BatchDeleteRouteStrategyOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::BatchDeleteRouteStrategyRequest&, const BatchDeleteRouteStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteRouteStrategyAsyncHandler;
			typedef Outcome<Error, Model::BatchDisableJobsResult> BatchDisableJobsOutcome;
			typedef std::future<BatchDisableJobsOutcome> BatchDisableJobsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::BatchDisableJobsRequest&, const BatchDisableJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDisableJobsAsyncHandler;
			typedef Outcome<Error, Model::BatchEnableJobsResult> BatchEnableJobsOutcome;
			typedef std::future<BatchEnableJobsOutcome> BatchEnableJobsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::BatchEnableJobsRequest&, const BatchEnableJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchEnableJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateAppGroupResult> CreateAppGroupOutcome;
			typedef std::future<CreateAppGroupOutcome> CreateAppGroupOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::CreateAppGroupRequest&, const CreateAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::CreateNamespaceResult> CreateNamespaceOutcome;
			typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::CreateNamespaceRequest&, const CreateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::CreateRouteStrategyResult> CreateRouteStrategyOutcome;
			typedef std::future<CreateRouteStrategyOutcome> CreateRouteStrategyOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::CreateRouteStrategyRequest&, const CreateRouteStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteStrategyAsyncHandler;
			typedef Outcome<Error, Model::CreateWorkflowResult> CreateWorkflowOutcome;
			typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::CreateWorkflowRequest&, const CreateWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkflowAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppGroupResult> DeleteAppGroupOutcome;
			typedef std::future<DeleteAppGroupOutcome> DeleteAppGroupOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DeleteAppGroupRequest&, const DeleteAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobResult> DeleteJobOutcome;
			typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DeleteJobRequest&, const DeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteNamespaceResult> DeleteNamespaceOutcome;
			typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DeleteNamespaceRequest&, const DeleteNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteStrategyResult> DeleteRouteStrategyOutcome;
			typedef std::future<DeleteRouteStrategyOutcome> DeleteRouteStrategyOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DeleteRouteStrategyRequest&, const DeleteRouteStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteStrategyAsyncHandler;
			typedef Outcome<Error, Model::DeleteWorkflowResult> DeleteWorkflowOutcome;
			typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DeleteWorkflowRequest&, const DeleteWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DesignateWorkersResult> DesignateWorkersOutcome;
			typedef std::future<DesignateWorkersOutcome> DesignateWorkersOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DesignateWorkersRequest&, const DesignateWorkersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DesignateWorkersAsyncHandler;
			typedef Outcome<Error, Model::DisableJobResult> DisableJobOutcome;
			typedef std::future<DisableJobOutcome> DisableJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DisableJobRequest&, const DisableJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableJobAsyncHandler;
			typedef Outcome<Error, Model::DisableWorkflowResult> DisableWorkflowOutcome;
			typedef std::future<DisableWorkflowOutcome> DisableWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DisableWorkflowRequest&, const DisableWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableWorkflowAsyncHandler;
			typedef Outcome<Error, Model::EnableJobResult> EnableJobOutcome;
			typedef std::future<EnableJobOutcome> EnableJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::EnableJobRequest&, const EnableJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableJobAsyncHandler;
			typedef Outcome<Error, Model::EnableWorkflowResult> EnableWorkflowOutcome;
			typedef std::future<EnableWorkflowOutcome> EnableWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::EnableWorkflowRequest&, const EnableWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableWorkflowAsyncHandler;
			typedef Outcome<Error, Model::ExecuteJobResult> ExecuteJobOutcome;
			typedef std::future<ExecuteJobOutcome> ExecuteJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ExecuteJobRequest&, const ExecuteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteJobAsyncHandler;
			typedef Outcome<Error, Model::ExecuteWorkflowResult> ExecuteWorkflowOutcome;
			typedef std::future<ExecuteWorkflowOutcome> ExecuteWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ExecuteWorkflowRequest&, const ExecuteWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteWorkflowAsyncHandler;
			typedef Outcome<Error, Model::GetAppGroupResult> GetAppGroupOutcome;
			typedef std::future<GetAppGroupOutcome> GetAppGroupOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetAppGroupRequest&, const GetAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppGroupAsyncHandler;
			typedef Outcome<Error, Model::GetJobInfoResult> GetJobInfoOutcome;
			typedef std::future<GetJobInfoOutcome> GetJobInfoOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetJobInfoRequest&, const GetJobInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobInfoAsyncHandler;
			typedef Outcome<Error, Model::GetJobInstanceResult> GetJobInstanceOutcome;
			typedef std::future<GetJobInstanceOutcome> GetJobInstanceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetJobInstanceRequest&, const GetJobInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetJobInstanceListResult> GetJobInstanceListOutcome;
			typedef std::future<GetJobInstanceListOutcome> GetJobInstanceListOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetJobInstanceListRequest&, const GetJobInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobInstanceListAsyncHandler;
			typedef Outcome<Error, Model::GetLogResult> GetLogOutcome;
			typedef std::future<GetLogOutcome> GetLogOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetLogRequest&, const GetLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLogAsyncHandler;
			typedef Outcome<Error, Model::GetOverviewResult> GetOverviewOutcome;
			typedef std::future<GetOverviewOutcome> GetOverviewOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetOverviewRequest&, const GetOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOverviewAsyncHandler;
			typedef Outcome<Error, Model::GetWorkFlowResult> GetWorkFlowOutcome;
			typedef std::future<GetWorkFlowOutcome> GetWorkFlowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetWorkFlowRequest&, const GetWorkFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkFlowAsyncHandler;
			typedef Outcome<Error, Model::GetWorkerListResult> GetWorkerListOutcome;
			typedef std::future<GetWorkerListOutcome> GetWorkerListOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetWorkerListRequest&, const GetWorkerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkerListAsyncHandler;
			typedef Outcome<Error, Model::GetWorkflowInstanceResult> GetWorkflowInstanceOutcome;
			typedef std::future<GetWorkflowInstanceOutcome> GetWorkflowInstanceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetWorkflowInstanceRequest&, const GetWorkflowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkflowInstanceAsyncHandler;
			typedef Outcome<Error, Model::GrantPermissionResult> GrantPermissionOutcome;
			typedef std::future<GrantPermissionOutcome> GrantPermissionOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GrantPermissionRequest&, const GrantPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantPermissionAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsResult> ListGroupsOutcome;
			typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ListGroupsRequest&, const ListGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListJobScriptHistoryResult> ListJobScriptHistoryOutcome;
			typedef std::future<ListJobScriptHistoryOutcome> ListJobScriptHistoryOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ListJobScriptHistoryRequest&, const ListJobScriptHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobScriptHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListNamespacesResult> ListNamespacesOutcome;
			typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ListNamespacesRequest&, const ListNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacesAsyncHandler;
			typedef Outcome<Error, Model::ListWorkflowInstanceResult> ListWorkflowInstanceOutcome;
			typedef std::future<ListWorkflowInstanceOutcome> ListWorkflowInstanceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ListWorkflowInstanceRequest&, const ListWorkflowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkflowInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReadSchedulerxDesignateDetailResult> ReadSchedulerxDesignateDetailOutcome;
			typedef std::future<ReadSchedulerxDesignateDetailOutcome> ReadSchedulerxDesignateDetailOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ReadSchedulerxDesignateDetailRequest&, const ReadSchedulerxDesignateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReadSchedulerxDesignateDetailAsyncHandler;
			typedef Outcome<Error, Model::ReadSchedulerxDesignateInfoResult> ReadSchedulerxDesignateInfoOutcome;
			typedef std::future<ReadSchedulerxDesignateInfoOutcome> ReadSchedulerxDesignateInfoOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ReadSchedulerxDesignateInfoRequest&, const ReadSchedulerxDesignateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReadSchedulerxDesignateInfoAsyncHandler;
			typedef Outcome<Error, Model::RerunJobResult> RerunJobOutcome;
			typedef std::future<RerunJobOutcome> RerunJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::RerunJobRequest&, const RerunJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RerunJobAsyncHandler;
			typedef Outcome<Error, Model::RetryJobInstanceResult> RetryJobInstanceOutcome;
			typedef std::future<RetryJobInstanceOutcome> RetryJobInstanceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::RetryJobInstanceRequest&, const RetryJobInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryJobInstanceAsyncHandler;
			typedef Outcome<Error, Model::RevokePermissionResult> RevokePermissionOutcome;
			typedef std::future<RevokePermissionOutcome> RevokePermissionOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::RevokePermissionRequest&, const RevokePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokePermissionAsyncHandler;
			typedef Outcome<Error, Model::SetJobInstanceSuccessResult> SetJobInstanceSuccessOutcome;
			typedef std::future<SetJobInstanceSuccessOutcome> SetJobInstanceSuccessOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::SetJobInstanceSuccessRequest&, const SetJobInstanceSuccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetJobInstanceSuccessAsyncHandler;
			typedef Outcome<Error, Model::SetWfInstanceSuccessResult> SetWfInstanceSuccessOutcome;
			typedef std::future<SetWfInstanceSuccessOutcome> SetWfInstanceSuccessOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::SetWfInstanceSuccessRequest&, const SetWfInstanceSuccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetWfInstanceSuccessAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppGroupResult> UpdateAppGroupOutcome;
			typedef std::future<UpdateAppGroupOutcome> UpdateAppGroupOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::UpdateAppGroupRequest&, const UpdateAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateJobResult> UpdateJobOutcome;
			typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::UpdateJobRequest&, const UpdateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateJobScriptResult> UpdateJobScriptOutcome;
			typedef std::future<UpdateJobScriptOutcome> UpdateJobScriptOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::UpdateJobScriptRequest&, const UpdateJobScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobScriptAsyncHandler;
			typedef Outcome<Error, Model::UpdateNamespaceResult> UpdateNamespaceOutcome;
			typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::UpdateNamespaceRequest&, const UpdateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkflowResult> UpdateWorkflowOutcome;
			typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::UpdateWorkflowRequest&, const UpdateWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkflowDagResult> UpdateWorkflowDagOutcome;
			typedef std::future<UpdateWorkflowDagOutcome> UpdateWorkflowDagOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::UpdateWorkflowDagRequest&, const UpdateWorkflowDagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkflowDagAsyncHandler;

			Schedulerx2Client(const Credentials &credentials, const ClientConfiguration &configuration);
			Schedulerx2Client(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Schedulerx2Client(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Schedulerx2Client();
			BatchDeleteJobsOutcome batchDeleteJobs(const Model::BatchDeleteJobsRequest &request)const;
			void batchDeleteJobsAsync(const Model::BatchDeleteJobsRequest& request, const BatchDeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteJobsOutcomeCallable batchDeleteJobsCallable(const Model::BatchDeleteJobsRequest& request) const;
			BatchDeleteRouteStrategyOutcome batchDeleteRouteStrategy(const Model::BatchDeleteRouteStrategyRequest &request)const;
			void batchDeleteRouteStrategyAsync(const Model::BatchDeleteRouteStrategyRequest& request, const BatchDeleteRouteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteRouteStrategyOutcomeCallable batchDeleteRouteStrategyCallable(const Model::BatchDeleteRouteStrategyRequest& request) const;
			BatchDisableJobsOutcome batchDisableJobs(const Model::BatchDisableJobsRequest &request)const;
			void batchDisableJobsAsync(const Model::BatchDisableJobsRequest& request, const BatchDisableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDisableJobsOutcomeCallable batchDisableJobsCallable(const Model::BatchDisableJobsRequest& request) const;
			BatchEnableJobsOutcome batchEnableJobs(const Model::BatchEnableJobsRequest &request)const;
			void batchEnableJobsAsync(const Model::BatchEnableJobsRequest& request, const BatchEnableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchEnableJobsOutcomeCallable batchEnableJobsCallable(const Model::BatchEnableJobsRequest& request) const;
			CreateAppGroupOutcome createAppGroup(const Model::CreateAppGroupRequest &request)const;
			void createAppGroupAsync(const Model::CreateAppGroupRequest& request, const CreateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppGroupOutcomeCallable createAppGroupCallable(const Model::CreateAppGroupRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			CreateNamespaceOutcome createNamespace(const Model::CreateNamespaceRequest &request)const;
			void createNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNamespaceOutcomeCallable createNamespaceCallable(const Model::CreateNamespaceRequest& request) const;
			CreateRouteStrategyOutcome createRouteStrategy(const Model::CreateRouteStrategyRequest &request)const;
			void createRouteStrategyAsync(const Model::CreateRouteStrategyRequest& request, const CreateRouteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRouteStrategyOutcomeCallable createRouteStrategyCallable(const Model::CreateRouteStrategyRequest& request) const;
			CreateWorkflowOutcome createWorkflow(const Model::CreateWorkflowRequest &request)const;
			void createWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWorkflowOutcomeCallable createWorkflowCallable(const Model::CreateWorkflowRequest& request) const;
			DeleteAppGroupOutcome deleteAppGroup(const Model::DeleteAppGroupRequest &request)const;
			void deleteAppGroupAsync(const Model::DeleteAppGroupRequest& request, const DeleteAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppGroupOutcomeCallable deleteAppGroupCallable(const Model::DeleteAppGroupRequest& request) const;
			DeleteJobOutcome deleteJob(const Model::DeleteJobRequest &request)const;
			void deleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobOutcomeCallable deleteJobCallable(const Model::DeleteJobRequest& request) const;
			DeleteNamespaceOutcome deleteNamespace(const Model::DeleteNamespaceRequest &request)const;
			void deleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNamespaceOutcomeCallable deleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;
			DeleteRouteStrategyOutcome deleteRouteStrategy(const Model::DeleteRouteStrategyRequest &request)const;
			void deleteRouteStrategyAsync(const Model::DeleteRouteStrategyRequest& request, const DeleteRouteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteStrategyOutcomeCallable deleteRouteStrategyCallable(const Model::DeleteRouteStrategyRequest& request) const;
			DeleteWorkflowOutcome deleteWorkflow(const Model::DeleteWorkflowRequest &request)const;
			void deleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWorkflowOutcomeCallable deleteWorkflowCallable(const Model::DeleteWorkflowRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DesignateWorkersOutcome designateWorkers(const Model::DesignateWorkersRequest &request)const;
			void designateWorkersAsync(const Model::DesignateWorkersRequest& request, const DesignateWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DesignateWorkersOutcomeCallable designateWorkersCallable(const Model::DesignateWorkersRequest& request) const;
			DisableJobOutcome disableJob(const Model::DisableJobRequest &request)const;
			void disableJobAsync(const Model::DisableJobRequest& request, const DisableJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableJobOutcomeCallable disableJobCallable(const Model::DisableJobRequest& request) const;
			DisableWorkflowOutcome disableWorkflow(const Model::DisableWorkflowRequest &request)const;
			void disableWorkflowAsync(const Model::DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableWorkflowOutcomeCallable disableWorkflowCallable(const Model::DisableWorkflowRequest& request) const;
			EnableJobOutcome enableJob(const Model::EnableJobRequest &request)const;
			void enableJobAsync(const Model::EnableJobRequest& request, const EnableJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableJobOutcomeCallable enableJobCallable(const Model::EnableJobRequest& request) const;
			EnableWorkflowOutcome enableWorkflow(const Model::EnableWorkflowRequest &request)const;
			void enableWorkflowAsync(const Model::EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableWorkflowOutcomeCallable enableWorkflowCallable(const Model::EnableWorkflowRequest& request) const;
			ExecuteJobOutcome executeJob(const Model::ExecuteJobRequest &request)const;
			void executeJobAsync(const Model::ExecuteJobRequest& request, const ExecuteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteJobOutcomeCallable executeJobCallable(const Model::ExecuteJobRequest& request) const;
			ExecuteWorkflowOutcome executeWorkflow(const Model::ExecuteWorkflowRequest &request)const;
			void executeWorkflowAsync(const Model::ExecuteWorkflowRequest& request, const ExecuteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteWorkflowOutcomeCallable executeWorkflowCallable(const Model::ExecuteWorkflowRequest& request) const;
			GetAppGroupOutcome getAppGroup(const Model::GetAppGroupRequest &request)const;
			void getAppGroupAsync(const Model::GetAppGroupRequest& request, const GetAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppGroupOutcomeCallable getAppGroupCallable(const Model::GetAppGroupRequest& request) const;
			GetJobInfoOutcome getJobInfo(const Model::GetJobInfoRequest &request)const;
			void getJobInfoAsync(const Model::GetJobInfoRequest& request, const GetJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobInfoOutcomeCallable getJobInfoCallable(const Model::GetJobInfoRequest& request) const;
			GetJobInstanceOutcome getJobInstance(const Model::GetJobInstanceRequest &request)const;
			void getJobInstanceAsync(const Model::GetJobInstanceRequest& request, const GetJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobInstanceOutcomeCallable getJobInstanceCallable(const Model::GetJobInstanceRequest& request) const;
			GetJobInstanceListOutcome getJobInstanceList(const Model::GetJobInstanceListRequest &request)const;
			void getJobInstanceListAsync(const Model::GetJobInstanceListRequest& request, const GetJobInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobInstanceListOutcomeCallable getJobInstanceListCallable(const Model::GetJobInstanceListRequest& request) const;
			GetLogOutcome getLog(const Model::GetLogRequest &request)const;
			void getLogAsync(const Model::GetLogRequest& request, const GetLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLogOutcomeCallable getLogCallable(const Model::GetLogRequest& request) const;
			GetOverviewOutcome getOverview(const Model::GetOverviewRequest &request)const;
			void getOverviewAsync(const Model::GetOverviewRequest& request, const GetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOverviewOutcomeCallable getOverviewCallable(const Model::GetOverviewRequest& request) const;
			GetWorkFlowOutcome getWorkFlow(const Model::GetWorkFlowRequest &request)const;
			void getWorkFlowAsync(const Model::GetWorkFlowRequest& request, const GetWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkFlowOutcomeCallable getWorkFlowCallable(const Model::GetWorkFlowRequest& request) const;
			GetWorkerListOutcome getWorkerList(const Model::GetWorkerListRequest &request)const;
			void getWorkerListAsync(const Model::GetWorkerListRequest& request, const GetWorkerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkerListOutcomeCallable getWorkerListCallable(const Model::GetWorkerListRequest& request) const;
			GetWorkflowInstanceOutcome getWorkflowInstance(const Model::GetWorkflowInstanceRequest &request)const;
			void getWorkflowInstanceAsync(const Model::GetWorkflowInstanceRequest& request, const GetWorkflowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkflowInstanceOutcomeCallable getWorkflowInstanceCallable(const Model::GetWorkflowInstanceRequest& request) const;
			GrantPermissionOutcome grantPermission(const Model::GrantPermissionRequest &request)const;
			void grantPermissionAsync(const Model::GrantPermissionRequest& request, const GrantPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantPermissionOutcomeCallable grantPermissionCallable(const Model::GrantPermissionRequest& request) const;
			ListGroupsOutcome listGroups(const Model::ListGroupsRequest &request)const;
			void listGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsOutcomeCallable listGroupsCallable(const Model::ListGroupsRequest& request) const;
			ListJobScriptHistoryOutcome listJobScriptHistory(const Model::ListJobScriptHistoryRequest &request)const;
			void listJobScriptHistoryAsync(const Model::ListJobScriptHistoryRequest& request, const ListJobScriptHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobScriptHistoryOutcomeCallable listJobScriptHistoryCallable(const Model::ListJobScriptHistoryRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListNamespacesOutcome listNamespaces(const Model::ListNamespacesRequest &request)const;
			void listNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNamespacesOutcomeCallable listNamespacesCallable(const Model::ListNamespacesRequest& request) const;
			ListWorkflowInstanceOutcome listWorkflowInstance(const Model::ListWorkflowInstanceRequest &request)const;
			void listWorkflowInstanceAsync(const Model::ListWorkflowInstanceRequest& request, const ListWorkflowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkflowInstanceOutcomeCallable listWorkflowInstanceCallable(const Model::ListWorkflowInstanceRequest& request) const;
			ReadSchedulerxDesignateDetailOutcome readSchedulerxDesignateDetail(const Model::ReadSchedulerxDesignateDetailRequest &request)const;
			void readSchedulerxDesignateDetailAsync(const Model::ReadSchedulerxDesignateDetailRequest& request, const ReadSchedulerxDesignateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReadSchedulerxDesignateDetailOutcomeCallable readSchedulerxDesignateDetailCallable(const Model::ReadSchedulerxDesignateDetailRequest& request) const;
			ReadSchedulerxDesignateInfoOutcome readSchedulerxDesignateInfo(const Model::ReadSchedulerxDesignateInfoRequest &request)const;
			void readSchedulerxDesignateInfoAsync(const Model::ReadSchedulerxDesignateInfoRequest& request, const ReadSchedulerxDesignateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReadSchedulerxDesignateInfoOutcomeCallable readSchedulerxDesignateInfoCallable(const Model::ReadSchedulerxDesignateInfoRequest& request) const;
			RerunJobOutcome rerunJob(const Model::RerunJobRequest &request)const;
			void rerunJobAsync(const Model::RerunJobRequest& request, const RerunJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RerunJobOutcomeCallable rerunJobCallable(const Model::RerunJobRequest& request) const;
			RetryJobInstanceOutcome retryJobInstance(const Model::RetryJobInstanceRequest &request)const;
			void retryJobInstanceAsync(const Model::RetryJobInstanceRequest& request, const RetryJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryJobInstanceOutcomeCallable retryJobInstanceCallable(const Model::RetryJobInstanceRequest& request) const;
			RevokePermissionOutcome revokePermission(const Model::RevokePermissionRequest &request)const;
			void revokePermissionAsync(const Model::RevokePermissionRequest& request, const RevokePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokePermissionOutcomeCallable revokePermissionCallable(const Model::RevokePermissionRequest& request) const;
			SetJobInstanceSuccessOutcome setJobInstanceSuccess(const Model::SetJobInstanceSuccessRequest &request)const;
			void setJobInstanceSuccessAsync(const Model::SetJobInstanceSuccessRequest& request, const SetJobInstanceSuccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetJobInstanceSuccessOutcomeCallable setJobInstanceSuccessCallable(const Model::SetJobInstanceSuccessRequest& request) const;
			SetWfInstanceSuccessOutcome setWfInstanceSuccess(const Model::SetWfInstanceSuccessRequest &request)const;
			void setWfInstanceSuccessAsync(const Model::SetWfInstanceSuccessRequest& request, const SetWfInstanceSuccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetWfInstanceSuccessOutcomeCallable setWfInstanceSuccessCallable(const Model::SetWfInstanceSuccessRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			UpdateAppGroupOutcome updateAppGroup(const Model::UpdateAppGroupRequest &request)const;
			void updateAppGroupAsync(const Model::UpdateAppGroupRequest& request, const UpdateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppGroupOutcomeCallable updateAppGroupCallable(const Model::UpdateAppGroupRequest& request) const;
			UpdateJobOutcome updateJob(const Model::UpdateJobRequest &request)const;
			void updateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJobOutcomeCallable updateJobCallable(const Model::UpdateJobRequest& request) const;
			UpdateJobScriptOutcome updateJobScript(const Model::UpdateJobScriptRequest &request)const;
			void updateJobScriptAsync(const Model::UpdateJobScriptRequest& request, const UpdateJobScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJobScriptOutcomeCallable updateJobScriptCallable(const Model::UpdateJobScriptRequest& request) const;
			UpdateNamespaceOutcome updateNamespace(const Model::UpdateNamespaceRequest &request)const;
			void updateNamespaceAsync(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNamespaceOutcomeCallable updateNamespaceCallable(const Model::UpdateNamespaceRequest& request) const;
			UpdateWorkflowOutcome updateWorkflow(const Model::UpdateWorkflowRequest &request)const;
			void updateWorkflowAsync(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkflowOutcomeCallable updateWorkflowCallable(const Model::UpdateWorkflowRequest& request) const;
			UpdateWorkflowDagOutcome updateWorkflowDag(const Model::UpdateWorkflowDagRequest &request)const;
			void updateWorkflowDagAsync(const Model::UpdateWorkflowDagRequest& request, const UpdateWorkflowDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkflowDagOutcomeCallable updateWorkflowDagCallable(const Model::UpdateWorkflowDagRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SCHEDULERX2_SCHEDULERX2CLIENT_H_
