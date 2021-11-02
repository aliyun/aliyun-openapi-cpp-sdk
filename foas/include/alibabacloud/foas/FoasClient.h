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

#ifndef ALIBABACLOUD_FOAS_FOASCLIENT_H_
#define ALIBABACLOUD_FOAS_FOASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "FoasExport.h"
#include "model/BatchGetInstanceRunSummaryRequest.h"
#include "model/BatchGetInstanceRunSummaryResult.h"
#include "model/BindQueueRequest.h"
#include "model/BindQueueResult.h"
#include "model/CalcPlanJsonResourceRequest.h"
#include "model/CalcPlanJsonResourceResult.h"
#include "model/CheckRawPlanJsonRequest.h"
#include "model/CheckRawPlanJsonResult.h"
#include "model/CommitJobRequest.h"
#include "model/CommitJobResult.h"
#include "model/CreateCellClusterOrderRequest.h"
#include "model/CreateCellClusterOrderResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateFolderRequest.h"
#include "model/CreateFolderResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/CreatePackageRequest.h"
#include "model/CreatePackageResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/CreateQueueRequest.h"
#include "model/CreateQueueResult.h"
#include "model/DeleteFolderRequest.h"
#include "model/DeleteFolderResult.h"
#include "model/DeleteJobRequest.h"
#include "model/DeleteJobResult.h"
#include "model/DeletePackageRequest.h"
#include "model/DeletePackageResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DeleteQueueRequest.h"
#include "model/DeleteQueueResult.h"
#include "model/DestroyClusterRequest.h"
#include "model/DestroyClusterResult.h"
#include "model/ExpandClusterRequest.h"
#include "model/ExpandClusterResult.h"
#include "model/GetClusterDetailsRequest.h"
#include "model/GetClusterDetailsResult.h"
#include "model/GetClusterEngineVersionsRequest.h"
#include "model/GetClusterEngineVersionsResult.h"
#include "model/GetClusterMetricsRequest.h"
#include "model/GetClusterMetricsResult.h"
#include "model/GetClusterQueueInfoRequest.h"
#include "model/GetClusterQueueInfoResult.h"
#include "model/GetClusterResourceRequest.h"
#include "model/GetClusterResourceResult.h"
#include "model/GetFolderRequest.h"
#include "model/GetFolderResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetInstanceCheckpointRequest.h"
#include "model/GetInstanceCheckpointResult.h"
#include "model/GetInstanceConfigRequest.h"
#include "model/GetInstanceConfigResult.h"
#include "model/GetInstanceDetailRequest.h"
#include "model/GetInstanceDetailResult.h"
#include "model/GetInstanceExceptionsRequest.h"
#include "model/GetInstanceExceptionsResult.h"
#include "model/GetInstanceFinalStateRequest.h"
#include "model/GetInstanceFinalStateResult.h"
#include "model/GetInstanceHistoryAutoScalePlanContentRequest.h"
#include "model/GetInstanceHistoryAutoScalePlanContentResult.h"
#include "model/GetInstanceHistoryAutoScalePlanListRequest.h"
#include "model/GetInstanceHistoryAutoScalePlanListResult.h"
#include "model/GetInstanceMetricRequest.h"
#include "model/GetInstanceMetricResult.h"
#include "model/GetInstanceResourceRequest.h"
#include "model/GetInstanceResourceResult.h"
#include "model/GetInstanceRunSummaryRequest.h"
#include "model/GetInstanceRunSummaryResult.h"
#include "model/GetJobRequest.h"
#include "model/GetJobResult.h"
#include "model/GetJobLatestAutoScalePlanRequest.h"
#include "model/GetJobLatestAutoScalePlanResult.h"
#include "model/GetPackageRequest.h"
#include "model/GetPackageResult.h"
#include "model/GetProjectRequest.h"
#include "model/GetProjectResult.h"
#include "model/GetRawPlanJsonRequest.h"
#include "model/GetRawPlanJsonResult.h"
#include "model/GetRefPackageJobRequest.h"
#include "model/GetRefPackageJobResult.h"
#include "model/ListChildFolderRequest.h"
#include "model/ListChildFolderResult.h"
#include "model/ListClusterRequest.h"
#include "model/ListClusterResult.h"
#include "model/ListInstanceRequest.h"
#include "model/ListInstanceResult.h"
#include "model/ListJobRequest.h"
#include "model/ListJobResult.h"
#include "model/ListPackageRequest.h"
#include "model/ListPackageResult.h"
#include "model/ListProjectRequest.h"
#include "model/ListProjectResult.h"
#include "model/ListProjectBindQueueRequest.h"
#include "model/ListProjectBindQueueResult.h"
#include "model/ListProjectBindQueueResourceRequest.h"
#include "model/ListProjectBindQueueResourceResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/MVFolderRequest.h"
#include "model/MVFolderResult.h"
#include "model/ModifyInstanceStateRequest.h"
#include "model/ModifyInstanceStateResult.h"
#include "model/ModifyMasterSpecRequest.h"
#include "model/ModifyMasterSpecResult.h"
#include "model/OfflineJobRequest.h"
#include "model/OfflineJobResult.h"
#include "model/ShrinkClusterRequest.h"
#include "model/ShrinkClusterResult.h"
#include "model/StartJobRequest.h"
#include "model/StartJobResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnbindQueueRequest.h"
#include "model/UnbindQueueResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAutoScaleConfigRequest.h"
#include "model/UpdateAutoScaleConfigResult.h"
#include "model/UpdateJobRequest.h"
#include "model/UpdateJobResult.h"
#include "model/UpdatePackageRequest.h"
#include "model/UpdatePackageResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"
#include "model/UpdateProjectConfigRequest.h"
#include "model/UpdateProjectConfigResult.h"
#include "model/UpdateQueueRequest.h"
#include "model/UpdateQueueResult.h"
#include "model/ValidateJobRequest.h"
#include "model/ValidateJobResult.h"


namespace AlibabaCloud
{
	namespace Foas
	{
		class ALIBABACLOUD_FOAS_EXPORT FoasClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchGetInstanceRunSummaryResult> BatchGetInstanceRunSummaryOutcome;
			typedef std::future<BatchGetInstanceRunSummaryOutcome> BatchGetInstanceRunSummaryOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::BatchGetInstanceRunSummaryRequest&, const BatchGetInstanceRunSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetInstanceRunSummaryAsyncHandler;
			typedef Outcome<Error, Model::BindQueueResult> BindQueueOutcome;
			typedef std::future<BindQueueOutcome> BindQueueOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::BindQueueRequest&, const BindQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindQueueAsyncHandler;
			typedef Outcome<Error, Model::CalcPlanJsonResourceResult> CalcPlanJsonResourceOutcome;
			typedef std::future<CalcPlanJsonResourceOutcome> CalcPlanJsonResourceOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CalcPlanJsonResourceRequest&, const CalcPlanJsonResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CalcPlanJsonResourceAsyncHandler;
			typedef Outcome<Error, Model::CheckRawPlanJsonResult> CheckRawPlanJsonOutcome;
			typedef std::future<CheckRawPlanJsonOutcome> CheckRawPlanJsonOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CheckRawPlanJsonRequest&, const CheckRawPlanJsonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckRawPlanJsonAsyncHandler;
			typedef Outcome<Error, Model::CommitJobResult> CommitJobOutcome;
			typedef std::future<CommitJobOutcome> CommitJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CommitJobRequest&, const CommitJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitJobAsyncHandler;
			typedef Outcome<Error, Model::CreateCellClusterOrderResult> CreateCellClusterOrderOutcome;
			typedef std::future<CreateCellClusterOrderOutcome> CreateCellClusterOrderOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CreateCellClusterOrderRequest&, const CreateCellClusterOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCellClusterOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateFolderResult> CreateFolderOutcome;
			typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CreateFolderRequest&, const CreateFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::CreatePackageResult> CreatePackageOutcome;
			typedef std::future<CreatePackageOutcome> CreatePackageOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CreatePackageRequest&, const CreatePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePackageAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateQueueResult> CreateQueueOutcome;
			typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::CreateQueueRequest&, const CreateQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQueueAsyncHandler;
			typedef Outcome<Error, Model::DeleteFolderResult> DeleteFolderOutcome;
			typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::DeleteFolderRequest&, const DeleteFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFolderAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobResult> DeleteJobOutcome;
			typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::DeleteJobRequest&, const DeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
			typedef Outcome<Error, Model::DeletePackageResult> DeletePackageOutcome;
			typedef std::future<DeletePackageOutcome> DeletePackageOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::DeletePackageRequest&, const DeletePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePackageAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteQueueResult> DeleteQueueOutcome;
			typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::DeleteQueueRequest&, const DeleteQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQueueAsyncHandler;
			typedef Outcome<Error, Model::DestroyClusterResult> DestroyClusterOutcome;
			typedef std::future<DestroyClusterOutcome> DestroyClusterOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::DestroyClusterRequest&, const DestroyClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DestroyClusterAsyncHandler;
			typedef Outcome<Error, Model::ExpandClusterResult> ExpandClusterOutcome;
			typedef std::future<ExpandClusterOutcome> ExpandClusterOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ExpandClusterRequest&, const ExpandClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExpandClusterAsyncHandler;
			typedef Outcome<Error, Model::GetClusterDetailsResult> GetClusterDetailsOutcome;
			typedef std::future<GetClusterDetailsOutcome> GetClusterDetailsOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetClusterDetailsRequest&, const GetClusterDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterDetailsAsyncHandler;
			typedef Outcome<Error, Model::GetClusterEngineVersionsResult> GetClusterEngineVersionsOutcome;
			typedef std::future<GetClusterEngineVersionsOutcome> GetClusterEngineVersionsOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetClusterEngineVersionsRequest&, const GetClusterEngineVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterEngineVersionsAsyncHandler;
			typedef Outcome<Error, Model::GetClusterMetricsResult> GetClusterMetricsOutcome;
			typedef std::future<GetClusterMetricsOutcome> GetClusterMetricsOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetClusterMetricsRequest&, const GetClusterMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterMetricsAsyncHandler;
			typedef Outcome<Error, Model::GetClusterQueueInfoResult> GetClusterQueueInfoOutcome;
			typedef std::future<GetClusterQueueInfoOutcome> GetClusterQueueInfoOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetClusterQueueInfoRequest&, const GetClusterQueueInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterQueueInfoAsyncHandler;
			typedef Outcome<Error, Model::GetClusterResourceResult> GetClusterResourceOutcome;
			typedef std::future<GetClusterResourceOutcome> GetClusterResourceOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetClusterResourceRequest&, const GetClusterResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterResourceAsyncHandler;
			typedef Outcome<Error, Model::GetFolderResult> GetFolderOutcome;
			typedef std::future<GetFolderOutcome> GetFolderOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetFolderRequest&, const GetFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFolderAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceCheckpointResult> GetInstanceCheckpointOutcome;
			typedef std::future<GetInstanceCheckpointOutcome> GetInstanceCheckpointOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceCheckpointRequest&, const GetInstanceCheckpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceCheckpointAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceConfigResult> GetInstanceConfigOutcome;
			typedef std::future<GetInstanceConfigOutcome> GetInstanceConfigOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceConfigRequest&, const GetInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceDetailResult> GetInstanceDetailOutcome;
			typedef std::future<GetInstanceDetailOutcome> GetInstanceDetailOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceDetailRequest&, const GetInstanceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceDetailAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceExceptionsResult> GetInstanceExceptionsOutcome;
			typedef std::future<GetInstanceExceptionsOutcome> GetInstanceExceptionsOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceExceptionsRequest&, const GetInstanceExceptionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceExceptionsAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceFinalStateResult> GetInstanceFinalStateOutcome;
			typedef std::future<GetInstanceFinalStateOutcome> GetInstanceFinalStateOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceFinalStateRequest&, const GetInstanceFinalStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceFinalStateAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceHistoryAutoScalePlanContentResult> GetInstanceHistoryAutoScalePlanContentOutcome;
			typedef std::future<GetInstanceHistoryAutoScalePlanContentOutcome> GetInstanceHistoryAutoScalePlanContentOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceHistoryAutoScalePlanContentRequest&, const GetInstanceHistoryAutoScalePlanContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceHistoryAutoScalePlanContentAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceHistoryAutoScalePlanListResult> GetInstanceHistoryAutoScalePlanListOutcome;
			typedef std::future<GetInstanceHistoryAutoScalePlanListOutcome> GetInstanceHistoryAutoScalePlanListOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceHistoryAutoScalePlanListRequest&, const GetInstanceHistoryAutoScalePlanListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceHistoryAutoScalePlanListAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceMetricResult> GetInstanceMetricOutcome;
			typedef std::future<GetInstanceMetricOutcome> GetInstanceMetricOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceMetricRequest&, const GetInstanceMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceMetricAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResourceResult> GetInstanceResourceOutcome;
			typedef std::future<GetInstanceResourceOutcome> GetInstanceResourceOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceResourceRequest&, const GetInstanceResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceResourceAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceRunSummaryResult> GetInstanceRunSummaryOutcome;
			typedef std::future<GetInstanceRunSummaryOutcome> GetInstanceRunSummaryOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetInstanceRunSummaryRequest&, const GetInstanceRunSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceRunSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetJobResult> GetJobOutcome;
			typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetJobRequest&, const GetJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobAsyncHandler;
			typedef Outcome<Error, Model::GetJobLatestAutoScalePlanResult> GetJobLatestAutoScalePlanOutcome;
			typedef std::future<GetJobLatestAutoScalePlanOutcome> GetJobLatestAutoScalePlanOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetJobLatestAutoScalePlanRequest&, const GetJobLatestAutoScalePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobLatestAutoScalePlanAsyncHandler;
			typedef Outcome<Error, Model::GetPackageResult> GetPackageOutcome;
			typedef std::future<GetPackageOutcome> GetPackageOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetPackageRequest&, const GetPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPackageAsyncHandler;
			typedef Outcome<Error, Model::GetProjectResult> GetProjectOutcome;
			typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetProjectRequest&, const GetProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectAsyncHandler;
			typedef Outcome<Error, Model::GetRawPlanJsonResult> GetRawPlanJsonOutcome;
			typedef std::future<GetRawPlanJsonOutcome> GetRawPlanJsonOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetRawPlanJsonRequest&, const GetRawPlanJsonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRawPlanJsonAsyncHandler;
			typedef Outcome<Error, Model::GetRefPackageJobResult> GetRefPackageJobOutcome;
			typedef std::future<GetRefPackageJobOutcome> GetRefPackageJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::GetRefPackageJobRequest&, const GetRefPackageJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRefPackageJobAsyncHandler;
			typedef Outcome<Error, Model::ListChildFolderResult> ListChildFolderOutcome;
			typedef std::future<ListChildFolderOutcome> ListChildFolderOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListChildFolderRequest&, const ListChildFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListChildFolderAsyncHandler;
			typedef Outcome<Error, Model::ListClusterResult> ListClusterOutcome;
			typedef std::future<ListClusterOutcome> ListClusterOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListClusterRequest&, const ListClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceResult> ListInstanceOutcome;
			typedef std::future<ListInstanceOutcome> ListInstanceOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListInstanceRequest&, const ListInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListJobResult> ListJobOutcome;
			typedef std::future<ListJobOutcome> ListJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListJobRequest&, const ListJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobAsyncHandler;
			typedef Outcome<Error, Model::ListPackageResult> ListPackageOutcome;
			typedef std::future<ListPackageOutcome> ListPackageOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListPackageRequest&, const ListPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPackageAsyncHandler;
			typedef Outcome<Error, Model::ListProjectResult> ListProjectOutcome;
			typedef std::future<ListProjectOutcome> ListProjectOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListProjectRequest&, const ListProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectAsyncHandler;
			typedef Outcome<Error, Model::ListProjectBindQueueResult> ListProjectBindQueueOutcome;
			typedef std::future<ListProjectBindQueueOutcome> ListProjectBindQueueOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListProjectBindQueueRequest&, const ListProjectBindQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectBindQueueAsyncHandler;
			typedef Outcome<Error, Model::ListProjectBindQueueResourceResult> ListProjectBindQueueResourceOutcome;
			typedef std::future<ListProjectBindQueueResourceOutcome> ListProjectBindQueueResourceOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListProjectBindQueueResourceRequest&, const ListProjectBindQueueResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectBindQueueResourceAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::MVFolderResult> MVFolderOutcome;
			typedef std::future<MVFolderOutcome> MVFolderOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::MVFolderRequest&, const MVFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MVFolderAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceStateResult> ModifyInstanceStateOutcome;
			typedef std::future<ModifyInstanceStateOutcome> ModifyInstanceStateOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ModifyInstanceStateRequest&, const ModifyInstanceStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceStateAsyncHandler;
			typedef Outcome<Error, Model::ModifyMasterSpecResult> ModifyMasterSpecOutcome;
			typedef std::future<ModifyMasterSpecOutcome> ModifyMasterSpecOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ModifyMasterSpecRequest&, const ModifyMasterSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMasterSpecAsyncHandler;
			typedef Outcome<Error, Model::OfflineJobResult> OfflineJobOutcome;
			typedef std::future<OfflineJobOutcome> OfflineJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::OfflineJobRequest&, const OfflineJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OfflineJobAsyncHandler;
			typedef Outcome<Error, Model::ShrinkClusterResult> ShrinkClusterOutcome;
			typedef std::future<ShrinkClusterOutcome> ShrinkClusterOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ShrinkClusterRequest&, const ShrinkClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShrinkClusterAsyncHandler;
			typedef Outcome<Error, Model::StartJobResult> StartJobOutcome;
			typedef std::future<StartJobOutcome> StartJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::StartJobRequest&, const StartJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartJobAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnbindQueueResult> UnbindQueueOutcome;
			typedef std::future<UnbindQueueOutcome> UnbindQueueOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::UnbindQueueRequest&, const UnbindQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindQueueAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAutoScaleConfigResult> UpdateAutoScaleConfigOutcome;
			typedef std::future<UpdateAutoScaleConfigOutcome> UpdateAutoScaleConfigOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::UpdateAutoScaleConfigRequest&, const UpdateAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateJobResult> UpdateJobOutcome;
			typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::UpdateJobRequest&, const UpdateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobAsyncHandler;
			typedef Outcome<Error, Model::UpdatePackageResult> UpdatePackageOutcome;
			typedef std::future<UpdatePackageOutcome> UpdatePackageOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::UpdatePackageRequest&, const UpdatePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePackageAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectConfigResult> UpdateProjectConfigOutcome;
			typedef std::future<UpdateProjectConfigOutcome> UpdateProjectConfigOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::UpdateProjectConfigRequest&, const UpdateProjectConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateQueueResult> UpdateQueueOutcome;
			typedef std::future<UpdateQueueOutcome> UpdateQueueOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::UpdateQueueRequest&, const UpdateQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateQueueAsyncHandler;
			typedef Outcome<Error, Model::ValidateJobResult> ValidateJobOutcome;
			typedef std::future<ValidateJobOutcome> ValidateJobOutcomeCallable;
			typedef std::function<void(const FoasClient*, const Model::ValidateJobRequest&, const ValidateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateJobAsyncHandler;

			FoasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FoasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FoasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FoasClient();
			BatchGetInstanceRunSummaryOutcome batchGetInstanceRunSummary(const Model::BatchGetInstanceRunSummaryRequest &request)const;
			void batchGetInstanceRunSummaryAsync(const Model::BatchGetInstanceRunSummaryRequest& request, const BatchGetInstanceRunSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetInstanceRunSummaryOutcomeCallable batchGetInstanceRunSummaryCallable(const Model::BatchGetInstanceRunSummaryRequest& request) const;
			BindQueueOutcome bindQueue(const Model::BindQueueRequest &request)const;
			void bindQueueAsync(const Model::BindQueueRequest& request, const BindQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindQueueOutcomeCallable bindQueueCallable(const Model::BindQueueRequest& request) const;
			CalcPlanJsonResourceOutcome calcPlanJsonResource(const Model::CalcPlanJsonResourceRequest &request)const;
			void calcPlanJsonResourceAsync(const Model::CalcPlanJsonResourceRequest& request, const CalcPlanJsonResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CalcPlanJsonResourceOutcomeCallable calcPlanJsonResourceCallable(const Model::CalcPlanJsonResourceRequest& request) const;
			CheckRawPlanJsonOutcome checkRawPlanJson(const Model::CheckRawPlanJsonRequest &request)const;
			void checkRawPlanJsonAsync(const Model::CheckRawPlanJsonRequest& request, const CheckRawPlanJsonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckRawPlanJsonOutcomeCallable checkRawPlanJsonCallable(const Model::CheckRawPlanJsonRequest& request) const;
			CommitJobOutcome commitJob(const Model::CommitJobRequest &request)const;
			void commitJobAsync(const Model::CommitJobRequest& request, const CommitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitJobOutcomeCallable commitJobCallable(const Model::CommitJobRequest& request) const;
			CreateCellClusterOrderOutcome createCellClusterOrder(const Model::CreateCellClusterOrderRequest &request)const;
			void createCellClusterOrderAsync(const Model::CreateCellClusterOrderRequest& request, const CreateCellClusterOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCellClusterOrderOutcomeCallable createCellClusterOrderCallable(const Model::CreateCellClusterOrderRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateFolderOutcome createFolder(const Model::CreateFolderRequest &request)const;
			void createFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFolderOutcomeCallable createFolderCallable(const Model::CreateFolderRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			CreatePackageOutcome createPackage(const Model::CreatePackageRequest &request)const;
			void createPackageAsync(const Model::CreatePackageRequest& request, const CreatePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePackageOutcomeCallable createPackageCallable(const Model::CreatePackageRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			CreateQueueOutcome createQueue(const Model::CreateQueueRequest &request)const;
			void createQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQueueOutcomeCallable createQueueCallable(const Model::CreateQueueRequest& request) const;
			DeleteFolderOutcome deleteFolder(const Model::DeleteFolderRequest &request)const;
			void deleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFolderOutcomeCallable deleteFolderCallable(const Model::DeleteFolderRequest& request) const;
			DeleteJobOutcome deleteJob(const Model::DeleteJobRequest &request)const;
			void deleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobOutcomeCallable deleteJobCallable(const Model::DeleteJobRequest& request) const;
			DeletePackageOutcome deletePackage(const Model::DeletePackageRequest &request)const;
			void deletePackageAsync(const Model::DeletePackageRequest& request, const DeletePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePackageOutcomeCallable deletePackageCallable(const Model::DeletePackageRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DeleteQueueOutcome deleteQueue(const Model::DeleteQueueRequest &request)const;
			void deleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQueueOutcomeCallable deleteQueueCallable(const Model::DeleteQueueRequest& request) const;
			DestroyClusterOutcome destroyCluster(const Model::DestroyClusterRequest &request)const;
			void destroyClusterAsync(const Model::DestroyClusterRequest& request, const DestroyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DestroyClusterOutcomeCallable destroyClusterCallable(const Model::DestroyClusterRequest& request) const;
			ExpandClusterOutcome expandCluster(const Model::ExpandClusterRequest &request)const;
			void expandClusterAsync(const Model::ExpandClusterRequest& request, const ExpandClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExpandClusterOutcomeCallable expandClusterCallable(const Model::ExpandClusterRequest& request) const;
			GetClusterDetailsOutcome getClusterDetails(const Model::GetClusterDetailsRequest &request)const;
			void getClusterDetailsAsync(const Model::GetClusterDetailsRequest& request, const GetClusterDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterDetailsOutcomeCallable getClusterDetailsCallable(const Model::GetClusterDetailsRequest& request) const;
			GetClusterEngineVersionsOutcome getClusterEngineVersions(const Model::GetClusterEngineVersionsRequest &request)const;
			void getClusterEngineVersionsAsync(const Model::GetClusterEngineVersionsRequest& request, const GetClusterEngineVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterEngineVersionsOutcomeCallable getClusterEngineVersionsCallable(const Model::GetClusterEngineVersionsRequest& request) const;
			GetClusterMetricsOutcome getClusterMetrics(const Model::GetClusterMetricsRequest &request)const;
			void getClusterMetricsAsync(const Model::GetClusterMetricsRequest& request, const GetClusterMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterMetricsOutcomeCallable getClusterMetricsCallable(const Model::GetClusterMetricsRequest& request) const;
			GetClusterQueueInfoOutcome getClusterQueueInfo(const Model::GetClusterQueueInfoRequest &request)const;
			void getClusterQueueInfoAsync(const Model::GetClusterQueueInfoRequest& request, const GetClusterQueueInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterQueueInfoOutcomeCallable getClusterQueueInfoCallable(const Model::GetClusterQueueInfoRequest& request) const;
			GetClusterResourceOutcome getClusterResource(const Model::GetClusterResourceRequest &request)const;
			void getClusterResourceAsync(const Model::GetClusterResourceRequest& request, const GetClusterResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterResourceOutcomeCallable getClusterResourceCallable(const Model::GetClusterResourceRequest& request) const;
			GetFolderOutcome getFolder(const Model::GetFolderRequest &request)const;
			void getFolderAsync(const Model::GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFolderOutcomeCallable getFolderCallable(const Model::GetFolderRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetInstanceCheckpointOutcome getInstanceCheckpoint(const Model::GetInstanceCheckpointRequest &request)const;
			void getInstanceCheckpointAsync(const Model::GetInstanceCheckpointRequest& request, const GetInstanceCheckpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceCheckpointOutcomeCallable getInstanceCheckpointCallable(const Model::GetInstanceCheckpointRequest& request) const;
			GetInstanceConfigOutcome getInstanceConfig(const Model::GetInstanceConfigRequest &request)const;
			void getInstanceConfigAsync(const Model::GetInstanceConfigRequest& request, const GetInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceConfigOutcomeCallable getInstanceConfigCallable(const Model::GetInstanceConfigRequest& request) const;
			GetInstanceDetailOutcome getInstanceDetail(const Model::GetInstanceDetailRequest &request)const;
			void getInstanceDetailAsync(const Model::GetInstanceDetailRequest& request, const GetInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceDetailOutcomeCallable getInstanceDetailCallable(const Model::GetInstanceDetailRequest& request) const;
			GetInstanceExceptionsOutcome getInstanceExceptions(const Model::GetInstanceExceptionsRequest &request)const;
			void getInstanceExceptionsAsync(const Model::GetInstanceExceptionsRequest& request, const GetInstanceExceptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceExceptionsOutcomeCallable getInstanceExceptionsCallable(const Model::GetInstanceExceptionsRequest& request) const;
			GetInstanceFinalStateOutcome getInstanceFinalState(const Model::GetInstanceFinalStateRequest &request)const;
			void getInstanceFinalStateAsync(const Model::GetInstanceFinalStateRequest& request, const GetInstanceFinalStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceFinalStateOutcomeCallable getInstanceFinalStateCallable(const Model::GetInstanceFinalStateRequest& request) const;
			GetInstanceHistoryAutoScalePlanContentOutcome getInstanceHistoryAutoScalePlanContent(const Model::GetInstanceHistoryAutoScalePlanContentRequest &request)const;
			void getInstanceHistoryAutoScalePlanContentAsync(const Model::GetInstanceHistoryAutoScalePlanContentRequest& request, const GetInstanceHistoryAutoScalePlanContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceHistoryAutoScalePlanContentOutcomeCallable getInstanceHistoryAutoScalePlanContentCallable(const Model::GetInstanceHistoryAutoScalePlanContentRequest& request) const;
			GetInstanceHistoryAutoScalePlanListOutcome getInstanceHistoryAutoScalePlanList(const Model::GetInstanceHistoryAutoScalePlanListRequest &request)const;
			void getInstanceHistoryAutoScalePlanListAsync(const Model::GetInstanceHistoryAutoScalePlanListRequest& request, const GetInstanceHistoryAutoScalePlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceHistoryAutoScalePlanListOutcomeCallable getInstanceHistoryAutoScalePlanListCallable(const Model::GetInstanceHistoryAutoScalePlanListRequest& request) const;
			GetInstanceMetricOutcome getInstanceMetric(const Model::GetInstanceMetricRequest &request)const;
			void getInstanceMetricAsync(const Model::GetInstanceMetricRequest& request, const GetInstanceMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceMetricOutcomeCallable getInstanceMetricCallable(const Model::GetInstanceMetricRequest& request) const;
			GetInstanceResourceOutcome getInstanceResource(const Model::GetInstanceResourceRequest &request)const;
			void getInstanceResourceAsync(const Model::GetInstanceResourceRequest& request, const GetInstanceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceResourceOutcomeCallable getInstanceResourceCallable(const Model::GetInstanceResourceRequest& request) const;
			GetInstanceRunSummaryOutcome getInstanceRunSummary(const Model::GetInstanceRunSummaryRequest &request)const;
			void getInstanceRunSummaryAsync(const Model::GetInstanceRunSummaryRequest& request, const GetInstanceRunSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceRunSummaryOutcomeCallable getInstanceRunSummaryCallable(const Model::GetInstanceRunSummaryRequest& request) const;
			GetJobOutcome getJob(const Model::GetJobRequest &request)const;
			void getJobAsync(const Model::GetJobRequest& request, const GetJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobOutcomeCallable getJobCallable(const Model::GetJobRequest& request) const;
			GetJobLatestAutoScalePlanOutcome getJobLatestAutoScalePlan(const Model::GetJobLatestAutoScalePlanRequest &request)const;
			void getJobLatestAutoScalePlanAsync(const Model::GetJobLatestAutoScalePlanRequest& request, const GetJobLatestAutoScalePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobLatestAutoScalePlanOutcomeCallable getJobLatestAutoScalePlanCallable(const Model::GetJobLatestAutoScalePlanRequest& request) const;
			GetPackageOutcome getPackage(const Model::GetPackageRequest &request)const;
			void getPackageAsync(const Model::GetPackageRequest& request, const GetPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPackageOutcomeCallable getPackageCallable(const Model::GetPackageRequest& request) const;
			GetProjectOutcome getProject(const Model::GetProjectRequest &request)const;
			void getProjectAsync(const Model::GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectOutcomeCallable getProjectCallable(const Model::GetProjectRequest& request) const;
			GetRawPlanJsonOutcome getRawPlanJson(const Model::GetRawPlanJsonRequest &request)const;
			void getRawPlanJsonAsync(const Model::GetRawPlanJsonRequest& request, const GetRawPlanJsonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRawPlanJsonOutcomeCallable getRawPlanJsonCallable(const Model::GetRawPlanJsonRequest& request) const;
			GetRefPackageJobOutcome getRefPackageJob(const Model::GetRefPackageJobRequest &request)const;
			void getRefPackageJobAsync(const Model::GetRefPackageJobRequest& request, const GetRefPackageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRefPackageJobOutcomeCallable getRefPackageJobCallable(const Model::GetRefPackageJobRequest& request) const;
			ListChildFolderOutcome listChildFolder(const Model::ListChildFolderRequest &request)const;
			void listChildFolderAsync(const Model::ListChildFolderRequest& request, const ListChildFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListChildFolderOutcomeCallable listChildFolderCallable(const Model::ListChildFolderRequest& request) const;
			ListClusterOutcome listCluster(const Model::ListClusterRequest &request)const;
			void listClusterAsync(const Model::ListClusterRequest& request, const ListClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOutcomeCallable listClusterCallable(const Model::ListClusterRequest& request) const;
			ListInstanceOutcome listInstance(const Model::ListInstanceRequest &request)const;
			void listInstanceAsync(const Model::ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceOutcomeCallable listInstanceCallable(const Model::ListInstanceRequest& request) const;
			ListJobOutcome listJob(const Model::ListJobRequest &request)const;
			void listJobAsync(const Model::ListJobRequest& request, const ListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobOutcomeCallable listJobCallable(const Model::ListJobRequest& request) const;
			ListPackageOutcome listPackage(const Model::ListPackageRequest &request)const;
			void listPackageAsync(const Model::ListPackageRequest& request, const ListPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPackageOutcomeCallable listPackageCallable(const Model::ListPackageRequest& request) const;
			ListProjectOutcome listProject(const Model::ListProjectRequest &request)const;
			void listProjectAsync(const Model::ListProjectRequest& request, const ListProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectOutcomeCallable listProjectCallable(const Model::ListProjectRequest& request) const;
			ListProjectBindQueueOutcome listProjectBindQueue(const Model::ListProjectBindQueueRequest &request)const;
			void listProjectBindQueueAsync(const Model::ListProjectBindQueueRequest& request, const ListProjectBindQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectBindQueueOutcomeCallable listProjectBindQueueCallable(const Model::ListProjectBindQueueRequest& request) const;
			ListProjectBindQueueResourceOutcome listProjectBindQueueResource(const Model::ListProjectBindQueueResourceRequest &request)const;
			void listProjectBindQueueResourceAsync(const Model::ListProjectBindQueueResourceRequest& request, const ListProjectBindQueueResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectBindQueueResourceOutcomeCallable listProjectBindQueueResourceCallable(const Model::ListProjectBindQueueResourceRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			MVFolderOutcome mVFolder(const Model::MVFolderRequest &request)const;
			void mVFolderAsync(const Model::MVFolderRequest& request, const MVFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MVFolderOutcomeCallable mVFolderCallable(const Model::MVFolderRequest& request) const;
			ModifyInstanceStateOutcome modifyInstanceState(const Model::ModifyInstanceStateRequest &request)const;
			void modifyInstanceStateAsync(const Model::ModifyInstanceStateRequest& request, const ModifyInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceStateOutcomeCallable modifyInstanceStateCallable(const Model::ModifyInstanceStateRequest& request) const;
			ModifyMasterSpecOutcome modifyMasterSpec(const Model::ModifyMasterSpecRequest &request)const;
			void modifyMasterSpecAsync(const Model::ModifyMasterSpecRequest& request, const ModifyMasterSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMasterSpecOutcomeCallable modifyMasterSpecCallable(const Model::ModifyMasterSpecRequest& request) const;
			OfflineJobOutcome offlineJob(const Model::OfflineJobRequest &request)const;
			void offlineJobAsync(const Model::OfflineJobRequest& request, const OfflineJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OfflineJobOutcomeCallable offlineJobCallable(const Model::OfflineJobRequest& request) const;
			ShrinkClusterOutcome shrinkCluster(const Model::ShrinkClusterRequest &request)const;
			void shrinkClusterAsync(const Model::ShrinkClusterRequest& request, const ShrinkClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShrinkClusterOutcomeCallable shrinkClusterCallable(const Model::ShrinkClusterRequest& request) const;
			StartJobOutcome startJob(const Model::StartJobRequest &request)const;
			void startJobAsync(const Model::StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartJobOutcomeCallable startJobCallable(const Model::StartJobRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnbindQueueOutcome unbindQueue(const Model::UnbindQueueRequest &request)const;
			void unbindQueueAsync(const Model::UnbindQueueRequest& request, const UnbindQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindQueueOutcomeCallable unbindQueueCallable(const Model::UnbindQueueRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAutoScaleConfigOutcome updateAutoScaleConfig(const Model::UpdateAutoScaleConfigRequest &request)const;
			void updateAutoScaleConfigAsync(const Model::UpdateAutoScaleConfigRequest& request, const UpdateAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAutoScaleConfigOutcomeCallable updateAutoScaleConfigCallable(const Model::UpdateAutoScaleConfigRequest& request) const;
			UpdateJobOutcome updateJob(const Model::UpdateJobRequest &request)const;
			void updateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJobOutcomeCallable updateJobCallable(const Model::UpdateJobRequest& request) const;
			UpdatePackageOutcome updatePackage(const Model::UpdatePackageRequest &request)const;
			void updatePackageAsync(const Model::UpdatePackageRequest& request, const UpdatePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePackageOutcomeCallable updatePackageCallable(const Model::UpdatePackageRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
			UpdateProjectConfigOutcome updateProjectConfig(const Model::UpdateProjectConfigRequest &request)const;
			void updateProjectConfigAsync(const Model::UpdateProjectConfigRequest& request, const UpdateProjectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectConfigOutcomeCallable updateProjectConfigCallable(const Model::UpdateProjectConfigRequest& request) const;
			UpdateQueueOutcome updateQueue(const Model::UpdateQueueRequest &request)const;
			void updateQueueAsync(const Model::UpdateQueueRequest& request, const UpdateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQueueOutcomeCallable updateQueueCallable(const Model::UpdateQueueRequest& request) const;
			ValidateJobOutcome validateJob(const Model::ValidateJobRequest &request)const;
			void validateJobAsync(const Model::ValidateJobRequest& request, const ValidateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateJobOutcomeCallable validateJobCallable(const Model::ValidateJobRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FOAS_FOASCLIENT_H_
