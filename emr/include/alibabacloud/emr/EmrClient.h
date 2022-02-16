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
#include "model/AddApplicationRequest.h"
#include "model/AddApplicationResult.h"
#include "model/AddApplicationsRequest.h"
#include "model/AddApplicationsResult.h"
#include "model/CancelOperationOrdersRequest.h"
#include "model/CancelOperationOrdersResult.h"
#include "model/CreateAutoScalingPolicyRequest.h"
#include "model/CreateAutoScalingPolicyResult.h"
#include "model/CreateAutoScalingRuleRequest.h"
#include "model/CreateAutoScalingRuleResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateClusterScriptRequest.h"
#include "model/CreateClusterScriptResult.h"
#include "model/CreateNodeGroupRequest.h"
#include "model/CreateNodeGroupResult.h"
#include "model/CreateOnAckClusterRequest.h"
#include "model/CreateOnAckClusterResult.h"
#include "model/CreateOnKubeClusterRequest.h"
#include "model/CreateOnKubeClusterResult.h"
#include "model/CreateScalingGroupRequest.h"
#include "model/CreateScalingGroupResult.h"
#include "model/DecreaseNodesRequest.h"
#include "model/DecreaseNodesResult.h"
#include "model/DeleteAutoScalingPolicyRequest.h"
#include "model/DeleteAutoScalingPolicyResult.h"
#include "model/DeleteAutoScalingRuleRequest.h"
#include "model/DeleteAutoScalingRuleResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteClusterScriptRequest.h"
#include "model/DeleteClusterScriptResult.h"
#include "model/DeleteNodeGroupRequest.h"
#include "model/DeleteNodeGroupResult.h"
#include "model/DeleteOnAckClusterRequest.h"
#include "model/DeleteOnAckClusterResult.h"
#include "model/DeleteScalingGroupRequest.h"
#include "model/DeleteScalingGroupResult.h"
#include "model/DisableAutoScalingPolicyRequest.h"
#include "model/DisableAutoScalingPolicyResult.h"
#include "model/EnableAutoScalingPolicyRequest.h"
#include "model/EnableAutoScalingPolicyResult.h"
#include "model/GetApplicationRequest.h"
#include "model/GetApplicationResult.h"
#include "model/GetClusterRequest.h"
#include "model/GetClusterResult.h"
#include "model/GetClusterScriptExecutionResultRequest.h"
#include "model/GetClusterScriptExecutionResultResult.h"
#include "model/GetNodeGroupRequest.h"
#include "model/GetNodeGroupResult.h"
#include "model/GetOnAckClusterRequest.h"
#include "model/GetOnAckClusterResult.h"
#include "model/GetOnKubeClusterRequest.h"
#include "model/GetOnKubeClusterResult.h"
#include "model/GetOnKubeClusterResourceQuotaRequest.h"
#include "model/GetOnKubeClusterResourceQuotaResult.h"
#include "model/GetOnKubeClusterResourceUsageRequest.h"
#include "model/GetOnKubeClusterResourceUsageResult.h"
#include "model/GetOperationRequest.h"
#include "model/GetOperationResult.h"
#include "model/GetScalingGroupRequest.h"
#include "model/GetScalingGroupResult.h"
#include "model/IncreaseClusterDiskRequest.h"
#include "model/IncreaseClusterDiskResult.h"
#include "model/IncreaseNodesRequest.h"
#include "model/IncreaseNodesResult.h"
#include "model/JoinResourceGroupRequest.h"
#include "model/JoinResourceGroupResult.h"
#include "model/ListApplicationConfigFilesRequest.h"
#include "model/ListApplicationConfigFilesResult.h"
#include "model/ListApplicationConfigHistoryRequest.h"
#include "model/ListApplicationConfigHistoryResult.h"
#include "model/ListApplicationConfigsRequest.h"
#include "model/ListApplicationConfigsResult.h"
#include "model/ListApplicationsRequest.h"
#include "model/ListApplicationsResult.h"
#include "model/ListAutoScalingActivitiesRequest.h"
#include "model/ListAutoScalingActivitiesResult.h"
#include "model/ListAutoScalingMetricsRequest.h"
#include "model/ListAutoScalingMetricsResult.h"
#include "model/ListAutoScalingPoliciesRequest.h"
#include "model/ListAutoScalingPoliciesResult.h"
#include "model/ListAutoScalingRulesRequest.h"
#include "model/ListAutoScalingRulesResult.h"
#include "model/ListClusterScriptsRequest.h"
#include "model/ListClusterScriptsResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/ListClusters2Request.h"
#include "model/ListClusters2Result.h"
#include "model/ListComponentHealthRequest.h"
#include "model/ListComponentHealthResult.h"
#include "model/ListComponentInstancesRequest.h"
#include "model/ListComponentInstancesResult.h"
#include "model/ListComponentsRequest.h"
#include "model/ListComponentsResult.h"
#include "model/ListNodeGroupsRequest.h"
#include "model/ListNodeGroupsResult.h"
#include "model/ListNodesRequest.h"
#include "model/ListNodesResult.h"
#include "model/ListNodesv3Request.h"
#include "model/ListNodesv3Result.h"
#include "model/ListOnAckClustersRequest.h"
#include "model/ListOnAckClustersResult.h"
#include "model/ListOnAckComponentsRequest.h"
#include "model/ListOnAckComponentsResult.h"
#include "model/ListOnKubeClusterDedicatedNodesRequest.h"
#include "model/ListOnKubeClusterDedicatedNodesResult.h"
#include "model/ListOnKubeClusterInspectionResultsRequest.h"
#include "model/ListOnKubeClusterInspectionResultsResult.h"
#include "model/ListOnKubeClustersRequest.h"
#include "model/ListOnKubeClustersResult.h"
#include "model/ListOnKubeComponentsRequest.h"
#include "model/ListOnKubeComponentsResult.h"
#include "model/ListResourceHealthInspectionRequest.h"
#include "model/ListResourceHealthInspectionResult.h"
#include "model/ListScalingActivitiesRequest.h"
#include "model/ListScalingActivitiesResult.h"
#include "model/ListScalingGroupsRequest.h"
#include "model/ListScalingGroupsResult.h"
#include "model/ListScalingMetricsRequest.h"
#include "model/ListScalingMetricsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ReleaseOnKubeClusterRequest.h"
#include "model/ReleaseOnKubeClusterResult.h"
#include "model/RunApplicationActionRequest.h"
#include "model/RunApplicationActionResult.h"
#include "model/RunScalingActionRequest.h"
#include "model/RunScalingActionResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TagResourcesSystemTagsRequest.h"
#include "model/TagResourcesSystemTagsResult.h"
#include "model/TerminateOperationRequest.h"
#include "model/TerminateOperationResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UntagResourcesSystemTagsRequest.h"
#include "model/UntagResourcesSystemTagsResult.h"
#include "model/UpdateAckClusterNodePoolsRequest.h"
#include "model/UpdateAckClusterNodePoolsResult.h"
#include "model/UpdateAckClusterNodesRequest.h"
#include "model/UpdateAckClusterNodesResult.h"
#include "model/UpdateApplicationConfigsRequest.h"
#include "model/UpdateApplicationConfigsResult.h"
#include "model/UpdateAutoScalingRuleRequest.h"
#include "model/UpdateAutoScalingRuleResult.h"
#include "model/UpdateClusterAttributeRequest.h"
#include "model/UpdateClusterAttributeResult.h"
#include "model/UpdateClusterScriptRequest.h"
#include "model/UpdateClusterScriptResult.h"
#include "model/UpdateOnKubeClusterDedicatedNodePoolsRequest.h"
#include "model/UpdateOnKubeClusterDedicatedNodePoolsResult.h"
#include "model/UpdateOnKubeClusterDedicatedNodesRequest.h"
#include "model/UpdateOnKubeClusterDedicatedNodesResult.h"
#include "model/UpdateScalingGroupRequest.h"
#include "model/UpdateScalingGroupResult.h"


namespace AlibabaCloud
{
	namespace Emr
	{
		class ALIBABACLOUD_EMR_EXPORT EmrClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddApplicationResult> AddApplicationOutcome;
			typedef std::future<AddApplicationOutcome> AddApplicationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AddApplicationRequest&, const AddApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddApplicationAsyncHandler;
			typedef Outcome<Error, Model::AddApplicationsResult> AddApplicationsOutcome;
			typedef std::future<AddApplicationsOutcome> AddApplicationsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AddApplicationsRequest&, const AddApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddApplicationsAsyncHandler;
			typedef Outcome<Error, Model::CancelOperationOrdersResult> CancelOperationOrdersOutcome;
			typedef std::future<CancelOperationOrdersOutcome> CancelOperationOrdersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CancelOperationOrdersRequest&, const CancelOperationOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOperationOrdersAsyncHandler;
			typedef Outcome<Error, Model::CreateAutoScalingPolicyResult> CreateAutoScalingPolicyOutcome;
			typedef std::future<CreateAutoScalingPolicyOutcome> CreateAutoScalingPolicyOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateAutoScalingPolicyRequest&, const CreateAutoScalingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateAutoScalingRuleResult> CreateAutoScalingRuleOutcome;
			typedef std::future<CreateAutoScalingRuleOutcome> CreateAutoScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateAutoScalingRuleRequest&, const CreateAutoScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterScriptResult> CreateClusterScriptOutcome;
			typedef std::future<CreateClusterScriptOutcome> CreateClusterScriptOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterScriptRequest&, const CreateClusterScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterScriptAsyncHandler;
			typedef Outcome<Error, Model::CreateNodeGroupResult> CreateNodeGroupOutcome;
			typedef std::future<CreateNodeGroupOutcome> CreateNodeGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateNodeGroupRequest&, const CreateNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateOnAckClusterResult> CreateOnAckClusterOutcome;
			typedef std::future<CreateOnAckClusterOutcome> CreateOnAckClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateOnAckClusterRequest&, const CreateOnAckClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOnAckClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateOnKubeClusterResult> CreateOnKubeClusterOutcome;
			typedef std::future<CreateOnKubeClusterOutcome> CreateOnKubeClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateOnKubeClusterRequest&, const CreateOnKubeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOnKubeClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingGroupResult> CreateScalingGroupOutcome;
			typedef std::future<CreateScalingGroupOutcome> CreateScalingGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateScalingGroupRequest&, const CreateScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::DecreaseNodesResult> DecreaseNodesOutcome;
			typedef std::future<DecreaseNodesOutcome> DecreaseNodesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DecreaseNodesRequest&, const DecreaseNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecreaseNodesAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoScalingPolicyResult> DeleteAutoScalingPolicyOutcome;
			typedef std::future<DeleteAutoScalingPolicyOutcome> DeleteAutoScalingPolicyOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteAutoScalingPolicyRequest&, const DeleteAutoScalingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoScalingPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoScalingRuleResult> DeleteAutoScalingRuleOutcome;
			typedef std::future<DeleteAutoScalingRuleOutcome> DeleteAutoScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteAutoScalingRuleRequest&, const DeleteAutoScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterScriptResult> DeleteClusterScriptOutcome;
			typedef std::future<DeleteClusterScriptOutcome> DeleteClusterScriptOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteClusterScriptRequest&, const DeleteClusterScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterScriptAsyncHandler;
			typedef Outcome<Error, Model::DeleteNodeGroupResult> DeleteNodeGroupOutcome;
			typedef std::future<DeleteNodeGroupOutcome> DeleteNodeGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteNodeGroupRequest&, const DeleteNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteOnAckClusterResult> DeleteOnAckClusterOutcome;
			typedef std::future<DeleteOnAckClusterOutcome> DeleteOnAckClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteOnAckClusterRequest&, const DeleteOnAckClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOnAckClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingGroupResult> DeleteScalingGroupOutcome;
			typedef std::future<DeleteScalingGroupOutcome> DeleteScalingGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteScalingGroupRequest&, const DeleteScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::DisableAutoScalingPolicyResult> DisableAutoScalingPolicyOutcome;
			typedef std::future<DisableAutoScalingPolicyOutcome> DisableAutoScalingPolicyOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DisableAutoScalingPolicyRequest&, const DisableAutoScalingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAutoScalingPolicyAsyncHandler;
			typedef Outcome<Error, Model::EnableAutoScalingPolicyResult> EnableAutoScalingPolicyOutcome;
			typedef std::future<EnableAutoScalingPolicyOutcome> EnableAutoScalingPolicyOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::EnableAutoScalingPolicyRequest&, const EnableAutoScalingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoScalingPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationResult> GetApplicationOutcome;
			typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetApplicationRequest&, const GetApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetClusterResult> GetClusterOutcome;
			typedef std::future<GetClusterOutcome> GetClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetClusterRequest&, const GetClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterAsyncHandler;
			typedef Outcome<Error, Model::GetClusterScriptExecutionResultResult> GetClusterScriptExecutionResultOutcome;
			typedef std::future<GetClusterScriptExecutionResultOutcome> GetClusterScriptExecutionResultOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetClusterScriptExecutionResultRequest&, const GetClusterScriptExecutionResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterScriptExecutionResultAsyncHandler;
			typedef Outcome<Error, Model::GetNodeGroupResult> GetNodeGroupOutcome;
			typedef std::future<GetNodeGroupOutcome> GetNodeGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetNodeGroupRequest&, const GetNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::GetOnAckClusterResult> GetOnAckClusterOutcome;
			typedef std::future<GetOnAckClusterOutcome> GetOnAckClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetOnAckClusterRequest&, const GetOnAckClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOnAckClusterAsyncHandler;
			typedef Outcome<Error, Model::GetOnKubeClusterResult> GetOnKubeClusterOutcome;
			typedef std::future<GetOnKubeClusterOutcome> GetOnKubeClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetOnKubeClusterRequest&, const GetOnKubeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOnKubeClusterAsyncHandler;
			typedef Outcome<Error, Model::GetOnKubeClusterResourceQuotaResult> GetOnKubeClusterResourceQuotaOutcome;
			typedef std::future<GetOnKubeClusterResourceQuotaOutcome> GetOnKubeClusterResourceQuotaOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetOnKubeClusterResourceQuotaRequest&, const GetOnKubeClusterResourceQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOnKubeClusterResourceQuotaAsyncHandler;
			typedef Outcome<Error, Model::GetOnKubeClusterResourceUsageResult> GetOnKubeClusterResourceUsageOutcome;
			typedef std::future<GetOnKubeClusterResourceUsageOutcome> GetOnKubeClusterResourceUsageOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetOnKubeClusterResourceUsageRequest&, const GetOnKubeClusterResourceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOnKubeClusterResourceUsageAsyncHandler;
			typedef Outcome<Error, Model::GetOperationResult> GetOperationOutcome;
			typedef std::future<GetOperationOutcome> GetOperationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetOperationRequest&, const GetOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOperationAsyncHandler;
			typedef Outcome<Error, Model::GetScalingGroupResult> GetScalingGroupOutcome;
			typedef std::future<GetScalingGroupOutcome> GetScalingGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetScalingGroupRequest&, const GetScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::IncreaseClusterDiskResult> IncreaseClusterDiskOutcome;
			typedef std::future<IncreaseClusterDiskOutcome> IncreaseClusterDiskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::IncreaseClusterDiskRequest&, const IncreaseClusterDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IncreaseClusterDiskAsyncHandler;
			typedef Outcome<Error, Model::IncreaseNodesResult> IncreaseNodesOutcome;
			typedef std::future<IncreaseNodesOutcome> IncreaseNodesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::IncreaseNodesRequest&, const IncreaseNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IncreaseNodesAsyncHandler;
			typedef Outcome<Error, Model::JoinResourceGroupResult> JoinResourceGroupOutcome;
			typedef std::future<JoinResourceGroupOutcome> JoinResourceGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::JoinResourceGroupRequest&, const JoinResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationConfigFilesResult> ListApplicationConfigFilesOutcome;
			typedef std::future<ListApplicationConfigFilesOutcome> ListApplicationConfigFilesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListApplicationConfigFilesRequest&, const ListApplicationConfigFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationConfigFilesAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationConfigHistoryResult> ListApplicationConfigHistoryOutcome;
			typedef std::future<ListApplicationConfigHistoryOutcome> ListApplicationConfigHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListApplicationConfigHistoryRequest&, const ListApplicationConfigHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationConfigHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationConfigsResult> ListApplicationConfigsOutcome;
			typedef std::future<ListApplicationConfigsOutcome> ListApplicationConfigsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListApplicationConfigsRequest&, const ListApplicationConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsResult> ListApplicationsOutcome;
			typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListApplicationsRequest&, const ListApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListAutoScalingActivitiesResult> ListAutoScalingActivitiesOutcome;
			typedef std::future<ListAutoScalingActivitiesOutcome> ListAutoScalingActivitiesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListAutoScalingActivitiesRequest&, const ListAutoScalingActivitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAutoScalingActivitiesAsyncHandler;
			typedef Outcome<Error, Model::ListAutoScalingMetricsResult> ListAutoScalingMetricsOutcome;
			typedef std::future<ListAutoScalingMetricsOutcome> ListAutoScalingMetricsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListAutoScalingMetricsRequest&, const ListAutoScalingMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAutoScalingMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListAutoScalingPoliciesResult> ListAutoScalingPoliciesOutcome;
			typedef std::future<ListAutoScalingPoliciesOutcome> ListAutoScalingPoliciesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListAutoScalingPoliciesRequest&, const ListAutoScalingPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAutoScalingPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListAutoScalingRulesResult> ListAutoScalingRulesOutcome;
			typedef std::future<ListAutoScalingRulesOutcome> ListAutoScalingRulesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListAutoScalingRulesRequest&, const ListAutoScalingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAutoScalingRulesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterScriptsResult> ListClusterScriptsOutcome;
			typedef std::future<ListClusterScriptsOutcome> ListClusterScriptsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterScriptsRequest&, const ListClusterScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterScriptsAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::ListClusters2Result> ListClusters2Outcome;
			typedef std::future<ListClusters2Outcome> ListClusters2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusters2Request&, const ListClusters2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusters2AsyncHandler;
			typedef Outcome<Error, Model::ListComponentHealthResult> ListComponentHealthOutcome;
			typedef std::future<ListComponentHealthOutcome> ListComponentHealthOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListComponentHealthRequest&, const ListComponentHealthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListComponentHealthAsyncHandler;
			typedef Outcome<Error, Model::ListComponentInstancesResult> ListComponentInstancesOutcome;
			typedef std::future<ListComponentInstancesOutcome> ListComponentInstancesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListComponentInstancesRequest&, const ListComponentInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListComponentInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListComponentsResult> ListComponentsOutcome;
			typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListComponentsRequest&, const ListComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListComponentsAsyncHandler;
			typedef Outcome<Error, Model::ListNodeGroupsResult> ListNodeGroupsOutcome;
			typedef std::future<ListNodeGroupsOutcome> ListNodeGroupsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListNodeGroupsRequest&, const ListNodeGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListNodesResult> ListNodesOutcome;
			typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListNodesRequest&, const ListNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesAsyncHandler;
			typedef Outcome<Error, Model::ListNodesv3Result> ListNodesv3Outcome;
			typedef std::future<ListNodesv3Outcome> ListNodesv3OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListNodesv3Request&, const ListNodesv3Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesv3AsyncHandler;
			typedef Outcome<Error, Model::ListOnAckClustersResult> ListOnAckClustersOutcome;
			typedef std::future<ListOnAckClustersOutcome> ListOnAckClustersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListOnAckClustersRequest&, const ListOnAckClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOnAckClustersAsyncHandler;
			typedef Outcome<Error, Model::ListOnAckComponentsResult> ListOnAckComponentsOutcome;
			typedef std::future<ListOnAckComponentsOutcome> ListOnAckComponentsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListOnAckComponentsRequest&, const ListOnAckComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOnAckComponentsAsyncHandler;
			typedef Outcome<Error, Model::ListOnKubeClusterDedicatedNodesResult> ListOnKubeClusterDedicatedNodesOutcome;
			typedef std::future<ListOnKubeClusterDedicatedNodesOutcome> ListOnKubeClusterDedicatedNodesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListOnKubeClusterDedicatedNodesRequest&, const ListOnKubeClusterDedicatedNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOnKubeClusterDedicatedNodesAsyncHandler;
			typedef Outcome<Error, Model::ListOnKubeClusterInspectionResultsResult> ListOnKubeClusterInspectionResultsOutcome;
			typedef std::future<ListOnKubeClusterInspectionResultsOutcome> ListOnKubeClusterInspectionResultsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListOnKubeClusterInspectionResultsRequest&, const ListOnKubeClusterInspectionResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOnKubeClusterInspectionResultsAsyncHandler;
			typedef Outcome<Error, Model::ListOnKubeClustersResult> ListOnKubeClustersOutcome;
			typedef std::future<ListOnKubeClustersOutcome> ListOnKubeClustersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListOnKubeClustersRequest&, const ListOnKubeClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOnKubeClustersAsyncHandler;
			typedef Outcome<Error, Model::ListOnKubeComponentsResult> ListOnKubeComponentsOutcome;
			typedef std::future<ListOnKubeComponentsOutcome> ListOnKubeComponentsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListOnKubeComponentsRequest&, const ListOnKubeComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOnKubeComponentsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceHealthInspectionResult> ListResourceHealthInspectionOutcome;
			typedef std::future<ListResourceHealthInspectionOutcome> ListResourceHealthInspectionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListResourceHealthInspectionRequest&, const ListResourceHealthInspectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceHealthInspectionAsyncHandler;
			typedef Outcome<Error, Model::ListScalingActivitiesResult> ListScalingActivitiesOutcome;
			typedef std::future<ListScalingActivitiesOutcome> ListScalingActivitiesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingActivitiesRequest&, const ListScalingActivitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingActivitiesAsyncHandler;
			typedef Outcome<Error, Model::ListScalingGroupsResult> ListScalingGroupsOutcome;
			typedef std::future<ListScalingGroupsOutcome> ListScalingGroupsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingGroupsRequest&, const ListScalingGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListScalingMetricsResult> ListScalingMetricsOutcome;
			typedef std::future<ListScalingMetricsOutcome> ListScalingMetricsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingMetricsRequest&, const ListScalingMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ReleaseOnKubeClusterResult> ReleaseOnKubeClusterOutcome;
			typedef std::future<ReleaseOnKubeClusterOutcome> ReleaseOnKubeClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseOnKubeClusterRequest&, const ReleaseOnKubeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseOnKubeClusterAsyncHandler;
			typedef Outcome<Error, Model::RunApplicationActionResult> RunApplicationActionOutcome;
			typedef std::future<RunApplicationActionOutcome> RunApplicationActionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunApplicationActionRequest&, const RunApplicationActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunApplicationActionAsyncHandler;
			typedef Outcome<Error, Model::RunScalingActionResult> RunScalingActionOutcome;
			typedef std::future<RunScalingActionOutcome> RunScalingActionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunScalingActionRequest&, const RunScalingActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunScalingActionAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesSystemTagsResult> TagResourcesSystemTagsOutcome;
			typedef std::future<TagResourcesSystemTagsOutcome> TagResourcesSystemTagsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::TagResourcesSystemTagsRequest&, const TagResourcesSystemTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesSystemTagsAsyncHandler;
			typedef Outcome<Error, Model::TerminateOperationResult> TerminateOperationOutcome;
			typedef std::future<TerminateOperationOutcome> TerminateOperationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::TerminateOperationRequest&, const TerminateOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateOperationAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesSystemTagsResult> UntagResourcesSystemTagsOutcome;
			typedef std::future<UntagResourcesSystemTagsOutcome> UntagResourcesSystemTagsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UntagResourcesSystemTagsRequest&, const UntagResourcesSystemTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesSystemTagsAsyncHandler;
			typedef Outcome<Error, Model::UpdateAckClusterNodePoolsResult> UpdateAckClusterNodePoolsOutcome;
			typedef std::future<UpdateAckClusterNodePoolsOutcome> UpdateAckClusterNodePoolsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateAckClusterNodePoolsRequest&, const UpdateAckClusterNodePoolsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAckClusterNodePoolsAsyncHandler;
			typedef Outcome<Error, Model::UpdateAckClusterNodesResult> UpdateAckClusterNodesOutcome;
			typedef std::future<UpdateAckClusterNodesOutcome> UpdateAckClusterNodesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateAckClusterNodesRequest&, const UpdateAckClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAckClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationConfigsResult> UpdateApplicationConfigsOutcome;
			typedef std::future<UpdateApplicationConfigsOutcome> UpdateApplicationConfigsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateApplicationConfigsRequest&, const UpdateApplicationConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationConfigsAsyncHandler;
			typedef Outcome<Error, Model::UpdateAutoScalingRuleResult> UpdateAutoScalingRuleOutcome;
			typedef std::future<UpdateAutoScalingRuleOutcome> UpdateAutoScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateAutoScalingRuleRequest&, const UpdateAutoScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAutoScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterAttributeResult> UpdateClusterAttributeOutcome;
			typedef std::future<UpdateClusterAttributeOutcome> UpdateClusterAttributeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateClusterAttributeRequest&, const UpdateClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterScriptResult> UpdateClusterScriptOutcome;
			typedef std::future<UpdateClusterScriptOutcome> UpdateClusterScriptOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateClusterScriptRequest&, const UpdateClusterScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterScriptAsyncHandler;
			typedef Outcome<Error, Model::UpdateOnKubeClusterDedicatedNodePoolsResult> UpdateOnKubeClusterDedicatedNodePoolsOutcome;
			typedef std::future<UpdateOnKubeClusterDedicatedNodePoolsOutcome> UpdateOnKubeClusterDedicatedNodePoolsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateOnKubeClusterDedicatedNodePoolsRequest&, const UpdateOnKubeClusterDedicatedNodePoolsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOnKubeClusterDedicatedNodePoolsAsyncHandler;
			typedef Outcome<Error, Model::UpdateOnKubeClusterDedicatedNodesResult> UpdateOnKubeClusterDedicatedNodesOutcome;
			typedef std::future<UpdateOnKubeClusterDedicatedNodesOutcome> UpdateOnKubeClusterDedicatedNodesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateOnKubeClusterDedicatedNodesRequest&, const UpdateOnKubeClusterDedicatedNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOnKubeClusterDedicatedNodesAsyncHandler;
			typedef Outcome<Error, Model::UpdateScalingGroupResult> UpdateScalingGroupOutcome;
			typedef std::future<UpdateScalingGroupOutcome> UpdateScalingGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateScalingGroupRequest&, const UpdateScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScalingGroupAsyncHandler;

			EmrClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EmrClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EmrClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EmrClient();
			AddApplicationOutcome addApplication(const Model::AddApplicationRequest &request)const;
			void addApplicationAsync(const Model::AddApplicationRequest& request, const AddApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddApplicationOutcomeCallable addApplicationCallable(const Model::AddApplicationRequest& request) const;
			AddApplicationsOutcome addApplications(const Model::AddApplicationsRequest &request)const;
			void addApplicationsAsync(const Model::AddApplicationsRequest& request, const AddApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddApplicationsOutcomeCallable addApplicationsCallable(const Model::AddApplicationsRequest& request) const;
			CancelOperationOrdersOutcome cancelOperationOrders(const Model::CancelOperationOrdersRequest &request)const;
			void cancelOperationOrdersAsync(const Model::CancelOperationOrdersRequest& request, const CancelOperationOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOperationOrdersOutcomeCallable cancelOperationOrdersCallable(const Model::CancelOperationOrdersRequest& request) const;
			CreateAutoScalingPolicyOutcome createAutoScalingPolicy(const Model::CreateAutoScalingPolicyRequest &request)const;
			void createAutoScalingPolicyAsync(const Model::CreateAutoScalingPolicyRequest& request, const CreateAutoScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAutoScalingPolicyOutcomeCallable createAutoScalingPolicyCallable(const Model::CreateAutoScalingPolicyRequest& request) const;
			CreateAutoScalingRuleOutcome createAutoScalingRule(const Model::CreateAutoScalingRuleRequest &request)const;
			void createAutoScalingRuleAsync(const Model::CreateAutoScalingRuleRequest& request, const CreateAutoScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAutoScalingRuleOutcomeCallable createAutoScalingRuleCallable(const Model::CreateAutoScalingRuleRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateClusterScriptOutcome createClusterScript(const Model::CreateClusterScriptRequest &request)const;
			void createClusterScriptAsync(const Model::CreateClusterScriptRequest& request, const CreateClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterScriptOutcomeCallable createClusterScriptCallable(const Model::CreateClusterScriptRequest& request) const;
			CreateNodeGroupOutcome createNodeGroup(const Model::CreateNodeGroupRequest &request)const;
			void createNodeGroupAsync(const Model::CreateNodeGroupRequest& request, const CreateNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNodeGroupOutcomeCallable createNodeGroupCallable(const Model::CreateNodeGroupRequest& request) const;
			CreateOnAckClusterOutcome createOnAckCluster(const Model::CreateOnAckClusterRequest &request)const;
			void createOnAckClusterAsync(const Model::CreateOnAckClusterRequest& request, const CreateOnAckClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOnAckClusterOutcomeCallable createOnAckClusterCallable(const Model::CreateOnAckClusterRequest& request) const;
			CreateOnKubeClusterOutcome createOnKubeCluster(const Model::CreateOnKubeClusterRequest &request)const;
			void createOnKubeClusterAsync(const Model::CreateOnKubeClusterRequest& request, const CreateOnKubeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOnKubeClusterOutcomeCallable createOnKubeClusterCallable(const Model::CreateOnKubeClusterRequest& request) const;
			CreateScalingGroupOutcome createScalingGroup(const Model::CreateScalingGroupRequest &request)const;
			void createScalingGroupAsync(const Model::CreateScalingGroupRequest& request, const CreateScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingGroupOutcomeCallable createScalingGroupCallable(const Model::CreateScalingGroupRequest& request) const;
			DecreaseNodesOutcome decreaseNodes(const Model::DecreaseNodesRequest &request)const;
			void decreaseNodesAsync(const Model::DecreaseNodesRequest& request, const DecreaseNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecreaseNodesOutcomeCallable decreaseNodesCallable(const Model::DecreaseNodesRequest& request) const;
			DeleteAutoScalingPolicyOutcome deleteAutoScalingPolicy(const Model::DeleteAutoScalingPolicyRequest &request)const;
			void deleteAutoScalingPolicyAsync(const Model::DeleteAutoScalingPolicyRequest& request, const DeleteAutoScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoScalingPolicyOutcomeCallable deleteAutoScalingPolicyCallable(const Model::DeleteAutoScalingPolicyRequest& request) const;
			DeleteAutoScalingRuleOutcome deleteAutoScalingRule(const Model::DeleteAutoScalingRuleRequest &request)const;
			void deleteAutoScalingRuleAsync(const Model::DeleteAutoScalingRuleRequest& request, const DeleteAutoScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoScalingRuleOutcomeCallable deleteAutoScalingRuleCallable(const Model::DeleteAutoScalingRuleRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteClusterScriptOutcome deleteClusterScript(const Model::DeleteClusterScriptRequest &request)const;
			void deleteClusterScriptAsync(const Model::DeleteClusterScriptRequest& request, const DeleteClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterScriptOutcomeCallable deleteClusterScriptCallable(const Model::DeleteClusterScriptRequest& request) const;
			DeleteNodeGroupOutcome deleteNodeGroup(const Model::DeleteNodeGroupRequest &request)const;
			void deleteNodeGroupAsync(const Model::DeleteNodeGroupRequest& request, const DeleteNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNodeGroupOutcomeCallable deleteNodeGroupCallable(const Model::DeleteNodeGroupRequest& request) const;
			DeleteOnAckClusterOutcome deleteOnAckCluster(const Model::DeleteOnAckClusterRequest &request)const;
			void deleteOnAckClusterAsync(const Model::DeleteOnAckClusterRequest& request, const DeleteOnAckClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOnAckClusterOutcomeCallable deleteOnAckClusterCallable(const Model::DeleteOnAckClusterRequest& request) const;
			DeleteScalingGroupOutcome deleteScalingGroup(const Model::DeleteScalingGroupRequest &request)const;
			void deleteScalingGroupAsync(const Model::DeleteScalingGroupRequest& request, const DeleteScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScalingGroupOutcomeCallable deleteScalingGroupCallable(const Model::DeleteScalingGroupRequest& request) const;
			DisableAutoScalingPolicyOutcome disableAutoScalingPolicy(const Model::DisableAutoScalingPolicyRequest &request)const;
			void disableAutoScalingPolicyAsync(const Model::DisableAutoScalingPolicyRequest& request, const DisableAutoScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAutoScalingPolicyOutcomeCallable disableAutoScalingPolicyCallable(const Model::DisableAutoScalingPolicyRequest& request) const;
			EnableAutoScalingPolicyOutcome enableAutoScalingPolicy(const Model::EnableAutoScalingPolicyRequest &request)const;
			void enableAutoScalingPolicyAsync(const Model::EnableAutoScalingPolicyRequest& request, const EnableAutoScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAutoScalingPolicyOutcomeCallable enableAutoScalingPolicyCallable(const Model::EnableAutoScalingPolicyRequest& request) const;
			GetApplicationOutcome getApplication(const Model::GetApplicationRequest &request)const;
			void getApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationOutcomeCallable getApplicationCallable(const Model::GetApplicationRequest& request) const;
			GetClusterOutcome getCluster(const Model::GetClusterRequest &request)const;
			void getClusterAsync(const Model::GetClusterRequest& request, const GetClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterOutcomeCallable getClusterCallable(const Model::GetClusterRequest& request) const;
			GetClusterScriptExecutionResultOutcome getClusterScriptExecutionResult(const Model::GetClusterScriptExecutionResultRequest &request)const;
			void getClusterScriptExecutionResultAsync(const Model::GetClusterScriptExecutionResultRequest& request, const GetClusterScriptExecutionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterScriptExecutionResultOutcomeCallable getClusterScriptExecutionResultCallable(const Model::GetClusterScriptExecutionResultRequest& request) const;
			GetNodeGroupOutcome getNodeGroup(const Model::GetNodeGroupRequest &request)const;
			void getNodeGroupAsync(const Model::GetNodeGroupRequest& request, const GetNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeGroupOutcomeCallable getNodeGroupCallable(const Model::GetNodeGroupRequest& request) const;
			GetOnAckClusterOutcome getOnAckCluster(const Model::GetOnAckClusterRequest &request)const;
			void getOnAckClusterAsync(const Model::GetOnAckClusterRequest& request, const GetOnAckClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOnAckClusterOutcomeCallable getOnAckClusterCallable(const Model::GetOnAckClusterRequest& request) const;
			GetOnKubeClusterOutcome getOnKubeCluster(const Model::GetOnKubeClusterRequest &request)const;
			void getOnKubeClusterAsync(const Model::GetOnKubeClusterRequest& request, const GetOnKubeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOnKubeClusterOutcomeCallable getOnKubeClusterCallable(const Model::GetOnKubeClusterRequest& request) const;
			GetOnKubeClusterResourceQuotaOutcome getOnKubeClusterResourceQuota(const Model::GetOnKubeClusterResourceQuotaRequest &request)const;
			void getOnKubeClusterResourceQuotaAsync(const Model::GetOnKubeClusterResourceQuotaRequest& request, const GetOnKubeClusterResourceQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOnKubeClusterResourceQuotaOutcomeCallable getOnKubeClusterResourceQuotaCallable(const Model::GetOnKubeClusterResourceQuotaRequest& request) const;
			GetOnKubeClusterResourceUsageOutcome getOnKubeClusterResourceUsage(const Model::GetOnKubeClusterResourceUsageRequest &request)const;
			void getOnKubeClusterResourceUsageAsync(const Model::GetOnKubeClusterResourceUsageRequest& request, const GetOnKubeClusterResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOnKubeClusterResourceUsageOutcomeCallable getOnKubeClusterResourceUsageCallable(const Model::GetOnKubeClusterResourceUsageRequest& request) const;
			GetOperationOutcome getOperation(const Model::GetOperationRequest &request)const;
			void getOperationAsync(const Model::GetOperationRequest& request, const GetOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOperationOutcomeCallable getOperationCallable(const Model::GetOperationRequest& request) const;
			GetScalingGroupOutcome getScalingGroup(const Model::GetScalingGroupRequest &request)const;
			void getScalingGroupAsync(const Model::GetScalingGroupRequest& request, const GetScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScalingGroupOutcomeCallable getScalingGroupCallable(const Model::GetScalingGroupRequest& request) const;
			IncreaseClusterDiskOutcome increaseClusterDisk(const Model::IncreaseClusterDiskRequest &request)const;
			void increaseClusterDiskAsync(const Model::IncreaseClusterDiskRequest& request, const IncreaseClusterDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IncreaseClusterDiskOutcomeCallable increaseClusterDiskCallable(const Model::IncreaseClusterDiskRequest& request) const;
			IncreaseNodesOutcome increaseNodes(const Model::IncreaseNodesRequest &request)const;
			void increaseNodesAsync(const Model::IncreaseNodesRequest& request, const IncreaseNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IncreaseNodesOutcomeCallable increaseNodesCallable(const Model::IncreaseNodesRequest& request) const;
			JoinResourceGroupOutcome joinResourceGroup(const Model::JoinResourceGroupRequest &request)const;
			void joinResourceGroupAsync(const Model::JoinResourceGroupRequest& request, const JoinResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinResourceGroupOutcomeCallable joinResourceGroupCallable(const Model::JoinResourceGroupRequest& request) const;
			ListApplicationConfigFilesOutcome listApplicationConfigFiles(const Model::ListApplicationConfigFilesRequest &request)const;
			void listApplicationConfigFilesAsync(const Model::ListApplicationConfigFilesRequest& request, const ListApplicationConfigFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationConfigFilesOutcomeCallable listApplicationConfigFilesCallable(const Model::ListApplicationConfigFilesRequest& request) const;
			ListApplicationConfigHistoryOutcome listApplicationConfigHistory(const Model::ListApplicationConfigHistoryRequest &request)const;
			void listApplicationConfigHistoryAsync(const Model::ListApplicationConfigHistoryRequest& request, const ListApplicationConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationConfigHistoryOutcomeCallable listApplicationConfigHistoryCallable(const Model::ListApplicationConfigHistoryRequest& request) const;
			ListApplicationConfigsOutcome listApplicationConfigs(const Model::ListApplicationConfigsRequest &request)const;
			void listApplicationConfigsAsync(const Model::ListApplicationConfigsRequest& request, const ListApplicationConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationConfigsOutcomeCallable listApplicationConfigsCallable(const Model::ListApplicationConfigsRequest& request) const;
			ListApplicationsOutcome listApplications(const Model::ListApplicationsRequest &request)const;
			void listApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsOutcomeCallable listApplicationsCallable(const Model::ListApplicationsRequest& request) const;
			ListAutoScalingActivitiesOutcome listAutoScalingActivities(const Model::ListAutoScalingActivitiesRequest &request)const;
			void listAutoScalingActivitiesAsync(const Model::ListAutoScalingActivitiesRequest& request, const ListAutoScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAutoScalingActivitiesOutcomeCallable listAutoScalingActivitiesCallable(const Model::ListAutoScalingActivitiesRequest& request) const;
			ListAutoScalingMetricsOutcome listAutoScalingMetrics(const Model::ListAutoScalingMetricsRequest &request)const;
			void listAutoScalingMetricsAsync(const Model::ListAutoScalingMetricsRequest& request, const ListAutoScalingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAutoScalingMetricsOutcomeCallable listAutoScalingMetricsCallable(const Model::ListAutoScalingMetricsRequest& request) const;
			ListAutoScalingPoliciesOutcome listAutoScalingPolicies(const Model::ListAutoScalingPoliciesRequest &request)const;
			void listAutoScalingPoliciesAsync(const Model::ListAutoScalingPoliciesRequest& request, const ListAutoScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAutoScalingPoliciesOutcomeCallable listAutoScalingPoliciesCallable(const Model::ListAutoScalingPoliciesRequest& request) const;
			ListAutoScalingRulesOutcome listAutoScalingRules(const Model::ListAutoScalingRulesRequest &request)const;
			void listAutoScalingRulesAsync(const Model::ListAutoScalingRulesRequest& request, const ListAutoScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAutoScalingRulesOutcomeCallable listAutoScalingRulesCallable(const Model::ListAutoScalingRulesRequest& request) const;
			ListClusterScriptsOutcome listClusterScripts(const Model::ListClusterScriptsRequest &request)const;
			void listClusterScriptsAsync(const Model::ListClusterScriptsRequest& request, const ListClusterScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterScriptsOutcomeCallable listClusterScriptsCallable(const Model::ListClusterScriptsRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			ListClusters2Outcome listClusters2(const Model::ListClusters2Request &request)const;
			void listClusters2Async(const Model::ListClusters2Request& request, const ListClusters2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusters2OutcomeCallable listClusters2Callable(const Model::ListClusters2Request& request) const;
			ListComponentHealthOutcome listComponentHealth(const Model::ListComponentHealthRequest &request)const;
			void listComponentHealthAsync(const Model::ListComponentHealthRequest& request, const ListComponentHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListComponentHealthOutcomeCallable listComponentHealthCallable(const Model::ListComponentHealthRequest& request) const;
			ListComponentInstancesOutcome listComponentInstances(const Model::ListComponentInstancesRequest &request)const;
			void listComponentInstancesAsync(const Model::ListComponentInstancesRequest& request, const ListComponentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListComponentInstancesOutcomeCallable listComponentInstancesCallable(const Model::ListComponentInstancesRequest& request) const;
			ListComponentsOutcome listComponents(const Model::ListComponentsRequest &request)const;
			void listComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListComponentsOutcomeCallable listComponentsCallable(const Model::ListComponentsRequest& request) const;
			ListNodeGroupsOutcome listNodeGroups(const Model::ListNodeGroupsRequest &request)const;
			void listNodeGroupsAsync(const Model::ListNodeGroupsRequest& request, const ListNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeGroupsOutcomeCallable listNodeGroupsCallable(const Model::ListNodeGroupsRequest& request) const;
			ListNodesOutcome listNodes(const Model::ListNodesRequest &request)const;
			void listNodesAsync(const Model::ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesOutcomeCallable listNodesCallable(const Model::ListNodesRequest& request) const;
			ListNodesv3Outcome listNodesv3(const Model::ListNodesv3Request &request)const;
			void listNodesv3Async(const Model::ListNodesv3Request& request, const ListNodesv3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesv3OutcomeCallable listNodesv3Callable(const Model::ListNodesv3Request& request) const;
			ListOnAckClustersOutcome listOnAckClusters(const Model::ListOnAckClustersRequest &request)const;
			void listOnAckClustersAsync(const Model::ListOnAckClustersRequest& request, const ListOnAckClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOnAckClustersOutcomeCallable listOnAckClustersCallable(const Model::ListOnAckClustersRequest& request) const;
			ListOnAckComponentsOutcome listOnAckComponents(const Model::ListOnAckComponentsRequest &request)const;
			void listOnAckComponentsAsync(const Model::ListOnAckComponentsRequest& request, const ListOnAckComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOnAckComponentsOutcomeCallable listOnAckComponentsCallable(const Model::ListOnAckComponentsRequest& request) const;
			ListOnKubeClusterDedicatedNodesOutcome listOnKubeClusterDedicatedNodes(const Model::ListOnKubeClusterDedicatedNodesRequest &request)const;
			void listOnKubeClusterDedicatedNodesAsync(const Model::ListOnKubeClusterDedicatedNodesRequest& request, const ListOnKubeClusterDedicatedNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOnKubeClusterDedicatedNodesOutcomeCallable listOnKubeClusterDedicatedNodesCallable(const Model::ListOnKubeClusterDedicatedNodesRequest& request) const;
			ListOnKubeClusterInspectionResultsOutcome listOnKubeClusterInspectionResults(const Model::ListOnKubeClusterInspectionResultsRequest &request)const;
			void listOnKubeClusterInspectionResultsAsync(const Model::ListOnKubeClusterInspectionResultsRequest& request, const ListOnKubeClusterInspectionResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOnKubeClusterInspectionResultsOutcomeCallable listOnKubeClusterInspectionResultsCallable(const Model::ListOnKubeClusterInspectionResultsRequest& request) const;
			ListOnKubeClustersOutcome listOnKubeClusters(const Model::ListOnKubeClustersRequest &request)const;
			void listOnKubeClustersAsync(const Model::ListOnKubeClustersRequest& request, const ListOnKubeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOnKubeClustersOutcomeCallable listOnKubeClustersCallable(const Model::ListOnKubeClustersRequest& request) const;
			ListOnKubeComponentsOutcome listOnKubeComponents(const Model::ListOnKubeComponentsRequest &request)const;
			void listOnKubeComponentsAsync(const Model::ListOnKubeComponentsRequest& request, const ListOnKubeComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOnKubeComponentsOutcomeCallable listOnKubeComponentsCallable(const Model::ListOnKubeComponentsRequest& request) const;
			ListResourceHealthInspectionOutcome listResourceHealthInspection(const Model::ListResourceHealthInspectionRequest &request)const;
			void listResourceHealthInspectionAsync(const Model::ListResourceHealthInspectionRequest& request, const ListResourceHealthInspectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceHealthInspectionOutcomeCallable listResourceHealthInspectionCallable(const Model::ListResourceHealthInspectionRequest& request) const;
			ListScalingActivitiesOutcome listScalingActivities(const Model::ListScalingActivitiesRequest &request)const;
			void listScalingActivitiesAsync(const Model::ListScalingActivitiesRequest& request, const ListScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingActivitiesOutcomeCallable listScalingActivitiesCallable(const Model::ListScalingActivitiesRequest& request) const;
			ListScalingGroupsOutcome listScalingGroups(const Model::ListScalingGroupsRequest &request)const;
			void listScalingGroupsAsync(const Model::ListScalingGroupsRequest& request, const ListScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingGroupsOutcomeCallable listScalingGroupsCallable(const Model::ListScalingGroupsRequest& request) const;
			ListScalingMetricsOutcome listScalingMetrics(const Model::ListScalingMetricsRequest &request)const;
			void listScalingMetricsAsync(const Model::ListScalingMetricsRequest& request, const ListScalingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingMetricsOutcomeCallable listScalingMetricsCallable(const Model::ListScalingMetricsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ReleaseOnKubeClusterOutcome releaseOnKubeCluster(const Model::ReleaseOnKubeClusterRequest &request)const;
			void releaseOnKubeClusterAsync(const Model::ReleaseOnKubeClusterRequest& request, const ReleaseOnKubeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseOnKubeClusterOutcomeCallable releaseOnKubeClusterCallable(const Model::ReleaseOnKubeClusterRequest& request) const;
			RunApplicationActionOutcome runApplicationAction(const Model::RunApplicationActionRequest &request)const;
			void runApplicationActionAsync(const Model::RunApplicationActionRequest& request, const RunApplicationActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunApplicationActionOutcomeCallable runApplicationActionCallable(const Model::RunApplicationActionRequest& request) const;
			RunScalingActionOutcome runScalingAction(const Model::RunScalingActionRequest &request)const;
			void runScalingActionAsync(const Model::RunScalingActionRequest& request, const RunScalingActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunScalingActionOutcomeCallable runScalingActionCallable(const Model::RunScalingActionRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TagResourcesSystemTagsOutcome tagResourcesSystemTags(const Model::TagResourcesSystemTagsRequest &request)const;
			void tagResourcesSystemTagsAsync(const Model::TagResourcesSystemTagsRequest& request, const TagResourcesSystemTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesSystemTagsOutcomeCallable tagResourcesSystemTagsCallable(const Model::TagResourcesSystemTagsRequest& request) const;
			TerminateOperationOutcome terminateOperation(const Model::TerminateOperationRequest &request)const;
			void terminateOperationAsync(const Model::TerminateOperationRequest& request, const TerminateOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminateOperationOutcomeCallable terminateOperationCallable(const Model::TerminateOperationRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UntagResourcesSystemTagsOutcome untagResourcesSystemTags(const Model::UntagResourcesSystemTagsRequest &request)const;
			void untagResourcesSystemTagsAsync(const Model::UntagResourcesSystemTagsRequest& request, const UntagResourcesSystemTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesSystemTagsOutcomeCallable untagResourcesSystemTagsCallable(const Model::UntagResourcesSystemTagsRequest& request) const;
			UpdateAckClusterNodePoolsOutcome updateAckClusterNodePools(const Model::UpdateAckClusterNodePoolsRequest &request)const;
			void updateAckClusterNodePoolsAsync(const Model::UpdateAckClusterNodePoolsRequest& request, const UpdateAckClusterNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAckClusterNodePoolsOutcomeCallable updateAckClusterNodePoolsCallable(const Model::UpdateAckClusterNodePoolsRequest& request) const;
			UpdateAckClusterNodesOutcome updateAckClusterNodes(const Model::UpdateAckClusterNodesRequest &request)const;
			void updateAckClusterNodesAsync(const Model::UpdateAckClusterNodesRequest& request, const UpdateAckClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAckClusterNodesOutcomeCallable updateAckClusterNodesCallable(const Model::UpdateAckClusterNodesRequest& request) const;
			UpdateApplicationConfigsOutcome updateApplicationConfigs(const Model::UpdateApplicationConfigsRequest &request)const;
			void updateApplicationConfigsAsync(const Model::UpdateApplicationConfigsRequest& request, const UpdateApplicationConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationConfigsOutcomeCallable updateApplicationConfigsCallable(const Model::UpdateApplicationConfigsRequest& request) const;
			UpdateAutoScalingRuleOutcome updateAutoScalingRule(const Model::UpdateAutoScalingRuleRequest &request)const;
			void updateAutoScalingRuleAsync(const Model::UpdateAutoScalingRuleRequest& request, const UpdateAutoScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAutoScalingRuleOutcomeCallable updateAutoScalingRuleCallable(const Model::UpdateAutoScalingRuleRequest& request) const;
			UpdateClusterAttributeOutcome updateClusterAttribute(const Model::UpdateClusterAttributeRequest &request)const;
			void updateClusterAttributeAsync(const Model::UpdateClusterAttributeRequest& request, const UpdateClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterAttributeOutcomeCallable updateClusterAttributeCallable(const Model::UpdateClusterAttributeRequest& request) const;
			UpdateClusterScriptOutcome updateClusterScript(const Model::UpdateClusterScriptRequest &request)const;
			void updateClusterScriptAsync(const Model::UpdateClusterScriptRequest& request, const UpdateClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterScriptOutcomeCallable updateClusterScriptCallable(const Model::UpdateClusterScriptRequest& request) const;
			UpdateOnKubeClusterDedicatedNodePoolsOutcome updateOnKubeClusterDedicatedNodePools(const Model::UpdateOnKubeClusterDedicatedNodePoolsRequest &request)const;
			void updateOnKubeClusterDedicatedNodePoolsAsync(const Model::UpdateOnKubeClusterDedicatedNodePoolsRequest& request, const UpdateOnKubeClusterDedicatedNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOnKubeClusterDedicatedNodePoolsOutcomeCallable updateOnKubeClusterDedicatedNodePoolsCallable(const Model::UpdateOnKubeClusterDedicatedNodePoolsRequest& request) const;
			UpdateOnKubeClusterDedicatedNodesOutcome updateOnKubeClusterDedicatedNodes(const Model::UpdateOnKubeClusterDedicatedNodesRequest &request)const;
			void updateOnKubeClusterDedicatedNodesAsync(const Model::UpdateOnKubeClusterDedicatedNodesRequest& request, const UpdateOnKubeClusterDedicatedNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOnKubeClusterDedicatedNodesOutcomeCallable updateOnKubeClusterDedicatedNodesCallable(const Model::UpdateOnKubeClusterDedicatedNodesRequest& request) const;
			UpdateScalingGroupOutcome updateScalingGroup(const Model::UpdateScalingGroupRequest &request)const;
			void updateScalingGroupAsync(const Model::UpdateScalingGroupRequest& request, const UpdateScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateScalingGroupOutcomeCallable updateScalingGroupCallable(const Model::UpdateScalingGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EMR_EMRCLIENT_H_
