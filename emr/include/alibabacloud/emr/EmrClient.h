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

#ifndef ALIBABACLOUD_EMR_EMRCLIENT_H_
#define ALIBABACLOUD_EMR_EMRCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EmrExport.h"
#include "model/AddClusterServiceRequest.h"
#include "model/AddClusterServiceResult.h"
#include "model/AddScalingConfigItemV2Request.h"
#include "model/AddScalingConfigItemV2Result.h"
#include "model/CloneFlowRequest.h"
#include "model/CloneFlowResult.h"
#include "model/CloneFlowJobRequest.h"
#include "model/CloneFlowJobResult.h"
#include "model/CreateClusterTemplateRequest.h"
#include "model/CreateClusterTemplateResult.h"
#include "model/CreateClusterV2Request.h"
#include "model/CreateClusterV2Result.h"
#include "model/CreateClusterWithTemplateRequest.h"
#include "model/CreateClusterWithTemplateResult.h"
#include "model/CreateFlowRequest.h"
#include "model/CreateFlowResult.h"
#include "model/CreateFlowCategoryRequest.h"
#include "model/CreateFlowCategoryResult.h"
#include "model/CreateFlowForWebRequest.h"
#include "model/CreateFlowForWebResult.h"
#include "model/CreateFlowJobRequest.h"
#include "model/CreateFlowJobResult.h"
#include "model/CreateFlowProjectRequest.h"
#include "model/CreateFlowProjectResult.h"
#include "model/CreateFlowProjectClusterSettingRequest.h"
#include "model/CreateFlowProjectClusterSettingResult.h"
#include "model/CreateFlowProjectUserRequest.h"
#include "model/CreateFlowProjectUserResult.h"
#include "model/CreateResourcePoolRequest.h"
#include "model/CreateResourcePoolResult.h"
#include "model/CreateResourceQueueRequest.h"
#include "model/CreateResourceQueueResult.h"
#include "model/CreateScalingGroupV2Request.h"
#include "model/CreateScalingGroupV2Result.h"
#include "model/DeleteClusterTemplateRequest.h"
#include "model/DeleteClusterTemplateResult.h"
#include "model/DeleteFlowRequest.h"
#include "model/DeleteFlowResult.h"
#include "model/DeleteFlowCategoryRequest.h"
#include "model/DeleteFlowCategoryResult.h"
#include "model/DeleteFlowJobRequest.h"
#include "model/DeleteFlowJobResult.h"
#include "model/DeleteFlowProjectRequest.h"
#include "model/DeleteFlowProjectResult.h"
#include "model/DeleteFlowProjectClusterSettingRequest.h"
#include "model/DeleteFlowProjectClusterSettingResult.h"
#include "model/DeleteFlowProjectUserRequest.h"
#include "model/DeleteFlowProjectUserResult.h"
#include "model/DeleteResourcePoolRequest.h"
#include "model/DeleteResourcePoolResult.h"
#include "model/DeleteResourceQueueRequest.h"
#include "model/DeleteResourceQueueResult.h"
#include "model/DescribeClusterBasicInfoRequest.h"
#include "model/DescribeClusterBasicInfoResult.h"
#include "model/DescribeClusterOperationHostTaskLogRequest.h"
#include "model/DescribeClusterOperationHostTaskLogResult.h"
#include "model/DescribeClusterResourcePoolSchedulerTypeRequest.h"
#include "model/DescribeClusterResourcePoolSchedulerTypeResult.h"
#include "model/DescribeClusterServiceRequest.h"
#include "model/DescribeClusterServiceResult.h"
#include "model/DescribeClusterServiceConfigRequest.h"
#include "model/DescribeClusterServiceConfigResult.h"
#include "model/DescribeClusterServiceConfigTagRequest.h"
#include "model/DescribeClusterServiceConfigTagResult.h"
#include "model/DescribeClusterTemplateRequest.h"
#include "model/DescribeClusterTemplateResult.h"
#include "model/DescribeClusterV2Request.h"
#include "model/DescribeClusterV2Result.h"
#include "model/DescribeFlowRequest.h"
#include "model/DescribeFlowResult.h"
#include "model/DescribeFlowCategoryRequest.h"
#include "model/DescribeFlowCategoryResult.h"
#include "model/DescribeFlowCategoryTreeRequest.h"
#include "model/DescribeFlowCategoryTreeResult.h"
#include "model/DescribeFlowInstanceRequest.h"
#include "model/DescribeFlowInstanceResult.h"
#include "model/DescribeFlowJobRequest.h"
#include "model/DescribeFlowJobResult.h"
#include "model/DescribeFlowNodeInstanceRequest.h"
#include "model/DescribeFlowNodeInstanceResult.h"
#include "model/DescribeFlowNodeInstanceContainerLogRequest.h"
#include "model/DescribeFlowNodeInstanceContainerLogResult.h"
#include "model/DescribeFlowNodeInstanceLauncherLogRequest.h"
#include "model/DescribeFlowNodeInstanceLauncherLogResult.h"
#include "model/DescribeFlowProjectRequest.h"
#include "model/DescribeFlowProjectResult.h"
#include "model/DescribeFlowProjectClusterSettingRequest.h"
#include "model/DescribeFlowProjectClusterSettingResult.h"
#include "model/DescribeScalingConfigItemV2Request.h"
#include "model/DescribeScalingConfigItemV2Result.h"
#include "model/DescribeScalingGroupInstanceV2Request.h"
#include "model/DescribeScalingGroupInstanceV2Result.h"
#include "model/DescribeScalingGroupV2Request.h"
#include "model/DescribeScalingGroupV2Result.h"
#include "model/JoinResourceGroupRequest.h"
#include "model/JoinResourceGroupResult.h"
#include "model/KillFlowJobRequest.h"
#include "model/KillFlowJobResult.h"
#include "model/ListClusterHostRequest.h"
#include "model/ListClusterHostResult.h"
#include "model/ListClusterHostComponentRequest.h"
#include "model/ListClusterHostComponentResult.h"
#include "model/ListClusterHostGroupRequest.h"
#include "model/ListClusterHostGroupResult.h"
#include "model/ListClusterInstalledServiceRequest.h"
#include "model/ListClusterInstalledServiceResult.h"
#include "model/ListClusterOperationRequest.h"
#include "model/ListClusterOperationResult.h"
#include "model/ListClusterOperationHostRequest.h"
#include "model/ListClusterOperationHostResult.h"
#include "model/ListClusterOperationHostTaskRequest.h"
#include "model/ListClusterOperationHostTaskResult.h"
#include "model/ListClusterOperationTaskRequest.h"
#include "model/ListClusterOperationTaskResult.h"
#include "model/ListClusterServiceRequest.h"
#include "model/ListClusterServiceResult.h"
#include "model/ListClusterServiceComponentHealthInfoRequest.h"
#include "model/ListClusterServiceComponentHealthInfoResult.h"
#include "model/ListClusterServiceConfigHistoryRequest.h"
#include "model/ListClusterServiceConfigHistoryResult.h"
#include "model/ListClusterServiceQuickLinkRequest.h"
#include "model/ListClusterServiceQuickLinkResult.h"
#include "model/ListClusterTemplatesRequest.h"
#include "model/ListClusterTemplatesResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/ListEmrAvailableConfigRequest.h"
#include "model/ListEmrAvailableConfigResult.h"
#include "model/ListEmrAvailableResourceRequest.h"
#include "model/ListEmrAvailableResourceResult.h"
#include "model/ListEmrMainVersionRequest.h"
#include "model/ListEmrMainVersionResult.h"
#include "model/ListFlowRequest.h"
#include "model/ListFlowResult.h"
#include "model/ListFlowCategoryRequest.h"
#include "model/ListFlowCategoryResult.h"
#include "model/ListFlowClusterRequest.h"
#include "model/ListFlowClusterResult.h"
#include "model/ListFlowClusterAllRequest.h"
#include "model/ListFlowClusterAllResult.h"
#include "model/ListFlowClusterAllHostsRequest.h"
#include "model/ListFlowClusterAllHostsResult.h"
#include "model/ListFlowClusterHostRequest.h"
#include "model/ListFlowClusterHostResult.h"
#include "model/ListFlowInstanceRequest.h"
#include "model/ListFlowInstanceResult.h"
#include "model/ListFlowJobRequest.h"
#include "model/ListFlowJobResult.h"
#include "model/ListFlowJobHistoryRequest.h"
#include "model/ListFlowJobHistoryResult.h"
#include "model/ListFlowNodeInstanceRequest.h"
#include "model/ListFlowNodeInstanceResult.h"
#include "model/ListFlowNodeInstanceContainerStatusRequest.h"
#include "model/ListFlowNodeInstanceContainerStatusResult.h"
#include "model/ListFlowNodeSqlResultRequest.h"
#include "model/ListFlowNodeSqlResultResult.h"
#include "model/ListFlowProjectRequest.h"
#include "model/ListFlowProjectResult.h"
#include "model/ListFlowProjectClusterSettingRequest.h"
#include "model/ListFlowProjectClusterSettingResult.h"
#include "model/ListFlowProjectUserRequest.h"
#include "model/ListFlowProjectUserResult.h"
#include "model/ListResourcePoolRequest.h"
#include "model/ListResourcePoolResult.h"
#include "model/ListScalingActivityV2Request.h"
#include "model/ListScalingActivityV2Result.h"
#include "model/ListScalingConfigItemV2Request.h"
#include "model/ListScalingConfigItemV2Result.h"
#include "model/ListScalingGroupV2Request.h"
#include "model/ListScalingGroupV2Result.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyClusterNameRequest.h"
#include "model/ModifyClusterNameResult.h"
#include "model/ModifyClusterServiceConfigRequest.h"
#include "model/ModifyClusterServiceConfigResult.h"
#include "model/ModifyClusterTemplateRequest.h"
#include "model/ModifyClusterTemplateResult.h"
#include "model/ModifyFlowCategoryRequest.h"
#include "model/ModifyFlowCategoryResult.h"
#include "model/ModifyFlowForWebRequest.h"
#include "model/ModifyFlowForWebResult.h"
#include "model/ModifyFlowProjectRequest.h"
#include "model/ModifyFlowProjectResult.h"
#include "model/ModifyFlowProjectClusterSettingRequest.h"
#include "model/ModifyFlowProjectClusterSettingResult.h"
#include "model/ModifyResourcePoolRequest.h"
#include "model/ModifyResourcePoolResult.h"
#include "model/ModifyResourcePoolSchedulerTypeRequest.h"
#include "model/ModifyResourcePoolSchedulerTypeResult.h"
#include "model/ModifyResourceQueueRequest.h"
#include "model/ModifyResourceQueueResult.h"
#include "model/ModifyScalingConfigItemV2Request.h"
#include "model/ModifyScalingConfigItemV2Result.h"
#include "model/ModifyScalingGroupV2Request.h"
#include "model/ModifyScalingGroupV2Result.h"
#include "model/RefreshClusterResourcePoolRequest.h"
#include "model/RefreshClusterResourcePoolResult.h"
#include "model/ReleaseClusterRequest.h"
#include "model/ReleaseClusterResult.h"
#include "model/ReleaseClusterHostGroupRequest.h"
#include "model/ReleaseClusterHostGroupResult.h"
#include "model/RemoveScalingConfigItemV2Request.h"
#include "model/RemoveScalingConfigItemV2Result.h"
#include "model/RerunFlowRequest.h"
#include "model/RerunFlowResult.h"
#include "model/ResizeClusterV2Request.h"
#include "model/ResizeClusterV2Result.h"
#include "model/ResumeFlowRequest.h"
#include "model/ResumeFlowResult.h"
#include "model/RunClusterServiceActionRequest.h"
#include "model/RunClusterServiceActionResult.h"
#include "model/RunScalingActionV2Request.h"
#include "model/RunScalingActionV2Result.h"
#include "model/StartFlowRequest.h"
#include "model/StartFlowResult.h"
#include "model/SubmitFlowRequest.h"
#include "model/SubmitFlowResult.h"
#include "model/SubmitFlowJobRequest.h"
#include "model/SubmitFlowJobResult.h"
#include "model/SuspendFlowRequest.h"
#include "model/SuspendFlowResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Emr
	{
		class ALIBABACLOUD_EMR_EXPORT EmrClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddClusterServiceResult> AddClusterServiceOutcome;
			typedef std::future<AddClusterServiceOutcome> AddClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AddClusterServiceRequest&, const AddClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::AddScalingConfigItemV2Result> AddScalingConfigItemV2Outcome;
			typedef std::future<AddScalingConfigItemV2Outcome> AddScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AddScalingConfigItemV2Request&, const AddScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::CloneFlowResult> CloneFlowOutcome;
			typedef std::future<CloneFlowOutcome> CloneFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CloneFlowRequest&, const CloneFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneFlowAsyncHandler;
			typedef Outcome<Error, Model::CloneFlowJobResult> CloneFlowJobOutcome;
			typedef std::future<CloneFlowJobOutcome> CloneFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CloneFlowJobRequest&, const CloneFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneFlowJobAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterTemplateResult> CreateClusterTemplateOutcome;
			typedef std::future<CreateClusterTemplateOutcome> CreateClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterTemplateRequest&, const CreateClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterV2Result> CreateClusterV2Outcome;
			typedef std::future<CreateClusterV2Outcome> CreateClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterV2Request&, const CreateClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterV2AsyncHandler;
			typedef Outcome<Error, Model::CreateClusterWithTemplateResult> CreateClusterWithTemplateOutcome;
			typedef std::future<CreateClusterWithTemplateOutcome> CreateClusterWithTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterWithTemplateRequest&, const CreateClusterWithTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterWithTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowResult> CreateFlowOutcome;
			typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowRequest&, const CreateFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowCategoryResult> CreateFlowCategoryOutcome;
			typedef std::future<CreateFlowCategoryOutcome> CreateFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowCategoryRequest&, const CreateFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowForWebResult> CreateFlowForWebOutcome;
			typedef std::future<CreateFlowForWebOutcome> CreateFlowForWebOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowForWebRequest&, const CreateFlowForWebOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowForWebAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowJobResult> CreateFlowJobOutcome;
			typedef std::future<CreateFlowJobOutcome> CreateFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowJobRequest&, const CreateFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowJobAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectResult> CreateFlowProjectOutcome;
			typedef std::future<CreateFlowProjectOutcome> CreateFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectRequest&, const CreateFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectClusterSettingResult> CreateFlowProjectClusterSettingOutcome;
			typedef std::future<CreateFlowProjectClusterSettingOutcome> CreateFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectClusterSettingRequest&, const CreateFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectUserResult> CreateFlowProjectUserOutcome;
			typedef std::future<CreateFlowProjectUserOutcome> CreateFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectUserRequest&, const CreateFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::CreateResourcePoolResult> CreateResourcePoolOutcome;
			typedef std::future<CreateResourcePoolOutcome> CreateResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateResourcePoolRequest&, const CreateResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceQueueResult> CreateResourceQueueOutcome;
			typedef std::future<CreateResourceQueueOutcome> CreateResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateResourceQueueRequest&, const CreateResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingGroupV2Result> CreateScalingGroupV2Outcome;
			typedef std::future<CreateScalingGroupV2Outcome> CreateScalingGroupV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateScalingGroupV2Request&, const CreateScalingGroupV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingGroupV2AsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterTemplateResult> DeleteClusterTemplateOutcome;
			typedef std::future<DeleteClusterTemplateOutcome> DeleteClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteClusterTemplateRequest&, const DeleteClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowResult> DeleteFlowOutcome;
			typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowRequest&, const DeleteFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowCategoryResult> DeleteFlowCategoryOutcome;
			typedef std::future<DeleteFlowCategoryOutcome> DeleteFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowCategoryRequest&, const DeleteFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowJobResult> DeleteFlowJobOutcome;
			typedef std::future<DeleteFlowJobOutcome> DeleteFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowJobRequest&, const DeleteFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectResult> DeleteFlowProjectOutcome;
			typedef std::future<DeleteFlowProjectOutcome> DeleteFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectRequest&, const DeleteFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectClusterSettingResult> DeleteFlowProjectClusterSettingOutcome;
			typedef std::future<DeleteFlowProjectClusterSettingOutcome> DeleteFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectClusterSettingRequest&, const DeleteFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectUserResult> DeleteFlowProjectUserOutcome;
			typedef std::future<DeleteFlowProjectUserOutcome> DeleteFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectUserRequest&, const DeleteFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourcePoolResult> DeleteResourcePoolOutcome;
			typedef std::future<DeleteResourcePoolOutcome> DeleteResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteResourcePoolRequest&, const DeleteResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceQueueResult> DeleteResourceQueueOutcome;
			typedef std::future<DeleteResourceQueueOutcome> DeleteResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteResourceQueueRequest&, const DeleteResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterBasicInfoResult> DescribeClusterBasicInfoOutcome;
			typedef std::future<DescribeClusterBasicInfoOutcome> DescribeClusterBasicInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterBasicInfoRequest&, const DescribeClusterBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterOperationHostTaskLogResult> DescribeClusterOperationHostTaskLogOutcome;
			typedef std::future<DescribeClusterOperationHostTaskLogOutcome> DescribeClusterOperationHostTaskLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterOperationHostTaskLogRequest&, const DescribeClusterOperationHostTaskLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterOperationHostTaskLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResourcePoolSchedulerTypeResult> DescribeClusterResourcePoolSchedulerTypeOutcome;
			typedef std::future<DescribeClusterResourcePoolSchedulerTypeOutcome> DescribeClusterResourcePoolSchedulerTypeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterResourcePoolSchedulerTypeRequest&, const DescribeClusterResourcePoolSchedulerTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterResourcePoolSchedulerTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceResult> DescribeClusterServiceOutcome;
			typedef std::future<DescribeClusterServiceOutcome> DescribeClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceRequest&, const DescribeClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceConfigResult> DescribeClusterServiceConfigOutcome;
			typedef std::future<DescribeClusterServiceConfigOutcome> DescribeClusterServiceConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceConfigRequest&, const DescribeClusterServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceConfigTagResult> DescribeClusterServiceConfigTagOutcome;
			typedef std::future<DescribeClusterServiceConfigTagOutcome> DescribeClusterServiceConfigTagOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceConfigTagRequest&, const DescribeClusterServiceConfigTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceConfigTagAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterTemplateResult> DescribeClusterTemplateOutcome;
			typedef std::future<DescribeClusterTemplateOutcome> DescribeClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterTemplateRequest&, const DescribeClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterV2Result> DescribeClusterV2Outcome;
			typedef std::future<DescribeClusterV2Outcome> DescribeClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterV2Request&, const DescribeClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowResult> DescribeFlowOutcome;
			typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowRequest&, const DescribeFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowCategoryResult> DescribeFlowCategoryOutcome;
			typedef std::future<DescribeFlowCategoryOutcome> DescribeFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowCategoryRequest&, const DescribeFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowCategoryTreeResult> DescribeFlowCategoryTreeOutcome;
			typedef std::future<DescribeFlowCategoryTreeOutcome> DescribeFlowCategoryTreeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowCategoryTreeRequest&, const DescribeFlowCategoryTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowCategoryTreeAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowInstanceResult> DescribeFlowInstanceOutcome;
			typedef std::future<DescribeFlowInstanceOutcome> DescribeFlowInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowInstanceRequest&, const DescribeFlowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowJobResult> DescribeFlowJobOutcome;
			typedef std::future<DescribeFlowJobOutcome> DescribeFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowJobRequest&, const DescribeFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceResult> DescribeFlowNodeInstanceOutcome;
			typedef std::future<DescribeFlowNodeInstanceOutcome> DescribeFlowNodeInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceRequest&, const DescribeFlowNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceContainerLogResult> DescribeFlowNodeInstanceContainerLogOutcome;
			typedef std::future<DescribeFlowNodeInstanceContainerLogOutcome> DescribeFlowNodeInstanceContainerLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceContainerLogRequest&, const DescribeFlowNodeInstanceContainerLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceContainerLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceLauncherLogResult> DescribeFlowNodeInstanceLauncherLogOutcome;
			typedef std::future<DescribeFlowNodeInstanceLauncherLogOutcome> DescribeFlowNodeInstanceLauncherLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceLauncherLogRequest&, const DescribeFlowNodeInstanceLauncherLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceLauncherLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowProjectResult> DescribeFlowProjectOutcome;
			typedef std::future<DescribeFlowProjectOutcome> DescribeFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowProjectRequest&, const DescribeFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowProjectClusterSettingResult> DescribeFlowProjectClusterSettingOutcome;
			typedef std::future<DescribeFlowProjectClusterSettingOutcome> DescribeFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowProjectClusterSettingRequest&, const DescribeFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingConfigItemV2Result> DescribeScalingConfigItemV2Outcome;
			typedef std::future<DescribeScalingConfigItemV2Outcome> DescribeScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingConfigItemV2Request&, const DescribeScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingGroupInstanceV2Result> DescribeScalingGroupInstanceV2Outcome;
			typedef std::future<DescribeScalingGroupInstanceV2Outcome> DescribeScalingGroupInstanceV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingGroupInstanceV2Request&, const DescribeScalingGroupInstanceV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingGroupInstanceV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingGroupV2Result> DescribeScalingGroupV2Outcome;
			typedef std::future<DescribeScalingGroupV2Outcome> DescribeScalingGroupV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingGroupV2Request&, const DescribeScalingGroupV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingGroupV2AsyncHandler;
			typedef Outcome<Error, Model::JoinResourceGroupResult> JoinResourceGroupOutcome;
			typedef std::future<JoinResourceGroupOutcome> JoinResourceGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::JoinResourceGroupRequest&, const JoinResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::KillFlowJobResult> KillFlowJobOutcome;
			typedef std::future<KillFlowJobOutcome> KillFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::KillFlowJobRequest&, const KillFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillFlowJobAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostResult> ListClusterHostOutcome;
			typedef std::future<ListClusterHostOutcome> ListClusterHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostRequest&, const ListClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostComponentResult> ListClusterHostComponentOutcome;
			typedef std::future<ListClusterHostComponentOutcome> ListClusterHostComponentOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostComponentRequest&, const ListClusterHostComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostComponentAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostGroupResult> ListClusterHostGroupOutcome;
			typedef std::future<ListClusterHostGroupOutcome> ListClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostGroupRequest&, const ListClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::ListClusterInstalledServiceResult> ListClusterInstalledServiceOutcome;
			typedef std::future<ListClusterInstalledServiceOutcome> ListClusterInstalledServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterInstalledServiceRequest&, const ListClusterInstalledServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterInstalledServiceAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationResult> ListClusterOperationOutcome;
			typedef std::future<ListClusterOperationOutcome> ListClusterOperationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationRequest&, const ListClusterOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationHostResult> ListClusterOperationHostOutcome;
			typedef std::future<ListClusterOperationHostOutcome> ListClusterOperationHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationHostRequest&, const ListClusterOperationHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationHostAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationHostTaskResult> ListClusterOperationHostTaskOutcome;
			typedef std::future<ListClusterOperationHostTaskOutcome> ListClusterOperationHostTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationHostTaskRequest&, const ListClusterOperationHostTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationHostTaskAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationTaskResult> ListClusterOperationTaskOutcome;
			typedef std::future<ListClusterOperationTaskOutcome> ListClusterOperationTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationTaskRequest&, const ListClusterOperationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationTaskAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceResult> ListClusterServiceOutcome;
			typedef std::future<ListClusterServiceOutcome> ListClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceRequest&, const ListClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceComponentHealthInfoResult> ListClusterServiceComponentHealthInfoOutcome;
			typedef std::future<ListClusterServiceComponentHealthInfoOutcome> ListClusterServiceComponentHealthInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceComponentHealthInfoRequest&, const ListClusterServiceComponentHealthInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceComponentHealthInfoAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceConfigHistoryResult> ListClusterServiceConfigHistoryOutcome;
			typedef std::future<ListClusterServiceConfigHistoryOutcome> ListClusterServiceConfigHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceConfigHistoryRequest&, const ListClusterServiceConfigHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceConfigHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceQuickLinkResult> ListClusterServiceQuickLinkOutcome;
			typedef std::future<ListClusterServiceQuickLinkOutcome> ListClusterServiceQuickLinkOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceQuickLinkRequest&, const ListClusterServiceQuickLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceQuickLinkAsyncHandler;
			typedef Outcome<Error, Model::ListClusterTemplatesResult> ListClusterTemplatesOutcome;
			typedef std::future<ListClusterTemplatesOutcome> ListClusterTemplatesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterTemplatesRequest&, const ListClusterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::ListEmrAvailableConfigResult> ListEmrAvailableConfigOutcome;
			typedef std::future<ListEmrAvailableConfigOutcome> ListEmrAvailableConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrAvailableConfigRequest&, const ListEmrAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::ListEmrAvailableResourceResult> ListEmrAvailableResourceOutcome;
			typedef std::future<ListEmrAvailableResourceOutcome> ListEmrAvailableResourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrAvailableResourceRequest&, const ListEmrAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::ListEmrMainVersionResult> ListEmrMainVersionOutcome;
			typedef std::future<ListEmrMainVersionOutcome> ListEmrMainVersionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrMainVersionRequest&, const ListEmrMainVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrMainVersionAsyncHandler;
			typedef Outcome<Error, Model::ListFlowResult> ListFlowOutcome;
			typedef std::future<ListFlowOutcome> ListFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowRequest&, const ListFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowAsyncHandler;
			typedef Outcome<Error, Model::ListFlowCategoryResult> ListFlowCategoryOutcome;
			typedef std::future<ListFlowCategoryOutcome> ListFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowCategoryRequest&, const ListFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterResult> ListFlowClusterOutcome;
			typedef std::future<ListFlowClusterOutcome> ListFlowClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterRequest&, const ListFlowClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterAllResult> ListFlowClusterAllOutcome;
			typedef std::future<ListFlowClusterAllOutcome> ListFlowClusterAllOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterAllRequest&, const ListFlowClusterAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAllAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterAllHostsResult> ListFlowClusterAllHostsOutcome;
			typedef std::future<ListFlowClusterAllHostsOutcome> ListFlowClusterAllHostsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterAllHostsRequest&, const ListFlowClusterAllHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAllHostsAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterHostResult> ListFlowClusterHostOutcome;
			typedef std::future<ListFlowClusterHostOutcome> ListFlowClusterHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterHostRequest&, const ListFlowClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterHostAsyncHandler;
			typedef Outcome<Error, Model::ListFlowInstanceResult> ListFlowInstanceOutcome;
			typedef std::future<ListFlowInstanceOutcome> ListFlowInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowInstanceRequest&, const ListFlowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListFlowJobResult> ListFlowJobOutcome;
			typedef std::future<ListFlowJobOutcome> ListFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowJobRequest&, const ListFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowJobAsyncHandler;
			typedef Outcome<Error, Model::ListFlowJobHistoryResult> ListFlowJobHistoryOutcome;
			typedef std::future<ListFlowJobHistoryOutcome> ListFlowJobHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowJobHistoryRequest&, const ListFlowJobHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowJobHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeInstanceResult> ListFlowNodeInstanceOutcome;
			typedef std::future<ListFlowNodeInstanceOutcome> ListFlowNodeInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeInstanceRequest&, const ListFlowNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeInstanceContainerStatusResult> ListFlowNodeInstanceContainerStatusOutcome;
			typedef std::future<ListFlowNodeInstanceContainerStatusOutcome> ListFlowNodeInstanceContainerStatusOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeInstanceContainerStatusRequest&, const ListFlowNodeInstanceContainerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeInstanceContainerStatusAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeSqlResultResult> ListFlowNodeSqlResultOutcome;
			typedef std::future<ListFlowNodeSqlResultOutcome> ListFlowNodeSqlResultOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeSqlResultRequest&, const ListFlowNodeSqlResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeSqlResultAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectResult> ListFlowProjectOutcome;
			typedef std::future<ListFlowProjectOutcome> ListFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectRequest&, const ListFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectClusterSettingResult> ListFlowProjectClusterSettingOutcome;
			typedef std::future<ListFlowProjectClusterSettingOutcome> ListFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectClusterSettingRequest&, const ListFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectUserResult> ListFlowProjectUserOutcome;
			typedef std::future<ListFlowProjectUserOutcome> ListFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectUserRequest&, const ListFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::ListResourcePoolResult> ListResourcePoolOutcome;
			typedef std::future<ListResourcePoolOutcome> ListResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListResourcePoolRequest&, const ListResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ListScalingActivityV2Result> ListScalingActivityV2Outcome;
			typedef std::future<ListScalingActivityV2Outcome> ListScalingActivityV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingActivityV2Request&, const ListScalingActivityV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingActivityV2AsyncHandler;
			typedef Outcome<Error, Model::ListScalingConfigItemV2Result> ListScalingConfigItemV2Outcome;
			typedef std::future<ListScalingConfigItemV2Outcome> ListScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingConfigItemV2Request&, const ListScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::ListScalingGroupV2Result> ListScalingGroupV2Outcome;
			typedef std::future<ListScalingGroupV2Outcome> ListScalingGroupV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingGroupV2Request&, const ListScalingGroupV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingGroupV2AsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterNameResult> ModifyClusterNameOutcome;
			typedef std::future<ModifyClusterNameOutcome> ModifyClusterNameOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterNameRequest&, const ModifyClusterNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterServiceConfigResult> ModifyClusterServiceConfigOutcome;
			typedef std::future<ModifyClusterServiceConfigOutcome> ModifyClusterServiceConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterServiceConfigRequest&, const ModifyClusterServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterTemplateResult> ModifyClusterTemplateOutcome;
			typedef std::future<ModifyClusterTemplateOutcome> ModifyClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterTemplateRequest&, const ModifyClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowCategoryResult> ModifyFlowCategoryOutcome;
			typedef std::future<ModifyFlowCategoryOutcome> ModifyFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowCategoryRequest&, const ModifyFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowForWebResult> ModifyFlowForWebOutcome;
			typedef std::future<ModifyFlowForWebOutcome> ModifyFlowForWebOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowForWebRequest&, const ModifyFlowForWebOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowForWebAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowProjectResult> ModifyFlowProjectOutcome;
			typedef std::future<ModifyFlowProjectOutcome> ModifyFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowProjectRequest&, const ModifyFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowProjectClusterSettingResult> ModifyFlowProjectClusterSettingOutcome;
			typedef std::future<ModifyFlowProjectClusterSettingOutcome> ModifyFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowProjectClusterSettingRequest&, const ModifyFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourcePoolResult> ModifyResourcePoolOutcome;
			typedef std::future<ModifyResourcePoolOutcome> ModifyResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourcePoolRequest&, const ModifyResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourcePoolSchedulerTypeResult> ModifyResourcePoolSchedulerTypeOutcome;
			typedef std::future<ModifyResourcePoolSchedulerTypeOutcome> ModifyResourcePoolSchedulerTypeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourcePoolSchedulerTypeRequest&, const ModifyResourcePoolSchedulerTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePoolSchedulerTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourceQueueResult> ModifyResourceQueueOutcome;
			typedef std::future<ModifyResourceQueueOutcome> ModifyResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourceQueueRequest&, const ModifyResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingConfigItemV2Result> ModifyScalingConfigItemV2Outcome;
			typedef std::future<ModifyScalingConfigItemV2Outcome> ModifyScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyScalingConfigItemV2Request&, const ModifyScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingGroupV2Result> ModifyScalingGroupV2Outcome;
			typedef std::future<ModifyScalingGroupV2Outcome> ModifyScalingGroupV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyScalingGroupV2Request&, const ModifyScalingGroupV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingGroupV2AsyncHandler;
			typedef Outcome<Error, Model::RefreshClusterResourcePoolResult> RefreshClusterResourcePoolOutcome;
			typedef std::future<RefreshClusterResourcePoolOutcome> RefreshClusterResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RefreshClusterResourcePoolRequest&, const RefreshClusterResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshClusterResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterResult> ReleaseClusterOutcome;
			typedef std::future<ReleaseClusterOutcome> ReleaseClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseClusterRequest&, const ReleaseClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterHostGroupResult> ReleaseClusterHostGroupOutcome;
			typedef std::future<ReleaseClusterHostGroupOutcome> ReleaseClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseClusterHostGroupRequest&, const ReleaseClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveScalingConfigItemV2Result> RemoveScalingConfigItemV2Outcome;
			typedef std::future<RemoveScalingConfigItemV2Outcome> RemoveScalingConfigItemV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RemoveScalingConfigItemV2Request&, const RemoveScalingConfigItemV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveScalingConfigItemV2AsyncHandler;
			typedef Outcome<Error, Model::RerunFlowResult> RerunFlowOutcome;
			typedef std::future<RerunFlowOutcome> RerunFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RerunFlowRequest&, const RerunFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RerunFlowAsyncHandler;
			typedef Outcome<Error, Model::ResizeClusterV2Result> ResizeClusterV2Outcome;
			typedef std::future<ResizeClusterV2Outcome> ResizeClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResizeClusterV2Request&, const ResizeClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeClusterV2AsyncHandler;
			typedef Outcome<Error, Model::ResumeFlowResult> ResumeFlowOutcome;
			typedef std::future<ResumeFlowOutcome> ResumeFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResumeFlowRequest&, const ResumeFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeFlowAsyncHandler;
			typedef Outcome<Error, Model::RunClusterServiceActionResult> RunClusterServiceActionOutcome;
			typedef std::future<RunClusterServiceActionOutcome> RunClusterServiceActionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunClusterServiceActionRequest&, const RunClusterServiceActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunClusterServiceActionAsyncHandler;
			typedef Outcome<Error, Model::RunScalingActionV2Result> RunScalingActionV2Outcome;
			typedef std::future<RunScalingActionV2Outcome> RunScalingActionV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunScalingActionV2Request&, const RunScalingActionV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunScalingActionV2AsyncHandler;
			typedef Outcome<Error, Model::StartFlowResult> StartFlowOutcome;
			typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::StartFlowRequest&, const StartFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartFlowAsyncHandler;
			typedef Outcome<Error, Model::SubmitFlowResult> SubmitFlowOutcome;
			typedef std::future<SubmitFlowOutcome> SubmitFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SubmitFlowRequest&, const SubmitFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFlowAsyncHandler;
			typedef Outcome<Error, Model::SubmitFlowJobResult> SubmitFlowJobOutcome;
			typedef std::future<SubmitFlowJobOutcome> SubmitFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SubmitFlowJobRequest&, const SubmitFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFlowJobAsyncHandler;
			typedef Outcome<Error, Model::SuspendFlowResult> SuspendFlowOutcome;
			typedef std::future<SuspendFlowOutcome> SuspendFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SuspendFlowRequest&, const SuspendFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendFlowAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			EmrClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EmrClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EmrClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EmrClient();
			AddClusterServiceOutcome addClusterService(const Model::AddClusterServiceRequest &request)const;
			void addClusterServiceAsync(const Model::AddClusterServiceRequest& request, const AddClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddClusterServiceOutcomeCallable addClusterServiceCallable(const Model::AddClusterServiceRequest& request) const;
			AddScalingConfigItemV2Outcome addScalingConfigItemV2(const Model::AddScalingConfigItemV2Request &request)const;
			void addScalingConfigItemV2Async(const Model::AddScalingConfigItemV2Request& request, const AddScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddScalingConfigItemV2OutcomeCallable addScalingConfigItemV2Callable(const Model::AddScalingConfigItemV2Request& request) const;
			CloneFlowOutcome cloneFlow(const Model::CloneFlowRequest &request)const;
			void cloneFlowAsync(const Model::CloneFlowRequest& request, const CloneFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneFlowOutcomeCallable cloneFlowCallable(const Model::CloneFlowRequest& request) const;
			CloneFlowJobOutcome cloneFlowJob(const Model::CloneFlowJobRequest &request)const;
			void cloneFlowJobAsync(const Model::CloneFlowJobRequest& request, const CloneFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneFlowJobOutcomeCallable cloneFlowJobCallable(const Model::CloneFlowJobRequest& request) const;
			CreateClusterTemplateOutcome createClusterTemplate(const Model::CreateClusterTemplateRequest &request)const;
			void createClusterTemplateAsync(const Model::CreateClusterTemplateRequest& request, const CreateClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterTemplateOutcomeCallable createClusterTemplateCallable(const Model::CreateClusterTemplateRequest& request) const;
			CreateClusterV2Outcome createClusterV2(const Model::CreateClusterV2Request &request)const;
			void createClusterV2Async(const Model::CreateClusterV2Request& request, const CreateClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterV2OutcomeCallable createClusterV2Callable(const Model::CreateClusterV2Request& request) const;
			CreateClusterWithTemplateOutcome createClusterWithTemplate(const Model::CreateClusterWithTemplateRequest &request)const;
			void createClusterWithTemplateAsync(const Model::CreateClusterWithTemplateRequest& request, const CreateClusterWithTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterWithTemplateOutcomeCallable createClusterWithTemplateCallable(const Model::CreateClusterWithTemplateRequest& request) const;
			CreateFlowOutcome createFlow(const Model::CreateFlowRequest &request)const;
			void createFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowOutcomeCallable createFlowCallable(const Model::CreateFlowRequest& request) const;
			CreateFlowCategoryOutcome createFlowCategory(const Model::CreateFlowCategoryRequest &request)const;
			void createFlowCategoryAsync(const Model::CreateFlowCategoryRequest& request, const CreateFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowCategoryOutcomeCallable createFlowCategoryCallable(const Model::CreateFlowCategoryRequest& request) const;
			CreateFlowForWebOutcome createFlowForWeb(const Model::CreateFlowForWebRequest &request)const;
			void createFlowForWebAsync(const Model::CreateFlowForWebRequest& request, const CreateFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowForWebOutcomeCallable createFlowForWebCallable(const Model::CreateFlowForWebRequest& request) const;
			CreateFlowJobOutcome createFlowJob(const Model::CreateFlowJobRequest &request)const;
			void createFlowJobAsync(const Model::CreateFlowJobRequest& request, const CreateFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowJobOutcomeCallable createFlowJobCallable(const Model::CreateFlowJobRequest& request) const;
			CreateFlowProjectOutcome createFlowProject(const Model::CreateFlowProjectRequest &request)const;
			void createFlowProjectAsync(const Model::CreateFlowProjectRequest& request, const CreateFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectOutcomeCallable createFlowProjectCallable(const Model::CreateFlowProjectRequest& request) const;
			CreateFlowProjectClusterSettingOutcome createFlowProjectClusterSetting(const Model::CreateFlowProjectClusterSettingRequest &request)const;
			void createFlowProjectClusterSettingAsync(const Model::CreateFlowProjectClusterSettingRequest& request, const CreateFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectClusterSettingOutcomeCallable createFlowProjectClusterSettingCallable(const Model::CreateFlowProjectClusterSettingRequest& request) const;
			CreateFlowProjectUserOutcome createFlowProjectUser(const Model::CreateFlowProjectUserRequest &request)const;
			void createFlowProjectUserAsync(const Model::CreateFlowProjectUserRequest& request, const CreateFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectUserOutcomeCallable createFlowProjectUserCallable(const Model::CreateFlowProjectUserRequest& request) const;
			CreateResourcePoolOutcome createResourcePool(const Model::CreateResourcePoolRequest &request)const;
			void createResourcePoolAsync(const Model::CreateResourcePoolRequest& request, const CreateResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourcePoolOutcomeCallable createResourcePoolCallable(const Model::CreateResourcePoolRequest& request) const;
			CreateResourceQueueOutcome createResourceQueue(const Model::CreateResourceQueueRequest &request)const;
			void createResourceQueueAsync(const Model::CreateResourceQueueRequest& request, const CreateResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceQueueOutcomeCallable createResourceQueueCallable(const Model::CreateResourceQueueRequest& request) const;
			CreateScalingGroupV2Outcome createScalingGroupV2(const Model::CreateScalingGroupV2Request &request)const;
			void createScalingGroupV2Async(const Model::CreateScalingGroupV2Request& request, const CreateScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingGroupV2OutcomeCallable createScalingGroupV2Callable(const Model::CreateScalingGroupV2Request& request) const;
			DeleteClusterTemplateOutcome deleteClusterTemplate(const Model::DeleteClusterTemplateRequest &request)const;
			void deleteClusterTemplateAsync(const Model::DeleteClusterTemplateRequest& request, const DeleteClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterTemplateOutcomeCallable deleteClusterTemplateCallable(const Model::DeleteClusterTemplateRequest& request) const;
			DeleteFlowOutcome deleteFlow(const Model::DeleteFlowRequest &request)const;
			void deleteFlowAsync(const Model::DeleteFlowRequest& request, const DeleteFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowOutcomeCallable deleteFlowCallable(const Model::DeleteFlowRequest& request) const;
			DeleteFlowCategoryOutcome deleteFlowCategory(const Model::DeleteFlowCategoryRequest &request)const;
			void deleteFlowCategoryAsync(const Model::DeleteFlowCategoryRequest& request, const DeleteFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowCategoryOutcomeCallable deleteFlowCategoryCallable(const Model::DeleteFlowCategoryRequest& request) const;
			DeleteFlowJobOutcome deleteFlowJob(const Model::DeleteFlowJobRequest &request)const;
			void deleteFlowJobAsync(const Model::DeleteFlowJobRequest& request, const DeleteFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowJobOutcomeCallable deleteFlowJobCallable(const Model::DeleteFlowJobRequest& request) const;
			DeleteFlowProjectOutcome deleteFlowProject(const Model::DeleteFlowProjectRequest &request)const;
			void deleteFlowProjectAsync(const Model::DeleteFlowProjectRequest& request, const DeleteFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectOutcomeCallable deleteFlowProjectCallable(const Model::DeleteFlowProjectRequest& request) const;
			DeleteFlowProjectClusterSettingOutcome deleteFlowProjectClusterSetting(const Model::DeleteFlowProjectClusterSettingRequest &request)const;
			void deleteFlowProjectClusterSettingAsync(const Model::DeleteFlowProjectClusterSettingRequest& request, const DeleteFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectClusterSettingOutcomeCallable deleteFlowProjectClusterSettingCallable(const Model::DeleteFlowProjectClusterSettingRequest& request) const;
			DeleteFlowProjectUserOutcome deleteFlowProjectUser(const Model::DeleteFlowProjectUserRequest &request)const;
			void deleteFlowProjectUserAsync(const Model::DeleteFlowProjectUserRequest& request, const DeleteFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectUserOutcomeCallable deleteFlowProjectUserCallable(const Model::DeleteFlowProjectUserRequest& request) const;
			DeleteResourcePoolOutcome deleteResourcePool(const Model::DeleteResourcePoolRequest &request)const;
			void deleteResourcePoolAsync(const Model::DeleteResourcePoolRequest& request, const DeleteResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourcePoolOutcomeCallable deleteResourcePoolCallable(const Model::DeleteResourcePoolRequest& request) const;
			DeleteResourceQueueOutcome deleteResourceQueue(const Model::DeleteResourceQueueRequest &request)const;
			void deleteResourceQueueAsync(const Model::DeleteResourceQueueRequest& request, const DeleteResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceQueueOutcomeCallable deleteResourceQueueCallable(const Model::DeleteResourceQueueRequest& request) const;
			DescribeClusterBasicInfoOutcome describeClusterBasicInfo(const Model::DescribeClusterBasicInfoRequest &request)const;
			void describeClusterBasicInfoAsync(const Model::DescribeClusterBasicInfoRequest& request, const DescribeClusterBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterBasicInfoOutcomeCallable describeClusterBasicInfoCallable(const Model::DescribeClusterBasicInfoRequest& request) const;
			DescribeClusterOperationHostTaskLogOutcome describeClusterOperationHostTaskLog(const Model::DescribeClusterOperationHostTaskLogRequest &request)const;
			void describeClusterOperationHostTaskLogAsync(const Model::DescribeClusterOperationHostTaskLogRequest& request, const DescribeClusterOperationHostTaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOperationHostTaskLogOutcomeCallable describeClusterOperationHostTaskLogCallable(const Model::DescribeClusterOperationHostTaskLogRequest& request) const;
			DescribeClusterResourcePoolSchedulerTypeOutcome describeClusterResourcePoolSchedulerType(const Model::DescribeClusterResourcePoolSchedulerTypeRequest &request)const;
			void describeClusterResourcePoolSchedulerTypeAsync(const Model::DescribeClusterResourcePoolSchedulerTypeRequest& request, const DescribeClusterResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterResourcePoolSchedulerTypeOutcomeCallable describeClusterResourcePoolSchedulerTypeCallable(const Model::DescribeClusterResourcePoolSchedulerTypeRequest& request) const;
			DescribeClusterServiceOutcome describeClusterService(const Model::DescribeClusterServiceRequest &request)const;
			void describeClusterServiceAsync(const Model::DescribeClusterServiceRequest& request, const DescribeClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceOutcomeCallable describeClusterServiceCallable(const Model::DescribeClusterServiceRequest& request) const;
			DescribeClusterServiceConfigOutcome describeClusterServiceConfig(const Model::DescribeClusterServiceConfigRequest &request)const;
			void describeClusterServiceConfigAsync(const Model::DescribeClusterServiceConfigRequest& request, const DescribeClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceConfigOutcomeCallable describeClusterServiceConfigCallable(const Model::DescribeClusterServiceConfigRequest& request) const;
			DescribeClusterServiceConfigTagOutcome describeClusterServiceConfigTag(const Model::DescribeClusterServiceConfigTagRequest &request)const;
			void describeClusterServiceConfigTagAsync(const Model::DescribeClusterServiceConfigTagRequest& request, const DescribeClusterServiceConfigTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceConfigTagOutcomeCallable describeClusterServiceConfigTagCallable(const Model::DescribeClusterServiceConfigTagRequest& request) const;
			DescribeClusterTemplateOutcome describeClusterTemplate(const Model::DescribeClusterTemplateRequest &request)const;
			void describeClusterTemplateAsync(const Model::DescribeClusterTemplateRequest& request, const DescribeClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterTemplateOutcomeCallable describeClusterTemplateCallable(const Model::DescribeClusterTemplateRequest& request) const;
			DescribeClusterV2Outcome describeClusterV2(const Model::DescribeClusterV2Request &request)const;
			void describeClusterV2Async(const Model::DescribeClusterV2Request& request, const DescribeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterV2OutcomeCallable describeClusterV2Callable(const Model::DescribeClusterV2Request& request) const;
			DescribeFlowOutcome describeFlow(const Model::DescribeFlowRequest &request)const;
			void describeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowOutcomeCallable describeFlowCallable(const Model::DescribeFlowRequest& request) const;
			DescribeFlowCategoryOutcome describeFlowCategory(const Model::DescribeFlowCategoryRequest &request)const;
			void describeFlowCategoryAsync(const Model::DescribeFlowCategoryRequest& request, const DescribeFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowCategoryOutcomeCallable describeFlowCategoryCallable(const Model::DescribeFlowCategoryRequest& request) const;
			DescribeFlowCategoryTreeOutcome describeFlowCategoryTree(const Model::DescribeFlowCategoryTreeRequest &request)const;
			void describeFlowCategoryTreeAsync(const Model::DescribeFlowCategoryTreeRequest& request, const DescribeFlowCategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowCategoryTreeOutcomeCallable describeFlowCategoryTreeCallable(const Model::DescribeFlowCategoryTreeRequest& request) const;
			DescribeFlowInstanceOutcome describeFlowInstance(const Model::DescribeFlowInstanceRequest &request)const;
			void describeFlowInstanceAsync(const Model::DescribeFlowInstanceRequest& request, const DescribeFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowInstanceOutcomeCallable describeFlowInstanceCallable(const Model::DescribeFlowInstanceRequest& request) const;
			DescribeFlowJobOutcome describeFlowJob(const Model::DescribeFlowJobRequest &request)const;
			void describeFlowJobAsync(const Model::DescribeFlowJobRequest& request, const DescribeFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowJobOutcomeCallable describeFlowJobCallable(const Model::DescribeFlowJobRequest& request) const;
			DescribeFlowNodeInstanceOutcome describeFlowNodeInstance(const Model::DescribeFlowNodeInstanceRequest &request)const;
			void describeFlowNodeInstanceAsync(const Model::DescribeFlowNodeInstanceRequest& request, const DescribeFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceOutcomeCallable describeFlowNodeInstanceCallable(const Model::DescribeFlowNodeInstanceRequest& request) const;
			DescribeFlowNodeInstanceContainerLogOutcome describeFlowNodeInstanceContainerLog(const Model::DescribeFlowNodeInstanceContainerLogRequest &request)const;
			void describeFlowNodeInstanceContainerLogAsync(const Model::DescribeFlowNodeInstanceContainerLogRequest& request, const DescribeFlowNodeInstanceContainerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceContainerLogOutcomeCallable describeFlowNodeInstanceContainerLogCallable(const Model::DescribeFlowNodeInstanceContainerLogRequest& request) const;
			DescribeFlowNodeInstanceLauncherLogOutcome describeFlowNodeInstanceLauncherLog(const Model::DescribeFlowNodeInstanceLauncherLogRequest &request)const;
			void describeFlowNodeInstanceLauncherLogAsync(const Model::DescribeFlowNodeInstanceLauncherLogRequest& request, const DescribeFlowNodeInstanceLauncherLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceLauncherLogOutcomeCallable describeFlowNodeInstanceLauncherLogCallable(const Model::DescribeFlowNodeInstanceLauncherLogRequest& request) const;
			DescribeFlowProjectOutcome describeFlowProject(const Model::DescribeFlowProjectRequest &request)const;
			void describeFlowProjectAsync(const Model::DescribeFlowProjectRequest& request, const DescribeFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowProjectOutcomeCallable describeFlowProjectCallable(const Model::DescribeFlowProjectRequest& request) const;
			DescribeFlowProjectClusterSettingOutcome describeFlowProjectClusterSetting(const Model::DescribeFlowProjectClusterSettingRequest &request)const;
			void describeFlowProjectClusterSettingAsync(const Model::DescribeFlowProjectClusterSettingRequest& request, const DescribeFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowProjectClusterSettingOutcomeCallable describeFlowProjectClusterSettingCallable(const Model::DescribeFlowProjectClusterSettingRequest& request) const;
			DescribeScalingConfigItemV2Outcome describeScalingConfigItemV2(const Model::DescribeScalingConfigItemV2Request &request)const;
			void describeScalingConfigItemV2Async(const Model::DescribeScalingConfigItemV2Request& request, const DescribeScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingConfigItemV2OutcomeCallable describeScalingConfigItemV2Callable(const Model::DescribeScalingConfigItemV2Request& request) const;
			DescribeScalingGroupInstanceV2Outcome describeScalingGroupInstanceV2(const Model::DescribeScalingGroupInstanceV2Request &request)const;
			void describeScalingGroupInstanceV2Async(const Model::DescribeScalingGroupInstanceV2Request& request, const DescribeScalingGroupInstanceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingGroupInstanceV2OutcomeCallable describeScalingGroupInstanceV2Callable(const Model::DescribeScalingGroupInstanceV2Request& request) const;
			DescribeScalingGroupV2Outcome describeScalingGroupV2(const Model::DescribeScalingGroupV2Request &request)const;
			void describeScalingGroupV2Async(const Model::DescribeScalingGroupV2Request& request, const DescribeScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingGroupV2OutcomeCallable describeScalingGroupV2Callable(const Model::DescribeScalingGroupV2Request& request) const;
			JoinResourceGroupOutcome joinResourceGroup(const Model::JoinResourceGroupRequest &request)const;
			void joinResourceGroupAsync(const Model::JoinResourceGroupRequest& request, const JoinResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinResourceGroupOutcomeCallable joinResourceGroupCallable(const Model::JoinResourceGroupRequest& request) const;
			KillFlowJobOutcome killFlowJob(const Model::KillFlowJobRequest &request)const;
			void killFlowJobAsync(const Model::KillFlowJobRequest& request, const KillFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillFlowJobOutcomeCallable killFlowJobCallable(const Model::KillFlowJobRequest& request) const;
			ListClusterHostOutcome listClusterHost(const Model::ListClusterHostRequest &request)const;
			void listClusterHostAsync(const Model::ListClusterHostRequest& request, const ListClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostOutcomeCallable listClusterHostCallable(const Model::ListClusterHostRequest& request) const;
			ListClusterHostComponentOutcome listClusterHostComponent(const Model::ListClusterHostComponentRequest &request)const;
			void listClusterHostComponentAsync(const Model::ListClusterHostComponentRequest& request, const ListClusterHostComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostComponentOutcomeCallable listClusterHostComponentCallable(const Model::ListClusterHostComponentRequest& request) const;
			ListClusterHostGroupOutcome listClusterHostGroup(const Model::ListClusterHostGroupRequest &request)const;
			void listClusterHostGroupAsync(const Model::ListClusterHostGroupRequest& request, const ListClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostGroupOutcomeCallable listClusterHostGroupCallable(const Model::ListClusterHostGroupRequest& request) const;
			ListClusterInstalledServiceOutcome listClusterInstalledService(const Model::ListClusterInstalledServiceRequest &request)const;
			void listClusterInstalledServiceAsync(const Model::ListClusterInstalledServiceRequest& request, const ListClusterInstalledServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterInstalledServiceOutcomeCallable listClusterInstalledServiceCallable(const Model::ListClusterInstalledServiceRequest& request) const;
			ListClusterOperationOutcome listClusterOperation(const Model::ListClusterOperationRequest &request)const;
			void listClusterOperationAsync(const Model::ListClusterOperationRequest& request, const ListClusterOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationOutcomeCallable listClusterOperationCallable(const Model::ListClusterOperationRequest& request) const;
			ListClusterOperationHostOutcome listClusterOperationHost(const Model::ListClusterOperationHostRequest &request)const;
			void listClusterOperationHostAsync(const Model::ListClusterOperationHostRequest& request, const ListClusterOperationHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationHostOutcomeCallable listClusterOperationHostCallable(const Model::ListClusterOperationHostRequest& request) const;
			ListClusterOperationHostTaskOutcome listClusterOperationHostTask(const Model::ListClusterOperationHostTaskRequest &request)const;
			void listClusterOperationHostTaskAsync(const Model::ListClusterOperationHostTaskRequest& request, const ListClusterOperationHostTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationHostTaskOutcomeCallable listClusterOperationHostTaskCallable(const Model::ListClusterOperationHostTaskRequest& request) const;
			ListClusterOperationTaskOutcome listClusterOperationTask(const Model::ListClusterOperationTaskRequest &request)const;
			void listClusterOperationTaskAsync(const Model::ListClusterOperationTaskRequest& request, const ListClusterOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationTaskOutcomeCallable listClusterOperationTaskCallable(const Model::ListClusterOperationTaskRequest& request) const;
			ListClusterServiceOutcome listClusterService(const Model::ListClusterServiceRequest &request)const;
			void listClusterServiceAsync(const Model::ListClusterServiceRequest& request, const ListClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceOutcomeCallable listClusterServiceCallable(const Model::ListClusterServiceRequest& request) const;
			ListClusterServiceComponentHealthInfoOutcome listClusterServiceComponentHealthInfo(const Model::ListClusterServiceComponentHealthInfoRequest &request)const;
			void listClusterServiceComponentHealthInfoAsync(const Model::ListClusterServiceComponentHealthInfoRequest& request, const ListClusterServiceComponentHealthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceComponentHealthInfoOutcomeCallable listClusterServiceComponentHealthInfoCallable(const Model::ListClusterServiceComponentHealthInfoRequest& request) const;
			ListClusterServiceConfigHistoryOutcome listClusterServiceConfigHistory(const Model::ListClusterServiceConfigHistoryRequest &request)const;
			void listClusterServiceConfigHistoryAsync(const Model::ListClusterServiceConfigHistoryRequest& request, const ListClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceConfigHistoryOutcomeCallable listClusterServiceConfigHistoryCallable(const Model::ListClusterServiceConfigHistoryRequest& request) const;
			ListClusterServiceQuickLinkOutcome listClusterServiceQuickLink(const Model::ListClusterServiceQuickLinkRequest &request)const;
			void listClusterServiceQuickLinkAsync(const Model::ListClusterServiceQuickLinkRequest& request, const ListClusterServiceQuickLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceQuickLinkOutcomeCallable listClusterServiceQuickLinkCallable(const Model::ListClusterServiceQuickLinkRequest& request) const;
			ListClusterTemplatesOutcome listClusterTemplates(const Model::ListClusterTemplatesRequest &request)const;
			void listClusterTemplatesAsync(const Model::ListClusterTemplatesRequest& request, const ListClusterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterTemplatesOutcomeCallable listClusterTemplatesCallable(const Model::ListClusterTemplatesRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			ListEmrAvailableConfigOutcome listEmrAvailableConfig(const Model::ListEmrAvailableConfigRequest &request)const;
			void listEmrAvailableConfigAsync(const Model::ListEmrAvailableConfigRequest& request, const ListEmrAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrAvailableConfigOutcomeCallable listEmrAvailableConfigCallable(const Model::ListEmrAvailableConfigRequest& request) const;
			ListEmrAvailableResourceOutcome listEmrAvailableResource(const Model::ListEmrAvailableResourceRequest &request)const;
			void listEmrAvailableResourceAsync(const Model::ListEmrAvailableResourceRequest& request, const ListEmrAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrAvailableResourceOutcomeCallable listEmrAvailableResourceCallable(const Model::ListEmrAvailableResourceRequest& request) const;
			ListEmrMainVersionOutcome listEmrMainVersion(const Model::ListEmrMainVersionRequest &request)const;
			void listEmrMainVersionAsync(const Model::ListEmrMainVersionRequest& request, const ListEmrMainVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrMainVersionOutcomeCallable listEmrMainVersionCallable(const Model::ListEmrMainVersionRequest& request) const;
			ListFlowOutcome listFlow(const Model::ListFlowRequest &request)const;
			void listFlowAsync(const Model::ListFlowRequest& request, const ListFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowOutcomeCallable listFlowCallable(const Model::ListFlowRequest& request) const;
			ListFlowCategoryOutcome listFlowCategory(const Model::ListFlowCategoryRequest &request)const;
			void listFlowCategoryAsync(const Model::ListFlowCategoryRequest& request, const ListFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowCategoryOutcomeCallable listFlowCategoryCallable(const Model::ListFlowCategoryRequest& request) const;
			ListFlowClusterOutcome listFlowCluster(const Model::ListFlowClusterRequest &request)const;
			void listFlowClusterAsync(const Model::ListFlowClusterRequest& request, const ListFlowClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterOutcomeCallable listFlowClusterCallable(const Model::ListFlowClusterRequest& request) const;
			ListFlowClusterAllOutcome listFlowClusterAll(const Model::ListFlowClusterAllRequest &request)const;
			void listFlowClusterAllAsync(const Model::ListFlowClusterAllRequest& request, const ListFlowClusterAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterAllOutcomeCallable listFlowClusterAllCallable(const Model::ListFlowClusterAllRequest& request) const;
			ListFlowClusterAllHostsOutcome listFlowClusterAllHosts(const Model::ListFlowClusterAllHostsRequest &request)const;
			void listFlowClusterAllHostsAsync(const Model::ListFlowClusterAllHostsRequest& request, const ListFlowClusterAllHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterAllHostsOutcomeCallable listFlowClusterAllHostsCallable(const Model::ListFlowClusterAllHostsRequest& request) const;
			ListFlowClusterHostOutcome listFlowClusterHost(const Model::ListFlowClusterHostRequest &request)const;
			void listFlowClusterHostAsync(const Model::ListFlowClusterHostRequest& request, const ListFlowClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterHostOutcomeCallable listFlowClusterHostCallable(const Model::ListFlowClusterHostRequest& request) const;
			ListFlowInstanceOutcome listFlowInstance(const Model::ListFlowInstanceRequest &request)const;
			void listFlowInstanceAsync(const Model::ListFlowInstanceRequest& request, const ListFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowInstanceOutcomeCallable listFlowInstanceCallable(const Model::ListFlowInstanceRequest& request) const;
			ListFlowJobOutcome listFlowJob(const Model::ListFlowJobRequest &request)const;
			void listFlowJobAsync(const Model::ListFlowJobRequest& request, const ListFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowJobOutcomeCallable listFlowJobCallable(const Model::ListFlowJobRequest& request) const;
			ListFlowJobHistoryOutcome listFlowJobHistory(const Model::ListFlowJobHistoryRequest &request)const;
			void listFlowJobHistoryAsync(const Model::ListFlowJobHistoryRequest& request, const ListFlowJobHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowJobHistoryOutcomeCallable listFlowJobHistoryCallable(const Model::ListFlowJobHistoryRequest& request) const;
			ListFlowNodeInstanceOutcome listFlowNodeInstance(const Model::ListFlowNodeInstanceRequest &request)const;
			void listFlowNodeInstanceAsync(const Model::ListFlowNodeInstanceRequest& request, const ListFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeInstanceOutcomeCallable listFlowNodeInstanceCallable(const Model::ListFlowNodeInstanceRequest& request) const;
			ListFlowNodeInstanceContainerStatusOutcome listFlowNodeInstanceContainerStatus(const Model::ListFlowNodeInstanceContainerStatusRequest &request)const;
			void listFlowNodeInstanceContainerStatusAsync(const Model::ListFlowNodeInstanceContainerStatusRequest& request, const ListFlowNodeInstanceContainerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeInstanceContainerStatusOutcomeCallable listFlowNodeInstanceContainerStatusCallable(const Model::ListFlowNodeInstanceContainerStatusRequest& request) const;
			ListFlowNodeSqlResultOutcome listFlowNodeSqlResult(const Model::ListFlowNodeSqlResultRequest &request)const;
			void listFlowNodeSqlResultAsync(const Model::ListFlowNodeSqlResultRequest& request, const ListFlowNodeSqlResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeSqlResultOutcomeCallable listFlowNodeSqlResultCallable(const Model::ListFlowNodeSqlResultRequest& request) const;
			ListFlowProjectOutcome listFlowProject(const Model::ListFlowProjectRequest &request)const;
			void listFlowProjectAsync(const Model::ListFlowProjectRequest& request, const ListFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectOutcomeCallable listFlowProjectCallable(const Model::ListFlowProjectRequest& request) const;
			ListFlowProjectClusterSettingOutcome listFlowProjectClusterSetting(const Model::ListFlowProjectClusterSettingRequest &request)const;
			void listFlowProjectClusterSettingAsync(const Model::ListFlowProjectClusterSettingRequest& request, const ListFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectClusterSettingOutcomeCallable listFlowProjectClusterSettingCallable(const Model::ListFlowProjectClusterSettingRequest& request) const;
			ListFlowProjectUserOutcome listFlowProjectUser(const Model::ListFlowProjectUserRequest &request)const;
			void listFlowProjectUserAsync(const Model::ListFlowProjectUserRequest& request, const ListFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectUserOutcomeCallable listFlowProjectUserCallable(const Model::ListFlowProjectUserRequest& request) const;
			ListResourcePoolOutcome listResourcePool(const Model::ListResourcePoolRequest &request)const;
			void listResourcePoolAsync(const Model::ListResourcePoolRequest& request, const ListResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourcePoolOutcomeCallable listResourcePoolCallable(const Model::ListResourcePoolRequest& request) const;
			ListScalingActivityV2Outcome listScalingActivityV2(const Model::ListScalingActivityV2Request &request)const;
			void listScalingActivityV2Async(const Model::ListScalingActivityV2Request& request, const ListScalingActivityV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingActivityV2OutcomeCallable listScalingActivityV2Callable(const Model::ListScalingActivityV2Request& request) const;
			ListScalingConfigItemV2Outcome listScalingConfigItemV2(const Model::ListScalingConfigItemV2Request &request)const;
			void listScalingConfigItemV2Async(const Model::ListScalingConfigItemV2Request& request, const ListScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingConfigItemV2OutcomeCallable listScalingConfigItemV2Callable(const Model::ListScalingConfigItemV2Request& request) const;
			ListScalingGroupV2Outcome listScalingGroupV2(const Model::ListScalingGroupV2Request &request)const;
			void listScalingGroupV2Async(const Model::ListScalingGroupV2Request& request, const ListScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingGroupV2OutcomeCallable listScalingGroupV2Callable(const Model::ListScalingGroupV2Request& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyClusterNameOutcome modifyClusterName(const Model::ModifyClusterNameRequest &request)const;
			void modifyClusterNameAsync(const Model::ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterNameOutcomeCallable modifyClusterNameCallable(const Model::ModifyClusterNameRequest& request) const;
			ModifyClusterServiceConfigOutcome modifyClusterServiceConfig(const Model::ModifyClusterServiceConfigRequest &request)const;
			void modifyClusterServiceConfigAsync(const Model::ModifyClusterServiceConfigRequest& request, const ModifyClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterServiceConfigOutcomeCallable modifyClusterServiceConfigCallable(const Model::ModifyClusterServiceConfigRequest& request) const;
			ModifyClusterTemplateOutcome modifyClusterTemplate(const Model::ModifyClusterTemplateRequest &request)const;
			void modifyClusterTemplateAsync(const Model::ModifyClusterTemplateRequest& request, const ModifyClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterTemplateOutcomeCallable modifyClusterTemplateCallable(const Model::ModifyClusterTemplateRequest& request) const;
			ModifyFlowCategoryOutcome modifyFlowCategory(const Model::ModifyFlowCategoryRequest &request)const;
			void modifyFlowCategoryAsync(const Model::ModifyFlowCategoryRequest& request, const ModifyFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowCategoryOutcomeCallable modifyFlowCategoryCallable(const Model::ModifyFlowCategoryRequest& request) const;
			ModifyFlowForWebOutcome modifyFlowForWeb(const Model::ModifyFlowForWebRequest &request)const;
			void modifyFlowForWebAsync(const Model::ModifyFlowForWebRequest& request, const ModifyFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowForWebOutcomeCallable modifyFlowForWebCallable(const Model::ModifyFlowForWebRequest& request) const;
			ModifyFlowProjectOutcome modifyFlowProject(const Model::ModifyFlowProjectRequest &request)const;
			void modifyFlowProjectAsync(const Model::ModifyFlowProjectRequest& request, const ModifyFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowProjectOutcomeCallable modifyFlowProjectCallable(const Model::ModifyFlowProjectRequest& request) const;
			ModifyFlowProjectClusterSettingOutcome modifyFlowProjectClusterSetting(const Model::ModifyFlowProjectClusterSettingRequest &request)const;
			void modifyFlowProjectClusterSettingAsync(const Model::ModifyFlowProjectClusterSettingRequest& request, const ModifyFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowProjectClusterSettingOutcomeCallable modifyFlowProjectClusterSettingCallable(const Model::ModifyFlowProjectClusterSettingRequest& request) const;
			ModifyResourcePoolOutcome modifyResourcePool(const Model::ModifyResourcePoolRequest &request)const;
			void modifyResourcePoolAsync(const Model::ModifyResourcePoolRequest& request, const ModifyResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourcePoolOutcomeCallable modifyResourcePoolCallable(const Model::ModifyResourcePoolRequest& request) const;
			ModifyResourcePoolSchedulerTypeOutcome modifyResourcePoolSchedulerType(const Model::ModifyResourcePoolSchedulerTypeRequest &request)const;
			void modifyResourcePoolSchedulerTypeAsync(const Model::ModifyResourcePoolSchedulerTypeRequest& request, const ModifyResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourcePoolSchedulerTypeOutcomeCallable modifyResourcePoolSchedulerTypeCallable(const Model::ModifyResourcePoolSchedulerTypeRequest& request) const;
			ModifyResourceQueueOutcome modifyResourceQueue(const Model::ModifyResourceQueueRequest &request)const;
			void modifyResourceQueueAsync(const Model::ModifyResourceQueueRequest& request, const ModifyResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourceQueueOutcomeCallable modifyResourceQueueCallable(const Model::ModifyResourceQueueRequest& request) const;
			ModifyScalingConfigItemV2Outcome modifyScalingConfigItemV2(const Model::ModifyScalingConfigItemV2Request &request)const;
			void modifyScalingConfigItemV2Async(const Model::ModifyScalingConfigItemV2Request& request, const ModifyScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingConfigItemV2OutcomeCallable modifyScalingConfigItemV2Callable(const Model::ModifyScalingConfigItemV2Request& request) const;
			ModifyScalingGroupV2Outcome modifyScalingGroupV2(const Model::ModifyScalingGroupV2Request &request)const;
			void modifyScalingGroupV2Async(const Model::ModifyScalingGroupV2Request& request, const ModifyScalingGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingGroupV2OutcomeCallable modifyScalingGroupV2Callable(const Model::ModifyScalingGroupV2Request& request) const;
			RefreshClusterResourcePoolOutcome refreshClusterResourcePool(const Model::RefreshClusterResourcePoolRequest &request)const;
			void refreshClusterResourcePoolAsync(const Model::RefreshClusterResourcePoolRequest& request, const RefreshClusterResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshClusterResourcePoolOutcomeCallable refreshClusterResourcePoolCallable(const Model::RefreshClusterResourcePoolRequest& request) const;
			ReleaseClusterOutcome releaseCluster(const Model::ReleaseClusterRequest &request)const;
			void releaseClusterAsync(const Model::ReleaseClusterRequest& request, const ReleaseClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterOutcomeCallable releaseClusterCallable(const Model::ReleaseClusterRequest& request) const;
			ReleaseClusterHostGroupOutcome releaseClusterHostGroup(const Model::ReleaseClusterHostGroupRequest &request)const;
			void releaseClusterHostGroupAsync(const Model::ReleaseClusterHostGroupRequest& request, const ReleaseClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterHostGroupOutcomeCallable releaseClusterHostGroupCallable(const Model::ReleaseClusterHostGroupRequest& request) const;
			RemoveScalingConfigItemV2Outcome removeScalingConfigItemV2(const Model::RemoveScalingConfigItemV2Request &request)const;
			void removeScalingConfigItemV2Async(const Model::RemoveScalingConfigItemV2Request& request, const RemoveScalingConfigItemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveScalingConfigItemV2OutcomeCallable removeScalingConfigItemV2Callable(const Model::RemoveScalingConfigItemV2Request& request) const;
			RerunFlowOutcome rerunFlow(const Model::RerunFlowRequest &request)const;
			void rerunFlowAsync(const Model::RerunFlowRequest& request, const RerunFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RerunFlowOutcomeCallable rerunFlowCallable(const Model::RerunFlowRequest& request) const;
			ResizeClusterV2Outcome resizeClusterV2(const Model::ResizeClusterV2Request &request)const;
			void resizeClusterV2Async(const Model::ResizeClusterV2Request& request, const ResizeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeClusterV2OutcomeCallable resizeClusterV2Callable(const Model::ResizeClusterV2Request& request) const;
			ResumeFlowOutcome resumeFlow(const Model::ResumeFlowRequest &request)const;
			void resumeFlowAsync(const Model::ResumeFlowRequest& request, const ResumeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeFlowOutcomeCallable resumeFlowCallable(const Model::ResumeFlowRequest& request) const;
			RunClusterServiceActionOutcome runClusterServiceAction(const Model::RunClusterServiceActionRequest &request)const;
			void runClusterServiceActionAsync(const Model::RunClusterServiceActionRequest& request, const RunClusterServiceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunClusterServiceActionOutcomeCallable runClusterServiceActionCallable(const Model::RunClusterServiceActionRequest& request) const;
			RunScalingActionV2Outcome runScalingActionV2(const Model::RunScalingActionV2Request &request)const;
			void runScalingActionV2Async(const Model::RunScalingActionV2Request& request, const RunScalingActionV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunScalingActionV2OutcomeCallable runScalingActionV2Callable(const Model::RunScalingActionV2Request& request) const;
			StartFlowOutcome startFlow(const Model::StartFlowRequest &request)const;
			void startFlowAsync(const Model::StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartFlowOutcomeCallable startFlowCallable(const Model::StartFlowRequest& request) const;
			SubmitFlowOutcome submitFlow(const Model::SubmitFlowRequest &request)const;
			void submitFlowAsync(const Model::SubmitFlowRequest& request, const SubmitFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFlowOutcomeCallable submitFlowCallable(const Model::SubmitFlowRequest& request) const;
			SubmitFlowJobOutcome submitFlowJob(const Model::SubmitFlowJobRequest &request)const;
			void submitFlowJobAsync(const Model::SubmitFlowJobRequest& request, const SubmitFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFlowJobOutcomeCallable submitFlowJobCallable(const Model::SubmitFlowJobRequest& request) const;
			SuspendFlowOutcome suspendFlow(const Model::SuspendFlowRequest &request)const;
			void suspendFlowAsync(const Model::SuspendFlowRequest& request, const SuspendFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendFlowOutcomeCallable suspendFlowCallable(const Model::SuspendFlowRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EMR_EMRCLIENT_H_
