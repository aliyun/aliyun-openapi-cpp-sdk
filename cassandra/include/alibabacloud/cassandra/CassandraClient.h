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

#ifndef ALIBABACLOUD_CASSANDRA_CASSANDRACLIENT_H_
#define ALIBABACLOUD_CASSANDRA_CASSANDRACLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CassandraExport.h"
#include "model/AllocatePublicContactPointsRequest.h"
#include "model/AllocatePublicContactPointsResult.h"
#include "model/CreateBackupPlanRequest.h"
#include "model/CreateBackupPlanResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateDataCenterRequest.h"
#include "model/CreateDataCenterResult.h"
#include "model/DeleteBackupPlanRequest.h"
#include "model/DeleteBackupPlanResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteDataCenterRequest.h"
#include "model/DeleteDataCenterResult.h"
#include "model/DeleteNodeToolExecutionHistoryRequest.h"
#include "model/DeleteNodeToolExecutionHistoryResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeBackupRequest.h"
#include "model/DescribeBackupResult.h"
#include "model/DescribeBackupPlanRequest.h"
#include "model/DescribeBackupPlanResult.h"
#include "model/DescribeBackupPlansRequest.h"
#include "model/DescribeBackupPlansResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeClusterRequest.h"
#include "model/DescribeClusterResult.h"
#include "model/DescribeClusterDashboardRequest.h"
#include "model/DescribeClusterDashboardResult.h"
#include "model/DescribeClusterStatusRequest.h"
#include "model/DescribeClusterStatusResult.h"
#include "model/DescribeClustersRequest.h"
#include "model/DescribeClustersResult.h"
#include "model/DescribeContactPointsRequest.h"
#include "model/DescribeContactPointsResult.h"
#include "model/DescribeDataCenterRequest.h"
#include "model/DescribeDataCenterResult.h"
#include "model/DescribeDataCentersRequest.h"
#include "model/DescribeDataCentersResult.h"
#include "model/DescribeDeletedClustersRequest.h"
#include "model/DescribeDeletedClustersResult.h"
#include "model/DescribeInstanceTypeRequest.h"
#include "model/DescribeInstanceTypeResult.h"
#include "model/DescribeIpWhitelistRequest.h"
#include "model/DescribeIpWhitelistResult.h"
#include "model/DescribeIpWhitelistGroupsRequest.h"
#include "model/DescribeIpWhitelistGroupsResult.h"
#include "model/DescribeNodeToolExecutionHistoriesRequest.h"
#include "model/DescribeNodeToolExecutionHistoriesResult.h"
#include "model/DescribeNodeToolExecutionHistoryRequest.h"
#include "model/DescribeNodeToolExecutionHistoryResult.h"
#include "model/DescribeParameterModificationHistoriesRequest.h"
#include "model/DescribeParameterModificationHistoriesResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSecurityGroupsRequest.h"
#include "model/DescribeSecurityGroupsResult.h"
#include "model/ExecuteNodeToolRequest.h"
#include "model/ExecuteNodeToolResult.h"
#include "model/GetCmsUrlRequest.h"
#include "model/GetCmsUrlResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagsRequest.h"
#include "model/ListTagsResult.h"
#include "model/ModifyAccountPasswordRequest.h"
#include "model/ModifyAccountPasswordResult.h"
#include "model/ModifyBackupPlanRequest.h"
#include "model/ModifyBackupPlanResult.h"
#include "model/ModifyClusterRequest.h"
#include "model/ModifyClusterResult.h"
#include "model/ModifyDataCenterRequest.h"
#include "model/ModifyDataCenterResult.h"
#include "model/ModifyInstanceMaintainTimeRequest.h"
#include "model/ModifyInstanceMaintainTimeResult.h"
#include "model/ModifyInstanceTypeRequest.h"
#include "model/ModifyInstanceTypeResult.h"
#include "model/ModifyIpWhitelistRequest.h"
#include "model/ModifyIpWhitelistResult.h"
#include "model/ModifyIpWhitelistGroupRequest.h"
#include "model/ModifyIpWhitelistGroupResult.h"
#include "model/ModifyParameterRequest.h"
#include "model/ModifyParameterResult.h"
#include "model/ModifySecurityGroupsRequest.h"
#include "model/ModifySecurityGroupsResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/PurgeClusterRequest.h"
#include "model/PurgeClusterResult.h"
#include "model/RebootClusterRequest.h"
#include "model/RebootClusterResult.h"
#include "model/ReleasePublicContactPointsRequest.h"
#include "model/ReleasePublicContactPointsResult.h"
#include "model/ResizeDiskSizeRequest.h"
#include "model/ResizeDiskSizeResult.h"
#include "model/ResizeNodeCountRequest.h"
#include "model/ResizeNodeCountResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnTagResourcesRequest.h"
#include "model/UnTagResourcesResult.h"
#include "model/UpgradeClusterVersionRequest.h"
#include "model/UpgradeClusterVersionResult.h"


namespace AlibabaCloud
{
	namespace Cassandra
	{
		class ALIBABACLOUD_CASSANDRA_EXPORT CassandraClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocatePublicContactPointsResult> AllocatePublicContactPointsOutcome;
			typedef std::future<AllocatePublicContactPointsOutcome> AllocatePublicContactPointsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::AllocatePublicContactPointsRequest&, const AllocatePublicContactPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocatePublicContactPointsAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupPlanResult> CreateBackupPlanOutcome;
			typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::CreateBackupPlanRequest&, const CreateBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDataCenterResult> CreateDataCenterOutcome;
			typedef std::future<CreateDataCenterOutcome> CreateDataCenterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::CreateDataCenterRequest&, const CreateDataCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataCenterAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupPlanResult> DeleteBackupPlanOutcome;
			typedef std::future<DeleteBackupPlanOutcome> DeleteBackupPlanOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DeleteBackupPlanRequest&, const DeleteBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataCenterResult> DeleteDataCenterOutcome;
			typedef std::future<DeleteDataCenterOutcome> DeleteDataCenterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DeleteDataCenterRequest&, const DeleteDataCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataCenterAsyncHandler;
			typedef Outcome<Error, Model::DeleteNodeToolExecutionHistoryResult> DeleteNodeToolExecutionHistoryOutcome;
			typedef std::future<DeleteNodeToolExecutionHistoryOutcome> DeleteNodeToolExecutionHistoryOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DeleteNodeToolExecutionHistoryRequest&, const DeleteNodeToolExecutionHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodeToolExecutionHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupResult> DescribeBackupOutcome;
			typedef std::future<DescribeBackupOutcome> DescribeBackupOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeBackupRequest&, const DescribeBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPlanResult> DescribeBackupPlanOutcome;
			typedef std::future<DescribeBackupPlanOutcome> DescribeBackupPlanOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeBackupPlanRequest&, const DescribeBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPlansResult> DescribeBackupPlansOutcome;
			typedef std::future<DescribeBackupPlansOutcome> DescribeBackupPlansOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeBackupPlansRequest&, const DescribeBackupPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlansAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResult> DescribeClusterOutcome;
			typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeClusterRequest&, const DescribeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterDashboardResult> DescribeClusterDashboardOutcome;
			typedef std::future<DescribeClusterDashboardOutcome> DescribeClusterDashboardOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeClusterDashboardRequest&, const DescribeClusterDashboardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDashboardAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterStatusResult> DescribeClusterStatusOutcome;
			typedef std::future<DescribeClusterStatusOutcome> DescribeClusterStatusOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeClusterStatusRequest&, const DescribeClusterStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeClustersResult> DescribeClustersOutcome;
			typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeClustersRequest&, const DescribeClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactPointsResult> DescribeContactPointsOutcome;
			typedef std::future<DescribeContactPointsOutcome> DescribeContactPointsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeContactPointsRequest&, const DescribeContactPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactPointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataCenterResult> DescribeDataCenterOutcome;
			typedef std::future<DescribeDataCenterOutcome> DescribeDataCenterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeDataCenterRequest&, const DescribeDataCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCenterAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataCentersResult> DescribeDataCentersOutcome;
			typedef std::future<DescribeDataCentersOutcome> DescribeDataCentersOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeDataCentersRequest&, const DescribeDataCentersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCentersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeletedClustersResult> DescribeDeletedClustersOutcome;
			typedef std::future<DescribeDeletedClustersOutcome> DescribeDeletedClustersOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeDeletedClustersRequest&, const DescribeDeletedClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeletedClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTypeResult> DescribeInstanceTypeOutcome;
			typedef std::future<DescribeInstanceTypeOutcome> DescribeInstanceTypeOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeInstanceTypeRequest&, const DescribeInstanceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpWhitelistResult> DescribeIpWhitelistOutcome;
			typedef std::future<DescribeIpWhitelistOutcome> DescribeIpWhitelistOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeIpWhitelistRequest&, const DescribeIpWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpWhitelistGroupsResult> DescribeIpWhitelistGroupsOutcome;
			typedef std::future<DescribeIpWhitelistGroupsOutcome> DescribeIpWhitelistGroupsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeIpWhitelistGroupsRequest&, const DescribeIpWhitelistGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpWhitelistGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeToolExecutionHistoriesResult> DescribeNodeToolExecutionHistoriesOutcome;
			typedef std::future<DescribeNodeToolExecutionHistoriesOutcome> DescribeNodeToolExecutionHistoriesOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeNodeToolExecutionHistoriesRequest&, const DescribeNodeToolExecutionHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeToolExecutionHistoriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeToolExecutionHistoryResult> DescribeNodeToolExecutionHistoryOutcome;
			typedef std::future<DescribeNodeToolExecutionHistoryOutcome> DescribeNodeToolExecutionHistoryOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeNodeToolExecutionHistoryRequest&, const DescribeNodeToolExecutionHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeToolExecutionHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterModificationHistoriesResult> DescribeParameterModificationHistoriesOutcome;
			typedef std::future<DescribeParameterModificationHistoriesOutcome> DescribeParameterModificationHistoriesOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeParameterModificationHistoriesRequest&, const DescribeParameterModificationHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterModificationHistoriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupsResult> DescribeSecurityGroupsOutcome;
			typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::DescribeSecurityGroupsRequest&, const DescribeSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::ExecuteNodeToolResult> ExecuteNodeToolOutcome;
			typedef std::future<ExecuteNodeToolOutcome> ExecuteNodeToolOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ExecuteNodeToolRequest&, const ExecuteNodeToolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteNodeToolAsyncHandler;
			typedef Outcome<Error, Model::GetCmsUrlResult> GetCmsUrlOutcome;
			typedef std::future<GetCmsUrlOutcome> GetCmsUrlOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::GetCmsUrlRequest&, const GetCmsUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCmsUrlAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagsResult> ListTagsOutcome;
			typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ListTagsRequest&, const ListTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPasswordResult> ModifyAccountPasswordOutcome;
			typedef std::future<ModifyAccountPasswordOutcome> ModifyAccountPasswordOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyAccountPasswordRequest&, const ModifyAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPlanResult> ModifyBackupPlanOutcome;
			typedef std::future<ModifyBackupPlanOutcome> ModifyBackupPlanOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyBackupPlanRequest&, const ModifyBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterResult> ModifyClusterOutcome;
			typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyClusterRequest&, const ModifyClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataCenterResult> ModifyDataCenterOutcome;
			typedef std::future<ModifyDataCenterOutcome> ModifyDataCenterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyDataCenterRequest&, const ModifyDataCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataCenterAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMaintainTimeResult> ModifyInstanceMaintainTimeOutcome;
			typedef std::future<ModifyInstanceMaintainTimeOutcome> ModifyInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyInstanceMaintainTimeRequest&, const ModifyInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceTypeResult> ModifyInstanceTypeOutcome;
			typedef std::future<ModifyInstanceTypeOutcome> ModifyInstanceTypeOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyInstanceTypeRequest&, const ModifyInstanceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpWhitelistResult> ModifyIpWhitelistOutcome;
			typedef std::future<ModifyIpWhitelistOutcome> ModifyIpWhitelistOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyIpWhitelistRequest&, const ModifyIpWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpWhitelistGroupResult> ModifyIpWhitelistGroupOutcome;
			typedef std::future<ModifyIpWhitelistGroupOutcome> ModifyIpWhitelistGroupOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyIpWhitelistGroupRequest&, const ModifyIpWhitelistGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpWhitelistGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyParameterResult> ModifyParameterOutcome;
			typedef std::future<ModifyParameterOutcome> ModifyParameterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifyParameterRequest&, const ModifyParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupsResult> ModifySecurityGroupsOutcome;
			typedef std::future<ModifySecurityGroupsOutcome> ModifySecurityGroupsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ModifySecurityGroupsRequest&, const ModifySecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::PurgeClusterResult> PurgeClusterOutcome;
			typedef std::future<PurgeClusterOutcome> PurgeClusterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::PurgeClusterRequest&, const PurgeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PurgeClusterAsyncHandler;
			typedef Outcome<Error, Model::RebootClusterResult> RebootClusterOutcome;
			typedef std::future<RebootClusterOutcome> RebootClusterOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::RebootClusterRequest&, const RebootClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootClusterAsyncHandler;
			typedef Outcome<Error, Model::ReleasePublicContactPointsResult> ReleasePublicContactPointsOutcome;
			typedef std::future<ReleasePublicContactPointsOutcome> ReleasePublicContactPointsOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ReleasePublicContactPointsRequest&, const ReleasePublicContactPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicContactPointsAsyncHandler;
			typedef Outcome<Error, Model::ResizeDiskSizeResult> ResizeDiskSizeOutcome;
			typedef std::future<ResizeDiskSizeOutcome> ResizeDiskSizeOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ResizeDiskSizeRequest&, const ResizeDiskSizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskSizeAsyncHandler;
			typedef Outcome<Error, Model::ResizeNodeCountResult> ResizeNodeCountOutcome;
			typedef std::future<ResizeNodeCountOutcome> ResizeNodeCountOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::ResizeNodeCountRequest&, const ResizeNodeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeNodeCountAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnTagResourcesResult> UnTagResourcesOutcome;
			typedef std::future<UnTagResourcesOutcome> UnTagResourcesOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::UnTagResourcesRequest&, const UnTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpgradeClusterVersionResult> UpgradeClusterVersionOutcome;
			typedef std::future<UpgradeClusterVersionOutcome> UpgradeClusterVersionOutcomeCallable;
			typedef std::function<void(const CassandraClient*, const Model::UpgradeClusterVersionRequest&, const UpgradeClusterVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterVersionAsyncHandler;

			CassandraClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CassandraClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CassandraClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CassandraClient();
			AllocatePublicContactPointsOutcome allocatePublicContactPoints(const Model::AllocatePublicContactPointsRequest &request)const;
			void allocatePublicContactPointsAsync(const Model::AllocatePublicContactPointsRequest& request, const AllocatePublicContactPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocatePublicContactPointsOutcomeCallable allocatePublicContactPointsCallable(const Model::AllocatePublicContactPointsRequest& request) const;
			CreateBackupPlanOutcome createBackupPlan(const Model::CreateBackupPlanRequest &request)const;
			void createBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupPlanOutcomeCallable createBackupPlanCallable(const Model::CreateBackupPlanRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateDataCenterOutcome createDataCenter(const Model::CreateDataCenterRequest &request)const;
			void createDataCenterAsync(const Model::CreateDataCenterRequest& request, const CreateDataCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataCenterOutcomeCallable createDataCenterCallable(const Model::CreateDataCenterRequest& request) const;
			DeleteBackupPlanOutcome deleteBackupPlan(const Model::DeleteBackupPlanRequest &request)const;
			void deleteBackupPlanAsync(const Model::DeleteBackupPlanRequest& request, const DeleteBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupPlanOutcomeCallable deleteBackupPlanCallable(const Model::DeleteBackupPlanRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteDataCenterOutcome deleteDataCenter(const Model::DeleteDataCenterRequest &request)const;
			void deleteDataCenterAsync(const Model::DeleteDataCenterRequest& request, const DeleteDataCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataCenterOutcomeCallable deleteDataCenterCallable(const Model::DeleteDataCenterRequest& request) const;
			DeleteNodeToolExecutionHistoryOutcome deleteNodeToolExecutionHistory(const Model::DeleteNodeToolExecutionHistoryRequest &request)const;
			void deleteNodeToolExecutionHistoryAsync(const Model::DeleteNodeToolExecutionHistoryRequest& request, const DeleteNodeToolExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNodeToolExecutionHistoryOutcomeCallable deleteNodeToolExecutionHistoryCallable(const Model::DeleteNodeToolExecutionHistoryRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeBackupOutcome describeBackup(const Model::DescribeBackupRequest &request)const;
			void describeBackupAsync(const Model::DescribeBackupRequest& request, const DescribeBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupOutcomeCallable describeBackupCallable(const Model::DescribeBackupRequest& request) const;
			DescribeBackupPlanOutcome describeBackupPlan(const Model::DescribeBackupPlanRequest &request)const;
			void describeBackupPlanAsync(const Model::DescribeBackupPlanRequest& request, const DescribeBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPlanOutcomeCallable describeBackupPlanCallable(const Model::DescribeBackupPlanRequest& request) const;
			DescribeBackupPlansOutcome describeBackupPlans(const Model::DescribeBackupPlansRequest &request)const;
			void describeBackupPlansAsync(const Model::DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPlansOutcomeCallable describeBackupPlansCallable(const Model::DescribeBackupPlansRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeClusterOutcome describeCluster(const Model::DescribeClusterRequest &request)const;
			void describeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOutcomeCallable describeClusterCallable(const Model::DescribeClusterRequest& request) const;
			DescribeClusterDashboardOutcome describeClusterDashboard(const Model::DescribeClusterDashboardRequest &request)const;
			void describeClusterDashboardAsync(const Model::DescribeClusterDashboardRequest& request, const DescribeClusterDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterDashboardOutcomeCallable describeClusterDashboardCallable(const Model::DescribeClusterDashboardRequest& request) const;
			DescribeClusterStatusOutcome describeClusterStatus(const Model::DescribeClusterStatusRequest &request)const;
			void describeClusterStatusAsync(const Model::DescribeClusterStatusRequest& request, const DescribeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterStatusOutcomeCallable describeClusterStatusCallable(const Model::DescribeClusterStatusRequest& request) const;
			DescribeClustersOutcome describeClusters(const Model::DescribeClustersRequest &request)const;
			void describeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClustersOutcomeCallable describeClustersCallable(const Model::DescribeClustersRequest& request) const;
			DescribeContactPointsOutcome describeContactPoints(const Model::DescribeContactPointsRequest &request)const;
			void describeContactPointsAsync(const Model::DescribeContactPointsRequest& request, const DescribeContactPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactPointsOutcomeCallable describeContactPointsCallable(const Model::DescribeContactPointsRequest& request) const;
			DescribeDataCenterOutcome describeDataCenter(const Model::DescribeDataCenterRequest &request)const;
			void describeDataCenterAsync(const Model::DescribeDataCenterRequest& request, const DescribeDataCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataCenterOutcomeCallable describeDataCenterCallable(const Model::DescribeDataCenterRequest& request) const;
			DescribeDataCentersOutcome describeDataCenters(const Model::DescribeDataCentersRequest &request)const;
			void describeDataCentersAsync(const Model::DescribeDataCentersRequest& request, const DescribeDataCentersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataCentersOutcomeCallable describeDataCentersCallable(const Model::DescribeDataCentersRequest& request) const;
			DescribeDeletedClustersOutcome describeDeletedClusters(const Model::DescribeDeletedClustersRequest &request)const;
			void describeDeletedClustersAsync(const Model::DescribeDeletedClustersRequest& request, const DescribeDeletedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeletedClustersOutcomeCallable describeDeletedClustersCallable(const Model::DescribeDeletedClustersRequest& request) const;
			DescribeInstanceTypeOutcome describeInstanceType(const Model::DescribeInstanceTypeRequest &request)const;
			void describeInstanceTypeAsync(const Model::DescribeInstanceTypeRequest& request, const DescribeInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTypeOutcomeCallable describeInstanceTypeCallable(const Model::DescribeInstanceTypeRequest& request) const;
			DescribeIpWhitelistOutcome describeIpWhitelist(const Model::DescribeIpWhitelistRequest &request)const;
			void describeIpWhitelistAsync(const Model::DescribeIpWhitelistRequest& request, const DescribeIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpWhitelistOutcomeCallable describeIpWhitelistCallable(const Model::DescribeIpWhitelistRequest& request) const;
			DescribeIpWhitelistGroupsOutcome describeIpWhitelistGroups(const Model::DescribeIpWhitelistGroupsRequest &request)const;
			void describeIpWhitelistGroupsAsync(const Model::DescribeIpWhitelistGroupsRequest& request, const DescribeIpWhitelistGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpWhitelistGroupsOutcomeCallable describeIpWhitelistGroupsCallable(const Model::DescribeIpWhitelistGroupsRequest& request) const;
			DescribeNodeToolExecutionHistoriesOutcome describeNodeToolExecutionHistories(const Model::DescribeNodeToolExecutionHistoriesRequest &request)const;
			void describeNodeToolExecutionHistoriesAsync(const Model::DescribeNodeToolExecutionHistoriesRequest& request, const DescribeNodeToolExecutionHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeToolExecutionHistoriesOutcomeCallable describeNodeToolExecutionHistoriesCallable(const Model::DescribeNodeToolExecutionHistoriesRequest& request) const;
			DescribeNodeToolExecutionHistoryOutcome describeNodeToolExecutionHistory(const Model::DescribeNodeToolExecutionHistoryRequest &request)const;
			void describeNodeToolExecutionHistoryAsync(const Model::DescribeNodeToolExecutionHistoryRequest& request, const DescribeNodeToolExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeToolExecutionHistoryOutcomeCallable describeNodeToolExecutionHistoryCallable(const Model::DescribeNodeToolExecutionHistoryRequest& request) const;
			DescribeParameterModificationHistoriesOutcome describeParameterModificationHistories(const Model::DescribeParameterModificationHistoriesRequest &request)const;
			void describeParameterModificationHistoriesAsync(const Model::DescribeParameterModificationHistoriesRequest& request, const DescribeParameterModificationHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterModificationHistoriesOutcomeCallable describeParameterModificationHistoriesCallable(const Model::DescribeParameterModificationHistoriesRequest& request) const;
			DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
			void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSecurityGroupsOutcome describeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request)const;
			void describeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupsOutcomeCallable describeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request) const;
			ExecuteNodeToolOutcome executeNodeTool(const Model::ExecuteNodeToolRequest &request)const;
			void executeNodeToolAsync(const Model::ExecuteNodeToolRequest& request, const ExecuteNodeToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteNodeToolOutcomeCallable executeNodeToolCallable(const Model::ExecuteNodeToolRequest& request) const;
			GetCmsUrlOutcome getCmsUrl(const Model::GetCmsUrlRequest &request)const;
			void getCmsUrlAsync(const Model::GetCmsUrlRequest& request, const GetCmsUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCmsUrlOutcomeCallable getCmsUrlCallable(const Model::GetCmsUrlRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagsOutcome listTags(const Model::ListTagsRequest &request)const;
			void listTagsAsync(const Model::ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsOutcomeCallable listTagsCallable(const Model::ListTagsRequest& request) const;
			ModifyAccountPasswordOutcome modifyAccountPassword(const Model::ModifyAccountPasswordRequest &request)const;
			void modifyAccountPasswordAsync(const Model::ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPasswordOutcomeCallable modifyAccountPasswordCallable(const Model::ModifyAccountPasswordRequest& request) const;
			ModifyBackupPlanOutcome modifyBackupPlan(const Model::ModifyBackupPlanRequest &request)const;
			void modifyBackupPlanAsync(const Model::ModifyBackupPlanRequest& request, const ModifyBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPlanOutcomeCallable modifyBackupPlanCallable(const Model::ModifyBackupPlanRequest& request) const;
			ModifyClusterOutcome modifyCluster(const Model::ModifyClusterRequest &request)const;
			void modifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterOutcomeCallable modifyClusterCallable(const Model::ModifyClusterRequest& request) const;
			ModifyDataCenterOutcome modifyDataCenter(const Model::ModifyDataCenterRequest &request)const;
			void modifyDataCenterAsync(const Model::ModifyDataCenterRequest& request, const ModifyDataCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataCenterOutcomeCallable modifyDataCenterCallable(const Model::ModifyDataCenterRequest& request) const;
			ModifyInstanceMaintainTimeOutcome modifyInstanceMaintainTime(const Model::ModifyInstanceMaintainTimeRequest &request)const;
			void modifyInstanceMaintainTimeAsync(const Model::ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMaintainTimeOutcomeCallable modifyInstanceMaintainTimeCallable(const Model::ModifyInstanceMaintainTimeRequest& request) const;
			ModifyInstanceTypeOutcome modifyInstanceType(const Model::ModifyInstanceTypeRequest &request)const;
			void modifyInstanceTypeAsync(const Model::ModifyInstanceTypeRequest& request, const ModifyInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceTypeOutcomeCallable modifyInstanceTypeCallable(const Model::ModifyInstanceTypeRequest& request) const;
			ModifyIpWhitelistOutcome modifyIpWhitelist(const Model::ModifyIpWhitelistRequest &request)const;
			void modifyIpWhitelistAsync(const Model::ModifyIpWhitelistRequest& request, const ModifyIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpWhitelistOutcomeCallable modifyIpWhitelistCallable(const Model::ModifyIpWhitelistRequest& request) const;
			ModifyIpWhitelistGroupOutcome modifyIpWhitelistGroup(const Model::ModifyIpWhitelistGroupRequest &request)const;
			void modifyIpWhitelistGroupAsync(const Model::ModifyIpWhitelistGroupRequest& request, const ModifyIpWhitelistGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpWhitelistGroupOutcomeCallable modifyIpWhitelistGroupCallable(const Model::ModifyIpWhitelistGroupRequest& request) const;
			ModifyParameterOutcome modifyParameter(const Model::ModifyParameterRequest &request)const;
			void modifyParameterAsync(const Model::ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParameterOutcomeCallable modifyParameterCallable(const Model::ModifyParameterRequest& request) const;
			ModifySecurityGroupsOutcome modifySecurityGroups(const Model::ModifySecurityGroupsRequest &request)const;
			void modifySecurityGroupsAsync(const Model::ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupsOutcomeCallable modifySecurityGroupsCallable(const Model::ModifySecurityGroupsRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			PurgeClusterOutcome purgeCluster(const Model::PurgeClusterRequest &request)const;
			void purgeClusterAsync(const Model::PurgeClusterRequest& request, const PurgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PurgeClusterOutcomeCallable purgeClusterCallable(const Model::PurgeClusterRequest& request) const;
			RebootClusterOutcome rebootCluster(const Model::RebootClusterRequest &request)const;
			void rebootClusterAsync(const Model::RebootClusterRequest& request, const RebootClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootClusterOutcomeCallable rebootClusterCallable(const Model::RebootClusterRequest& request) const;
			ReleasePublicContactPointsOutcome releasePublicContactPoints(const Model::ReleasePublicContactPointsRequest &request)const;
			void releasePublicContactPointsAsync(const Model::ReleasePublicContactPointsRequest& request, const ReleasePublicContactPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleasePublicContactPointsOutcomeCallable releasePublicContactPointsCallable(const Model::ReleasePublicContactPointsRequest& request) const;
			ResizeDiskSizeOutcome resizeDiskSize(const Model::ResizeDiskSizeRequest &request)const;
			void resizeDiskSizeAsync(const Model::ResizeDiskSizeRequest& request, const ResizeDiskSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeDiskSizeOutcomeCallable resizeDiskSizeCallable(const Model::ResizeDiskSizeRequest& request) const;
			ResizeNodeCountOutcome resizeNodeCount(const Model::ResizeNodeCountRequest &request)const;
			void resizeNodeCountAsync(const Model::ResizeNodeCountRequest& request, const ResizeNodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeNodeCountOutcomeCallable resizeNodeCountCallable(const Model::ResizeNodeCountRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnTagResourcesOutcome unTagResources(const Model::UnTagResourcesRequest &request)const;
			void unTagResourcesAsync(const Model::UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagResourcesOutcomeCallable unTagResourcesCallable(const Model::UnTagResourcesRequest& request) const;
			UpgradeClusterVersionOutcome upgradeClusterVersion(const Model::UpgradeClusterVersionRequest &request)const;
			void upgradeClusterVersionAsync(const Model::UpgradeClusterVersionRequest& request, const UpgradeClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeClusterVersionOutcomeCallable upgradeClusterVersionCallable(const Model::UpgradeClusterVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CASSANDRA_CASSANDRACLIENT_H_
